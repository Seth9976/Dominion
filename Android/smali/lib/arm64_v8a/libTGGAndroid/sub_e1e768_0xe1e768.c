// 函数: sub_e1e768
// 地址: 0xe1e768
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg2[3]
*arg2 = arg3 + 0x10

if (x0 != 0)
    int64_t x8_1 = arg2[5]
    arg2[4] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

operator delete(arg2)
sub_1101e04(arg1)
noreturn
