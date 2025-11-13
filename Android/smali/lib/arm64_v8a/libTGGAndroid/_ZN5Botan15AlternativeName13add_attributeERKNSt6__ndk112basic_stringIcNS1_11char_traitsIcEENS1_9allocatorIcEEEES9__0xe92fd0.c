// 函数: _ZN5Botan15AlternativeName13add_attributeERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xe92fd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg2)
uint64_t x8_1

if ((x8.d & 1) == 0)
    x8_1 = x8 u>> 1
else
    x8_1 = *(arg2 + 8)

if (x8_1 == 0)
    return 

char* entry_x2
uint64_t x8_2 = zx.q(*entry_x2)
uint64_t x8_3

if ((x8_2.d & 1) == 0)
    x8_3 = x8_2 u>> 1
else
    x8_3 = *(entry_x2 + 8)

if (x8_3 == 0)
    return 

void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x8) x21_1 = arg1 + 8
int64_t* i_3
int64_t x1
i_3, x1 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__equal_range_multi<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    x21_1)

if (i_3 != x1)
    uint64_t x8_4 = zx.q(*entry_x2)
    int64_t* i_2 = i_3
    int32_t temp0_1 = x8_4.d & 1
    uint64_t x24_1
    
    if (temp0_1 == 0)
        x24_1 = x8_4 u>> 1
    else
        x24_1 = *(entry_x2 + 8)
    
    void* x25_1
    
    if (temp0_1 != 0)
        x25_1 = *(entry_x2 + 0x10)
    else
        x25_1 = &entry_x2[1]
    
    do
        uint64_t x10_3 = zx.q(i_2[7].b)
        uint64_t x8_5 = x10_3 u>> 1
        uint64_t x11_3
        
        if ((x10_3.d & 1) == 0)
            x11_3 = x8_5
        else
            x11_3 = i_2[8]
        
        if (x11_3 == x24_1)
            int32_t x10_4 = x10_3.d & 1
            
            if (x10_4 != 0)
                arg1 = i_2[9]
            else
                arg1 = i_2 + 0x39
            
            if (x10_4 != 0)
                if (x24_1 == 0)
                    return 
                
                if (memcmp(arg1, x25_1, x24_1).d == 0)
                    return 
            else
                if (x24_1 == 0)
                    return 
                
                void* x9_5 = i_2 + 0x39
                void* x10_5 = x25_1
                
                while (zx.d(*x9_5) == zx.d(*x10_5))
                    uint64_t temp1_1 = x8_5
                    x8_5 -= 1
                    x9_5 += 1
                    x10_5 += 1
                    
                    if (temp1_1 == 1)
                        return 
        
        int64_t* i_1 = i_2[1]
        
        if (i_1 == 0)
            void* x8_7 = &i_2[2]
            int64_t* i_4 = *x8_7
            
            if (*i_4 == i_2)
                i_2 = i_4
            else
                void* i
                
                do
                    i = *x8_7
                    x8_7 = i + 0x10
                    i_2 = *x8_7
                while (*i_2 != i)
        else
            do
                i_2 = i_1
                i_1 = *i_1
            while (i_1 != 0)
    while (i_2 != x1)

return Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    x21_1, arg2, entry_x2) __tailcall
