// 函数: _ZN5Botan11Cipher_Mode9providersERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xdaf574
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_87
__builtin_strncpy(&var_87, "base", 5)
int32_t var_6f
__builtin_strncpy(&var_6f, "openssl", 8)
char var_58 = 0x18
char var_88 = 8
char var_70 = 0xe
int64_t var_57
__builtin_strncpy(&var_57, "commoncrypto", 0xd)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = operator new(0x48)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0 + 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0 + 0x30)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >** 
    entry_x8
__builtin_memset(entry_x8, 0, 0x18)
Botan::Cipher_Mode::create(arg1, 0, x0)
int64_t* x22_2 = var_88.q

if (x22_2 != 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x23_1 = entry_x8[1]
    
    if (x23_1 == entry_x8[2])
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
            entry_x8)
    else
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x23_1)
        entry_x8[1] = x23_1 + 0x18
    
    (*(*x22_2 + 8))(x22_2)

Botan::Cipher_Mode::create(arg1, 0, x0 + 0x18)
int64_t* x22_3 = var_88.q

if (x22_3 != 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x23_2 = entry_x8[1]
    
    if (x23_2 == entry_x8[2])
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
            entry_x8)
    else
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x23_2)
        entry_x8[1] = x23_2 + 0x18
    
    (*(*x22_3 + 8))(x22_3)

Botan::Cipher_Mode::create(arg1, 0, x0 + 0x30)
int64_t* x22_4 = var_88.q

if (x22_4 != 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x23_3 = entry_x8[1]
    
    if (x23_3 == entry_x8[2])
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
            entry_x8)
    else
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x23_3)
        entry_x8[1] = x23_3 + 0x18
    
    (*(*x22_4 + 8))(x22_4)

if ((zx.d(*(x0 + 0x30)) & 1) != 0)
    operator delete(*(x0 + 0x40))

if ((zx.d(*(x0 + 0x18)) & 1) != 0)
    operator delete(*(x0 + 0x28))

if ((zx.d(*x0) & 1) != 0)
    operator delete(*(x0 + 0x10))

return operator delete(x0)
