// 函数: _ZN5Botan28Path_Validation_RestrictionsC1EbmbNSt6__ndk16chrono8durationIxNS1_5ratioILl1ELl1EEEEE
// 地址: 0xec7be0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = arg2.b & 1
*(arg1 + 1) = arg4 & 1
*(arg1 + 0x10) = 0
void* x20 = arg1
*(arg1 + 8) = arg1 + 0x10
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = arg3
int64_t entry_x4
*(arg1 + 0x28) = entry_x4
void* var_38
int64_t var_28

if (arg3 u<= 0x50)
    char var_48_1 = 0xe
    int32_t var_47
    __builtin_strncpy(&var_47, "SHA-160", 8)
    int64_t* x0_1 = std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        arg1 + 8, &var_28)
    
    if (*x0_1 == 0)
        std::__ndk1::__tree_node_base<void*>* x0_22
        int128_t v0_5
        x0_22, v0_5 = operator new(0x38)
        std::__ndk1::__tree_node_base<void*>* x1_9 = x0_22
        v0_5 = var_48_1.o
        int64_t x9_5 = var_28
        __builtin_memset(&var_48_1, 0, 0x18)
        *x1_9 = 0
        *(x1_9 + 8) = 0
        *(x1_9 + 0x30) = var_38
        *(x1_9 + 0x20) = v0_5
        *(x1_9 + 0x10) = x9_5
        *x0_1 = x1_9
        int64_t* x8_28 = **(arg1 + 8)
        
        if (x8_28 != 0)
            *(arg1 + 8) = x8_28
            x1_9 = *x0_1
        
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
            *(x20 + 0x10), x1_9)
        *(x20 + 0x18) += 1

char var_48_2 = 0xe
int32_t var_47_1
__builtin_strncpy(&var_47_1, "SHA-224", 8)
int64_t* x0_4 = std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg1 + 8, &var_28)

if (*x0_4 == 0)
    std::__ndk1::__tree_node_base<void*>* x0_14
    int128_t v0_1
    x0_14, v0_1 = operator new(0x38)
    std::__ndk1::__tree_node_base<void*>* x1_5 = x0_14
    v0_1 = var_48_2.o
    int64_t x9_1 = var_28
    __builtin_memset(&var_48_2, 0, 0x18)
    *x1_5 = 0
    *(x1_5 + 8) = 0
    *(x1_5 + 0x30) = var_38
    *(x1_5 + 0x20) = v0_1
    *(x1_5 + 0x10) = x9_1
    *x0_4 = x1_5
    int64_t* x8_8 = **(arg1 + 8)
    
    if (x8_8 != 0)
        *(arg1 + 8) = x8_8
        x1_5 = *x0_4
    
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(*(x20 + 0x10), 
        x1_5)
    *(x20 + 0x18) += 1

char var_48_3 = 0xe
int32_t var_47_2
__builtin_strncpy(&var_47_2, "SHA-256", 8)
std::__ndk1::__tree_node_base<void*>** x0_7 = std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg1 + 8, &var_28)

if (*x0_7 == 0)
    std::__ndk1::__tree_node_base<void*>* x0_16
    int128_t v0_2
    x0_16, v0_2 = operator new(0x38)
    std::__ndk1::__tree_node_base<void*>* x1_6 = x0_16
    v0_2 = var_48_3.o
    int64_t x9_2 = var_28
    __builtin_memset(&var_48_3, 0, 0x18)
    *x1_6 = 0
    *(x1_6 + 8) = 0
    *(x1_6 + 0x30) = var_38
    *(x1_6 + 0x20) = v0_2
    *(x1_6 + 0x10) = x9_2
    *x0_7 = x1_6
    int64_t* x8_13 = **(arg1 + 8)
    
    if (x8_13 != 0)
        *(arg1 + 8) = x8_13
        x1_6 = *x0_7
    
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(*(x20 + 0x10), 
        x1_6)
    *(x20 + 0x18) += 1

char var_48_4 = 0xe
int32_t var_47_3
__builtin_strncpy(&var_47_3, "SHA-384", 8)
std::__ndk1::__tree_node_base<void*>** x0_10 = std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg1 + 8, &var_28)

if (*x0_10 == 0)
    std::__ndk1::__tree_node_base<void*>* x0_18
    int128_t v0_3
    x0_18, v0_3 = operator new(0x38)
    std::__ndk1::__tree_node_base<void*>* x1_7 = x0_18
    v0_3 = var_48_4.o
    int64_t x9_3 = var_28
    __builtin_memset(&var_48_4, 0, 0x18)
    *x1_7 = 0
    *(x1_7 + 8) = 0
    *(x1_7 + 0x30) = var_38
    *(x1_7 + 0x20) = v0_3
    *(x1_7 + 0x10) = x9_3
    *x0_10 = x1_7
    int64_t* x8_18 = **(arg1 + 8)
    
    if (x8_18 != 0)
        *(arg1 + 8) = x8_18
        x1_7 = *x0_10
    
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(*(x20 + 0x10), 
        x1_7)
    *(x20 + 0x18) += 1

char var_48_5 = 0xe
int32_t var_47_4
__builtin_strncpy(&var_47_4, "SHA-512", 8)
std::__ndk1::__tree_node_base<void*>** result = std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg1 + 8, &var_28)

if (*result == 0)
    std::__ndk1::__tree_node_base<void*>* x0_20
    int128_t v0_4
    x0_20, v0_4 = operator new(0x38)
    std::__ndk1::__tree_node_base<void*>* x1_8 = x0_20
    v0_4 = var_48_5.o
    int64_t x9_4 = var_28
    __builtin_memset(&var_48_5, 0, 0x18)
    *x1_8 = 0
    *(x1_8 + 8) = 0
    *(x1_8 + 0x30) = var_38
    *(x1_8 + 0x20) = v0_4
    *(x1_8 + 0x10) = x9_4
    *result = x1_8
    int64_t* x8_23 = **(arg1 + 8)
    
    if (x8_23 != 0)
        *(arg1 + 8) = x8_23
        x1_8 = *result
    
    result = std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
        *(x20 + 0x10), x1_8)
    *(x20 + 0x18) += 1

return result
