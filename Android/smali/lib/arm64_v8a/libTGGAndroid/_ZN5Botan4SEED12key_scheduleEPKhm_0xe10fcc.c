// 函数: _ZN5Botan4SEED12key_scheduleEPKhm
// 地址: 0xe10fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0
int128_t v0
x0, v0 = Botan::allocate_memory(4, 4)
int32_t temp0 = _byteswap(*arg2)
int32_t temp0_1 = _byteswap(*(arg2 + 4))
*x0 = temp0
x0[1] = temp0_1
int32_t x14 = _byteswap(*(arg2 + 8))
int32_t temp0_3 = _byteswap(*(arg2 + 0xc))
x0[2] = x14
x0[3] = temp0_3
int64_t x8_6 = *(arg1 + 8)
int64_t x9_2 = *(arg1 + 0x10) - x8_6

if (x9_2 s>> 2 u<= 0x1f)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
    x14 = x0[2]
else if (x9_2 != 0x80)
    *(arg1 + 0x10) = x8_6 + 0x80

int64_t i = 0
void* const x9_3 = &data_83addc

do
    int32_t x16_1 = *(x9_3 - 4)
    int32_t x14_2 = x14 + *x0 - x16_1
    int32_t x15_5 = *(&data_853740 + ((zx.q(x14_2 u>> 8) & 0xff) << 2))
        ^ *(&data_853340 + ((zx.q(x14_2) & 0xff) << 2))
        ^ *(&data_853b40 + ((zx.q(x14_2 u>> 0x10) & 0xff) << 2))
    *(*(arg1 + 8) + i) = x15_5 ^ *(&data_853f40 + (zx.q(x14_2 u>> 0x18) << 2))
    int32_t x14_8 = x0[1] - x0[3] + x16_1
    int32_t* x15_7 = *(arg1 + 8) + i
    int32_t x16_5 = *(&data_853740 + ((zx.q(x14_8 u>> 8) & 0xff) << 2))
        ^ *(&data_853340 + ((zx.q(x14_8) & 0xff) << 2))
        ^ *(&data_853b40 + ((zx.q(x14_8 u>> 0x10) & 0xff) << 2))
    x15_7[1] = x16_5 ^ *(&data_853f40 + (zx.q(x14_8 u>> 0x18) << 2)) ^ *x15_7
    v0.q = *x0
    int32_t x14_13 = x0[2]
    int32_t x15_8 = *x9_3
    x9_3 += 8
    int128_t v1_1 = vrev64_s32(v0)
    v0.d u>>= 8
    v0:4.d u>>= 8
    v1_1.d <<= 0x18
    v1_1:4.d <<= 0x18
    int128_t v0_1 = vorr_s8(v1_1, v0)
    int32_t x14_15 = x14_13 + v0_1.d - x15_8
    int32_t x17_7 = *(&data_853340 + ((zx.q(x14_15) & 0xff) << 2))
    int32_t x0_7 = *(&data_853740 + ((zx.q(x14_15 u>> 8) & 0xff) << 2))
    *x0 = v0_1.q
    *(*(arg1 + 8) + i + 8) = x0_7 ^ x17_7 ^ *(&data_853b40 + ((zx.q(x14_15 u>> 0x10) & 0xff) << 2))
        ^ *(&data_853f40 + (zx.q(x14_15 u>> 0x18) << 2))
    int32_t x14_21 = x0[1] - x0[3] + x15_8
    void* x16_10 = *(arg1 + 8) + i
    int32_t x15_12 = *(&data_853740 + ((zx.q(x14_21 u>> 8) & 0xff) << 2))
        ^ *(&data_853340 + ((zx.q(x14_21) & 0xff) << 2))
        ^ *(&data_853b40 + ((zx.q(x14_21 u>> 0x10) & 0xff) << 2))
    *(x16_10 + 0xc) = x15_12 ^ *(&data_853f40 + (zx.q(x14_21 u>> 0x18) << 2)) ^ *(x16_10 + 8)
    v0_1.q = *(x0 + 8)
    i += 0x10
    int128_t v1_2 = vrev64_s32(v0_1)
    v0_1.d <<= 8
    v0_1:4.d <<= 8
    v1_2.d u>>= 0x18
    v1_2:4.d u>>= 0x18
    v0 = vorr_s8(v0_1, v1_2)
    x14 = v0.d
    *(x0 + 8) = v0.q
while (i != 0x80)

return Botan::deallocate_memory(x0, 4, 4)
