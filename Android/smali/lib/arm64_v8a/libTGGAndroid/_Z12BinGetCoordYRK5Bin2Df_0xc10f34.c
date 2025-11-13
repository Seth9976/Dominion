// 函数: _Z12BinGetCoordYRK5Bin2Df
// 地址: 0xc10f34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *(arg1 + 0x2c)

if (v1 + float.s(0x3727c5ac) >= arg2)
    return 0

if (*(arg1 + 0x34) + float.s(0xb727c5ac) <= arg2)
    return zx.q(*(arg1 + 0x44) - 1)

float temp0 = vrndm_f32((arg2 - v1) / *(arg1 + 0x3c))

if (temp0 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

return zx.q(vcvts_s32_f32(temp0 + v1))
