// 函数: sub_ca6328
// 地址: 0xca6328
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_10 = v9
int64_t var_8 = arg6.q
int64_t x8 = arg3 & 0xfffffffffffffffe
int128_t v0
int128_t v1
uint128_t v2
int128_t v3
int128_t v4
uint128_t v7
int128_t v16
uint128_t v17
uint128_t v18
uint128_t v19
uint128_t v21
uint128_t v29

if (x8 != 0)
    int64_t x11_1 = 0
    
    do
        v0 = data_23ecbb0
        v1 = arg1[x11_1]
        int64_t x16_2 = x11_1 << 4 | 0x10
        v2 = data_23ecb10
        v3 = data_23ecb20
        v4 = *(arg1 + x16_2)
        uint128_t v5_8 = v0 & v1
        v1.d u>>= 4
        v1:4.d u>>= 4
        v1:8.d u>>= 4
        v1:0xc.d u>>= 4
        uint128_t v1_7 = v0 & v1
        vtbl1_s8(v2, v5_8)
        uint128_t v5_9 = vextq_s8(v5_8, v5_8, 8)
        uint128_t v7_6 = v0 & v4
        vtbl1_s8(v3, v1_7)
        v4.d u>>= 4
        v4:4.d u>>= 4
        v4:8.d u>>= 4
        v4:0xc.d u>>= 4
        uint128_t v1_8 = vextq_s8(v1_7, v1_7, 8)
        int64_t v5_10 = vtbl1_s8(v2, v5_9)
        vtbl1_s8(v2, v7_6)
        uint128_t v7_7 = vextq_s8(v7_6, v7_6, 8)
        uint128_t v4_3 = v0 & v4
        int64_t v1_9 = vtbl1_s8(v3, v1_8)
        int128_t v2_1 = vtbl1_s8(v2, v7_7)
        v7_7 = *arg4
        vtbl1_s8(v3, v4_3)
        int128_t v6_8
        v6_8:8.q = v1_9 ^ v5_10
        int128_t v4_1
        v4_1:8.q = (vtbl1_s8(v3, vextq_s8(v4_3, v4_3, 8)) ^ v2_1).q
        int128_t v20_1 = v7_7 ^ v6_8
        int128_t v19_1 = v7_7 ^ v4_1
        int128_t v1_1
        int128_t v5_1
        uint128_t v22
        
        if (arg5 != 1)
            v2_1 = data_23eca70
            v1_1 = data_23eca80
            v4_1 = data_23ecb30
            int128_t v3_8 = data_23ecb40
            v5_1 = data_23ecb70
            v6_8 = data_23ecb80
            v7_7 = data_23ecb90
            int128_t v16_4 = data_23ecba0
            v17 = data_23ecb50
            v18 = data_23ecb60
            int64_t i = 0
            
            do
                v21.d = v20_1.d u>> 4
                v21:4.d = v20_1:4.d u>> 4
                v21:8.d = v20_1:8.d u>> 4
                v21:0xc.d = v20_1:0xc.d u>> 4
                uint128_t v20_4 = v20_1 & v0
                v22.d = v19_1.d u>> 4
                v22:4.d = v19_1:4.d u>> 4
                v22:8.d = v19_1:8.d u>> 4
                v22:0xc.d = v19_1:0xc.d u>> 4
                uint128_t v21_1 = v21 & v0
                uint128_t v19_2 = v19_1 & v0
                int128_t v23_4 = vtbl1_s8(v1_1, v20_4)
                uint128_t v24_5 = vextq_s8(v20_4, v20_4, 8)
                uint128_t v22_3 = v22 & v0
                uint128_t v20_5 = v21_1 ^ v20_4
                int128_t v25_4 = vtbl1_s8(v1_1, v19_2)
                uint128_t v26_1 = vextq_s8(v19_2, v19_2, 8)
                int128_t v27_1 = vtbl1_s8(v2_1, v21_1)
                uint128_t v19_3 = v22_3 ^ v19_2
                int128_t v8 = vtbl1_s8(v2_1, v20_5)
                uint128_t v28_1 = vextq_s8(v21_1, v21_1, 8)
                int128_t v29_1 = vtbl1_s8(v2_1, v22_3)
                uint128_t v9_1 = vextq_s8(v20_5, v20_5, 8)
                int128_t v8_1 = vtbl1_s8(v2_1, v19_3)
                int128_t v24_6 = vtbl1_s8(v1_1, v24_5)
                int128_t v31_1 = vtbl1_s8(v2_1, v28_1)
                int128_t v8_2 = vtbl1_s8(v2_1, v9_1)
                uint128_t v30_1 = vextq_s8(v22_3, v22_3, 8)
                uint128_t v8_3 = vextq_s8(v19_3, v19_3, 8)
                int128_t v27_3 = vtbl1_s8(v2_1, v27_1 ^ v23_4)
                int128_t v26_2 = vtbl1_s8(v1_1, v26_1)
                int128_t v10 = vtbl1_s8(v2_1, v30_1)
                int128_t v20_6 = v27_3 ^ v20_5
                int128_t v26_3 = vtbl1_s8(v2_1, v8_3) ^ v26_2
                int128_t v27_5 = vtbl1_s8(v2_1, v29_1 ^ v25_4)
                int128_t v25_6 = vtbl1_s8(v2_1, v8_1 ^ v25_4)
                int128_t v19_4 = v27_5 ^ v19_3
                uint128_t v23_6 = vtbl1_s8(v2_1, v8 ^ v23_4)
                int128_t v29_3 = vtbl1_s8(v2_1, v31_1 ^ v24_6)
                int128_t v24_8 = vtbl1_s8(v2_1, v8_2 ^ v24_6)
                int128_t v26_4 = vtbl1_s8(v2_1, v26_3)
                int128_t v22_4 = v25_6 ^ v22_3
                v27_5 = arg4[1 + i]
                uint128_t v21_2 = v23_6 ^ v21_1
                int128_t v31_3 = vtbl1_s8(v2_1, v10 ^ v26_2)
                int128_t v29_4 = v29_3 ^ v9_1
                vtbl1_s8(v4_1, v19_4)
                int128_t v24_9 = v24_8 ^ v28_1
                int128_t v26_5 = v26_4 ^ v30_1
                vtbl1_s8(v3_8, v22_4)
                v23_6 = (&data_23ece60)[zx.q(i.d + 4) & 3]
                vtbl1_s8(v4_1, v20_6)
                int128_t v31_4 = v31_3 ^ v8_3
                vtbl1_s8(v3_8, v21_2)
                int128_t v8_5
                v8_5:8.q = vtbl1_s8(v4_1, v29_4) ^ vtbl1_s8(v3_8, v24_9)
                int128_t v25_8
                v25_8:8.q = vtbl1_s8(v4_1, v31_4) ^ vtbl1_s8(v3_8, v26_5)
                int128_t v8_6 = v8_5 ^ v27_5
                vtbl1_s8(v5_1, v20_6)
                uint128_t v30_6 = vextq_s8(v23_6, v23_6, 8)
                int128_t v25_9 = v25_8 ^ v27_5
                vtbl1_s8(v8_6, v23_6)
                int64_t v9_5 = vtbl1_s8(v5_1, v29_4)
                int64_t v8_7 = vtbl1_s8(v8_6, v30_6)
                vtbl1_s8(v5_1, v19_4)
                vtbl1_s8(v25_9, v23_6)
                int64_t v25_11 = vtbl1_s8(v5_1, v31_4) ^ vtbl1_s8(v25_9, v30_6)
                vtbl1_s8(v6_8, v21_2)
                int64_t v8_9 = v9_5 ^ v8_7 ^ vtbl1_s8(v6_8, v24_9)
                vtbl1_s8(v6_8, v22_4)
                int64_t v25_12 = v25_11 ^ vtbl1_s8(v6_8, v26_5)
                int128_t v27_8
                v27_8:8.q = v8_9
                vtbl1_s8(v7_7, v20_6)
                int128_t v28_6
                v28_6:8.q = v25_12
                vtbl1_s8(v27_8, v23_6)
                int64_t v9_13 = vtbl1_s8(v7_7, v29_4)
                int64_t v27_9 = vtbl1_s8(v27_8, v30_6)
                vtbl1_s8(v7_7, v19_4)
                vtbl1_s8(v28_6, v23_6)
                int64_t v28_8 = vtbl1_s8(v7_7, v31_4) ^ vtbl1_s8(v28_6, v30_6)
                vtbl1_s8(v16_4, v21_2)
                int64_t v27_11 = v9_13 ^ v27_9 ^ vtbl1_s8(v16_4, v24_9)
                vtbl1_s8(v16_4, v22_4)
                int128_t v25_15
                v25_15:8.q = v27_11
                arg6:8.q = v28_8 ^ vtbl1_s8(v16_4, v26_5)
                vtbl1_s8(v17, v20_6)
                vtbl1_s8(v17, v19_4)
                v29 = vtbl1_s8(v17, v29_4)
                int128_t v31_5 = vtbl1_s8(v17, v31_4)
                vtbl1_s8(v25_15, v23_6)
                int128_t v25_16 = vtbl1_s8(v25_15, v30_6)
                vtbl1_s8(arg6, v23_6)
                int128_t v28_10 = vtbl1_s8(arg6, v30_6)
                vtbl1_s8(v18, v21_2)
                vtbl1_s8(v18, v22_4)
                i += 1
                v20_1:8.q = (v29 ^ v25_16 ^ vtbl1_s8(v18, v24_9)).q
                v19_1:8.q = (v31_5 ^ v28_10 ^ vtbl1_s8(v18, v26_5)).q
            while (arg5 - 1 != i)
        
        v1_1 = data_23eca70
        v2_1 = data_23eca80
        v4_1.d = v20_1.d u>> 4
        v4_1:4.d = v20_1:4.d u>> 4
        v4_1:8.d = v20_1:8.d u>> 4
        v4_1:0xc.d = v20_1:0xc.d u>> 4
        uint128_t v3_1 = v20_1 & v0
        uint128_t v4_2 = v4_1 & v0
        uint128_t v7_1 = vextq_s8(v3_1, v3_1, 8)
        uint128_t v16_1 = v4_2 ^ v3_1
        uint128_t v17_1 = vextq_s8(v4_2, v4_2, 8)
        v5_1.d = v19_1.d u>> 4
        v5_1:4.d = v19_1:4.d u>> 4
        v5_1:8.d = v19_1:8.d u>> 4
        v5_1:0xc.d = v19_1:0xc.d u>> 4
        int128_t v3_2 = vtbl1_s8(v2_1, v3_1)
        int128_t v7_2 = vtbl1_s8(v2_1, v7_1)
        int128_t v22_1 = vtbl1_s8(v1_1, v4_2)
        int128_t v23_1 = vtbl1_s8(v1_1, v17_1)
        int128_t v24_1 = vtbl1_s8(v1_1, v16_1)
        uint128_t v6_1 = v19_1 & v0
        uint128_t v0_1 = v5_1 & v0
        uint128_t v20_2 = vextq_s8(v16_1, v16_1, 8)
        uint128_t v5_2 = vextq_s8(v6_1, v6_1, 8)
        uint128_t v18_1 = v0_1 ^ v6_1
        int128_t v25_1 = vtbl1_s8(v1_1, v20_2)
        int128_t v23_3 = vtbl1_s8(v1_1, v23_1 ^ v7_2)
        int128_t v3_4 = vtbl1_s8(v1_1, v24_1 ^ v3_2)
        v19 = vextq_s8(v0_1, v0_1, 8)
        v21 = vextq_s8(v18_1, v18_1, 8)
        int128_t v6_2 = vtbl1_s8(v2_1, v6_1)
        int128_t v2_2 = vtbl1_s8(v2_1, v5_2)
        int128_t v5_3 = vtbl1_s8(v1_1, v0_1)
        int128_t v25_2 = vtbl1_s8(v1_1, v18_1)
        int128_t v20_3 = v23_3 ^ v20_2
        int128_t v3_5 = v3_4 ^ v4_2
        v4_2 = data_23ecad0
        v23_3 = data_23ecae0
        int128_t v24_2 = vtbl1_s8(v1_1, v19)
        int128_t v2_3 = vtbl1_s8(v1_1, v21) ^ v2_2
        v22 = vtbl1_s8(v1_1, v22_1 ^ v3_2)
        int128_t v7_4 = vtbl1_s8(v1_1, v25_1 ^ v7_2)
        int128_t v5_5 = vtbl1_s8(v1_1, v5_3 ^ v6_2)
        int128_t v24_4 = vtbl1_s8(v1_1, v24_2 ^ v2_2)
        int128_t v6_4 = vtbl1_s8(v1_1, v25_2 ^ v6_2)
        int128_t v1_2 = vtbl1_s8(v1_1, v2_3)
        v2_3 = arg4[arg5]
        uint128_t v16_2 = v22 ^ v16_1
        v22 = (&data_23ece20)[zx.q(neg.d(arg5.d << 4)) u>> 4 & 3]
        vtbl1_s8(v4_2, v16_2)
        v16 = vtbl1_s8(v4_2, v20_3)
        vtbl1_s8(v23_3, v3_5)
        v7 = vtbl1_s8(v23_3, v7_4 ^ v17_1)
        vtbl1_s8(v4_2, v5_5 ^ v18_1)
        v4 = vtbl1_s8(v4_2, v24_4 ^ v21)
        vtbl1_s8(v23_3, v6_4 ^ v0_1)
        int64_t v1_5 = vtbl1_s8(v23_3, v1_2 ^ v19) ^ v4.q
        int128_t v3_7
        v3_7:8.q = v7.q ^ v16.q
        v17 = vextq_s8(v22, v22, 8)
        int128_t v0_4
        v0_4:8.q = v1_5
        int128_t v1_6 = v3_7 ^ v2_3
        int128_t v0_5 = v0_4 ^ v2_3
        vtbl1_s8(v1_6, v22)
        v2:8.q = vtbl1_s8(v1_6, v17).q
        vtbl1_s8(v0_5, v22)
        v0 = vtbl1_s8(v0_5, v17)
        arg2[x11_1] = v2
        x11_1 += 2
        v3:8.q = v0.q
        *(arg2 + x16_2) = v3
    while (x11_1 != x8)

