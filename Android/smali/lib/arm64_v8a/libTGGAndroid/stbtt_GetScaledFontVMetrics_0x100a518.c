// 函数: stbtt_GetScaledFontVMetrics
// 地址: 0x100a518
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_d0
int64_t result = stbtt_InitFont(&var_d0, arg1, zx.q(stbtt_GetFontOffsetForIndex()))
void* x8
int64_t x9
int32_t x10_4
int32_t x11_3
float v0
void* var_c8
int32_t var_ac

if (arg6 <= 0f)
    x8 = var_c8
    x9 = sx.q(var_ac)
    void* x11_4 = x8 + x9
    uint32_t x12_2 = zx.d(*(x11_4 + 4))
    uint32_t x11_5 = zx.d(*(x11_4 + 6))
    int32_t var_b4
    v0 = float.s(_byteswap(zx.d(*(x8 + sx.q(var_b4) + 0x12))) u>> 0x10)
    x11_3 = _byteswap(x12_2) u>> 0x10
    v0 = fneg(arg6) / v0
    x10_4 = _byteswap(x11_5) u>> 0x10
else
    x8 = var_c8
    x9 = sx.q(var_ac)
    void* x10 = x8 + x9
    x11_3 = sx.d((zx.d(*(x10 + 4)) << 8).w) | zx.d(*(x10 + 5))
    x10_4 = sx.d((zx.d(*(x10 + 6)) << 8).w) | zx.d(*(x10 + 7))
    v0 = arg6 / float.s(x11_3 - x10_4)
int32_t x8_4 = _byteswap(zx.d(*(x8 + x9 + 8))) s>> 0x10
*arg3 = v0 * float.s(sx.d(x11_3.w))
*arg4 = v0 * float.s(sx.d(x10_4.w))
*arg5 = v0 * float.s(x8_4)
return result
