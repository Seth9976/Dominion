// 函数: _ZN5Botan6BigInt4add2ERKS0_PKjmNS0_4SignE
// 地址: 0xcdc1f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i_24 = *(arg1 + 0x18)
int32_t x22 = arg4
uint64_t i_23 = arg3
uint32_t const* x19 = arg2

if (i_24 == -1)
    int64_t x8 = *arg1
    int64_t x10_1 = *(arg1 + 8)
    int64_t x9_1 = x10_1 - x8
    
    if (x10_1 == x8)
        i_24 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        i_24 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_10 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8 - 4 + (i_10 << 2))
            i = i_10
            i_10 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            i_24 -= x10_3
        while (i != 1)
    
    *(arg1 + 0x18) = i_24

int32_t x26 = *(arg1 + 0x20)
int64_t i_28

i_28 = i_24 u< i_23 ? i_23 : i_24

int64_t* entry_x8
entry_x8[4].d = 1
int32_t x9_4 = x26
__builtin_memset(entry_x8, 0, 0x18)
entry_x8[3] = -1
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3

if (((i_28 + 1) & 0xfffffffffffffff8) != -8)
    v0, v1, v2, v3 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)
    x9_4 = *(arg1 + 0x20)

entry_x8[4].d = x26
entry_x8[3] = -1
int32_t* result = *entry_x8
uint32_t* x8_4 = *arg1

