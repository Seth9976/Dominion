// 函数: _Z19RandomPointInCircleR6RandomRK4Vec2f
// 地址: 0xfa1998
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
int128_t v0_5
int128_t v1_1

do
    int32_t x0_1 = RandomNext(arg1)
    int128_t v0
    result, v0 = RandomNext(arg1)
    v0.d = float.s(x0_1)
    v0:4.d = result.d
    int128_t v0_3 = vadd_f32(vorr_s8(v0 & v8, v9), v10)
    v0_5 = vadd_f32(vadd_f32(v0_3, v0_3), v10)
    v1_1 = vmul_f32(v0_5, v0_5, 0)
    v1_1.d = v1_1.d f+ v1_1:4.d
while (v1_1.d f> v11.d)

v1_1.q = *arg2
v0_5.d = v0_5.d f* arg3
v0_5:4.d = v0_5:4.d f* arg3
v1_1.d = vadd_f32(v0_5, v1_1):4.d
return result
