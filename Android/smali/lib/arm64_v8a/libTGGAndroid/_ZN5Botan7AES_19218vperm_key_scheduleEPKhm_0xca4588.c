// 函数: _ZN5Botan7AES_19218vperm_key_scheduleEPKhm
// 地址: 0xca4588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint128_t entry_v10
int64_t var_48 = entry_v10.q
uint128_t entry_v9
int64_t var_40 = entry_v9.q
int128_t entry_v8
int64_t var_38 = entry_v8.q
int64_t x8 = *(arg1 + 8)
int64_t x10 = *(arg1 + 0x10) - x8
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
int128_t v20
uint128_t v21
int128_t v23
int128_t v24
int128_t v25
int128_t v29
int128_t v30
int128_t v31

if (x10 s>> 2 u<= 0x33)
    v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v19, v20, v21, v23, v24, v25, v29, v30, v31 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
else if (x10 != 0xd0)
    *(arg1 + 0x10) = x8 + 0xd0

void* x11 = *(arg1 + 0x20)
void* x8_3 = *(arg1 + 0x28) - x11

if (x8_3 s>> 2 u<= 0x33)
    v1, v2, v3, v4, v5, v6, v7, v16, v17, v18, v19, v20, v21, v23, v24, v25, v29, v30, v31 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[0x20])
    x11 = *(arg1 + 0x20)
else if (x8_3 != 0xd0)
    *(arg1 + 0x28) = x11 + 0xd0

v19 = *arg2
v21 = data_23ece20
v20 = *(arg2 + 8)
v24.d = v19.d u>> 4
v24:4.d = v19:4.d u>> 4
v24:8.d = v19:8.d u>> 4
v24:0xc.d = v19:0xc.d u>> 4
vtbl1_s8(v19, v21)
int128_t v22
v22:8.q = vtbl1_s8(v19, vextq_s8(v21, v21, 8)).q
*(x11 + 0xc0) = v22
v23 = data_23ecbb0
int128_t v21_2 = data_23eca50
v22 = data_23eca60
v25.d = v20.d u>> 4
v25:4.d = v20:4.d u>> 4
v25:8.d = v20:8.d u>> 4
v25:0xc.d = v20:0xc.d u>> 4
uint128_t v19_1 = v23 & v19
uint128_t v24_1 = v23 & v24
uint128_t v20_1 = v23 & v20
uint128_t v23_1 = v23 & v25
vtbl1_s8(v21_2, v19_1)
uint128_t v19_2 = vextq_s8(v19_1, v19_1, 8)
vtbl1_s8(v22, v24_1)
v6 = data_71cfb0
uint128_t v24_2 = vextq_s8(v24_1, v24_1, 8)
vtbl1_s8(v21_2, v20_1)
uint128_t v20_2 = vextq_s8(v20_1, v20_1, 8)
uint128_t v27 = vtbl1_s8(v21_2, v19_2)
uint128_t v19_3 = vextq_s8(v23_1, v23_1, 8)
v3.q = 0x407060500030201
v4.q = 0xc0f0e0d080b0a09
v5 = data_71d3e0
int128_t v28 = vtbl1_s8(v21_2, v20_2)
vtbl1_s8(v22, v23_1)
int128_t v21_3 = vtbl1_s8(v22, v24_2)
int128_t v22_1 = vtbl1_s8(v22, v19_3)
v19_3 = data_71b1e0
v2.q = 0xc0f0e0d0c0f0e0d
v16 = data_71c9f0
v17 = data_71d280
v18 = data_71abc0
int128_t v23_2 = v21_3 ^ v27
int128_t v24_3 = v22_1 ^ v28
v7 = data_71abb0
int128_t v20_3 = data_71d0b0
v21_3 = data_71b960
v22_1.q = 0xf0e0d0c0b0a0908
int128_t v25_2
v25_2:8.q = v23_2.q
v23_2.q = 0xf0e0d0c0f0e0d0c
uint128_t v26_2
v26_2:8.q = v24_3.q
v24_3.q = 0xb0a090803020100
**(arg1 + 8) = v25_2
int64_t i = 0
v1.b = 0x5b
v1:1.b = 0x5b
v1:2.b = 0x5b
v1:3.b = 0x5b
v1:4.b = 0x5b
v1:5.b = 0x5b
v1:6.b = 0x5b
v1:7.b = 0x5b
v1:8.b = 0x5b
v1:9.b = 0x5b
v1:0xa.b = 0x5b
v1:0xb.b = 0x5b
v1:0xc.b = 0x5b
v1:0xd.b = 0x5b
v1:0xe.b = 0x5b
v1:0xf.b = 0x5b
int64_t result

