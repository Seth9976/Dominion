// 函数: _Z18FlanimGetFrameTimeP6XAssetifP15FlanimFrameTime
// 地址: 0xf650cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = FlanimGetDef(arg1)
float v1 = 0f
void* x8_1 = *result + muls.dp.d(arg2, 0x18)
int32_t x9 = *(x8_1 + 8)
int32_t x10 = *(x8_1 + 0xc)
int32_t x8_2 = x10 - x9
float v2 = arg3 / (float.s(x8_2 + 1) / *(x8_1 + 0x10))
float temp0 = vmin_f32(v2, fconvert.s(1f))
float v0

v0 = v2 < 0f ? v1 : temp0

v0 = v0 * float.s(x8_2) + float.s(x9)
float temp0_1 = vrndm_f32(v0)
float v3

if (temp0_1 < 0f)
    v3 = fconvert.s(-0.5f)
else
    v3 = fconvert.s(0.5f)

uint32_t temp0_2 = vcvts_s32_f32(temp0_1 + v3)
uint32_t x9_1

if (x10 s> temp0_2)
    x9_1 = temp0_2 + 1
else
    x9_1 = temp0_2

if (x10 s> temp0_2)
    v0 = v0 - temp0_1
else
    v0 = v1

*arg4 = temp0_2
*(arg4 + 4) = x9_1
*(arg4 + 8) = v0
return result
