// 函数: _ZN5Botan15DataSink_Stream5writeEPKhm
// 地址: 0xd78fa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result =
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::write(*(arg1 + 0x70), arg2)
int64_t* x8 = *(arg1 + 0x70)

if (*(x8 + *(*x8 - 0x18) + 0x20) == 0)
    return result

void** x0_1 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "DataSink_Stream: Failure writing to ", &arg1[0x50])
void var_50
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "I/O error: ", &var_50)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0_1 = _vtable_for_Botan::Stream_IO_Error + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Stream_IO_Error, Botan::Exception::~Exception)
noreturn
