// 函数: _Z12LandingPartyv
// 地址: 0xaa1f80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(2, 0, 0, nullptr)
Action(2, 0)
int64_t result = CardWhere(ThisCard(false, nullptr))

if (result.d != 0x451 && result.d != 0x3e9)
    return result

int32_t var_c98 = 0
return NextTime(0xa, sub_aad5a4, sub_aad5c4, &var_c98, 1, 2)
