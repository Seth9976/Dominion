// 函数: sub_9fd5f0
// 地址: 0x9fd5f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25
uint64_t var_38 = x25
uint64_t x22
uint64_t var_20 = x22
DomYield var_27f0
YldCopy(&var_27f0, arg3)
int32_t var_27a8

if (var_27a8 == 0)
    puts("Got no hint!")
    pthread_kill(pthread_self(), 6)
    XNoReturn()
else
    int32_t var_2798
    int64_t x9_1 = sx.q(var_2798)
    *(arg2 + 0xc0) = var_27a8
    *(arg2 + 0xb8) = x9_1.d
    int32_t var_27ec
    *(arg2 + 0xbc) = var_27ec
    *(arg2 + 0xc8) = *(arg1 + 0x19ec)
    void* x8_3 = *((x9_1 << 3) + 0x14a7240)
    int32_t x8_4
    
    if (x8_3 == 0)
        x8_4 = -1
    else
        x8_4 = *(x8_3 + 0xc8)
    
    *(arg2 + 0xcc) = x8_4
    uint64_t x8_5 = zx.q(var_27ec - 1)
    int32_t var_279c
    *(arg2 + 0xc4) = var_279c
    
    if (x8_5.d u<= 8)
        int32_t var_278c
        int32_t var_2788
        int32_t var_277c
        int32_t var_2778[0x1ca]
        int32_t var_1a90[0x1d]
        DomYield var_d70
        int64_t result
        
        switch (x8_5)
            case 0
                int32_t x5_1
                int32_t x6_1
                int32_t x7_1
                x5_1, x6_1, x7_1 = sub_a070ec(&var_2778, &var_2778[sx.q(var_277c)])
                
                if (var_278c != 1)
                    char var_27a4
                    
                    if ((zx.d(var_27a4) & 1) == 0)
                    label_9fda54:
                        uint64_t x12_2 = zx.q(var_277c)
                        
                        if (x12_2.d s>= 2)
                            int64_t i = 0
                            void* x11_2 = arg1 + zx.q(var_2778[0]) * 0x68
                            
                            do
                                uint64_t x15_2 = zx.q(*(&var_27f0 + (i << 2) + 0x7c))
                                
                                if (*(arg1 + x15_2 * 0x68 + 0x1a70) != *(x11_2 + 0x1a70)
                                        || *(arg1 + x15_2 * 0x68 + 0x1a74) != *(x11_2 + 0x1a74)
                                        || *(arg1 + x15_2 * 0x68 + 0x1a94) != *(x11_2 + 0x1a94))
                                    int128_t var_1ac0
                                    __builtin_memset(&var_1ac0, 0, 0x30)
                                    int128_t var_1ad0 = zx.o(0)
                                    return sub_a09c14(arg1, arg2, &var_27f0, 0, &var_1ad0, x5_1, 
                                        x6_1, x7_1, arg2, x22, x25)
                                
                                i += 1
                            while (x12_2 - 1 != i)
                        
                        result = memcpy(&var_d70, &var_27f0, 0xd20)
                        int32_t var_d0c
                        int32_t x8_28 = var_d0c
                        int32_t var_cfc
                        
                        if (x8_28 s> var_cfc)
                            x8_28 = var_cfc
                            int32_t var_d0c_1 = var_cfc
                        
                        int32_t i_8
                        int32_t i_1 = i_8
                        
                        if (i_1 s<= x8_28)
                            do
                                int32_t i_9 = i_1
                                result = sub_a07b04(arg1, arg2, &var_d70)
                                i_1 += 1
                            while (x8_28 + 1 != i_1)
                        
                        return result
                    
                    memcpy(&var_1a90, &var_27f0, 0xd20)
                    int32_t var_1a1c_1 = 0
                    x5_1, x6_1, x7_1 = sub_a07b04(arg1, arg2, &var_1a90)
                    
                    if (var_278c != 1)
                        goto label_9fda54
                    
                    result = YldCopy(&var_d70, &var_27f0)
                    int32_t var_cfc_7 = 1
                    
                    if (var_277c s>= 1)
                        int64_t i_2 = 0
                        
                        do
                            int32_t var_cf8_5 = var_2778[i_2]
                            result = sub_a07b04(arg1, arg2, &var_d70)
                            i_2 += 1
                        while (i_2 s< sx.q(var_277c))
                else
                    result = YldCopy(&var_d70, &var_27f0)
                    int32_t x8_9 = var_277c
                    int32_t var_cfc_2 = 1
                    
                    if (x8_9 s>= 1)
                        int64_t i_3 = 0
                        int32_t x23_1 = 0
                        
                        do
                            uint64_t x9_5 = zx.q(*(&var_27f0 + (i_3 << 2) + 0x78))
                            int32_t j = *(arg1 + x9_5 * 0x68 + 0x1a70)
                            
                            if (x23_1 s< 1)
                            label_9fd754:
                                int32_t var_cf8_1 = x9_5.d
                                result = sub_a07b04(arg1, arg2, &var_d70)
                                x8_9 = var_277c
                                var_1a90[sx.q(x23_1)] = j
                                x23_1 += 1
                            else
                                uint64_t x10_2 = zx.q(x23_1)
                                int32_t (* x11_1)[0x1d] = &var_1a90
                                
                                while (j != *x11_1)
                                    uint64_t temp0_1 = x10_2
                                    x10_2 -= 1
                                    x11_1 = &(*x11_1)[1]
                                    
                                    if (temp0_1 == 1)
                                        goto label_9fd754
                            
                            i_3 += 1
                        while (i_3 s< sx.q(x8_9))
            case 1
                memset(&var_1a90, 0, 0x320)
                return sub_a0a104(arg1, arg2, &var_27f0, &var_d70, 0, &var_1a90)
            case 2
                result = memcpy(&var_d70, &var_27f0, 0xd20)
                int32_t var_1ad8
                
                if (var_1ad8 s>= 1)
                    int64_t i_4 = 0
                    
                    do
                        int32_t var_1af8[0x8]
                        int32_t var_68_1 = var_1af8[i_4]
                        result = sub_a07b04(arg1, arg2, &var_d70)
                        i_4 += 1
                    while (i_4 s< sx.q(var_1ad8))
                
                return result
            case 3
                return sub_a0a2b4(arg1, arg2, &var_27f0, 0, 0)
            case 4, 8
                result = memcpy(&var_d70, &var_27f0, 0xd20)
                int32_t x8_6 = var_278c
                int32_t x21_1 = var_2788
                
                if (x21_1 s<= x8_6)
                    bool cond:1_1
                    
                    do
                        if (x21_1 s<= 0x28)
                            int32_t var_cfc_1 = x21_1
                            result = sub_a07b04(arg1, arg2, &var_d70)
                            x8_6 = var_278c
                        
                        cond:1_1 = x21_1 s>= x8_6
                        x21_1 += 1
                    while (not(cond:1_1))
                
                return result
            case 5
                result = YldCopy(&var_d70, &var_27f0)
                int32_t var_cfc_3 = 1
                
                if (var_277c s>= 1)
                    int64_t i_5 = 0
                    
                    do
                        int32_t var_cf8_2 = var_2778[i_5]
                        result = sub_a07b04(arg1, arg2, &var_d70)
                        i_5 += 1
                    while (i_5 s< sx.q(var_277c))
            case 6
                result = YldCopy(&var_d70, &var_27f0)
                int32_t var_cfc_4 = 1
                
                if (var_277c s>= 1)
                    int64_t i_6 = 0
                    
                    do
                        int32_t var_cf8_3 = var_2778[i_6]
                        result = sub_a07b04(arg1, arg2, &var_d70)
                        i_6 += 1
                    while (i_6 s< sx.q(var_277c))
            case 7
                result = YldCopy(&var_d70, &var_27f0)
                int32_t var_cfc_5 = 1
                
                if (var_277c s>= 1)
                    int64_t i_7 = 0
                    
                    do
                        int32_t var_cf8_4 = var_2778[i_7]
                        result = sub_a07b04(arg1, arg2, &var_d70)
                        i_7 += 1
                    while (i_7 s< sx.q(var_277c))
        
        if (var_2788 != 0)
            return result
        
        int32_t var_cfc_6 = 0
        return sub_a07b04(arg1, arg2, &var_d70)

printf("Unknown choice type %d\n")
pthread_kill(pthread_self(), 6)
DomGame* x0_27
void* x1_25
DomYield* x2_13
x0_27, x1_25, x2_13 = XNoReturn()
return sub_9fdb9c(x0_27, x1_25, x2_13) __tailcall
