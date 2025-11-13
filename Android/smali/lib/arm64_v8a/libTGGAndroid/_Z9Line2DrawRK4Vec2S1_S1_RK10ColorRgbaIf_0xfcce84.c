// 函数: _Z9Line2DrawRK4Vec2S1_S1_RK10ColorRgbaIf
// 地址: 0xfcce84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1
v1.q = *arg2
int128_t v2
v2.q = *arg1
int128_t v3
v3.d = fconvert.s(1f)
int128_t v1_1 = vsub_f32(v1, v2)
float v4 = sqrt(vmul_f32(v1_1, v1_1, 0) + v1_1:4.d f* v1_1:4.d)
v3.d = v3.d f/ v4
float v5 = v3.d f* v1_1.d
v3.d = v3.d f* v1_1:4.d
float var_8 = v5
int32_t var_4 = v3.d
float var_18 = v4
float var_14 = arg5
v3.d = 0x3f000000
v3:4.d = 0x3f000000
double var_20 = vadd_f32(vadd_f32(v2, vmul_f32(v1_1, v3, 0)), (*arg3).d)
return DrawRectSolidDir(&var_20, &var_8, &var_18, arg4)
