#include <complex>
#include "Numerical/Complex.h"

using namespace std;

static inline Complex8 cmplx(complex<double> Value) {
  Complex8 Result = { Value.real(), Value.imag() };
  return Result;
}

static inline Complex4 cmplx(complex<float> Value) {
  Complex4 Result = { Value.real(), Value.imag() };
  return Result;
}

static inline complex<double> generic(double Re, double Im) {
  return complex<double>(Re, Im);
}

static inline complex<float> generic(float Re, float Im) {
  return complex<float>(Re, Im);
}

LIBFLANG_ABI Complex8 libflang_cpow(double LHSRe, double LHSIm,
                                    double RHSRe, double RHSIm) {
  return cmplx(pow(generic(LHSRe, LHSIm),
                   generic(RHSRe, RHSIm)));
}
LIBFLANG_ABI Complex4 libflang_cpowf(float LHSRe, float LHSIm,
                                     float RHSRe, float RHSIm) {
  return cmplx(pow(generic(LHSRe, LHSIm),
                   generic(RHSRe, RHSIm)));
}

LIBFLANG_ABI Complex8 libflang_cpowi(double Re, double Im,
                                     int32_t power) {
  return cmplx(pow(generic(Re, Im), power));
}
LIBFLANG_ABI Complex4 libflang_cpowif(float Re, float Im,
                                      int32_t power) {
  return cmplx(complex<float>(pow(generic(Re, Im), power)));
}

// intrinsics

LIBFLANG_ABI double libflang_cabs(double Re, double Im) {
  return abs(generic(Re, Im));
}
LIBFLANG_ABI float libflang_cabsf(float Re, float Im) {
  return abs(generic(Re, Im));
}

LIBFLANG_ABI Complex8 libflang_csqrt(double Re, double Im) {
  return cmplx(sqrt(generic(Re, Im)));
}
LIBFLANG_ABI Complex4 libflang_csqrtf(float Re, float Im) {
  return cmplx(sqrt(generic(Re, Im)));
}

LIBFLANG_ABI Complex8 libflang_cexp(double Re, double Im) {
  return cmplx(exp(generic(Re, Im)));
}
LIBFLANG_ABI Complex4 libflang_cexpf(float Re, float Im) {
  return cmplx(exp(generic(Re, Im)));
}

LIBFLANG_ABI Complex8 libflang_clog(double Re, double Im) {
  return cmplx(log(generic(Re, Im)));
}
LIBFLANG_ABI Complex4 libflang_clogf(float Re, float Im) {
  return cmplx(log(generic(Re, Im)));
}

LIBFLANG_ABI Complex8 libflang_csin(double Re, double Im) {
  return cmplx(sin(generic(Re, Im)));
}
LIBFLANG_ABI Complex4 libflang_csinf(float Re, float Im) {
  return cmplx(sin(generic(Re, Im)));
}

LIBFLANG_ABI Complex8 libflang_ccos(double Re, double Im) {
  return cmplx(cos(generic(Re, Im)));
}
LIBFLANG_ABI Complex4 libflang_ccosf(float Re, float Im) {
  return cmplx(cos(generic(Re, Im)));
}

LIBFLANG_ABI Complex8 libflang_ctan(double Re, double Im) {
  return cmplx(tan(generic(Re, Im)));
}
LIBFLANG_ABI Complex4 libflang_ctanf(float Re, float Im) {
  return cmplx(tan(generic(Re, Im)));
}
