// 函数: _ZNK5Botan15AlternativeName8contentsEv
// 地址: 0xe933c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
entry_x8[2] = 0
entry_x8[1] = 0
*entry_x8 = &entry_x8[1]
void* entry_x0
int64_t* i = *(entry_x0 + 8)

while (i != entry_x0 + 0x10)
    Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        entry_x8, &i[4], &i[7])
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

int64_t* i_1 = *(entry_x0 + 0x20)

while (i_1 != entry_x0 + 0x28)
    Botan::OID::to_formatted_string()
    char var_48
    Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        entry_x8, &var_48, &i_1[0xc])
    void* var_38
    
    if ((zx.d(var_48) & 1) != 0)
        operator delete(var_38)
    int64_t* j_3 = i_1[1]
    
    if (j_3 == 0)
        void* x8_6 = &i_1[2]
        int64_t* i_3 = *x8_6
        
        if (*i_3 == i_1)
            i_1 = i_3
        else
            void* j_2
            
            do
                j_2 = *x8_6
                x8_6 = j_2 + 0x10
                i_1 = *x8_6
            while (*i_1 != j_2)
    else
        do
            i_1 = j_3
            j_3 = *j_3
        while (j_3 != 0)
