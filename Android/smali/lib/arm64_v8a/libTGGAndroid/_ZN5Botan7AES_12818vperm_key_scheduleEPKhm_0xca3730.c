// 函数: _ZN5Botan7AES_12818vperm_key_scheduleEPKhm
// 地址: 0xca3730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20_1 = &arg1[8]
int64_t x8 = *x20_1
uint8_t const* x22 = arg1
int64_t x10 = *(x20_1 + 8) - x8
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
uint128_t v5
int128_t v6
int128_t v7
int128_t v16
int128_t v17
uint128_t v18
int128_t v20
int128_t v21
uint128_t v24
int128_t v25
int128_t v26
uint128_t v27

if (x10 s>> 2 u<= 0x2b)
    arg1, v0, v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v20, v21, v24, v25, v26, v27 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x20_1)
else if (x10 != 0xb0)
    *(x22 + 0x10) = x8 + 0xb0

void* x10_1 = *(x22 + 0x20)
void* x8_3 = *(x22 + 0x28) - x10_1

if (x8_3 s>> 2 u<= 0x2b)
    arg1, v0, v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v20, v21, v24, v25, v26, v27 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&x22[0x20])
    x10_1 = *(x22 + 0x20)
else if (x8_3 != 0xb0)
    *(x22 + 0x28) = x10_1 + 0xb0

v0 = *arg2
v18 = data_23ece40
v1.q = 0xc0f0e0d0c0f0e0d
vtbl1_s8(v0, v18)
int128_t v19
v19:8.q = vtbl1_s8(v0, vextq_s8(v18, v18, 8)).q
*(x10_1 + 0xa0) = v19
int128_t v18_2 = data_23ecbb0
v2.q = 0x407060500030201
v19 = data_23eca50
v20 = data_23eca60
v3.q = 0xc0f0e0d080b0a09
v4 = data_71d3e0
v5 = data_71cfb0
v21.d = v0.d u>> 4
v21:4.d = v0:4.d u>> 4
v21:8.d = v0:8.d u>> 4
v21:0xc.d = v0:0xc.d u>> 4
uint128_t v0_1 = v18_2 & v0
v6 = data_71abb0
uint128_t v18_3 = v18_2 & v21
vtbl1_s8(v19, v0_1)
uint128_t v0_2 = vextq_s8(v0_1, v0_1, 8)
v7 = data_71c9f0
int128_t v22 = vtbl1_s8(v19, v0_2)
vtbl1_s8(v20, v18_3)
uint128_t v18_4 = vextq_s8(v18_3, v18_3, 8)
v16 = data_71d280
int128_t v20_1 = vtbl1_s8(v20, v18_4)
v18_4 = data_71b1e0
v17 = data_71abc0
v19 = data_71d0b0
int64_t i_1 = 9
int64_t x9_3 = 0x610
int128_t v0_4
v0_4:8.q = (v20_1 ^ v22).q
int128_t v21_2
v21_2.b = 0x5b
v21_2:1.b = 0x5b
v21_2:2.b = 0x5b
v21_2:3.b = 0x5b
v21_2:4.b = 0x5b
v21_2:5.b = 0x5b
v21_2:6.b = 0x5b
v21_2:7.b = 0x5b
v21_2:8.b = 0x5b
v21_2:9.b = 0x5b
v21_2:0xa.b = 0x5b
v21_2:0xb.b = 0x5b
v21_2:0xc.b = 0x5b
v21_2:0xd.b = 0x5b
v21_2:0xe.b = 0x5b
v21_2:0xf.b = 0x5b
**x20_1 = v0_4
int64_t i

