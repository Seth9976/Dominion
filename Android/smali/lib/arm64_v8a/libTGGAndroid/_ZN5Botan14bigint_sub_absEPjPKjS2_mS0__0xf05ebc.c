// 函数: _ZN5Botan14bigint_sub_absEPjPKjS2_mS0_
// 地址: 0xf05ebc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i_8 = arg4 & 0xfffffffffffffff8
int32_t x15
int32_t x12

if (i_8 == 0)
    x15 = 0
    x12 = 0
    
    if (i_8 != arg4)
    label_f06114:
        int64_t i_4 = arg4 - i_8
        void* x8 = &arg5[i_8]
        void* x10_2 = &arg3[i_8]
        void* x11_3 = &arg2[i_8]
        int64_t i
        
        do
            int32_t x13_2 = *x11_3
            int32_t x14_1 = *x10_2
            int32_t x13_3 = x13_2 - x14_1
            *x8 = x13_3 - x15
            int32_t x13_5 = *x10_2
            x10_2 += 4
            int32_t x16_14 = *x11_3
            x11_3 += 4
            x15 = (x13_2 u< x14_1 ? 1 : 0) | (x13_3 u< x15 ? 1 : 0)
            int32_t x13_6 = x13_5 - x16_14
            *(x8 + (arg4 << 2)) = x13_6 - x12
            i = i_4
            i_4 -= 1
            x12 = (x13_5 u< x16_14 ? 1 : 0) | (x13_6 u< x12 ? 1 : 0)
            x8 += 4
        while (i != 1)
else
    x12 = 0
    x15 = 0
    void* x9_1 = &arg2[4]
    void* x10_1 = &arg3[4]
    uint32_t* x13_1 = arg5
    int64_t i_7 = i_8
    int64_t i_1
    
    do
        int32_t x16_1 = *(x9_1 - 0x10)
        int32_t x17_1 = *(x10_1 - 0x10)
        int32_t x16_2 = x16_1 - x17_1
        *x13_1 = x16_2 - x15
        int32_t x15_2 = *(x9_1 - 0xc)
        int32_t x16_3 = *(x10_1 - 0xc)
        int32_t x17_3 = (x16_1 u< x17_1 ? 1 : 0) | (x16_2 u< x15 ? 1 : 0)
        int32_t x15_3 = x15_2 - x16_3
        x13_1[1] = x15_3 - x17_3
        int32_t x15_5 = *(x9_1 - 8)
        int32_t x17_4 = *(x10_1 - 8)
        int32_t x16_5 = (x15_2 u< x16_3 ? 1 : 0) | (x15_3 u< x17_3 ? 1 : 0)
        int32_t x15_6 = x15_5 - x17_4
        x13_1[2] = x15_6 - x16_5
        int32_t x15_8 = *(x9_1 - 4)
        int32_t x16_6 = *(x10_1 - 4)
        int32_t x17_6 = (x15_5 u< x17_4 ? 1 : 0) | (x15_6 u< x16_5 ? 1 : 0)
        int32_t x15_9 = x15_8 - x16_6
        x13_1[3] = x15_9 - x17_6
        int32_t x15_11 = *x9_1
        int32_t x17_7 = *x10_1
        int32_t x16_8 = (x15_8 u< x16_6 ? 1 : 0) | (x15_9 u< x17_6 ? 1 : 0)
        int32_t x15_12 = x15_11 - x17_7
        x13_1[4] = x15_12 - x16_8
        int32_t x15_14 = *(x9_1 + 4)
        int32_t x16_9 = *(x10_1 + 4)
        int32_t x17_9 = (x15_11 u< x17_7 ? 1 : 0) | (x15_12 u< x16_8 ? 1 : 0)
        int32_t x15_15 = x15_14 - x16_9
        x13_1[5] = x15_15 - x17_9
        int32_t x15_17 = *(x9_1 + 8)
        int32_t x17_10 = *(x10_1 + 8)
        int32_t x16_11 = (x15_14 u< x16_9 ? 1 : 0) | (x15_15 u< x17_9 ? 1 : 0)
        int32_t x15_18 = x15_17 - x17_10
        x13_1[6] = x15_18 - x16_11
        int32_t x15_20 = *(x9_1 + 0xc)
        int32_t x16_12 = *(x10_1 + 0xc)
        int32_t x17_12 = (x15_17 u< x17_10 ? 1 : 0) | (x15_18 u< x16_11 ? 1 : 0)
        int32_t x15_21 = x15_20 - x16_12
        x13_1[7] = x15_21 - x17_12
        int32_t x15_23 = *(x10_1 - 0x10)
        int32_t x17_13 = *(x9_1 - 0x10)
        void* x16_13 = &x13_1[arg4]
        x13_1 = &x13_1[8]
        int32_t x15_24 = x15_23 - x17_13
        *x16_13 = x15_24 - x12
        int32_t x12_2 = *(x10_1 - 0xc)
        int32_t x15_25 = *(x9_1 - 0xc)
        int32_t x17_15 = (x15_23 u< x17_13 ? 1 : 0) | (x15_24 u< x12 ? 1 : 0)
        int32_t x12_3 = x12_2 - x15_25
        *(x16_13 + 4) = x12_3 - x17_15
        int32_t x12_5 = *(x10_1 - 8)
        int32_t x17_16 = *(x9_1 - 8)
        int32_t x15_27 = (x12_2 u< x15_25 ? 1 : 0) | (x12_3 u< x17_15 ? 1 : 0)
        int32_t x12_6 = x12_5 - x17_16
        *(x16_13 + 8) = x12_6 - x15_27
        int32_t x12_8 = *(x10_1 - 4)
        int32_t x15_28 = *(x9_1 - 4)
        int32_t x17_18 = (x12_5 u< x17_16 ? 1 : 0) | (x12_6 u< x15_27 ? 1 : 0)
        int32_t x12_9 = x12_8 - x15_28
        *(x16_13 + 0xc) = x12_9 - x17_18
        int32_t x12_11 = *x10_1
        int32_t x17_19 = *x9_1
        int32_t x15_30 = (x12_8 u< x15_28 ? 1 : 0) | (x12_9 u< x17_18 ? 1 : 0)
        int32_t x12_12 = x12_11 - x17_19
        *(x16_13 + 0x10) = x12_12 - x15_30
        int32_t x12_14 = *(x10_1 + 4)
        int32_t x15_31 = *(x9_1 + 4)
        int32_t x17_21 = (x12_11 u< x17_19 ? 1 : 0) | (x12_12 u< x15_30 ? 1 : 0)
        int32_t x12_15 = x12_14 - x15_31
        *(x16_13 + 0x14) = x12_15 - x17_21
        int32_t x12_17 = *(x10_1 + 8)
        int32_t x17_22 = *(x9_1 + 8)
        x15 = (x15_20 u< x16_12 ? 1 : 0) | (x15_21 u< x17_12 ? 1 : 0)
        int32_t x5_10 = (x12_14 u< x15_31 ? 1 : 0) | (x12_15 u< x17_21 ? 1 : 0)
        int32_t x12_18 = x12_17 - x17_22
        *(x16_13 + 0x18) = x12_18 - x5_10
        int32_t x12_20 = *(x10_1 + 0xc)
        int32_t x6_2 = *(x9_1 + 0xc)
        int32_t x17_24 = (x12_17 u< x17_22 ? 1 : 0) | (x12_18 u< x5_10 ? 1 : 0)
        x9_1 += 0x20
        int32_t x12_21 = x12_20 - x6_2
        *(x16_13 + 0x1c) = x12_21 - x17_24
        i_1 = i_7
        i_7 -= 8
        x12 = (x12_20 u< x6_2 ? 1 : 0) | (x12_21 u< x17_24 ? 1 : 0)
        x10_1 += 0x20
    while (i_1 != 8)
    
    if (i_8 != arg4)
        goto label_f06114

