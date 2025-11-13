// 函数: _Z7Poacherv
// 地址: 0xa25ef8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
MoneyPlus(1, 0, false)
int64_t result = CountEmptySupplyPiles()

if (result.d == 0)
    return result

return DiscardExactly(result.d, 0xe, 7, 0, 5)
