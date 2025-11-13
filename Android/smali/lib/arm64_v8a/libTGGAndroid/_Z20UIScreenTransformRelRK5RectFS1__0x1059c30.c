// 函数: _Z20UIScreenTransformRelRK5RectFS1_
// 地址: 0x1059c30
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
v2_1.q = *arg2
int128_t v1_2
v1_2.q = *(arg2 + 8)
int128_t v1_3 = vsub_f32(v1_2, v2_1)
double v0_2 = vdiv_f32(v0_1, v1_3)
v2_1.d = v0_2:4.d

if (v0_2.d f> v2_1.d)
    v0_2.d = v0_2.d
else
    v0_2.d = v2_1.d

float var_40_1 = v0_2.d
v0_2.d = v1_3.d f* v0_2.d
v0_2:4.d = v1_3:4.d f* v0_2.d
RectF const& x21_1 = arg1
double var_28 = v0_2
int128_t v0_3
int128_t v1_4
float v2_2
float v3_1
arg1, v0_3, v1_4, v2_2, v3_1 = RectAlignedWithinRect(arg1, &var_28, 5)
*entry_x8 = v0_3.d
entry_x8[1] = v1_4.d
v1_4.d = v1_4.d f+ v3_1
v0_3.d = v0_3.d f+ v2_2
v2_2 = fconvert.s(0.5f)
v0_3.d = v0_3.d f* v2_2
v1_4.d = v1_4.d f* v2_2
entry_x8[2] = 0x3f800000
entry_x8[6] = v0_3.d
entry_x8[7] = v1_4.d
entry_x8[3] = var_40_1

if (var_40_1 != 0f)
    v1_4.q = *x21_1
    v0_3.q = *(x21_1 + 8)
    double v0_4 = vsub_f32(v0_3, v1_4)
    v1_4.d = fconvert.s(1f) / var_40_1
    v0_4.d = v0_4.d f* v1_4.d
    v0_4:4.d = v0_4:4.d f* v1_4.d
    var_28 = v0_4
    int32_t v1_5
    int32_t v2_3
    int32_t v3_2
    int128_t v4_1
    arg1, v0_3, v1_5, v2_3, v3_2, v4_1 = RectAlignedWithinRect(arg2, &var_28, 5)
    entry_x8[0xb] = v0_3.d
    entry_x8[0xc] = v1_5
    entry_x8[0xd] = v2_3
    entry_x8[0xe] = v3_2
    *(entry_x8 + 0x3c) = *RECT0
else
    v1_4 = *RECT0
    *(entry_x8 + 0x2c) = *RECT0
    *(entry_x8 + 0x3c) = v1_4

*(entry_x8 + 0x4c) = *arg2
