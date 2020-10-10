# container_traits

This library provides convenience helper functions that enable compile-time checks for whether STL container types have specific member functions with specific signatures. 

```cpp
#include "container_traits.h"
using namespace container_traits;
#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <map>
#include <list>
#include <array>
#include <string>

int main() {
  std::cout << std::boolalpha;

  // has_{member_function}<Container, MemberFunctionSignature>::value
  
  std::cout << has_push_back<std::vector<int>, void(int&)>::value << "\n";       // true
  std::cout << has_push_back<std::queue<int>, void(const int&)>::value << "\n";  // false

  std::cout << has_push_front<std::vector<int>, void(const int&)>::value << "\n";  // false
  std::cout << has_push_front<std::deque<int>, void(const int&)>::value << "\n";   // true

  std::cout << has_subscript_operator<std::vector<char>, char&(size_t)>::value << "\n"; // true
  std::cout << has_subscript_operator<std::list<char>, char&(size_t)>::value << "\n";   // false

  std::cout << has_at<std::map<int, std::string>, std::string&(const int&)>::value << "\n"; // true

  std::cout << has_find<std::string, size_t(const std::string&, size_t)>::value << "\n"; // true

  std::cout << has_data<std::vector<int>, int*()>::value << "\n";   // true
  std::cout << has_data<std::array<int, 3>, int*()>::value << "\n"; // true
  std::cout << has_data<std::list<int>, int*()>::value << "\n";     // false

}
```

This enables the ability to write functions like `push_back_or_insert` like below.

```cpp
template <typename Container, typename ValueType>
void push_back_or_insert(Container& c, ValueType&& value) {
  if constexpr (has_push_back<Container, void(const ValueType& value)>::value) {
    // has `push_back`
    c.push_back(std::forward<ValueType>(value));
  } else if constexpr (
    has_insert<Container, typename Container::iterator(typename Container::iterator, const ValueType&)>::value &&
    has_end<Container, typename Container::iterator()>::value
  ) {
    // no `push_back` but has `insert`
    c.insert(c.end(), std::forward<ValueType>(value));
  }
}

int main() {
  auto vec = std::vector<int>{1, 2, 3, 4, 5};
  push_back_or_insert(vec, 6);

  auto map = std::map<int, std::string>{{1, "a"}, {2, "b"}, {3, "c"}};
  push_back_or_insert(map, std::make_pair(4, "d"));

  auto deque = std::deque<float>{1.1f, 2.2f, 3.3f};
  push_back_or_insert(deque, 4.4f);
}
```
