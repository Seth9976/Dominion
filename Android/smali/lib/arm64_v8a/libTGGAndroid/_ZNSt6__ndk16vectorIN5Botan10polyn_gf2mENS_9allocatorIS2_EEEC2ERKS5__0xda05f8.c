// 函数: _ZNSt6__ndk16vectorIN5Botan10polyn_gf2mENS_9allocatorIS2_EEEC2ERKS5_
// 地址: 0xda05f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t result = x8 - x9

if (x8 != x9)
    int64_t x22_1 = (result s>> 4) * -0x5555555555555555
    
    if (x22_1 u>= 0x555555555555556)
        int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::__ndk1::__vector_base<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::~__vector_base()
        sub_1101e04(x0_3)
        noreturn
    
    result = operator new(result)
    *arg1 = result
    *(arg1 + 8) = result
    *(arg1 + 0x10) = result + x22_1 * 0x30
    int32_t* x22_2 = *entry_x1
    int64_t x21_2 = entry_x1[1]
    uint64_t result_1 = result
    
    if (x22_2 != x21_2)
        do
            *result_1 = *x22_2
            result = std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(
                result_1 + 8)
            *(result_1 + 0x20) = *(x22_2 + 0x20)
            int64_t x8_5 = *(x22_2 + 0x28)
            *(result_1 + 0x28) = x8_5
            
            if (x8_5 != 0)
                int32_t i
                
                do
                    i = __stxr(__ldxr(x8_5 + 8) + 1, x8_5 + 8)
                while (i != 0)
            
            x22_2 = &x22_2[0xc]
            result_1 += 0x30
        while (x22_2 != x21_2)
    
    *(arg1 + 8) = result_1

return result
