// 函数: _Z11FlipAnimUVs5Vec2Iff13FlipAnimStyle
// 地址: 0x102925c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
uint32_t x20 = (arg1 u>> 0x20).d
int32_t x21 = x20 * x19
float v2 = 0f

if (not(arg3 == 0f))
    v2 = CalcFlipAnimT(zx.q(arg4), arg2, arg3)

float temp0 = vrndm_f32(v2 * float.s(x21))

if (temp0 < 0f)
    arg3 = fconvert.s(-0.5f)
else
    arg3 = fconvert.s(0.5f)

uint32_t temp0_1 = vcvts_s32_f32(temp0 + arg3)
return SpriteUVFromStrip(temp0_1 - (x21 == temp0_1 ? 1 : 0), x19, x20) __tailcall
