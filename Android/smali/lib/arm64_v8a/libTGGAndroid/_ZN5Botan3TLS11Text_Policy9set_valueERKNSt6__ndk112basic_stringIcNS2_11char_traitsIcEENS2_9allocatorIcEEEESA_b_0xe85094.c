// 函数: _ZN5Botan3TLS11Text_Policy9set_valueERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_b
// 地址: 0xe85094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>** x0_1 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg1 + 8)
int32_t entry_x3

if ((entry_x3 & 1) == 0 && arg1 + 0x10 != x0_1)
    return 0

int128_t var_78
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_78)
int128_t var_60
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_60)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > 
    var_48
std::__ndk1::__tree_node_base<void*>* var_38
std::__ndk1::__tree_node_base<void*>** x0_6 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg1 + 8, x0_1, &var_38, &var_48)
void* var_68
void* var_50

if (*x0_6 == 0)
    std::__ndk1::__tree_node_base<void*>* x0_9
    int128_t v0_1
    x0_9, v0_1 = operator new(0x50)
    std::__ndk1::__tree_node_base<void*>* x1_2 = x0_9
    v0_1 = var_78
    __builtin_memset(&var_78, 0, 0x30)
    *(x1_2 + 0x20) = v0_1
    v0_1 = var_60
    std::__ndk1::__tree_node_base<void*>* x10_1 = var_38
    *(x1_2 + 0x30) = var_68
    *x1_2 = 0
    *(x1_2 + 8) = 0
    *(x1_2 + 0x10) = x10_1
    *(x1_2 + 0x48) = var_50
    *(x1_2 + 0x38) = v0_1
    *x0_6 = x1_2
    int64_t x8_7 = **(arg1 + 8)
    
    if (x8_7 != 0)
        *(arg1 + 8) = x8_7
        x1_2 = *x0_6
    
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(*(arg1 + 0x10), 
        x1_2)
    *(arg1 + 0x18) += 1
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(var_50)
else if ((zx.d(var_60.b) & 1) != 0)
    operator delete(var_50)

if ((zx.d(var_78.b) & 1) != 0)
    operator delete(var_68)

return 1
