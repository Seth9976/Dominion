// 函数: sub_d77ec4
// 地址: 0xd77ec4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *arg3

if (x8_1 != 0)
    *(arg2 + 0x28) = x8_1
    operator delete(x8_1)

void* x0_1 = *arg4

if (x0_1 != 0)
    int64_t x8 = *(arg2 + 0x18)
    *(arg2 + 0x10) = x0_1
    Botan::deallocate_memory(x0_1, x8 - x0_1, 1)

sub_1101e04(arg1)
noreturn
