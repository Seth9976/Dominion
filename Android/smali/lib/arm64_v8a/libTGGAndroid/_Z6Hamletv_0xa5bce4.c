// 函数: _Z6Hamletv
// 地址: 0xa5bce4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)

if (MayDiscardOne(0x4d, 0) != 0)
    Action(1, 0)

int64_t result = MayDiscardOne(0x4e, 2)

if (result.d == 0)
    return result

return Buy(1, 0) __tailcall
