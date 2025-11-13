// 函数: _ZNK5Botan10Extensions14extensions_rawEv
// 地址: 0xeaf0bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
entry_x8[2] = 0
entry_x8[1] = 0
*entry_x8 = &entry_x8[1]
void* entry_x0
int64_t* i_2 = *(entry_x0 + 0x20)
void* x22 = entry_x0 + 0x28

while (i_2 != x22)
    char x24_1 = i_2[0xd].b
    void* var_60_1
    __builtin_memset(&var_60_1, 0, 0x18)
    int64_t x21_1 = i_2[0xa]
    int64_t x8_1 = i_2[0xb]
    size_t x20_1 = x8_1 - x21_1
    
    if (x8_1 != x21_1)
        if ((x20_1 & 0xffffffff80000000) != 0)
            int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            entry_x8[1]
            std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, std::__ndk1::pair<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, bool> >, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, std::__ndk1::pair<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, bool> >, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, std::__ndk1::pair<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, bool> > > >::destroy(
                entry_x8)
            sub_1101e04(x0_3)
            noreturn
        
        void* x0_1 = operator new(x20_1)
        void* x25_1 = x0_1 + x20_1
        var_60_1 = x0_1
        void* var_58_1 = x0_1
        void* var_50_1 = x25_1
        memcpy(x0_1, x21_1, x20_1)
        void* var_58_2 = x25_1
    
    char var_48_1 = x24_1
    std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, std::__ndk1::pair<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, bool> >, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, std::__ndk1::pair<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, bool> >, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, std::__ndk1::pair<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, bool> > > >::__emplace_unique_key_args<Botan::OID, Botan::OID const&, std::__ndk1::pair<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, bool> >(
        entry_x8, &i_2[4])
    entry_x0 = var_60_1
    
    if (entry_x0 != 0)
        void* var_58_3 = entry_x0
        operator delete(entry_x0)
    
    int64_t* i_1 = i_2[1]
    
    if (i_1 == 0)
        void* x8_3 = &i_2[2]
        int64_t* i_3 = *x8_3
        
        if (*i_3 == i_2)
            i_2 = i_3
        else
            void* i
            
            do
                i = *x8_3
                x8_3 = i + 0x10
                i_2 = *x8_3
            while (*i_2 != i)
    else
        do
            i_2 = i_1
            i_1 = *i_1
        while (i_1 != 0)
