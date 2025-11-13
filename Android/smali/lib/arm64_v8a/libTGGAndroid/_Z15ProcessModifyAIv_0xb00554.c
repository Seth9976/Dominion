// 函数: _Z15ProcessModifyAIv
// 地址: 0xb00554
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x8444c) s>= 1)
    int64_t i = 0
    int64_t (* x26_1)() = gDomClient + 0x84420
    
    do
        int32_t x22_2 = *(x26_1 - 4)
        int32_t x20_1 = *x26_1
        GameSave* x0_3 = ActiveGame()
        char* x0_5 = GameGetPlayer(x0_3 + 8, zx.q(x22_2))
        int32_t x0_6 = strlen(x0_5)
        int32_t x8_4
        
        if (x0_6 s> 0xe)
            x8_4 = x0_6 - 1
        else
            x8_4 = 0xe
        
        int64_t x8_5 = sx.q(x8_4)
        
        if (zx.d(x0_5[x8_5]) != 0x2a)
            *(x0_5 + x8_5) = 0x2a
        
        int64_t x22_1 = sx.q(x22_2)
        DomAIDisposeOne(gDomClient + x22_1 * 0x18 + 0x20698, zx.q(x22_1.d))
        DomAIInitOne(gDomClient + x22_1 * 0x18 + 0x20698, x0_3, gDomClient + 0x20728, 
            zx.q(x22_1.d), zx.q(x20_1), false)
        i += 1
        x26_1 += 8
    while (i s< sx.q(*(gDomClient + 0x8444c)))

*(gDomClient + 0x8444c) = 0
