// 函数: _ZNK5Botan15AlternativeName2dnEv
// 地址: 0xe937d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_170 = 4
int16_t var_16f = 0x4e44
void** entry_x8
*entry_x8 = _vtable_for_Botan::X509_DN + 0x10
*(entry_x8 + 8) = zx.o(0)
char var_16d = 0
__builtin_memset(&entry_x8[3], 0, 0x20)
int128_t* var_178 = &entry_x8[1]
void* entry_x0
int64_t* result
int64_t x1
result, x1 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__equal_range_multi<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    entry_x0 + 8)
int64_t* x23 = result
void* var_160

if ((zx.d(var_170) & 1) != 0)
    result = operator delete(var_160)

while (x23 != x1)
    int64_t (* var_f8)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x40
    var_170.q = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x18
    int64_t var_168_1 = 0
    std::__ndk1::ios_base::init(&var_f8)
    int32_t var_68_1 = 0xffffffff
    int64_t var_70_1 = 0
    var_170.q = _vtable_for_std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x18
    var_f8 = _vtable_for_std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x40
    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
    var_160 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x10
    char var_120_1 = (zx.o(0)).b
    int64_t var_110_1 = (zx.o(0)).q
    int32_t var_100_1 = 8
    std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str(
        &var_160)
    Botan::operator>>(&var_170, entry_x8)
    var_f8 = _vtable_for_std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x40
    var_170.q = _vtable_for_std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x18
    var_160 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 0x10
    
    if ((zx.d(var_120_1) & 1) != 0)
        operator delete(var_110_1)
    
    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
    std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream()
    result = std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
    int64_t* i_1 = x23[1]
    
    if (i_1 == 0)
        void* x8_6 = &x23[2]
        int64_t* x9_6 = *x8_6
        
        if (*x9_6 == x23)
            x23 = x9_6
        else
            void* i
            
            do
                i = *x8_6
                x8_6 = i + 0x10
                x23 = *x8_6
            while (*x23 != i)
    else
        do
            x23 = i_1
            i_1 = *i_1
        while (i_1 != 0)

return result
