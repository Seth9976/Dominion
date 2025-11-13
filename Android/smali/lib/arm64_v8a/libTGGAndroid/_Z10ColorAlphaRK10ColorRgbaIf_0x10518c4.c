// 函数: _Z10ColorAlphaRK10ColorRgbaIf
// 地址: 0x10518c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1
v1.b = *(arg1 + 3)
arg2 = float.s(v1) * arg2

if (arg2 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

return (0xffffff & ((0xff00ffff & zx.q(*arg1)) | zx.q(zx.d(*(arg1 + 2)) << 0x10)))
    | zx.q(zx.d(vcvts_s32_f32(arg2 + v1)) << 0x18)
