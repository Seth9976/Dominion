// 函数: _ZN5Botan7AES_25618vperm_key_scheduleEPKhm
// 地址: 0xca52c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v9
int64_t var_38 = entry_v9.q
void* x20_1 = &arg1[8]
int64_t x8 = *x20_1
uint8_t const* x22 = arg1
int64_t x10 = *(x20_1 + 8) - x8
uint128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
int128_t v16
int128_t v17
int128_t v18
int128_t v19
uint128_t v20
int128_t v21
int128_t v22
uint128_t v24
int128_t v25
int128_t v30

if (x10 s>> 2 u<= 0x3b)
    arg1, v0, v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v19, v20, v21, v22, v24, v25, v30 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x20_1)
else if (x10 != 0xf0)
    *(x22 + 0x10) = x8 + 0xf0

void* x10_1 = *(x22 + 0x20)
void* x8_3 = *(x22 + 0x28) - x10_1

if (x8_3 s>> 2 u<= 0x3b)
    arg1, v0, v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v19, v20, v21, v22, v24, v25, v30 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&x22[0x20])
    x10_1 = *(x22 + 0x20)
else if (x8_3 != 0xf0)
    *(x22 + 0x28) = x10_1 + 0xf0

v17 = *arg2
v18 = *(arg2 + 0x10)
v20 = data_23ece40
v1.q = 0x407060500030201
v21.d = v17.d u>> 4
v21:4.d = v17:4.d u>> 4
v21:8.d = v17:8.d u>> 4
v21:0xc.d = v17:0xc.d u>> 4
vtbl1_s8(v17, v20)
int128_t v23
v23:8.q = vtbl1_s8(v17, vextq_s8(v20, v20, 8)).q
*(x10_1 + 0xe0) = v23
int128_t v20_2 = data_23ecbb0
v24 = data_23eca50
v25 = data_23eca60
v22.d = v18.d u>> 4
v22:4.d = v18:4.d u>> 4
v22:8.d = v18:8.d u>> 4
v22:0xc.d = v18:0xc.d u>> 4
uint128_t v17_1 = v20_2 & v17
uint128_t v21_1 = v20_2 & v21
uint128_t v18_1 = v20_2 & v18
uint128_t v20_3 = v20_2 & v22
vtbl1_s8(v24, v17_1)
vtbl1_s8(v25, v21_1)
int128_t v26 = vtbl1_s8(v24, v18_1)
uint128_t v18_2 = vextq_s8(v18_1, v18_1, 8)
uint128_t v27 = vtbl1_s8(v25, v20_3)
uint128_t v20_4 = vextq_s8(v20_3, v20_3, 8)
v19.b = 0x5b
v19:1.b = 0x5b
v19:2.b = 0x5b
v19:3.b = 0x5b
v19:4.b = 0x5b
v19:5.b = 0x5b
v19:6.b = 0x5b
v19:7.b = 0x5b
v2.q = 0xc0f0e0d080b0a09
uint128_t v17_2 = vextq_s8(v17_1, v17_1, 8)
uint128_t v21_2 = vextq_s8(v21_1, v21_1, 8)
int128_t v18_3 = vtbl1_s8(v24, v18_2)
int128_t v20_5 = vtbl1_s8(v25, v20_4)
uint128_t v22_2 = v27 ^ v26
int128_t* x10_2 = *x20_1
int64_t v17_3 = vtbl1_s8(v24, v17_2)
int128_t v20_6 = v20_5 ^ v18_3
v0.b = 0x5b
v0:1.b = 0x5b
v0:2.b = 0x5b
v0:3.b = 0x5b
v0:4.b = 0x5b
v0:5.b = 0x5b
v0:6.b = 0x5b
v0:7.b = 0x5b
v0:8.b = 0x5b
v0:9.b = 0x5b
v0:0xa.b = 0x5b
v0:0xb.b = 0x5b
v0:0xc.b = 0x5b
v0:0xd.b = 0x5b
v0:0xe.b = 0x5b
v0:0xf.b = 0x5b
uint128_t v18_4
v18_4:8.q = v20_6.q
int128_t v19_1
v19_1:8.q = (v22_2 ^ v19).q
int128_t v23_2
v23_2:8.q = vtbl1_s8(v25, v21_2) ^ v17_3
int128_t v19_2 = vtbl1_s8(v19_1, v1)
int64_t v17_6 = vtbl1_s8(v18_4 ^ v0, v2)
v19_2:8.q = v19_2.q
*x10_2 = v23_2
int128_t v21_4
v21_4:8.q = v17_6
int128_t v17_7 = vtbl1_s8(v19_2, v1)
v24 = data_23ece50
v17_7:8.q = v17_7.q
int128_t v25_1
v25_1:8.q = vtbl1_s8(v21_4, v2)
vtbl1_s8(v17_7, v1)
int64_t v21_5 = vtbl1_s8(v25_1, v2)
void* x10_3 = *x20_1
int128_t v17_8
v17_8:8.q = v21_5
uint128_t v25_2 = vextq_s8(v24, v24, 8)
int128_t v17_9 = v25_1 ^ v21_4 ^ v17_8
vtbl1_s8(v17_9, v24)
int128_t v19_5
v19_5:8.q = vtbl1_s8(v17_9, v25_2).q
*(x10_3 + 0x10) = v19_5
v3 = data_71d3e0
v27 = data_23ecbb0
v4 = data_71cfb0
v19_5.d = v18_4.d u>> 4
v19_5:4.d = v18_4:4.d u>> 4
v19_5:8.d = v18_4:8.d u>> 4
v19_5:0xc.d = v18_4:0xc.d u>> 4
uint128_t v22_3 = vextq_s8(v27, v27, 8)
uint128_t v19_6 = v27 & v19_5
int128_t v24_1 = vtbl1_s8(v4, v19_6)
uint128_t v19_7 = vextq_s8(v19_6, v19_6, 8)
v5 = data_71abb0
int128_t v21_7 = vtbl1_s8(v3, v27 & v22_2)
int128_t v20_8 = vtbl1_s8(v3, v22_3 & v20_6)
int128_t v19_8 = vtbl1_s8(v4, v19_7)
v6 = data_71c9f0
int128_t v21_8 = v24_1 ^ v21_7
int128_t v19_9 = v19_8 ^ v20_8
int128_t v20_9 = v21_8
int128_t v24_2 = v27 & v21_8
v21_8:8.q = v19_9.q
int64_t v25_3 = vtbl1_s8(v21_8, v2)
v21_8.d u>>= 4
v21_8:4.d u>>= 4
v21_8:8.d u>>= 4
v21_8:0xc.d u>>= 4
uint128_t v21_9 = v21_8 & v27
int128_t v26_1 = vtbl1_s8(v6, v21_9)
uint128_t v21_10 = vextq_s8(v21_9, v21_9, 8)
v7 = data_71d280
v20_9:8.q = v20_9.q
int128_t v24_3 = vtbl1_s8(v5, v24_2)
int128_t v19_11 = vtbl1_s8(v5, v22_3 & v19_9)
int128_t v21_11 = vtbl1_s8(v6, v21_10)
v16 = data_71abc0
int128_t v24_4 = v26_1 ^ v24_3
int128_t v21_12 = v21_11 ^ v19_11
int128_t v26_2 = v24_4 ^ vtbl1_s8(v20_9, v1)
int128_t v19_12 = v27 & v24_4
int128_t v20_10
v20_10:8.q = v25_3
v24_4:8.q = v21_12.q
int128_t v20_11 = v24_4 ^ v20_10
v24_4.d u>>= 4
v24_4:4.d u>>= 4
v24_4:8.d u>>= 4
v24_4:0xc.d u>>= 4
uint128_t v24_5 = v24_4 & v27
int128_t v19_13 = vtbl1_s8(v7, v19_12)
int128_t v25_4 = vtbl1_s8(v16, v24_5)
v26_2:8.q = v26_2.q
uint128_t v24_6 = vextq_s8(v24_5, v24_5, 8)
int128_t v17_10 = data_71b1e0
int128_t v25_5 = v25_4 ^ v19_13
int128_t v26_3 = vtbl1_s8(v26_2, v1)
int128_t v21_14 = vtbl1_s8(v7, v22_3 & v21_12)
int128_t v20_12 = vtbl1_s8(v20_11, v2)
int128_t v21_15 = vtbl1_s8(v16, v24_6) ^ v21_14
int128_t v24_8 = v25_5 ^ v26_3
v26_3:8.q = v20_12.q
v20_12 = data_71d0b0
int128_t v28 = v27 & v25_5
v25_5:8.q = v21_15.q
int128_t v26_4 = v25_5 ^ v26_3
v25_5.d u>>= 4
v25_5:4.d u>>= 4
v25_5:8.d u>>= 4
v25_5:0xc.d u>>= 4
int128_t v21_17 = vtbl1_s8(v17_10, v22_3 & v21_15)
int128_t v26_5 = vtbl1_s8(v26_4, v2)
uint128_t v25_6 = v25_5 & v27
int128_t v22_4 = vtbl1_s8(v17_10, v28)
v24_8:8.q = v24_8.q
int128_t v22_5 = vtbl1_s8(v20_12, v25_6) ^ v22_4
int128_t v24_9 = vtbl1_s8(v24_8, v1)
int128_t v26_7
v26_7:8.q = (v21_17 ^ v26_5 ^ vtbl1_s8(v20_12, vextq_s8(v25_6, v25_6, 8))).q
uint128_t v25_9 = data_23ece30
int128_t v21_18
v21_18.q = 0xc0f0e0d0c0f0e0d
int128_t v24_10
v24_10:8.q = (v22_5 ^ v24_9).q
v22_5.q = 0xf0e0d0c0f0e0d0c
int128_t* x11 = &data_23ecfa0
void* x12 = *(x22 + 0x20)
vtbl1_s8(v24_10, v1)
int128_t v24_11
v24_11:8.q = vtbl1_s8(v26_7, v2)
uint128_t v26_9 = vextq_s8(v25_9, v25_9, 8)
vtbl1_s8(v24_11, v25_9)
int128_t v25_10
v25_10:8.q = vtbl1_s8(v24_11, v26_9).q
int64_t x8_5 = 0
int64_t x9_3 = 0
*(x12 + 0xd0) = v25_10

