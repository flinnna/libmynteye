// Copyright 2018 Slightech Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef MYNTEYE_MYNTEYE_H_
#define MYNTEYE_MYNTEYE_H_
#pragma once

#include "mynteye/global.h"

#ifdef DOXYGEN_WORKING
# define MYNTEYE_API
#else
# ifdef MYNTEYE_EXPORTS
#  define MYNTEYE_API MYNTEYE_DECL_EXPORT
# else
#  define MYNTEYE_API MYNTEYE_DECL_IMPORT
# endif
#endif

#define MYNTEYE_API_VERSION_MAJOR 2
#define MYNTEYE_API_VERSION_MINOR 5
#define MYNTEYE_API_VERSION_PATCH 0

/* MYNTEYE_API_VERSION is (major << 16) + (minor << 8) + patch */
#define MYNTEYE_API_VERSION \
MYNTEYE_API_VERSION_CHECK( \
  MYNTEYE_API_VERSION_MAJOR, \
  MYNTEYE_API_VERSION_MINOR, \
  MYNTEYE_API_VERSION_PATCH \
)

/* Can be used like
 *   #if (MYNTEYE_API_VERSION >= MYNTEYE_API_VERSION_CHECK(2, 0, 0)) */
#define MYNTEYE_API_VERSION_CHECK(major, minor, patch) \
  ((major<<16)|(minor<<8)|(patch))  // NOLINT

/* MYNTEYE_API_VERSION in "X.Y.Z" format */
#define MYNTEYE_API_VERSION_STR (MYNTEYE_STRINGIFY(MYNTEYE_API_VERSION_MAJOR.MYNTEYE_API_VERSION_MINOR.MYNTEYE_API_VERSION_PATCH))  // NOLINT

#define MYNTEYE_NAMESPACE mynteye
#if defined(MYNTEYE_NAMESPACE)
# define MYNTEYE_BEGIN_NAMESPACE namespace MYNTEYE_NAMESPACE {
# define MYNTEYE_END_NAMESPACE }
# define MYNTEYE_USE_NAMESPACE using namespace ::MYNTEYE_NAMESPACE;  // NOLINT
#else
# define MYNTEYE_BEGIN_NAMESPACE
# define MYNTEYE_END_NAMESPACE
# define MYNTEYE_USE_NAMESPACE
#endif

const char MYNTEYE_SDK_ROOT_DIR[] = "/home/cwa/mynt-eye-s-sdk";
const char MYNTEYE_SDK_INSTALL_DIR[] = "/home/cwa/mynt-eye-s-sdk/_install";

MYNTEYE_BEGIN_NAMESPACE

template <typename... T>
void UNUSED(T &&...) {}

MYNTEYE_END_NAMESPACE

#define WITH_API
#define WITH_DEVICE_INFO_REQUIRED
#define WITH_CAM_MODELS
/* #undef WITH_BM_SOBEL_FILTER */

#define WITH_OPENCV
/* #undef WITH_OPENCV2 */
#define WITH_OPENCV3
/* #undef WITH_OPENCV4 */
/* #undef WITH_OPENCV_WORLD */

/* #undef WITH_GLOG */
/* #undef WITH_FILESYSTEM */
/* #undef WITH_BOOST_FILESYSTEM */
/* #undef WITH_NATIVE_FILESYSTEM */

#endif  // MYNTEYE_MYNTEYE_H_
