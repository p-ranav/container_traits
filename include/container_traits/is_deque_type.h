#pragma once
#include <deque>

namespace container_traits {

template <typename T>
struct is_deque_type: std::false_type {};

template <class T, class Allocator>
struct is_deque_type<std::deque<T, Allocator>> : std::true_type {};

}