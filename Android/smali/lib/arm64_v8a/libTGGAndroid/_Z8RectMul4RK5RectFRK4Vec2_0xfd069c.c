// 函数: _Z8RectMul4RK5RectFRK4Vec2
// 地址: 0xfd069c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v0
v0.q = *arg2
v0:8.q = v0.q
float128 v0_1 = vmulq_f32(*arg1, v0, 0)
float128 v1
v1.d = v0_1:4.d
int128_t v2
v2.d = v0_1:8.d
int128_t v3
v3.d = v0_1:0xc.d
