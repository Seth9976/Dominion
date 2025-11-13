// 函数: _Z16TextGetTotalSizeRK3UI2
// 地址: 0x101e12c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v8
v8.d = *(arg1 + 0x175c)
float v0_1 = UI2PropDynamic<float>::Eval(GameGetTimeSimulation())
float v0_3 = DrawStringGetHeightFancy(arg1 + 0x1640, *(arg1 + 0x1548), *(gUI2 + 0x68), nullptr, 
    v8.d, v0_1 * *(arg1 + 0x16b0))
int64_t result
float v1_1
result, v1_1 = TextGetLineHeight(arg1)
float temp0 = vrndp_f32(v0_3 / v1_1)
float v2

if (temp0 < 0f)
    v2 = fconvert.s(-0.5f)
else
    v2 = fconvert.s(0.5f)

vcvts_s32_f32(temp0 + v2)
return result
