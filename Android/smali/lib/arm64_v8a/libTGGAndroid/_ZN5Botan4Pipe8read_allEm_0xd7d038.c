// 函数: _ZN5Botan4Pipe8read_allEm
// 地址: 0xd7d038
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1

if (entry_x1 == -1)
    *(arg1 + 0x18)

size_t x0_1 = Botan::Pipe::remaining(arg1)
uint64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint64_t x23
int64_t x24

if (x0_1 == 0)
    x24 = 0
    x23 = 0
else
    if ((x0_1 & 0xffffffff80000000) != 0)
        int64_t* x0_7 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        uint64_t x8_2 = *entry_x8
        
        if (x8_2 != 0)
            int64_t x9_3 = entry_x8[2]
            entry_x8[1] = x8_2
            Botan::deallocate_memory(x8_2, x9_3 - x8_2, 1)
        
        sub_1101e04(x0_7)
        noreturn
    
    uint64_t x0_3 = Botan::allocate_memory(x0_1, 1)
    x24 = x0_3 + x0_1
    x23 = x0_3
    *entry_x8 = x0_3
    entry_x8[2] = x24
    memset(x0_3, 0, x0_1)
    entry_x8[1] = x24

int64_t result = Botan::Pipe::read(arg1, x23, x24 - x23)
uint64_t x8 = *entry_x8
int64_t x9_2 = entry_x8[1] - x8

if (result u> x9_2)
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(entry_x8)

if (result u< x9_2)
    entry_x8[1] = x8 + result

return result
