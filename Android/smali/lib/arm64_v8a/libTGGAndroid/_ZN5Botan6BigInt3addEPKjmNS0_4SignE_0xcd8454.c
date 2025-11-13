// 函数: _ZN5Botan6BigInt3addEPKjmNS0_4SignE
// 地址: 0xcd8454
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
int64_t x10 = *(arg1 + 8)
int64_t i_22 = *(arg1 + 0x18)
int32_t entry_x3
int32_t x20 = entry_x3
uint64_t i_21 = arg3
int64_t x11 = x10 - x8
int64_t i_24 = x11 s>> 2

if (i_22 == -1)
    if (x11 == 0)
        i_22 = 0
    else
        int64_t x13_1
        
        x13_1 = x11 s>= 0 ? x11 : -1
        
        int64_t x12_1 = x8 - x10
        int64_t x13_2
        
        x13_2 = x13_1 s< 1 ? x13_1 : 1
        
        int64_t x11_1
        
        x11_1 = x12_1 s> x11 ? x12_1 : x11
        
        int64_t i_14 = x13_2 * (x11_1 u>> 2)
        uint64_t x12_2 = 1
        i_22 = i_24
        int64_t i
        
        do
            int32_t x13_3 = *(x8 - 4 + (i_14 << 2))
            i = i_14
            i_14 -= 1
            x12_2 = zx.q(x12_2.d) & zx.q(((x13_3 - 1) & not.d(x13_3)) s>> 0x1f)
            i_22 -= x12_2
        while (i != 1)
    
    *(arg1 + 0x18) = i_22

int64_t i_26

i_26 = i_22 u< i_21 ? i_21 : i_22

uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3

if (i_26 + 1 u> i_24)
    if (i_26 + 1 u<= (*(arg1 + 0x10) - x8) s>> 2 || ((i_26 + 1) & 0xfffffffffffffff8) + 8 u> i_24)
        v0, v1, v2, v3 =
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    else if (((i_26 + 1) & 0xfffffffffffffff8) + 8 u< i_24)
        *(arg1 + 8) = x8 + ((((i_26 + 1) & 0xfffffffffffffff8) + 8) << 2)

if (arg1[8] != x20)
    uint32_t* x0_3 = *arg1
    int32_t x24_1 = 0
    uint64_t i_9
    
    i_9 = i_22 u> i_21 ? i_21 : i_22
    
    if (i_9 != 0)
        uint32_t* x9_2 = x0_3
        uint64_t x10_5 = arg2
        uint64_t i_1
        
        do
            uint32_t x11_5 = *x9_2
            x9_2 = &x9_2[1]
            int32_t x12_3 = *x10_5
            x10_5 += 4
            i_1 = i_9
            i_9 -= 1
            int32_t x13_5 = x12_3 ^ x11_5
            int32_t x13_6 = ((x13_5 - 1) & not.d(x13_5)) s>> 0x1f
            x24_1 = (x24_1 & x13_6)
                | ((((((x11_5 - x12_3) ^ x11_5) | x13_5) ^ x11_5) s>> 0x1f | 1) & not.d(x13_6))
        while (i_1 != 1)
    
    int64_t x8_6 = i_22 - i_21
    
    if (i_22 u< i_21)
        int64_t x9_3 = i_21 - i_22
        int32_t x9_4
        int64_t i_23
        
        if (x9_3 u>= 8)
            int64_t i_19 = x9_3 & 0xfffffffffffffff8
            v0.q = 0
            v0:8.q = 0
            i_23 = i_22 + i_19
            int128_t* x11_11 = arg2 + (i_22 << 2) + 0x10
            int64_t i_16 = i_19
            v1.q = 0
            v1:8.q = 0
            int64_t i_2
            
            do
                v2 = x11_11[-1]
                v3 = *x11_11
                i_2 = i_16
                i_16 -= 8
                x11_11 = &x11_11[2]
                v0 = vorrq_s8(v2, v0)
                v1 = vorrq_s8(v3, v1)
            while (i_2 != 8)
            uint128_t v0_1 = vorrq_s8(v1, v0)
            uint128_t v0_2 = vorrq_s8(v0_1, vdupq_laneq_s64(v0_1, 1))
            x9_4 = vorrq_s8(v0_2, vdupq_laneq_s32(v0_2, 1))
            
            if (x9_3 != i_19)
                goto label_cd866c
        else
            x9_4 = 0
            i_23 = i_22
        label_cd866c:
            int64_t i_11 = i_21 - i_23
            int64_t x8_9 = arg2 + (i_23 << 2)
            int64_t i_3
            
            do
                int32_t x11_12 = *x8_9
                x8_9 += 4
                i_3 = i_11
                i_11 -= 1
                x9_4 |= x11_12
            while (i_3 != 1)
        x24_1 |= not.d(((x9_4 - 1) & not.d(x9_4)) s>> 0x1f)
        goto label_cd8694
    
    if (i_22 u> i_21)
        int32_t x8_7
        uint64_t i_25
        
        if (x8_6 u>= 8)
            int64_t i_20 = x8_6 & 0xfffffffffffffff8
            v0.q = 0
            v0:8.q = 0
            i_25 = i_20 + i_21
            void* x11_14 = &x0_3[i_21 + 4]
            int64_t i_17 = i_20
            v1.q = 0
            v1:8.q = 0
            int64_t i_4
            
            do
                v2 = *(x11_14 - 0x10)
                v3 = *x11_14
                i_4 = i_17
                i_17 -= 8
                x11_14 += 0x20
                v0 = vorrq_s8(v2, v0)
                v1 = vorrq_s8(v3, v1)
            while (i_4 != 8)
            uint128_t v0_4 = vorrq_s8(v1, v0)
            uint128_t v0_5 = vorrq_s8(v0_4, vdupq_laneq_s64(v0_4, 1))
            x8_7 = vorrq_s8(v0_5, vdupq_laneq_s32(v0_5, 1))
            
            if (x8_6 != i_20)
                goto label_cd8704
        else
            x8_7 = 0
            i_25 = i_21
        label_cd8704:
            int64_t i_12 = i_22 - i_25
            void* x9_5 = &x0_3[i_25]
            int64_t i_5
            
            do
                int32_t x11_15 = *x9_5
                x9_5 += 4
                i_5 = i_12
                i_12 -= 1
                x8_7 |= x11_15
            while (i_5 != 1)
        int32_t x8_13 = ((x8_7 - 1) & not.d(x8_7)) s>> 0x1f
        x24_1 = (x24_1 & x8_13) | (not.d(x8_13) & 1)
        *(arg1 + 0x18) = -1
        
        if ((x24_1 & 0x80000000) == 0)
            goto label_cd86a8
        
        goto label_cd8744
    
