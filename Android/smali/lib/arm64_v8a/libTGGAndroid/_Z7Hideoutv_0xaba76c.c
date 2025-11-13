// 函数: _Z7Hideoutv
// 地址: 0xaba76c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(2, 0)
int64_t result = TrashOne(7, 0)

if (result.d != 0)
    result = CardIs(result, 8)
    
    if ((result.d & 1) != 0)
        return GainCurse() __tailcall

return result
