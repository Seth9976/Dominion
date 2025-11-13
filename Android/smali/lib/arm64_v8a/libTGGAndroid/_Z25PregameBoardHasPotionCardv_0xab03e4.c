// 函数: _Z25PregameBoardHasPotionCardv
// 地址: 0xab03e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_98[0x1a]
int32_t x0_2 = KingdomSupplyPiles(*(PregameContextGet() + 0x20), &var_98)

if (x0_2 s< 1)
    return 0

if ((zx.d(*(DomDefGet(zx.q(var_98[0]), zx.q(*PregameContextGet())) + 0xc6)) & 1) != 0)
    return 1

uint64_t x20_2 = zx.q(x0_2)
int64_t x8_2 = 1
int64_t x22_1
uint32_t x9_1

do
    x22_1 = x8_2
    
    if (x20_2 == x8_2)
        break
    
    x9_1 = zx.d(*(DomDefGet(zx.q(var_98[x22_1]), zx.q(*PregameContextGet())) + 0xc6))
    x8_2 = x22_1 + 1
while ((x9_1 & 1) == 0)
return zx.q(x22_1 u< x20_2 ? 1 : 0)
