// 函数: sub_d76560
// 地址: 0xd76560
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg5) & 1) != 0)
    operator delete(arg6)

void* x0_1 = *arg3

if (x0_1 != 0)
    int64_t x8 = arg2[0xc]
    arg2[0xb] = x0_1
    Botan::deallocate_memory(x0_1, x8 - x0_1, 1)

void* x0_2 = arg2[4]
*arg2 = arg4 + 0x10

if (x0_2 != 0)
    arg2[5] = x0_2
    operator delete(x0_2)

void* x0_3 = arg2[1]

if (x0_3 != 0)
    int64_t x8_2 = arg2[3]
    arg2[2] = x0_3
    Botan::deallocate_memory(x0_3, x8_2 - x0_3, 1)

sub_1101e04(arg1)
noreturn
