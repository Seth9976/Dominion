// 函数: sub_d61f60
// 地址: 0xd61f60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *(arg2 + 0x40)

if (x0 != 0)
    int64_t x8_1 = *(arg2 + 0x50)
    *(arg2 + 0x48) = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = *arg3

if (x0_1 != 0)
    *(arg2 + 0x30) = x0_1
    operator delete(x0_1)
    
    if ((zx.d(*arg4) & 1) != 0)
    label_d61fac:
        operator delete(*(arg2 + 0x20))
        sub_1101e04(arg1)
        noreturn
else if ((zx.d(*arg4) & 1) != 0)
    goto label_d61fac

sub_1101e04(arg1)
noreturn
