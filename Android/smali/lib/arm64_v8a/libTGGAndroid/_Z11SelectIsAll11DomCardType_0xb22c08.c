// 函数: _Z11SelectIsAll11DomCardType
// 地址: 0xb22c08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1

if (*(gDomClient + 0x2056c) s< 1)
    x0_1 = 1
else
    int64_t i = 0
    
    do
        x0_1 = CardIs(gDomClient + 0x20728, zx.q(*(gDomClient + (i << 2) + 0x1f8ec)), arg1)
        
        if ((x0_1 & 1) == 0)
            break
        
        i += 1
    while (i s< sx.q(*(gDomClient + 0x2056c)))

return zx.q(x0_1) & 1
