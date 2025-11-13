// 函数: _ZN5Botan11ASN1_StringD0Ev
// 地址: 0xedbb20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
uint32_t x8 = zx.d(entry_x0[4].b)
*entry_x0 = _vtable_for_Botan::ASN1_String + 0x10

if ((x8 & 1) != 0)
    operator delete(entry_x0[6])

void* x0_1 = entry_x0[1]

if (x0_1 != 0)
    entry_x0[2] = x0_1
    operator delete(x0_1)

return operator delete(entry_x0) __tailcall
