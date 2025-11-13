// 函数: sub_d63a6c
// 地址: 0xd63a6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_2 = *arg3

if (x8_2 != 0)
    int64_t x9_1 = *(arg2 + 0x20)
    *(arg2 + 0x18) = x8_2
    Botan::deallocate_memory(x8_2, x9_1 - x8_2, 1)

int64_t* x0_1 = *(arg2 + 8)
*(arg2 + 8) = 0

if (x0_1 != 0)
    (*(*x0_1 + 0x10))()

sub_1101e04(arg1)
noreturn
