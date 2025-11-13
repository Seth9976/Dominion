// 函数: sub_e4d79c
// 地址: 0xe4d79c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg6) & 1) != 0)
    operator delete(arg7)

if (arg5 != 0)
    void* arg_8 = arg5
    operator delete(arg5)

if (arg8 != 0)
    void* arg_88 = arg8
    Botan::deallocate_memory(arg8, arg9 - arg8, 1)

void* x0_3 = *arg3

if (x0_3 != 0)
    int64_t x8_1 = *(arg2 + 0x30)
    *(arg2 + 0x28) = x0_3
    Botan::deallocate_memory(x0_3, x8_1 - x0_3, 1)

void* x0_4 = *arg4

if (x0_4 != 0)
    *(arg2 + 0x10) = x0_4
    operator delete(x0_4)

sub_1101e04(arg1)
noreturn
