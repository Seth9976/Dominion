// 函数: sub_ca5d20
// 地址: 0xca5d20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg3 & 0xfffffffffffffffe
int128_t v0
int128_t v1
uint128_t v2
int128_t v3
int128_t v4
uint128_t v7
uint128_t v17
uint128_t v22

if (x8 != 0)
    int64_t x11_1 = 0
    
    do
        v0 = data_23ecbb0
        v1 = arg1[x11_1]
        int64_t x14_2 = x11_1 << 4 | 0x10
        v2 = data_23eca50
        v3 = data_23eca60
        v4 = *(arg1 + x14_2)
        uint128_t v5_8 = v0 & v1
        v1.d u>>= 4
        v1:4.d u>>= 4
        v1:8.d u>>= 4
        v1:0xc.d u>>= 4
        uint128_t v1_7 = v0 & v1
        vtbl1_s8(v2, v5_8)
        uint128_t v5_9 = vextq_s8(v5_8, v5_8, 8)
        uint128_t v7_7 = v0 & v4
        vtbl1_s8(v3, v1_7)
        v4.d u>>= 4
        v4:4.d u>>= 4
        v4:8.d u>>= 4
        v4:0xc.d u>>= 4
        uint128_t v1_8 = vextq_s8(v1_7, v1_7, 8)
        int64_t v5_10 = vtbl1_s8(v2, v5_9)
        vtbl1_s8(v2, v7_7)
        uint128_t v7_8 = vextq_s8(v7_7, v7_7, 8)
        uint128_t v4_3 = v0 & v4
        int64_t v1_9 = vtbl1_s8(v3, v1_8)
        int128_t v2_1 = vtbl1_s8(v2, v7_8)
        v7_8 = *arg4
        vtbl1_s8(v3, v4_3)
        int128_t v6_8
        v6_8:8.q = v1_9 ^ v5_10
        int128_t v4_1
        v4_1:8.q = (vtbl1_s8(v3, vextq_s8(v4_3, v4_3, 8)) ^ v2_1).q
        int128_t v16_1 = v7_8 ^ v6_8
        int128_t v7_1 = v7_8 ^ v4_1
        int128_t v1_1
        int128_t v5_1
        
        if (arg5 != 1)
            v2_1 = data_23eca70
            v1_1 = data_23eca80
            v4_1 = data_23eca90
            int128_t v3_8 = data_23ecaa0
            v6_8 = data_23ecaf0
            v5_1 = data_23ecb00
            int64_t x15_1 = 1
            
            do
                v17.d = v16_1.d u>> 4
                v17:4.d = v16_1:4.d u>> 4
                v17:8.d = v16_1:8.d u>> 4
                v17:0xc.d = v16_1:0xc.d u>> 4
                uint128_t v16_7 = v16_1 & v0
                int128_t v18
                v18.d = v7_1.d u>> 4
                v18:4.d = v7_1:4.d u>> 4
                v18:8.d = v7_1:8.d u>> 4
                v18:0xc.d = v7_1:0xc.d u>> 4
                uint128_t v17_2 = v17 & v0
                uint128_t v19_2 = v7_1 & v0
                uint128_t v7_9 = v18 & v0
                uint128_t v23_4 = v17_2 ^ v16_7
                int128_t v20_3 = vtbl1_s8(v1_1, v16_7)
                int128_t v22_3 = vtbl1_s8(v1_1, v19_2)
                uint128_t v18_2 = vextq_s8(v19_2, v19_2, 8)
                int128_t v24_5 = vtbl1_s8(v2_1, v17_2)
                uint128_t v19_3 = v7_9 ^ v19_2
                int128_t v28_1 = vtbl1_s8(v2_1, v23_4)
                uint128_t v21_2 = vextq_s8(v16_7, v16_7, 8)
                uint128_t v16_8 = vextq_s8(v17_2, v17_2, 8)
                int128_t v26_1 = vtbl1_s8(v2_1, v7_9)
                uint128_t v29_1 = vextq_s8(v23_4, v23_4, 8)
                int128_t v28_2 = vtbl1_s8(v2_1, v19_3)
                int128_t v21_3 = vtbl1_s8(v1_1, v21_2)
                int128_t v27_1 = vtbl1_s8(v2_1, v16_8)
                int128_t v21_4 = vtbl1_s8(v2_1, v29_1) ^ v21_3
                uint128_t v28_4 = vextq_s8(v19_3, v19_3, 8)
                int128_t v24_7 = vtbl1_s8(v2_1, v24_5 ^ v20_3)
                int128_t v25_4 = vtbl1_s8(v1_1, v18_2)
                int128_t v23_5 = v24_7 ^ v23_4
                int128_t v24_8 = vtbl1_s8(v2_1, v28_4)
                uint128_t v18_3 = vextq_s8(v7_9, v7_9, 8)
                uint128_t v20_5 = vtbl1_s8(v2_1, v28_1 ^ v20_3)
                int128_t v30_1 = vtbl1_s8(v2_1, v18_3)
                uint128_t v26_3 = vtbl1_s8(v2_1, v26_1 ^ v22_3)
                uint128_t v17_3 = v20_5 ^ v17_2
                int128_t v27_3 = vtbl1_s8(v2_1, v27_1 ^ v21_3)
                int128_t v22_5 = vtbl1_s8(v2_1, v28_2 ^ v22_3)
                int128_t v24_10 = vtbl1_s8(v2_1, v24_8 ^ v25_4)
                uint128_t v19_4 = v26_3 ^ v19_3
                int128_t v21_5 = vtbl1_s8(v2_1, v21_4)
                int128_t v27_4 = v27_3 ^ v29_1
                vtbl1_s8(v4_1, v23_5)
                vtbl1_s8(v6_8, v23_5)
                int128_t v7_10 = v22_5 ^ v7_9
                int128_t v18_4 = v24_10 ^ v18_3
                vtbl1_s8(v3_8, v17_3)
                vtbl1_s8(v5_1, v17_3)
                int128_t v30_3 = vtbl1_s8(v2_1, v30_1 ^ v25_4)
                int128_t v16_9 = v21_5 ^ v16_8
                vtbl1_s8(v4_1, v19_4)
                vtbl1_s8(v6_8, v19_4)
                vtbl1_s8(v3_8, v7_10)
                vtbl1_s8(v5_1, v7_10)
                v25_4 = arg4[x15_1]
                v26_3 = (&data_23ecde0)[x15_1 & 3]
                int128_t v28_5 = v30_3 ^ v28_4
                int64_t v29_3 = vtbl1_s8(v4_1, v27_4)
                int64_t v19_6 = vtbl1_s8(v3_8, v16_9)
                int64_t v23_9 = vtbl1_s8(v4_1, v28_5) ^ vtbl1_s8(v3_8, v18_4)
                v20_5 = (&data_23ecea0)[x15_1 & 3]
                int128_t v24_12
                v24_12:8.q = v29_3 ^ v19_6
                int128_t v21_7
                v21_7:8.q = v23_9
                uint128_t v22_6 = vextq_s8(v26_3, v26_3, 8)
                int64_t v27_5 = vtbl1_s8(v6_8, v27_4)
                int64_t v28_6 = vtbl1_s8(v6_8, v28_5)
                int64_t v16_10 = vtbl1_s8(v5_1, v16_9)
                int128_t v19_8 = v24_12 ^ v25_4
                int128_t v21_8 = v21_7 ^ v25_4
                int64_t v18_6 = v28_6 ^ vtbl1_s8(v5_1, v18_4)
                vtbl1_s8(v19_8, v26_3)
                int64_t v24_13 = vtbl1_s8(v19_8, v22_6)
                vtbl1_s8(v21_8, v26_3)
                int64_t v18_7 = v18_6 ^ vtbl1_s8(v21_8, v22_6)
                uint128_t v30_4 = vextq_s8(v20_5, v20_5, 8)
                v17:8.q = v27_5 ^ v16_10 ^ v24_13
                int128_t v7_13
                v7_13:8.q = v18_7
                vtbl1_s8(v19_8, v20_5)
                int128_t v19_9 = vtbl1_s8(v19_8, v30_4)
                vtbl1_s8(v21_8, v20_5)
                int64_t v21_9 = vtbl1_s8(v21_8, v30_4)
                vtbl1_s8(v17, v26_3)
                int128_t v18_8 = vtbl1_s8(v17, v22_6)
                vtbl1_s8(v7_13, v26_3)
                x15_1 += 1
                int128_t v16_14
                v16_14:8.q = (v19_9 ^ v18_8).q
                int128_t v19_10
                v19_10:8.q = v21_9 ^ vtbl1_s8(v7_13, v22_6)
                v16_1 = v16_14 ^ v17
                v7_1 = v19_10 ^ v7_13
            while (arg5 != x15_1)
        
        v1_1 = data_23eca70
        v2_1 = data_23eca80
        v4_1.d = v16_1.d u>> 4
        v4_1:4.d = v16_1:4.d u>> 4
        v4_1:8.d = v16_1:8.d u>> 4
        v4_1:0xc.d = v16_1:0xc.d u>> 4
        uint128_t v3_1 = v16_1 & v0
        uint128_t v4_2 = v4_1 & v0
        v5_1.d = v7_1.d u>> 4
        v5_1:4.d = v7_1:4.d u>> 4
        v5_1:8.d = v7_1:8.d u>> 4
        v5_1:0xc.d = v7_1:0xc.d u>> 4
        uint128_t v6_1 = v7_1 & v0
        uint128_t v7_2 = vextq_s8(v3_1, v3_1, 8)
        uint128_t v16_2 = v4_2 ^ v3_1
        uint128_t v17_1 = vextq_s8(v4_2, v4_2, 8)
        int128_t v3_2 = vtbl1_s8(v2_1, v3_1)
        int128_t v7_3 = vtbl1_s8(v2_1, v7_2)
        int128_t v22_1 = vtbl1_s8(v1_1, v4_2)
        int128_t v23_1 = vtbl1_s8(v1_1, v17_1)
        int128_t v24_1 = vtbl1_s8(v1_1, v16_2)
        uint128_t v0_1 = v5_1 & v0
        uint128_t v20_1 = vextq_s8(v16_2, v16_2, 8)
        uint128_t v5_2 = vextq_s8(v6_1, v6_1, 8)
        uint128_t v18_1 = v0_1 ^ v6_1
        int128_t v25_1 = vtbl1_s8(v1_1, v20_1)
        int128_t v23_3 = vtbl1_s8(v1_1, v23_1 ^ v7_3)
        int128_t v3_4 = vtbl1_s8(v1_1, v24_1 ^ v3_2)
        uint128_t v19_1 = vextq_s8(v0_1, v0_1, 8)
        uint128_t v21_1 = vextq_s8(v18_1, v18_1, 8)
        int128_t v6_2 = vtbl1_s8(v2_1, v6_1)
        int128_t v2_2 = vtbl1_s8(v2_1, v5_2)
        int128_t v5_3 = vtbl1_s8(v1_1, v0_1)
        int128_t v25_2 = vtbl1_s8(v1_1, v18_1)
        int128_t v20_2 = v23_3 ^ v20_1
        int128_t v3_5 = v3_4 ^ v4_2
        v4_2 = data_23ecab0
        v23_3 = data_23ecac0
        int128_t v24_2 = vtbl1_s8(v1_1, v19_1)
        int128_t v2_3 = vtbl1_s8(v1_1, v21_1) ^ v2_2
        v22 = vtbl1_s8(v1_1, v22_1 ^ v3_2)
        int128_t v7_5 = vtbl1_s8(v1_1, v25_1 ^ v7_3)
        int128_t v5_5 = vtbl1_s8(v1_1, v5_3 ^ v6_2)
        int128_t v24_4 = vtbl1_s8(v1_1, v24_2 ^ v2_2)
        int128_t v6_4 = vtbl1_s8(v1_1, v25_2 ^ v6_2)
        int128_t v1_2 = vtbl1_s8(v1_1, v2_3)
        v2_3 = arg4[arg5]
        uint128_t v16_3 = v22 ^ v16_2
        v22 = (&data_23ece20)[arg5 & 3]
        vtbl1_s8(v4_2, v16_3)
        int64_t v16_4 = vtbl1_s8(v4_2, v20_2)
        vtbl1_s8(v23_3, v3_5)
        v7 = vtbl1_s8(v23_3, v7_5 ^ v17_1)
        vtbl1_s8(v4_2, v5_5 ^ v18_1)
        v4 = vtbl1_s8(v4_2, v24_4 ^ v21_1)
        vtbl1_s8(v23_3, v6_4 ^ v0_1)
        int64_t v1_5 = vtbl1_s8(v23_3, v1_2 ^ v19_1) ^ v4.q
        int128_t v3_7
        v3_7:8.q = v7.q ^ v16_4
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
        *(arg2 + x14_2) = v3
    while (x11_1 != x8)

