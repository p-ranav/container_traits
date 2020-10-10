#!/usr/bin/env python3

from jinja2 import Template

tm = Template('''#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_{{function_name}}: std::false_type {};

template <typename C, typename Ret, typename... Args>
struct has_{{function_name}}<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) -> typename std::is_same<
      decltype(std::declval<T>().{{function_name}}(std::declval<Args>()...)),
      Ret
      >::type; // attempt to call it and see if the return type is correct

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
''')

function_list = [
  # "operator=",
  "assign",
  # Iterators
  "begin",
  "cbegin",
  "end",
  "cend",
  "rbegin",
  "crbegin",
  "rend",
  "crend",
  # Element access
  "at",
  # "operator[]",
  "data",
  "front",
  "back",
  # Capacity
  "empty",
  "size",
  "max_size",
  "resize",
  "capacity",
  "reserve",
  "shrink_to_fit",
  # Modifiers
  "clear",
  "insert",
  "insert_or_assign",
  "emplace",
  "emplace_hint",
  "try_emplace",
  "erase",
  "push_front",
  "emplace_front",
  "pop_front",
  "push_back",
  "emplace_back",
  "pop_back",
  "swap",
  "merge",
  "extract",
  # List operations
  "splice",
  "remove",
  "remove_if",
  "reverse",
  "unqiue",
  "sort",
  # Lookup
  "find",
  "contains",
  "lower_bound",
  "upper_bound",
  "equal_range",
  # Observers
  "key_comp",
  "value_comp",
  "hash_function",
  "key_eq",
  # Allocator
  "get_allocator"
]

file_list = []

for function in function_list:
  function_name = function
  file_name = "has_" + function_name + ".h"
  file_list.append(file_name)
  file_contents = tm.render(function_name = function_name)
  with open(file_name, "w") as file:
    file.write(file_contents)

file_list = ['"include/container_traits/' + file + '",' for file in file_list]

for file in file_list:
  print(file)