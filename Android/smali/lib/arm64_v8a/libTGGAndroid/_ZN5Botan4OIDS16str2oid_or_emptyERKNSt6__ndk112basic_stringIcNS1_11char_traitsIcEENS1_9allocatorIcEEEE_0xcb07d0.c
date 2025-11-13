// 函数: _ZN5Botan4OIDS16str2oid_or_emptyERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xcb07d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

sub_ccc658()
std::__ndk1::mutex::lock()
void* x0_1 = std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID>, std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID>, std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID>, std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, Botan::OID> > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    &data_23ecf40:8)
void** entry_x8

if (x0_1 == 0)
    *entry_x8 = _vtable_for_Botan::OID + 0x10
    __builtin_memset(&entry_x8[1], 0, 0x18)
else
    entry_x8[2] = 0
    entry_x8[3] = 0
    *entry_x8 = _vtable_for_Botan::OID + 0x10
    entry_x8[1] = 0
    int64_t x9_1 = *(x0_1 + 0x30)
    int64_t x8_1 = *(x0_1 + 0x38)
    uint64_t x23_1 = x8_1 - x9_1
    
    if (x8_1 != x9_1)
        if ((x23_1 & 0xffffffff80000000) != 0)
            int64_t* x0_8 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            void* x8_7 = entry_x8[1]
            
            if (x8_7 != 0)
                entry_x8[2] = x8_7
                operator delete(x8_7)
            
            std::__ndk1::mutex::unlock()
            sub_1101e04(x0_8)
            noreturn
        
        int64_t x0_3 = operator new(x23_1)
        entry_x8[1] = x0_3
        entry_x8[2] = x0_3
        entry_x8[3] = x0_3 + (x23_1 s>> 2 << 2)
        int64_t x1_1 = *(x0_1 + 0x30)
        int64_t x22_1 = x0_3
        size_t x20_2 = *(x0_1 + 0x38) - x1_1
        
        if (x20_2 s>= 1)
            memcpy(x22_1, x1_1, x20_2)
            x22_1 += x20_2
        
        entry_x8[2] = x22_1
return std::__ndk1::mutex::unlock() __tailcall
