// 函数: _Z7Upgradev
// 地址: 0xa84538
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
int64_t result = TrashOne(9, 0)

if (result.d == 0)
    return result

int32_t var_8 = Cost(result)
return GainExactly(zx.q(operator+(&var_8, 1)), 0)
