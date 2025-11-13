// 函数: sub_d79168
// 地址: 0xd79168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg2[4]
*arg2 = arg3 + 0x10

if (x0 != 0)
    arg2[5] = x0
    operator delete(x0)

void* x0_1 = arg2[1]

if (x0_1 != 0)
    int64_t x8_1 = arg2[3]
    arg2[2] = x0_1
    Botan::deallocate_memory(x0_1, x8_1 - x0_1, 1)

sub_1101e04(arg1)
noreturn
