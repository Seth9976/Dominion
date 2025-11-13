// 函数: sub_e4dcd4
// 地址: 0xe4dcd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 != 0)
    void* arg_a8 = arg5
    operator delete(arg5)

void* x0_1 = *arg3

if (x0_1 != 0)
    int64_t x8_1 = *(arg2 + 0x30)
    *(arg2 + 0x28) = x0_1
    Botan::deallocate_memory(x0_1, x8_1 - x0_1, 1)

void* x0_2 = *arg4

if (x0_2 != 0)
    *(arg2 + 0x10) = x0_2
    operator delete(x0_2)

sub_1101e04(arg1)
noreturn
