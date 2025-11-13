// 函数: _Z8Interp2DI10ColorRgbaIET_S1_S1_S1_S1_RK4Vec2
// 地址: 0xfcfc44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v2
v2.q = *arg5
int128_t v4
v4.q = *V21
int128_t v3
v3.d = fconvert.s(1f)
v3:4.d = fconvert.s(1f)
int128_t v2_1 = vsub_f32(v4, v2)
v4.d = v2_1.d f* v2_1:4.d
double v3_1 = vsub_f32(v3, v2_1)
float v5 = v4.d f* float.s(arg1.d & 0xff)
float v6 = v4.d f* float.s(arg1.d u>> 8 & 0xff)
float v7 = v4.d f* float.s(arg1.d u>> 0x10 & 0xff)
v4.d = v4.d f* float.s((arg1 u>> 0x18).d & 0xff)
float v16 = v3_1.d f* v2_1:4.d
v2_1.d = v2_1.d f* v3_1:4.d
float v0 = fconvert.s(0.5f)
float v1 = fconvert.s(-0.5f)
float v17 = v16 * float.s(arg2.d & 0xff)
float v18 = v16 * float.s(arg2.d u>> 8 & 0xff)
float v19 = v16 * float.s(arg2.d u>> 0x10 & 0xff)
v16 = v16 * float.s((arg2 u>> 0x18).d & 0xff)
float v21 = v2_1.d f* float.s(arg3.d & 0xff)
float v22 = v2_1.d f* float.s(arg3.d u>> 8 & 0xff)
float v23 = v2_1.d f* float.s(arg3.d u>> 0x10 & 0xff)
v2_1.d = v2_1.d f* float.s((arg3 u>> 0x18).d & 0xff)
v3_1.d = v3_1.d f* v3_1:4.d
float v25 = v3_1.d f* float.s(arg4.d & 0xff)
float v26 = v3_1.d f* float.s(arg4.d u>> 8 & 0xff)
float v20 = v3_1.d f* float.s(arg4.d u>> 0x10 & 0xff)
v3_1.d = v3_1.d f* float.s((arg4 u>> 0x18).d & 0xff)
float v24

v24 = v5 < 0f ? v1 : v0

char temp0 = vcvts_s32_f32(v5 + v24)

v5 = v6 < 0f ? v1 : v0

char temp0_1 = vcvts_s32_f32(v6 + v5)

v5 = v7 < 0f ? v1 : v0

char temp0_2 = vcvts_s32_f32(v7 + v5)

v5 = v4.d f< 0f ? v1 : v0

v4.d = v4.d f+ v5
char temp0_3 = vcvts_s32_f32(v4.d)

if (v17 < 0f)
    v4.d = v1
else
    v4.d = v0

v4.d = v17 f+ v4.d
char temp0_4 = vcvts_s32_f32(v4.d)

if (v18 < 0f)
    v4.d = v1
else
    v4.d = v0

v4.d = v18 f+ v4.d
char temp0_5 = vcvts_s32_f32(v4.d)

if (v19 < 0f)
    v4.d = v1
else
    v4.d = v0

v4.d = v19 f+ v4.d
char temp0_6 = vcvts_s32_f32(v4.d)

if (v16 < 0f)
    v4.d = v1
else
    v4.d = v0

v4.d = v16 f+ v4.d
char temp0_7 = vcvts_s32_f32(v4.d)

if (v21 < 0f)
    v4.d = v1
else
    v4.d = v0

v4.d = v21 f+ v4.d
char temp0_8 = vcvts_s32_f32(v4.d)

if (v22 < 0f)
    v4.d = v1
else
    v4.d = v0

v4.d = v22 f+ v4.d
char temp0_9 = vcvts_s32_f32(v4.d)

if (v23 < 0f)
    v4.d = v1
else
    v4.d = v0

v4.d = v23 f+ v4.d
char temp0_10 = vcvts_s32_f32(v4.d)

if (v2_1.d f< 0f)
    v4.d = v1
else
    v4.d = v0

v2_1.d = v2_1.d f+ v4.d
char temp0_11 = vcvts_s32_f32(v2_1.d)

if (v25 < 0f)
    v2_1.d = v1
else
    v2_1.d = v0

v2_1.d = v25 f+ v2_1.d

if (v26 < 0f)
    v4.d = v1
else
    v4.d = v0

char temp0_12 = vcvts_s32_f32(v2_1.d)
v2_1.d = v26 f+ v4.d

if (v20 < 0f)
    v4.d = v1
else
    v4.d = v0

char temp0_13 = vcvts_s32_f32(v2_1.d)
v2_1.d = v20 f+ v4.d

if (v3_1.d f< 0f)
    v0 = v1

uint32_t x8_5 = zx.d(temp0) + zx.d(temp0_4) + zx.d(temp0_8) + zx.d(temp0_12)
char temp0_14 = vcvts_s32_f32(v2_1.d)
uint32_t x9_5 = zx.d(temp0_1) + zx.d(temp0_5) + zx.d(temp0_9) + zx.d(temp0_13)
char temp0_15 = vcvts_s32_f32(v3_1.d f+ v0)
uint32_t x8_6

x8_6 = x8_5 u< 0xff ? x8_5 : 0xff

uint32_t x10_5 = zx.d(temp0_2) + zx.d(temp0_6) + zx.d(temp0_10) + zx.d(temp0_14)
char x9_6

x9_6 = x9_5 u< 0xff ? x9_5.b : -1

uint32_t x11_5 = zx.d(temp0_3) + zx.d(temp0_7) + zx.d(temp0_11) + zx.d(temp0_15)
char x10_6

x10_6 = x10_5 u< 0xff ? x10_5.b : -1

char x11_6

x11_6 = x11_5 u< 0xff ? x11_5.b : -1

return (0xff00ffff & ((0xffffff & zx.q(x8_6)) | zx.q(zx.d(x11_6) << 0x18)))
    | zx.q(zx.d(x10_6) << 0x10) | zx.q(zx.d(x9_6) << 8)
