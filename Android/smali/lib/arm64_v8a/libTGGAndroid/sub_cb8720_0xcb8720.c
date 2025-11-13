// 函数: sub_cb8720
// 地址: 0xcb8720
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

operator delete(arg3)
int64_t* x0_1 = *(arg2 + 0x30)
*(arg2 + 0x30) = 0

if (x0_1 != 0)
    (*(*x0_1 + 0x38))()

void* x0_2 = *(arg2 + 0x10)

if (x0_2 != 0)
    int64_t x8_2 = *(arg2 + 0x20)
    *(arg2 + 0x18) = x0_2
    Botan::deallocate_memory(x0_2, x8_2 - x0_2, 1)

sub_1101e04(arg1)
noreturn
