// 函数: _ZNK5Botan10Data_Store10search_forENSt6__ndk18functionIFbNS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES8_EEE
// 地址: 0xe98aa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
entry_x8[2] = 0
entry_x8[1] = 0
int64_t* x20 = arg1
*entry_x8 = &entry_x8[1]
int64_t* i = *x20

while (i != &x20[1])
    char var_68
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_68)
    char var_80
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_80)
    void* entry_x1
    int64_t* x0_2 = *(entry_x1 + 0x20)
    
    if (x0_2 == 0)
        sub_a58ab4()
        noreturn
    
    int32_t x25_1 = (*(*x0_2 + 0x30))(x0_2, &var_68, &var_80).d
    
    if ((zx.d(var_80) & 1) == 0)
        if ((zx.d(var_68) & 1) != 0)
            goto label_e98b68
        
        goto label_e98b4c
    
    void* var_70
    operator delete(var_70)
    
    if ((zx.d(var_68) & 1) == 0)
    label_e98b4c:
        
        if ((x25_1 & 1) != 0)
        label_e98b78:
            char var_b0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_b0)
            char var_98
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_98)
            std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >(
                entry_x8)
            void* var_88
            
            if ((zx.d(var_98) & 1) != 0)
                operator delete(var_88)
            void* var_a0
            
            if ((zx.d(var_b0) & 1) != 0)
                operator delete(var_a0)
    else
    label_e98b68:
        void* var_58
        operator delete(var_58)
        
        if ((x25_1 & 1) != 0)
            goto label_e98b78
    
    int64_t* j_1 = i[1]
    
    if (j_1 == 0)
        void* x8_9 = &i[2]
        int64_t* i_1 = *x8_9
        
        if (*i_1 == i)
            i = i_1
        else
            void* j
            
            do
                j = *x8_9
                x8_9 = j + 0x10
                i = *x8_9
            while (*i != j)
    else
        do
            i = j_1
            j_1 = *j_1
        while (j_1 != 0)
