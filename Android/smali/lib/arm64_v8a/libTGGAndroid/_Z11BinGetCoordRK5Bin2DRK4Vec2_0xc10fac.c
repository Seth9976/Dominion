// 函数: _Z11BinGetCoordRK5Bin2DRK4Vec2
// 地址: 0xc10fac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *(arg1 + 0x28)
float v1 = *arg2
uint32_t x8

if (v0 + float.s(0x3727c5ac) >= v1)
    x8 = 0
else if (*(arg1 + 0x30) + float.s(0xb727c5ac) <= v1)
    x8 = *(arg1 + 0x40) - 1
else
    float temp0_1 = vrndm_f32((v1 - v0) / *(arg1 + 0x38))
    
    if (temp0_1 < 0f)
        v1 = fconvert.s(-0.5f)
    else
        v1 = fconvert.s(0.5f)
    
    x8 = vcvts_s32_f32(temp0_1 + v1)

v0 = *(arg1 + 0x2c)
v1 = *(arg2 + 4)

if (v0 + float.s(0x3727c5ac) >= v1)
    return zx.q(x8)

if (*(arg1 + 0x34) + float.s(0xb727c5ac) <= v1)
    return zx.q(x8) | zx.q(*(arg1 + 0x44) - 1) << 0x20

float temp0_3 = vrndm_f32((v1 - v0) / *(arg1 + 0x3c))

if (temp0_3 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

return zx.q(x8) | zx.q(vcvts_s32_f32(temp0_3 + v1)) << 0x20
