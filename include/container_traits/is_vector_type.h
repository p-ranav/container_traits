#pragma once
#include <vector>

namespace container_traits {

template <typename T>
struct is_vector_type: std::false_type {};

template <class T, class Allocator>
struct is_vector_type<std::vector<T, Allocator>> : std::true_type {};

}