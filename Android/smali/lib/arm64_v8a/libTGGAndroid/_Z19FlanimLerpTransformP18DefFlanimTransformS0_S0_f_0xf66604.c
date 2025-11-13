// 函数: _Z19FlanimLerpTransformP18DefFlanimTransformS0_S0_f
// 地址: 0xf66604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1
v1.q = *arg3
int128_t v2
v2.q = *arg2
float v3 = fconvert.s(0.5f)
float v4 = fconvert.s(-0.5f)
int128_t v1_1
v1_1.d = vsub_f32(v1, v2).d f* arg4
v1_1:4.d = v1_1:4.d f* arg4
*arg1 = vadd_f32(v2, v1_1).q
int128_t v1_2
v1_2.q = *(arg3 + 8)
v2.q = *(arg2 + 8)
int128_t v1_3
v1_3.d = vsub_f32(v1_2, v2).d f* arg4
v1_3:4.d = v1_3:4.d f* arg4
*(arg1 + 8) = vadd_f32(v2, v1_3).q
int128_t v1_4
v1_4.q = *(arg3 + 0x10)
v2.q = *(arg2 + 0x10)
int128_t v1_5
v1_5.d = vsub_f32(v1_4, v2).d f* arg4
v1_5:4.d = v1_5:4.d f* arg4
*(arg1 + 0x10) = vadd_f32(v2, v1_5).q
int128_t v1_6
v1_6.q = *(arg3 + 0x18)
v2.q = *(arg2 + 0x18)
int128_t v1_7
v1_7.d = vsub_f32(v1_6, v2).d f* arg4
v1_7:4.d = v1_7:4.d f* arg4
*(arg1 + 0x18) = vadd_f32(v2, v1_7).q
int128_t v1_8
v1_8.q = *(arg3 + 0x20)
v2.q = *(arg2 + 0x20)
int128_t v1_9
v1_9.d = vsub_f32(v1_8, v2).d f* arg4
v1_9:4.d = v1_9:4.d f* arg4
*(arg1 + 0x20) = vadd_f32(v2, v1_9).q
int128_t v1_10
v1_10.q = *(arg3 + 0x28)
v2.q = *(arg2 + 0x28)
int128_t v1_11
v1_11.d = vsub_f32(v1_10, v2).d f* arg4
v1_11:4.d = v1_11:4.d f* arg4
*(arg1 + 0x28) = vadd_f32(v2, v1_11).q
int128_t v1_12
v1_12.q = *(arg3 + 0x30)
v2.q = *(arg2 + 0x30)
int128_t v1_13
v1_13.d = vsub_f32(v1_12, v2).d f* arg4
v1_13:4.d = v1_13:4.d f* arg4
*(arg1 + 0x30) = vadd_f32(v2, v1_13).q
int128_t v1_14
v1_14.q = *(arg3 + 0x38)
v2.q = *(arg2 + 0x38)
int128_t v1_15
v1_15.d = vsub_f32(v1_14, v2).d f* arg4
v1_15:4.d = v1_15:4.d f* arg4
*(arg1 + 0x38) = vadd_f32(v2, v1_15)
uint32_t x8 = zx.d(*(arg2 + 0x40))
uint32_t x10 = zx.d(*(arg2 + 0x41))
uint32_t x12 = zx.d(*(arg2 + 0x42))
double v1_16
v1_16.d = float.s(zx.d(*(arg3 + 0x40)) - x8)
uint32_t x9_2 = zx.d(*(arg2 + 0x43))
v2.d = float.s(zx.d(*(arg3 + 0x41)) - x10)
v1_16.d = v1_16.d f* arg4
float v6

v6 = v1_16.d f< 0f ? v4 : v3

v2.d = v2.d f* arg4
v1_16.d = v1_16.d f+ v6
float v5 = float.s(zx.d(*(arg3 + 0x42)) - x12) * arg4
v6 = float.s(zx.d(*(arg3 + 0x43)) - x9_2)
uint32_t temp0 = vcvts_s32_f32(v1_16.d)

if (v2.d f< 0f)
    v1_16.d = v4
else
    v1_16.d = v3

v6 = v6 * arg4
v1_16.d = v2.d f+ v1_16.d

if (v5 < 0f)
    v2.d = v4
else
    v2.d = v3

char temp0_1 = vcvts_s32_f32(v1_16.d)
v1_16.d = v5 f+ v2.d

if (v6 < 0f)
    v2.d = v4
else
    v2.d = v3

char temp0_2 = vcvts_s32_f32(v1_16.d)
v1_16.d = v6 f+ v2.d
int32_t x8_4 = (0xffffff & ((0xff00ffff
    & ((0xffff00ff & (x8 + temp0)) | zx.d(x10.b + temp0_1) << 8)) | zx.d(x12.b + temp0_2) << 0x10))
    | zx.d(x9_2.b + vcvts_s32_f32(v1_16.d)) << 0x18
*(arg1 + 0x40) = x8_4
uint32_t x8_5 = zx.d(*(arg2 + 0x44))
uint32_t x10_3 = zx.d(*(arg2 + 0x45))
uint32_t x12_2 = zx.d(*(arg2 + 0x46))
v1_16.d = float.s(zx.d(*(arg3 + 0x44)) - x8_5)
uint32_t x9_6 = zx.d(*(arg2 + 0x47))
v2.d = float.s(zx.d(*(arg3 + 0x45)) - x10_3)
v1_16.d = v1_16.d f* arg4
v2.d = v2.d f* arg4
v5 = float.s(zx.d(*(arg3 + 0x46)) - x12_2) * arg4
arg4 = float.s(zx.d(*(arg3 + 0x47)) - x9_6) * arg4

v6 = v1_16.d f< 0f ? v4 : v3

v1_16.d = v1_16.d f+ v6
uint32_t temp0_4 = vcvts_s32_f32(v1_16.d)

if (v2.d f< 0f)
    v1_16.d = v4
else
    v1_16.d = v3

v1_16.d = v2.d f+ v1_16.d
char temp0_5 = vcvts_s32_f32(v1_16.d)

if (v5 < 0f)
    v1_16.d = v4
else
    v1_16.d = v3

v1_16.d = v5 f+ v1_16.d

if (arg4 < 0f)
    v2.d = v4
else
    v2.d = v3

int32_t x8_9 = (0xffffff & ((0xff00ffff
    & ((0xffff00ff & (x8_5 + temp0_4)) | zx.d(x10_3.b + temp0_5) << 8))
    | zx.d(x12_2.b + vcvts_s32_f32(v1_16.d)) << 0x10))
    | zx.d(x9_6.b + vcvts_s32_f32(arg4 f+ v2.d)) << 0x18
*(arg1 + 0x44) = x8_9
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x50) = *(arg2 + 0x50)
