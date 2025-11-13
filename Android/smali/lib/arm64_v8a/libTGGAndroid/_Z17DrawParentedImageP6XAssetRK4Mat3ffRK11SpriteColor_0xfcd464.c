// 函数: _Z17DrawParentedImageP6XAssetRK4Mat3ffRK11SpriteColor
// 地址: 0xfcd464
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float*** x8 = *arg1
float v8 = arg4
float v9 = arg3
uint128_t v2
int128_t v3
uint128_t v5
int128_t v7
int128_t v17
uint128_t v20

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v2, v3, v5, v7, v17, v20 = AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

v3.q = 0
float* x8_3 = **x8
arg4 = fconvert.s(0.5f)
v2.d = 0f
float v4 = *x8_3
v5.d = x8_3[1]
v7.d = x8_3[2]
float v6 = x8_3[3]
int128_t var_70 = (data_71ae80).d.o
arg3 = (*arg2).d
float v16 = *(arg2 + 8)
v17.q = *(arg2 + 0xc)
v6 = v6 f* v7.d
v7.q = *(arg2 + 0x18)
v5.d = float.s(v5.d)
int32_t v18 = *(arg2 + 0x14)
v4 = v6 * float.s(v4)
v5.d = v6 f* v5.d
v6 = *(arg2 + 0x20)
v4 = v4 * arg4
arg4 = v5.d f* arg4
v5.d = v16 f* v2.d
int128_t v19_1 = vrev64_s32(vmul_f32(arg3, v3, 0))
int128_t v5_1 = vdup_laneq_s32(v5, 0)
double v5_2 = vadd_f32(vadd_f32(arg3, v19_1), v5_1)
int128_t v19_3 = vmul_f32(v17, v3, 0)
int128_t v3_1 = vmul_f32(v7, v3, 0)
v20.d = v18 f* v2.d
v2.d = v6 f* v2.d
int128_t v19_4 = vrev64_s32(v19_3)
int128_t v3_2 = vrev64_s32(v3_1)
v4 = v4 + v9
arg4 = arg4 + v8
int128_t v20_1 = vdup_laneq_s32(v20, 0)
int128_t v2_1 = vdup_laneq_s32(v2, 0)
int128_t v19_5 = vadd_f32(v17, v19_4)
int128_t v3_3 = vadd_f32(v7, v3_2)
double v19_6 = vadd_f32(v19_5, v20_1)
v20_1.d = v4 * arg3
double v2_2 = vadd_f32(v3_3, v2_1)
v3_3.d = v4 f* v17.d
v17.d = arg4 f* v17:4.d
v3_3.d = v3_3.d f+ v17.d
double var_40 = v2_2
v2_2.d = v18 f+ v3_3.d
double var_58 = v5_2
double var_4c = v19_6
float var_50 = v16 + v20_1.d f+ arg4 * arg3
int32_t var_44 = v2_2.d
float var_38 = v6 + v4 f* v7.d + arg4 f* v7:4.d
return DrawImageMatrixParams(arg1, &var_58, &var_70, arg5, nullptr)
