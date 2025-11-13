// 函数: _ZN5Botan6BigIntmLEj
// 地址: 0xcd16ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = arg1
int32_t entry_x1

if (entry_x1 == 0)
    int64_t x21_1 = result[1]
    int64_t x8_1 = result[2]
    int64_t x20_1 = *result
    size_t x9_1 = x8_1 - x20_1
    size_t x2_6 = x21_1 - x20_1
    int64_t x10 = x9_1 s>> 2
    int64_t x11_1 = x2_6 s>> 2
    
    if (x10 u> x11_1)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(result)
        x20_1 = *result
        x21_1 = result[1]
        x2_6 = x21_1 - x20_1
    else if (x10 u< x11_1)
        x21_1 = x8_1
        x2_6 = x9_1
        result[1] = x8_1
    
    if (x2_6 != 0)
        memset(x20_1, 0, x2_6)
        x20_1 = *result
        x21_1 = result[1]
    
    int64_t x22_1 = x21_1 - x20_1
    int64_t x24_1 = x22_1 s>> 2
    int64_t x23_1 = x24_1 & 0xfffffffffffffff8
    result[4].d = 1
    
    if (x23_1 != 0)
        memset(x20_1, 0, x23_1 << 2)
    
    if (x23_1 != x24_1)
        int64_t x9_4
        
        x9_4 = x22_1 s>= 0 ? x22_1 : -1
        
        int64_t x8_3 = x20_1 - x21_1
        int32_t x9_5
        
        x9_5 = x9_4 s< 1 ? x9_4.d : 1
        
        int32_t x8_4
        
        if (x8_3 s> x22_1)
            x8_4 = x8_3.d
        else
            x8_4 = x22_1.d
        
        memset(x20_1 + (x23_1 << 2), 0, zx.q((x9_5 * (x8_4 u>> 2)) << 2) & 0x1c)
    
    *result
    result[1]
    result[3] = -1
else
    void* x8 = *result
    int64_t x11 = result[1]
    result[3] = -1
    void* x9 = x11 - x8
    int64_t x12_1 = x9 s>> 2
    int64_t i_4 = x12_1 & 0xfffffffffffffff8
    uint64_t x20
    
    if (i_4 == 0)
        x20 = 0
        
        if (i_4 != x12_1)
        label_cd17ac:
            void* x14_2
            
            x14_2 = x9 s>= 0 ? x9 : -ffffffffffffffff
            
            void* x11_2 = x8 - x11
            void* x14_3
            
            x14_3 = x14_2 s< 1 ? x14_2 : 1
            
            void* x9_2
            
            x9_2 = x11_2 s> x9 ? x11_2 : x9
            
            int64_t i_2 = neg.q(i_4) + x14_3 * (x9_2 u>> 2)
            void* x8_2 = x8 + (i_4 << 2)
            int64_t i
            
            do
                i = i_2
                i_2 -= 1
                int64_t x10_3 = zx.q(*x8_2) * zx.q(entry_x1) + zx.q(x20.d)
                x20 = x10_3 u>> 0x20
                *x8_2 = x10_3.d
                x8_2 += 4
            while (i != 1)
    else
        x20 = 0
        uint64_t x13_1 = zx.q(entry_x1)
        void* x14_1 = x8 + 0x10
        int64_t i_3 = i_4
        int64_t i_1
        
        do
            uint64_t x2_1 = zx.q(*(x14_1 - 4))
            i_1 = i_3
            i_3 -= 8
            int64_t x16_2 = x20 + zx.q(*(x14_1 - 0x10)) * x13_1
            int64_t x0_1 = zx.q(*(x14_1 - 8)) * x13_1
            int64_t x17_3 = zx.q(*(x14_1 - 0xc)) * x13_1 + (x16_2 u>> 0x20)
            *(x14_1 - 0x10) = x16_2.d
            *(x14_1 - 0xc) = x17_3.d
            int64_t x17_4 = x0_1 + (x17_3 u>> 0x20)
            uint64_t x16_3 = zx.q(*x14_1)
            uint64_t x0_2 = zx.q(*(x14_1 + 4))
            int64_t x2_3 = x2_1 * x13_1 + (x17_4 u>> 0x20)
            *(x14_1 - 8) = x17_4.d
            *(x14_1 - 4) = x2_3.d
            int64_t x16_5 = x16_3 * x13_1 + (x2_3 u>> 0x20)
            uint64_t x17_5 = zx.q(*(x14_1 + 8))
            uint64_t x2_4 = zx.q(*(x14_1 + 0xc))
            int64_t x0_4 = x0_2 * x13_1 + (x16_5 u>> 0x20)
            *x14_1 = x16_5.d
            *(x14_1 + 4) = x0_4.d
            int64_t x16_6 = x17_5 * x13_1 + (x0_4 u>> 0x20)
            int64_t x17_7 = x2_4 * x13_1 + (x16_6 u>> 0x20)
            x20 = x17_7 u>> 0x20
            *(x14_1 + 8) = x16_6.d
            *(x14_1 + 0xc) = x17_7.d
            x14_1 += 0x20
        while (i_1 != 8)
        
        if (i_4 != x12_1)
            goto label_cd17ac
    
    int64_t x8_8 = *result
    int64_t x9_6 = result[1]
    result[3] = -1
    
    if (x20.d != 0)
        int64_t x9_7 = x9_6 - x8_8
        int64_t x21_2 = x9_7 s>> 2
        
        if (x9_7 != -4)
            if (x21_2 + 1 u<= (result[2] - x8_8) s>> 2
                    || ((x21_2 + 1) & 0xfffffffffffffff8) + 8 u> x21_2)
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(result)
            else if (((x21_2 + 1) & 0xfffffffffffffff8) + 8 u< x21_2)
                result[1] = x8_8 + ((((x21_2 + 1) & 0xfffffffffffffff8) + 8) << 2)
        
        *(*result + (x21_2 << 2)) = x20.d

return result
