// 函数: _Z10EvalValGetI10ColorRgbaIET_12UI2StateTypeRK7EvalVal
// 地址: 0x100ed9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 7)
    if (arg1 != 8)
        return zx.q(*gRgbaIWhite)
    
    return zx.q(*(arg2 + 8))

float v1 = *(arg2 + 8)
float v4 = *(arg2 + 0xc)
float v5 = float.s(0x437f0000)
float v0 = 0f
float temp0 = vmin_f32(v1, v5)

v1 = v1 < 0f ? v0 : temp0

float v2 = fconvert.s(0.5f)
float v3 = fconvert.s(-0.5f)
float v6

v6 = v1 < 0f ? v3 : v2

v1 = v1 + v6
v6 = *(arg2 + 0x10)
int32_t v7 = *(arg2 + 0x14)
float temp0_1 = vmin_f32(v4, v5)

v4 = v4 < 0f ? v0 : temp0_1

uint32_t temp0_2 = vcvts_s32_f32(v1)

v1 = v4 < 0f ? v3 : v2

v1 = v4 + v1
float temp0_3 = vmin_f32(v6, v5)

v4 = v6 < 0f ? v0 : temp0_3

float temp0_4 = vmin_f32(v7, v5)
char temp0_5 = vcvts_s32_f32(v1)

v1 = v4 < 0f ? v3 : v2

if (not(v7 f< 0f))
    v0 = temp0_4

char temp0_6 = vcvts_s32_f32(v4 + v1)

v1 = v0 < 0f ? v3 : v2

return (0xffffff & ((0xff00ffff & ((0xffff00ff & zx.q(temp0_2)) | zx.q(zx.d(temp0_5) << 8)))
    | zx.q(zx.d(temp0_6) << 0x10))) | zx.q(zx.d(vcvts_s32_f32(v0 + v1)) << 0x18)
