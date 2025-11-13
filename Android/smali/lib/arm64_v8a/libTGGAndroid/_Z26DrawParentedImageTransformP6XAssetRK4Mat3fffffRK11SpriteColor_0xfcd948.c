// 函数: _Z26DrawParentedImageTransformP6XAssetRK4Mat3fffffRK11SpriteColor
// 地址: 0xfcd948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float cosp
float sinp
sincosf(&sinp, &cosp, arg5)
float cosp_1 = cosp
float sinp_1 = sinp
int128_t var_80 = data_71ae80
int128_t v2
v2.d = *arg2
float v5 = *(arg2 + 4)
float v6 = *(arg2 + 8)
float v7 = *(arg2 + 0xc)
float v16 = *(arg2 + 0x10)
float v17 = *(arg2 + 0x14)
float v3 = fneg(sinp_1)
float v4 = cosp_1 * arg6
sinp_1 = sinp_1 * arg7
cosp_1 = cosp_1 * arg7
v3 = v3 * arg6
float v18 = *(arg2 + 0x18)
float v19 = *(arg2 + 0x1c)
float v20 = v4 f* v2.d
float v21 = v3 * v5
float v22 = sinp_1 f* v2.d
float v23 = cosp_1 * v5
v2.d = v2.d f* arg3
v2.d = v2.d f+ v5 * arg4
v5 = v4 * v7 + v3 * v16
float v24 = *(arg2 + 0x20)
float v26 = sinp_1 * v7
float v27 = cosp_1 * v16
v20 = v20 + v21
v21 = v22 + v23
v22 = 0f
v7 = v7 * arg3 + v16 * arg4
v16 = v6 * v22
v3 = v4 * v18 + v3 * v19
v4 = v17 * v22
v22 = v24 * v22
v2.d = v6 f+ v2.d
float var_68 = v20 + v16
float var_64 = v21 + v16
int32_t var_60 = v2.d
float var_5c = v5 + v4
float var_58 = v26 + v27 + v4
float var_54 = v17 + v7
float var_50 = v3 + v22
float var_4c = sinp_1 * v18 + cosp_1 * v19 + v22
float var_48 = v24 + v18 * arg3 + v19 * arg4
return DrawImageMatrixParams(arg1, &var_68, &var_80, arg8, nullptr)
