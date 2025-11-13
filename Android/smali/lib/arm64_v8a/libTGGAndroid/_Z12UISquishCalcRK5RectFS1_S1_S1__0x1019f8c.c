// 函数: _Z12UISquishCalcRK5RectFS1_S1_S1_
// 地址: 0x1019f8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_40 = v11
int64_t v10
int64_t var_38 = v10
int64_t v9
int64_t var_30 = v9
int64_t v8
int64_t var_28 = v8
int128_t v0
v0.q = 0
v0:8.q = 0
int32_t* entry_x8
__builtin_memset(entry_x8, 0, 0x34)
*(entry_x8 + 4) = *arg3
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
double v2_3 = vdiv_f32(v0_1, vsub_f32(v3, v4))
v3.d = v2_3:4.d
int128_t v1_4 = vdiv_f32(v0_1, v1_3)

if (v2_3.d f> v3.d)
    v2_3.d = v2_3.d
else
    v2_3.d = v3.d

v3.d = v1_4:4.d

if (v1_4.d f< v3.d)
    v1_4.d = v1_4.d
else
    v1_4.d = v3.d

v3.d = fconvert.s(1f)

if (v2_3.d f< v1_4.d)
    v1_4.d = v2_3.d
else
    v1_4.d = v1_4.d

*entry_x8 = v1_4.d
v1_4.d = v3.d f/ v1_4.d
v0_1.d = v0_1.d f* v1_4.d
v0_1:4.d = v0_1:4.d f* v1_4.d
double var_48 = v0_1.q
int128_t v0_2
int128_t v1_5
int64_t v2_4
int64_t v3_1
v0_2, v1_5, v2_4, v3_1 = RectAlignedWithinRect(arg3, &var_48, 5)
v8 = v0_2.q
v9 = v1_5.q
v1_5.q = *arg2
v0_2.q = *(arg2 + 8)
double v0_3
v0_3.d = vsub_f32(v0_2, v1_5).d f* v1_4.d
v0_3:4.d = v0_3:4.d f* v1_4.d
var_48 = v0_3
float v0_4
float v1_6
float v2_5
float v3_2
arg1, v0_4, v1_6, v2_5, v3_2 = RectAlignedWithinRect(arg3, &var_48, 5)
float v4_1 = *arg3
float v5_1 = *(arg3 + 4)
entry_x8[5] = v8.d f- v4_1
entry_x8[6] = v9.d f- v5_1
v0_4 = v0_4 - v4_1
float v6_1 = *(arg3 + 8)
v4_1 = *(arg3 + 0xc)
entry_x8[0xa] = v1_6 - v5_1
entry_x8[0xb] = v2_5 - v6_1
entry_x8[7] = v2_4.d f- v6_1
entry_x8[8] = v3_1.d f- v4_1
entry_x8[9] = v0_4
entry_x8[0xc] = v3_2 - v4_1
