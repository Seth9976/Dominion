// 函数: _Z4Cityv
// 地址: 0xab416c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(2, 0)
int64_t result = CountEmptySupplyPiles()

if (result.d s>= 1)
    int32_t x19_1 = result.d
    NotifyResult(1)
    result = Card(1, 0, 0, nullptr)
    
    if (x19_1 != 1)
        Buy(1, 0)
        return MoneyPlus(1, 0, false) __tailcall

return result
