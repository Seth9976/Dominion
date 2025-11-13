// 函数: sub_ebe9d0
// 地址: 0xebe9d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg10) & 1) != 0)
    operator delete(arg12)

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
        char* x8_5 = arg9
        char* x0_11 = arg8
        
        if (x8_5 != arg8)
            char* x20_1 = x8_5
            
            do
                x20_1 = &x20_1[-0x18]
                
                if ((zx.d(*x20_1) & 1) != 0)
                    operator delete(*(x8_5 - 8))
                
                x8_5 = x20_1
            while (arg8 != x20_1)
            
            x0_11 = arg8
        
        arg9 = arg8
        operator delete(x0_11)
    
    arg_110 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x40
    arg_a0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x18
    arg_a8 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x10
    
    if ((zx.d(arg13) & 1) != 0)
        operator delete(arg14)
    
    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
    std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
Botan::X509_Certificate::data()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_6 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&arg_a0, 
    "Failed to decode key with oid ", 0x1e)
Botan::OID::to_string()
uint64_t x8_3 = zx.q(arg10)
int32_t temp0 = x8_3.d & 1
void* x1

if (temp0 == 0)
    x1 = &arg10 | 1
else
    x1 = arg12

uint64_t x2

if (temp0 == 0)
    x2 = x8_3 u>> 1
else
    x2 = arg11

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_6, x1, x2), 
    "\n", 1)

if ((zx.d(arg10) & 1) != 0)
    operator delete(arg12)

__cxa_end_catch()
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()

if (arg8 != 0)
    char* x8_8 = arg9
    char* x0_19
    
    if (x8_8 == arg8)
        x0_19 = arg8
    else
        char* x20_2 = x8_8
        
        do
            x20_2 = &x20_2[-0x18]
            
            if ((zx.d(*x20_2) & 1) != 0)
                operator delete(*(x8_8 - 8))
            
            x8_8 = x20_2
        while (arg8 != x20_2)
        
        x0_19 = arg8
    
    arg9 = arg8
    operator delete(x0_19)

arg_110 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
arg_a0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
arg_a8 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(arg13) & 1) != 0)
    operator delete(arg14)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
