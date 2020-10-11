#pragma once
#include <set>

namespace container_traits {

template <typename T>
struct is_multiset_type: std::false_type {};

template <class Key, class Compare, class Allocator>
struct is_multiset_type<std::multiset<Key, Compare, Allocator>> : std::true_type {};

}