// 函数: _ZN5Botan15AlternativeNameC2ERKS0_
// 地址: 0xf1e4d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::AlternativeName + 0x10
void* __offset(Botan::AlternativeName, 0x10) x20_1 = arg1 + 0x10
*x20_1 = 0
void* __offset(Botan::AlternativeName, 0x8) x19_1 = arg1 + 8
*x19_1 = x20_1
*(arg1 + 0x18) = 0
void* entry_x1
int64_t* i = *(entry_x1 + 8)

while (i != entry_x1 + 0x10)
    std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__emplace_hint_multi<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&>(
        x19_1, x20_1)
    int64_t* j_1 = i[1]
    
    if (j_1 == 0)
        void* x8_2 = &i[2]
        int64_t* i_2 = *x8_2
        
        if (*i_2 == i)
            i = i_2
        else
            void* j
            
            do
                j = *x8_2
                x8_2 = j + 0x10
                i = *x8_2
            while (*i != j)
    else
        do
            i = j_1
            j_1 = *j_1
        while (j_1 != 0)

*(arg1 + 0x28) = nullptr
*(arg1 + 0x20) = arg1 + 0x28
*(arg1 + 0x30) = 0
int64_t* i_1 = *(entry_x1 + 0x20)

while (i_1 != entry_x1 + 0x28)
    std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::__emplace_hint_multi<std::__ndk1::pair<Botan::OID const, Botan::ASN1_String> const&>(
        arg1 + 0x20, arg1 + 0x28)
    int64_t* j_3 = i_1[1]
    
    if (j_3 == 0)
        void* x8_5 = &i_1[2]
        int64_t* i_3 = *x8_5
        
        if (*i_3 == i_1)
            i_1 = i_3
        else
            void* j_2
            
            do
                j_2 = *x8_5
                x8_5 = j_2 + 0x10
                i_1 = *x8_5
            while (*i_1 != j_2)
    else
        do
            i_1 = j_3
            j_3 = *j_3
        while (j_3 != 0)
