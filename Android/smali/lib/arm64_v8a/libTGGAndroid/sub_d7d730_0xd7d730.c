// 函数: sub_d7d730
// 地址: 0xd7d730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_2 = *arg5

if (x8_2 != 0)
    int64_t x9_1 = *(arg3 + 0x18)
    *(arg3 + 0x10) = x8_2
    Botan::deallocate_memory(x8_2, x9_1 - x8_2, 1)

operator delete(arg3)
void* x0_2 = arg2[4]
*arg2 = arg4 + 0x10

if (x0_2 != 0)
    arg2[5] = x0_2
    operator delete(x0_2)

void* x0_3 = arg2[1]

if (x0_3 != 0)
    int64_t x8_1 = arg2[3]
    arg2[2] = x0_3
    Botan::deallocate_memory(x0_3, x8_1 - x0_3, 1)

sub_1101e04(arg1)
noreturn
