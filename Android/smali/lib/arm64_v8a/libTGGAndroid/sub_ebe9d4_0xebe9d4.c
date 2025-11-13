// 函数: sub_ebe9d4
// 地址: 0xebe9d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(*arg3 + 8))(arg3)
void* __offset(
    vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) arg_a0
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) arg_a8
void* __offset(
    vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x40) arg_110

if (arg2 != 1)
    if (arg8 != 0)
        char* x8_4 = arg9
        char* x0_10 = arg8
        
        if (x8_4 != arg8)
            char* x20_1 = x8_4
            
            do
                x20_1 = &x20_1[-0x18]
                
                if ((zx.d(*x20_1) & 1) != 0)
                    operator delete(*(x8_4 - 8))
                
                x8_4 = x20_1
            while (arg8 != x20_1)
            
            x0_10 = arg8
        
        arg9 = arg8
        operator delete(x0_10)
    
    arg_110 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x40
    arg_a0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x18
    arg_a8 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x10
    
    if ((zx.d(arg12) & 1) != 0)
        operator delete(arg13)
    
    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
    std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
Botan::X509_Certificate::data()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_5 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&arg_a0, 
    "Failed to decode key with oid ", 0x1e)
Botan::OID::to_string()
char arg_88
uint64_t x8_2 = zx.q(arg_88)
int32_t temp0 = x8_2.d & 1
char* x1

if (temp0 == 0)
    x1 = &arg_88 | 1
else
    x1 = arg11

uint64_t x2

if (temp0 == 0)
    x2 = x8_2 u>> 1
else
    x2 = arg10

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_5, x1, x2), 
    "\n", 1)

if ((zx.d(arg_88) & 1) != 0)
    operator delete(arg11)

__cxa_end_catch()
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()

if (arg8 != 0)
    char* x8_7 = arg9
    char* x0_18
    
    if (x8_7 == arg8)
        x0_18 = arg8
    else
        char* x20_2 = x8_7
        
        do
            x20_2 = &x20_2[-0x18]
            
            if ((zx.d(*x20_2) & 1) != 0)
                operator delete(*(x8_7 - 8))
            
            x8_7 = x20_2
        while (arg8 != x20_2)
        
        x0_18 = arg8
    
    arg9 = arg8
    operator delete(x0_18)

arg_110 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
arg_a0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
arg_a8 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(arg12) & 1) != 0)
    operator delete(arg13)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
