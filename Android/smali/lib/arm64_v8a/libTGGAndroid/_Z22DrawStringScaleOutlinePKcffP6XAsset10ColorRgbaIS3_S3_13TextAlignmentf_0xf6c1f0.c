// 函数: _Z22DrawStringScaleOutlinePKcffP6XAsset10ColorRgbaIS3_S3_13TextAlignmentf
// 地址: 0xf6c1f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float var_c0 = arg9
float var_b4 = arg2
int32_t var_b0 = 0
float var_ac = arg9
int32_t var_a8 = 0
float var_a4 = arg3
int64_t var_8c = 0
int64_t var_94 = 0
int64_t var_bc = 0
int64_t var_a0 = 0
int32_t var_98 = 0x3f800000
int32_t var_84 = 0x3f800000
int128_t v0
int128_t v1
v0, v1 = Mat4Multiply(M4I, &var_c0)
v0.d = 0f
v1.d = 0f
int64_t var_d0 = 0
Mat4 var_80
return DrawStringMatrix(arg1, &var_80, arg4, zx.q(arg5), zx.q(arg6), zx.q(arg7), zx.q(arg8), 
    nullptr, v0, v1)
