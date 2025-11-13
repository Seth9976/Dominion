// 函数: _Z17RandomXZDirectionR6Random
// 地址: 0xfa1824
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v8
v8.d = 0x7fffff
v8:4.d = 0x7fffff
int128_t v9
v9.d = fconvert.s(1f)
v9:4.d = fconvert.s(1f)
int128_t v10
v10.d = fconvert.s(-1f)
v10:4.d = fconvert.s(-1f)
int64_t v11
v11.d = 0f
int64_t v12
v12.d = fconvert.s(1f)
int64_t result
double v0_6
int128_t v2_1

do
    int32_t x0_1 = RandomNext(gRNG)
    int128_t v0_1
    result, v0_1 = RandomNext(gRNG)
    v0_1.d = float.s(x0_1)
    v0_1:4.d = result.d
    int128_t v0_4 = vadd_f32(vorr_s8(v0_1 & v8, v9), v10)
    v2_1 = vadd_f32(vadd_f32(v0_4, v0_4), v10)
    v0_6 = vmul_f32(v2_1, v2_1, 0)
    float v1_1 = v0_6.d f+ v11.d
    v0_6.d = v0_6:4.d
    v0_6.d = v1_1 f+ v0_6.d
while (v0_6.d f> v12.d)

v0_6.d = sqrt(v0_6.d)
float v4 = fconvert.s(1f) f/ v0_6.d
v0_6.d = v4 f* v2_1.d
v2_1.d = v4 f* v2_1:4.d
return result
