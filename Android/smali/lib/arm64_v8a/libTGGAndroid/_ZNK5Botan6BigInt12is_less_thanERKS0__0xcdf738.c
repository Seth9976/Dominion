// 函数: _ZNK5Botan6BigInt12is_less_thanERKS0_
// 地址: 0xcdf738
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_8 = *(arg1 + 0x20)
int64_t* entry_x1

if (x8_8 == 1)
    if (entry_x1[4].d == 0)
        return 0
    
    goto label_cdf768

int32_t x10_1
int32_t x9_2
int32_t x12_5
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3

if (x8_8 != 0)
label_cdf768:
    int64_t i_28 = *(arg1 + 0x18)
    int32_t* x9 = *arg1
    int64_t i_32
    int32_t* x12_1
    
    if (i_28 == -1)
        int64_t x10_2 = *(arg1 + 8)
        void* x11 = x10_2 - x9
        
        if (x10_2 == x9)
            i_28 = 0
        else
            void* x13_1
            
            x13_1 = x11 s>= 0 ? x11 : -ffffffffffffffff
            
            void* x12_2 = x9 - x10_2
            void* x13_2
            
            x13_2 = x13_1 s< 1 ? x13_1 : 1
            
            i_28 = x11 s>> 2
            void* x11_1
            
            x11_1 = x12_2 s> x11 ? x12_2 : x11
            
            int64_t i_16 = x13_2 * (x11_1 u>> 2)
            uint64_t x12_3 = 1
            int64_t i
            
            do
                int32_t x13_3 = *(x9 - 4 + (i_16 << 2))
                i = i_16
                i_16 -= 1
                x12_3 = zx.q(x12_3.d) & zx.q(((x13_3 - 1) & not.d(x13_3)) s>> 0x1f)
                i_28 -= x12_3
            while (i != 1)
        
        *(arg1 + 0x18) = i_28
        i_32 = entry_x1[3]
        x12_1 = *entry_x1
        
        if (i_32 != -1)
            goto label_cdf788
        
        goto label_cdf84c
    
    i_32 = entry_x1[3]
    x12_1 = *entry_x1
    int64_t x13_8
    int64_t i_22
    
    if (i_32 == -1)
    label_cdf84c:
        int64_t x10_4 = entry_x1[1]
        void* x13_5 = x10_4 - x12_1
        
        if (x10_4 == x12_1)
            i_32 = 0
        else
            void* x15_1
            
            x15_1 = x13_5 s>= 0 ? x13_5 : -ffffffffffffffff
            
            void* x14_2 = x12_1 - x10_4
            void* x15_2
            
            x15_2 = x15_1 s< 1 ? x15_1 : 1
            
            i_32 = x13_5 s>> 2
            void* x13_6
            
            x13_6 = x14_2 s> x13_5 ? x14_2 : x13_5
            
            int64_t i_20 = x15_2 * (x13_6 u>> 2)
            uint64_t x14_3 = 1
            int64_t i_1
            
            do
                int32_t x15_3 = *(x12_1 - 4 + (i_20 << 2))
                i_1 = i_20
                i_20 -= 1
                x14_3 = zx.q(x14_3.d) & zx.q(((x15_3 - 1) & not.d(x15_3)) s>> 0x1f)
                i_32 -= x14_3
            while (i_1 != 1)
        
        entry_x1[3] = i_32
        x13_8 = i_32 - i_28
        x10_1 = 0
        
        i_22 = i_32 u< i_28 ? i_32 : i_28
        
        if (i_22 != 0)
            goto label_cdf8c0
    else
    label_cdf788:
        x13_8 = i_32 - i_28
        x10_1 = 0
        
        i_22 = i_32 u< i_28 ? i_32 : i_28
        
        if (i_22 != 0)
        label_cdf8c0:
            int32_t* x15_5 = x9
            int32_t* x16_2 = x12_1
            int64_t i_2
            
            do
                int32_t x17_1 = *x15_5
                x15_5 = &x15_5[1]
                int32_t x0_2 = *x16_2
                x16_2 = &x16_2[1]
                i_2 = i_22
                i_22 -= 1
                int32_t x1 = x0_2 ^ x17_1
                int32_t x1_1 = ((x1 - 1) & not.d(x1)) s>> 0x1f
                x10_1 = (x10_1 & x1_1)
                    | (not.d(x1_1) & ((((x17_1 - x0_2) ^ x17_1) | x1) ^ x17_1) s>> 0x1f)
            while (i_2 != 1)
    int64_t x14_4 = i_28 - i_32
    
    if (i_28 u< i_32)
        if (x13_8 u>= 8)
            int64_t i_30 = x13_8 & 0xfffffffffffffff8
            void* x14_5 = &x12_1[i_28]
            v0.q = 0
            v0:8.q = 0
            i_28 += i_30
            int128_t* x14_6 = x14_5 + 0x10
            int64_t i_24 = i_30
            v1.q = 0
            v1:8.q = 0
            int64_t i_3
            
            do
                v2 = x14_6[-1]
                v3 = *x14_6
                i_3 = i_24
                i_24 -= 8
                x14_6 = &x14_6[2]
                v0 = vorrq_s8(v2, v0)
                v1 = vorrq_s8(v3, v1)
            while (i_3 != 8)
            uint128_t v0_1 = vorrq_s8(v1, v0)
            uint128_t v0_2 = vorrq_s8(v0_1, vdupq_laneq_s64(v0_1, 1))
            x9_2 = vorrq_s8(v0_2, vdupq_laneq_s32(v0_2, 1))
            
            if (x13_8 != i_30)
                goto label_cdf98c
        else
            x9_2 = 0
        label_cdf98c:
            int64_t i_17 = i_32 - i_28
            int32_t* x8_2 = &x12_1[i_28]
            int64_t i_4
            
            do
                int32_t x12_6 = *x8_2
                x8_2 = &x8_2[1]
                i_4 = i_17
                i_17 -= 1
                x9_2 |= x12_6
            while (i_4 != 1)
        
        x10_1 |= not.d(((x9_2 - 1) & not.d(x9_2)) s>> 0x1f)
    else if (i_32 u< i_28)
        if (x14_4 u>= 8)
            int64_t i_34 = x14_4 & 0xfffffffffffffff8
            void* x13_9 = &x9[i_32]
            v0.q = 0
            v0:8.q = 0
            i_32 += i_34
            int128_t* x13_10 = x13_9 + 0x10
            int64_t i_25 = i_34
            v1.q = 0
            v1:8.q = 0
            int64_t i_5
            
            do
                v2 = x13_10[-1]
                v3 = *x13_10
                i_5 = i_25
                i_25 -= 8
                x13_10 = &x13_10[2]
                v0 = vorrq_s8(v2, v0)
                v1 = vorrq_s8(v3, v1)
            while (i_5 != 8)
            uint128_t v0_4 = vorrq_s8(v1, v0)
            uint128_t v0_5 = vorrq_s8(v0_4, vdupq_laneq_s64(v0_4, 1))
            x12_5 = vorrq_s8(v0_5, vdupq_laneq_s32(v0_5, 1))
            
            if (x14_4 != i_34)
                goto label_cdfa10
        else
            x12_5 = 0
        label_cdfa10:
            int64_t i_14 = i_28 - i_32
            int32_t* x9_3 = &x9[i_32]
            int64_t i_6
            
            do
                int32_t x11_3 = *x9_3
                x9_3 = &x9_3[1]
                i_6 = i_14
                i_14 -= 1
                x12_5 |= x11_3
            while (i_6 != 1)
        
        return zx.q((x10_1 & ((x12_5 - 1) & not.d(x12_5)) s>> 0x1f) != 0 ? 1 : 0)
