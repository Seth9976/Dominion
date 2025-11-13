// 函数: _Z19NextPointOfInterestfRK5RectFfff
// 地址: 0xba42bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
float v0
result, v0 = NextPosPOI(arg2, arg1, arg3)
float temp0 = vrndp_f32(arg1 * arg4 + arg5)
float v2

if (temp0 < 0f)
    v2 = fconvert.s(-0.5f)
else
    v2 = fconvert.s(0.5f)

vcvts_s32_f32(temp0 + v2)
return result
