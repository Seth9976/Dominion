// 函数: _Z13MiningVillagev
// 地址: 0xa83e3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(2, 0)
int64_t result = MayTrashSelf(0x3e9, true, 0x15)

if ((result.d & 1) == 0)
    return result

return MoneyPlus(2, 0, false) __tailcall
