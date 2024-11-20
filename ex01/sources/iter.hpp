#pragma once

#include <cstddef>

template <typename T, typename Func> void iter(T *arr, size_t len, Func fn) {
  for (size_t i = 0; i < len; ++i) {
    fn(arr[i]);
  }
}
