// 函数: _ZN5Botan29normalized_montgomery_inverseERKNS_6BigIntES2_
// 地址: 0xdd048c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
*(entry_x8 + 0x18) = -1
*(entry_x8 + 0x20) = 1
int64_t result = Botan::almost_montgomery_inverse(entry_x8, arg1, arg2)
int64_t result_1 = result

if (result != 0)
    int64_t x22_1 = 0
    
    do
        char* x8 = *entry_x8
        
        if (*(entry_x8 + 8) != x8 && (zx.d(*x8) & 1) != 0)
            int64_t x2_1 = *(arg2 + 0x18)
            uint64_t x1_1 = *arg2
            
            if (x2_1 == -1)
                int64_t x8_2 = *(arg2 + 8)
                int64_t x9_2 = x8_2 - x1_1
                
                if (x8_2 == x1_1)
                    x2_1 = 0
                else
                    int64_t x11_1
                    
                    x11_1 = x9_2 s>= 0 ? x9_2 : -1
                    
                    int64_t x10_1 = x1_1 - x8_2
                    int64_t x11_2
                    
                    x11_2 = x11_1 s< 1 ? x11_1 : 1
                    
                    x2_1 = x9_2 s>> 2
                    int64_t x9_3
                    
                    x9_3 = x10_1 s> x9_2 ? x10_1 : x9_2
                    
                    int64_t i_1 = x11_2 * (x9_3 u>> 2)
                    uint64_t x10_2 = 1
                    int64_t i
                    
                    do
                        int32_t x11_3 = *(x1_1 - 4 + (i_1 << 2))
                        i = i_1
                        i_1 -= 1
                        x10_2 = zx.q(x10_2.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
                        x2_1 -= x10_2
                    while (i != 1)
                
                *(arg2 + 0x18) = x2_1
            
            *(arg2 + 0x20)
            Botan::BigInt::add(entry_x8, x1_1, x2_1)
        
        result = Botan::BigInt::operator>>=(entry_x8)
        x22_1 += 1
    while (x22_1 != result_1)

return result
