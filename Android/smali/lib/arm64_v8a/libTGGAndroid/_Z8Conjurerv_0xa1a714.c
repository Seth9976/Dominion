// 函数: _Z8Conjurerv
// 地址: 0xa1a714
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GainUpTo(4, 0x476, 0)
int64_t result = CardIsWhere(ThisCard(false, nullptr), 0x3e9)

if ((result.d & 1) == 0)
    return result

int32_t var_c98 = 0
return StartOfNextTurn(sub_a23d08, nullptr, &var_c98, 1, 2)