if (x8 u< arg3)
    do
        v0 = arg1[x8]
        v1 = data_23ecbb0
        v2 = data_23ecb10
        v4 = data_23ecb20
        v3 = *arg4
        uint128_t v5_15 = v1 & v0
        v0.d u>>= 4
        v0:4.d u>>= 4
        v0:8.d u>>= 4
        v0:0xc.d u>>= 4
        vtbl1_s8(v2, v5_15)
        uint128_t v0_11 = v1 & v0
        int128_t v5_17 = vtbl1_s8(v2, vextq_s8(v5_15, v5_15, 8))
        vtbl1_s8(v4, v0_11)
        int128_t v4_9 = vtbl1_s8(v4, vextq_s8(v0_11, v0_11, 8))
        uint128_t v0_12 = data_23eca70
        int128_t v2_6 = data_23eca80
        int128_t v6_14
        v6_14:8.q = (v4_9 ^ v5_17).q
        int128_t v20_9 = v3 ^ v6_14
        int128_t v4_5
        
        if (arg5 != 1)
            v4_5 = data_23ecb30
            v3 = data_23ecb40
            v5_17 = data_23ecb70
            v6_14 = data_23ecb80
            v7 = data_23ecb90
            v16 = data_23ecba0
            v17 = data_23ecb50
            v18 = data_23ecb60
            int64_t i_1 = 0
            
            do
                v21.d = v20_9.d u>> 4
                v21:4.d = v20_9:4.d u>> 4
                v21:8.d = v20_9:8.d u>> 4
                v21:0xc.d = v20_9:0xc.d u>> 4
                uint128_t v20_10 = v20_9 & v1
                uint128_t v21_4 = v21 & v1
                int128_t v22_6 = vtbl1_s8(v2_6, v20_10)
                uint128_t v23_9 = vextq_s8(v20_10, v20_10, 8)
                uint128_t v20_11 = v21_4 ^ v20_10
                int128_t v24_11 = vtbl1_s8(v0_12, v21_4)
                uint128_t v25_18 = vextq_s8(v21_4, v21_4, 8)
                int128_t v27_13 = vtbl1_s8(v0_12, v20_11)
                uint128_t v28_11 = vextq_s8(v20_11, v20_11, 8)
                int128_t v23_10 = vtbl1_s8(v2_6, v23_9)
                int128_t v26_7 = vtbl1_s8(v0_12, v25_18)
                int128_t v27_14 = vtbl1_s8(v0_12, v28_11)
                int128_t v24_13 = vtbl1_s8(v0_12, v24_11 ^ v22_6)
                int128_t v22_8 = vtbl1_s8(v0_12, v27_13 ^ v22_6)
                int128_t v26_9 = vtbl1_s8(v0_12, v26_7 ^ v23_10)
                int128_t v20_12 = v24_13 ^ v20_11
                int128_t v23_12 = vtbl1_s8(v0_12, v27_14 ^ v23_10)
                int128_t v21_5 = v22_8 ^ v21_4
                v19 = arg4[1 + i_1]
                vtbl1_s8(v4_5, v20_12)
                int128_t v24_14 = v26_9 ^ v28_11
                vtbl1_s8(v3, v21_5)
                int128_t v23_13 = v23_12 ^ v25_18
                v29 = (&data_23ece60)[zx.q(i_1.d + 4) & 3]
                int128_t v22_10
                v22_10:8.q = vtbl1_s8(v4_5, v24_14) ^ vtbl1_s8(v3, v23_13)
                int128_t v19_7 = v22_10 ^ v19
                vtbl1_s8(v5_17, v20_12)
                uint128_t v28_14 = vextq_s8(v29, v29, 8)
                vtbl1_s8(v19_7, v29)
                int64_t v25_21 = vtbl1_s8(v5_17, v24_14)
                vtbl1_s8(v6_14, v21_5)
                int128_t v22_13
                v22_13:8.q = v25_21 ^ vtbl1_s8(v19_7, v28_14) ^ vtbl1_s8(v6_14, v23_13)
                vtbl1_s8(v7, v20_12)
                int64_t v25_22 = vtbl1_s8(v7, v24_14)
                vtbl1_s8(v22_13, v29)
                int64_t v22_14 = vtbl1_s8(v22_13, v28_14)
                vtbl1_s8(v16, v21_5)
                int128_t v19_13
                v19_13:8.q = v25_22 ^ v22_14 ^ vtbl1_s8(v16, v23_13)
                vtbl1_s8(v17, v20_12)
                int128_t v24_15 = vtbl1_s8(v17, v24_14)
                vtbl1_s8(v19_13, v29)
                int128_t v19_14 = vtbl1_s8(v19_13, v28_14)
                vtbl1_s8(v18, v21_5)
                i_1 += 1
                v20_9:8.q = (v24_15 ^ v19_14 ^ vtbl1_s8(v18, v23_13)).q
            while (arg5 - 1 != i_1)
        
        v4_5.d = v20_9.d u>> 4
        v4_5:4.d = v20_9:4.d u>> 4
        v4_5:8.d = v20_9:8.d u>> 4
        v4_5:0xc.d = v20_9:0xc.d u>> 4
        uint128_t v5_11 = v20_9 & v1
        uint128_t v1_11 = v4_5 & v1
        int128_t v4_6 = vtbl1_s8(v2_6, v5_11)
        uint128_t v6_9 = vextq_s8(v5_11, v5_11, 8)
        uint128_t v5_12 = v1_11 ^ v5_11
        v7 = vextq_s8(v1_11, v1_11, 8)
        v18 = vextq_s8(v5_12, v5_12, 8)
        int128_t v2_4 = vtbl1_s8(v2_6, v6_9)
        int128_t v6_10 = vtbl1_s8(v0_12, v1_11)
        int128_t v16_5 = vtbl1_s8(v0_12, v7)
        int128_t v4_7 = vtbl1_s8(v0_12, v5_12) ^ v4_6
        int128_t v2_5 = vtbl1_s8(v0_12, v18) ^ v2_4
        v17 = data_23ecad0
        v19 = data_23ecae0
        uint128_t v6_12 = vtbl1_s8(v0_12, v6_10 ^ v4_6)
        int128_t v16_7 = vtbl1_s8(v0_12, v16_5 ^ v2_4)
        int128_t v4_8 = vtbl1_s8(v0_12, v4_7)
        int128_t v0_6 = vtbl1_s8(v0_12, v2_5)
        v3 = arg4[arg5]
        uint128_t v5_13 = v6_12 ^ v5_12
        v6_12 = (&data_23ece20)[zx.q(neg.d(arg5.d << 4)) u>> 4 & 3]
        vtbl1_s8(v17, v5_13)
        v4 = vtbl1_s8(v17, v16_7 ^ v18)
        vtbl1_s8(v19, v4_8 ^ v1_11)
        int128_t v1_14
        v1_14:8.q = vtbl1_s8(v19, v0_6 ^ v7) ^ v4.q
        v2 = vextq_s8(v6_12, v6_12, 8)
        int128_t v0_10 = v1_14 ^ v3
        vtbl1_s8(v0_10, v6_12)
        v1:8.q = vtbl1_s8(v0_10, v2).q
        arg2[x8] = v1
        x8 += 1
    while (x8 != arg3)

arg6.q = var_8
arg7.q = arg7.q
