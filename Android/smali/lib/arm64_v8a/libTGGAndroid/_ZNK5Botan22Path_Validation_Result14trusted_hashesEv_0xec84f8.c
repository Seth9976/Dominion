// 函数: _ZNK5Botan22Path_Validation_Result14trusted_hashesEv
// 地址: 0xec84f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
entry_x8[2] = 0
entry_x8[1] = 0
*entry_x8 = &entry_x8[1]
int64_t* entry_x0
int64_t* x8_1 = entry_x0[6]

if (entry_x0[7] == x8_1)
    return 

int64_t* x20_1 = entry_x0
int64_t x22_1 = 0
int64_t i = 0

do
    *(x8_1 + x22_1)
    Botan::X509_Object::hash_used_for_signature()
    int64_t var_38
    entry_x0 = std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        entry_x8, &var_38)
    int128_t var_50
    void* var_40
    
    if (*entry_x0 == 0)
        std::__ndk1::__tree_node_base<void*>* x0_2
        int128_t v0_1
        x0_2, v0_1 = operator new(0x38)
        std::__ndk1::__tree_node_base<void*>* x1_2 = x0_2
        v0_1 = var_50
        int64_t x9_3 = var_38
        __builtin_memset(&var_50, 0, 0x18)
        *x1_2 = 0
        *(x1_2 + 8) = 0
        *(x1_2 + 0x30) = var_40
        *(x1_2 + 0x20) = v0_1
        *(x1_2 + 0x10) = x9_3
        *entry_x0 = x1_2
        void* x8_6 = **entry_x8
        
        if (x8_6 != 0)
            *entry_x8 = x8_6
            x1_2 = *entry_x0
        
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
            entry_x8[1], x1_2)
        entry_x8[2] += 1
    else if ((zx.d(var_50.b) & 1) != 0)
        operator delete(var_40)
    x8_1 = x20_1[6]
    i += 1
    x22_1 += 0x10
while (i != (x20_1[7] - x8_1) s>> 4)