if (x9_4 != x22)
    int32_t x23_1 = 0
    int64_t i_12
    
    i_12 = i_24 u> i_23 ? i_23 : i_24
    
    if (i_12 != 0)
        uint32_t* x10_6 = x8_4
        uint32_t const* x11_9 = x19
        int64_t i_1
        
        do
            uint32_t x12_5 = *x10_6
            x10_6 = &x10_6[1]
            uint32_t const x13_2 = *x11_9
            x11_9 = &x11_9[1]
            i_1 = i_12
            i_12 -= 1
            uint32_t x14_4 = x13_2 ^ x12_5
            int32_t x14_5 = ((x14_4 - 1) & not.d(x14_4)) s>> 0x1f
            x23_1 = (x23_1 & x14_5)
                | ((((((x12_5 - x13_2) ^ x12_5) | x14_4) ^ x12_5) s>> 0x1f | 1) & not.d(x14_5))
        while (i_1 != 1)
    
    int64_t x9_6 = i_24 - i_23
    
    if (i_24 u< i_23)
        int64_t x10_7 = i_23 - i_24
        int32_t x10_8
        int64_t i_25
        
        if (x10_7 u>= 8)
            int64_t i_20 = x10_7 & 0xfffffffffffffff8
            v0.q = 0
            v0:8.q = 0
            i_25 = i_24 + i_20
            void* x12_11 = &x19[i_24 + 4]
            int64_t i_17 = i_20
            v1.q = 0
            v1:8.q = 0
            int64_t i_2
            
            do
                v2 = *(x12_11 - 0x10)
                v3 = *x12_11
                i_2 = i_17
                i_17 -= 8
                x12_11 += 0x20
                v0 = vorrq_s8(v2, v0)
                v1 = vorrq_s8(v3, v1)
            while (i_2 != 8)
            uint128_t v0_1 = vorrq_s8(v1, v0)
            uint128_t v0_2 = vorrq_s8(v0_1, vdupq_laneq_s64(v0_1, 1))
            x10_8 = vorrq_s8(v0_2, vdupq_laneq_s32(v0_2, 1))
            
            if (x10_7 != i_20)
                goto label_cdc5a4
        else
            x10_8 = 0
            i_25 = i_24
        label_cdc5a4:
            int64_t i_14 = i_23 - i_25
            void* x9_8 = &x19[i_25]
            int64_t i_3
            
            do
                int32_t x12_12 = *x9_8
                x9_8 += 4
                i_3 = i_14
                i_14 -= 1
                x10_8 |= x12_12
            while (i_3 != 1)
        x23_1 |= not.d(((x10_8 - 1) & not.d(x10_8)) s>> 0x1f)
    else if (i_24 u> i_23)
        int32_t x9_7
        uint64_t i_27
        
        if (x9_6 u>= 8)
            int64_t i_21 = x9_6 & 0xfffffffffffffff8
            v0.q = 0
            v0:8.q = 0
            i_27 = i_21 + i_23
            void* x12_14 = &x8_4[i_23 + 4]
            int64_t i_18 = i_21
            v1.q = 0
            v1:8.q = 0
            int64_t i_4
            
            do
                v2 = *(x12_14 - 0x10)
                v3 = *x12_14
                i_4 = i_18
                i_18 -= 8
                x12_14 += 0x20
                v0 = vorrq_s8(v2, v0)
                v1 = vorrq_s8(v3, v1)
            while (i_4 != 8)
            uint128_t v0_4 = vorrq_s8(v1, v0)
            uint128_t v0_5 = vorrq_s8(v0_4, vdupq_laneq_s64(v0_4, 1))
            x9_7 = vorrq_s8(v0_5, vdupq_laneq_s32(v0_5, 1))
            
            if (x9_6 != i_21)
                goto label_cdc620
        else
            x9_7 = 0
            i_27 = i_23
        label_cdc620:
            int64_t i_15 = i_24 - i_27
            void* x10_9 = &x8_4[i_27]
            int64_t i_5
            
            do
                int32_t x12_15 = *x10_9
                x10_9 += 4
                i_5 = i_15
                i_15 -= 1
                x9_7 |= x12_15
            while (i_5 != 1)
        int32_t x9_12 = ((x9_7 - 1) & not.d(x9_7)) s>> 0x1f
        x23_1 = (x23_1 & x9_12) | (not.d(x9_12) & 1)
    
    int64_t x9_16
    
    if (x23_1 s< 0)
        x9_16 = x8_4 ^ x19
    else
        x9_16 = 0
    
    int64_t x10_13
    
    if (x23_1 s< 0)
        x10_13 = i_24 ^ i_23
    else
        x10_13 = 0
    
    uint64_t x2_7 = x10_13 ^ i_24
    uint64_t x8_30 = x10_13 ^ i_23
    uint64_t x4_1
    
    x4_1 = x8_30 u< x2_7 ? x8_30 : x2_7
    
    result = Botan::bigint_sub3(result, x9_16 ^ x8_4, x2_7, x9_16 ^ x19, x4_1)
    
    if ((x23_1 & 0x80000000) != 0)
        if (x22 == 0)
            int64_t x8_31 = entry_x8[3]
            
            if (x8_31 == -1)
                int64_t x9_17 = *entry_x8
                int64_t x11_10 = entry_x8[1]
                int64_t x10_14 = x11_10 - x9_17
                
                if (x11_10 == x9_17)
                    x8_31 = 0
                else
                    int64_t x12_16
                    
                    x12_16 = x10_14 s>= 0 ? x10_14 : -1
                    
                    int64_t x11_11 = x9_17 - x11_10
                    int64_t x12_17
                    
                    x12_17 = x12_16 s< 1 ? x12_16 : 1
                    
                    x8_31 = x10_14 s>> 2
                    int64_t x10_15
                    
                    x10_15 = x11_11 s> x10_14 ? x11_11 : x10_14
                    
                    int64_t i_13 = x12_17 * (x10_15 u>> 2)
                    uint64_t x11_12 = 1
                    int64_t i_6
                    
                    do
                        int32_t x12_18 = *(x9_17 - 4 + (i_13 << 2))
                        i_6 = i_13
                        i_13 -= 1
                        x11_12 = zx.q(x11_12.d) & zx.q(((x12_18 - 1) & not.d(x12_18)) s>> 0x1f)
                        x8_31 -= x11_12
                    while (i_6 != 1)
                
                entry_x8[3] = x8_31
            
            x22 = x8_31 == 0 ? 1 : 0
        
        entry_x8[4].d = x22
    else if (x23_1 == 0)
        entry_x8[4].d = 1
