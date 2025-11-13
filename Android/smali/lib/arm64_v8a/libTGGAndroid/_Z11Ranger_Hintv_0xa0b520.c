// 函数: _Z11Ranger_Hintv
// 地址: 0xa0b520
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhere(0x3eb)
CardsWhere(0x3ec)
int32_t var_ca0
int32_t var_18

if (var_18 == 0 && var_ca0 == 0)
    return 0

return zx.q(not.d(TokenIsFaceup(0xb01))) & 1