label_cd8694:
    *(arg1 + 0x18) = -1
    
    if ((x24_1 & 0x80000000) != 0)
    label_cd8744:
        int32_t x12_8 = 0
        int64_t i_18 = i_21 & 0xfffffffffffffff8
        
        if (i_18 != 0)
            void* x9_8 = &x0_3[4]
            void* x10_6 = arg2 + 0x10
            int64_t i_15 = i_18
            int64_t i_6
            
            do
                int32_t x13_7 = *(x10_6 - 0x10)
                int32_t x14_4 = *(x9_8 - 0x10)
                int32_t x15_1 = *(x9_8 - 0xc)
                int32_t x13_8 = x13_7 - x14_4
                *(x9_8 - 0x10) = x13_8 - x12_8
                int32_t x12_10 = *(x10_6 - 0xc)
                int32_t x13_10 = (x13_7 u< x14_4 ? 1 : 0) | (x13_8 u< x12_8 ? 1 : 0)
                int32_t x12_11 = x12_10 - x15_1
                *(x9_8 - 0xc) = x12_11 - x13_10
                int32_t x12_13 = *(x10_6 - 8)
                int32_t x14_7 = (x12_10 u< x15_1 ? 1 : 0) | (x12_11 u< x13_10 ? 1 : 0)
                int32_t x13_11 = *(x9_8 - 8)
                int32_t x15_3 = *(x9_8 - 4)
                int32_t x12_14 = x12_13 - x13_11
                *(x9_8 - 8) = x12_14 - x14_7
                int32_t x12_16 = *(x10_6 - 4)
                int32_t x13_13 = (x12_13 u< x13_11 ? 1 : 0) | (x12_14 u< x14_7 ? 1 : 0)
                int32_t x12_17 = x12_16 - x15_3
                *(x9_8 - 4) = x12_17 - x13_13
                int32_t x12_19 = *x10_6
                int32_t x14_10 = (x12_16 u< x15_3 ? 1 : 0) | (x12_17 u< x13_13 ? 1 : 0)
                int32_t x13_14 = *x9_8
                int32_t x15_5 = *(x9_8 + 4)
                int32_t x12_20 = x12_19 - x13_14
                *x9_8 = x12_20 - x14_10
                int32_t x12_22 = *(x10_6 + 4)
                int32_t x13_16 = (x12_19 u< x13_14 ? 1 : 0) | (x12_20 u< x14_10 ? 1 : 0)
                int32_t x12_23 = x12_22 - x15_5
                *(x9_8 + 4) = x12_23 - x13_16
                int32_t x12_25 = *(x10_6 + 8)
                int32_t x14_13 = (x12_22 u< x15_5 ? 1 : 0) | (x12_23 u< x13_16 ? 1 : 0)
                int32_t x13_17 = *(x9_8 + 8)
                int32_t x15_7 = *(x9_8 + 0xc)
                int32_t x12_26 = x12_25 - x13_17
                *(x9_8 + 8) = x12_26 - x14_13
                int32_t x12_28 = *(x10_6 + 0xc)
                int32_t x13_19 = (x12_25 u< x13_17 ? 1 : 0) | (x12_26 u< x14_13 ? 1 : 0)
                x10_6 += 0x20
                int32_t x12_29 = x12_28 - x15_7
                *(x9_8 + 0xc) = x12_29 - x13_19
                i_6 = i_15
                i_15 -= 8
                x9_8 += 0x20
                x12_8 = (x12_28 u< x15_7 ? 1 : 0) | (x12_29 u< x13_19 ? 1 : 0)
            while (i_6 != 8)
        
        if (i_18 != i_21)
            int64_t i_10 = i_21 - i_18
            void* x8_16 = &x0_3[i_18]
            int64_t x10_8 = arg2 + (i_18 << 2)
            int64_t i_7
            
            do
                int32_t x11_16 = *x10_8
                x10_8 += 4
                int32_t x13_21 = *x8_16
                int32_t x11_17 = x11_16 - x13_21
                int32_t x11_18 = x11_17 - x12_8
                i_7 = i_10
                i_10 -= 1
                x12_8 = (x11_16 u< x13_21 ? 1 : 0) | (x11_17 u< x12_8 ? 1 : 0)
                *x8_16 = x11_18
                x8_16 += 4
            while (i_7 != 1)
        
        if (x12_8 != 0)
            uint32_t* x0_5
            uint64_t x1_4
            uint32_t* x2_2
            uint64_t x3_2
            x0_5, x1_4, x2_2, x3_2 = Botan::assertion_failure("borrow == 0", 
                "y must be greater than x", "bigint_sub2_rev", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xb56)
            return Botan::bigint_sub2(x0_5, x1_4, x2_2, x3_2) __tailcall
        
        if ((x24_1 & 0x80000000) == 0)
            goto label_cd88a4
        
        if (x20 == 0)
            int64_t x8_17 = *(arg1 + 0x18)
            
            if (x8_17 == -1)
                int64_t x9_9 = *arg1
                int64_t x11_19 = *(arg1 + 8)
                int64_t x10_9 = x11_19 - x9_9
                
                if (x11_19 == x9_9)
                    x8_17 = 0
                else
                    int64_t x12_32
                    
                    x12_32 = x10_9 s>= 0 ? x10_9 : -1
                    
                    int64_t x11_20 = x9_9 - x11_19
                    int64_t x12_33
                    
                    x12_33 = x12_32 s< 1 ? x12_32 : 1
                    
                    x8_17 = x10_9 s>> 2
                    int64_t x10_10
                    
                    x10_10 = x11_20 s> x10_9 ? x11_20 : x10_9
                    
                    int64_t i_13 = x12_33 * (x10_10 u>> 2)
                    uint64_t x11_21 = 1
                    int64_t i_8
                    
                    do
                        int32_t x12_34 = *(x9_9 - 4 + (i_13 << 2))
                        i_8 = i_13
                        i_13 -= 1
                        x11_21 = zx.q(x11_21.d) & zx.q(((x12_34 - 1) & not.d(x12_34)) s>> 0x1f)
                        x8_17 -= x11_21
                    while (i_8 != 1)
                
                *(arg1 + 0x18) = x8_17
            
            x20 = x8_17 == 0 ? 1 : 0
        
        arg1[8] = x20
    else
    label_cd86a8:
        Botan::bigint_sub2(x0_3, i_22, arg2, i_21)
    label_cd88a4:
        
        if (x24_1 == 0)
            arg1[8] = 1
else
    uint32_t* x20_1 = *arg1
    uint64_t x23 = ((*(arg1 + 8) - x20_1) s>> 2) - 1
    *(arg1 + 0x18) = -1
    int32_t x0_2 = Botan::bigint_add2_nc(x20_1, x23, arg2, i_21)
    x20_1[x23] += x0_2

return arg1
