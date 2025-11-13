// 函数: sub_101458c
// 地址: 0x101458c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg3

if (x8 == 0)
    sub_1101e04(arg1)
    noreturn

int32_t x22 = 0
void* x23 = *x8

if (x23 == 0)
    goto label_10145c4

int32_t x8_1

while (true)
    void* x0_1 = x23
    x23 = *(x23 + 0x10)
    XPooledFree(x0_1, 0x18)
    
    if (x23 == 0)
        x8 = *arg3
    label_10145c4:
        uint64_t x9_1 = zx.q(x22)
        *(x8 + (x9_1 << 3)) = 0
        x8_1 = *(arg2 + 0x18)
        x22 = x9_1.d + 1
        
        if (x22 u> x8_1)
            break
        
        x23 = *(*arg3 + (zx.q(x22) << 3))
        
        if (x23 == 0)
            break

void* x0_2 = *(arg2 + 0x10)
*(arg2 + 0x1c) = 0
XPooledFree(x0_2, (x8_1 << 3) + 8)
*arg3 = 0
sub_1101e04(arg1)
noreturn
