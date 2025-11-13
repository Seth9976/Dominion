// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessI8UI2StateS2_EEPS2_EEbT0_S6_T_
// 地址: 0x1047be8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x22 + 0x28)
int64_t x8_2 = ((arg2 - arg1) s>> 4) * -0x5555555555555555
char x8_3

if (x8_2 u> 5)
    void* x21_3 = arg1 + 0x60
    int32_t x9_1 = std::__ndk1::__sort3<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(arg1, 
        arg1 + 0x30, x21_3, arg3)
    void* x8_4 = arg1 + 0x90
    char x8_11
    
    if (x8_4 == arg2)
        x8_11 = 1
    else
        int64_t x23_2 = 0
        int32_t x24_2 = 0
        
        while (true)
            void* x26_1 = x21_3
            void* x25_1 = *x8_4
            void* x28_1 = *x26_1
            x21_3 = x8_4
            int32_t x0_5
            int128_t v0_2
            int128_t v1_2
            int128_t v2_2
            x0_5, x9_1, v0_2, v1_2, v2_2 = strcmp(*(x25_1 + 0x10), *(x28_1 + 0x10))
            int32_t x27_1
            
            if ((x0_5 & 0x80000000) != 0)
                x27_1 = *(x21_3 + 8)
            label_1047d58:
                int32_t x8_6 = *(x21_3 + 0x2c)
                void* x8_5 = arg1
                int128_t var_a0_2 = *(x21_3 + 0xc)
                int128_t var_90_2 = *(x21_3 + 0x1c)
                v0_2 = *(x26_1 + 0x20)
                v2_2 = *x26_1
                *(x21_3 + 0x10) = *(x26_1 + 0x10)
                *(x21_3 + 0x20) = v0_2
                *x21_3 = v2_2
                
                if (x26_1 != arg1)
                    int64_t x28_2 = x23_2
                    
                    while (true)
                        void* fp_1 = arg1 + x28_2
                        void* x22_1 = *(fp_1 + 0x30)
                        int32_t x0_7
                        int128_t v2_3
                        x0_7, v0_2, v1_2, v2_3 = strcmp(*(x25_1 + 0x10), *(x22_1 + 0x10))
                        
                        if ((x0_7 & 0x80000000) == 0)
                            if (x0_7 != 0)
                                x8_5 = x26_1
                                break
                            
                            int32_t x8_8 = *(arg1 + x28_2 + 0x38)
                            
                            if (x27_1 s>= x8_8 && (x25_1 u>= x22_1 || x27_1 s> x8_8))
                                x8_5 = arg1 + x28_2 + 0x60
                                break
                        
                        v1_2 = *(fp_1 + 0x40)
                        v2_3 = *(fp_1 + 0x50)
                        x28_2 -= 0x30
                        x26_1 -= 0x30
                        *(fp_1 + 0x60) = *(fp_1 + 0x30)
                        *(fp_1 + 0x70) = v1_2
                        *(fp_1 + 0x80) = v2_3
                        
                        if (x28_2 == -0x60)
                            x8_5 = arg1
                            break
                
                *x8_5 = x25_1
                *(x8_5 + 8) = x27_1
                x9_1 = x8_6
                x24_2 += 1
                *(x8_5 + 0x2c) = x9_1
                *(x8_5 + 0x1c) = var_90_2
                *(x8_5 + 0xc) = var_a0_2
                
                if (x24_2 == 8)
                    x8_11 = 0
                    x9_1 = x21_3 + 0x30 == arg2 ? 1 : 0
                    break
            else if (x0_5 == 0)
                x27_1 = *(x21_3 + 8)
                int32_t x8_10 = *(x26_1 + 8)
                
                if (x27_1 s< x8_10)
                    goto label_1047d58
                
                if (x25_1 u< x28_1 && x27_1 s<= x8_10)
                    goto label_1047d58
            x8_4 = x21_3 + 0x30
            x23_2 += 0x30
            
            if (x8_4 == arg2)
                x8_11 = 1
                break
    
    x8_3 = x8_11 | x9_1.b
else
    x8_3 = 1
    
    switch (x8_2)
        case 2
            void* x23_1 = *(arg2 - 0x30)
            void* x24_1 = *arg1
            int32_t x0_1
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            x0_1, v0_1, v1_1, v2_1 = strcmp(*(x23_1 + 0x10), *(x24_1 + 0x10))
            
            if ((x0_1 & 0x80000000) != 0)
            label_1047c78:
                x8_3 = 1
                int128_t var_90_1 = *(arg1 + 0x10)
                int128_t var_80_1 = *(arg1 + 0x20)
                int128_t var_a0_1 = *arg1
                v0_1 = *(arg2 - 0x10)
                v2_1 = *(arg2 - 0x30)
                *(arg1 + 0x10) = *(arg2 - 0x20)
                *(arg1 + 0x20) = v0_1
                *arg1 = v2_1
                *(arg2 - 0x20) = var_90_1
                *(arg2 - 0x10) = var_80_1
                *(arg2 - 0x30) = var_a0_1
            else if (x0_1 == 0)
                int32_t x9_4 = *(arg2 - 0x28)
                int32_t x10_3 = *(arg1 + 8)
                
                if (x9_4 s< x10_3)
                    goto label_1047c78
                
                x8_3 = 1
                
                if (x23_1 u< x24_1 && x9_4 s<= x10_3)
                    goto label_1047c78
            else
                x8_3 = 1
        case 3
            std::__ndk1::__sort3<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(arg1, 
                arg1 + 0x30, arg2 - 0x30, arg3)
            x8_3 = 1
        case 4
            std::__ndk1::__sort4<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(arg1, 
                arg1 + 0x30, arg1 + 0x60, arg2 - 0x30, arg3)
            x8_3 = 1
        case 5
            sub_10477f4(arg1, arg1 + 0x30, arg1 + 0x60, arg1 + 0x90, arg2 - 0x30, arg3)
            x8_3 = 1

if (*(x22 + 0x28) == x9)
    return x8_3 & 1

__stack_chk_fail()
noreturn
