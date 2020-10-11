#pragma once

namespace container_traits {

template<class T, class R = void>  
struct enable_if_type { typedef R type; };

}