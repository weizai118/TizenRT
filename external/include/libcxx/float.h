/****************************************************************************
 *
 * Copyright 2018 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/
// -*- C++ -*-
//===--------------------------- float.h ----------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_FLOAT_H
#define _LIBCPP_FLOAT_H

/*
    float.h synopsis

Macros:

    FLT_ROUNDS
    FLT_EVAL_METHOD     // C99
    FLT_RADIX

    FLT_MANT_DIG
    DBL_MANT_DIG
    LDBL_MANT_DIG

    DECIMAL_DIG         // C99

    FLT_DIG
    DBL_DIG
    LDBL_DIG

    FLT_MIN_EXP
    DBL_MIN_EXP
    LDBL_MIN_EXP

    FLT_MIN_10_EXP
    DBL_MIN_10_EXP
    LDBL_MIN_10_EXP

    FLT_MAX_EXP
    DBL_MAX_EXP
    LDBL_MAX_EXP

    FLT_MAX_10_EXP
    DBL_MAX_10_EXP
    LDBL_MAX_10_EXP

    FLT_MAX
    DBL_MAX
    LDBL_MAX

    FLT_EPSILON
    DBL_EPSILON
    LDBL_EPSILON

    FLT_MIN
    DBL_MIN
    LDBL_MIN

*/

#include <__config>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#pragma GCC system_header
#endif

#include_next <float.h>

#ifdef __cplusplus

#ifndef FLT_EVAL_METHOD
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#endif

#ifndef DECIMAL_DIG
#define DECIMAL_DIG __DECIMAL_DIG__
#endif

#endif // __cplusplus

#endif  // _LIBCPP_FLOAT_H
