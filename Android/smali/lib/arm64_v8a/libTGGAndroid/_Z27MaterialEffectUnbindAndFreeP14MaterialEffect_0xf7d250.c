// 函数: _Z27MaterialEffectUnbindAndFreeP14MaterialEffect
// 地址: 0xf7d250
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 s< 1)
    return 

int64_t x20_1 = 0
int64_t x21_1 = 0
int64_t x8_1

do
    int64_t* x24_1 = *(arg1 + 8) + x20_1
    
    if (x24_1[0x32b].d != 0)
        (*(**gGraphicsInterface + 0xa8))()
        x24_1[0x32b].d = 0
    
    x24_1[0x194].d = 0
    x24_1[0xcb].d = 0
    x24_1[0xca] = 0
    x24_1[1].d = 0
    *x24_1 = 0
    x8_1 = sx.q(*arg1)
    x21_1 += 1
    x20_1 += 0x1a20
while (x21_1 s< x8_1)

if (x8_1.d s<= 0)
    return 

XPooledFree(*(arg1 + 8), x8_1.d * 0x1a20)
*(arg1 + 8) = 0
*arg1 = 0
