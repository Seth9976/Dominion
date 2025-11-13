// 函数: sub_e946c4
// 地址: 0xe946c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(vtable_for_Botan::X509_DN, 0x10) arg_60 = _vtable_for_Botan::X509_DN + 0x10

if (arg6 != 0)
    void* arg_88 = arg6
    operator delete(arg6)

if (arg4 != 0)
    void* x23_1 = arg5
    void* x0_2 = arg4
    
    if (x23_1 != arg4)
        bool cond:0_1
        
        do
            uint32_t x8_1 = zx.d(*(x23_1 - 0x20))
            *(x23_1 - 0x40) = arg1 + 0x10
            
            if ((x8_1 & 1) != 0)
                operator delete(*(x23_1 - 0x10))
            
            void* x0_4 = *(x23_1 - 0x38)
            
            if (x0_4 != 0)
                *(x23_1 - 0x30) = x0_4
                operator delete(x0_4)
            
            void* x0_5 = *(x23_1 - 0x58)
            *(x23_1 - 0x60) = _vtable_for_Botan::OID + 0x10
            
            if (x0_5 != 0)
                *(x23_1 - 0x50) = x0_5
                operator delete(x0_5)
            
            cond:0_1 = arg4 == x23_1 - 0x60
            x23_1 -= 0x60
        while (not(cond:0_1))
        x0_2 = arg4
    
    arg5 = arg4
    operator delete(x0_2)

void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) arg_98 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x40) arg_a8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x68) arg_118 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) arg_b0 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(arg7) & 1) != 0)
    operator delete(arg8)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
return sub_e94824() __tailcall
