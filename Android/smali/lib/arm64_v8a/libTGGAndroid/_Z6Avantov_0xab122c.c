// 函数: _Z6Avantov
// 地址: 0xab122c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(3, 0, 0, nullptr)
int64_t result = GetPlayableFromHand(0x1305)
int32_t var_18

if (var_18 != 0)
    int128_t var_cd0
    __builtin_memset(&var_cd0, 0, 0x30)
    var_cd0.d = 0x100
    int128_t var_cc0
    var_cc0:0xc.d = 0
    int128_t var_cb0
    var_cb0:8.q = 0
    int64_t var_ca0_1 = 0
    void var_c98
    result = MayChooseCard(&var_c98, 1, &var_cd0, 0xb)
    
    if (result.d != 0)
        return PlayCard(result, 0)

return result
