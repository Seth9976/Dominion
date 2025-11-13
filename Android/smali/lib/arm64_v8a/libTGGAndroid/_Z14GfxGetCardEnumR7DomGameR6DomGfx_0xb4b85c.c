// 函数: _Z14GfxGetCardEnumR7DomGameR6DomGfx
// 地址: 0xb4b85c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i

for (i = *(arg2 + 0x2c); i == 3; i = *(arg2 + 0x2c))
    int32_t x8_2 = *(arg2 + 0x30)
    
    if (x8_2 == 0x70d)
        return zx.q(x8_2)
    
    if (x8_2 == 0x718)
        return zx.q(x8_2)
    
    int32_t x11_1 = *(arg2 + 0x70)
    
    if (x11_1 == 0)
        return zx.q(x8_2)
    
    arg2 = *(gDomClient + 0x205e0) + zx.q(x11_1.w) * 0x21d8

if (i == 1)
    return zx.q(*(arg2 + 0x170))

if (i == 0)
    return CardWhat(arg1, zx.q(*(arg2 + 0x98))) __tailcall

pthread_kill(pthread_self(), 6)
return ToggleWay(XNoReturn()) __tailcall
