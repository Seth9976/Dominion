// 函数: sub_a6b1b4
// 地址: 0xa6b1b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RevealDeck(2, 0x3ee, 0x7e2790)
void var_1930
void var_ca8
memcpy(&var_1930, &var_ca8, 0xc84)
FilterCost(&var_1930, 3, 6)
PauseUI(true)
int128_t var_1970
__builtin_memset(&var_1970, 0, 0x30)
var_1970.d = 0x16
int128_t var_1960
var_1960:0xc.d = 0
int128_t var_1950
var_1950:8.q = 0
int64_t var_1940 = 0
int32_t x0_3 = ChooseCard(&var_1930, 9, &var_1970, 7, 0)

if (x0_3 != 0)
    operator-=(&var_ca8, zx.q(x0_3))
    
    if ((CardIs(zx.q(x0_3), 0x2000) & 1) != 0)
        **(arg1 + 8) = 1
    
    **(arg1 + 0x10) = 1
    NotifyResult(1)
    TrashDisplay(zx.q(x0_3), 0x3ee, 0)

return DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
