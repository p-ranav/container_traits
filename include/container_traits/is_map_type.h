#pragma once
#include <map>

namespace container_traits {

template <typename T>
struct is_map_type: std::false_type {};

template <class Key, class T, class Compare, class Allocator>
struct is_map_type<std::map<Key, T, Compare, Allocator>> : std::true_type {};

}