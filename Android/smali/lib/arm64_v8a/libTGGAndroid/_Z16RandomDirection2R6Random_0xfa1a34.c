// 函数: _Z16RandomDirection2R6Random
// 地址: 0xfa1a34
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
v11.d = fconvert.s(1f)
int64_t result
int128_t v0_6
int128_t v1_1

do
    int32_t x0_1 = RandomNext(arg1)
    int128_t v0_1
    result, v0_1 = RandomNext(arg1)
    v0_1.d = float.s(x0_1)
    v0_1:4.d = result.d
    int128_t v0_4 = vadd_f32(vorr_s8(v0_1 & v8, v9), v10)
    v0_6 = vadd_f32(vadd_f32(v0_4, v0_4), v10)
    v1_1 = vmul_f32(v0_6, v0_6, 0)
    v1_1.d = v1_1.d f+ v1_1:4.d
while (v1_1.d f> v11.d)

v1_1.q = *V20
int128_t v0_7 = vadd_f32(v0_6, v1_1)
double v1_2 = vmul_f32(v0_7, v0_7, 0)
v1_2.d = v1_2.d f+ v1_2:4.d
v1_2.d = sqrt(v1_2.d)
v1_2.d = v1_2.d f+ float.s(0x3727c5ac)
v1_2.d = fconvert.s(1f) f/ v1_2.d
v0_7.d = v0_7.d f* v1_2.d
v0_7:4.d = v0_7:4.d f* v1_2.d
v1_2.d = v0_7:4.d
return result