else
    int32_t x8 = entry_x1[4].d
    
    if (x8 != 0)
        if (x8 == 1)
            return 1
        
        goto label_cdf768
    
    int64_t i_29 = entry_x1[3]
    int32_t* x9_1 = *entry_x1
    int64_t i_33
    int32_t* x12_4
    
    if (i_29 == -1)
        int64_t x10_8 = entry_x1[1]
        void* x11_4 = x10_8 - x9_1
        
        if (x10_8 == x9_1)
            i_29 = 0
        else
            void* x13_11
            
            x13_11 = x11_4 s>= 0 ? x11_4 : -ffffffffffffffff
            
            void* x12_7 = x9_1 - x10_8
            void* x13_12
            
            x13_12 = x13_11 s< 1 ? x13_11 : 1
            
            i_29 = x11_4 s>> 2
            void* x11_5
            
            x11_5 = x12_7 s> x11_4 ? x12_7 : x11_4
            
            int64_t i_18 = x13_12 * (x11_5 u>> 2)
            uint64_t x12_8 = 1
            int64_t i_7
            
            do
                int32_t x13_13 = *(x9_1 - 4 + (i_18 << 2))
                i_7 = i_18
                i_18 -= 1
                x12_8 = zx.q(x12_8.d) & zx.q(((x13_13 - 1) & not.d(x13_13)) s>> 0x1f)
                i_29 -= x12_8
            while (i_7 != 1)
        
        entry_x1[3] = i_29
        i_33 = *(arg1 + 0x18)
        x12_4 = *arg1
        
        if (i_33 != -1)
            goto label_cdf820
        
        goto label_cdfab4
    
    i_33 = *(arg1 + 0x18)
    x12_4 = *arg1
    int64_t x13_18
    int64_t i_23
    
    if (i_33 == -1)
    label_cdfab4:
        int64_t x10_10 = *(arg1 + 8)
        void* x13_15 = x10_10 - x12_4
        
        if (x10_10 == x12_4)
            i_33 = 0
        else
            void* x15_6
            
            x15_6 = x13_15 s>= 0 ? x13_15 : -ffffffffffffffff
            
            void* x14_8 = x12_4 - x10_10
            void* x15_7
            
            x15_7 = x15_6 s< 1 ? x15_6 : 1
            
            i_33 = x13_15 s>> 2
            void* x13_16
            
            x13_16 = x14_8 s> x13_15 ? x14_8 : x13_15
            
            int64_t i_21 = x15_7 * (x13_16 u>> 2)
            uint64_t x14_9 = 1
            int64_t i_8
            
            do
                int32_t x15_8 = *(x12_4 - 4 + (i_21 << 2))
                i_8 = i_21
                i_21 -= 1
                x14_9 = zx.q(x14_9.d) & zx.q(((x15_8 - 1) & not.d(x15_8)) s>> 0x1f)
                i_33 -= x14_9
            while (i_8 != 1)
        
        *(arg1 + 0x18) = i_33
        x13_18 = i_33 - i_29
        x10_1 = 0
        
        i_23 = i_33 u< i_29 ? i_33 : i_29
        
        if (i_23 != 0)
            goto label_cdfb28
    else
    label_cdf820:
        x13_18 = i_33 - i_29
        x10_1 = 0
        
        i_23 = i_33 u< i_29 ? i_33 : i_29
        
        if (i_23 != 0)
        label_cdfb28:
            int32_t* x15_10 = x9_1
            int32_t* x16_4 = x12_4
            int64_t i_9
            
            do
                int32_t x17_4 = *x15_10
                x15_10 = &x15_10[1]
                int32_t x0_9 = *x16_4
                x16_4 = &x16_4[1]
                i_9 = i_23
                i_23 -= 1
                int32_t x1_2 = x0_9 ^ x17_4
                int32_t x1_3 = ((x1_2 - 1) & not.d(x1_2)) s>> 0x1f
                x10_1 = (x10_1 & x1_3)
                    | (not.d(x1_3) & ((((x17_4 - x0_9) ^ x17_4) | x1_2) ^ x17_4) s>> 0x1f)
            while (i_9 != 1)
    int64_t x14_10 = i_29 - i_33
    
    if (i_29 u< i_33)
        if (x13_18 u>= 8)
            int64_t i_31 = x13_18 & 0xfffffffffffffff8
            void* x14_11 = &x12_4[i_29]
            v0.q = 0
            v0:8.q = 0
            i_29 += i_31
            int128_t* x14_12 = x14_11 + 0x10
            int64_t i_26 = i_31
            v1.q = 0
            v1:8.q = 0
            int64_t i_10
            
            do
                v2 = x14_12[-1]
                v3 = *x14_12
                i_10 = i_26
                i_26 -= 8
                x14_12 = &x14_12[2]
                v0 = vorrq_s8(v2, v0)
                v1 = vorrq_s8(v3, v1)
            while (i_10 != 8)
            uint128_t v0_7 = vorrq_s8(v1, v0)
            uint128_t v0_8 = vorrq_s8(v0_7, vdupq_laneq_s64(v0_7, 1))
            x9_2 = vorrq_s8(v0_8, vdupq_laneq_s32(v0_8, 1))
            
            if (x13_18 != i_31)
                goto label_cdfbf4
        else
            x9_2 = 0
        label_cdfbf4:
            int64_t i_19 = i_33 - i_29
            int32_t* x8_7 = &x12_4[i_29]
            int64_t i_11
            
            do
                int32_t x12_9 = *x8_7
                x8_7 = &x8_7[1]
                i_11 = i_19
                i_19 -= 1
                x9_2 |= x12_9
            while (i_11 != 1)
        
        x10_1 |= not.d(((x9_2 - 1) & not.d(x9_2)) s>> 0x1f)
    else if (i_33 u< i_29)
        if (x14_10 u>= 8)
            int64_t i_35 = x14_10 & 0xfffffffffffffff8
            void* x13_19 = &x9_1[i_33]
            v0.q = 0
            v0:8.q = 0
            i_33 += i_35
            int128_t* x13_20 = x13_19 + 0x10
            int64_t i_27 = i_35
            v1.q = 0
            v1:8.q = 0
            int64_t i_12
            
            do
                v2 = x13_20[-1]
                v3 = *x13_20
                i_12 = i_27
                i_27 -= 8
                x13_20 = &x13_20[2]
                v0 = vorrq_s8(v2, v0)
                v1 = vorrq_s8(v3, v1)
            while (i_12 != 8)
            uint128_t v0_10 = vorrq_s8(v1, v0)
            uint128_t v0_11 = vorrq_s8(v0_10, vdupq_laneq_s64(v0_10, 1))
            x12_5 = vorrq_s8(v0_11, vdupq_laneq_s32(v0_11, 1))
            
            if (x14_10 != i_35)
                goto label_cdfc64
        else
            x12_5 = 0
        label_cdfc64:
            int64_t i_15 = i_29 - i_33
            int32_t* x9_4 = &x9_1[i_33]
            int64_t i_13
            
            do
                int32_t x11_7 = *x9_4
                x9_4 = &x9_4[1]
                i_13 = i_15
                i_15 -= 1
                x12_5 |= x11_7
            while (i_13 != 1)
        
        return zx.q((x10_1 & ((x12_5 - 1) & not.d(x12_5)) s>> 0x1f) != 0 ? 1 : 0)
return zx.q(x10_1 != 0 ? 1 : 0)
