// 函数: _Z18UpdateDropOccuringR6DomGfx
// 地址: 0xb0a114
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGfx& x19 = arg1
int64_t v8
v8.d = *gSecondsPerUpdate * fconvert.s(5f)
float v0

if (*(arg1 + 0x21d0) != *(gDomClient + 0x1f8c0))
    v0 = *(x19 + 0x217c) f- v8.d
else if (CalcDropTarget(arg1).d != 5)
    v0 = *(x19 + 0x217c) f- v8.d
else
    v0 = v8.d f+ *(x19 + 0x217c)

float v1 = fconvert.s(1f)
float v2 = 0f
float temp0 = vmin_f32(v0, v1)

v0 = v0 < 0f ? v2 : temp0

*(x19 + 0x217c) = v0
float v3

if (*(x19 + 0x21d0) == *(gDomClient + 0x1f8c0))
    v3 = v8.d
else
    v3 = fneg(v8.d)

v0 = *(x19 + 0x2180) + v3
float temp0_1 = vmin_f32(v0, v1)

v0 = v0 < 0f ? v2 : temp0_1

*(x19 + 0x2180) = v0
