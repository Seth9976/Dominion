// 函数: _Z30IsCardInNeedsCoffersNoAutoplayRK8DomYield6CardID
// 地址: 0xb2201c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(gDomClient + 0x22134)) != 0)
    return 0

uint64_t x8_1 = zx.q(*(arg1 + 0x28))

if (x8_1.d s< 1)
    return 0

int32_t* x10 = *(arg1 + 0x18)
int32_t x9 = *x10
int32_t x8_2

if (arg2 != zx.d(x9.w))
    int64_t x11_1 = 1
    
    do
        if (x8_1 == x11_1)
            return zx.q(x11_1 u< x8_1 ? 1 : 0) & zx.q(x9)
        
        x9 = x10[x11_1]
        x11_1 += 1
    while (arg2 != zx.d(x9.w))
    
    x8_2 = x11_1 - 1 u< x8_1 ? 1 : 0
else
    x8_2 = 1

return zx.q(x8_2) & zx.q((x9 & 0x50000) != 0 ? 1 : 0)
