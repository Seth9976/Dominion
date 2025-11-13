// 函数: _Z12SimpleMoveToRK4Vec2S1_ffRb
// 地址: 0xba324c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg5 = false
int128_t v3
v3.q = *arg2
int128_t v2
v2.q = *arg1
arg3 = arg3 * arg4
int128_t v1 = vsub_f32(v3, v2)
double v3_1 = vmul_f32(v1, v1, 0)
v3_1.d = v3_1.d f+ v3_1:4.d
v3_1.d = sqrt(v3_1.d)

if (not(v3_1.d f>= arg3))
    *arg5 = true
    v1.d = (*arg2).d
    return 

v3_1.d = fconvert.s(1f) f/ v3_1.d
v1.d = v1.d f* v3_1.d
v1:4.d = v1:4.d f* v3_1.d
v1.d = vadd_f32(v2, v1:4.d f* v1.d f* arg3):4.d
