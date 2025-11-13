// 函数: _Z20UIScreenTransformRelRK5RectFS1_S1_S1_RK4Rot2f
// 地址: 0x1059ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1
v1.q = 0
v1:8.q = 0
int32_t* entry_x8
__builtin_memset(entry_x8, 0, 0x60)
v1.q = *arg1
int128_t v3
v3.q = *(arg1 + 8)
int128_t v1_1 = vsub_f32(v3, v1)
int128_t v2
v2.q = *V20
uint128_t v2_1 = vceq_f32(v1_1, v2)

if (((v2_1 & vdup_laneq_s32(v2_1, 1)).d & 1) != 0)
    return 

int128_t v1_3
v1_3.q = *arg3
v2_1.q = *(arg3 + 8)
double v1_4 = vsub_f32(v2_1, v1_3)
Rot2 const& x23_1 = arg5
RectF const& x22_1 = arg1
int64_t var_38 = (v1_4:4.d f* v1_4.d f* arg6).q
int128_t v0
int128_t v1_5
float v2_2
float v3_1
arg1, v0, v1_5, v2_2, v3_1 = RectAlignedWithinRect(arg1, &var_38, 5)
entry_x8[2] = 0x3f800000

if (not(*(x23_1 + 4) != 0f) && not(*x23_1 != 0f))
    x23_1 = R2I

int64_t x8_1 = *x23_1
float v4_1 = fconvert.s(0.5f)
*entry_x8 = v0.d
entry_x8[1] = v1_5.d
v0.d = (v0.d f+ v2_2) * v4_1
v1_5.d = (v1_5.d f+ v3_1) * v4_1
entry_x8[6] = v0.d
entry_x8[7] = v1_5.d
*(entry_x8 + 0x20) = x8_1
entry_x8[3] = arg6

if (arg6 != 0f)
    v1_5.q = *x22_1
    v0.q = *(x22_1 + 8)
    double v0_1 = vsub_f32(v0, v1_5)
    v1_5.d = fconvert.s(1f) / arg6
    v0_1.d = v0_1.d f* v1_5.d
    v0_1:4.d = v0_1:4.d f* v1_5.d
    double var_40 = v0_1
    int32_t v1_6
    int32_t v2_3
    int32_t v3_2
    arg1, v0, v1_6, v2_3, v3_2 = RectAlignedWithinRect(arg3, &var_40, 5)
    entry_x8[0xb] = v0.d
    entry_x8[0xc] = v1_6
    entry_x8[0xd] = v2_3
    entry_x8[0xe] = v3_2
    *(entry_x8 + 0x3c) = *arg2
else
    v1_5 = *RECT0
    *(entry_x8 + 0x2c) = *RECT0
    *(entry_x8 + 0x3c) = v1_5

*(entry_x8 + 0x4c) = *arg3
