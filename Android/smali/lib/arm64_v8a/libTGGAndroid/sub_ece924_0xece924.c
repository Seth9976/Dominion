// 函数: sub_ece924
// 地址: 0xece924
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_7 = *arg3

if (x8_7 != 0)
    int64_t x9_1 = *(arg2 + 0x100)
    *(arg2 + 0xf8) = x8_7
    Botan::deallocate_memory(x8_7, x9_1 - x8_7, 1)

if ((zx.d(*(arg2 + 0xa0)) & 1) == 0)
    if ((zx.d(*(arg2 + 0x88)) & 1) != 0)
        goto label_ece9dc
    
    goto label_ece9a4

operator delete(*(arg2 + 0xb0))

if ((zx.d(*(arg2 + 0x88)) & 1) != 0)
label_ece9dc:
    operator delete(*(arg2 + 0x98))
    
    if ((zx.d(*(arg2 + 0x40)) & 1) == 0)
        goto label_ece9ac
    
    goto label_ece9ec

label_ece9a4:

if ((zx.d(*(arg2 + 0x40)) & 1) == 0)
label_ece9ac:
    
    if ((zx.d(*(arg2 + 0x28)) & 1) != 0)
        goto label_ece9fc
    
    goto label_ece9b0

label_ece9ec:
operator delete(*(arg2 + 0x50))
void* x0_1

if ((zx.d(*(arg2 + 0x28)) & 1) == 0)
label_ece9b0:
    x0_1 = *arg4
    
    if (x0_1 != 0)
        *(arg2 + 0x10) = x0_1
        operator delete(x0_1)
else
label_ece9fc:
    operator delete(*(arg2 + 0x38))
    x0_1 = *arg4
    
    if (x0_1 != 0)
        *(arg2 + 0x10) = x0_1
        operator delete(x0_1)
sub_1101e04(arg1)
noreturn
