// 函数: _Z16Mat4OrthographicRK7Frustumf
// 地址: 0xc9e380
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v3 = *arg1
float v4 = *(arg1 + 4)
int128_t v5
v5.d = *(arg1 + 8)
int128_t v6
v6.d = *(arg1 + 0xc)
float v16 = *(arg1 + 0x10)
int128_t v7
v7.d = *(arg1 + 0x14)
float v1 = fconvert.s(1f)
arg2 = v1 / arg2
float v2 = fconvert.s(0.5f)
float var_90 = arg2
float var_7c = arg2
arg2 = v3 f+ v5.d
v3 = v5.d f- v3
v5.d = v4 f+ v6.d
v4 = v6.d f- v4
arg2 = arg2 * v2
v2 = v5.d f* v2
v6 = *(M40 + 0x10)
v7.d = v7.d f- v16
v3 = v1 / v3
v4 = v1 / v4
v1 = v1 f/ v7.d
v7 = *(M40 + 0x20)
int128_t var_50 = *M40
int128_t var_40 = v6
float v17 = fconvert.s(-2f)
v6.d = fneg(v16)
int32_t var_14 = 0x3f800000
int32_t var_68 = 0x3f800000
int128_t var_30 = v7
var_30 = *(M40 + 0x2c)
v5.d = v3 + v3
v7.d = v4 + v4
int32_t var_54 = 0x3f800000
int64_t var_84 = 0
int64_t var_8c = 0
int64_t var_78 = 0
int64_t var_70 = 0
int64_t var_5c = 0
int64_t var_64 = 0
var_30:8.d = v1 * v17
var_30:0xc.d = v1 f* v6.d
var_50.d = v5.d
var_50:0xc.d = v3 * arg2 * v17
var_40:4.d = v7.d
var_40:0xc.d = v4 * v2 * v17
Mat4Multiply(&var_50, &var_90)
void var_d0
return Mat4Multiply(&var_d0, 0x82854c)
