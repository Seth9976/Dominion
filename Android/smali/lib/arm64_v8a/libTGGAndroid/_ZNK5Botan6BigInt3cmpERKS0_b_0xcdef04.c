// 函数: _ZNK5Botan6BigInt3cmpERKS0_b
// 地址: 0xcdef04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result
int32_t entry_x2
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3

if ((entry_x2 & 1) == 0)
label_cdf018:
    int32_t* x10_2 = *arg1
    int64_t x14_2 = *(arg1 + 8)
    int32_t* x11_4 = *arg2
    int64_t x15_5 = *(arg2 + 8)
    result = 0
    void* x8_2 = x14_2 - x10_2
    void* x9_5 = x15_5 - x11_4
    int64_t x13_3 = x8_2 s>> 2
    int64_t x12_2 = x9_5 s>> 2
    int64_t x16_7
    
    x16_7 = x12_2 u< x13_3 ? x12_2 : x13_3
    
    if (x16_7 != 0)
        int64_t i_18 = neg.q(x16_7)
        int32_t* x17_3 = x10_2
        int32_t* x1_1 = x11_4
        int64_t i
        
        do
            int32_t x2_5 = *x17_3
            x17_3 = &x17_3[1]
            int32_t x3_5 = *x1_1
            x1_1 = &x1_1[1]
            i = i_18
            i_18 += 1
            int32_t x4_3 = x3_5 ^ x2_5
            int32_t x4_4 = ((x4_3 - 1) & not.d(x4_3)) s>> 0x1f
            result = (zx.q(result.d) & zx.q(x4_4)) | ((
                zx.q(((((x2_5 - x3_5) ^ x2_5) | x4_3) ^ x2_5) s>> 0x1f) | 1) & zx.q(not.d(x4_4)))
        while (i u< -1)
    
    if (x13_3 u< x12_2)
        void* x16_8 = x10_2 - x14_2
        void* x10_3
        
        x10_3 = x9_5 s>= 0 ? x9_5 : -ffffffffffffffff
        
        void* x12_3 = x11_4 - x15_5
        void* x10_4
        
        x10_4 = x10_3 s< 1 ? x10_3 : 1
        
        void* x14_3
        
        x14_3 = x12_3 s> x9_5 ? x12_3 : x9_5
        
        void* x15_6
        
        x15_6 = x8_2 s>= 0 ? x8_2 : -ffffffffffffffff
        
        void* x17_4
        
        x17_4 = x15_6 s< 1 ? x15_6 : 1
        
        void* x15_7
        
        x15_7 = x16_8 s> x8_2 ? x16_8 : x8_2
        
        int64_t x14_5 = neg.q(x17_4 * (x15_7 u>> 2)) + x10_4 * (x14_3 u>> 2)
        int32_t x8_3
        
        if (x14_5 u>= 8)
            void* x16_10
            
            x16_10 = x16_8 s> x8_2 ? x16_8 : x8_2
            
            int64_t i_20 = x14_5 & 0xfffffffffffffff8
            v0.q = 0
            v0:8.q = 0
            x13_3 += i_20
            int64_t i_10 = i_20
            void* x16_14 = &x11_4[x17_4 * (x16_10 u>> 2) + 4]
            v1.q = 0
            v1:8.q = 0
            int64_t i_1
            
            do
                v2 = *(x16_14 - 0x10)
                v3 = *x16_14
                i_1 = i_10
                i_10 -= 8
                x16_14 += 0x20
                v0 = vorrq_s8(v2, v0)
                v1 = vorrq_s8(v3, v1)
            while (i_1 != 8)
            uint128_t v0_1 = vorrq_s8(v1, v0)
            uint128_t v0_2 = vorrq_s8(v0_1, vdupq_laneq_s64(v0_1, 1))
            x8_3 = vorrq_s8(v0_2, vdupq_laneq_s32(v0_2, 1))
            
            if (x14_5 != i_20)
                goto label_cdf1c0
        else
            x8_3 = 0
        label_cdf1c0:
            void* x9_7
            
            x9_7 = x12_3 s> x9_5 ? x12_3 : x9_5
            
            int64_t i_12 = neg.q(x13_3) + x10_4 * (x9_7 u>> 2)
            void* x10_5 = &x11_4[x13_3]
            int64_t i_2
            
            do
                int32_t x11_7 = *x10_5
                x10_5 += 4
                i_2 = i_12
                i_12 -= 1
                x8_3 |= x11_7
            while (i_2 != 1)
        
        return zx.q(result.d) | zx.q(not.d(((x8_3 - 1) & not.d(x8_3)) s>> 0x1f))
    
    if (x12_2 u< x13_3)
        void* x16_9 = x11_4 - x15_5
        void* x11_5
        
        x11_5 = x8_2 s>= 0 ? x8_2 : -ffffffffffffffff
        
        void* x13_4 = x10_2 - x14_2
        void* x11_6
        
        x11_6 = x11_5 s< 1 ? x11_5 : 1
        
        void* x14_6
        
        x14_6 = x13_4 s> x8_2 ? x13_4 : x8_2
        
        void* x15_11
        
        x15_11 = x9_5 s>= 0 ? x9_5 : -ffffffffffffffff
        
        void* x17_5
        
        x17_5 = x15_11 s< 1 ? x15_11 : 1
        
        void* x15_12
        
        x15_12 = x16_9 s> x9_5 ? x16_9 : x9_5
        
        int64_t x14_8 = neg.q(x17_5 * (x15_12 u>> 2)) + x11_6 * (x14_6 u>> 2)
        int32_t x9_6
        
        if (x14_8 u>= 8)
            void* x16_15
            
            x16_15 = x16_9 s> x9_5 ? x16_9 : x9_5
            
            int64_t i_21 = x14_8 & 0xfffffffffffffff8
            v0.q = 0
            v0:8.q = 0
            x12_2 += i_21
            int64_t i_13 = i_21
            int128_t* x16_19 = &x10_2[x17_5 * (x16_15 u>> 2) + 4]
            v1.q = 0
            v1:8.q = 0
            int64_t i_3
            
            do
                v2 = x16_19[-1]
                v3 = *x16_19
                i_3 = i_13
                i_13 -= 8
                x16_19 = &x16_19[2]
                v0 = vorrq_s8(v2, v0)
                v1 = vorrq_s8(v3, v1)
            while (i_3 != 8)
            uint128_t v0_4 = vorrq_s8(v1, v0)
            uint128_t v0_5 = vorrq_s8(v0_4, vdupq_laneq_s64(v0_4, 1))
            x9_6 = vorrq_s8(v0_5, vdupq_laneq_s32(v0_5, 1))
            
            if (x14_8 != i_21)
                goto label_cdf25c
        else
            x9_6 = 0
        label_cdf25c:
            void* x8_5
            
            x8_5 = x13_4 s> x8_2 ? x13_4 : x8_2
            
            int64_t i_11 = neg.q(x12_2) + x11_6 * (x8_5 u>> 2)
            void* x10_6 = &x10_2[x12_2]
            int64_t i_4
            
            do
                int32_t x11_8 = *x10_6
                x10_6 += 4
                i_4 = i_11
                i_11 -= 1
                x9_6 |= x11_8
            while (i_4 != 1)
        
        int32_t x8_9 = ((x9_6 - 1) & not.d(x9_6)) s>> 0x1f
        return (zx.q(result.d) & zx.q(x8_9)) | (zx.q(not.d(x8_9)) & 1)
