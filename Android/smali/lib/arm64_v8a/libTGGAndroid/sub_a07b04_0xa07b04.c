// 函数: sub_a07b04
// 地址: 0xa07b04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t result
result.q = 0
result:8.q = 0
int64_t var_68 = 0
int64_t var_70 = 0
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x14)
int128_t result_1
__builtin_memset(&result_1, 0, 0x24)
int32_t x8 = *(arg3 + 4)
int32_t i_9 = 0
int32_t i_10 = 1
uint64_t var_d40
void* x21_2
int128_t v1
CardID var_d38

if (x8 == 5 || x8 == 9)
label_a07bfc:
    void* x0_8
    x0_8, result, v1 = operator new[](mulu.dp.d(i_10, 0xc))
    x21_2 = x0_8
    
    if (i_9 s< 1)
        var_d40 = 0
    label_a07cc8:
        uint64_t i_7 = zx.q(i_10)
        int32_t* x28_1 = x21_2 + 4
        void* x23_1 = arg3
        uint64_t i
        
        do
            uint64_t x8_3 = zx.q(*(arg3 + 4) - 4)
            int32_t x0_11
            int32_t x8_1
            int32_t x9_3
            
            if (x8_3.d u> 5)
                x0_11 = *(arg1 + zx.q(*(x23_1 + 0x78)) * 0x68 + 0x1a70)
                x8_1 = 0
                x9_3 = *(arg3 + 0xd18)
                
                if (x9_3 != 0)
                    x9_3 = *(x23_1 + 0xd08)
            else
                switch (x8_3)
                    case 0, 3, 4
                        x0_11 = *(x23_1 + 0x78)
                        x8_1 = 0
                        x9_3 = *(arg3 + 0xd18)
                        
                        if (x9_3 != 0)
                            x9_3 = *(x23_1 + 0xd08)
                    case 1, 5
                        x0_11 = *(arg3 + 0x74)
                        x8_1 = 0
                        x9_3 = *(arg3 + 0xd18)
                        
                        if (x9_3 != 0)
                            x9_3 = *(x23_1 + 0xd08)
                    case 2
                        x0_11, result, v1 = AbilitySource(arg1, zx.q(*(x23_1 + 0x78)))
                        x8_1 = *(arg1 + (zx.q(*(x23_1 + 0x78)) u>> 6 & 0xfff) * 0x68 + 0x1a70)
                        x9_3 = *(arg3 + 0xd18)
                        
                        if (x9_3 != 0)
                            x9_3 = *(x23_1 + 0xd08)
            
            x28_1[-1] = x0_11
            *x28_1 = x8_1
            x28_1[1] = x9_3
            x23_1 += 4
            i = i_7
            i_7 -= 1
            x28_1 = &x28_1[3]
        while (i != 1)
    else
        uint64_t i_12 = zx.q(i_9)
        uint64_t x0_10 = operator new[](i_12 << 2)
        int64_t i_8
        
        if (i_9 != 1)
            i_8 = i_12 & 0xfffffffe
            int32_t* x9_1 = x0_10 + 4
            void var_d34
            void* x10_1 = &var_d34
            int64_t i_6 = i_8
            int64_t i_1
            
            do
                uint64_t x14_1 = zx.q(*(x10_1 - 4))
                uint64_t x15_1 = zx.q(*x10_1)
                x10_1 += 8
                i_1 = i_6
                i_6 -= 2
                int32_t x15_3 = *(arg1 + 0x1a68 + x15_1 * 0x68 + 8)
                x9_1[-1] = *(arg1 + 0x1a68 + x14_1 * 0x68 + 8)
                *x9_1 = x15_3
                x9_1 = &x9_1[2]
            while (i_1 != 2)
            
            if (i_8 != i_12)
                goto label_a07c80
        else
            i_8 = 0
        label_a07c80:
            int64_t x10_2 = i_8 << 2
            int64_t i_4 = i_12 - i_8
            int32_t* x9_2 = x0_10 + x10_2
            void* x10_3 = &var_d38 + x10_2
            int64_t i_2
            
            do
                uint64_t x12_1 = zx.q(*x10_3)
                x10_3 += 4
                i_2 = i_4
                i_4 -= 1
                *x9_2 = *(arg1 + x12_1 * 0x68 + 0x1a70)
                x9_2 = &x9_2[1]
            while (i_2 != 1)
        var_d40 = x0_10
        result, v1 = sub_a07fe8(x0_10, x0_10 + (i_12 << 2))
        
        if (i_10 s>= 1)
            goto label_a07cc8
    
    if (*(arg3 + 4) != 2)
        result, v1 = sub_a08a00(x21_2, x21_2 + muls.dp.d(i_10, 0xc))
