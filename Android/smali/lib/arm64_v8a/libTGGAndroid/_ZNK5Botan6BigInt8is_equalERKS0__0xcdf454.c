// 函数: _ZNK5Botan6BigInt8is_equalERKS0_
// 地址: 0xcdf454
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1

if (*(arg1 + 0x20) != entry_x1[4].d)
    return 0

int64_t x8 = *(arg1 + 0x18)
void* x9_1 = *arg1
int64_t x10
void* x11
int64_t x12_1
int64_t x14_1

if (x8 == -1)
    int64_t x10_1 = *(arg1 + 8)
    void* x11_1 = x10_1 - x9_1
    
    if (x10_1 == x9_1)
        x8 = 0
    else
        void* x13_2
        
        x13_2 = x11_1 s>= 0 ? x11_1 : -ffffffffffffffff
        
        void* x12_2 = x9_1 - x10_1
        void* x13_3
        
        x13_3 = x13_2 s< 1 ? x13_2 : 1
        
        x8 = x11_1 s>> 2
        void* x11_2
        
        x11_2 = x12_2 s> x11_1 ? x12_2 : x11_1
        
        int64_t i_10 = x13_3 * (x11_2 u>> 2)
        uint64_t x12_3 = 1
        int64_t i
        
        do
            int32_t x13_4 = *(x9_1 - 4 + (i_10 << 2))
            i = i_10
            i_10 -= 1
            x12_3 = zx.q(x12_3.d) & zx.q(((x13_4 - 1) & not.d(x13_4)) s>> 0x1f)
            x8 -= x12_3
        while (i != 1)
    
    *(arg1 + 0x18) = x8
    x10 = entry_x1[3]
    x11 = *entry_x1
    
    if (x10 == -1)
        goto label_cdf62c
else
    x10 = entry_x1[3]
    x11 = *entry_x1
    
    if (x10 == -1)
    label_cdf62c:
        int64_t x12_4 = entry_x1[1]
        void* x13_8 = x12_4 - x11
        
        if (x12_4 == x11)
            x10 = 0
        else
            void* x15_2
            
            x15_2 = x13_8 s>= 0 ? x13_8 : -ffffffffffffffff
            
            void* x14_4 = x11 - x12_4
            void* x15_3
            
            x15_3 = x15_2 s< 1 ? x15_2 : 1
            
            x10 = x13_8 s>> 2
            void* x13_9
            
            x13_9 = x14_4 s> x13_8 ? x14_4 : x13_8
            
            int64_t i_11 = x15_3 * (x13_9 u>> 2)
            uint64_t x14_5 = 1
            int64_t i_1
            
            do
                int32_t x15_4 = *(x11 - 4 + (i_11 << 2))
                i_1 = i_11
                i_11 -= 1
                x14_5 = zx.q(x14_5.d) & zx.q(((x15_4 - 1) & not.d(x15_4)) s>> 0x1f)
                x10 -= x14_5
            while (i_1 != 1)
        
        entry_x1[3] = x10
        x12_1 = x10 - x8
        
        x14_1 = x10 u< x8 ? x10 : x8
        
        if (x14_1 != 0)
            goto label_cdf494
        
        goto label_cdf69c

x12_1 = x10 - x8

x14_1 = x10 u< x8 ? x10 : x8

int32_t x13_1
int64_t x14_6
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3

