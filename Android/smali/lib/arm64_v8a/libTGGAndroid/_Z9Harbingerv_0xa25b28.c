// 函数: _Z9Harbingerv
// 地址: 0xa25b28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
LookThroughDiscard()
int64_t result = CardsDiscard()
int32_t var_28

if (var_28 != 0)
    int128_t var_ce0
    __builtin_memset(&var_ce0, 0, 0x30)
    var_ce0.d = 0x1e
    int128_t var_cd0
    var_cd0:0xc.d = 0
    int128_t var_cc0
    var_cc0:8.q = 0
    int64_t var_cb0_1 = 0
    void var_ca8
    result = MayChooseCard(&var_ca8, 0x10, &var_ce0, 0xe)
    
    if (result.d != 0)
        MoveToTopDeck(result, 0x3ec, 0xb)
        return TriggerEvent(0x1c, zx.q(result.d), 0)

return result
