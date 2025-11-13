// 函数: _Z9Foresightv
// 地址: 0xac4734
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28 = 0
int32_t var_ca8[0xde]
int64_t result

do
    result = RevealDeckOne(0x3ee, 0x7eae90)
    
    if (result.d == 0)
        break
    
    int32_t x20_1 = result.d
    operator+=(&var_ca8, zx.q(x20_1))
    result = CardIs(zx.q(x20_1), 4)
while ((result.d & 1) == 0)

if (var_28 != 0)
    int32_t x19_1 = var_ca8[sx.q(var_28 - 1)]
    
    if ((CardIs(zx.q(x19_1), 4) & 1) == 0)
        return DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
    
    operator-=(&var_ca8, zx.q(x19_1))
    MoveCardTo(zx.q(x19_1), 0x3ee, 0x471, 0, 0, 0xb, 0)
    result = DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
    
    if (x19_1 != 0)
        FromSingle(zx.q(x19_1))
        void var_1930
        return EndOfTurn(sub_acabf8, &var_1930, 1, 0)

return result
