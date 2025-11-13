// 函数: _ZN5Botan6MISTY112key_scheduleEPKhm
// 地址: 0xdad920
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t* x0
int128_t v0
int128_t v1
x0, v0, v1 = Botan::allocate_memory(0x20, 2)
v0.q = 0
v0:8.q = 0
int64_t entry_x2
uint64_t x8 = entry_x2 u>> 1
__builtin_memset(x0, 0, 0x40)
uint32_t x9
uint64_t x10_1
uint64_t x11_1
uint64_t x14_1

if (x8 == 0)
    x9 = 0
    x10_1 = 0
    x11_1 = 0
    x14_1 = 0
else
    int64_t i_5
    
    if (entry_x2 u>= 8)
        i_5 = x8 & 0x7ffffffffffffffc
        int16_t* x10_2 = arg2 + 4
        void* x11_2 = &x0[2]
        int64_t i_4 = i_5
        int64_t i
        
        do
            v0.d = float.s(zx.d(x10_2[-2]))
            v1.d = float.s(zx.d(*x10_2))
            v0:4.d = zx.d(x10_2[-1])
            v1:4.d = zx.d(x10_2[1])
            v0.d = vrev32_s8(v0).d u>> 0x10
            v0:4.d u>>= 0x10
            v1.d = vrev32_s8(v1).d u>> 0x10
            v1:4.d u>>= 0x10
            *(x11_2 - 4) = v0.w
            *x11_2 = v1.w
            *(x11_2 - 2) = v0:4.w
            x10_2 = &x10_2[4]
            i = i_4
            i_4 -= 4
            *(x11_2 + 2) = v1:4.w
            x11_2 += 8
        while (i != 4)
        
        if (x8 != i_5)
            goto label_dad9fc
    else
        i_5 = 0
    label_dad9fc:
        int64_t i_3 = x8 - i_5
        int64_t x9_1 = arg2 + (i_5 << 1)
        void* x10_4 = &x0[i_5]
        int64_t i_1
        
        do
            uint32_t x11_3 = zx.d(*x9_1)
            x9_1 += 2
            i_1 = i_3
            i_3 -= 1
            *x10_4 = (_byteswap(x11_3) u>> 0x10).w
            x10_4 += 2
        while (i_1 != 1)
    x8 = zx.q(*x0)
    x14_1 = zx.q(x0[1])
    x11_1 = zx.q(x0[2])
    x10_1 = zx.q(x0[3])
    x9 = zx.d(x0[4])

int64_t x13_3 = x8 & 0x7f
int64_t x2 = x11_1 & 0x7f
uint64_t x21_1 = zx.q(x0[4])
uint64_t x5_1 = zx.q(x0[5])
uint64_t x22_1 = zx.q(x0[6])
uint64_t x24 = zx.q(x0[7])
int32_t x23_1 = zx.d(*(&data_851a40 + (zx.q(x8.d u>> 7) << 1))) ^ x13_3.d
int32_t x3_2 = zx.d(*(&data_851a40 + (zx.q(x11_1.d u>> 7) << 1))) ^ x2.d
int64_t x17 = x14_1 & 0x7f
int32_t x0_3 = zx.d(*(&data_851a40 + (zx.q(x14_1.d u>> 7) << 1))) ^ x17.d
int64_t x6 = x10_1 & 0x7f
int32_t x7_2 = zx.d(*(&data_851a40 + (zx.q(x10_1.d u>> 7) << 1))) ^ x6.d
int32_t x13_5 = x23_1 ^ x14_1.d u>> 9 ^ zx.d(*(&data_851e40 + x13_3))
int32_t x10_6 = x3_2 ^ x10_1.d u>> 9 ^ zx.d(*(&data_851e40 + x2))
uint32_t x23_2 = zx.d(*x0)
int64_t x21_2 = x21_1 & 0x7f
int64_t x7_3 = x5_1 & 0x7f
int32_t x11_7 = x0_3 ^ x11_1.d u>> 9 ^ zx.d(*(&data_851e40 + x17))
int64_t x17_2 = x22_1 & 0x7f
int32_t x9_3 = x7_2 ^ x9 u>> 9 ^ zx.d(*(&data_851e40 + x6))
int64_t x6_2 = x24 & 0x7f
int32_t x3_5 = zx.d(*(&data_851a40 + ((zx.q((x5_1 u>> 7).d) & 0x1ffffff) << 1))) ^ x7_3.d
int32_t x14_8 = zx.d(*(&data_851a40 + ((zx.q((x22_1 u>> 7).d) & 0x1ffffff) << 1))) ^ x17_2.d
int32_t x2_4 = zx.d(*(&data_851a40 + ((zx.q((x24 u>> 7).d) & 0x1ffffff) << 1))) ^ x6_2.d
int32_t x0_7 = zx.d(*(&data_851a40 + (x21_1 u>> 6 & 0x3fe))) ^ x21_2.d
int32_t x16_6 =
    (x13_5 & 0x7f) ^ zx.d(*(&data_851a40 + ((zx.q(x23_1.w) ^ (zx.q(x14_1.w) & 0x1ff)) << 1)))
