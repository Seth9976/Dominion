// 函数: sub_d08558
// 地址: 0xd08558
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg4) & 1) != 0)
    operator delete(arg5)

void* x0_1 = *arg2

if (x0_1 != 0)
    int64_t x8_1 = arg2[2]
    arg2[1] = x0_1
    Botan::deallocate_memory(x0_1, x8_1 - x0_1, 1)

int64_t arg_88 = arg3 + 0x10

if (arg6 != 0)
    void* arg_98 = arg6
    Botan::deallocate_memory(arg6, arg7 - arg6, 1)

sub_1101e04(arg1)
noreturn
