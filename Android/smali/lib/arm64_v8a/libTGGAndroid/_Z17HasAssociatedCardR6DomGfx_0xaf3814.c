// 函数: _Z17HasAssociatedCardR6DomGfx
// 地址: 0xaf3814
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2c) != 0)
    return 0

if ((CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), 0x4000000) & 1) == 0)
    return CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), 0x40000000) __tailcall

return 1
