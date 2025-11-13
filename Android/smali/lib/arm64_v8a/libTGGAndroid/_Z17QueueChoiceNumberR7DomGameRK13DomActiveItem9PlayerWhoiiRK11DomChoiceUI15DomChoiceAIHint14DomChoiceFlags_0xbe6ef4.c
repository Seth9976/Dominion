// 函数: _Z17QueueChoiceNumberR7DomGameRK13DomActiveItem9PlayerWhoiiRK11DomChoiceUI15DomChoiceAIHint14DomChoiceFlags
// 地址: 0xbe6ef4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x5 = zx.q(arg5)
uint64_t x4 = zx.q(arg4)

if (arg4 == x5.d && arg8 != 1)
    return zx.q(x4.d)

int32_t var_20 = arg8
uint64_t x3

if (*(arg1 + 0x19d4) == arg3.d)
    x3 = zx.q(*(arg1 + 0x19d8))
else
    x3 = zx.q(arg3.d)

return DomNotifyYieldNumber(arg1, arg2, arg3, x3, x4, x5, arg6, zx.q(arg7))
