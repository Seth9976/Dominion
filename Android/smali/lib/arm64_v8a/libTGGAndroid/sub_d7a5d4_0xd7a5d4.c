// 函数: sub_d7a5d4
// 地址: 0xd7a5d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg2[0xb] = arg3
operator delete(arg3)
void* x0_1 = arg2[4]
*arg2 = arg4 + 0x10

if (x0_1 != 0)
    arg2[5] = x0_1
    operator delete(x0_1)

void* x0_2 = arg2[1]

if (x0_2 != 0)
    int64_t x8_1 = arg2[3]
    arg2[2] = x0_2
    Botan::deallocate_memory(x0_2, x8_1 - x0_2, 1)

sub_1101e04(arg1)
noreturn
