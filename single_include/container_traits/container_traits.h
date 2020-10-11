#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_assign : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_assign<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().assign(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_begin : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_begin<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().begin(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_cbegin : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_cbegin<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().cbegin(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_end : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_end<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().end(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_cend : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_cend<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().cend(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_rbegin : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_rbegin<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().rbegin(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_crbegin : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_crbegin<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().crbegin(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_rend : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_rend<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().rend(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_crend : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_crend<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().crend(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_at : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_at<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().at(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_data : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_data<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().data(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_front : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_front<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().front(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_back : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_back<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().back(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_empty : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_empty<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().empty(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_size : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_size<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().size(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_max_size : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_max_size<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().max_size(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_resize : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_resize<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().resize(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_capacity : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_capacity<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().capacity(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_reserve : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_reserve<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().reserve(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_shrink_to_fit : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_shrink_to_fit<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().shrink_to_fit(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_clear : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_clear<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().clear(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_insert : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_insert<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().insert(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_insert_or_assign : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_insert_or_assign<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().insert_or_assign(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_emplace : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_emplace<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().emplace(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_emplace_hint : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_emplace_hint<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().emplace_hint(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_try_emplace : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_try_emplace<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().try_emplace(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_erase : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_erase<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().erase(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_push_front : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_push_front<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().push_front(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_emplace_front : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_emplace_front<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().emplace_front(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_pop_front : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_pop_front<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().pop_front(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_push_back : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_push_back<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().push_back(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_emplace_back : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_emplace_back<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().emplace_back(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_pop_back : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_pop_back<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().pop_back(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_swap : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_swap<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().swap(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_merge : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_merge<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().merge(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_extract : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_extract<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().extract(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_splice : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_splice<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().splice(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_remove : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_remove<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().remove(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_remove_if : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_remove_if<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().remove_if(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_reverse : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_reverse<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().reverse(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_unqiue : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_unqiue<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().unqiue(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_sort : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_sort<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().sort(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_find : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_find<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().find(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_contains : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_contains<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().contains(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_lower_bound : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_lower_bound<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().lower_bound(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_upper_bound : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_upper_bound<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().upper_bound(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_equal_range : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_equal_range<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().equal_range(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_key_comp : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_key_comp<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().key_comp(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_value_comp : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_value_comp<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().value_comp(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_hash_function : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_hash_function<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().hash_function(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_key_eq : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_key_eq<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().key_eq(std::declval<Args>()...)), Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_get_allocator : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_get_allocator<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().get_allocator(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_assignment_operator : std::false_type {};

template <typename C, typename Ret, typename... Args>
struct has_assignment_operator<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().operator=(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_subscript_operator : std::false_type {};

template <typename C, typename Ret, typename... Args>
struct has_subscript_operator<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().operator[](std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_push : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_push<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().push(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_pop : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_pop<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().pop(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
#pragma once
#include <type_traits>

namespace container_traits {

template <typename, typename T> struct has_top : std::false_type {};

template <typename C, typename Ret, typename... Args> struct has_top<C, Ret(Args...)> {
private:
  template <typename T>
  static constexpr auto check(T *) ->
      typename std::is_same<decltype(std::declval<T>().top(std::declval<Args>()...)),
                            Ret>::type;

  template <typename> static constexpr std::false_type check(...);

  typedef decltype(check<C>(0)) type;

public:
  static constexpr bool value = type::value;
};

} // namespace container_traits
