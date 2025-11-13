// 函数: _Z27DrawParentedImageSourceRectP6XAssetRK4Mat3ffRK5RectFRK11SpriteColor
// 地址: 0xfcdaa4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t*** x8 = *arg1
float v8 = arg4
float v9 = arg3
uint128_t v2
int128_t v5
int128_t v7
uint128_t v17

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v2, v5, v7, v17 = AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

arg3 = (*arg5).d
arg4 = fconvert.s(0.5f)
v7.q = 0
int64_t* x8_3 = **x8
float128 v3 = vdupq_laneq_s32(arg3, 2)
uint128_t v4 = vdupq_laneq_s32(arg3, 3)
float v3_1 = arg4 * vsubq_f32(v3, arg3)
arg4 = arg4 f* vsubq_f32(v4, arg3):4.d
float128 v4_1
v4_1.q = *x8_3
v5.d = *(x8_3 + 0xc)
v3_1 = v3_1 + v9
arg4 = arg4 + v8
v5.d = v5.d f* x8_3[1].d
float128 v4_2
v4_2.d = vcvt_f32_u32(v4_1).d f* v5.d
v4_2:4.d = v4_2:4.d f* v5.d
v4_2:8.q = v4_2.q
float128 var_80 = vdivq_f32(arg3, v4_2)
float128 v0
v0.q = *arg2
v4_2.q = *(arg2 + 0xc)
v5.q = *(arg2 + 0x18)
v2.d = 0f
v17.d = v3_1 f* v4_2.d
int128_t v0_1 = vadd_f32(v0, vrev64_s32(vmul_f32(v0, v7, 0)))
int128_t v3_4 = vmul_f32(v4_2, v7, 0)
int128_t v7_1 = vmul_f32(v5, v7, 0)
int128_t v3_5 = vrev64_s32(v3_4)
int128_t v7_2 = vrev64_s32(v7_1)
float v16 = v17.d f+ arg4 f* v4_2:4.d
v17.d = *(arg2 + 8)
int128_t v3_6 = vadd_f32(v4_2, v3_5)
v4_2.d = *(arg2 + 0x14)
int128_t v5_1 = vadd_f32(v5, v7_2)
v7_2.d = *(arg2 + 0x20)
float v6 = v17.d f+ v3_1 f* v0.d + arg4 f* v0:4.d
v17.d = v17.d f* v2.d
v16 = v4_2.d f+ v16
v4_2.d = v4_2.d f* v2.d
v2.d = v7_2.d f* v2.d
int128_t v17_1 = vdup_laneq_s32(v17, 0)
int128_t v4_3 = vdup_laneq_s32(v4_2, 0)
int128_t v2_1 = vdup_laneq_s32(v2, 0)
double v0_2 = vadd_f32(v0_1, v17_1)
double v3_7 = vadd_f32(v3_6, v4_3)
double v2_2 = vadd_f32(v5_1, v2_1)
float var_60 = v6
float var_54 = v16
double var_68 = v0_2
double var_5c = v3_7
double var_50 = v2_2
float var_48 = v7_2.d f+ v3_1 f* v5.d + arg4 f* v5:4.d
return DrawImageMatrixParams(arg1, &var_68, &var_80, arg6, nullptr)