if (x14_1 != 0)
label_cdf494:
    int64_t i_18
    
    if (x14_1 u>= 8)
        i_18 = x14_1 & 0xfffffffffffffff8
        int128_t* x13_6 = x9_1 + 0x10
        void* x16_1 = x11 + 0x10
        v0.q = 0
        v0:8.q = 0
        int64_t i_15 = i_18
        v1.q = 0
        v1:8.q = 0
        int64_t i_2
        
        do
            v2 = x13_6[-1]
            v3 = *x13_6
            int128_t v4 = *(x16_1 - 0x10)
            int128_t v5 = *x16_1
            x13_6 = &x13_6[2]
            i_2 = i_15
            i_15 -= 8
            x16_1 += 0x20
            v0 = vorrq_s8(v4 ^ v2, v0)
            v1 = vorrq_s8(v5 ^ v3, v1)
        while (i_2 != 8)
        uint128_t v0_1 = vorrq_s8(v1, v0)
        uint128_t v0_2 = vorrq_s8(v0_1, vdupq_laneq_s64(v0_1, 1))
        x13_1 = vorrq_s8(v0_2, vdupq_laneq_s32(v0_2, 1)).d
        
        if (x14_1 != i_18)
            goto label_cdf568
    else
        i_18 = 0
        x13_1 = 0
    label_cdf568:
        int64_t x16_2 = i_18 << 2
        int64_t i_13 = x14_1 - i_18
        int32_t* x15_1 = x11 + x16_2
        int32_t* x16_3 = x9_1 + x16_2
        int64_t i_3
        
        do
            int32_t x17_1 = *x16_3
            x16_3 = &x16_3[1]
            int32_t x0_1 = *x15_1
            x15_1 = &x15_1[1]
            i_3 = i_13
            i_13 -= 1
            x13_1 |= x0_1 ^ x17_1
        while (i_3 != 1)
    x14_6 = x8 - x10
    
    if (x8 u>= x10)
        goto label_cdf6a8
    
    goto label_cdf59c

label_cdf69c:
x13_1 = 0
x14_6 = x8 - x10

if (x8 u< x10)
label_cdf59c:
    int64_t i_16
    
    if (x12_1 u>= 8)
        i_16 = x12_1 & 0xfffffffffffffff8
        v1.q = 0
        v1:8.q = 0
        void* x14_3 = x11 + (x8 << 2)
        v0.q = 0
        v0:8.q = 0
        x8 += i_16
        v1.d = x13_1
        void* x13_7 = x14_3 + 0x10
        int64_t i_14 = i_16
        int64_t i_4
        
        do
            v2 = *(x13_7 - 0x10)
            v3 = *x13_7
            i_4 = i_14
            i_14 -= 8
            x13_7 += 0x20
            v1 = vorrq_s8(v2, v1)
            v0 = vorrq_s8(v3, v0)
        while (i_4 != 8)
        uint128_t v0_3 = vorrq_s8(v0, v1)
        uint128_t v0_4 = vorrq_s8(v0_3, vdupq_laneq_s64(v0_3, 1))
        x13_1 = vorrq_s8(v0_4, vdupq_laneq_s32(v0_4, 1))
    
    if (x12_1 u< 8 || x12_1 != i_16)
        int64_t i_9 = x10 - x8
        void* x8_1 = x11 + (x8 << 2)
        int64_t i_5
        
        do
            int32_t x10_3 = *x8_1
            x8_1 += 4
            i_5 = i_9
            i_9 -= 1
            x13_1 |= x10_3
        while (i_5 != 1)
else
label_cdf6a8:
    
    if (x10 u< x8)
        int64_t i_17
        
        if (x14_6 u>= 8)
            i_17 = x14_6 & 0xfffffffffffffff8
            v1.q = 0
            v1:8.q = 0
            void* x12_6 = x9_1 + (x10 << 2)
            v0.q = 0
            v0:8.q = 0
            x10 += i_17
            v1.d = x13_1
            int128_t* x12_7 = x12_6 + 0x10
            int64_t i_12 = i_17
            int64_t i_6
            
            do
                v2 = x12_7[-1]
                v3 = *x12_7
                i_6 = i_12
                i_12 -= 8
                x12_7 = &x12_7[2]
                v1 = vorrq_s8(v2, v1)
                v0 = vorrq_s8(v3, v0)
            while (i_6 != 8)
            uint128_t v0_6 = vorrq_s8(v0, v1)
            uint128_t v0_7 = vorrq_s8(v0_6, vdupq_laneq_s64(v0_6, 1))
            x13_1 = vorrq_s8(v0_7, vdupq_laneq_s32(v0_7, 1))
        
        if (x14_6 u< 8 || x14_6 != i_17)
            int64_t i_8 = x8 - x10
            void* x9_2 = x9_1 + (x10 << 2)
            int64_t i_7
            
            do
                int32_t x10_4 = *x9_2
                x9_2 += 4
                i_7 = i_8
                i_8 -= 1
                x13_1 |= x10_4
            while (i_7 != 1)

return zx.q(((x13_1 - 1) & not.d(x13_1)) u>> 0x1f)
