// 函数: sub_d7d57c
// 地址: 0xd7d57c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_2 = *arg3

if (x8_2 != 0)
    int64_t x9_1 = *(arg4 + 0x18)
    *(arg4 + 0x10) = x8_2
    Botan::deallocate_memory(x8_2, x9_1 - x8_2, 1)

operator delete(arg4)
void* x22 = arg2[4]
*arg2 = arg5 + 0x10

if (x22 != 0)
    arg2[5] = x22
    operator delete(x22)

void* x0_3 = arg2[1]

if (x0_3 != 0)
    int64_t x8_1 = arg2[3]
    arg2[2] = x0_3
    Botan::deallocate_memory(x0_3, x8_1 - x0_3, 1)

sub_1101e04(arg1)
noreturn
