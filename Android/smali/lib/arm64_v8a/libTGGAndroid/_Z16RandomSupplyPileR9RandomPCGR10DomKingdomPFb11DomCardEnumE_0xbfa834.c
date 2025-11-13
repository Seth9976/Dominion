// 函数: _Z16RandomSupplyPileR9RandomPCGR10DomKingdomPFb11DomCardEnumE
// 地址: 0xbfa834
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_b0[0x20]
int32_t x0_1 = KingdomSupplyPiles(arg2, &var_b0)
uint64_t x21 = zx.q(x0_1)

if (x0_1 s>= 1)
    int32_t i = 0
    
    do
        if ((arg3(zx.q(var_b0[sx.q(i)])) & 1) == 0)
            x21 = sx.q(x21.d) - 1
            int64_t i_1 = sx.q(i)
            i -= 1
            var_b0[i_1] = var_b0[x21]
        
        i += 1
    while (i s< x21.d)

if (x21.d == 0)
    return 0

return zx.q(var_b0[sx.q(RandomInt(arg1, x21.d))])