else
    int32_t x9_1 = *(arg2 + 0x20)
    
    if (x9_1 != 0)
        if (x9_1 == 1 && *(arg1 + 0x20) == 0)
            return 0xffffffff
        
        goto label_cdf018
    
    result = zx.q(*(arg1 + 0x20))
    
    if (result.d != 1)
        if (result.d != 0)
            goto label_cdf018
        
        int32_t* x11_1 = *arg1
        int64_t x15_1 = *(arg1 + 8)
        int32_t* x12_1 = *arg2
        int64_t x16_1 = *(arg2 + 8)
        int32_t x8 = 0
        void* x9_3 = x15_1 - x11_1
        void* x10_1 = x16_1 - x12_1
        int64_t x14_1 = x9_3 s>> 2
        int64_t x13_1 = x10_1 s>> 2
        int64_t x17_1
        
        x17_1 = x13_1 u< x14_1 ? x13_1 : x14_1
        
        if (x17_1 != 0)
            int64_t i_19 = neg.q(x17_1)
            int32_t* x0_1 = x11_1
            int32_t* x1 = x12_1
            int64_t i_5
            
            do
                int32_t x2 = *x0_1
                x0_1 = &x0_1[1]
                int32_t x3_1 = *x1
                x1 = &x1[1]
                i_5 = i_19
                i_19 += 1
                int32_t x4_1 = x3_1 ^ x2
                int32_t x4_2 = ((x4_1 - 1) & not.d(x4_1)) s>> 0x1f
                x8 = (x8 & x4_2) | ((((((x2 - x3_1) ^ x2) | x4_1) ^ x2) s>> 0x1f | 1) & not.d(x4_2))
            while (i_5 u< -1)
        
        if (x14_1 u< x13_1)
            void* x17_2 = x11_1 - x15_1
            void* x11_2
            
            x11_2 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
            
            void* x13_2 = x12_1 - x16_1
            void* x11_3
            
            x11_3 = x11_2 s< 1 ? x11_2 : 1
            
            void* x15_2
            
            x15_2 = x13_2 s> x10_1 ? x13_2 : x10_1
            
            void* x16_2
            
            x16_2 = x9_3 s>= 0 ? x9_3 : -ffffffffffffffff
            
            void* x0_2
            
            x0_2 = x16_2 s< 1 ? x16_2 : 1
            
            void* x16_3
            
            x16_3 = x17_2 s> x9_3 ? x17_2 : x9_3
            
            int64_t x15_4 = neg.q(x0_2 * (x16_3 u>> 2)) + x11_3 * (x15_2 u>> 2)
            int32_t x9_4
            
            if (x15_4 u>= 8)
                void* x17_7
                
                x17_7 = x17_2 s> x9_3 ? x17_2 : x9_3
                
                int64_t i_22 = x15_4 & 0xfffffffffffffff8
                v0.q = 0
                v0:8.q = 0
                x14_1 += i_22
                int64_t i_14 = i_22
                int128_t* x17_11 = &x12_1[x0_2 * (x17_7 u>> 2) + 4]
                v1.q = 0
                v1:8.q = 0
                int64_t i_6
                
                do
                    v2 = x17_11[-1]
                    v3 = *x17_11
                    i_6 = i_14
                    i_14 -= 8
                    x17_11 = &x17_11[2]
                    v0 = vorrq_s8(v2, v0)
                    v1 = vorrq_s8(v3, v1)
                while (i_6 != 8)
                uint128_t v0_7 = vorrq_s8(v1, v0)
                uint128_t v0_8 = vorrq_s8(v0_7, vdupq_laneq_s64(v0_7, 1))
                x9_4 = vorrq_s8(v0_8, vdupq_laneq_s32(v0_8, 1))
                
                if (x15_4 != i_22)
                    goto label_cdf36c
            else
                x9_4 = 0
            label_cdf36c:
                void* x10_8
                
                x10_8 = x13_2 s> x10_1 ? x13_2 : x10_1
                
                int64_t i_16 = neg.q(x14_1) + x11_3 * (x10_8 u>> 2)
                void* x11_9 = &x12_1[x14_1]
                int64_t i_7
                
                do
                    int32_t x12_6 = *x11_9
                    x11_9 += 4
                    i_7 = i_16
                    i_16 -= 1
                    x9_4 |= x12_6
                while (i_7 != 1)
            
            return zx.q(neg.d(x8 | not.d(((x9_4 - 1) & not.d(x9_4)) s>> 0x1f)))
        
        if (x13_1 u< x14_1)
            void* x17_6 = x12_1 - x16_1
            void* x12_4
            
            x12_4 = x9_3 s>= 0 ? x9_3 : -ffffffffffffffff
            
            void* x14_11 = x11_1 - x15_1
            void* x12_5
            
            x12_5 = x12_4 s< 1 ? x12_4 : 1
            
            void* x15_16
            
            x15_16 = x14_11 s> x9_3 ? x14_11 : x9_3
            
            void* x16_20
            
            x16_20 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
            
            void* x0_5
            
            x0_5 = x16_20 s< 1 ? x16_20 : 1
            
            void* x16_21
            
            x16_21 = x17_6 s> x10_1 ? x17_6 : x10_1
            
            int64_t x15_18 = neg.q(x0_5 * (x16_21 u>> 2)) + x12_5 * (x15_16 u>> 2)
            int32_t x10_7
            
            if (x15_18 u>= 8)
                void* x17_12
                
                x17_12 = x17_6 s> x10_1 ? x17_6 : x10_1
                
                int64_t i_23 = x15_18 & 0xfffffffffffffff8
                v0.q = 0
                v0:8.q = 0
                x13_1 += i_23
                int64_t i_17 = i_23
                int128_t* x17_16 = &x11_1[x0_5 * (x17_12 u>> 2) + 4]
                v1.q = 0
                v1:8.q = 0
                int64_t i_8
                
                do
                    v2 = x17_16[-1]
                    v3 = *x17_16
                    i_8 = i_17
                    i_17 -= 8
                    x17_16 = &x17_16[2]
                    v0 = vorrq_s8(v2, v0)
                    v1 = vorrq_s8(v3, v1)
                while (i_8 != 8)
                uint128_t v0_10 = vorrq_s8(v1, v0)
                uint128_t v0_11 = vorrq_s8(v0_10, vdupq_laneq_s64(v0_10, 1))
                x10_7 = vorrq_s8(v0_11, vdupq_laneq_s32(v0_11, 1))
                
                if (x15_18 != i_23)
                    goto label_cdf40c
            else
                x10_7 = 0
            label_cdf40c:
                void* x9_12
                
                x9_12 = x14_11 s> x9_3 ? x14_11 : x9_3
                
                int64_t i_15 = neg.q(x13_1) + x12_5 * (x9_12 u>> 2)
                void* x11_10 = &x11_1[x13_1]
                int64_t i_9
                
                do
                    int32_t x12_7 = *x11_10
                    x11_10 += 4
                    i_9 = i_15
                    i_15 -= 1
                    x10_7 |= x12_7
                while (i_9 != 1)
            
            int32_t x9_16 = ((x10_7 - 1) & not.d(x10_7)) s>> 0x1f
            x8 = (x8 & x9_16) | (not.d(x9_16) & 1)
        
        return zx.q(neg.d(x8))
return result
