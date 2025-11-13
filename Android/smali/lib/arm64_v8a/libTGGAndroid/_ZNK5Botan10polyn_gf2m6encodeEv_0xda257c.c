// 函数: _ZNK5Botan10polyn_gf2m6encodeEv
// 地址: 0xda257c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int32_t* entry_x0
int32_t x25 = *entry_x0

if (x25 s< 1)
    char* x0_6 = Botan::allocate_memory(1, 1)
    void* x20_1 = *entry_x8
    int64_t x8_10 = entry_x8[1]
    *x0_6 = 0
    void* x22_4 = &x0_6[1]
    size_t x2_3 = x8_10 - x20_1
    void* x21_3 = x0_6 - x2_3
    
    if (x2_3 s>= 1)
        memcpy(x21_3, x20_1, x2_3)
    
    int64_t x9_9 = entry_x8[2]
    void* x8_11 = x22_4
    *entry_x8 = x21_3
    entry_x8[1] = x22_4
    entry_x8[2] = x22_4
    
    if (x20_1 != 0)
        Botan::deallocate_memory(x20_1, x9_9 - x20_1, 1)
        x22_4 = entry_x8[1]
        x8_11 = entry_x8[2]
    
    if (x20_1 != 0 && x22_4 u< x8_11)
        *x22_4 = 0
        entry_x8[1] = x22_4 + 1
        return 
    
    void* x20_2 = *entry_x8
    size_t x22_6 = x22_4 - x20_2
    
    if (x22_6 + 1 s< 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* x8_12 = x8_11 - x20_2
    int64_t x11_1 = x8_12 << 1
    int64_t x9_11
    
    if (x11_1 u< x22_6 + 1)
        x9_11 = x22_6 + 1
    else
        x9_11 = x11_1
    
    int64_t x21_4
    
    x21_4 = x8_12 u< 0x3fffffffffffffff ? x9_11 : 0x7fffffffffffffff
    
    size_t x2_4
    
    if (x21_4 == 0)
        entry_x0 = nullptr
        x2_4 = x22_6
    else
        entry_x0 = Botan::allocate_memory(x21_4, 1)
        x20_2 = *entry_x8
        x2_4 = entry_x8[1] - x20_2
    
    void* x22_7 = entry_x0 + x22_6
    void* x21_5 = x22_7 - x2_4
    *x22_7 = 0
    
    if (x2_4 s>= 1)
        memcpy(x21_5, x20_2, x2_4)
    
    int64_t x8_14 = entry_x8[2]
    *entry_x8 = x21_5
    entry_x8[1] = x22_7 + 1
    entry_x8[2] = entry_x0 + x21_4
    
    if (x20_2 != 0)
        Botan::deallocate_memory(x20_2, x8_14 - x20_2, 1)
    
    return 

int32_t* x20 = entry_x0
int64_t x8 = 0
uint8_t* fp_1 = nullptr
int64_t x26_1 = 0
uint32_t x24_1 = zx.d(**(x20 + 8))
label_da25e0:
void* x21_1 = *entry_x8
void* x27_1 = fp_1 - x21_1

if (x27_1 + 1 s>= 0)
    void* x8_2 = x8 - x21_1
    void* x10_1 = x8_2 << 1
    void* x9_2
    
    if (x10_1 u< x27_1 + 1)
        x9_2 = x27_1 + 1
    else
        x9_2 = x10_1
    
    void* x22_1
    
    x22_1 = x8_2 u< 0x3fffffffffffffff ? x9_2 : 0x7fffffffffffffff
    
    void* x2_1
    int32_t* x23_1
    
    if (x22_1 == 0)
        x23_1 = nullptr
        x2_1 = x27_1
    else
        entry_x0 = Botan::allocate_memory(x22_1, 1)
        x21_1 = *entry_x8
        x23_1 = entry_x0
        x2_1 = entry_x8[1] - x21_1
    
    uint8_t* fp_3 = x23_1 + x27_1
    int64_t x24_2 = fp_3 - x2_1
    *fp_3 = (x24_1 u>> 8).b
    void* fp_2 = &fp_3[1]
    
    if (x2_1 s>= 1)
        memcpy(x24_2, x21_1, x2_1)
    
    int64_t x8_5 = entry_x8[2]
    *entry_x8 = x24_2
    entry_x8[1] = fp_2
    entry_x8[2] = x23_1 + x22_1
    
    if (x21_1 != 0)
        Botan::deallocate_memory(x21_1, x8_5 - x21_1, 1)
        fp_2 = entry_x8[1]
    
    while (true)
        int64_t x8_6 = entry_x8[2]
        char x27_2 = (*(*(x20 + 8) + (x26_1 << 1))).b
        
        if (fp_2 u>= x8_6)
            void* x21_2 = *entry_x8
            size_t x24_3 = fp_2 - x21_2
            
            if (x24_3 + 1 s< 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                break
            
            void* x8_7 = x8_6 - x21_2
            int64_t x10_2 = x8_7 << 1
            int64_t x9_6
            
            if (x10_2 u< x24_3 + 1)
                x9_6 = x24_3 + 1
            else
                x9_6 = x10_2
            
            int64_t x22_2
            
            x22_2 = x8_7 u< 0x3fffffffffffffff ? x9_6 : 0x7fffffffffffffff
            
            size_t x2_2
            int32_t* x23_2
            
            if (x22_2 == 0)
                x23_2 = nullptr
                x2_2 = x24_3
            else
                entry_x0 = Botan::allocate_memory(x22_2, 1)
                x21_2 = *entry_x8
                x23_2 = entry_x0
                x2_2 = entry_x8[1] - x21_2
            
            char* fp_5 = x23_2 + x24_3
            void* x24_4 = fp_5 - x2_2
            *fp_5 = x27_2
            
            if (x2_2 s>= 1)
                memcpy(x24_4, x21_2, x2_2)
            
            int64_t x8_9 = entry_x8[2]
            *entry_x8 = x24_4
            entry_x8[1] = &fp_5[1]
            entry_x8[2] = x23_2 + x22_2
            
            if (x21_2 != 0)
                Botan::deallocate_memory(x21_2, x8_9 - x21_2, 1)
        else
            *fp_2 = x27_2
            entry_x8[1] = fp_2 + 1
        
        if (x25 == x26_1.d)
            return 
        
        fp_1 = entry_x8[1]
        x8 = entry_x8[2]
        x26_1 += 1
        x24_1 = zx.d(*(*(x20 + 8) + (x26_1 << 1)))
        
        if (fp_1 u>= x8)
            goto label_da25e0
        
        *fp_1 = (x24_1 u>> 8).b
        fp_2 = &fp_1[1]
        entry_x8[1] = fp_2

std::__ndk1::__vector_base_common<true>::__throw_length_error()
sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
