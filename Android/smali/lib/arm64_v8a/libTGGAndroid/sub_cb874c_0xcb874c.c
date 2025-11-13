// 函数: sub_cb874c
// 地址: 0xcb874c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 0x30) = 0
void* x0 = *(arg2 + 0x10)

if (x0 != 0)
    int64_t x8_1 = *(arg2 + 0x20)
    *(arg2 + 0x18) = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

sub_1101e04(arg1)
noreturn
