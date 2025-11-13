// 函数: _Z18UIInvTransformRectRK11UITransformRK5RectFRK13PageAlignAnim
// 地址: 0x102c2d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v0
v0.q = *arg1
v0:8.q = v0.q
float v1 = fconvert.s(1f) / *(arg1 + 0xc)
float128 v0_1
v0_1.d = vsubq_f32(*arg2, v0).d f* v1
v0_1:4.d = v0_1:4.d f* v1
v0_1:8.d = v0_1:8.d f* v1
v0_1:0xc.d = v0_1:0xc.d f* v1
float128 v2
v2.d = v0_1:8.d
