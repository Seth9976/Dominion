// 函数: sub_cb862c
// 地址: 0xcb862c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_3 = *arg4

if (x8_3 != 0)
    int64_t x9_1 = *(arg3 + 0x18)
    *(arg3 + 0x10) = x8_3
    Botan::deallocate_memory(x8_3, x9_1 - x8_3, 1)

operator delete(arg3)
int64_t* x0_2 = *(arg2 + 0x30)
*(arg2 + 0x30) = 0

if (x0_2 != 0)
    (*(*x0_2 + 0x38))()

void* x0_3 = *(arg2 + 0x10)

if (x0_3 != 0)
    int64_t x8_2 = *(arg2 + 0x20)
    *(arg2 + 0x18) = x0_3
    Botan::deallocate_memory(x0_3, x8_2 - x0_3, 1)

sub_1101e04(arg1)
noreturn
