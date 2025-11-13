// 函数: sub_a6b0d4
// 地址: 0xa6b0d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsHand()
void var_c98
FilterType(&var_c98, 4)
int64_t result = TrashOneOf(&var_c98, 0x3ea, 0x12, 9, 0)

if (result.d == 0)
    return result

int32_t var_ca0 = Cost(result)
return GainUpTo(zx.q(operator+(&var_ca0, 3)), 0x476, 0)
