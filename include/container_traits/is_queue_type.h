#pragma once
#include <queue>

namespace container_traits {

template <typename T>
struct is_queue_type: std::false_type {};

template <class T, class Container>
struct is_queue_type<std::queue<T, Container>> : std::true_type {};

}