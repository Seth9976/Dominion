// 函数: _ZNK5Botan22Encrypted_PSK_Database10list_namesEv
// 地址: 0xdf06d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
(*(*entry_x0 + 0x50))()
int64_t* i_1
int64_t* i = i_1
int64_t** entry_x8
entry_x8[1] = 0
entry_x8[2] = 0
*entry_x8 = &entry_x8[1]
int64_t var_70

while (i != &var_70)
    char var_90
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_90)
    uint64_t x8_2 = zx.q(var_90)
    int32_t temp0_1 = x8_2.d & 1
    char* var_80
    char* x0_1
    
    if (temp0_1 == 0)
        x0_1 = &var_90 | 1
    else
        x0_1 = var_80
    
    uint64_t x1_2
    uint64_t var_88
    
    if (temp0_1 == 0)
        x1_2 = x8_2 u>> 1
    else
        x1_2 = var_88
    Botan::base64_decode(x0_1, x1_2, true)
    uint8_t* var_a8
    uint8_t* var_a0
    Botan::nist_key_unwrap_padded(var_a8, var_a0 - var_a8, entry_x0[1])
    void* var_c0
    void* var_b8
    size_t x21_1 = var_b8 - var_c0
    
    if (x21_1 u>= -0x10)
        int64_t* x0_11 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        
        if ((zx.d(var_90) & 1) != 0)
            operator delete(var_80)
        
        entry_x8[1]
        std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
            entry_x8)
        std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
            &i_1)
        sub_1101e04(x0_11)
        noreturn
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        var_d8
    void* var_c8
    char* x23_1
    
    if (x21_1 u>= 0x17)
        uint64_t x24_1 = (x21_1 + 0x10) & 0xfffffffffffffff0
        void* x0_4 = operator new(x24_1)
        x23_1 = x0_4
        size_t var_d0_1 = x21_1
        var_c8 = x0_4
        var_d8 = x24_1 | 1
        memcpy(x23_1, var_c0, x21_1)
    else
        x23_1 = &var_d8 | 1
        var_d8.b = (x21_1.d << 1).b
        
        if (x21_1 != 0)
            memcpy(x23_1, var_c0, x21_1)
    
    x23_1[x21_1] = 0
    std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
        entry_x8, &var_d8)
    
    if ((zx.d(var_d8.b) & 1) != 0)
        operator delete(var_c8)
    
    if (var_c0 != 0)
        var_b8 = var_c0
        int64_t var_b0
        Botan::deallocate_memory(var_c0, var_b0 - var_c0, 1)
    
    if (var_a8 != 0)
        var_a0 = var_a8
        int64_t var_98
        Botan::deallocate_memory(var_a8, var_98 - var_a8, 1)
    
    if ((zx.d(var_90) & 1) != 0)
        operator delete(var_80)
    
    int64_t* j_1 = i[1]
    
    if (j_1 == 0)
        void* x8_13 = &i[2]
        int64_t* i_2 = *x8_13
        
        if (*i_2 == i)
            i = i_2
        else
            void* j
            
            do
                j = *x8_13
                x8_13 = j + 0x10
                i = *x8_13
            while (*i != j)
    else
        do
            i = j_1
            j_1 = *j_1
        while (j_1 != 0)

return std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
    &i_1)
