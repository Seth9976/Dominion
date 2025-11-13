// 函数: _ZNK5Botan15AlternativeName19get_first_attributeERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe93544
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & x22 = arg1
void* i = *(x22 + 0x10)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8

if (i != 0)
    char* entry_x1
    uint64_t x8 = zx.q(*entry_x1)
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x10) i_3 = x22 + 0x10
    int32_t temp0_1 = x8.d & 1
    uint64_t x21_1
    
    if (temp0_1 == 0)
        x21_1 = x8 u>> 1
    else
        x21_1 = *(entry_x1 + 8)
    
    void* x20_1
    
    if (temp0_1 != 0)
        x20_1 = *(entry_x1 + 0x10)
    else
        x20_1 = &entry_x1[1]
    
    do
        uint64_t x9_2 = zx.q(*(i + 0x20))
        uint64_t x25_1
        
        if ((x9_2.d & 1) == 0)
            x25_1 = x9_2 u>> 1
        else
            x25_1 = *(i + 0x28)
        
        uint64_t x2_1
        
        x2_1 = x21_1 u< x25_1 ? x21_1 : x25_1
        
        if (x2_1 != 0)
            void* x0
            
            if ((x9_2.d & 1) != 0)
                x0 = *(i + 0x30)
            else
                x0 = i + 0x21
            
            arg1 = memcmp(x0, x20_1, x2_1)
        
        if (x2_1 == 0 || arg1.d == 0)
            if (x25_1 u>= x21_1)
                arg1 = zx.q(x21_1 u< x25_1 ? 1 : 0)
            else
                arg1 = 0xffffffff
        
        if (arg1.d s>= 0)
            i_3 = i
        
        i = *(i + (zx.q(arg1.d u>> 0x1f) << 3))
    while (i != 0)
    
    if (i_3 != x22 + 0x10)
        uint64_t x10_4 = zx.q(*(i_3 + 0x20))
        uint64_t i_2 = x10_4 u>> 1
        uint64_t i_4
        
        if ((x10_4.d & 1) == 0)
            i_4 = i_2
        else
            i_4 = *(i_3 + 0x28)
        
        if (i_4 == x21_1)
            int32_t x10_5 = x10_4.d & 1
            
            if (x10_5 != 0)
                arg1 = *(i_3 + 0x30)
            else
                arg1 = i_3 + 0x21
            
            if (x10_5 == 0)
                if (x21_1 != 0)
                    void* __offset(
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                        0x31) x9_5 = i_3 + 0x21
                    uint64_t i_1
                    
                    do
                        if (zx.d(*x9_5) != zx.d(*x20_1))
                            goto label_e93660
                        
                        i_1 = i_2
                        i_2 -= 1
                        x9_5 += 1
                        x20_1 += 1
                    while (i_1 != 1)
                
                return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    entry_x8) __tailcall
            
            if (x21_1 == 0)
                return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    entry_x8) __tailcall
            
            if (memcmp(arg1, x20_1, x21_1).d == 0)
                return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    entry_x8) __tailcall

label_e93660:
*entry_x8 = 0
