// 函数: _Z7Sauna22v
// 地址: 0xab19a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
GetPlayableFromHand(0x1306)
int32_t var_18

if (var_18 != 0)
    int128_t var_cd0
    __builtin_memset(&var_cd0, 0, 0x30)
    var_cd0.d = 0xff
    int128_t var_cc0
    var_cc0:0xc.d = 0
    int128_t var_cb0
    var_cb0:8.q = 0
    int64_t var_ca0_1 = 0
    void var_c98
    int64_t x0_2 = MayChooseCard(&var_c98, 1, &var_cd0, 0xb)
    
    if (x0_2.d != 0)
        PlayCard(x0_2, 0)

return ThisTurnRepeated(0xa, sub_ab1dd4, sub_ab1de0, 3, 1)
