// 函数: _Z10FontUnloadP6XAssetPv
// 地址: 0xf6aa78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg2 + 0x38)

if (x8 == 0)
    return 

void* x0 = *x8
uint64_t x20_1 = 0

if (x0 == 0)
    goto label_f6aab4

int32_t x8_1

while (true)
    void* x21_1 = *(x0 + 8)
    XPooledFree(x0, 0x10)
    x0 = x21_1
    
    if (x21_1 == 0)
        x8 = *(arg2 + 0x38)
    label_f6aab4:
        *(x8 + (x20_1 << 3)) = 0
        x8_1 = *(arg2 + 0x40)
        
        if (x20_1.d + 1 u> x8_1)
            break
        
        x0 = *(*(arg2 + 0x38) + (zx.q(x20_1.d + 1) << 3))
        x20_1 = zx.q(x20_1.d + 1)
        
        if (x0 == 0)
            break

void* x0_1 = *(arg2 + 0x38)
*(arg2 + 0x44) = 0
XPooledFree(x0_1, (x8_1 << 3) + 8)
*(arg2 + 0x38) = 0
