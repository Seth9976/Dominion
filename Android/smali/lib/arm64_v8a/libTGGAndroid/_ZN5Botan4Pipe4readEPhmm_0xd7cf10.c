// 函数: _ZN5Botan4Pipe4readEPhmm
// 地址: 0xd7cf10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x10)
char var_38 = 8
int32_t var_37
__builtin_strncpy(&var_37, "read", 5)
int64_t entry_x3

if (entry_x3 == -2)
    entry_x3 = *(x8 + 0x30) + *(x8 + 0x28) - 1
else if (entry_x3 == -1)
    entry_x3 = *(arg1 + 0x18)

int64_t x9_3 = *(x8 + 0x30)

if (entry_x3 u>= *(x8 + 0x28) + x9_3)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_4 = __cxa_allocate_exception(0x20)
    Botan::Pipe::Invalid_Message_Number::Invalid_Message_Number(x0_4, &var_38)
    __cxa_throw(x0_4, _typeinfo_for_Botan::Pipe::Invalid_Message_Number, 
        Botan::Exception::~Exception)
    noreturn

if (entry_x3 u>= x9_3)
    int64_t x9_5 = *(x8 + 0x20) + entry_x3 - x9_3
    uint8_t* x0 = *(*(*(x8 + 8) + (x9_5 u>> 6 & 0x3fffffffffffff8)) + ((x9_5 & 0x1ff) << 3))
    
    if (x0 != 0)
        int64_t result = Botan::SecureQueue::read(x0, arg2)
        void* var_28
        
        if ((zx.d(var_38) & 1) != 0)
            operator delete(var_28)
        return result

return 0
