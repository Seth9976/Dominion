// 函数: _Z19PregameBoardHasType11DomCardType
// 地址: 0xab0490
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
int32_t var_98[0x1a]
int32_t x0_2 = KingdomSupplyPiles(*(PregameContextGet() + 0x20), &var_98)

if (x0_2 s< 1)
    return 0

if ((PregameCardIs(zx.q(var_98[0]), x19) & 1) != 0)
    return 1

uint64_t x20_2 = zx.q(x0_2)
int64_t x8_1 = 1
int64_t x22_1
int32_t x0_7

do
    x22_1 = x8_1
    
    if (x20_2 == x8_1)
        break
    
    x0_7 = PregameCardIs(zx.q(var_98[x22_1]), x19)
    x8_1 = x22_1 + 1
while ((x0_7 & 1) == 0)
return zx.q(x22_1 u< x20_2 ? 1 : 0)
