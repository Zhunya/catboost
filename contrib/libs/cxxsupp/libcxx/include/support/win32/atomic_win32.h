#ifndef _LIBCPP_SUPPORT_WIN32_ATOMIC_WIN32_H
#define _LIBCPP_SUPPORT_WIN32_ATOMIC_WIN32_H

#if !defined(_LIBCPP_MSVCRT)
#error "This header complements Microsoft's C Runtime library, and should not be included otherwise."
#else

#if _LIBCXX_USE_NATIVE_STL
#error "This header is not supposed to be included from inside of native STL."
#endif

#undef std

#define _LIBCXX_USE_NATIVE_STL 1
#include _LIBCXX_NATIVE_HEADER(atomic)
#undef _LIBCXX_USE_NATIVE_STL

namespace msvc_std
{
using std::atomic;
}
#define std Y_STD_NAMESPACE

#endif // _LIBCPP_MSVCRT

#endif // _LIBCPP_SUPPORT_WIN32_ATOMIC_WIN32_H
