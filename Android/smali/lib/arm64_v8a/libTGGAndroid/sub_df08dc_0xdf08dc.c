// 函数: sub_df08dc
// 地址: 0xdf08dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg10 != 0)
    arg11 = arg10
    Botan::deallocate_memory(arg10, arg12 - arg10, 1)

void* x0_1 = arg13

if (x0_1 != 0)
    arg14 = x0_1
    Botan::deallocate_memory(x0_1, arg15 - x0_1, 1)

char arg_50
void arg_68

if (arg2 != 1)
    if ((zx.d(arg_50) & 1) != 0)
        operator delete(arg17)
    
    *(arg3 + 8)
    std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
        arg3)
    std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
        &arg_68)
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
__cxa_end_catch()

while (true)
    if ((zx.d(arg_50) & 1) != 0)
        operator delete(arg17)
    
    void** i_1 = arg8[1]
    
    if (i_1 == 0)
        void* x8_15 = &arg8[2]
        void** x9_2 = *x8_15
        
        if (*x9_2 == arg8)
            arg8 = x9_2
        else
            void* i
            
            do
                i = *x8_15
                x8_15 = i + 0x10
                arg8 = *x8_15
            while (*arg8 != i)
    else
        do
            arg8 = i_1
            i_1 = *i_1
        while (i_1 != 0)
    
    if (arg8 == arg5)
        return std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
            &arg_68)
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &arg_50)
    uint64_t x8_4 = zx.q(arg_50)
    int32_t temp0_1 = x8_4.d & 1
    void* x0_10
    
    x0_10 = temp0_1 == 0 ? arg6 : arg17
    
    uint64_t x1_6
    
    if (temp0_1 == 0)
        x1_6 = x8_4 u>> 1
    else
        x1_6 = arg16
    
    Botan::base64_decode(x0_10, x1_6, true)
    Botan::nist_key_unwrap_padded(arg13, arg14 - arg13, *(arg4 + 8))
    void* x21_2 = arg11 - arg10
    
    if (x21_2 u>= -0x10)
        break
    
    int64_t arg_8
    char* x23_2
    
    if (x21_2 u>= 0x17)
        uint64_t x24_2 = (x21_2 + 0x10) & 0xfffffffffffffff0
        char* x0_13 = operator new(x24_2)
        x23_2 = x0_13
        void* arg_10 = x21_2
        arg9 = x0_13
        arg_8 = x24_2 | 1
        memcpy(x23_2, arg10, x21_2)
    else
        x23_2 = arg7
        arg_8.b = (x21_2.d << 1).b
        
        if (x21_2 != 0)
            memcpy(x23_2, arg10, x21_2)
    
    *(x23_2 + x21_2) = 0
    std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
        arg3, &arg_8)
    
    if ((zx.d(arg_8.b) & 1) != 0)
        operator delete(arg9)
    
    if (arg10 != 0)
        arg11 = arg10
        Botan::deallocate_memory(arg10, arg12 - arg10, 1)
    
    if (arg13 != 0)
        arg14 = arg13
        Botan::deallocate_memory(arg13, arg15 - arg13, 1)

std::__ndk1::__basic_string_common<true>::__throw_length_error()
return sub_df0960() __tailcall
