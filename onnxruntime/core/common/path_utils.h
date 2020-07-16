// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "core/common/common.h"
#include "core/common/path_string.h"

namespace onnxruntime {

namespace path_utils {

/** Return a PathString with concatenated args. */
template <typename... Args>
PathString MakePathString(const Args&... args) {
  const std::string str = onnxruntime::MakeString(args...);
  return ToPathString(str);
}

}
}
