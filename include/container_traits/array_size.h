#pragma once
#include <array>

template <typename> struct array_size;

template <class T, std::size_t N>
struct array_size<std::array<T, N>> {
  static constexpr std::size_t value = N;
};