// 函数: _Z20UIScreenTransformRelRK5RectFS1_S1_S1_
// 地址: 0x1059984
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
int32_t* entry_x8
__builtin_memset(entry_x8, 0, 0x60)
int128_t v1
v1.q = *arg1
v0.q = *(arg1 + 8)
int128_t v0_1 = vsub_f32(v0, v1)
int128_t v2
v2.q = *V20
uint128_t v1_1 = vceq_f32(v0_1, v2)

if (((v1_1 & vdup_laneq_s32(v1_1, 1)).d & 1) != 0)
    return 

int128_t v2_1
v2_1.q = *arg4
int128_t v1_2
v1_2.q = *(arg4 + 8)
int128_t v4
v4.q = *arg3
int128_t v3
v3.q = *(arg3 + 8)
int128_t v1_3 = vsub_f32(v1_2, v2_1)
int128_t v2_2 = vsub_f32(v3, v4)
double v3_1 = vdiv_f32(v0_1, v2_2)
int128_t v0_2 = vdiv_f32(v0_1, v1_3)
v1_3.d = v3_1:4.d

if (v3_1.d f> v1_3.d)
    v1_3.d = v3_1.d
else
    v1_3.d = v1_3.d

v3_1.d = v0_2:4.d

if (v0_2.d f< v3_1.d)
    v0_2.d = v0_2.d
else
    v0_2.d = v3_1.d

if (v1_3.d f< v0_2.d)
    v0_2.d = v1_3.d
else
    v0_2.d = v0_2.d

int128_t var_50_1 = v0_2
v0_2.d = v2_2.d f* v0_2.d
v0_2:4.d = v2_2:4.d f* v0_2.d
RectF const& x21_1 = arg1
int64_t var_28 = v0_2.q
float128 v0_3
int128_t v1_4
float v2_3
int32_t v3_2
arg1, v0_3, v1_4, v2_3, v3_2 = RectAlignedWithinRect(arg1, &var_28, 5)
float v4_1 = var_50_1.d
*entry_x8 = v0_3.d
entry_x8[1] = v1_4.d
v0_3.d = v0_3.d f+ v2_3
v2_3 = fconvert.s(0.5f)
v1_4.d = v1_4.d f+ v3_2
v0_3.d = v0_3.d f* v2_3
v1_4.d = v1_4.d f* v2_3
entry_x8[2] = 0x3f800000
entry_x8[6] = v0_3.d
entry_x8[7] = v1_4.d
entry_x8[3] = v4_1

if (v4_1 != 0f)
    v1_4.q = *x21_1
    v0_3.q = *(x21_1 + 8)
    double v0_4 = vsub_f32(v0_3, v1_4)
    v1_4.d = fconvert.s(1f) / v4_1
    v0_4.d = v0_4.d f* v1_4.d
    v0_4:4.d = v0_4:4.d f* v1_4.d
    double var_38 = v0_4
    float128 v0_5
    float128 v1_5
    int32_t v2_4
    int32_t v3_4
    arg1, v0_5, v1_5, v2_4, v3_4 = RectAlignedWithinRect(arg3, &var_38, 5)
    entry_x8[0xb] = v0_5.d
    entry_x8[0xc] = v1_5.d
    entry_x8[0xd] = v2_4
    entry_x8[0xe] = v3_4
    *(entry_x8 + 0x3c) = vdivq_f32(vsubq_f32(*arg2, *x21_1), vdupq_laneq_s32(var_50_1, 0))
else
    v1_4 = *RECT0
    *(entry_x8 + 0x2c) = *RECT0
    *(entry_x8 + 0x3c) = v1_4

*(entry_x8 + 0x4c) = *arg3
