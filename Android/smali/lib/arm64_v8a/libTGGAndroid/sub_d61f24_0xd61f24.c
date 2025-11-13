// 函数: sub_d61f24
// 地址: 0xd61f24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg5
arg5 = nullptr

if (x0 != 0)
    (*(*x0 + 0x10))()

void* x0_1 = *(arg2 + 0x40)

if (x0_1 != 0)
    int64_t x8_3 = *(arg2 + 0x50)
    *(arg2 + 0x48) = x0_1
    Botan::deallocate_memory(x0_1, x8_3 - x0_1, 1)

void* x0_2 = *arg3

if (x0_2 != 0)
    *(arg2 + 0x30) = x0_2
    operator delete(x0_2)
    
    if ((zx.d(*arg4) & 1) != 0)
    label_d61fac:
        operator delete(*(arg2 + 0x20))
        sub_1101e04(arg1)
        noreturn
else if ((zx.d(*arg4) & 1) != 0)
    goto label_d61fac

sub_1101e04(arg1)
noreturn
