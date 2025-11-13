// 函数: _Z4Foolv
// 地址: 0xa95ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = HasState(0xd4a)

if ((result.d & 1) == 0)
    TakeState(0xd4a)
    result = RevealBoons(3)
    int32_t i
    
    while (i != 0)
        int128_t var_ce0
        __builtin_memset(&var_ce0, 0, 0x30)
        var_ce0.d = 0xa3
        int128_t var_cd0_1
        var_cd0_1:0xc.d = 0
        int128_t var_cc0_1
        var_cc0_1:8.q = 0
        int64_t var_cb0_1 = 0
        void var_ca8
        int64_t x0_1 = ChooseCard(&var_ca8, 1, &var_ce0, 0xb, 1)
        int32_t x19_1 = x0_1.d
        PlayBoon(x0_1, 1, 0)
        DiscardBoon(zx.q(x19_1), 0x3ee, 8)
        result = operator-=(&var_ca8, zx.q(x19_1))

return result
