// 函数: _Z23Tireless_OnDiscard_Test6CardID
// 地址: 0xaa3f54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if ((CardHasTrait(*(DomGetContext() + 8), zx.q(x19), 0x1149) & 1) == 0)
    return 0

if (CardWhere(zx.q(x19)) != 0x3e9)
    return zx.q(CardWhere(zx.q(x19)) == 0x451 ? 1 : 0)

return 1