int32_t x15_7 =
    (x11_7 & 0x7f) ^ zx.d(*(&data_851a40 + ((zx.q(x0_3.w) ^ (zx.q(x11_1.w) & 0x1ff)) << 1)))
int32_t x1_4 =
    (x10_6 & 0x7f) ^ zx.d(*(&data_851a40 + ((zx.q(x3_2.w) ^ (zx.q(x10_1.w) & 0x1ff)) << 1)))
int32_t x4_4 = (x9_3 & 0x7f) ^ zx.d(*(&data_851a40 + ((zx.q(x7_2.w) ^ (zx.q(x9.w) & 0x1ff)) << 1)))
uint32_t x3_8 = zx.d(*(&data_851a40 + ((zx.q(x3_5.w) ^ (zx.q(x22_1.w) & 0x1ff)) << 1)))
uint32_t x14_11 = zx.d(*(&data_851a40 + ((zx.q(x14_8.w) ^ (zx.q(x24.w) & 0x1ff)) << 1)))
uint32_t x2_7 = zx.d(*(&data_851a40 + ((zx.q(x2_4.w) ^ (zx.q(x23_2.w) & 0x1ff)) << 1)))
uint32_t x8_1 = zx.d(*(&data_851a40 + ((zx.q(x0_7.w) ^ (zx.q(x5_1.w) & 0x1ff)) << 1)))
int32_t x13_6 = x16_6 | x13_5 << 9
int32_t x11_8 = x15_7 | x11_7 << 9
int32_t x10_7 = x1_4 | x10_6 << 9
int32_t x9_4 = x4_4 | x9_3 << 9
int32_t x7_5 = x3_5 ^ x22_1.d u>> 9 ^ zx.d(*(&data_851e40 + x7_3))
int32_t x17_4 = x14_8 ^ x24.d u>> 9 ^ zx.d(*(&data_851e40 + x17_2))
int32_t x6_4 = x2_4 ^ x23_2 u>> 9 ^ zx.d(*(&data_851e40 + x6_2))
int32_t x12_2 = x0_7 ^ x5_1.d u>> 9 ^ zx.d(*(&data_851e40 + x21_2))
x0[8] = x13_6.w
x0[9] = x11_8.w
x0[0xa] = x10_7.w
x0[0xb] = x9_4.w
x0[0x19] = x15_7.w & 0x1ff
x0[0x10] = (x13_6 u>> 9).w & 0x7f
x0[0x11] = (x11_8 u>> 9).w & 0x7f
x0[0x12] = (x10_7 u>> 9).w & 0x7f
x0[0x13] = (x9_4 u>> 9).w & 0x7f
x0[0x1a] = x1_4.w & 0x1ff
int32_t x10_10 = (x7_5 & 0x7f) ^ x3_8
int32_t x9_7 = (x17_4 & 0x7f) ^ x14_11
int32_t x11_11 = (x6_4 & 0x7f) ^ x2_7
int32_t x8_2 = (x12_2 & 0x7f) ^ x8_1
x0[0x1b] = x4_4.w & 0x1ff
int32_t x13_9 = x10_10 | x7_5 << 9
int32_t x14_12 = x9_7 | x17_4 << 9
int32_t x15_11 = x11_11 | x6_4 << 9
int32_t x12_3 = x8_2 | x12_2 << 9
x0[0xd] = x13_9.w
x0[0x1d] = x10_10.w & 0x1ff
x0[0x1e] = x9_7.w & 0x1ff
x0[0xc] = x12_3.w
x0[0x18] = x16_6.w & 0x1ff
x0[0xe] = x14_12.w
x0[0xf] = x15_11.w
x0[0x1c] = x8_2.w & 0x1ff
x0[0x15] = (x13_9 u>> 9).w & 0x7f
x0[0x16] = (x14_12 u>> 9).w & 0x7f
x0[0x17] = (x15_11 u>> 9).w & 0x7f
x0[0x14] = (x12_3 u>> 9).w & 0x7f
x0[0x1f] = x11_11.w & 0x1ff
int64_t x8_4 = *(arg1 + 8)
int64_t x10_13 = *(arg1 + 0x10) - x8_4

if (x10_13 s>> 1 u< 0x64)
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::__append(&arg1[8])
else if (x10_13 != 0xc8)
    *(arg1 + 0x10) = x8_4 + 0xc8

int64_t x8_6 = *(arg1 + 0x20)
int64_t x10_14 = *(arg1 + 0x28) - x8_6

if (x10_14 s>> 1 u<= 0x63)
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::__append(&arg1[0x20])
else if (x10_14 != 0xc8)
    *(arg1 + 0x28) = x8_6 + 0xc8

for (int64_t i_2 = 0; i_2 != 0x64; )
    uint64_t x13_11 = zx.q(*(&data_836e8c + i_2))
    int16_t x11_14 = x0[zx.q(*(&data_836e28 + i_2))]
    i_2 += 1
    (*(arg1 + 8))[i_2] = x11_14
    (*(arg1 + 0x20))[i_2] = x0[x13_11]

return Botan::deallocate_memory(x0, 0x20, 2)
