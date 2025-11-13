// 函数: _ZNKSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv
// 地址: 0xf23c2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int32_t x9 = *(entry_x0 + 0x60)
char* entry_x8
void* x19_1
int128_t v0
int128_t v1

if ((x9 & 0x10) != 0)
    int64_t x21 = *(entry_x0 + 0x58)
    int64_t x8 = *(entry_x0 + 0x30)
    
    if (x21 u< x8)
        x21 = x8
        *(entry_x0 + 0x58) = x8
    
    char* x23 = *(entry_x0 + 0x28)
    void* x22 = x21 - x23
    
    if (x22 u< -0x10)
        if (x22 u> 0x16)
            uint64_t x20_1 = (x22 + 0x10) & 0xfffffffffffffff0
            entry_x0, v0, v1 = operator new(x20_1)
            *(entry_x8 + 8) = x22
            *(entry_x8 + 0x10) = entry_x0
            *entry_x8 = x20_1 | 1
            x19_1 = entry_x0
            
            if (x23 != x21)
            label_f23cfc:
                char* x8_5
                
                if (x22 u>= 0x20)
                    if (x19_1 u< x21 && x23 u< x19_1 + x22)
                        x8_5 = x23
                        goto label_f23da4
                    
                    void* i_4 = x22 & 0xffffffffffffffe0
                    void* x10_1 = x19_1 + 0x10
                    x8_5 = x23 + i_4
                    x19_1 += i_4
                    void* x11_1 = &x23[0x10]
                    void* i_2 = i_4
                    void* i
                    
                    do
                        v0 = *(x11_1 - 0x10)
                        v1 = *x11_1
                        i = i_2
                        i_2 -= 0x20
                        x11_1 += 0x20
                        *(x10_1 - 0x10) = v0
                        *x10_1 = v1
                        x10_1 += 0x20
                    while (i != 0x20)
                    
                    if (i_4 != x22)
                        goto label_f23da4
                else
                    x8_5 = x23
                label_f23da4:
                    
                    do
                        char x9_1 = *x8_5
                        x8_5 = &x8_5[1]
                        *x19_1 = x9_1
                        x19_1 += 1
                    while (x21 != x8_5)
        else
            *entry_x8 = (x22.d << 1).b
            x19_1 = &entry_x8[1]
            
            if (x23 != x21)
                goto label_f23cfc
        
        *x19_1 = 0
        return 
else
    if ((x9 & 8) == 0)
        __builtin_memset(entry_x8, 0, 0x18)
        return 
    
    char* x23_1 = *(entry_x0 + 0x10)
    int64_t x21_1 = *(entry_x0 + 0x20)
    void* x22_1 = x21_1 - x23_1
    
    if (x22_1 u< -0x10)
        if (x22_1 u> 0x16)
            uint64_t x20_2 = (x22_1 + 0x10) & 0xfffffffffffffff0
            entry_x0, v0, v1 = operator new(x20_2)
            *(entry_x8 + 8) = x22_1
            *(entry_x8 + 0x10) = entry_x0
            *entry_x8 = x20_2 | 1
            x19_1 = entry_x0
            
            if (x23_1 != x21_1)
            label_f23d50:
                char* x8_9
                
                if (x22_1 u>= 0x20)
                    if (x19_1 u< x21_1 && x23_1 u< x19_1 + x22_1)
                        x8_9 = x23_1
                        goto label_f23e0c
                    
                    void* i_5 = x22_1 & 0xffffffffffffffe0
                    void* x10_2 = x19_1 + 0x10
                    x8_9 = x23_1 + i_5
                    x19_1 += i_5
                    void* x11_2 = &x23_1[0x10]
                    void* i_3 = i_5
                    void* i_1
                    
                    do
                        v0 = *(x11_2 - 0x10)
                        v1 = *x11_2
                        i_1 = i_3
                        i_3 -= 0x20
                        x11_2 += 0x20
                        *(x10_2 - 0x10) = v0
                        *x10_2 = v1
                        x10_2 += 0x20
                    while (i_1 != 0x20)
                    
                    if (x22_1 != i_5)
                        goto label_f23e0c
                else
                    x8_9 = x23_1
                label_f23e0c:
                    
                    do
                        char x9_2 = *x8_9
                        x8_9 = &x8_9[1]
                        *x19_1 = x9_2
                        x19_1 += 1
                    while (x21_1 != x8_9)
        else
            *entry_x8 = (x22_1.d << 1).b
            x19_1 = &entry_x8[1]
            
            if (x23_1 != x21_1)
                goto label_f23d50
        
        *x19_1 = 0
        return 
std::__ndk1::__basic_string_common<true>::__throw_length_error()
return std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::shrink_to_fit() __tailcall
