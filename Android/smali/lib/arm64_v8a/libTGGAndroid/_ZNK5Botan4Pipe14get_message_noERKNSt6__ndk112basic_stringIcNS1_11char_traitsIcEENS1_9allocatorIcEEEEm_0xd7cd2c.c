// 函数: _ZNK5Botan4Pipe14get_message_noERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEm
// 地址: 0xd7cd2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_result

if (entry_result == -2)
    void* x8_1 = *(arg1 + 0x10)
    entry_result = *(x8_1 + 0x30) + *(x8_1 + 0x28) - 1
else if (entry_result == -1)
    entry_result = *(arg1 + 0x18)

void* x8_4 = *(arg1 + 0x10)

if (entry_result u< *(x8_4 + 0x28) + *(x8_4 + 0x30))
    return entry_result

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_1 = __cxa_allocate_exception(0x20)
Botan::Pipe::Invalid_Message_Number::Invalid_Message_Number(x0_1, arg2)
__cxa_throw(x0_1, _typeinfo_for_Botan::Pipe::Invalid_Message_Number, Botan::Exception::~Exception)
noreturn
