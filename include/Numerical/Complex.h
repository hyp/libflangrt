//===--- Complex.h - Complex numbers library --------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBFLANG_NUMERICAL_COMPLEX_H
#define LLVM_LIBFLANG_NUMERICAL_COMPLEX_H

#include "Libflang.h"

struct Complex4 {
  float Re, Im;
};

struct Complex8 {
  double Re, Im;
};

LIBFLANG_ABI Complex8 libflang_cpow(double LHSRe, double LHSIm,
                                    double RHSRe, double RHSIm);
LIBFLANG_ABI Complex4 libflang_cpowf(float LHSRe, float LHSIm,
                                     float RHSRe, float RHSIm);

LIBFLANG_ABI Complex8 libflang_cpowi(double Re, double Im,
                                     int32_t power);
LIBFLANG_ABI Complex4 libflang_cpowif(float Re, float Im,
                                      int32_t power);

// intrinsics

LIBFLANG_ABI double libflang_cabs(double Re, double Im);
LIBFLANG_ABI float  libflang_cabsf(float Re, float Im);

LIBFLANG_ABI Complex8 libflang_csqrt(double Re, double Im);
LIBFLANG_ABI Complex4 libflang_csqrtf(float Re, float Im);

LIBFLANG_ABI Complex8 libflang_cexp(double Re, double Im);
LIBFLANG_ABI Complex4 libflang_cexpf(float Re, float Im);

LIBFLANG_ABI Complex8 libflang_clog(double Re, double Im);
LIBFLANG_ABI Complex4 libflang_clogf(float Re, float Im);

LIBFLANG_ABI Complex8 libflang_csin(double Re, double Im);
LIBFLANG_ABI Complex4 libflang_csinf(float Re, float Im);

LIBFLANG_ABI Complex8 libflang_ccos(double Re, double Im);
LIBFLANG_ABI Complex4 libflang_ccosf(float Re, float Im);

LIBFLANG_ABI Complex8 libflang_ctan(double Re, double Im);
LIBFLANG_ABI Complex4 libflang_ctanf(float Re, float Im);

#endif
