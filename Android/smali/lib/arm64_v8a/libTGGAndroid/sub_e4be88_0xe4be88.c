// 函数: sub_e4be88
// 地址: 0xe4be88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__cxa_free_exception()

if (arg5 != 0)
    void* arg_38 = arg5
    operator delete(arg5)

if (arg6 != 0)
    void* arg_158 = arg6
    Botan::deallocate_memory(arg6, arg7 - arg6, 1)

void* x0_2 = *arg4

if (x0_2 != 0)
    int64_t x8_3 = *(arg2 + 0x30)
    *(arg2 + 0x28) = x0_2
    Botan::deallocate_memory(x0_2, x8_3 - x0_2, 1)

void* x0_3 = *arg3

if (x0_3 != 0)
    *(arg2 + 0x10) = x0_3
    operator delete(x0_3)

sub_1101e04(arg1)
noreturn
