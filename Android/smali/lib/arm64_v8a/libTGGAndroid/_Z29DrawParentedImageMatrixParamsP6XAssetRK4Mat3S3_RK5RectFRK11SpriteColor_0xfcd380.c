// 函数: _Z29DrawParentedImageMatrixParamsP6XAssetRK4Mat3S3_RK5RectFRK11SpriteColor
// 地址: 0xfcd380
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg2
float v1 = *(arg2 + 4)
int128_t v2
v2.q = *arg3
int128_t v3
v3.q = *(arg3 + 0xc)
float v5 = *(arg3 + 8)
float v6 = *(arg3 + 0x14)
float v16 = *(arg2 + 8)
float v17 = *(arg2 + 0xc)
float v18 = *(arg2 + 0x10)
float v19 = *(arg2 + 0x14)
int128_t v20
v20.d = *(arg2 + 0x18)
int128_t v21
v21.d = *(arg2 + 0x1c)
int128_t v4
v4.q = *(arg3 + 0x18)
float v7 = *(arg3 + 0x20)
float v22 = *(arg2 + 0x20)
int128_t v23
v23.d = v2.d f* v0
v23:4.d = v2:4.d f* v0
int128_t v24
v24.d = v3.d f* v1
v24:4.d = v3:4.d f* v1
v0 = v0 * v5
v1 = v1 * v6
int128_t v26
v26.d = v2.d f* v17
v26:4.d = v2:4.d f* v17
v17 = v5 * v17
v2.d = v2.d f* v20.d
v2:4.d = v2:4.d f* v20.d
v5 = v5 f* v20.d
v20.d = v3.d f* v18
v20:4.d = v3:4.d f* v18
v18 = v6 * v18
v3.d = v3.d f* v21.d
v3:4.d = v3:4.d f* v21.d
v6 = v6 f* v21.d
int128_t v25
v25.d = v4.d f* v16
v25:4.d = v4:4.d f* v16
v21.d = v4.d f* v19
v21:4.d = v4:4.d f* v19
v4.d = v4.d f* v22
v4:4.d = v4:4.d f* v22
int128_t v22_1 = vadd_f32(v23, v24)
int128_t v1_1 = vadd_f32(v26, v20)
int128_t v2_1 = vadd_f32(v2, v3)
v3.d = v5 + v6
double v5_1 = vadd_f32(v22_1, v25)
double v1_2 = vadd_f32(v1_1, v21)
double v2_2 = vadd_f32(v2_1, v4)
v3.d = v3.d f+ v7 * v22
double var_38 = v5_1
float var_30 = v0 + v1 + v16 * v7
double var_2c = v1_2
float var_24 = v17 + v18 + v7 * v19
double var_20 = v2_2
int32_t var_18 = v3.d
return DrawImageMatrixParams(arg1, &var_38, arg4, arg5, nullptr)
