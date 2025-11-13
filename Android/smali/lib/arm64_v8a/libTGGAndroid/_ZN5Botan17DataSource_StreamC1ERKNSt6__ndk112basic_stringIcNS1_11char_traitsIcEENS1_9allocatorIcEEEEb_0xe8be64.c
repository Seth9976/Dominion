// 函数: _ZN5Botan17DataSource_StreamC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb
// 地址: 0xe8be64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::DataSource_Stream + 0x10
char* x22 = arg2
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)
int64_t (** x0_1)() = operator new(0x150)
void** x21 = x0_1
x0_1[0x17] = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ifstream<char, std::__ndk1::char_traits<char> >
    + 0x40
*x0_1 = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ifstream<char, std::__ndk1::char_traits<char> >
    + 0x18
x0_1[1] = 0
std::__ndk1::ios_base::init(&x0_1[0x17])
x21[0x28] = 0
x21[0x29].d = 0xffffffff
*x21 = _vtable_for_std::__ndk1::basic_ifstream<char, std::__ndk1::char_traits<char> > + 0x18
x21[0x17] = _vtable_for_std::__ndk1::basic_ifstream<char, std::__ndk1::char_traits<char> > + 0x40
std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::basic_filebuf()
int32_t entry_x2
int32_t x2

if ((entry_x2 & 1) != 0)
    x2 = 0xc
else
    x2 = 8

void* result = sub_f42b08(&x0_1[2], x22, x2)

if (result == 0)
    void* x0_5 = x21 + *(*x21 - 0x18)
    *(x0_5 + 0x20)
    result = std::__ndk1::ios_base::clear(x0_5.d)

*(arg1 + 0x20) = x21
*(arg1 + 0x28) = x21
*(arg1 + 0x30) = 0

if (*(x21 + *(*x21 - 0x18) + 0x20) == 0)
    return result

void** x0_6 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "DataSource: Failure opening file ", x22)
void var_70
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "I/O error: ", &var_70)
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
char var_58
void* var_48

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)
*x0_6 = _vtable_for_Botan::Stream_IO_Error + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::Stream_IO_Error, Botan::Exception::~Exception)
noreturn
