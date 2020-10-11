#pragma once
#include <unordered_map>

namespace container_traits {

template <typename T>
struct is_unordered_multimap_type: std::false_type {};

template <class Key, class T, class Hash, class KeyEqual, class Allocator>
struct is_unordered_multimap_type<std::unordered_multimap<Key, T, Hash, KeyEqual, Allocator>> : std::true_type {};

}