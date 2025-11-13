// 函数: sub_a6b4ac
// 地址: 0xa6b4ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RevealDeck(2, 0x3ee, 0x7e2790)
void var_1920
CardIDs var_c98
memcpy(&var_1920, &var_c98, 0xc84)
int32_t var_ca0

if (var_ca0 != 0)
    PauseUI(true)

FilterCost(&var_1920, 3, 6)
int32_t x0_3 = TrashOneOf(&var_1920, 0x3ee, 0x12, 7, 0)

if (x0_3 != 0)
    operator-=(&var_c98, zx.q(x0_3))

return DiscardCards(&var_c98, 0x3ee, 0xb, 7, 0)
