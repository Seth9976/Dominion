// 函数: _ZN5Botan8CCM_Mode19set_associated_dataEPKhm
// 地址: 0xcf227c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19_1 = &arg1[0x50]
char* x24 = *x19_1
*(x19_1 + 8) = x24
int64_t entry_x2

if (entry_x2 == 0)
    return 

uint64_t x26_1 = entry_x2 u>> 8

if (x26_1 u>= 0xff)
    sub_c776cc(Botan::throw_invalid_argument("Supported CCM AD length", "set_associated_data", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp"))
    noreturn

int64_t x8_1 = *(arg1 + 0x60)
uint8_t const* x20_1 = arg1
void* x24_1

if (x24 u>= x8_1)
    void* x8_2 = x8_1 - x24
    int64_t x10_2
    
    if (x8_1 != x24)
        x10_2 = x8_2 << 1
    else
        x10_2 = 1
    
    int64_t x25_1
    
    x25_1 = x8_2 u< 0x3fffffffffffffff ? x10_2 : 0x7fffffffffffffff
    
    char* x0_1 = Botan::allocate_memory(x25_1, 1)
    void* x23_1 = *(x20_1 + 0x50)
    int64_t x8_3 = *(x20_1 + 0x58)
    *x0_1 = (x26_1.d).b
    x24_1 = &x0_1[1]
    size_t x2 = x8_3 - x23_1
    void* x25_2 = x0_1 - x2
    
    if (x2 s>= 1)
        memcpy(x25_2, x23_1, x2)
    
    int64_t x8_4 = *(x20_1 + 0x60)
    *(x20_1 + 0x50) = x25_2
    *(x20_1 + 0x58) = x24_1
    *(x20_1 + 0x60) = &x0_1[x25_1]
    
    if (x23_1 != 0)
        Botan::deallocate_memory(x23_1, x8_4 - x23_1, 1)
        x24_1 = *(x20_1 + 0x58)
else
    *x24 = (x26_1.d).b
    x24_1 = &x24[1]
    *(x20_1 + 0x58) = x24_1

int64_t x8_5 = *(x20_1 + 0x60)

if (x24_1 u>= x8_5)
    void* x23_2 = *x19_1
    void* x25_3 = x24_1 - x23_2
    
    if (x25_3 + 1 s< 0)
    label_cf2500:
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        sub_c776cc(Botan::throw_invalid_argument("Supported CCM AD length", "set_associated_data", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp"))
        noreturn
    
    void* x8_6 = x8_5 - x23_2
    uint64_t x11_1 = x8_6 << 1
    uint64_t x9_2
    
    if (x11_1 u< x25_3 + 1)
        x9_2 = x25_3 + 1
    else
        x9_2 = x11_1
    
    uint64_t x24_4
    
    x24_4 = x8_6 u< 0x3fffffffffffffff ? x9_2 : 0x7fffffffffffffff
    
    void* const x0_5
    size_t x2_1
    
    if (x24_4 == 0)
        x0_5 = nullptr
        x2_1 = x25_3
    else
        x0_5 = Botan::allocate_memory(x24_4, 1)
        x23_2 = *(x20_1 + 0x50)
        x2_1 = *(x20_1 + 0x58) - x23_2
    
    void* x25_4 = x0_5 + x25_3
    void* x24_5 = x25_4 - x2_1
    *x25_4 = (entry_x2.d).b
    
    if (x2_1 s>= 1)
        memcpy(x24_5, x23_2, x2_1)
    
    int64_t x8_8 = *(x20_1 + 0x60)
    *(x20_1 + 0x50) = x24_5
    *(x20_1 + 0x58) = x25_4 + 1
    *(x20_1 + 0x60) = x0_5 + x24_4
    
    if (x23_2 != 0)
        Botan::deallocate_memory(x23_2, x8_8 - x23_2, 1)
else
    *x24_1 = (entry_x2.d).b
    *(x20_1 + 0x58) = x24_1 + 1

uint64_t var_60 = arg2
int64_t var_58_1 = entry_x2
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(x19_1, &var_60)
void* x21_2 = *(x20_1 + 0x50)
void* x27_2 = *(x20_1 + 0x58)
void* x24_6 = x27_2 - x21_2

if ((x24_6 & 0xf) == 0)
    return 

while (true)
    int64_t x8_9 = *(x20_1 + 0x60)
    
    if (x27_2 u< x8_9)
        *x27_2 = 0
        x27_2 += 1
        *(x20_1 + 0x58) = x27_2
    else
        if (x24_6 + 1 s< 0)
            break
        
        void* x8_10 = x8_9 - x21_2
        int64_t x10_3 = x8_10 << 1
        int64_t x9_4
        
        if (x10_3 u< x24_6 + 1)
            x9_4 = x24_6 + 1
        else
            x9_4 = x10_3
        
        int64_t x22_2
        
        x22_2 = x8_10 u< 0x3fffffffffffffff ? x9_4 : 0x7fffffffffffffff
        
        void* x2_2
        uint8_t const* x23_3
        
        if (x22_2 == 0)
            x23_3 = nullptr
            x2_2 = x24_6
        else
            arg1 = Botan::allocate_memory(x22_2, 1)
            x21_2 = *(x20_1 + 0x50)
            x23_3 = arg1
            x2_2 = *(x20_1 + 0x58) - x21_2
        
        void* x27_3 = x23_3 + x24_6
        int64_t x24_7 = x27_3 - x2_2
        *x27_3 = 0
        x27_2 = x27_3 + 1
        
        if (x2_2 s>= 1)
            memcpy(x24_7, x21_2, x2_2)
        
        int64_t x8_12 = *(x20_1 + 0x60)
        *(x20_1 + 0x50) = x24_7
        *(x20_1 + 0x58) = x27_2
        *(x20_1 + 0x60) = &x23_3[x22_2]
        
        if (x21_2 != 0)
            Botan::deallocate_memory(x21_2, x8_12 - x21_2, 1)
            x27_2 = *(x20_1 + 0x58)
    
    x21_2 = *x19_1
    x24_6 = x27_2 - x21_2
    
    if ((x24_6 & 0xf) == 0)
        return 

goto label_cf2500
