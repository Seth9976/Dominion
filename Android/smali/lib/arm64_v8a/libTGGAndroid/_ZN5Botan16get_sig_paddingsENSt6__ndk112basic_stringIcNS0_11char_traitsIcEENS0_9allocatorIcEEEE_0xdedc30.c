// 函数: _ZN5Botan16get_sig_paddingsENSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xdedc30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x24 = data_23ecc20
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
    * entry_x8

if (x24 == 0)
label_dedd2c:
    __builtin_memset(entry_x8, 0, 0x18)
    return 

uint64_t x8 = zx.q(*arg1)
int32_t temp0_1 = x8.d & 1
uint64_t x25_1

if (temp0_1 == 0)
    x25_1 = x8 u>> 1
else
    x25_1 = *(arg1 + 8)

int64_t x21_1

if (temp0_1 != 0)
    x21_1 = *(arg1 + 0x10)
else
    x21_1 = arg1 + 1

while (true)
    uint64_t x9_2 = zx.q(*(x24 + 0x20))
    uint64_t x26_1
    
    if ((x9_2.d & 1) == 0)
        x26_1 = x9_2 u>> 1
    else
        x26_1 = *(x24 + 0x28)
    
    uint64_t x22_1
    
    x22_1 = x26_1 u< x25_1 ? x26_1 : x25_1
    
    if (x22_1 != 0)
        void* x23_1
        
        if ((x9_2.d & 1) != 0)
            x23_1 = *(x24 + 0x30)
        else
            x23_1 = x24 + 0x21
        
        arg1 = memcmp(x21_1, x23_1, x22_1)
        
        if (arg1.d != 0)
            if ((arg1.d & 0x80000000) != 0)
                goto label_dedc7c
            
            goto label_dedcf0
        
        if (x25_1 u< x26_1)
            goto label_dedc7c
        
    label_dedcf0:
        arg1 = memcmp(x23_1, x21_1, x22_1)
        
        if (arg1.d == 0)
            goto label_dedcf8
        
        if ((arg1.d & 0x80000000) == 0)
            goto label_dedd14
        
        goto label_dedc78
    
    if (x25_1 u< x26_1)
        goto label_dedc7c
    
label_dedcf8:
    
    if (x26_1 u>= x25_1)
    label_dedd14:
        void var_48
        
        if (*std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > > > >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                &data_23ecc18, &var_48) == 0)
            sub_f28374()
            noreturn
        
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
            entry_x8)
        break
    
label_dedc78:
    x24 += 8
label_dedc7c:
    x24 = *x24
    
    if (x24 == 0)
        goto label_dedd2c
