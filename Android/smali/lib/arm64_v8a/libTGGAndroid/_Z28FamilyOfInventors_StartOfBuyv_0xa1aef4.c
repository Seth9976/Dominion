// 函数: _Z28FamilyOfInventors_StartOfBuyv
// 地址: 0xa1aef4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_cb0[0x320]
int32_t x0_2 = SupplyPileTypes(*(DomGetContext() + 8), &var_cb0)
uint64_t x19 = zx.q(x0_2)

if (x0_2 s>= 1)
    int32_t i = 0
    
    do
        if ((CardIs(zx.q(var_cb0[sx.q(i)]), 8) & 1) != 0)
            x19 = sx.q(x19.d) - 1
            int64_t i_1 = sx.q(i)
            i -= 1
            var_cb0[i_1] = var_cb0[x19]
        
        i += 1
    while (i s< x19.d)

int128_t var_cf0
__builtin_memset(&var_cf0, 0, 0x30)
var_cf0.d = 0xf6
int128_t var_ce0
var_ce0:0xc.d = 0
int128_t var_cd0
var_cd0:8.q = 0
int64_t var_cc0 = 0
return MoveTokensToBoardPile(0x1000, 1, 
    zx.q(ChooseSupplyPile(&var_cb0, x19.d, &var_cf0, 0x22, false)))
