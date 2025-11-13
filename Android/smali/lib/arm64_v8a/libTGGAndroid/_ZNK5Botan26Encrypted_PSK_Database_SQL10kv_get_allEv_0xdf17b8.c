// 函数: _ZNK5Botan26Encrypted_PSK_Database_SQL10kv_get_allEv
// 地址: 0xdf17b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
entry_x8[2] = 0
entry_x8[1] = 0
*entry_x8 = &entry_x8[1]
void* entry_x0
int64_t* x20 = *(entry_x0 + 0x30)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "select psk_name from ", entry_x0 + 0x40)
char var_50
(**x20)(x20, &var_50)
int64_t result

while (true)
    void* var_40
    
    if ((zx.d(var_50) & 1) != 0)
        operator delete(var_40)
    
    int64_t* var_38
    result = (*(*var_38 + 0x48))()
    
    if ((result.d & 1) == 0)
        break
    
    (*(*var_38 + 0x30))(var_38, 0)
    int64_t var_28
    std::__ndk1::__tree_node_base<void*>** x0_6 = std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        entry_x8, &var_28)
    
    if (*x0_6 == 0)
        std::__ndk1::__tree_node_base<void*>* x0_7
        int128_t v0_1
        x0_7, v0_1 = operator new(0x38)
        std::__ndk1::__tree_node_base<void*>* x1_2 = x0_7
        v0_1 = var_50.o
        int64_t x9_2 = var_28
        __builtin_memset(&var_50, 0, 0x18)
        *x1_2 = 0
        *(x1_2 + 8) = 0
        *(x1_2 + 0x30) = var_40
        *(x1_2 + 0x20) = v0_1
        *(x1_2 + 0x10) = x9_2
        *x0_6 = x1_2
        void* x8_11 = **entry_x8
        
        if (x8_11 != 0)
            *entry_x8 = x8_11
            x1_2 = *x0_6
        
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
            entry_x8[1], x1_2)
        entry_x8[2] += 1

int64_t* var_30

if (var_30 != 0)
    int64_t x9_3
    int32_t i
    
    do
        x9_3 = __ldaxr(&var_30[1])
        i = __stlxr(x9_3 - 1, &var_30[1])
    while (i != 0)
    
    if (x9_3 == 0)
        (*(*var_30 + 0x10))(var_30)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
