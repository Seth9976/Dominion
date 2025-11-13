// 函数: _Z10ZoomUpdateRfb
// 地址: 0xb2e670
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = fconvert.s(5f)
float v0 = *gSecondsPerUpdate

if ((arg2.d & 1) != 0)
    v0 = v0 * v1
else
    v0 = fneg(v0 * v1)

v0 = *arg1 + v0
float temp0 = vmin_f32(v0, fconvert.s(1f))

v0 = v0 < 0f ? 0f : temp0

*arg1 = v0
