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