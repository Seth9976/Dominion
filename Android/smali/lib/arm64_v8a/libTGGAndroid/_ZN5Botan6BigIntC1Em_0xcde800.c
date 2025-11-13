// 函数: _ZN5Botan6BigIntC1Em
// 地址: 0xcde800
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg1, 0, 0x18)
*(arg1 + 0x18) = -1
*(arg1 + 0x20) = 1
int64_t entry_x1

if (entry_x1 == 0)
    return 

*(arg1 + 0x18) = -1
int64_t x8_2
int64_t x9_1

if (entry_x1.d == 0)
    x8_2 = 0
    x9_1 = 0
else
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    **arg1 = entry_x1.d
    x8_2 = *arg1
    x9_1 = *(arg1 + 8)

uint32_t x20_2 = (entry_x1 u>> 0x20).d
*(arg1 + 0x18) = -1

if ((x9_1 - x8_2) s>> 2 u> 1)
    *(*arg1 + 4) = x20_2
else if (x20_2 != 0)
    if ((*(arg1 + 0x10) - x8_2) s>> 2 u>= 2)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    else
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    
    *(*arg1 + 4) = x20_2
