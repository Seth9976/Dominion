// 函数: _Z15RandomTraitPileR9RandomPCGR10DomKingdom11DomCardEnum
// 地址: 0xaa10a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_c0[0x20]
int32_t x0_1 = KingdomSupplyPiles(arg2, &var_c0)
uint64_t x21 = zx.q(x0_1)

if (x0_1 s>= 1)
    int32_t i = 0
    
    do
        int64_t i_1 = sx.q(i)
        int32_t x0_3 = PregamePileHasTrait(zx.q(var_c0[sx.q(i)]))
        int32_t x0_5
        
        if ((x0_3 & 1) == 0)
            x0_5 = Traits_SetupFilter(zx.q(arg3), zx.q(var_c0[i_1]))
        
        if ((x0_3 & 1) != 0 || (x0_5 & 1) == 0)
            x21 = sx.q(x21.d) - 1
            i -= 1
            var_c0[i_1] = var_c0[x21]
        
        i += 1
    while (i s< x21.d)

if (x21.d == 0)
    return 0

return zx.q(var_c0[sx.q(RandomInt(arg1, x21.d))])