if (arg4 != 0)
    int64_t i_9
    
    if (arg4 u>= 8)
        i_9 = 0
        
        if (((&arg5[arg4] u> arg1 ? 1 : 0) & (&arg1[arg4] u> arg5 ? 1 : 0) & 1) != 0
                || ((&arg5[arg4 * 2] u> arg1 ? 1 : 0) & (arg5 u< arg1 ? 1 : 0) & 1) != 0)
            goto label_f06210
        
        i_9 = arg4 & 0xfffffffffffffff8
        uint128_t v0
        v0.d = x15 - 1
        v0:4.d = x15 - 1
        v0:8.d = x15 - 1
        v0:0xc.d = x15 - 1
        void* x11_7 = &arg1[4]
        int64_t i_6 = i_9
        uint32_t* x13_8 = arg5
        int64_t i_2
        
        do
            void* x14_4 = &x13_8[arg4]
            uint128_t v1 = *x13_8
            uint128_t v2 = *(x13_8 + 0x10)
            x13_8 = &x13_8[8]
            uint128_t v4 = *(x14_4 + 0x10)
            i_2 = i_6
            i_6 -= 8
            v1 = vbslq_s8(v0, v1, *x14_4)
            v2 = vbslq_s8(v0, v2, v4)
            *(x11_7 - 0x10) = v1
            *x11_7 = v2
            x11_7 += 0x20
        while (i_2 != 8)
        
        if (i_9 != arg4)
            goto label_f06210
    else
        i_9 = 0
    label_f06210:
        int64_t i_5 = arg4 - i_9
        void* x9_2 = &arg1[i_9]
        void* x11_9 = &arg5[i_9]
        int64_t i_3
        
        do
            int32_t x12_26 = *(x11_9 + (arg4 << 2))
            int32_t x13_9 = *x11_9
            x11_9 += 4
            i_3 = i_5
            i_5 -= 1
            *x9_2 = (x13_9 & (x15 - 1)) | (x12_26 & not.d(x15 - 1))
            x9_2 += 4
        while (i_3 != 1)

return zx.q(not.d(x15 - 1))