do
    v25 = *(&data_23ec990 + x9_3)
    v24 = data_23ecbb0
    int128_t v23_1 = vtbl1_s8(v0_4, v1)
    v22 = data_23eca70
    v26 = data_23eca80
    uint128_t v0_5 = v25 ^ v0_4
    int128_t v25_1 = v24 & v23_1
    int128_t v28_2 = vextq_s8(v24, v24, 8) & v23_1
    v23_1:8.q = v23_1.q
    uint128_t v0_6 = vextq_s8(zx.o(0), v0_5, 0xc) ^ v0_5
    uint128_t v29_1
    v29_1.d = v23_1.d u>> 4
    v29_1:4.d = v23_1:4.d u>> 4
    v29_1:8.d = v23_1:8.d u>> 4
    v29_1:0xc.d = v23_1:0xc.d u>> 4
    uint128_t v24_1 = v29_1 & v24
    uint128_t v23_3 = v24_1 ^ (v24 & v23_1)
    int128_t v25_2 = vtbl1_s8(v26, v25_1)
    int128_t v26_1 = vtbl1_s8(v26, v28_2)
    uint128_t v28_3 = vextq_s8(zx.o(0), v0_6, 8)
    uint128_t v29_2 = vextq_s8(v24_1, v24_1, 8)
    uint128_t v8_1 = vextq_s8(v23_3, v23_3, 8)
    int128_t v28_4 = vtbl1_s8(v22, v24_1)
    int128_t v30_1 = vtbl1_s8(v22, v29_2)
    int128_t v25_3 = vtbl1_s8(v22, v23_3) ^ v25_2
    int128_t v26_2 = vtbl1_s8(v22, v8_1) ^ v26_1
    int128_t v31_1 = data_23eca90
    int128_t v9_1 = data_23ecaa0
    int128_t v28_6 = vtbl1_s8(v22, v28_4 ^ v25_2)
    int128_t v30_3 = vtbl1_s8(v22, v30_1 ^ v26_1)
    int128_t v25_4 = vtbl1_s8(v22, v25_3)
    int128_t v22_1 = vtbl1_s8(v22, v26_2)
    vtbl1_s8(v31_1, v28_6 ^ v23_3)
    int64_t v25_5 = vtbl1_s8(v31_1, v30_3 ^ v8_1)
    vtbl1_s8(v9_1, v25_4 ^ v24_1)
    int128_t v23_5
    v23_5:8.q = v25_5
    int128_t v24_3
    v24_3:8.q = vtbl1_s8(v9_1, v22_1 ^ v29_2)
    v0_4 = v0_6 ^ v28_3 ^ v23_5 ^ v24_3 ^ v21_2
    int128_t v22_4 = v0_4 ^ v21_2
    int64_t v23_6 = vtbl1_s8(v22_4, v3)
    v22_4:8.q = v22_4.q
    int128_t v22_5
    v22_5:8.q = vtbl1_s8(v22_4, v2).q
    int128_t v25_6
    v25_6:8.q = v23_6
    int128_t v22_6 = vtbl1_s8(v22_5, v2)
    v27 = (&data_23ece20)[zx.q(i_1.d - 0xa) & 3]
    int64_t v23_7 = vtbl1_s8(v25_6, v3)
    int64_t x12_3 = *x20_1
    v22_6:8.q = v22_6.q
    int128_t v26_4
    v26_4:8.q = v23_7
    vtbl1_s8(v22_6, v2)
    int128_t v22_7
    v22_7:8.q = vtbl1_s8(v26_4, v3)
    v24 = vextq_s8(v27, v27, 8)
    int128_t v22_8 = v26_4 ^ v25_6 ^ v22_7
    vtbl1_s8(v22_8, v27)
    int128_t v23_9
    v23_9:8.q = vtbl1_s8(v22_8, v24).q
    *(x12_3 + x9_3 - 0x600) = v23_9
    uint128_t v22_9 = data_23ecbb0
    v23_9.d = v0_4.d u>> 4
    v23_9:4.d = v0_4:4.d u>> 4
    v23_9:8.d = v0_4:8.d u>> 4
    v23_9:0xc.d = v0_4:0xc.d u>> 4
    v24 = (&data_23ece20)[i_1 & 3]
    uint128_t v25_8 = v22_9 & v0_4
    uint128_t v23_10 = v22_9 & v23_9
    int128_t v28_7 = vtbl1_s8(v4, v25_8)
    uint128_t v25_9 = vextq_s8(v25_8, v25_8, 8)
    int128_t v29_3 = vtbl1_s8(v5, v23_10)
    uint128_t v23_11 = vextq_s8(v23_10, v23_10, 8)
    int128_t v25_10 = vtbl1_s8(v4, v25_9)
    int128_t v28_8 = v29_3 ^ v28_7
    int128_t v23_13 = vtbl1_s8(v5, v23_11) ^ v25_10
    int128_t v25_11 = v28_8
    int128_t v29_4 = v22_9 & v28_8
    v28_8:8.q = v23_13.q
    int64_t v30_4 = vtbl1_s8(v28_8, v3)
    v28_8.d u>>= 4
    v28_8:4.d u>>= 4
    v28_8:8.d u>>= 4
    v28_8:0xc.d u>>= 4
    uint128_t v26_5 = vextq_s8(v22_9, v22_9, 8)
    uint128_t v28_9 = v28_8 & v22_9
    int128_t v31_2 = vtbl1_s8(v7, v28_9)
    uint128_t v28_10 = vextq_s8(v28_9, v28_9, 8)
    v25_11:8.q = v25_11.q
    int128_t v29_5 = vtbl1_s8(v6, v29_4)
    int128_t v23_15 = vtbl1_s8(v6, v26_5 & v23_13)
    int128_t v29_6 = v31_2 ^ v29_5
    int128_t v23_16 = vtbl1_s8(v7, v28_10) ^ v23_15
    int128_t v31_3 = v29_6 ^ vtbl1_s8(v25_11, v2)
    int128_t v28_12 = v22_9 & v29_6
    int128_t v25_12
    v25_12:8.q = v30_4
    v29_6:8.q = v23_16.q
    int128_t v25_13 = v29_6 ^ v25_12
    v29_6.d u>>= 4
    v29_6:4.d u>>= 4
    v29_6:8.d u>>= 4
    v29_6:0xc.d u>>= 4
    v31_3:8.q = v31_3.q
    uint128_t v29_7 = v29_6 & v22_9
    int128_t v30_5 = vtbl1_s8(v31_3, v2)
    int128_t v31_4 = vtbl1_s8(v17, v29_7)
    uint128_t v29_8 = vextq_s8(v29_7, v29_7, 8)
    int128_t v28_13 = vtbl1_s8(v16, v28_12)
    int128_t v23_18 = vtbl1_s8(v16, v26_5 & v23_16)
    int128_t v28_14 = v31_4 ^ v28_13
    int128_t v23_19 = vtbl1_s8(v17, v29_8) ^ v23_18
    int128_t v31_5 = v28_14 ^ v30_5
    int128_t v29_10 = v22_9 & v28_14
    v30_5:8.q = vtbl1_s8(v25_13, v3)
    v28_14:8.q = v23_19.q
    int128_t v26_6 = v28_14 ^ v30_5
    v28_14.d u>>= 4
    v28_14:4.d u>>= 4
    v28_14:8.d u>>= 4
    v28_14:0xc.d u>>= 4
    uint128_t v22_10 = v28_14 & v22_9
    v31_5:8.q = v31_5.q
    int128_t v25_15 = vtbl1_s8(v18_4, v29_10)
    v25:8.q = (vtbl1_s8(v19, v22_10) ^ v25_15 ^ vtbl1_s8(v31_5, v2)).q
    int128_t v23_23
    v23_23:8.q = vtbl1_s8(v18_4, v26_5 & v23_19) ^ vtbl1_s8(v26_6, v3).q
        ^ vtbl1_s8(v19, vextq_s8(v22_10, v22_10, 8))
    int64_t x11_1 = *(x22 + 0x20)
    vtbl1_s8(v25, v2)
    int64_t v23_24 = vtbl1_s8(v23_23, v3)
    v27 = vextq_s8(v24, v24, 8)
    int128_t v22_14
    v22_14:8.q = v23_24
    vtbl1_s8(v22_14, v24)
    int128_t v23_25
    v23_25:8.q = vtbl1_s8(v22_14, v27).q
    *(x11_1 + (i_1 << 4)) = v23_25
    i = i_1
    i_1 -= 1
    x9_3 += 0x10
