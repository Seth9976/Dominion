// 函数: _Z11Wheelwrightv
// 地址: 0xa7dcc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
int64_t result = MayDiscardOne(0x108, 0)

if (result.d == 0)
    return result

return GainUpToType(zx.q(Cost(result)), 4, 0x109, 0x476, 1, 0xc) __tailcall
