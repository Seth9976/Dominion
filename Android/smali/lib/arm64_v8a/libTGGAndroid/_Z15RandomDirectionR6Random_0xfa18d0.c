// 函数: _Z15RandomDirectionR6Random
// 地址: 0xfa18d0
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
v11.d = fconvert.s(-1f)
int64_t v12
v12.d = fconvert.s(1f)
int64_t result
double v0_6
int128_t v13_1

do
    int32_t x0_1 = RandomNext(gRNG)
    int32_t x0_3
    int128_t v0_1
    x0_3, v0_1 = RandomNext(gRNG)
    v0_1.d = float.s(x0_1)
    v0_1:4.d = x0_3
    int128_t v0_4 = vadd_f32(vorr_s8(v0_1 & v8, v9), v10)
    v13_1 = vadd_f32(vadd_f32(v0_4, v0_4), v10)
    result = RandomNext(gRNG)
    float v1_1 = float.s(0x3f800000 | (result.d & 0x7fffff)) f+ v11.d
    v0_6 = vmul_f32(v13_1, v13_1, 0)
    v1_1 = v1_1 + v1_1 f+ v11.d
    v0_6.d = v0_6.d f+ v0_6:4.d
    v0_6.d = v0_6.d f+ v1_1 * v1_1
while (v0_6.d f> v12.d)

v0_6.d = sqrt(v0_6.d)
float v2_1 = fconvert.s(1f) f/ v0_6.d
v0_6.d = v13_1.d f* v2_1
v0_6:4.d = v13_1:4.d f* v2_1
return result
