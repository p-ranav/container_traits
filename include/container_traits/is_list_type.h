#pragma once
#include <list>

namespace container_traits {

template <typename T>
struct is_list_type: std::false_type {};

template <class T, class Allocator>
struct is_list_type<std::list<T, Allocator>> : std::true_type {};

}