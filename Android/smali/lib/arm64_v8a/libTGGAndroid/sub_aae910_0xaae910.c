// 函数: sub_aae910
// 地址: 0xaae910
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Trigger_AssociatedCardsList()
int32_t i

while (i != 0)
    int128_t var_ce0
    __builtin_memset(&var_ce0, 0, 0x30)
    var_ce0.d = 0x124
    int128_t var_cd0_1
    var_cd0_1:0xc.d = 0
    int128_t var_cc0_1
    var_cc0_1:8.q = 0
    int64_t var_cb0_1 = 0
    void var_ca8
    int64_t x0_2 = ChooseCard(&var_ca8, 1, &var_ce0, 0xb, 0)
    PlayCard(x0_2, 0)
    operator-=(&var_ca8, zx.q(x0_2.d))
