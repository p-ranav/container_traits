#pragma once
#include <set>

namespace container_traits {

template <typename T>
struct is_set_type: std::false_type {};

template <class Key, class Compare, class Allocator>
struct is_set_type<std::set<Key, Compare, Allocator>> : std::true_type {};

}