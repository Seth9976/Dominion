// 函数: _ZNSt6__ndk16vectorIhN5Botan16secure_allocatorIhEEEC2ERKS4_
// 地址: 0xd5f0f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t x22 = x8 - x9

if (x8 == x9)
    return 

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const& x19_1 = arg1

if ((x22 & 0xffffffff80000000) != 0)
    int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x8_3 = *x19_1
    
    if (x8_3 != 0)
        int64_t x9_1 = *(x19_1 + 0x10)
        *(x19_1 + 8) = x8_3
        Botan::deallocate_memory(x8_3, x9_1 - x8_3, 1)
    
    sub_1101e04(x0_3)
    noreturn

arg1 = Botan::allocate_memory(x22, 1)
*x19_1 = arg1
*(x19_1 + 8) = arg1
*(x19_1 + 0x10) = arg1 + x22
int64_t x1 = *entry_x1
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const& x21_1 = arg1
size_t x20_2 = entry_x1[1] - x1

if (x20_2 s>= 1)
    memcpy(x21_1, x1, x20_2)
    x21_1 += x20_2

*(x19_1 + 8) = x21_1
