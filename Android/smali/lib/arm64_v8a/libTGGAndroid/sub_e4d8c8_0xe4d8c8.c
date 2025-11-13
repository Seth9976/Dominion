// 函数: sub_e4d8c8
// 地址: 0xe4d8c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg8) & 1) != 0)
    operator delete(arg9)

if ((zx.d(arg6) & 1) != 0)
    operator delete(arg7)
    
    if ((arg4 & 1) != 0)
        __cxa_free_exception()
else if (arg4 != 0)
    __cxa_free_exception()

if (arg10 != 0)
    void* arg_88 = arg10
    Botan::deallocate_memory(arg10, arg11 - arg10, 1)

void* x0_3 = *arg3

if (x0_3 != 0)
    int64_t x8_3 = *(arg2 + 0x30)
    *(arg2 + 0x28) = x0_3
    Botan::deallocate_memory(x0_3, x8_3 - x0_3, 1)

void* x0_4 = *arg5

if (x0_4 != 0)
    *(arg2 + 0x10) = x0_4
    operator delete(x0_4)

sub_1101e04(arg1)
noreturn
