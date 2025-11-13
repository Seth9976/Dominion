// 函数: _Z15DrawStringScalePKcffP6XAsset10ColorRgbaI13TextAlignmentf
// 地址: 0xf6c0b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_48 = 0
int32_t var_38 = 0
int32_t var_18 = 0
float v5 = *M3I
float v6 = *(M3I + 4)
float v7 = *(M3I + 8)
float v16 = *(M3I + 0xc)
float v17 = *(M3I + 0x10)
float v18 = *(M3I + 0x14)
float v3 = 0f
int128_t var_30 = data_71a7f0
int128_t v4
v4.d = v16 * arg7
float v19 = v5 * arg7 + v6 * v3
float v21 = v5 * v3 + v6 * arg7
v5 = v5 * arg2 + v6 * arg3
v4.d = v4.d f+ v17 * v3
v6 = v16 * v3 + v17 * arg7
float v20 = *(M3I + 0x18)
float v22 = *(M3I + 0x1c)
v16 = v16 * arg2 + v17 * arg3
v17 = v20 * arg7
arg7 = v22 * arg7
arg3 = v22 * arg3
v17 = v17 + v22 * v3
v22 = *(M3I + 0x20)
uint64_t x4 = zx.q(*gRgbaIWhite)
uint64_t x5 = zx.q(*gRgbaINone)
arg2 = v20 * arg2 + arg3
arg3 = v18 * v3
arg7 = v20 * v3 + arg7
v20 = v7 * v3
v3 = v22 * v3
v4.d = v4.d f+ arg3
float var_3c = v6 + arg3
float var_14 = v22 + arg2
float var_50 = v19 + v20
float var_4c = v21 + v20
float var_44 = v7 + v5
int32_t var_40 = v4.d
float var_34 = v18 + v16
float var_20 = v17 + v3
float var_1c = arg7 + v3
int64_t var_60 = 0
return DrawStringMatrix(arg1, &var_50, arg4, zx.q(arg5), x4, x5, zx.q(arg6), nullptr, 0f, 0f)