while (true)
    v28 = *x11
    int128_t v29_1 = vtbl1_s8(v18_4, v21_18)
    uint128_t v31_1 = vextq_s8(v27, v27, 8)
    int128_t v24_12 = data_23eca70
    v30 = data_23eca80
    int128_t v8_1 = v27 & v29_1
    int128_t v31_2 = v31_1 & v29_1
    v29_1:8.q = v29_1.q
    entry_v9.d = v29_1.d u>> 4
    entry_v9:4.d = v29_1:4.d u>> 4
    entry_v9:8.d = v29_1:8.d u>> 4
    entry_v9:0xc.d = v29_1:0xc.d u>> 4
    uint128_t v10_1 = v28 ^ v23_2
    uint128_t v23_3 = entry_v9 & v27
    int128_t v27_1 = vtbl1_s8(v30, v8_1)
    int128_t v30_1 = vtbl1_s8(v30, v31_2)
    uint128_t v31_3 = vextq_s8(zx.o(0), v10_1, 0xc)
    uint128_t v11_1 = v23_3 ^ (v27 & v29_1)
    int128_t v29_3 = vtbl1_s8(v24_12, v23_3)
    uint128_t v28_1 = vextq_s8(v23_3, v23_3, 8)
    v25_10 = data_23eca90
    v26_9 = data_23ecaa0
    uint128_t v10_2 = v31_3 ^ v10_1
    int128_t v31_4 = vtbl1_s8(v24_12, v28_1)
    int128_t v8_2 = vtbl1_s8(v24_12, v11_1)
    uint128_t v29_4 = vextq_s8(v11_1, v11_1, 8)
    int128_t v9 = vtbl1_s8(v24_12, v29_4) ^ v30_1
    int128_t v30_2 = vtbl1_s8(v24_12, v29_3 ^ v27_1)
    int128_t v31_6 = vtbl1_s8(v24_12, v31_4 ^ v30_1)
    int128_t v8_4 = vtbl1_s8(v24_12, v8_2 ^ v27_1)
    int128_t v24_13 = vtbl1_s8(v24_12, v9)
    uint128_t v30_3 = vextq_s8(zx.o(0), v10_2, 8)
    vtbl1_s8(v25_10, v30_2 ^ v11_1)
    int64_t v25_11 = vtbl1_s8(v25_10, v31_6 ^ v29_4)
    vtbl1_s8(v26_9, v8_4 ^ v23_3)
    int128_t v9_1
    v9_1:8.q = v25_11
    int128_t v23_5
    v23_5:8.q = vtbl1_s8(v26_9, v24_13 ^ v28_1)
    v23_2 = v10_2 ^ v30_3 ^ v9_1 ^ v23_5 ^ v0
    int128_t v24_17 = v23_2 ^ v0
    int64_t v25_12 = vtbl1_s8(v24_17, v2)
    v24_17:8.q = v24_17.q
    int128_t v24_18
    v24_18:8.q = vtbl1_s8(v24_17, v1).q
    int128_t v28_2
    v28_2:8.q = v25_12
    int128_t v24_19 = vtbl1_s8(v24_18, v1)
    uint128_t v27_2 = (&data_23ece20)[zx.q(x9_3.d + 2) & 2]
    v24_19:8.q = v24_19.q
    int128_t v29_6
    v29_6:8.q = vtbl1_s8(v28_2, v2)
    void* x16_1 = *x20_1
    vtbl1_s8(v24_19, v1)
    int128_t v24_20
    v24_20:8.q = vtbl1_s8(v29_6, v2)
    uint128_t v26_10 = vextq_s8(v27_2, v27_2, 8)
    int128_t v24_21 = v29_6 ^ v28_2 ^ v24_20
    int64_t x14_1 = x9_3 << 4
    vtbl1_s8(v24_21, v27_2)
    int128_t v25_15
    v25_15:8.q = vtbl1_s8(v24_21, v26_10).q
    *(x16_1 + x14_1 + 0x20) = v25_15
    uint128_t v24_22 = data_23ecbb0
    v25_15.d = v23_2.d u>> 4
    v25_15:4.d = v23_2:4.d u>> 4
    v25_15:8.d = v23_2:8.d u>> 4
    v25_15:0xc.d = v23_2:0xc.d u>> 4
    uint128_t v27_3 = v24_22 & v23_2
    uint128_t v25_16 = v24_22 & v25_15
    int128_t v30_5 = vtbl1_s8(v3, v27_3)
    uint128_t v27_4 = vextq_s8(v27_3, v27_3, 8)
    int128_t v31_7 = vtbl1_s8(v4, v25_16)
    uint128_t v25_17 = vextq_s8(v25_16, v25_16, 8)
    int128_t v27_5 = vtbl1_s8(v3, v27_4)
    int128_t v30_6 = v31_7 ^ v30_5
    int128_t v25_19 = vtbl1_s8(v4, v25_17) ^ v27_5
    int128_t v27_6 = v30_6
    int128_t v31_8 = v24_22 & v30_6
    v30_6:8.q = v25_19.q
    int64_t v8_5 = vtbl1_s8(v30_6, v2)
    v30_6.d u>>= 4
    v30_6:4.d u>>= 4
    v30_6:8.d u>>= 4
    v30_6:0xc.d u>>= 4
    uint128_t v28_4 = vextq_s8(v24_22, v24_22, 8)
    uint128_t v30_7 = v30_6 & v24_22
    int128_t v9_2 = vtbl1_s8(v6, v30_7)
    uint128_t v30_8 = vextq_s8(v30_7, v30_7, 8)
    v27_6:8.q = v27_6.q
    int128_t v31_9 = vtbl1_s8(v5, v31_8)
    int128_t v25_21 = vtbl1_s8(v5, v28_4 & v25_19)
    int128_t v31_10 = v9_2 ^ v31_9
    int128_t v25_22 = vtbl1_s8(v6, v30_8) ^ v25_21
    int128_t v9_3 = v31_10 ^ vtbl1_s8(v27_6, v1)
    int128_t v30_10 = v24_22 & v31_10
    int128_t v27_7
    v27_7:8.q = v8_5
    v31_10:8.q = v25_22.q
    int128_t v27_8 = v31_10 ^ v27_7
    v31_10.d u>>= 4
    v31_10:4.d u>>= 4
    v31_10:8.d u>>= 4
    v31_10:0xc.d u>>= 4
    v9_3:8.q = v9_3.q
    uint128_t v31_11 = v31_10 & v24_22
    int128_t v8_6 = vtbl1_s8(v9_3, v1)
    int128_t v9_4 = vtbl1_s8(v16, v31_11)
    uint128_t v31_12 = vextq_s8(v31_11, v31_11, 8)
    int128_t v30_11 = vtbl1_s8(v7, v30_10)
    int128_t v25_24 = vtbl1_s8(v7, v28_4 & v25_22)
    int128_t v30_12 = v9_4 ^ v30_11
    int128_t v25_25 = vtbl1_s8(v16, v31_12) ^ v25_24
    int128_t v9_5 = v30_12 ^ v8_6
    int128_t v31_14 = v24_22 & v30_12
    v8_6:8.q = vtbl1_s8(v27_8, v2)
    v30_12:8.q = v25_25.q
    int128_t v28_5 = v30_12 ^ v8_6
    v30_12.d u>>= 4
    v30_12:4.d u>>= 4
    v30_12:8.d u>>= 4
    v30_12:0xc.d u>>= 4
    uint128_t v24_23 = v30_12 & v24_22
    v9_5:8.q = v9_5.q
    int128_t v27_10 = vtbl1_s8(v17_10, v31_14)
    int128_t v30_13 = vtbl1_s8(v20_12, v24_23)
    int128_t v31_15 = vtbl1_s8(v9_5, v1)
    int64_t v25_27 = vtbl1_s8(v17_10, v28_4 & v25_25)
    int128_t v28_6 = vtbl1_s8(v28_5, v2)
    uint128_t v24_24 = vextq_s8(v24_23, v24_23, 8)
    v26_10 = (&data_23ece20)[zx.q(x9_3.d + 4) & 2]
    int64_t v24_26 = v25_27 ^ v28_6.q ^ vtbl1_s8(v20_12, v24_24)
    void* x15_5 = *(x22 + 0x20)
    int128_t v27_12
    v27_12:8.q = (v30_13 ^ v27_10 ^ v31_15).q
    int128_t v25_29
    v25_29:8.q = v24_26
    vtbl1_s8(v27_12, v1)
    int64_t v25_30 = vtbl1_s8(v25_29, v2)
    uint128_t v29_7 = vextq_s8(v26_10, v26_10, 8)
    int128_t v24_27
    v24_27:8.q = v25_30
    vtbl1_s8(v24_27, v26_10)
    uint128_t v25_31
    v25_31:8.q = vtbl1_s8(v24_27, v29_7)
    *(x15_5 + x8_5 + 0xc0) = v25_31
    v25_31 = data_23ecbb0
    uint128_t v18_5 = vextq_s8(zx.o(0), v18_4, 0xc) ^ v18_4
    v27_12 = data_23eca70
    v26_10 = data_23eca80
    uint128_t v18_6 = v18_5 ^ vextq_s8(zx.o(0), v18_5, 8)
    int128_t v24_30 = vtbl1_s8(v23_2, v22_5)
    int128_t v30_14 = v25_31 & v24_30
    int128_t v31_17 = vextq_s8(v25_31, v25_31, 8) & v24_30
    v24_30:8.q = v24_30.q
    int128_t v30_15 = vtbl1_s8(v26_10, v30_14)
    int128_t v26_11 = vtbl1_s8(v26_10, v31_17)
    v31_17.d = v24_30.d u>> 4
    v31_17:4.d = v24_30:4.d u>> 4
    v31_17:8.d = v24_30:8.d u>> 4
    v31_17:0xc.d = v24_30:0xc.d u>> 4
    uint128_t v25_32 = v31_17 & v25_31
    uint128_t v24_32 = v25_32 ^ (v25_31 & v24_30)
    uint128_t v8_7 = vextq_s8(v25_32, v25_32, 8)
    v28_6 = data_23eca90
    v29_7 = data_23ecaa0
    int128_t v31_18 = vtbl1_s8(v27_12, v25_32)
    int128_t v9_6 = vtbl1_s8(v27_12, v8_7)
    int128_t v10_4 = vtbl1_s8(v27_12, v24_32)
    uint128_t v11_3 = vextq_s8(v24_32, v24_32, 8)
    int128_t v26_12 = vtbl1_s8(v27_12, v11_3) ^ v26_11
    int128_t v31_20 = vtbl1_s8(v27_12, v31_18 ^ v30_15)
    int128_t v9_8 = vtbl1_s8(v27_12, v9_6 ^ v26_11)
    int128_t v30_17 = vtbl1_s8(v27_12, v10_4 ^ v30_15)
    int128_t v26_13 = vtbl1_s8(v27_12, v26_12)
    vtbl1_s8(v28_6, v31_20 ^ v24_32)
    int64_t v27_14 = vtbl1_s8(v28_6, v9_8 ^ v11_3)
    vtbl1_s8(v29_7, v30_17 ^ v25_32)
    int128_t v24_34
    v24_34:8.q = v27_14
    int128_t v25_34
    v25_34:8.q = vtbl1_s8(v29_7, v26_13 ^ v8_7)
    v18_4 = v18_6 ^ v24_34 ^ v25_34 ^ v0
    uint128_t v24_35 = v18_4 ^ v0
    int64_t v25_35 = vtbl1_s8(v24_35, v2)
    v24_35:8.q = v24_35.q
    int128_t v24_36
    v24_36:8.q = vtbl1_s8(v24_35, v1).q
    int128_t v26_16
    v26_16:8.q = v25_35
    int128_t v24_37 = vtbl1_s8(v24_36, v1)
    uint128_t v10_5 = (&data_23ece20)[zx.q(x9_3.d + 5) & 3]
    v24_37:8.q = v24_37.q
    int128_t v27_15
    v27_15:8.q = vtbl1_s8(v26_16, v2)
    void* x16_5 = *x20_1
    vtbl1_s8(v24_37, v1)
    int128_t v24_38
    v24_38:8.q = vtbl1_s8(v27_15, v2).q
    uint128_t v31_21 = vextq_s8(v10_5, v10_5, 8)
    int128_t v24_39 = v27_15 ^ v26_16 ^ v24_38
    vtbl1_s8(v24_39, v10_5)
    int128_t v25_38
    v25_38:8.q = vtbl1_s8(v24_39, v31_21).q
    *(x16_5 + x14_1 + 0x30) = v25_38
    uint128_t v24_40 = data_23ecbb0
    v25_38.d = v18_4.d u>> 4
    v25_38:4.d = v18_4:4.d u>> 4
    v25_38:8.d = v18_4:8.d u>> 4
    v25_38:0xc.d = v18_4:0xc.d u>> 4
    uint128_t v27_16 = v24_40 & v18_4
    uint128_t v25_39 = v24_40 & v25_38
    int128_t v30_18 = vtbl1_s8(v3, v27_16)
    uint128_t v27_17 = vextq_s8(v27_16, v27_16, 8)
    int128_t v31_22 = vtbl1_s8(v4, v25_39)
    uint128_t v25_40 = vextq_s8(v25_39, v25_39, 8)
    int128_t v27_18 = vtbl1_s8(v3, v27_17)
    int128_t v30_19 = v31_22 ^ v30_18
    int128_t v25_42 = vtbl1_s8(v4, v25_40) ^ v27_18
    int128_t v27_19 = v30_19
    int128_t v31_23 = v24_40 & v30_19
    v30_19:8.q = v25_42.q
    int64_t v8_8 = vtbl1_s8(v30_19, v2)
    v30_19.d u>>= 4
    v30_19:4.d u>>= 4
    v30_19:8.d u>>= 4
    v30_19:0xc.d u>>= 4
    uint128_t v28_7 = vextq_s8(v24_40, v24_40, 8)
    uint128_t v30_20 = v30_19 & v24_40
    int128_t v9_9 = vtbl1_s8(v6, v30_20)
    uint128_t v30_21 = vextq_s8(v30_20, v30_20, 8)
    v27_19:8.q = v27_19.q
    int128_t v31_24 = vtbl1_s8(v5, v31_23)
    int128_t v25_44 = vtbl1_s8(v5, v28_7 & v25_42)
    int128_t v31_25 = v9_9 ^ v31_24
    int128_t v25_45 = vtbl1_s8(v6, v30_21) ^ v25_44
    int128_t v9_10 = v31_25 ^ vtbl1_s8(v27_19, v1)
    int128_t v30_23 = v24_40 & v31_25
    int128_t v27_20
    v27_20:8.q = v8_8
    v31_25:8.q = v25_45.q
    int128_t v27_21 = v31_25 ^ v27_20
    v31_25.d u>>= 4
    v31_25:4.d u>>= 4
    v31_25:8.d u>>= 4
    v31_25:0xc.d u>>= 4
    v9_10:8.q = v9_10.q
    uint128_t v31_26 = v31_25 & v24_40
    int128_t v8_9 = vtbl1_s8(v9_10, v1)
    int128_t v9_11 = vtbl1_s8(v16, v31_26)
    uint128_t v31_27 = vextq_s8(v31_26, v31_26, 8)
    int128_t v30_24 = vtbl1_s8(v7, v30_23)
    int128_t v25_47 = vtbl1_s8(v7, v28_7 & v25_45)
    int128_t v30_25 = v9_11 ^ v30_24
    int128_t v25_48 = vtbl1_s8(v16, v31_27) ^ v25_47
    entry_v9 = v30_25 ^ v8_9
    int128_t v31_29 = v24_40 & v30_25
    v8_9:8.q = vtbl1_s8(v27_21, v2)
    v30_25:8.q = v25_48.q
    int128_t v28_8 = v30_25 ^ v8_9
    v30_25.d u>>= 4
    v30_25:4.d u>>= 4
    v30_25:8.d u>>= 4
    v30_25:0xc.d u>>= 4
    uint128_t v24_41 = v30_25 & v24_40
    entry_v9:8.q = entry_v9.q
    int128_t v27_23 = vtbl1_s8(v17_10, v31_29)
    v30 = vtbl1_s8(v20_12, v24_41)
    int128_t v31_30 = vtbl1_s8(entry_v9, v1)
    int64_t v25_50 = vtbl1_s8(v17_10, v28_7 & v25_48)
    v28 = vtbl1_s8(v28_8, v2)
    uint128_t v24_42 = vextq_s8(v24_41, v24_41, 8)
    v26_9 = (&data_23ece20)[zx.q(x9_3.d - 1) & 3]
    int64_t v24_44 = v25_50 ^ v28.q ^ vtbl1_s8(v20_12, v24_42)
    void* x13_1 = *(x22 + 0x20)
    v27:8.q = (v30 ^ v27_23 ^ v31_30).q
    uint128_t v25_52
    v25_52:8.q = v24_44
    vtbl1_s8(v27, v1)
    int64_t v25_53 = vtbl1_s8(v25_52, v2)
    uint128_t v29_8 = vextq_s8(v26_9, v26_9, 8)
    int128_t v24_45
    v24_45:8.q = v25_53
    vtbl1_s8(v24_45, v26_9)
    v25_10:8.q = vtbl1_s8(v24_45, v29_8).q
    *(x13_1 + x8_5 + 0xb0) = v25_10
    
    if (x9_3 == 0xa)
        break
    
    v27 = data_23ecbb0
    x9_3 += 2
    x11 = &x11[1]
    x8_5 -= 0x20

