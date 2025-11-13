// 函数: _Z18QueueChoiceOptionsR7DomGameRK13DomActiveItem9PlayerWhoP13DomOKTypeEnumiiiRK11DomChoiceUI15DomChoiceAIHint
// 地址: 0xbe6dd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x5 = zx.q(arg5)

if (arg5 == 0 || x5.d == arg7)
    return zx.q(x5.d)

uint64_t x3

if (*(arg1 + 0x19d4) == arg3.d)
    x3 = zx.q(*(arg1 + 0x19d8))
else
    x3 = zx.q(arg3.d)

DomChoiceUI const& var_30 = arg8
int32_t var_20 = 0
int32_t var_28 = arg9.d
return DomNotifyYieldOptions(arg1, arg2, arg3, x3, arg4, x5, zx.q(arg6), zx.q(arg7))
