// 函数: sub_d86958
// 地址: 0xd86958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_5 = *arg3

if (x8_5 != 0)
    int64_t x9_1 = *(arg2 + 0x80)
    *(arg2 + 0x78) = x8_5
    Botan::deallocate_memory(x8_5, x9_1 - x8_5, 1)

void* x0_1 = *arg6

if (x0_1 != 0)
    int64_t x8 = *(arg2 + 0x68)
    *(arg2 + 0x60) = x0_1
    Botan::deallocate_memory(x0_1, x8 - x0_1, 1)

void* x0_2 = *arg5

if (x0_2 != 0)
    int64_t x8_1 = *(arg2 + 0x50)
    *(arg2 + 0x48) = x0_2
    Botan::deallocate_memory(x0_2, x8_1 - x0_2, 1)

void* x0_3 = *(arg2 + 0x28)
*(arg2 + 8) = arg4 + 0x10

if (x0_3 != 0)
    int64_t x8_3 = *(arg2 + 0x38)
    *(arg2 + 0x30) = x0_3
    Botan::deallocate_memory(x0_3, (x8_3 - x0_3) s>> 2, 4)

void* x0_4 = *(arg2 + 0x10)

if (x0_4 != 0)
    *(arg2 + 0x18) = x0_4
    operator delete(x0_4)

sub_1101e04(arg1)
noreturn
