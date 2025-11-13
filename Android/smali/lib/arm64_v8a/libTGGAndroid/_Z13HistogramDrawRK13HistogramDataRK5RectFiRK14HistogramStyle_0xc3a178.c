// 函数: _Z13HistogramDrawRK13HistogramDataRK5RectFiRK14HistogramStyle
// 地址: 0xc3a178
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_80 = v15
float v0 = *(arg2 + 0xc)
float v1 = *(arg2 + 4)
float x9 = *(arg2 + 8)
float v7 = v0 - v1
int64_t v8
v8.d = v7 / float.s(0x43960000)
float v6 = v8.d f+ v8.d
int64_t v13
v13.d = fconvert.s(0.5f)
int32_t x22 = *(arg1 + 0x400)
int64_t var_b0 = *arg2
int128_t v10
v10.d = v1 + v7 * float.s(0x3f666666)
int64_t v14
v14.d = v1 + v7 * float.s(0x3f6ccccd)

if (v6 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = v13.d

float v2 = *(arg2 + 8)
float v3 = *arg2
uint32_t temp0 = vcvts_s32_f32(v6 + v1)
uint32_t x8_2

x8_2 = temp0 s> 1 ? temp0 : 1

int128_t v9
v9.d = float.s(x8_2)
v2 = (v2 - v3) * float.s(0x3d4ccccd)
int64_t v12
v12.d = var_b0.d + v2
int128_t v11
v11.d = x9 - v2
float var_b4 = v0
var_b0.d = v12.d
int32_t var_a8_1 = v11.d
int32_t var_a4 = v10.d
int32_t var_c0 = v12.d
int32_t var_bc = v14.d
int32_t var_b8 = v11.d
int32_t var_90 = v12.d
int32_t var_8c = v10.d
int32_t var_88 = v11.d
float var_84 = v10.d f+ v9.d
DrawRectSolid(&var_90, arg4 + 0x10)

if ((x22 & 0x80000000) == 0)
    int32_t i = 0
    v13.d = v9.d f* v13.d
    v15.d = (v11.d f- v12.d) / float.s(x22)
    
    do
        float v0_1 = v12.d f+ v15.d f* float.s(i) f- v13.d
        float var_a0 = v0_1
        int32_t var_9c_1 = v10.d
        float var_98_1 = v0_1 f+ v9.d
        int32_t var_94_1 = v14.d
        DrawRectSolid(&var_a0, arg4 + 0x10)
        i += 1
    while (x22 + 1 != i)

HistogramStyle* x2_1
int128_t v1_3
x2_1, v1_3 = DrawLabels(&var_c0, arg1, x22, 2, arg4, v9.d, v8.d)
v1_3.d = var_b0:4.d
DrawBoxes(arg1, arg4, x2_1, v12.d)
return DrawBestLine(&var_b0, arg1, arg3, arg4, v8.d, v9.d)
