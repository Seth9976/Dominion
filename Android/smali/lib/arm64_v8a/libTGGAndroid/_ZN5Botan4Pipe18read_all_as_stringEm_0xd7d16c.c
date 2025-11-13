// 函数: _ZN5Botan4Pipe18read_all_as_stringEm
// 地址: 0xd7d16c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1

if (entry_x1 == -1)
    *(arg1 + 0x18)

uint64_t x0 = Botan::allocate_memory(0x400, 1)
memset(x0, 0, 0x400)
char* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
Botan::Pipe::remaining(arg1)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::reserve(
    entry_x8)
int64_t result

while (true)
    result = Botan::Pipe::read(arg1, x0, 0x400)
    
    if (result == 0)
        break
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        entry_x8, x0)

if (x0 == 0)
    return result

return Botan::deallocate_memory(x0, 0x400, 1)
