// 函数: _Z11ScaleFactorRK4Vec2S1_
// 地址: 0x1021668
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = *arg1
int128_t v1
v1.q = *arg2
double v0_1 = vdiv_f32(v0, v1)
v1.d = v0_1:4.d

if (v0_1.d f> v1.d)
    v0_1.d = v0_1.d
else
    v0_1.d = v1.d
