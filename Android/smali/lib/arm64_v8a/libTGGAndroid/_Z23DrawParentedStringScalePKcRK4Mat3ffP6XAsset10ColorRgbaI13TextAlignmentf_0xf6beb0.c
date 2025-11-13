// 函数: _Z23DrawParentedStringScalePKcRK4Mat3ffP6XAsset10ColorRgbaI13TextAlignmentf
// 地址: 0xf6beb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v5 = *arg2
float v6 = *(arg2 + 4)
float v4 = *(arg2 + 8)
float v7 = *(arg2 + 0xc)
float v16 = *(arg2 + 0x10)
float v17 = *(arg2 + 0x14)
float v3 = 0f
int128_t v21
v21.d = v6 * arg8
float v18 = v5 * arg8 + v6 * v3
float v20 = v5 * v3 f+ v21.d
v21.d = v7 * v3
v5 = v5 * arg3 + v6 * arg4
float v19 = v7 * arg8 + v16 * v3
v6 = v21.d f+ v16 * arg8
v21.d = *(arg2 + 0x18)
float v22 = *(arg2 + 0x1c)
v7 = v7 * arg3 + v16 * arg4
v16 = v21.d f* arg8
arg8 = v22 * arg8
arg4 = v22 * arg4
arg3 = v21.d f* arg3
v21.d = v21.d f* v3
v16 = v16 + v22 * v3
v22 = *(arg2 + 0x20)
int32_t var_48 = 0
int32_t var_38 = 0
int32_t var_18 = 0
arg8 = v21.d f+ arg8
arg3 = arg3 + arg4
uint64_t x4 = zx.q(*gRgbaIWhite)
uint64_t x5 = zx.q(*gRgbaINone)
arg4 = v4 * v3
int128_t var_30 = data_71a7f0
v21.d = v17 * v3
v3 = v22 * v3
float var_50 = v18 + arg4
float var_4c = v20 + arg4
float var_14 = v22 + arg3
float var_44 = v4 + v5
float var_40 = v19 f+ v21.d
float var_3c = v6 f+ v21.d
float var_34 = v17 + v7
float var_20 = v16 + v3
float var_1c = arg8 + v3
int64_t var_60 = 0
return DrawStringMatrix(arg1, &var_50, arg5, zx.q(arg6), x4, x5, zx.q(arg7), nullptr, 0f, 0f)
