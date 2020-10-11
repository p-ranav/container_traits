#pragma once
#include <type_traits>
#include <container_traits/enable_if_type.h>

namespace container_traits {

template<class T, class Enable = void>
struct has_reverse_iterator: std::false_type {};

template<class T>
struct has_reverse_iterator<T, typename enable_if_type<typename T::reverse_iterator>::type> : std::true_type{};

}