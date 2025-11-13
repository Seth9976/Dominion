// 函数: sub_e4d8e0
// 地址: 0xe4d8e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg8) & 1) != 0)
    operator delete(arg9)

if ((zx.d(arg6) & 1) != 0)
    operator delete(arg7)
    
    if ((arg4 & 1) != 0)
        __cxa_free_exception()
else if (arg4 != 0)
    __cxa_free_exception()

void* x0_2 = *arg3

if (x0_2 != 0)
    int64_t x8_2 = *(arg2 + 0x30)
    *(arg2 + 0x28) = x0_2
    Botan::deallocate_memory(x0_2, x8_2 - x0_2, 1)

void* x0_3 = *arg5

if (x0_3 != 0)
    *(arg2 + 0x10) = x0_3
    operator delete(x0_3)

sub_1101e04(arg1)
noreturn
