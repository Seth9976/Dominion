// 函数: _ZN5Botan11BER_Decoder24decode_optional_implicitINS_15AlternativeNameEEERS0_RT_NS_8ASN1_TagES6_S6_S6_RKS4_
// 地址: 0xeb7074
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg2
Botan::BER_Decoder::get_next_object()
int32_t var_60
int32_t var_5c

if (var_60 != arg3 || var_5c != arg4)
    void* entry_x6
    
    if (x20 != entry_x6)
        std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>*, int64_t> >(
            &x20[1], *(entry_x6 + 8))
        std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__tree_node<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, void*>*, int64_t> >(
            &x20[4], *(entry_x6 + 0x20))
    
    Botan::BER_Decoder::push_back(arg1)
else
    int32_t var_60_1 = arg5
    int32_t var_5c_1 = arg6.d
    Botan::BER_Decoder::push_back(arg1)
    (*(*x20 + 8))(x20, arg1)

void* var_58

if (var_58 != 0)
    void* var_50_1 = var_58
    int64_t var_48
    Botan::deallocate_memory(var_58, var_48 - var_58, 1)

return arg1
