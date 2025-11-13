// 函数: _Z19FlanimCalcFrameTimeiifP15FlanimFrameTime
// 地址: 0xf6501c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg3 = float.s(arg2 - 1) * arg3 + float.s(arg1)
float temp0 = vrndm_f32(arg3)
float v2

if (temp0 < 0f)
    v2 = fconvert.s(-0.5f)
else
    v2 = fconvert.s(0.5f)

int32_t x8 = arg2 - 1 + arg1
uint32_t temp0_1 = vcvts_s32_f32(temp0 + v2)
uint32_t x8_1

if (x8 s> temp0_1)
    x8_1 = temp0_1 + 1
else
    x8_1 = temp0_1

if (x8 s> temp0_1)
    arg3 = arg3 - temp0
else
    arg3 = 0f

*arg4 = temp0_1
*(arg4 + 4) = x8_1
*(arg4 + 8) = arg3
