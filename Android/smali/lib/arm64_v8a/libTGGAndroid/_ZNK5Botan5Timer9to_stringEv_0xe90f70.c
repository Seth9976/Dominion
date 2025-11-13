// 函数: _ZNK5Botan5Timer9to_stringEv
// 地址: 0xe90f70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
uint64_t x9 = zx.q(*(entry_x0 + 0x50))
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8

if ((x9.d & 1) != 0)
    if (*(entry_x0 + 0x58) != 0)
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            entry_x8) __tailcall
else if (x9 u>> 1 != 0)
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        entry_x8) __tailcall

if (*(entry_x0 + 0x30) == 0)
    return Botan::Timer::result_string_ops() __tailcall

return Botan::Timer::result_string_bps() __tailcall
