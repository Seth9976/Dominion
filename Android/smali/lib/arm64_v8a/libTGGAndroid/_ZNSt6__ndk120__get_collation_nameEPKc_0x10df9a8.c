// 函数: _ZNSt6__ndk120__get_collation_nameEPKc
// 地址: 0x10df9a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** const x21 = &data_11845a8
int64_t result

for (uint64_t i = 0x6f; i != 0; )
    uint64_t i_1 = i u>> 1
    void* x24_1 = &x21[i_1 * 2]
    result = strcmp(*x24_1, arg1)
    
    if (result.d s< 0)
        i += not.q(i_1)
    else
        i = i_1
    
    if (result.d s< 0)
        x21 = x24_1 + 0x10

int64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if (x21 != &data_1184c98)
    result = strcmp(arg1, *x21)
    
    if (result.d == 0)
        x21[1].b
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
            entry_x8.b)

return result