if (x8 u>= arg3)
    return 

do
    v0 = arg1[x8]
    v1 = data_23ecbb0
    v2 = data_23eca50
    v4 = data_23eca60
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
    int128_t v16_15 = v3 ^ v6_14
    int128_t v4_5
    
    if (arg5 != 1)
        v4_5 = data_23eca90
        v3 = data_23ecaa0
        v6_14 = data_23ecaf0
        v5_17 = data_23ecb00
        int64_t x13_1 = 1
        
        do
            v17.d = v16_15.d u>> 4
            v17:4.d = v16_15:4.d u>> 4
            v17:8.d = v16_15:8.d u>> 4
            v17:0xc.d = v16_15:0xc.d u>> 4
            uint128_t v16_20 = v16_15 & v1
            uint128_t v17_6 = v17 & v1
            int128_t v18_10 = vtbl1_s8(v2_6, v16_20)
            uint128_t v19_12 = vextq_s8(v16_20, v16_20, 8)
            uint128_t v16_21 = v17_6 ^ v16_20
            int128_t v20_8 = vtbl1_s8(v0_12, v17_6)
            uint128_t v21_10 = vextq_s8(v17_6, v17_6, 8)
            int128_t v24_14 = vtbl1_s8(v0_12, v16_21)
            uint128_t v25_6 = vextq_s8(v16_21, v16_21, 8)
            int128_t v19_13 = vtbl1_s8(v2_6, v19_12)
            int128_t v23_12 = vtbl1_s8(v0_12, v21_10)
            int128_t v19_14 = vtbl1_s8(v0_12, v25_6) ^ v19_13
            int128_t v20_10 = vtbl1_s8(v0_12, v20_8 ^ v18_10)
            int128_t v18_12 = vtbl1_s8(v0_12, v24_14 ^ v18_10)
            int128_t v23_14 = vtbl1_s8(v0_12, v23_12 ^ v19_13)
            int128_t v16_22 = v20_10 ^ v16_21
            int128_t v19_15 = vtbl1_s8(v0_12, v19_14)
            int128_t v17_7 = v18_12 ^ v17_6
            v7 = arg4[x13_1]
            v22 = (&data_23ecde0)[x13_1 & 3]
            vtbl1_s8(v4_5, v16_22)
            int128_t v20_11 = v23_14 ^ v25_6
            vtbl1_s8(v6_14, v16_22)
            int128_t v19_16 = v19_15 ^ v21_10
            vtbl1_s8(v3, v17_7)
            vtbl1_s8(v5_17, v17_7)
            int64_t v17_10 = vtbl1_s8(v4_5, v20_11) ^ vtbl1_s8(v3, v19_16)
            uint128_t v24_15 = (&data_23ecea0)[x13_1 & 3]
            int128_t v18_14
            v18_14:8.q = v17_10
            uint128_t v23_15 = vextq_s8(v22, v22, 8)
            int128_t v7_14 = v18_14 ^ v7
            int64_t v19_18 = vtbl1_s8(v6_14, v20_11) ^ vtbl1_s8(v5_17, v19_16)
            vtbl1_s8(v7_14, v22)
            int64_t v17_12 = v19_18 ^ vtbl1_s8(v7_14, v23_15)
            uint128_t v25_7 = vextq_s8(v24_15, v24_15, 8)
            int128_t v16_25
            v16_25:8.q = v17_12
            vtbl1_s8(v7_14, v24_15)
            int128_t v7_15 = vtbl1_s8(v7_14, v25_7)
            vtbl1_s8(v16_25, v22)
            x13_1 += 1
            v17:8.q = (v7_15 ^ vtbl1_s8(v16_25, v23_15)).q
            v16_15 = v17 ^ v16_25
        while (arg5 != x13_1)
    
    v4_5.d = v16_15.d u>> 4
    v4_5:4.d = v16_15:4.d u>> 4
    v4_5:8.d = v16_15:8.d u>> 4
    v4_5:0xc.d = v16_15:0xc.d u>> 4
    uint128_t v5_11 = v16_15 & v1
    uint128_t v1_11 = v4_5 & v1
    int128_t v4_6 = vtbl1_s8(v2_6, v5_11)
    uint128_t v6_9 = vextq_s8(v5_11, v5_11, 8)
    uint128_t v5_12 = v1_11 ^ v5_11
    v7 = vextq_s8(v1_11, v1_11, 8)
    uint128_t v18_9 = vextq_s8(v5_12, v5_12, 8)
    int128_t v2_4 = vtbl1_s8(v2_6, v6_9)
    int128_t v6_10 = vtbl1_s8(v0_12, v1_11)
    int128_t v16_16 = vtbl1_s8(v0_12, v7)
    int128_t v4_7 = vtbl1_s8(v0_12, v5_12) ^ v4_6
    int128_t v2_5 = vtbl1_s8(v0_12, v18_9) ^ v2_4
    v17 = data_23ecab0
    int128_t v19_11 = data_23ecac0
    uint128_t v6_12 = vtbl1_s8(v0_12, v6_10 ^ v4_6)
    int128_t v16_18 = vtbl1_s8(v0_12, v16_16 ^ v2_4)
    int128_t v4_8 = vtbl1_s8(v0_12, v4_7)
    int128_t v0_6 = vtbl1_s8(v0_12, v2_5)
    v3 = arg4[arg5]
    uint128_t v5_13 = v6_12 ^ v5_12
    v6_12 = (&data_23ece20)[arg5 & 3]
    vtbl1_s8(v17, v5_13)
    v4 = vtbl1_s8(v17, v16_18 ^ v18_9)
    vtbl1_s8(v19_11, v4_8 ^ v1_11)
    int128_t v1_14
    v1_14:8.q = vtbl1_s8(v19_11, v0_6 ^ v7) ^ v4.q
    v2 = vextq_s8(v6_12, v6_12, 8)
    int128_t v0_10 = v1_14 ^ v3
    vtbl1_s8(v0_10, v6_12)
    v1:8.q = vtbl1_s8(v0_10, v2).q
    arg2[x8] = v1
    x8 += 1
while (x8 != arg3)
