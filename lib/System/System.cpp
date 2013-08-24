#include <sys/time.h>
#include <stdint.h>
#include "System/System.h"

// FIXME: windows support.

static timeval programStart;

LIBFLANG_ABI void libflang_sys_init() {
  gettimeofday(&programStart, nullptr);
}

LIBFLANG_ABI float libflang_etime(float *time0, float *time1) {
  timeval stop;
  gettimeofday(&stop, nullptr);
  int64_t diff = stop.tv_usec - programStart.tv_usec;

  *time0 = float(double(diff) / 1000000.0);
  *time1 = 0.0f;
  return *time0 + *time1;
}