else if (x8 != 6)
    i_10 = *(arg3 + 0x74)
    i_9 = 0
    
    if (i_10 s>= 1)
        goto label_a07bfc
    
    var_d40 = 0
    x21_2 = nullptr
    
    if (x8 != 2)
        result, v1 = sub_a08a00(x21_2, x21_2 + muls.dp.d(i_10, 0xc))
else
    i_10 = *(arg3 + 0x74)
    
    if (i_10 s>= 1)
        uint64_t x21_1 = zx.q(*(arg3 + 0x78))
        int32_t i_11 = AbilityGetAssociatedCards(arg1, zx.q(*(arg3 + 0x54)), x21_1, &var_d38)
        i_9 = i_11
        
        if (i_11 s<= 0 && AbilitySource(arg1, x21_1) == 0x1121)
            i_9 = CardsAtCard(arg1, zx.q(AbilitySourceCard(arg1, x21_1)), &var_d38)
        
        goto label_a07bfc
    
    x21_2 = nullptr
    i_9 = 0
    var_d40 = 0
    result, v1 = sub_a08a00(x21_2, x21_2 + muls.dp.d(i_10, 0xc))
int32_t x27_1 = *(arg2 + 0xd8)
int64_t x28_2 = sx.q(x27_1)

if (x27_1 s< 1)
label_a07ea8:
    
    if (x27_1 == *(arg2 + 0xdc))
        int64_t x8_22 = x28_2 << 1
        void* x23_3 = *(arg2 + 0xd0)
        *(arg2 + 0xdc) = x8_22.d
        uint64_t x22_1 = x28_2 * 0xe0
        uint64_t x0_18
        
        if (0 == (mulu.dp.q(x8_22, 0x70) u>> 0x40).q)
            x0_18 = x22_1
        else
            x0_18 = -1
        
        int64_t x0_19 = operator new[](x0_18)
        
        if (x27_1 != 0)
            memset(x0_19, 0, 0x70 + (x22_1 - 0x70) u/ 0x70 * 0x70)
        
        *(arg2 + 0xd0) = x0_19
        result, v1 = memcpy(x0_19, x23_3, x28_2 * 0x70)
        
        if (x23_3 != 0)
            result, v1 = operator delete[](x23_3)
            x27_1 = *(arg2 + 0xd8)
    
    int64_t x8_27 = *(arg2 + 0xd0)
    *(arg2 + 0xd8) = x27_1 + 1
    int128_t* x8_28 = x8_27 + muls.dp.d(x27_1, 0x70)
    x8_28[1].q = x21_2
    *(x8_28 + 0x18) = i_10
    *(x8_28 + 0x1c) = 0
    *(x8_28 + 0x28) = i_9
    x8_28[2].q = var_d40
    *x8_28 = var_70.o
    result = result_1
    x8_28[5].q = 0
    *(x8_28 + 0x58) = 0
    int128_t var_90
    *(x8_28 + 0x3c) = var_90
    *(x8_28 + 0x2c) = result
    int32_t var_80
    *(x8_28 + 0x4c) = var_80
    int64_t x10_6 = var_b8
    *(x8_28 + 0x62) = var_b8
    *(x8_28 + 0x5c) = x10_6
else
    int64_t fp_1 = *(arg2 + 0xd0)
    int64_t x24_1 = 0
    
    while (true)
        if (*(fp_1 + x24_1 * 0x70 + 0x18) == i_10)
            if (*(arg2 + 0xbc) != 6)
                int32_t x0_15
                x0_15, result, v1 =
                    memcmp(*(fp_1 + x24_1 * 0x70 + 0x10), x21_2, muls.dp.d(i_10, 0xc))
                
                if (x0_15 == 0)
                label_a07e88:
                    
                    if (x21_2 != 0)
                    label_a07e90:
                        result = operator delete[](x21_2)
                    
                    if (var_d40 == 0)
                        break
                    
                    return operator delete[](var_d40)
            else
                if (i_10 == 0)
                    goto label_a07e88
                
                int32_t* x8_15 = *(fp_1 + x24_1 * 0x70 + 0x10)
                
                if (*x8_15 == *x21_2 && x8_15[1] == *(x21_2 + 4)
                        && *(fp_1 + x24_1 * 0x70 + 0x28) == i_9)
                    if (i_9 s< 1)
                        goto label_a07e90
                    
                    int32_t* x8_20 = *(fp_1 + x24_1 * 0x70 + 0x20)
                    uint64_t x9_7 = var_d40
                    uint64_t i_5 = zx.q(i_9)
                    uint64_t i_3
                    
                    do
                        if (*x8_20 != *x9_7)
                            goto label_a07dec
                        
                        i_3 = i_5
                        i_5 -= 1
                        x9_7 += 4
                        x8_20 = &x8_20[1]
                    while (i_3 != 1)
                    goto label_a07e88
        
    label_a07dec:
        x24_1 += 1
        
        if (x24_1 s>= x28_2)
            goto label_a07ea8

return result
