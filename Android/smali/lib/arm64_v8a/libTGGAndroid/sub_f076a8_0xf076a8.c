// 函数: sub_f076a8
// 地址: 0xf076a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_4 = *arg5

if (x8_4 != 0)
    int64_t x9_1 = *(arg2 + 0x70)
    *(arg2 + 0x68) = x8_4
    Botan::deallocate_memory(x8_4, (x9_1 - x8_4) s>> 2, 4)

void* x0_1 = *arg4

if (x0_1 != 0)
    int64_t x8 = *(arg2 + 0x40)
    *(arg2 + 0x38) = x0_1
    Botan::deallocate_memory(x0_1, (x8 - x0_1) s>> 2, 4)

void* x0_2 = *arg3

if (x0_2 != 0)
    int64_t x8_2 = *(arg2 + 0x18)
    *(arg2 + 0x10) = x0_2
    Botan::deallocate_memory(x0_2, (x8_2 - x0_2) s>> 2, 4)

operator delete(arg2)
sub_1101e04(arg1)
noreturn
