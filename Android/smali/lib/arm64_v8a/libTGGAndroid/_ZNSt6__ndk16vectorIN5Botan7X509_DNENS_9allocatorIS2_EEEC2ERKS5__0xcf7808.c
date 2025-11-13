// 函数: _ZNSt6__ndk16vectorIN5Botan7X509_DNENS_9allocatorIS2_EEEC2ERKS5_
// 地址: 0xcf7808
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t result = x8 - x9

if (x8 != x9)
    int64_t x22_1 = (result s>> 3) * 0x6db6db6db6db6db7
    
    if (x22_1 u>= 0x492492492492493)
        int64_t* x0_2 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x23 = *arg1
        
        if (x23 != 0)
            void** x20_1 = *(arg1 + 8)
            void* x0_3 = x23
            
            if (x20_1 != x23)
                do
                    x20_1 -= 0x38
                    sub_f276a8(arg1 + 0x10, x20_1)
                while (x23 != x20_1)
                
                x0_3 = *arg1
            
            *(arg1 + 8) = x23
            operator delete(x0_3)
        
        sub_1101e04(x0_2)
        noreturn
    
    result = operator new(result)
    *arg1 = result
    *(arg1 + 8) = result
    *(arg1 + 0x10) = result + x22_1 * 0x38
    int64_t x22_2 = *entry_x1
    int64_t x21_2 = entry_x1[1]
    uint64_t result_1 = result
    
    if (x22_2 != x21_2)
        do
            result = Botan::X509_DN::X509_DN(result_1)
            x22_2 += 0x38
            result_1 += 0x38
        while (x21_2 != x22_2)
    
    *(arg1 + 8) = result_1

return result
