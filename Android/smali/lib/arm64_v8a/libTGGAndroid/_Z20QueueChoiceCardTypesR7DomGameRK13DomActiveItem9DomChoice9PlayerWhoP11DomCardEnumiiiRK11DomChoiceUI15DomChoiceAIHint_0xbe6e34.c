// 函数: _Z20QueueChoiceCardTypesR7DomGameRK13DomActiveItem9DomChoice9PlayerWhoP11DomCardEnumiiiRK11DomChoiceUI15DomChoiceAIHint
// 地址: 0xbe6e34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x6 = zx.q(arg6)

if (arg6 == 0 || x6.d == arg8)
    return zx.q(x6.d)

uint64_t x4

if (*(arg1 + 0x19d4) == arg4.d)
    x4 = zx.q(*(arg1 + 0x19d8))
else
    x4 = zx.q(arg4.d)

int32_t var_30 = arg8
int32_t var_18 = 0
int32_t var_20 = arg10.d
DomChoiceUI const& var_28 = arg9
return DomNotifyYieldTypes(arg1, arg2, arg3, arg4, x4, arg5, x6, zx.q(arg7))
