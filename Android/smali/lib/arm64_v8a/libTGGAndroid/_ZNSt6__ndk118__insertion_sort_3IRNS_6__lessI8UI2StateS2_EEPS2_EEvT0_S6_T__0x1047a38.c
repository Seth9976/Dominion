// 函数: _ZNSt6__ndk118__insertion_sort_3IRNS_6__lessI8UI2StateS2_EEPS2_EEvT0_S6_T_
// 地址: 0x1047a38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
void* __offset(UI2State, 0x60) x21 = arg1 + 0x60
int32_t result = std::__ndk1::__sort3<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(arg1, 
    arg1 + 0x30, x21, arg3)
void* __offset(UI2State, 0x90) x8_1 = arg1 + 0x90

if (x8_1 != arg2)
    int64_t x23_1 = 0
    
    do
        void* x25_1 = x21
        void* x24_1 = *x8_1
        void* x27_1 = *x25_1
        x21 = x8_1
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        result, v0_1, v1_1, v2_1 = strcmp(*(x24_1 + 0x10), *(x27_1 + 0x10))
        int32_t x26_1
        
        if ((result & 0x80000000) != 0)
            x26_1 = *(x21 + 8)
        label_1047ae4:
            int32_t x8_3 = *(x21 + 0x2c)
            void* x8_2 = arg1
            int128_t var_90_1 = *(x21 + 0xc)
            int128_t var_80_1 = *(x21 + 0x1c)
            v0_1 = *(x25_1 + 0x20)
            v2_1 = *x25_1
            *(x21 + 0x10) = *(x25_1 + 0x10)
            *(x21 + 0x20) = v0_1
            *x21 = v2_1
            
            if (x25_1 != arg1)
                int64_t x27_2 = x23_1
                
                while (true)
                    void* x28_1 = arg1 + x27_2
                    void* fp_1 = *(x28_1 + 0x30)
                    int128_t v2_2
                    result, v0_1, v1_1, v2_2 = strcmp(*(x24_1 + 0x10), *(fp_1 + 0x10))
                    
                    if ((result & 0x80000000) == 0)
                        if (result != 0)
                            x8_2 = x25_1
                            break
                        
                        int32_t x8_5 = *(arg1 + x27_2 + 0x38)
                        
                        if (x26_1 s>= x8_5 && (x24_1 u>= fp_1 || x26_1 s> x8_5))
                            x8_2 = arg1 + x27_2 + 0x60
                            break
                    
                    v1_1 = *(x28_1 + 0x40)
                    v2_2 = *(x28_1 + 0x50)
                    x27_2 -= 0x30
                    x25_1 -= 0x30
                    *(x28_1 + 0x60) = *(x28_1 + 0x30)
                    *(x28_1 + 0x70) = v1_1
                    *(x28_1 + 0x80) = v2_2
                    
                    if (x27_2 == -0x60)
                        x8_2 = arg1
                        break
            
            *x8_2 = x24_1
            *(x8_2 + 8) = x26_1
            *(x8_2 + 0x2c) = x8_3
            *(x8_2 + 0x1c) = var_80_1
            *(x8_2 + 0xc) = var_90_1
        else if (result == 0)
            x26_1 = *(x21 + 8)
            int32_t x8_7 = *(x25_1 + 8)
            
            if (x26_1 s< x8_7)
                goto label_1047ae4
            
            if (x24_1 u< x27_1 && x26_1 s<= x8_7)
                goto label_1047ae4
        x8_1 = x21 + 0x30
        x23_1 += 0x30
    while (x8_1 != arg2)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
