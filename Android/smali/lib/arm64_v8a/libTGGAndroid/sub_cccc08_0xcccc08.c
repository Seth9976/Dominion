// 函数: sub_cccc08
// 地址: 0xcccc08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::mutex::lock()

if (std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID>, std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID>, std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID>, std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID> > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        &data_23ecf40:8) == 0)
    char var_68
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_68)
    void* __offset(vtable_for_Botan::OID, 0x10) var_50_1 = _vtable_for_Botan::OID + 0x10
    void* var_48
    __builtin_memset(&var_48, 0, 0x18)
    int64_t __saved_x1_1 = *(arg1 + 8)
    int64_t x8_2 = *(arg1 + 0x10)
    uint64_t x19_1 = x8_2 - __saved_x1_1
    void* var_58
    
    if (x8_2 != __saved_x1_1)
        if ((x19_1 & 0xffffffff80000000) != 0)
            int64_t* x0_9 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            void* x0_10 = var_48
            void* __offset(vtable_for_Botan::OID, 0x10) var_50_3 = _vtable_for_Botan::OID + 0x10
            
            if (x0_10 != 0)
                void* var_40_4 = x0_10
                operator delete(x0_10)
            
            if ((zx.d(var_68) & 1) != 0)
                operator delete(var_58)
            
            std::__ndk1::mutex::unlock()
            sub_1101e04(x0_9)
            noreturn
        
        void* x0_4 = operator new(x19_1)
        var_48 = x0_4
        void* var_40_1 = x0_4
        void* var_38_1 = x0_4 + (x19_1 s>> 2 << 2)
        memcpy(x0_4, __saved_x1_1, x19_1)
        void* var_40_2 = x0_4 + x19_1
    
    std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID>, std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID>, std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID>, std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID> > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID> >(
        &data_23ecf40:8, &var_68)
    void* x0_5 = var_48
    void* __offset(vtable_for_Botan::OID, 0x10) var_50_2 = _vtable_for_Botan::OID + 0x10
    
    if (x0_5 != 0)
        void* var_40_3 = x0_5
        operator delete(x0_5)
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)

return std::__ndk1::mutex::unlock()
