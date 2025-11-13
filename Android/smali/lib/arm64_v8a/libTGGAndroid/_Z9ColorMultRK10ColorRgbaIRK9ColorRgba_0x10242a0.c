// 函数: _Z9ColorMultRK10ColorRgbaIRK9ColorRgba
// 地址: 0x10242a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg2
float v1 = *(arg2 + 4)
int16_t x8

if (not(v0 <= float.s(0x3f7fbe77)))
    x8 = 0xff
else if (v0 >= float.s(0x3a83126f))
    x8 = vcvts_s32_f32(v0 * float.s(0x437f0000) + fconvert.s(0.5f))
else
    x8 = 0

v0 = *(arg2 + 8)
uint32_t x9

if (not(v1 <= float.s(0x3f7fbe77)))
    x9 = 0xff00
else if (v1 >= float.s(0x3a83126f))
    x9 = vcvts_s32_f32(v1 * float.s(0x437f0000) + fconvert.s(0.5f)) << 8
else
    x9 = 0

v1 = *(arg2 + 0xc)
uint32_t x10

if (not(v0 <= float.s(0x3f7fbe77)))
    x10 = 0xff0000
else if (v0 >= float.s(0x3a83126f))
    x10 = vcvts_s32_f32(v0 * float.s(0x437f0000) + fconvert.s(0.5f)) << 0x10
else
    x10 = 0

uint32_t x11

if (not(v1 <= float.s(0x3f7fbe77)))
    x11 = -0x1000000
else if (v1 >= float.s(0x3a83126f))
    x11 = vcvts_s32_f32(v1 * float.s(0x437f0000) + fconvert.s(0.5f)) << 0x18
else
    x11 = 0

uint64_t x8_5 = (
    zx.q((mulu.dp.d(zx.d(0x80 + (x9 u>> 8).w * zx.w(*(arg1 + 1))), 0x80808081) u>> 0x20).d << 1)
    & 0xff00) | zx.q(zx.d(0x80 + zx.w(*arg1) * x8) u/ 0xff)
int64_t result = (mulu.dp.d(zx.d(0x80 + (x10 u>> 0x10).w * zx.w(*(arg1 + 2))), 0x80808081) u>> 0x17
    & 0x1ff0000) | x8_5 | zx.q((zx.d(0x80 + zx.w(*(arg1 + 3)) * (x11 u>> 0x18).w) u/ 0xff) << 0x18)
return result
