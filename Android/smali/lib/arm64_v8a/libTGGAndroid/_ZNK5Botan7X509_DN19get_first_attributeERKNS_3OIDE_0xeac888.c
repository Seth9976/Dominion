// 函数: _ZNK5Botan7X509_DN19get_first_attributeERKNS_3OIDE
// 地址: 0xeac888
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *(arg1 + 8)
int64_t x9 = *(arg1 + 0x10)
int64_t result
void** entry_x8

if (x23 == x9)
label_eac97c:
    int16_t var_48_1 = 0
    entry_x8[2] = 0
    entry_x8[3] = 0
    *entry_x8 = _vtable_for_Botan::ASN1_String + 0x10
    entry_x8[1] = 0
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &entry_x8[4])
    uint64_t x8_7 = zx.q(entry_x8[4].b)
    
    if ((x8_7.d & 1) != 0)
        int64_t x8_9 = entry_x8[5]
        char* x9_3 = entry_x8[6]
        uint64_t x11_4
        
        do
            if (x8_9 == 0)
                goto label_eaca14
            
            x11_4 = zx.q(*x9_3)
            x9_3 = &x9_3[1]
            x8_9 -= 1
        while (zx.d(*(&data_84a2f8 + x11_4)) != 0)
    else
        uint64_t x8_8 = x8_7 u>> 1
        void* x9_2 = entry_x8 + 0x21
        uint64_t x11_2
        
        do
            if (x8_8 == 0)
            label_eaca14:
                entry_x8[7].d = 0x13
                goto label_eaca34
            
            x11_2 = zx.q(*x9_2)
            x9_2 += 1
            x8_8 -= 1
        while (zx.d(*(&data_84a2f8 + x11_2)) != 0)
    
    entry_x8[7].d = 0xc
else
    void* entry_x1
    int32_t* x8 = *(entry_x1 + 8)
    
    while (true)
        int32_t* x12_1 = *(x23 + 8)
        int64_t x11_1 = *(x23 + 0x10)
        
        if (x11_1 - x12_1 == *(entry_x1 + 0x10) - x8)
            if (x12_1 != x11_1)
                int32_t* x13_2 = x8
                
                do
                    if (*x12_1 != *x13_2)
                        goto label_eac8b4
                    
                    x12_1 = &x12_1[1]
                    x13_2 = &x13_2[1]
                while (x11_1 != x12_1)
            
            entry_x8[2] = 0
            entry_x8[3] = 0
            *entry_x8 = _vtable_for_Botan::ASN1_String + 0x10
            entry_x8[1] = 0
            int64_t x9_1 = *(x23 + 0x28)
            int64_t x8_2 = *(x23 + 0x30)
            uint64_t x22_1 = x8_2 - x9_1
            
            if (x8_2 != x9_1)
                if ((x22_1 & 0xffffffff80000000) != 0)
                    int64_t* x0_7 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    void* x8_10 = entry_x8[1]
                    
                    if (x8_10 != 0)
                        entry_x8[2] = x8_10
                        operator delete(x8_10)
                    
                    char var_48
                    void* var_38
                    
                    if ((zx.d(var_48) & 1) != 0)
                        operator delete(var_38)
                    sub_1101e04(x0_7)
                    noreturn
                
                int64_t x0_1 = operator new(x22_1)
                entry_x8[1] = x0_1
                entry_x8[2] = x0_1
                entry_x8[3] = x0_1 + x22_1
                int64_t x1 = *(x23 + 0x28)
                int64_t x21_1 = x0_1
                size_t x22_2 = *(x23 + 0x30) - x1
                
                if (x22_2 s>= 1)
                    memcpy(x21_1, x1, x22_2)
                    x21_1 += x22_2
                
                entry_x8[2] = x21_1
            
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &entry_x8[4])
            entry_x8[7].d = *(x23 + 0x58)
            break
        
    label_eac8b4:
        x23 += 0x60
        
        if (x23 == x9)
            goto label_eac97c
label_eaca34:
return result
