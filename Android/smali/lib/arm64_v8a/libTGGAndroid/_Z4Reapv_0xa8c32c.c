// 函数: _Z4Reapv
// 地址: 0xa8c32c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = GainCard(0x106, 0x45b, 0, 0, 4)

if (result.d != 0)
    int32_t x19_1 = result.d
    result = CardIsWhereGained(result)
    
    if ((result.d & 1) != 0)
        FromSingle(zx.q(x19_1))
        void var_ca8
        return StartOfNextTurn(sub_a940f8, nullptr, &var_ca8, 1, 2)

return result
