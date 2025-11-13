// 函数: _Z20ImageSampleNearestAtRK9ImageSpec4Vec2
// 地址: 0xf99014
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v3 = fconvert.s(0.5f)
uint64_t x0 = zx.q(*(arg1 + 0x14))
float entry_v1 = entry_v1 * float.s(*(arg1 + 0xc))
float entry_v0
float temp0 = vrndm_f32(entry_v0 * float.s(*(arg1 + 8)))
float v2 = fconvert.s(-0.5f)
float temp0_1 = vrndm_f32(entry_v1)
float v4

v4 = temp0 < 0f ? v2 : v3

if (not(temp0_1 < 0f))
    v2 = v3

uint32_t temp0_2 = vcvts_s32_f32(temp0 + v4)
uint32_t temp0_3 = vcvts_s32_f32(temp0_1 + v2)
int32_t x0_1 = TextureFormatBytesPerPixel(x0)
return ImagePixelToRgba(*arg1 + sx.q(x0_1 * temp0_2) + sx.q(*(arg1 + 0x10)) * sx.q(temp0_3), 
    zx.q(*(arg1 + 0x14)))
