// 函数: _ZN5Botan11BER_DecoderC1ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xcb869c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x24) = 0
*(arg1 + 8) = 0xff00
*(arg1 + 0x30) = 0
void** x0 = operator new(0x28)
void** x20 = x0
*x0 = _vtable_for_Botan::DataSource_Memory + 0x10
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&x0[1])
x20[4] = 0
int64_t* result = *(arg1 + 0x30)
*(arg1 + 0x30) = x20

if (result != 0)
    result = (*(*result + 0x38))()
    x20 = *(arg1 + 0x30)

*(arg1 + 0x28) = x20
return result
