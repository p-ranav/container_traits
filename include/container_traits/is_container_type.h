#pragma once
#include <container_traits/is_array_type.h>
#include <container_traits/is_vector_type.h>
#include <container_traits/is_deque_type.h>
#include <container_traits/is_list_type.h>
#include <container_traits/is_forward_list_type.h>
#include <container_traits/is_set_type.h>
#include <container_traits/is_map_type.h>
#include <container_traits/is_multiset_type.h>
#include <container_traits/is_multimap_type.h>
#include <container_traits/is_unordered_set_type.h>
#include <container_traits/is_unordered_map_type.h>
#include <container_traits/is_unordered_multiset_type.h>
#include <container_traits/is_unordered_multimap_type.h>
#include <container_traits/is_stack_type.h>
#include <container_traits/is_queue_type.h>
#include <container_traits/is_priority_queue_type.h>

namespace container_traits {

template <typename> 
struct is_container_type: std::false_type {};

template <typename T, std::size_t N>
struct is_container_type<std::array<T, N>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::vector<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::deque<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::list<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::forward_list<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::set<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::multiset<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::map<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::multimap<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::unordered_set<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::unordered_multiset<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::unordered_map<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::unordered_multimap<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::stack<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::queue<Args...>> : std::true_type {};

template <typename... Args>
struct is_container_type<std::priority_queue<Args...>> : std::true_type {};

}