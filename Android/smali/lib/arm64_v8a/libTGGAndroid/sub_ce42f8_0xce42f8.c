// 函数: sub_ce42f8
// 地址: 0xce42f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg3

if (x8 != 0)
    int64_t x9_1 = *(arg2 + 0x20)
    *(arg2 + 0x18) = x8
    Botan::deallocate_memory(x8, x9_1 - x8, 1)

operator delete(arg2)
sub_1101e04(arg1)
noreturn
