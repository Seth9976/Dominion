// 函数: sub_ecf088
// 地址: 0xecf088
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_7 = *arg3

if (x8_7 != 0)
    int64_t x9_1 = *(arg2 + 0x100)
    *(arg2 + 0xf8) = x8_7
    Botan::deallocate_memory(x8_7, x9_1 - x8_7, 1)

if ((zx.d(*(arg2 + 0xa0)) & 1) == 0)
    if ((zx.d(*(arg2 + 0x88)) & 1) != 0)
        goto label_ecf0fc
    
    goto label_ecf0cc

operator delete(*(arg2 + 0xb0))

if ((zx.d(*(arg2 + 0x88)) & 1) != 0)
label_ecf0fc:
    operator delete(*(arg2 + 0x98))
    
    if ((zx.d(*(arg2 + 0x40)) & 1) == 0)
        goto label_ecf0d4
    
    goto label_ecf11c

label_ecf0cc:

if ((zx.d(*(arg2 + 0x40)) & 1) == 0)
label_ecf0d4:
    
    if ((zx.d(*(arg2 + 0x28)) & 1) != 0)
        goto label_ecf12c
    
    goto label_ecf0d8

label_ecf11c:
operator delete(*(arg2 + 0x50))
void* x0_6

if ((zx.d(*(arg2 + 0x28)) & 1) == 0)
label_ecf0d8:
    x0_6 = *arg4
    
    if (x0_6 == 0)
        sub_1101e04(arg1)
        noreturn
else
label_ecf12c:
    operator delete(*(arg2 + 0x38))
    x0_6 = *arg4
    
    if (x0_6 == 0)
        sub_1101e04(arg1)
        noreturn

*(arg2 + 0x10) = x0_6
operator delete(x0_6)
sub_1101e04(arg1)
noreturn