v0 = data_23ecbb0
v1 = data_23ed000
v5 = data_23eca70
v4 = data_23eca80
int128_t v2_1 = vtbl1_s8(v18_4, v21_18)
uint128_t v1_1 = v1 ^ v23_2
int128_t v16_1 = v0 & v2_1
int128_t v17_12 = vextq_s8(v0, v0, 8) & v2_1
v2_1:8.q = v2_1.q
uint128_t v18_9 = vextq_s8(zx.o(0), v1_1, 0xc)
int128_t v16_2 = vtbl1_s8(v4, v16_1)
int128_t v4_1 = vtbl1_s8(v4, v17_12)
v17_12.d = v2_1.d u>> 4
v17_12:4.d = v2_1:4.d u>> 4
v17_12:8.d = v2_1:8.d u>> 4
v17_12:0xc.d = v2_1:0xc.d u>> 4
uint128_t v1_2 = v18_9 ^ v1_1
uint128_t v17_13 = v17_12 & v0
uint128_t v3_1 = vextq_s8(zx.o(0), v1_2, 8)
uint128_t v2_3 = v17_13 ^ (v0 & v2_1)
uint128_t v18_10 = vextq_s8(v17_13, v17_13, 8)
v6 = data_23eca90
v7 = data_23ecaa0
int128_t v3_2 = vtbl1_s8(v5, v17_13)
int128_t v19_14 = vtbl1_s8(v5, v18_10)
int128_t v20_13 = vtbl1_s8(v5, v2_3)
uint128_t v21_19 = vextq_s8(v2_3, v2_3, 8)
int128_t v4_2 = vtbl1_s8(v5, v21_19) ^ v4_1
int128_t v3_4 = vtbl1_s8(v5, v3_2 ^ v16_2)
int128_t v19_16 = vtbl1_s8(v5, v19_14 ^ v4_1)
int128_t v16_4 = vtbl1_s8(v5, v20_13 ^ v16_2)
int128_t v4_3 = vtbl1_s8(v5, v4_2)
uint128_t v20_14 = data_23ece40
vtbl1_s8(v6, v3_4 ^ v2_3)
int64_t v6_1 = vtbl1_s8(v6, v19_16 ^ v21_19)
vtbl1_s8(v7, v16_4 ^ v17_13)
int128_t v2_5
v2_5:8.q = v6_1
int128_t v16_6
v16_6:8.q = vtbl1_s8(v7, v4_3 ^ v18_10)
v3_4.b = 0x5b
v3_4:1.b = 0x5b
v3_4:2.b = 0x5b
v3_4:3.b = 0x5b
v3_4:4.b = 0x5b
v3_4:5.b = 0x5b
v3_4:6.b = 0x5b
v3_4:7.b = 0x5b
v3_4:8.b = 0x5b
v3_4:9.b = 0x5b
v3_4:0xa.b = 0x5b
v3_4:0xb.b = 0x5b
v3_4:0xc.b = 0x5b
v3_4:0xd.b = 0x5b
v3_4:0xe.b = 0x5b
v3_4:0xf.b = 0x5b
int128_t v1_5 = v3_1 ^ v1_2 ^ v2_5 ^ v16_6
uint128_t v18_11 = vextq_s8(v20_14, v20_14, 8)
int128_t v2_6 = v1_5 ^ v3_4
v5 = data_71b7c0
vtbl1_s8(v2_6, v20_14)
int64_t v2_7 = vtbl1_s8(v2_6, v18_11)
v21_19 = data_71a8d0
int128_t v6_2
v6_2:8.q = v2_7
int128_t v3_5 = v6_2 ^ v3_4
uint128_t v4_6 = v1_5 & v0
v1_5.d u>>= 4
v1_5:4.d u>>= 4
v1_5:8.d u>>= 4
v1_5:0xc.d u>>= 4
uint128_t v6_3 = v3_5 & v0
v3_5.d u>>= 4
v3_5:4.d u>>= 4
v3_5:8.d u>>= 4
v3_5:0xc.d u>>= 4
uint128_t v1_6 = v1_5 & v0
vtbl1_s8(v5, v6_3)
uint128_t v6_4 = vextq_s8(v6_3, v6_3, 8)
uint128_t v0_1 = v3_5 & v0
void* x9_4 = *x20_1
v17_13 = data_71bb20
int64_t v3_6 = vtbl1_s8(v5, v6_4)
vtbl1_s8(v21_19, v0_1)
uint128_t v0_2 = vextq_s8(v0_1, v0_1, 8)
int128_t v19_17 = data_71b570
int128_t v5_2
v5_2:8.q = vtbl1_s8(v21_19, v0_2) ^ v3_6
vtbl1_s8(v17_13, v4_6)
uint128_t v4_7 = vextq_s8(v4_6, v4_6, 8)
*(x9_4 + 0xe0) = v5_2
int64_t v2_8 = vtbl1_s8(v17_13, v4_7)
vtbl1_s8(v19_17, v1_6)
uint128_t v1_7 = vextq_s8(v1_6, v1_6, 8)
int128_t* x8_6 = *(x22 + 0x20)
entry_v9.q = var_38
int128_t v1_8
v1_8:8.q = vtbl1_s8(v19_17, v1_7) ^ v2_8
*x8_6 = v1_8
