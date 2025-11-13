// 函数: _Z14DomEffectPeekNR9DomClientiRPK13DomEffectData
// 地址: 0xb4d8d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x20640)
int32_t x9_1 = *(arg1 + 0x20648) + arg2

if (x9_1 s< x8)
    *arg3 = *(arg1 + 0x20638) + muls.dp.d(x9_1, 0x38)

return zx.q(x9_1 s< x8 ? 1 : 0)
