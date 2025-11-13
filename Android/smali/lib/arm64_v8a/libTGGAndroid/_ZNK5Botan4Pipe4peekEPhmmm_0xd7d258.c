// 函数: _ZNK5Botan4Pipe4peekEPhmmm
// 地址: 0xd7d258
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x0 = *(arg1 + 0x10)
char var_38 = 8
int32_t var_37
__builtin_strncpy(&var_37, "peek", 5)
int64_t entry_x4

if (entry_x4 == -2)
    entry_x4 = *(x0 + 0x30) + *(x0 + 0x28) - 1
else if (entry_x4 == -1)
    entry_x4 = *(arg1 + 0x18)

if (entry_x4 u>= *(x0 + 0x28) + *(x0 + 0x30))
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_3 = __cxa_allocate_exception(0x20)
    Botan::Pipe::Invalid_Message_Number::Invalid_Message_Number(x0_3, &var_38)
    __cxa_throw(x0_3, _typeinfo_for_Botan::Pipe::Invalid_Message_Number, 
        Botan::Exception::~Exception)
    noreturn

int64_t result = Botan::Output_Buffers::peek(x0, arg2, arg3, arg4)
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
return result
