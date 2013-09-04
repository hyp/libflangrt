#include "Numerical/Integer.h"

template<typename T>
static T ipow(T x, T y) {
  if(y >= 0) {
    T result = 1;
    for(; y != 0; --y)
      result *= x;
    return result;
  }
  return 0;
}

LIBFLANG_ABI int8_t  libflang_pow_i1_i1(int8_t x, int8_t y) {
  return ipow(x, y);
}

LIBFLANG_ABI int16_t libflang_pow_i2_i2(int16_t x, int16_t y) {
  return ipow(x, y);
}

LIBFLANG_ABI int32_t libflang_pow_i4_i4(int32_t x, int32_t y) {
  return ipow(x, y);
}

LIBFLANG_ABI int64_t libflang_pow_i8_i8(int64_t x, int64_t y) {
  return ipow(x, y);
}

