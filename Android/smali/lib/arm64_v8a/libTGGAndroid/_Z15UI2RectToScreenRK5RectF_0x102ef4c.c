// 函数: _Z15UI2RectToScreenRK5RectF
// 地址: 0x102ef4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v0
v0.q = *(gUI2Editor + 0x6040)
int32_t v2 = *(gUI2Editor + 0x603c)
v0:8.q = v0.q
float128 v0_1
v0_1.d = vsubq_f32(*arg1, v0).d f* v2
v0_1:4.d = v0_1:4.d f* v2
v0_1:8.d = v0_1:8.d f* v2
v0_1:0xc.d = v0_1:0xc.d f* v2
float128 v1
v1.d = v0_1:4.d
int128_t v3
v3.d = v0_1:0xc.d