do
    v27 = data_23ecbb0
    entry_v9 = (&data_23ecfa0)[i * 2]
    v29 = data_23eca70
    v30 = data_23eca80
    int128_t v28_10 = vtbl1_s8(v26_2, v2)
    uint128_t v25_3 = entry_v9 ^ v25_2
    int128_t v12_2 = vextq_s8(v27, v27, 8) & v28_10
    int128_t v9 = vtbl1_s8(v30, v27 & v28_10)
    v28_10:8.q = v28_10.q
    uint128_t v25_4 = vextq_s8(zx.o(0), v25_3, 0xc) ^ v25_3
    uint128_t v11_2
    v11_2.d = v28_10.d u>> 4
    v11_2:4.d = v28_10:4.d u>> 4
    v11_2:8.d = v28_10:8.d u>> 4
    v11_2:0xc.d = v28_10:0xc.d u>> 4
    uint128_t v27_3 = v11_2 & v27
    int128_t v30_3 = vtbl1_s8(v30, v12_2)
    uint128_t v12_3 = vextq_s8(zx.o(0), v25_4, 8)
    uint128_t v28_12 = v27_3 ^ (v27 & v28_10)
    uint128_t v13_1 = vextq_s8(v27_3, v27_3, 8)
    v31 = data_23eca90
    entry_v8 = data_23ecaa0
    int128_t v11_3 = vtbl1_s8(v29, v27_3)
    int128_t v12_4 = vtbl1_s8(v29, v13_1)
    int128_t v14_1 = vtbl1_s8(v29, v28_12)
    uint128_t v15_1 = vextq_s8(v28_12, v28_12, 8)
    int128_t v14_2 = vtbl1_s8(v29, v15_1)
    int128_t v11_5 = vtbl1_s8(v29, v11_3 ^ v9)
    int128_t v12_6 = vtbl1_s8(v29, v12_4 ^ v30_3)
    int128_t v9_2 = vtbl1_s8(v29, v14_1 ^ v9)
    int128_t v29_9 = vtbl1_s8(v29, v14_2 ^ v30_3)
    vtbl1_s8(v31, v11_5 ^ v28_12)
    int64_t v30_6 = vtbl1_s8(v31, v12_6 ^ v15_1)
    vtbl1_s8(entry_v8, v9_2 ^ v27_3)
    int128_t v28_14
    v28_14:8.q = v30_6
    int128_t v27_5
    v27_5:8.q = vtbl1_s8(entry_v8, v29_9 ^ v13_1)
    uint128_t v25_8 = v25_4 ^ v12_3 ^ v28_14 ^ v27_5 ^ v1
    uint128_t v27_6 = vextq_s8(v26_2, v25_8, 8)
    int128_t v28_15 = v27_6 ^ v1
    int64_t v29_12 = vtbl1_s8(v28_15, v4)
    v28_15:8.q = v28_15.q
    int128_t v28_16
    v28_16:8.q = vtbl1_s8(v28_15, v3).q
    int128_t v31_1
    v31_1:8.q = v29_12
    int128_t v28_17 = vtbl1_s8(v28_16, v3)
    entry_v10 = (&data_23ece20)[zx.q(i.d - 1) & 3]
    v28_17:8.q = v28_17.q
    int128_t v8_4
    v8_4:8.q = vtbl1_s8(v31_1, v4)
    int64_t x5_1 = *(arg1 + 8)
    vtbl1_s8(v28_17, v3)
    int128_t v28_18
    v28_18:8.q = vtbl1_s8(v8_4, v4)
    int64_t x2_1 = i * 3
    uint128_t v30_7 = vextq_s8(entry_v10, entry_v10, 8)
    int128_t v28_19 = v8_4 ^ v31_1 ^ v28_18
    int64_t x4_2 = x2_1 << 4
    vtbl1_s8(v28_19, entry_v10)
    int128_t v29_15
    v29_15:8.q = vtbl1_s8(v28_19, v30_7).q
    *(x4_2 + x5_1 + 0x10) = v29_15
    uint128_t v28_20 = data_23ecbb0
    v29_15.d = v27_6.d u>> 4
    v29_15:4.d = v27_6:4.d u>> 4
    v29_15:8.d = v27_6:8.d u>> 4
    v29_15:0xc.d = v27_6:0xc.d u>> 4
    v30_7 = (&data_23ece20)[zx.q(i.d - 1) & 3]
    int64_t x5_3 = *(arg1 + 0x20)
    uint128_t v27_7 = v28_20 & v27_6
    uint128_t v29_16 = v28_20 & v29_15
    int128_t v9_3 = vtbl1_s8(v5, v27_7)
    uint128_t v27_8 = vextq_s8(v27_7, v27_7, 8)
    int128_t v10 = vtbl1_s8(v6, v29_16)
    uint128_t v29_17 = vextq_s8(v29_16, v29_16, 8)
    int128_t v27_9 = vtbl1_s8(v5, v27_8)
    int128_t v9_4 = v10 ^ v9_3
    int128_t v27_10 = vtbl1_s8(v6, v29_17) ^ v27_9
    int128_t v29_19 = v9_4
    int128_t v10_1 = v28_20 & v9_4
    v9_4:8.q = v27_10.q
    int64_t v11_6 = vtbl1_s8(v9_4, v4)
    v9_4.d u>>= 4
    v9_4:4.d u>>= 4
    v9_4:8.d u>>= 4
    v9_4:0xc.d u>>= 4
    uint128_t v31_3 = vextq_s8(v28_20, v28_20, 8)
    uint128_t v9_5 = v9_4 & v28_20
    int128_t v12_7 = vtbl1_s8(v16, v9_5)
    uint128_t v9_6 = vextq_s8(v9_5, v9_5, 8)
    v29_19:8.q = v29_19.q
    int128_t v10_2 = vtbl1_s8(v7, v10_1)
    int128_t v27_12 = vtbl1_s8(v7, v31_3 & v27_10)
    int128_t v10_3 = v12_7 ^ v10_2
    int128_t v27_13 = vtbl1_s8(v16, v9_6) ^ v27_12
    int128_t v12_8 = v10_3 ^ vtbl1_s8(v29_19, v3)
    int128_t v9_8 = v28_20 & v10_3
    int128_t v29_20
    v29_20:8.q = v11_6
    v10_3:8.q = v27_13.q
    int128_t v29_21 = v10_3 ^ v29_20
    v10_3.d u>>= 4
    v10_3:4.d u>>= 4
    v10_3:8.d u>>= 4
    v10_3:0xc.d u>>= 4
    v12_8:8.q = v12_8.q
    uint128_t v10_4 = v10_3 & v28_20
    int128_t v11_7 = vtbl1_s8(v12_8, v3)
    int128_t v12_9 = vtbl1_s8(v18, v10_4)
    uint128_t v10_5 = vextq_s8(v10_4, v10_4, 8)
    int128_t v9_9 = vtbl1_s8(v17, v9_8)
    int128_t v27_15 = vtbl1_s8(v17, v31_3 & v27_13)
    int128_t v9_10 = v12_9 ^ v9_9
    int128_t v27_16 = vtbl1_s8(v18, v10_5) ^ v27_15
    int128_t v12_10 = v9_10 ^ v11_7
    int128_t v10_7 = v28_20 & v9_10
    v11_7:8.q = vtbl1_s8(v29_21, v4)
    v9_10:8.q = v27_16.q
    int128_t v31_4 = v9_10 ^ v11_7
    v9_10.d u>>= 4
    v9_10:4.d u>>= 4
    v9_10:8.d u>>= 4
    v9_10:0xc.d u>>= 4
    uint128_t v28_21 = v9_10 & v28_20
    v12_10:8.q = v12_10.q
    int128_t v29_23 = vtbl1_s8(v19_3, v10_7)
    int128_t v29_25
    v29_25:8.q = (vtbl1_s8(v20_3, v28_21) ^ v29_23 ^ vtbl1_s8(v12_10, v3)).q
    int128_t v28_24
    v28_24:8.q = vtbl1_s8(v19_3, v31_3 & v27_16) ^ vtbl1_s8(v31_4, v4)
        ^ vtbl1_s8(v20_3, vextq_s8(v28_21, v28_21, 8))
    vtbl1_s8(v29_25, v3)
    int64_t v28_25 = vtbl1_s8(v28_24, v4)
    int64_t x17_2 = i * -0xc
    uint128_t v8_5 = vextq_s8(v30_7, v30_7, 8)
    int128_t v27_21
    v27_21:8.q = v28_25
    int64_t x3_2 = x17_2 << 2
    vtbl1_s8(v27_21, v30_7)
    int128_t v28_26
    v28_26:8.q = vtbl1_s8(v27_21, v8_5).q
    int128_t v26_5 = v26_2 & v21_3
    *(x3_2 + x5_3 + 0xb0) = v28_26
    int128_t v27_22
    v27_22.q = 0
    v27_22:8.q = 0
    v27_22:8.q = vtbl1_s8(v26_5, v24_3)
    vtbl1_s8(v25_8, v22_1)
    int128_t v28_28
    v28_28:8.q = vtbl1_s8(v25_8, v23_2).q
    int128_t v26_7 = v26_5 ^ v28_28 ^ v27_22
    int128_t v27_23 = v26_7 ^ v1
    int64_t v28_29 = vtbl1_s8(v27_23, v4)
    v27_23:8.q = v27_23.q
    uint128_t v27_24
    v27_24:8.q = vtbl1_s8(v27_23, v3).q
    uint128_t v30_8
    v30_8:8.q = v28_29
    int128_t v27_25 = vtbl1_s8(v27_24, v3)
    int128_t v31_6
    v31_6:8.q = vtbl1_s8(v30_8, v4)
    v27_25:8.q = v27_25.q
    int128_t v28_31 = v31_6 ^ v30_8
    v30_8 = (&data_23ece20)[zx.q(i.d + 2) & 3]
    vtbl1_s8(v27_25, v3)
    int64_t v31_7 = vtbl1_s8(v31_6, v4)
    int64_t x6_3 = *(arg1 + 8)
    int128_t v27_26
    v27_26:8.q = v31_7
    int128_t v27_27 = v28_31 ^ v27_26
    vtbl1_s8(v27_27, v30_8)
    uint128_t v28_32
    v28_32:8.q = vtbl1_s8(v27_27, vextq_s8(v30_8, v30_8, 8))
    *(x4_2 + x6_3 + 0x20) = v28_32
    v28_32 = data_23ecbb0
    int128_t v29_26
    v29_26.d = v26_7.d u>> 4
    v29_26:4.d = v26_7:4.d u>> 4
    v29_26:8.d = v26_7:8.d u>> 4
    v29_26:0xc.d = v26_7:0xc.d u>> 4
    uint128_t v30_9 = (&data_23ece20)[zx.q(i.d + 2) & 3]
    int64_t x1_2 = *(arg1 + 0x20)
    uint128_t v31_8 = v28_32 & v26_7
    uint128_t v29_27 = v28_32 & v29_26
    int128_t v10_9 = vtbl1_s8(v5, v31_8)
    uint128_t v31_9 = vextq_s8(v31_8, v31_8, 8)
    int128_t v11_8 = vtbl1_s8(v6, v29_27)
    uint128_t v29_28 = vextq_s8(v29_27, v29_27, 8)
    int128_t v31_10 = vtbl1_s8(v5, v31_9)
    int128_t v10_10 = v11_8 ^ v10_9
    int128_t v29_30 = vtbl1_s8(v6, v29_28) ^ v31_10
    int128_t v31_11 = v10_10
    int128_t v11_9 = v28_32 & v10_10
    v10_10:8.q = v29_30.q
    int64_t v12_11 = vtbl1_s8(v10_10, v4)
    v10_10.d u>>= 4
    v10_10:4.d u>>= 4
    v10_10:8.d u>>= 4
    v10_10:0xc.d u>>= 4
    uint128_t v8_6 = vextq_s8(v28_32, v28_32, 8)
    uint128_t v10_11 = v10_10 & v28_32
    int128_t v13_2 = vtbl1_s8(v16, v10_11)
    uint128_t v10_12 = vextq_s8(v10_11, v10_11, 8)
    v31_11:8.q = v31_11.q
    int128_t v11_10 = vtbl1_s8(v7, v11_9)
    int128_t v29_32 = vtbl1_s8(v7, v8_6 & v29_30)
    int128_t v11_11 = v13_2 ^ v11_10
    int128_t v29_33 = vtbl1_s8(v16, v10_12) ^ v29_32
    int128_t v13_3 = v11_11 ^ vtbl1_s8(v31_11, v3)
    int128_t v10_14 = v28_32 & v11_11
    int128_t v31_12
    v31_12:8.q = v12_11
    v11_11:8.q = v29_33.q
    int128_t v31_13 = v11_11 ^ v31_12
    v11_11.d u>>= 4
    v11_11:4.d u>>= 4
    v11_11:8.d u>>= 4
    v11_11:0xc.d u>>= 4
    v13_3:8.q = v13_3.q
    uint128_t v11_12 = v11_11 & v28_32
    int128_t v12_12 = vtbl1_s8(v13_3, v3)
    int128_t v13_4 = vtbl1_s8(v18, v11_12)
    uint128_t v11_13 = vextq_s8(v11_12, v11_12, 8)
    int128_t v10_15 = vtbl1_s8(v17, v10_14)
    int128_t v29_35 = vtbl1_s8(v17, v8_6 & v29_33)
    int128_t v10_16 = v13_4 ^ v10_15
    int128_t v29_36 = vtbl1_s8(v18, v11_13) ^ v29_35
    int128_t v13_5 = v10_16 ^ v12_12
    int128_t v11_15 = v28_32 & v10_16
    v12_12:8.q = vtbl1_s8(v31_13, v4)
    v10_16:8.q = v29_36.q
    int128_t v8_7 = v10_16 ^ v12_12
    v10_16.d u>>= 4
    v10_16:4.d u>>= 4
    v10_16:8.d u>>= 4
    v10_16:0xc.d u>>= 4
    uint128_t v28_33 = v10_16 & v28_32
    v13_5:8.q = v13_5.q
    int128_t v31_15 = vtbl1_s8(v19_3, v11_15)
    int128_t v31_17
    v31_17:8.q = (vtbl1_s8(v20_3, v28_33) ^ v31_15 ^ vtbl1_s8(v13_5, v3)).q
    int128_t v29_40
    v29_40:8.q = vtbl1_s8(v19_3, v8_6 & v29_36) ^ vtbl1_s8(v8_7, v4).q
        ^ vtbl1_s8(v20_3, vextq_s8(v28_33, v28_33, 8))
    vtbl1_s8(v31_17, v3)
    int64_t v29_41 = vtbl1_s8(v29_40, v4)
    entry_v9 = vextq_s8(v30_9, v30_9, 8)
    int128_t v28_37
    v28_37:8.q = v29_41
    vtbl1_s8(v28_37, v30_9)
    int128_t v29_42
    v29_42:8.q = vtbl1_s8(v28_37, entry_v9).q
    *(x3_2 + x1_2 + 0xa0) = v29_42
    v29_42 = *(&data_23ecfa0 + (0x10 | (0x7ffffffffffffff & i) << 5))
    uint128_t v28_38 = data_23ecbb0
    int128_t v27_29 = vtbl1_s8(v26_7, v2)
    v31_17 = data_23eca70
    v30_9 = data_23eca80
    uint128_t v25_9 = v29_42 ^ v25_8
    int128_t v29_43 = v28_38 & v27_29
    int128_t v10_19 = vextq_s8(v28_38, v28_38, 8) & v27_29
    v27_29:8.q = v27_29.q
    uint128_t v25_10 = vextq_s8(zx.o(0), v25_9, 0xc) ^ v25_9
    uint128_t v11_17
    v11_17.d = v27_29.d u>> 4
    v11_17:4.d = v27_29:4.d u>> 4
    v11_17:8.d = v27_29:8.d u>> 4
    v11_17:0xc.d = v27_29:0xc.d u>> 4
    uint128_t v11_18 = v11_17 & v28_38
    int128_t v29_44 = vtbl1_s8(v30_9, v29_43)
    int128_t v30_10 = vtbl1_s8(v30_9, v10_19)
    uint128_t v10_20 = vextq_s8(zx.o(0), v25_10, 8)
    uint128_t v27_31 = v11_18 ^ (v28_38 & v27_29)
    uint128_t v12_13 = vextq_s8(v11_18, v11_18, 8)
    int128_t v8_8 = data_23eca90
    entry_v9 = data_23ecaa0
    int128_t v10_21 = vtbl1_s8(v31_17, v11_18)
    int128_t v13_6 = vtbl1_s8(v31_17, v12_13)
    int128_t v14_3 = vtbl1_s8(v31_17, v27_31)
    uint128_t v15_2 = vextq_s8(v27_31, v27_31, 8)
    int128_t v14_4 = vtbl1_s8(v31_17, v15_2)
    entry_v10 = vtbl1_s8(v31_17, v10_21 ^ v29_44)
    int128_t v13_8 = vtbl1_s8(v31_17, v13_6 ^ v30_10)
    int128_t v29_46 = vtbl1_s8(v31_17, v14_3 ^ v29_44)
    int128_t v30_12 = vtbl1_s8(v31_17, v14_4 ^ v30_10)
    vtbl1_s8(v8_8, entry_v10 ^ v27_31)
    v31 = vtbl1_s8(v8_8, v13_8 ^ v15_2)
    vtbl1_s8(entry_v9, v29_46 ^ v11_18)
    int128_t v27_33
    v27_33:8.q = v31.q
    uint128_t v29_1
    v29_1:8.q = vtbl1_s8(entry_v9, v30_12 ^ v12_13).q
    int128_t v27_34 = v10_20 ^ v25_10 ^ v27_33 ^ v29_1
    int64_t x2_2 = x2_1 << 2
    v25_2 = v27_34 ^ v1
    
    if (i == 3)
        v29_1 = data_23ece20
        int128_t v30_1 = data_71b7c0
        v31 = data_71a8d0
        int64_t x8_5 = *(arg1 + 8)
        vtbl1_s8(v25_2, v29_1)
        int128_t v8
        v8:8.q = vtbl1_s8(v25_2, vextq_s8(v29_1, v29_1, 8))
        int128_t v29_4 = v8 ^ v1
        uint128_t v8_1 = v29_4 & v28_38
        v29_4.d u>>= 4
        v29_4:4.d u>>= 4
        v29_4:8.d u>>= 4
        v29_4:0xc.d u>>= 4
        uint128_t v28_1 = v29_4 & v28_38
        vtbl1_s8(v30_1, v8_1)
        int128_t v30_2 = vtbl1_s8(v30_1, vextq_s8(v8_1, v8_1, 8))
        vtbl1_s8(v31, v28_1)
        int128_t v29_6
        v29_6:8.q = (vtbl1_s8(v31, vextq_s8(v28_1, v28_1, 8)) ^ v30_2).q
        *(x8_5 + (x2_2 << 2) + 0x30) = v29_6
        int128_t v28_4 = data_23ecbb0
        v29_6 = data_71bb20
        v31 = data_71b570
        v30_2.d = v27_34.d u>> 4
        v30_2:4.d = v27_34:4.d u>> 4
        v30_2:8.d = v27_34:8.d u>> 4
        v30_2:0xc.d = v27_34:0xc.d u>> 4
        uint128_t v27_1 = v28_4 & v27_34
        uint128_t v28_5 = v28_4 & v30_2
        vtbl1_s8(v29_6, v27_1)
        uint128_t v27_2 = vextq_s8(v27_1, v27_1, 8)
        vtbl1_s8(v31, v28_5)
        uint128_t v28_6 = vextq_s8(v28_5, v28_5, 8)
        int64_t v29_7 = vtbl1_s8(v29_6, v27_2)
        v27:8.q = vtbl1_s8(v31, v28_6) ^ v29_7
        i = 4
    else
        int128_t v27_35 = v25_2 ^ v1
        int64_t v28_39 = vtbl1_s8(v27_35, v4)
        v27_35:8.q = v27_35.q
        i += 1
        int128_t v27_36
        v27_36:8.q = vtbl1_s8(v27_35, v3).q
        int128_t v30_14
        v30_14:8.q = v28_39
        int128_t v27_37 = vtbl1_s8(v27_36, v3)
        v29_1 = (&data_23ece20)[i & 3]
        v27_37:8.q = v27_37.q
        int128_t v31_19
        v31_19:8.q = vtbl1_s8(v30_14, v4)
        int64_t x1_4 = *(arg1 + 8)
        vtbl1_s8(v27_37, v3)
        int128_t v27_38
        v27_38:8.q = vtbl1_s8(v31_19, v4)
        uint128_t v28_41 = vextq_s8(v29_1, v29_1, 8)
        int128_t v27_39 = v31_19 ^ v30_14 ^ v27_38
        vtbl1_s8(v27_39, v29_1)
        int128_t v29_48
        v29_48:8.q = vtbl1_s8(v27_39, v28_41).q
        *(x1_4 + (x2_2 << 2) + 0x30) = v29_48
        uint128_t v27_40 = data_23ecbb0
        v28_41.d = v25_2.d u>> 4
        v28_41:4.d = v25_2:4.d u>> 4
        v28_41:8.d = v25_2:8.d u>> 4
        v28_41:0xc.d = v25_2:0xc.d u>> 4
        uint128_t v29_49 = v27_40 & v25_2
        uint128_t v30_16 = v27_40 & v28_41
        int128_t v31_21 = vtbl1_s8(v5, v29_49)
        uint128_t v29_50 = vextq_s8(v29_49, v29_49, 8)
        int128_t v8_9 = vtbl1_s8(v6, v30_16)
        uint128_t v30_17 = vextq_s8(v30_16, v30_16, 8)
        int128_t v29_51 = vtbl1_s8(v5, v29_50)
        int128_t v31_22 = v8_9 ^ v31_21
        int128_t v29_52 = vtbl1_s8(v6, v30_17) ^ v29_51
        int128_t v30_19 = v31_22
        int128_t v8_10 = v27_40 & v31_22
        v31_22:8.q = v29_52.q
        int64_t v9_12 = vtbl1_s8(v31_22, v4)
        v31_22.d u>>= 4
        v31_22:4.d u>>= 4
        v31_22:8.d u>>= 4
        v31_22:0xc.d u>>= 4
        uint128_t v28_42 = vextq_s8(v27_40, v27_40, 8)
        uint128_t v31_23 = v31_22 & v27_40
        int128_t v10_23 = vtbl1_s8(v16, v31_23)
        uint128_t v31_24 = vextq_s8(v31_23, v31_23, 8)
        v30_19:8.q = v30_19.q
        int128_t v8_11 = vtbl1_s8(v7, v8_10)
        int128_t v29_54 = vtbl1_s8(v7, v28_42 & v29_52)
        int128_t v8_12 = v10_23 ^ v8_11
        int128_t v29_55 = vtbl1_s8(v16, v31_24) ^ v29_54
        int128_t v10_24 = v8_12 ^ vtbl1_s8(v30_19, v3)
        int128_t v31_26 = v27_40 & v8_12
        int128_t v30_20
        v30_20:8.q = v9_12
        v8_12:8.q = v29_55.q
        int128_t v30_21 = v8_12 ^ v30_20
        v8_12.d u>>= 4
        v8_12:4.d u>>= 4
        v8_12:8.d u>>= 4
        v8_12:0xc.d u>>= 4
        uint128_t v8_13 = v8_12 & v27_40
        entry_v9 = vtbl1_s8(v18, v8_13)
        uint128_t v8_14 = vextq_s8(v8_13, v8_13, 8)
        int128_t v31_27 = vtbl1_s8(v17, v31_26)
        v10_24:8.q = v10_24.q
        int128_t v29_57 = vtbl1_s8(v17, v28_42 & v29_55)
        int128_t v31_28 = entry_v9 ^ v31_27
        int128_t v29_58 = vtbl1_s8(v18, v8_14) ^ v29_57
        int128_t v8_16 = v31_28 ^ vtbl1_s8(v10_24, v3)
        int128_t v10_25
        v10_25:8.q = vtbl1_s8(v30_21, v4)
        int128_t v30_23 = v27_40 & v31_28
        v31_28:8.q = v29_58.q
        int128_t v10_26 = v31_28 ^ v10_25
        v31_28.d u>>= 4
        v31_28:4.d u>>= 4
        v31_28:8.d u>>= 4
        v31_28:0xc.d u>>= 4
        uint128_t v27_41 = v31_28 & v27_40
        v8_16:8.q = v8_16.q
        int128_t v30_24 = vtbl1_s8(v19_3, v30_23)
        v31 = vtbl1_s8(v20_3, v27_41)
        entry_v8 = vtbl1_s8(v8_16, v3)
        int64_t v28_44 = vtbl1_s8(v19_3, v28_42 & v29_58)
        entry_v10 = vtbl1_s8(v10_26, v4)
        uint128_t v27_42 = vextq_s8(v27_41, v27_41, 8)
        entry_v9 = (&data_23ece20)[i & 3]
        int128_t v30_26
        v30_26:8.q = (v31 ^ v30_24 ^ entry_v8).q
        int128_t v28_46
        v28_46:8.q = v28_44 ^ entry_v10.q ^ vtbl1_s8(v20_3, v27_42)
        vtbl1_s8(v30_26, v3)
        int64_t v27_45 = vtbl1_s8(v28_46, v4)
        uint128_t v29_59 = vextq_s8(entry_v9, entry_v9, 8)
        v30:8.q = v27_45
        vtbl1_s8(v30, entry_v9)
        v27:8.q = vtbl1_s8(v30, v29_59)
    
    result = *(arg1 + 0x20)
    int128_t v26_3 = v26_7 & v21_3
    vtbl1_s8(v25_2, v22_1)
    v30.q = 0
    v30:8.q = 0
    int128_t v28_9
    v28_9:8.q = vtbl1_s8(v25_2, v23_2)
    v30:8.q = vtbl1_s8(v26_3, v24_3).q
    v26_2 = v26_3 ^ v28_9 ^ v30
    *(result + (x17_2 << 2) + 0x90) = v27
while (i != 4)

entry_v9.q = var_40
entry_v8.q = var_38
entry_v10.q = var_48
return result
