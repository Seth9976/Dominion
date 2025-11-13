// 函数: _ZNSt6__ndk16vectorIN5Botan14GeneralSubtreeENS_9allocatorIS2_EEEC2ERKS5_
// 地址: 0xf1ee5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t result = x8 - x9

if (x8 != x9)
    int64_t x22_1 = (result s>> 4) * -0x3333333333333333
    
    if (x22_1 u>= 0x333333333333334)
        int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x20_1 = *arg1
        
        if (x20_1 != 0)
            void** x22_2 = *(arg1 + 8)
            void* x0_4 = x20_1
            
            if (x22_2 != x20_1)
                void** x25_2 = x22_2
                
                do
                    x25_2 = &x25_2[-0xa]
                    *x25_2 = _vtable_for_Botan::GeneralSubtree + 0x10
                    uint32_t x8_6 = zx.d(x25_2[5].b)
                    x25_2[1] = _vtable_for_Botan::GeneralName + 0x10
                    
                    if ((x8_6 & 1) != 0)
                        operator delete(x22_2[-3])
                        
                        if ((zx.d(x22_2[-8].b) & 1) != 0)
                            operator delete(x22_2[-6])
                    else if ((zx.d(x22_2[-8].b) & 1) != 0)
                        operator delete(x22_2[-6])
                    
                    x22_2 = x25_2
                while (x20_1 != x25_2)
                
                x0_4 = *arg1
            
            *(arg1 + 8) = x20_1
            operator delete(x0_4)
        
        sub_1101e04(x0_3)
        noreturn
    
    result = operator new(result)
    *arg1 = result
    *(arg1 + 8) = result
    *(arg1 + 0x10) = result + x22_1 * 0x50
    void* x23_1 = *entry_x1
    int64_t x8_3 = entry_x1[1]
    uint64_t result_1 = result
    
    if (x23_1 != x8_3)
        int64_t i = 0
        
        do
            void** x8_4 = result_1 + i
            *x8_4 = _vtable_for_Botan::GeneralSubtree + 0x10
            x8_4[1] = _vtable_for_Botan::GeneralName + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x8_4[2])
            int128_t v0_1
            result, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x8_4[5])
            v0_1 = *(x23_1 + i + 0x40)
            i += 0x50
            *(x8_4 + 0x40) = v0_1
        while (x8_3 - x23_1 != i)
        
        result_1 += i
    
    *(arg1 + 8) = result_1

return result
