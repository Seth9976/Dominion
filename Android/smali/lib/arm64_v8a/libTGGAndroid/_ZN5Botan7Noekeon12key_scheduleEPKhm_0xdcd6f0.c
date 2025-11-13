// 函数: _ZN5Botan7Noekeon12key_scheduleEPKhm
// 地址: 0xdcd6f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *arg2
int32_t x11 = *(arg2 + 8)
int32_t x12 = *(arg2 + 0xc)
int64_t i = 0
int32_t x23 = _byteswap(*(arg2 + 4))
int32_t x9_1 = _byteswap(x9)
int32_t x22 = _byteswap(x11)
int32_t x21 = _byteswap(x12)

do
    int32_t x12_1 = x21 ^ x23
    int32_t x12_2 = x12_1 ^ ror.d(x12_1, 8) ^ ror.d(x12_1, 0x18)
    int32_t x9_2 = x9_1 ^ zx.d(*(Botan::Noekeon::RC + i))
    int32_t x13_2 = x9_2 ^ x22
    int32_t x12_4 = x13_2 ^ ror.d(x13_2, 8) ^ ror.d(x13_2, 0x18)
    int32_t x11_3 = ror.d(x12_2 ^ x22, 0x1b)
    int32_t x12_6 = ror.d(x12_4 ^ x21, 0x1e)
    int32_t x13_4 = (x12_6 | x11_3) ^ ror.d(x12_4 ^ x23, 0x1f)
    int32_t x14_2 = x13_4 ^ not.d(x12_6 ^ x11_3)
    int32_t x11_5 = x9_2 ^ x12_2 ^ (x11_3 & not.d(x13_4))
    int32_t x9_4 = x14_2 ^ x11_5
    int32_t x13_5 = (x14_2 | x11_5) ^ x13_4
    i += 1
    x22 = ror.d(x9_4, 5)
    x23 = ror.d(x13_5, 1)
    x9_1 = (x13_5 & x9_4) ^ x12_6
    x21 = ror.d(x11_5, 2)
while (i != 0x10)

int32_t* x8 = *(arg1 + 0x20)
int32_t x24 = x9_1 ^ 0xd4
void* x11_6 = *(arg1 + 0x28) - x8

if (x11_6 s>> 2 u<= 3)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[0x20])
    x8 = *(arg1 + 0x20)
else if (x11_6 != 0x10)
    *(arg1 + 0x28) = &x8[4]

*x8 = x24
int32_t x9_7 = x22 ^ x24
*(*(arg1 + 0x20) + 4) = x23
int32_t x25 = x9_7 ^ ror.d(x9_7, 8) ^ ror.d(x9_7, 0x18)
int32_t x12_7 = x21 ^ x23
*(*(arg1 + 0x20) + 8) = x22
int32_t x26 = x12_7 ^ ror.d(x12_7, 8) ^ ror.d(x12_7, 0x18)
*(*(arg1 + 0x20) + 0xc) = x21
int32_t* x8_4 = *(arg1 + 8)
void* x10_4 = *(arg1 + 0x10) - x8_4

if (x10_4 s>> 2 u<= 3)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
    x8_4 = *(arg1 + 8)
else if (x10_4 != 0x10)
    *(arg1 + 0x10) = &x8_4[4]

*x8_4 = x26 ^ x24
*(*(arg1 + 8) + 4) = x25 ^ x23
*(*(arg1 + 8) + 8) = x26 ^ x22
*(*(arg1 + 8) + 0xc) = x25 ^ x21
