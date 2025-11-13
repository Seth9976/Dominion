// 函数: _ZNSt6__ndk16vectorIN5Botan6BigIntENS_9allocatorIS2_EEEC2ERKS5_
// 地址: 0xf07878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t result = x8 - x9

if (x8 != x9)
    int64_t x22_1 = (result s>> 3) * -0x3333333333333333
    
    if (x22_1 u>= 0x666666666666667)
        int64_t* x0_2 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x21_3 = *arg1
        
        if (x21_3 != 0)
            int64_t* x8_5 = *(arg1 + 8)
            void* x0_3 = x21_3
            
            if (x8_5 != x21_3)
                int64_t* x22_3 = x8_5
                
                do
                    x22_3 = &x22_3[-5]
                    void* x0_4 = *x22_3
                    
                    if (x0_4 != 0)
                        int64_t x9_1 = x8_5[-3]
                        x8_5[-4] = x0_4
                        Botan::deallocate_memory(x0_4, (x9_1 - x0_4) s>> 2, 4)
                    
                    x8_5 = x22_3
                while (x21_3 != x22_3)
                
                x0_3 = *arg1
            
            *(arg1 + 8) = x21_3
            operator delete(x0_3)
        
        sub_1101e04(x0_2)
        noreturn
    
    result = operator new(result)
    *arg1 = result
    *(arg1 + 8) = result
    *(arg1 + 0x10) = result + x22_1 * 0x28
    void* x22_2 = *entry_x1
    int64_t x21_2 = entry_x1[1]
    uint64_t result_1 = result
    
    while (x22_2 != x21_2)
        result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(result_1)
        *(result_1 + 0x18) = *(x22_2 + 0x18)
        int32_t x8_4 = *(x22_2 + 0x20)
        x22_2 += 0x28
        *(result_1 + 0x20) = x8_4
        result_1 += 0x28
    
    *(arg1 + 8) = result_1

return result
