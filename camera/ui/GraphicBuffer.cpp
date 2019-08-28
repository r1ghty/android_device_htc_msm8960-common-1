/*
 * Copyright (C) 2016 The CyanogenMod Project
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

#include <string>
#include <ui/Rect.h>
#include <ui/GraphicBufferMapper.h>
#include <ui/GraphicBuffer.h>

// GraphicBuffer(uint32_t inWidth, uint32_t inHeight, PixelFormat inFormat,
//               uint32_t inUsage, std::string requestorName = "<Unknown>");
extern "C" void _ZN7android13GraphicBufferC1EjjijNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(
                                                                                                                  void *(pthis), uint32_t inWidth, uint32_t inHeight, int inFormat,
                                                                                                                  uint32_t inUsage, std::string requestorName);

extern "C" void _ZN7android13GraphicBufferC1Ejjij(void *(pthis), uint32_t inWidth, uint32_t inHeight, int inFormat, uint32_t inUsage) {
    _ZN7android13GraphicBufferC1EjjijNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(
                                                                                                      pthis, inWidth, inHeight, inFormat, inUsage, "<Unknown>");
}

extern "C" void _ZN7android19GraphicBufferMapper9lockYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcr(buffer_handle_t, uint32_t, const android::Rect&, android_ycbcr*);

extern "C" void _ZN7android19GraphicBufferMapper9lockYCbCrEPK13native_handleiRKNS_4RectEP13android_ycbcr(buffer_handle_t handle, int usage, const android::Rect& bounds, android_ycbcr *ycbcr) {
    _ZN7android19GraphicBufferMapper9lockYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcr(handle, static_cast<uint32_t>(usage), bounds, ycbcr);
    }

extern "C" void _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPv(buffer_handle_t, uint32_t, const android::Rect&, void**);

extern "C" void _ZN7android19GraphicBufferMapper4lockEPK13native_handleiRKNS_4RectEPPv(buffer_handle_t handle, int usage, const android::Rect& bounds, void** vaddr) {
    _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPv(handle, static_cast<uint32_t>(usage), bounds, vaddr);
    }

extern "C" void _ZN7android13GraphicBufferC1EjjijjjP13native_handleb(
                                                                     const native_handle_t* handle,
                                                                     android::GraphicBuffer::HandleWrapMethod method,
                                                                     uint32_t width,
                                                                     uint32_t height,
                                                                     int format,
                                                                     uint32_t layerCount,
                                                                     uint64_t usage,
                                                                     uint32_t stride);

extern "C" void _ZN7android13GraphicBufferC1EjjijjP13native_handleb(
                                                                    uint32_t inWidth,
                                                                    uint32_t inHeight,
                                                                    int inFormat,
                                                                    uint32_t inUsage,
                                                                    uint32_t inStride,
                                                                    native_handle_t* inHandle,
                                                                    bool keepOwnership)
{
    android::GraphicBuffer::HandleWrapMethod inMethod =
    (keepOwnership ? android::GraphicBuffer::TAKE_HANDLE : android::GraphicBuffer::WRAP_HANDLE);
    _ZN7android13GraphicBufferC1EjjijjjP13native_handleb(inHandle, inMethod, inWidth, inHeight,
                                                         inFormat, static_cast<uint32_t>(1), static_cast<uint64_t>(inUsage), inStride);
}
