// 函数: _Z12CardIsShadowRK6DomGfx
// 地址: 0xaecad0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x1_2
int32_t i

for (i = *(arg1 + 0x2c); i == 3; i = *(arg1 + 0x2c))
    x1_2 = zx.q(*(arg1 + 0x30))
    
    if (x1_2.d == 0x70d)
        goto label_aecb78
    
    if (x1_2.d == 0x718)
        goto label_aecb78
    
    int32_t x10 = *(arg1 + 0x70)
    
    if (x10 == 0)
        goto label_aecb78
    
    arg1 = *(gDomClient + 0x205e0) + zx.q(x10.w) * 0x21d8

if (i == 5)
    x1_2 = zx.q(*(arg1 + 0x204))
else if (i == 1)
    x1_2 = zx.q(*(arg1 + 0x170))
else
    if (i != 0)
        pthread_kill(pthread_self(), 6)
        return GetZoomPileStyle(XNoReturn()) __tailcall
    
    x1_2 = zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(arg1 + 0x98))))

label_aecb78:
return CardIs(gDomClient + 0x20728, x1_2, 0x100000000000) __tailcall
