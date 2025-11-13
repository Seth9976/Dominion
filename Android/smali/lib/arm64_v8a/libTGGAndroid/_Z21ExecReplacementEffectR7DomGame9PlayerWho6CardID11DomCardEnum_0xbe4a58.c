// 函数: _Z21ExecReplacementEffectR7DomGame9PlayerWho6CardID11DomCardEnum
// 地址: 0xbe4a58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg4
int32_t x19 = arg3
void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
*(x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98 - 0x60) = x21
int32_t x8_3 = *(arg1 + 0x150c)

if (x8_3 - 3 u>= 4)
    int64_t var_38_1 = 0
    int32_t var_40_1 = 0
    int32_t var_48_1 = 0
    int32_t var_50_1 = 0
    DomNotifyEffect(zx.q(x8_3 == 2 ? 1 : 0), 0x16, zx.q(arg2), zx.q(x19), 3, zx.q(x21), 0, 0)

GetReplacementFn(arg1, zx.q(x21))()
return DeferReducePlayCount(arg1, zx.q(x19)) __tailcall
