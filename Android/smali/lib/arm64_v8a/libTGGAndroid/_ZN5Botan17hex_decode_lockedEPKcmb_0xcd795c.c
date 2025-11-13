// 函数: _ZN5Botan17hex_decode_lockedEPKcmb
// 地址: 0xcd795c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = arg2 u>> 1
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if (x8 + 1 s< 0)
    int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x8_3 = *entry_x8
    
    if (x8_3 != 0)
        int64_t x9_3 = entry_x8[2]
        entry_x8[1] = x8_3
        Botan::deallocate_memory(x8_3, x9_3 - x8_3, 1)
    
    sub_1101e04(x0_5)
    noreturn

uint8_t* x0_1 = Botan::allocate_memory(x8 + 1, 1)
void* x25 = &x0_1[x8 + 1]
*entry_x8 = x0_1
entry_x8[2] = x25
memset(x0_1, 0, x8 + 1)
entry_x8[1] = x25
int64_t result = Botan::hex_decode(x0_1, arg1, arg2, arg3 & 1)
int64_t x8_1 = *entry_x8
int64_t x9_2 = entry_x8[1] - x8_1

if (result u> x9_2)
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(entry_x8)

if (result u< x9_2)
    entry_x8[1] = x8_1 + result

return result
