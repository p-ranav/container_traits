#pragma once
#include <stack>

namespace container_traits {

template <typename T>
struct is_stack_type: std::false_type {};

template <class T, class Container>
struct is_stack_type<std::stack<T, Container>> : std::true_type {};

}