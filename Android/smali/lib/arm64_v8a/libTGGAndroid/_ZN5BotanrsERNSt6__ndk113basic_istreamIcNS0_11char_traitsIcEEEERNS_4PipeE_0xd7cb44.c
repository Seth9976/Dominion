// 函数: _ZN5BotanrsERNSt6__ndk113basic_istreamIcNS0_11char_traitsIcEEEERNS_4PipeE
// 地址: 0xd7cb44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Botan::allocate_memory(0x400, 1)
memset(x0, 0, 0x400)
int32_t x8_3

while (true)
    x8_3 = *(arg1 + 0x20 + *(*arg1 - 0x18))
    
    if (x8_3 != 0)
        break
    
    std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::read(arg1, x0)
    *(arg1 + 8)
    Botan::Pipe::write(arg2, x0)

if ((x8_3 & 1) == 0 && ((x8_3 & 5) == 0 || (x8_3 & 2) != 0))
    if (x0 != 0)
        Botan::deallocate_memory(x0, 0x400, 1)
    
    return arg1

void** x0_5 = __cxa_allocate_exception(0x20)
int64_t x0_6
int128_t v0
x0_6, v0 = operator new(0x30)
int64_t var_50 = x0_6
int128_t var_60 = data_71cbb0
__builtin_strncpy(x0_6, "Pipe input operator (iostream) has failed", 0x2a)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "I/O error: ", &var_60)
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
char var_48
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)
*x0_5 = _vtable_for_Botan::Stream_IO_Error + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Stream_IO_Error, Botan::Exception::~Exception)
noreturn