else
    int64_t i_11
    uint64_t i_26
    uint32_t const* x11_5
    bool cond:5_1
    
    do
        i_26 = i_23
        x11_5 = x19
        i_23 = i_24
        i_11 = i_24 - i_26
        cond:5_1 = i_24 u< i_26
        x19 = x8_4
        x8_4 = x11_5
        i_24 = i_26
    while (cond:5_1)
    int32_t x8_5 = 0
    int64_t i_22 = i_26 & 0xfffffffffffffff8
    
    if (i_22 != 0)
        void* x13_1 = &result[4]
        void* x14_1 = &x19[4]
        void* x15_1 = &x11_5[4]
        int64_t i_19 = i_22
        int64_t i_7
        
        do
            int32_t x17_1 = *(x14_1 - 0x10)
            int32_t x1_1 = *(x15_1 - 0x10)
            int32_t x17_2 = x1_1 + x17_1
            *(x13_1 - 0x10) = x17_2 + x8_5
            int32_t x8_7 = *(x14_1 - 0xc)
            int32_t x17_3 = *(x15_1 - 0xc)
            int32_t x1_3 = (x1_1 + x17_1 u< x1_1 ? 1 : 0) | (x17_2 + x8_5 u< x17_2 ? 1 : 0)
            int32_t x8_8 = x17_3 + x8_7
            *(x13_1 - 0xc) = x8_8 + x1_3
            int32_t x8_10 = *(x14_1 - 8)
            int32_t x1_4 = *(x15_1 - 8)
            int32_t x17_5 = (x17_3 + x8_7 u< x17_3 ? 1 : 0) | (x8_8 + x1_3 u< x8_8 ? 1 : 0)
            int32_t x8_11 = x1_4 + x8_10
            *(x13_1 - 8) = x8_11 + x17_5
            int32_t x8_13 = *(x14_1 - 4)
            int32_t x17_6 = *(x15_1 - 4)
            int32_t x1_6 = (x1_4 + x8_10 u< x1_4 ? 1 : 0) | (x8_11 + x17_5 u< x8_11 ? 1 : 0)
            int32_t x8_14 = x17_6 + x8_13
            *(x13_1 - 4) = x8_14 + x1_6
            int32_t x8_16 = *x14_1
            int32_t x1_7 = *x15_1
            int32_t x17_8 = (x17_6 + x8_13 u< x17_6 ? 1 : 0) | (x8_14 + x1_6 u< x8_14 ? 1 : 0)
            int32_t x8_17 = x1_7 + x8_16
            *x13_1 = x8_17 + x17_8
            int32_t x8_19 = *(x14_1 + 4)
            int32_t x17_9 = *(x15_1 + 4)
            int32_t x1_9 = (x1_7 + x8_16 u< x1_7 ? 1 : 0) | (x8_17 + x17_8 u< x8_17 ? 1 : 0)
            int32_t x8_20 = x17_9 + x8_19
            *(x13_1 + 4) = x8_20 + x1_9
            int32_t x8_22 = *(x14_1 + 8)
            int32_t x1_10 = *(x15_1 + 8)
            int32_t x17_11 = (x17_9 + x8_19 u< x17_9 ? 1 : 0) | (x8_20 + x1_9 u< x8_20 ? 1 : 0)
            int32_t x8_23 = x1_10 + x8_22
            *(x13_1 + 8) = x8_23 + x17_11
            int32_t x8_25 = *(x14_1 + 0xc)
            int32_t x17_12 = *(x15_1 + 0xc)
            int32_t x1_12 = (x1_10 + x8_22 u< x1_10 ? 1 : 0) | (x8_23 + x17_11 u< x8_23 ? 1 : 0)
            x14_1 += 0x20
            int32_t x8_26 = x17_12 + x8_25
            *(x13_1 + 0xc) = x8_26 + x1_12
            i_7 = i_19
            i_19 -= 8
            x13_1 += 0x20
            x8_5 = (x17_12 + x8_25 u< x17_12 ? 1 : 0) | (x8_26 + x1_12 u< x8_26 ? 1 : 0)
            x15_1 += 0x20
        while (i_7 != 8)
    
    if (i_22 != i_26)
        int64_t i_16 = i_26 - i_22
        void* x12_2 = &result[i_22]
        void* x11_6 = &x11_5[i_22]
        void* x14_3 = &x19[i_22]
        int64_t i_8
        
        do
            int32_t x15_2 = *x14_3
            x14_3 += 4
            int32_t x16_1 = *x11_6
            x11_6 += 4
            int32_t x15_3 = x16_1 + x15_2
            int32_t x15_4 = x15_3 + x8_5
            i_8 = i_16
            i_16 -= 1
            x8_5 = (x16_1 + x15_2 u< x16_1 ? 1 : 0) | (x15_3 + x8_5 u< x15_3 ? 1 : 0)
            *x12_2 = x15_4
            x12_2 += 4
        while (i_8 != 1)
    
    if (i_26 != i_23)
        void* x10_4 = &result[i_26]
        void* x11_8 = &x19[i_26]
        int64_t i_9
        
        do
            int32_t x12_3 = *x11_8
            x11_8 += 4
            int32_t x12_4 = x12_3 + x8_5
            x8_5 = x12_3 + x8_5 u< x12_3 ? 1 : 0
            i_9 = i_11
            i_11 -= 1
            *x10_4 = x12_4
            x10_4 += 4
        while (i_9 != 1)
    
    result[i_28] += x8_5

return result
