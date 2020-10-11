#pragma once
#include <forward_list>

namespace container_traits {

template <typename T>
struct is_forward_list_type: std::false_type {};

template <class T, class Allocator>
struct is_forward_list_type<std::forward_list<T, Allocator>> : std::true_type {};

}