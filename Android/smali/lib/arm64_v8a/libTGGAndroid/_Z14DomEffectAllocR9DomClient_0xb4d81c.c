// 函数: _Z14DomEffectAllocR9DomClient
// 地址: 0xb4d81c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg1 + 0x20640)
int32_t x8 = *(arg1 + 0x20644)
int64_t x19

if (x21 s>= x8)
    int32_t x22_1
    
    if (x8 == 0)
        x22_1 = 0x10
    else
        x22_1 = x8 << 1
    
    int64_t x0_1 = XPooledCalloc(x22_1 * 0x38)
    int64_t x1_1 = *(arg1 + 0x20638)
    x19 = x0_1
    
    if (x1_1 != 0)
        memcpy(x19, x1_1, sx.q(x21 * 0x38))
        XPooledFree(*(arg1 + 0x20638), *(arg1 + 0x20644) * 0x38)
    
    x21 = *(arg1 + 0x20640)
    *(arg1 + 0x20638) = x19
    *(arg1 + 0x20644) = x22_1
else
    x19 = *(arg1 + 0x20638)

*(arg1 + 0x20640) = x21 + 1
return x19 + muls.dp.d(x21, 0x38)
