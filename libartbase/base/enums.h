/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_LIBARTBASE_BASE_ENUMS_H_
#define ART_LIBARTBASE_BASE_ENUMS_H_

#include <cstddef>
#include <cstdint>
#include <iosfwd>

namespace art {

enum class PointerSize : uint32_t {
  k32 = 4,
  k64 = 8
};

std::ostream& operator<<(std::ostream& os, const PointerSize& rhs);

static constexpr PointerSize kRuntimePointerSize = sizeof(void*) == 8U
                                                       ? PointerSize::k64
                                                       : PointerSize::k32;

}  // namespace art

#endif  // ART_LIBARTBASE_BASE_ENUMS_H_
