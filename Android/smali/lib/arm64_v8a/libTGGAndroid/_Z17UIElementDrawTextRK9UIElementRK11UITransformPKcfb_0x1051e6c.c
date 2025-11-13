// 函数: _Z17UIElementDrawTextRK9UIElementRK11UITransformPKcfb
// 地址: 0x1051e6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1
v1.b = *(arg1 + 0xf3)
arg4 = *(arg2 + 8)
v1 = arg4 * float.s(v1)
float v2 = fconvert.s(0.5f)
float v3 = fconvert.s(-0.5f)
float v4

v4 = v1 < 0f ? v3 : v2

int32_t var_4 = (0xffffff & ((0xff00ffff & zx.d(*(arg1 + 0xf0))) | zx.d(*(arg1 + 0xf2)) << 0x10))
    | zx.d(vcvts_s32_f32(v1 + v4)) << 0x18
v1.b = *(arg1 + 0xf7)
arg4 = arg4 * float.s(v1)

v1 = arg4 < 0f ? v3 : v2

arg4 = arg4 + v1
int32_t var_8 = (0xffffff & ((0xff00ffff & zx.d(*(arg1 + 0xf4))) | zx.d(*(arg1 + 0xf6)) << 0x10))
    | zx.d(vcvts_s32_f32(arg4)) << 0x18
return UIElementDrawText(arg1, arg2, arg3, &var_4, &var_8, arg5 & 1, arg4)
