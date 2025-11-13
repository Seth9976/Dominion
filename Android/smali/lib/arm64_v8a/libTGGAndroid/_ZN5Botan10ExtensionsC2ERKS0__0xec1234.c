// 函数: _ZN5Botan10ExtensionsC2ERKS0_
// 地址: 0xec1234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Extensions + 0x10
int64_t result =
    std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::vector(arg1 + 8)
*(arg1 + 0x28) = 0
*(arg1 + 0x20) = arg1 + 0x28
*(arg1 + 0x30) = 0
void* entry_x1
int64_t* i = *(entry_x1 + 0x20)

while (i != entry_x1 + 0x28)
    result = std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::__emplace_hint_unique_key_args<Botan::OID, std::__ndk1::pair<Botan::OID const, Botan::Extensions::Extensions_Info> const&>(
        arg1 + 0x20, arg1 + 0x28, &i[4])
    int64_t* j_1 = i[1]
    
    if (j_1 == 0)
        void* x8_2 = &i[2]
        int64_t* i_1 = *x8_2
        
        if (*i_1 == i)
            i = i_1
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

return result
