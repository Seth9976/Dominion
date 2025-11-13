// 函数: _Z23UI2GetScrollExtentsTextR3UI2R5RectF
// 地址: 0x1040e30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v3 = *(arg1 + 0x16c0)
float v4 = *(arg1 + 0x16b4)
float v1 = *(arg1 + 0x16b0)
float v5 = *(arg1 + 0x16b8)
float v6 = *(arg1 + 0x16bc)
int64_t v8
v8.d = *(arg1 + 0x175c)
float v19 = v3 * v3
float v20 = v4 * v4
float v21 = v5 * v5
float v22 = v6 * v6
float v23 = v4 * v5
float v24 = v3 * v6
float v25 = v3 * v5
float v26 = v4 * v6
v5 = v5 * v6
v6 = *V20 * v1
float v2 = v1 * 0f
v3 = v3 * v4
v4 = v8.d f* v1
float v0 = *(arg1 + 0x1760) * v1
v1 = *(V20 + 4) * v1
float v7 = *(arg1 + 0x16c4)
float v16 = *(arg1 + 0x16c8)
float v18 = v23 - v24
v2 = v2 + v2
v23 = v23 + v24
float v17 = v19 + v20 - v21 - v22
v19 = v19 - v20 + v21 - v22
v25 = v2 * (v25 + v26)
v2 = v2 * (v5 - v3)
float var_18 = v7 + v25 + v4 * v17 + (v0 + v0) * v18 - (v7 + v25 + v6 * v17 + (v1 + v1) * v18)
float var_14 = v16 + v2 + (v4 + v4) * v23 + v0 * v19 - (v16 + v2 + (v6 + v6) * v23 + v1 * v19)
float v0_2 = UI2PropDynamic<float>::Eval(GameGetTimeSimulation())
float v0_4 = DrawStringGetHeightFancy(arg1 + 0x1640, *(arg1 + 0x1548), *(gUI2 + 0x68), nullptr, 
    v8.d, v0_2 * *(arg1 + 0x16b0))
float v1_2 = TextGetLineHeight(arg1)
float temp0 = vrndp_f32(v0_4 / v1_2)
float v2_1

if (temp0 < 0f)
    v2_1 = fconvert.s(-0.5f)
else
    v2_1 = fconvert.s(0.5f)

float v0_5 = v1_2 * float.s(sx.d(vcvts_s32_f32(temp0 + v2_1)))
int32_t var_38 = v8.d
float var_34 = v0_5
UI2GetScrollExtents(arg1, &var_18, &var_38, arg2)
return 1
