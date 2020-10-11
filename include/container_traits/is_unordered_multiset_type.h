#pragma once
#include <unordered_set>

namespace container_traits {

template <typename T>
struct is_unordered_multiset_type: std::false_type {};

template <class Key, class Hash, class KeyEqual, class Allocator>
struct is_unordered_multiset_type<std::unordered_multiset<Key, Hash, KeyEqual, Allocator>> : std::true_type {};

}