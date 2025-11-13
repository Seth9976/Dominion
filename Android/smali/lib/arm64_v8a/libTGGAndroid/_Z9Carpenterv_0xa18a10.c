// 函数: _Z9Carpenterv
// 地址: 0xa18a10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (CountEmptySupplyPiles() == 0)
    Action(1, 0)
    return GainUpTo(4, 0x476, 0) __tailcall

int64_t result = TrashOne(9, 0)

if (result.d == 0)
    return result

int32_t var_8 = Cost(result)
return GainUpTo(zx.q(operator+(&var_8, 2)), 0x476, 0)
