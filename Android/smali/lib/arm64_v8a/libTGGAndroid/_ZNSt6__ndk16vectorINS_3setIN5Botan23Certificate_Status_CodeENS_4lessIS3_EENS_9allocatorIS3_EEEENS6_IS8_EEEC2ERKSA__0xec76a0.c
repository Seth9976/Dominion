// 函数: _ZNSt6__ndk16vectorINS_3setIN5Botan23Certificate_Status_CodeENS_4lessIS3_EENS_9allocatorIS3_EEEENS6_IS8_EEEC2ERKSA_
// 地址: 0xec76a0
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
        int64_t* x0_2 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x22_3 = *arg1
        
        if (x22_3 != 0)
            void* x20_1 = *(arg1 + 8)
            void* x0_3 = x22_3
            
            if (x20_1 != x22_3)
                do
                    *(x20_1 - 0x10)
                    x20_1 -= 0x18
                    std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
                        x20_1)
                while (x22_3 != x20_1)
                
                x0_3 = *arg1
            
            *(arg1 + 8) = x22_3
            operator delete(x0_3)
        
        sub_1101e04(x0_2)
        noreturn
    
    result = operator new(result)
    *arg1 = result
    *(arg1 + 8) = result
    *(arg1 + 0x10) = result + x22_1 * 0x18
    int64_t* x22_2 = *entry_x1
    int64_t x21_2 = entry_x1[1]
    uint64_t result_1 = result
    
    if (x22_2 != x21_2)
        do
            result = sub_ec86a0(result_1, x22_2)
            x22_2 = &x22_2[3]
            result_1 += 0x18
        while (x21_2 != x22_2)
    
    *(arg1 + 8) = result_1

return result
