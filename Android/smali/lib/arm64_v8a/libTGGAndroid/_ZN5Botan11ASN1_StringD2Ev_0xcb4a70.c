// 函数: _ZN5Botan11ASN1_StringD2Ev
// 地址: 0xcb4a70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
uint32_t x8 = zx.d(entry_x0[4].b)
*entry_x0 = _vtable_for_Botan::ASN1_String + 0x10

if ((x8 & 1) != 0)
    operator delete(entry_x0[6])

void* result = entry_x0[1]

if (result == 0)
    return result

entry_x0[2] = result
return operator delete(result) __tailcall
