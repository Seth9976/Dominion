// 函数: _ZN5Botan10Extensions6removeERKNS_3OIDE
// 地址: 0xeae518
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i = *(arg1 + 0x28)

if (i != 0)
    void* entry_x1
    int32_t* x9_1 = *(entry_x1 + 8)
    int64_t x10_1 = *(entry_x1 + 0x10)
    void* __offset(Botan::OID, 0x28) i_2
    
    if (x9_1 == x10_1)
        do
            i_2 = i
            i = *i
        while (i != 0)
    else
        i_2 = arg1 + 0x28
        
        while (true)
        label_eae568:
            int32_t* x13_1 = *(i + 0x28)
            int32_t* x14_1 = x9_1
            
            while (true)
                if (*(i + 0x30) != x13_1)
                    int32_t x15_1 = *x13_1
                    int32_t x16_1 = *x14_1
                    
                    if (x15_1 u>= x16_1)
                        if (x16_1 u< x15_1)
                            break
                        
                        x14_1 = &x14_1[1]
                        x13_1 = &x13_1[1]
                        
                        if (x10_1 == x14_1)
                            break
                        
                        continue
                
                i = *(i + 8)
                
                if (i == 0)
                    goto label_eae5ac
                
                goto label_eae568
            
            i_2 = i
            i = *i
            
            if (i == 0)
                break
    
label_eae5ac:
    
    if (i_2 != arg1 + 0x28)
        int32_t* x11_1 = *(i_2 + 0x28)
        int64_t x12_2 = *(i_2 + 0x30)
        
        if (x11_1 != x12_2)
            do
                if (x10_1 == x9_1)
                    return 0
                
                int32_t x13_2 = *x9_1
                int32_t x14_2 = *x11_1
                
                if (x13_2 u< x14_2)
                    return 0
                
                if (x14_2 u< x13_2)
                    break
                
                x11_1 = &x11_1[1]
                x9_1 = &x9_1[1]
            while (x12_2 != x11_1)
        
        std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::erase(
            arg1 + 0x20)
        void* i_1 = *(arg1 + 8)
        void* i_3 = *(arg1 + 0x10)
        
        if (i_1 != i_3)
            int32_t* x9_2 = *(entry_x1 + 8)
            
            while (true)
                int32_t* x12_3 = *(i_1 + 8)
                int64_t x11_2 = *(i_1 + 0x10)
                
                if (x11_2 - x12_3 == *(entry_x1 + 0x10) - x9_2)
                    if (x12_3 != x11_2)
                        int32_t* x13_4 = x9_2
                        
                        do
                            if (*x12_3 != *x13_4)
                                goto label_eae624
                            
                            x12_3 = &x12_3[1]
                            x13_4 = &x13_4[1]
                        while (x11_2 != x12_3)
                    
                    break
                
            label_eae624:
                i_1 += 0x20
                
                if (i_1 == i_3)
                    i_1 = i_3
                    
                    if (i_1 + 0x20 != i_3)
                        goto label_eae6a0
                    
                    goto label_eae6d4
        
        if (i_1 + 0x20 == i_3)
        label_eae6d4:
            void* i_4 = i_3
            
            do
                i_4 -= 0x20
                *i_4 = _vtable_for_Botan::OID + 0x10
                void* x0_3 = *(i_4 + 8)
                
                if (x0_3 != 0)
                    *(i_3 - 0x10) = x0_3
                    operator delete(x0_3)
                
                i_3 = i_4
            while (i_1 != i_4)
        else
        label_eae6a0:
            
            do
                void* x0_2 = *(i_1 + 8)
                
                if (x0_2 != 0)
                    *(i_1 + 0x10) = x0_2
                    operator delete(x0_2)
                    __builtin_memset(i_1 + 8, 0, 0x18)
                
                int128_t v0 = *(i_1 + 0x28)
                int64_t x8_2 = *(i_1 + 0x38)
                __builtin_memset(i_1 + 0x28, 0, 0x18)
                *(i_1 + 8) = v0
                *(i_1 + 0x18) = x8_2
                i_1 += 0x20
            while (i_3 - 0x20 != i_1)
            
            i_3 = *(arg1 + 0x10)
            
            if (i_3 != i_1)
                goto label_eae6d4
        
        *(arg1 + 0x10) = i_1
        return 1

return 0
