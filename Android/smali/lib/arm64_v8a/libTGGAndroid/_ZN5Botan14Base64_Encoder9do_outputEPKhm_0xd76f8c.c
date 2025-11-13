// 函数: _ZN5Botan14Base64_Encoder9do_outputEPKhm
// 地址: 0xd76f8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x50)
int64_t entry_i
int64_t i_5 = entry_i
uint8_t const* x19 = arg1
uint64_t var_60

if (x9 == 0)
    if (i_5 != 0)
        int64_t x8_14 = *(x19 + 0x20)
        int64_t x10_6 = *(x19 + 0x28)
        
        if (x10_6 == x8_14)
        label_d77208:
            var_60 = arg2
            int64_t i_6 = i_5
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&x19[8], &var_60)
        else
            int64_t i = 0
            int32_t x9_4 = 1
        label_d77144:
            int64_t x11_7 = x10_6 - x8_14
            int64_t x12_4
            
            x12_4 = x11_7 s>= 0 ? x11_7 : -1
            
            int64_t x10_7 = x8_14 - x10_6
            int64_t x12_5
            
            x12_5 = x12_4 s< 1 ? x12_4 : 1
            
            int64_t x10_8
            
            x10_8 = x10_7 s> x11_7 ? x10_7 : x11_7
            
            do
                arg1 = *(x8_14 + (i << 3))
                
                if (arg1 != 0)
                    if (*(x19 + 0x10) != *(x19 + 8))
                        (*(*arg1 + 8))()
                        arg1 = *(*(x19 + 0x20) + (i << 3))
                    
                    (*(*arg1 + 8))(arg1, arg2, i_5)
                    x8_14 = *(x19 + 0x20)
                    x10_6 = *(x19 + 0x28)
                    x9_4 = 0
                    int64_t x11_8 = x10_6 - x8_14
                    int64_t x13_3
                    
                    x13_3 = x11_8 s>= 0 ? x11_8 : -1
                    
                    int64_t x12_6 = x8_14 - x10_6
                    int64_t x13_4
                    
                    x13_4 = x13_3 s< 1 ? x13_3 : 1
                    
                    int64_t x11_9
                    
                    x11_9 = x12_6 s> x11_8 ? x12_6 : x11_8
                    
                    bool cond:1_1 = x13_4 * (x11_9 u>> 3) - 1 != i
                    i += 1
                    
                    if (cond:1_1)
                        goto label_d77144
                    
                    goto label_d77218
                
                i += 1
            while (x12_5 * (x10_8 u>> 3) != i)
            
            if ((x9_4 & 1) != 0)
                goto label_d77208
            
        label_d77218:
            *(x19 + 0x10) = *(x19 + 8)
else if (i_5 != 0)
    int64_t x25_1 = 0
    int64_t i_3 = x9 - *(x19 + 0x98)
    int64_t i_1
    
    i_1 = i_5 u< i_3 ? i_5 : i_3
    
    if (i_1 == 0)
        goto label_d770d4
    
    do
        int64_t x8_2 = *(x19 + 0x20)
        int64_t x10_1 = *(x19 + 0x28)
        uint64_t x24_1 = arg2 + x25_1
        
        if (x10_1 == x8_2)
        label_d770b8:
            var_60 = x24_1
            int64_t i_2 = i_1
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&x19[8], &var_60)
        else
            int64_t j = 0
            int32_t x9_1 = 1
        label_d76ff4:
            int64_t x11_1 = x10_1 - x8_2
            int64_t x12_1
            
            x12_1 = x11_1 s>= 0 ? x11_1 : -1
            
            int64_t x10_2 = x8_2 - x10_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            int64_t x10_3
            
            x10_3 = x10_2 s> x11_1 ? x10_2 : x11_1
            
            do
                arg1 = *(x8_2 + (j << 3))
                
                if (arg1 != 0)
                    if (*(x19 + 0x10) != *(x19 + 8))
                        (*(*arg1 + 8))()
                        arg1 = *(*(x19 + 0x20) + (j << 3))
                    
                    (*(*arg1 + 8))(arg1, x24_1, i_1)
                    x8_2 = *(x19 + 0x20)
                    x10_1 = *(x19 + 0x28)
                    x9_1 = 0
                    int64_t x11_2 = x10_1 - x8_2
                    int64_t x13_1
                    
                    x13_1 = x11_2 s>= 0 ? x11_2 : -1
                    
                    int64_t x12_3 = x8_2 - x10_1
                    int64_t x13_2
                    
                    x13_2 = x13_1 s< 1 ? x13_1 : 1
                    
                    int64_t x11_3
                    
                    x11_3 = x12_3 s> x11_2 ? x12_3 : x11_2
                    
                    bool cond:2_1 = x13_2 * (x11_3 u>> 3) - 1 != j
                    j += 1
                    
                    if (cond:2_1)
                        goto label_d76ff4
                    
                    goto label_d770c8
                
                j += 1
            while (x12_2 * (x10_3 u>> 3) != j)
            
            if ((x9_1 & 1) != 0)
                goto label_d770b8
            
        label_d770c8:
            *(x19 + 0x10) = *(x19 + 8)
        
    label_d770d4:
        i_5 -= i_1
        int64_t x8_11 = *(x19 + 0x98) + i_1
        bool cond:0_1 = x8_11 != *(x19 + 0x50)
        *(x19 + 0x98) = x8_11
        
        if (not(cond:0_1))
            var_60.b = 0xa
            (*(*x19 + 0x38))(x19, &var_60, 1)
            x8_11 = 0
            *(x19 + 0x98) = 0
        
        if (i_5 == 0)
            return 
        
        x25_1 += i_1
        int64_t i_4 = *(x19 + 0x50) - x8_11
        
        i_1 = i_5 u< i_4 ? i_5 : i_4
    while (i_1 != 0)
