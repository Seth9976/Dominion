// 函数: sub_e4dcac
// 地址: 0xe4dcac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg5) & 1) != 0)
    operator delete(arg6)

if ((zx.d(arg7) & 1) != 0)
    operator delete(arg8)

if (arg9 != 0)
    void* arg_a8 = arg9
    operator delete(arg9)

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
