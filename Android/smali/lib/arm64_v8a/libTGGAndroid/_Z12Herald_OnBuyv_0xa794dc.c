// 函数: _Z12Herald_OnBuyv
// 地址: 0xa794dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = Overpay(false)

if (result.d s>= 1)
    int32_t i_1 = result.d
    int32_t i
    
    do
        CardsDiscard()
        int128_t var_ce0
        __builtin_memset(&var_ce0, 0, 0x30)
        var_ce0.d = 0x1e
        int128_t var_cd0_1
        var_cd0_1:0xc.d = 0
        int128_t var_cc0_1
        var_cc0_1:8.q = 0
        int64_t var_cb0_1 = 0
        void var_ca8
        result = ChooseCard(&var_ca8, 0x10, &var_ce0, 0xe, 0)
        
        if (result.d != 0)
            result = MoveToTopDeck(result, 0x3ec, 0xb)
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
