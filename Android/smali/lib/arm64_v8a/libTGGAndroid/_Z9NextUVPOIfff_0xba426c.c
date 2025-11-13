// 函数: _Z9NextUVPOIfff
// 地址: 0xba426c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float temp0 = vrndp_f32(arg1 * arg2 + arg3)
float v4

if (temp0 < 0f)
    v4 = fconvert.s(-0.5f)
else
    v4 = fconvert.s(0.5f)

vcvts_s32_f32(temp0 + v4)
