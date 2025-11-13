// 函数: _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEC2ERKS5_
// 地址: 0xe6e430
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t result = x8 - x9

if (x8 != x9)
    int64_t x22_1 = (result s>> 3) * -0x5555555555555555
    
    if (x22_1 u>= 0xaaaaaaaaaaaaaab)
    label_e6e530:
        int64_t* x0_4 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x20_1 = *arg1
        
        if (x20_1 != 0)
            int64_t* x8_6 = *(arg1 + 8)
            void* x0_5 = x20_1
            
            if (x8_6 != x20_1)
                int64_t* x22_4 = x8_6
                
                do
                    x22_4 = &x22_4[-3]
                    void* x0_6 = *x22_4
                    
                    if (x0_6 != 0)
                        x8_6[-2] = x0_6
                        operator delete(x0_6)
                    
                    x8_6 = x22_4
                while (x20_1 != x22_4)
                
                x0_5 = *arg1
            
            *(arg1 + 8) = x20_1
            operator delete(x0_5)
        
        sub_1101e04(x0_4)
        noreturn
    
    result = operator new(result)
    *arg1 = result
    *(arg1 + 8) = result
    *(arg1 + 0x10) = result + x22_1 * 0x18
    int64_t* x23_1 = *entry_x1
    int64_t x24_1 = entry_x1[1]
    uint64_t result_1 = result
    
    if (x23_1 != x24_1)
        while (true)
            __builtin_memset(result_1, 0, 0x18)
            int64_t x9_1 = *x23_1
            int64_t x8_3 = x23_1[1]
            uint64_t x22_2 = x8_3 - x9_1
            
            if (x8_3 != x9_1)
                if ((x22_2 & 0xffffffff80000000) != 0)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    break
                
                result = operator new(x22_2)
                *result_1 = result
                *(result_1 + 8) = result
                *(result_1 + 0x10) = result + x22_2
                int64_t x1 = *x23_1
                uint64_t result_2 = result
                size_t x22_3 = x23_1[1] - x1
                
                if (x22_3 s>= 1)
                    result = memcpy(result_2, x1, x22_3)
                    result_2 += x22_3
                
                *(result_1 + 8) = result_2
            
            x23_1 = &x23_1[3]
            result_1 += 0x18
            
            if (x24_1 == x23_1)
                goto label_e6e4a4
        
        goto label_e6e530
    
label_e6e4a4:
    *(arg1 + 8) = result_1

return result
