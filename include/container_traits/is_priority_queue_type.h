#pragma once
#include <queue>

namespace container_traits {

template <typename T>
struct is_priority_queue_type: std::false_type {};

template <class T, class Container, class Compare>
struct is_priority_queue_type<std::priority_queue<T, Container, Compare>> : std::true_type {};

}