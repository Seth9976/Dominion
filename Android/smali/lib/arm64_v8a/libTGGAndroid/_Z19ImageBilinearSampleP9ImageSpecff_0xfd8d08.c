// 函数: _Z19ImageBilinearSampleP9ImageSpecff
// 地址: 0xfd8d08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_11 = *(arg1 + 8)
int32_t x9_10 = *(arg1 + 0xc)
int128_t v2
v2.d = fconvert.s(-0.5f)
float v3 = fconvert.s(0.5f)
int32_t x11 = *(arg1 + 0x10)
arg2 = float.s(x8_11) * arg2 f+ v2.d
float temp0 = vrndm_f32(arg2)
arg3 = float.s(x9_10) * arg3 f+ v2.d
int128_t v19

if (temp0 < 0f)
    v19.d = v2.d
else
    v19.d = v3

float temp0_1 = vrndm_f32(arg3)
arg2 = arg2 - temp0
uint32_t temp0_2 = vcvts_s32_f32(temp0 f+ v19.d)

if (temp0_1 < 0f)
    v19.d = v2.d
else
    v19.d = v3

int32_t x16_1 = (x8_11 & temp0_2 s>> 0x1f) + temp0_2
uint32_t temp0_3 = vcvts_s32_f32(temp0_1 f+ v19.d)
int32_t x17

x17 = x16_1 s< x8_11 ? 0 : x8_11

uint32_t x17_1

if (x9_10 s> temp0_3)
    x17_1 = temp0_3
else
    x17_1 = x9_10 - 1

uint32_t x17_2

x17_2 = temp0_3 s< 0 ? 0 : x17_1

int64_t x10 = *arg1
int32_t x0

x0 = temp0_2 s< 0xffffffff ? x8_11 : 0

int32_t x16_3 = (x16_1 - x17) << 2
int32_t x17_3 = x17_2 * x11
int32_t x8

if (temp0_2 + x0 + 1 s< x8_11)
    x8 = 0
else
    x8 = x8_11

int32_t x9_1 = *(x10 + sx.q(x16_3 + x17_3))
uint32_t x13_1

if (x9_10 s<= temp0_3 + 1)
    x13_1 = x9_10 - 1
else
    x13_1 = temp0_3 + 1

int32_t x8_2 = (temp0_2 + x0 + 1 - x8) << 2
uint32_t x13_2

x13_2 = temp0_3 s< 0xffffffff ? 0 : x13_1

int32_t x11_1 = x13_2 * x11
int64_t v21
v21.d = float.s(x9_1 & 0xff)
int32_t x9_3 = *(x10 + sx.q(x8_2 + x17_3))
int32_t x11_2 = *(x10 + sx.q(x16_3 + x11_1))
int32_t x8_4 = *(x10 + sx.q(x8_2 + x11_1))
int128_t v4
v4.d = fconvert.s(1f)
arg3 = arg3 - temp0_1
float v20 = v4.d f- arg2
v19.d = float.s(x9_1 u>> 8 & 0xff)
v4.d = v4.d f- arg3
v19.d = v20 f* v19.d
v21:4.d = float.s(x9_1 u>> 0x18)
int128_t v5
v5.q = 0xff000000ff
float v18 = v4.d f* v19.d
v19.d = v21.d f* v20
v19:4.d = v21:4.d f* v20
v21.d = float.s(x9_3 u>> 0x18)
int64_t v24
v24.d = float.s(x9_3 & 0xff)
int64_t v25
v25.d = x8_4
v25:4.d = x8_4
int128_t v26
v26.d = float.s(x8_4)
int128_t v29
v29.d = float.s(x11_2 & 0xff)
v24:4.d = v21.d
v25.d u>>= 0x18
v25:4.d u>>= 0x18
v29:4.d = x11_2 u>> 0x18
int128_t v26_1
v26_1:4.d = v25:4.d
v25.d = v20 * float.s(x11_2 u>> 0x10 & 0xff)
v24.d = v24.d f* arg2
v24:4.d = v24:4.d f* arg2
v19.d = v19.d f* v4.d
v19:4.d = v19:4.d f* v4.d
v21.d = float.s(x8_4 u>> 8 & 0xff)
float v23 = v4.d f* arg2 * float.s(x9_3 u>> 8 & 0xff)
double v29_1 = vcvt_f32_u32(v29)
float v17 =
    v4.d f* v20 * float.s(x9_1 u>> 0x10 & 0xff) + v4.d f* arg2 * float.s(x9_3 u>> 0x10 & 0xff)
float v22 = arg3 f* v25.d
v4.d = v24.d f* v4.d
v4:4.d = v24:4.d f* v4.d
v21.d = arg2 f* v21.d
double v26_2 = vcvt_f32_u32(v26_1)
v25.d = arg3 * arg2 * float.s(x8_4 u>> 0x10 & 0xff)
int128_t v4_1 = vadd_f32(v19, v4)
v19.d = v29_1.d f* v20
v19:4.d = v29_1:4.d f* v20
v21.d = arg3 f* v21.d
v17 = v17 + v22 f+ v25.d
v19.d = v19.d f* arg3
v19:4.d = v19:4.d f* arg3
v18 = v18 + v23 + arg3 * v20 * float.s(x11_2 u>> 8 & 0xff) f+ v21.d
int128_t v1 = vadd_f32(v4_1, v19)

if (v17 < 0f)
    v4_1.d = v2.d
else
    v4_1.d = v3

int128_t v0 = vadd_f32(v1, v26_2:4.d f* v26_2.d f* arg2 * arg3 * arg3)
v1.d = v17 f+ v4_1.d

if (v18 < 0f)
    v2.d = v2.d
else
    v2.d = v3

uint64_t v3_1 = vcltz_f32(v0, 0)
int128_t v6
v6.d = 0x3f000000
v6:4.d = 0x3f000000
int128_t v7
v7.d = 0xbf000000
v7:4.d = 0xbf000000
uint32_t temp0_4 = vcvts_s32_f32(v1.d)
v1.d = v18 f+ v2.d
v2.q = v3_1
int128_t v2_1 = vbsl_s8(v2, v7, v6)
uint32_t temp0_5 = vcvts_s32_f32(v1.d)
int128_t v0_2 = vcvt_s32_f32(vadd_f32(v0, v2_1))
uint32_t x8_6

x8_6 = temp0_4 s< 0xff ? temp0_4 : 0xff

uint32_t x9_7

x9_7 = temp0_5 s< 0xff ? temp0_5 : 0xff

uint64_t v0_4 = vmax_s32(vmin_s32(v0_2, v5), zx.o(0))
uint64_t result = (0xffff00ff & zx.q((zx.d(x8_6.b) & zx.d((not.d(x8_6 s>> 0x1f)).b)) << 0x10))
    | zx.q((zx.d(x9_7.b) & zx.d((not.d(x9_7 s>> 0x1f)).b)) << 8) | zx.q(v0_4.d)
    | zx.q(v0_4:4.d << 0x18)
return result
