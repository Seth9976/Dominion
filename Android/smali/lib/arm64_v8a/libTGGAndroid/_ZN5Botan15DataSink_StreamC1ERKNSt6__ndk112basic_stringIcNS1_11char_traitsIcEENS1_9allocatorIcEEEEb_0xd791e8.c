// 函数: _ZN5Botan15DataSink_StreamC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb
// 地址: 0xd791e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x21 = arg2
*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(arg1 + 0x20)
__builtin_memset(arg1 + 0x38, 0, 0x11)
*arg1 = _vtable_for_Botan::DataSink_Stream + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 0x50)
void** x0_2 = operator new(0x148)
int64_t (** x25)() = x0_2
x0_2[0x16] = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char> >
    + 0x40
*x25 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char> >
    + 0x18
std::__ndk1::ios_base::init(&x0_2[0x16])
x0_2[0x27] = 0
x0_2[0x28].d = 0xffffffff
*x0_2 = _vtable_for_std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char> > + 0x18
x0_2[0x16] = _vtable_for_std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char> > + 0x40
std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::basic_filebuf()
int32_t entry_x2
int32_t x2

if ((entry_x2 & 1) != 0)
    x2 = 0x14
else
    x2 = 0x10

void* result = sub_f42b08(&x25[1], x21, x2)

if (result == 0)
    void* x0_6 = x0_2 + *(*x0_2 - 0x18)
    *(x0_6 + 0x20)
    result = std::__ndk1::ios_base::clear(x0_6.d)

*(arg1 + 0x68) = x0_2
*(arg1 + 0x70) = x0_2

if (*(x0_2 + *(*x0_2 - 0x18) + 0x20) == 0)
    return result

void** x0_7 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "DataSink_Stream: Failure opening ", x21)
void var_80
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "I/O error: ", &var_80)
*x0_7 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_7[1])
char var_68
void* var_58

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)
*x0_7 = _vtable_for_Botan::Stream_IO_Error + 0x10
__cxa_throw(x0_7, _typeinfo_for_Botan::Stream_IO_Error, Botan::Exception::~Exception)
noreturn
