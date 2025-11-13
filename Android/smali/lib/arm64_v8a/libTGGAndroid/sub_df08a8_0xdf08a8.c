// 函数: sub_df08a8
// 地址: 0xdf08a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = arg1

if ((zx.d(arg9) & 1) != 0)
    operator delete(arg10)

if (arg11 != 0)
    arg12 = arg11
    Botan::deallocate_memory(arg11, arg13 - arg11, 1)

void* x0_2 = arg14

if (x0_2 != 0)
    arg15 = x0_2
    Botan::deallocate_memory(x0_2, arg16 - x0_2, 1)

char arg_50
void arg_68

if (arg2 == 1)
    __cxa_begin_catch(x21)
    __cxa_end_catch()
    
    while (true)
        if ((zx.d(arg_50) & 1) != 0)
            operator delete(arg18)
        
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
        void* x0_11
        
        x0_11 = temp0_1 == 0 ? arg6 : arg18
        
        uint64_t x1_6
        
        if (temp0_1 == 0)
            x1_6 = x8_4 u>> 1
        else
            x1_6 = arg17
        
        Botan::base64_decode(x0_11, x1_6, true)
        Botan::nist_key_unwrap_padded(arg14, arg15 - arg14, *(arg4 + 8))
        size_t x21_2 = arg12 - arg11
        
        if (x21_2 u>= -0x10)
            break
        
        void* x23_2
        
        if (x21_2 u>= 0x17)
            uint64_t x24_2 = (x21_2 + 0x10) & 0xfffffffffffffff0
            void* x0_14 = operator new(x24_2)
            x23_2 = x0_14
            size_t arg_10 = x21_2
            arg10 = x0_14
            arg9.q = x24_2 | 1
            memcpy(x23_2, arg11, x21_2)
        else
            x23_2 = arg7
            arg9 = (x21_2.d << 1).b
            
            if (x21_2 != 0)
                memcpy(x23_2, arg11, x21_2)
        
        *(x23_2 + x21_2) = 0
        std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
            arg3, &arg9)
        
        if ((zx.d(arg9) & 1) != 0)
            operator delete(arg10)
        
        if (arg11 != 0)
            arg12 = arg11
            Botan::deallocate_memory(arg11, arg13 - arg11, 1)
        
        if (arg14 != 0)
            arg15 = arg14
            Botan::deallocate_memory(arg14, arg16 - arg14, 1)
    
    x21 = std::__ndk1::__basic_string_common<true>::__throw_length_error()

if ((zx.d(arg_50) & 1) != 0)
    operator delete(arg18)

*(arg3 + 8)
std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
    arg3)
std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
    &arg_68)
sub_1101e04(x21)
noreturn
