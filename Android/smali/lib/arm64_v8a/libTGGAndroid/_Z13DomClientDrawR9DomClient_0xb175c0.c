// 函数: _Z13DomClientDrawR9DomClient
// 地址: 0xb175c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*doGfx) == 0)
    return 

if (zx.d(*(arg1 + 0x205d8)) != 0)
    uint64_t x0 = zx.q(*(gDomClient + 0x84370))
    DomGame* entry_x1
    
    if (x0.d != 0)
        entry_x1 = UI2Draw(x0)
    
    DomGfxDraw(arg1, entry_x1)

if (zx.d(*gKV) != 0 && *(gKV + 0x3a20) s>= 1)
    int64_t i = 0
    int64_t (* x22_1)() = gKV + 0x24
    
    do
        uint64_t x0_2 = zx.q(*x22_1)
        x22_1 += 0x74
        UI2Draw(x0_2)
        i += 1
    while (i s< sx.q(*(gKV + 0x3a20)))

CardsetDraw(*(gDomClient + 0x82e28))
CardsetDraw(*(gDomClient + 0x82e30))
return CampaignMissionsDraw() __tailcall
