// 函数: _Z10RiceBrokerv
// 地址: 0xac2c4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
int64_t result = TrashOne(7, 0)

if (result.d != 0)
    if ((CardIs(result, 2) & 1) != 0)
        Card(2, 0, 0, nullptr)
    
    result = CardIs(zx.q(result.d), 4)
    
    if ((result.d & 1) != 0)
        return Card(5, 0, 0, nullptr) __tailcall

return result
