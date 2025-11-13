// 函数: _ZmlRK10ColorRgbaIf
// 地址: 0xfcfae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1
v1.b = *arg1
float v4
v4.b = *(arg1 + 1)
float v5
v5.b = *(arg1 + 2)
float v6
v6.b = *(arg1 + 3)
v1 = float.s(v1) * arg2
float v2 = fconvert.s(0.5f)
float v3 = fconvert.s(-0.5f)
v4 = float.s(v4) * arg2
v5 = float.s(v5) * arg2
arg2 = float.s(v6) * arg2

v6 = v1 < 0f ? v3 : v2

uint32_t temp0 = vcvts_s32_f32(v1 + v6)

v1 = v4 < 0f ? v3 : v2

char temp0_1 = vcvts_s32_f32(v4 + v1)

v1 = v5 < 0f ? v3 : v2

if (arg2 < 0f)
    v2 = v3

return (0xffffff & ((0xff00ffff & ((0xffff00ff & zx.q(temp0)) | zx.q(zx.d(temp0_1) << 8)))
    | zx.q(zx.d(vcvts_s32_f32(v5 + v1)) << 0x10))) | zx.q(zx.d(vcvts_s32_f32(arg2 + v2)) << 0x18)
