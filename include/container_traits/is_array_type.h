#pragma once
#include <array>

namespace container_traits {

template <typename T>
struct is_array_type: std::false_type {};

template <class T, std::size_t N>
struct is_array_type<std::array<T, N>> : std::true_type {};

}