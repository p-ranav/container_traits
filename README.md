# container_traits

This library provides helper functions that enable compile-time checks for whether STL container types have member functions with specific signatures. 

```cpp
#include "container_traits.h"
using namespace container_traits;

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
  std::cout << vec.size() << ", last = " << vec[5] << "\n";

  auto map = std::map<int, std::string>{{1, "a"}, {2, "b"}, {3, "c"}};
  push_back_or_insert(map, std::make_pair(4, "d"));
  std::cout << map[4] << "\n";
}
```