while (i != 1)
v5 = data_23ecbb0
v4 = data_23ed030
v7 = data_23eca70
v6 = data_23eca80
int128_t v1_1 = vtbl1_s8(v0_4, v1)
uint128_t v0_10 = v4 ^ v0_4
int128_t v4_1 = v5 & v1_1
int128_t v16_2 = vextq_s8(v5, v5, 8) & v1_1
v1_1:8.q = v1_1.q
int128_t v4_2 = vtbl1_s8(v6, v4_1)
int128_t v6_1 = vtbl1_s8(v6, v16_2)
v16_2.d = v1_1.d u>> 4
v16_2:4.d = v1_1:4.d u>> 4
v16_2:8.d = v1_1:8.d u>> 4
v16_2:0xc.d = v1_1:0xc.d u>> 4
uint128_t v16_3 = v16_2 & v5
uint128_t v0_11 = vextq_s8(zx.o(0), v0_10, 0xc) ^ v0_10
uint128_t v1_3 = v16_3 ^ (v5 & v1_1)
uint128_t v2_1 = vextq_s8(zx.o(0), v0_11, 8)
uint128_t v17_2 = vextq_s8(v16_3, v16_3, 8)
uint128_t v20_2 = vextq_s8(v1_3, v1_3, 8)
int128_t v2_2 = vtbl1_s8(v7, v16_3)
int128_t v18_5 = vtbl1_s8(v7, v17_2)
int128_t v4_3 = vtbl1_s8(v7, v1_3) ^ v4_2
int128_t v6_2 = vtbl1_s8(v7, v20_2) ^ v6_1
int128_t v19_1 = data_23eca90
int128_t v21_3 = data_23ecaa0
uint128_t v2_4 = vtbl1_s8(v7, v2_2 ^ v4_2)
int128_t v18_7 = vtbl1_s8(v7, v18_5 ^ v6_1)
uint128_t v1_4 = v2_4 ^ v1_3
int128_t v4_4 = vtbl1_s8(v7, v4_3)
int128_t v6_3 = vtbl1_s8(v7, v6_2)
v2_4 = data_23ece40
vtbl1_s8(v19_1, v1_4)
int64_t v18_9 = vtbl1_s8(v19_1, v18_7 ^ v20_2)
vtbl1_s8(v21_3, v4_4 ^ v16_3)
int128_t v1_5
v1_5:8.q = v18_9
int128_t v4_6
v4_6:8.q = vtbl1_s8(v21_3, v6_3 ^ v17_2)
v3.b = 0x5b
v3:1.b = 0x5b
v3:2.b = 0x5b
v3:3.b = 0x5b
v3:4.b = 0x5b
v3:5.b = 0x5b
v3:6.b = 0x5b
v3:7.b = 0x5b
v3:8.b = 0x5b
v3:9.b = 0x5b
v3:0xa.b = 0x5b
v3:0xb.b = 0x5b
v3:0xc.b = 0x5b
v3:0xd.b = 0x5b
v3:0xe.b = 0x5b
v3:0xf.b = 0x5b
v7 = data_71b7c0
int128_t v0_14 = v2_1 ^ v0_11 ^ v1_5 ^ v4_6
v20_2 = data_71a8d0
uint128_t v17_3 = vextq_s8(v2_4, v2_4, 8)
int128_t v1_6 = v0_14 ^ v3
v16_3 = data_71bb20
vtbl1_s8(v1_6, v2_4)
int128_t v2_5
v2_5:8.q = vtbl1_s8(v1_6, v17_3)
int128_t v2_6 = v2_5 ^ v3
uint128_t v4_7 = v0_14 & v5
uint128_t v3_1 = v2_6 & v5
v2_6.d u>>= 4
v2_6:4.d u>>= 4
v2_6:8.d u>>= 4
v2_6:0xc.d u>>= 4
v0_14.d u>>= 4
v0_14:4.d u>>= 4
v0_14:8.d u>>= 4
v0_14:0xc.d u>>= 4
vtbl1_s8(v16_3, v4_7)
uint128_t v4_8 = vextq_s8(v4_7, v4_7, 8)
uint128_t v2_7 = v2_6 & v5
void* x9_4 = *x20_1
uint128_t v0_15 = v0_14 & v5
int64_t v1_8 = vtbl1_s8(v16_3, v4_8)
vtbl1_s8(v7, v3_1)
uint128_t v3_2 = vextq_s8(v3_1, v3_1, 8)
vtbl1_s8(v20_2, v2_7)
uint128_t v2_8 = vextq_s8(v2_7, v2_7, 8)
v19_1 = data_71b570
int64_t v3_3 = vtbl1_s8(v7, v3_2)
int128_t v5_2
v5_2:8.q = vtbl1_s8(v20_2, v2_8) ^ v3_3
*(x9_4 + 0xa0) = v5_2
vtbl1_s8(v19_1, v0_15)
uint128_t v0_16 = vextq_s8(v0_15, v0_15, 8)
int128_t* x8_5 = *(x22 + 0x20)
int128_t v2_11
v2_11:8.q = vtbl1_s8(v19_1, v0_16) ^ v1_8
*x8_5 = v2_11
