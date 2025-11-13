// 函数: _Z9ToPercentf
// 地址: 0xf7fbf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg1 = arg1 * float.s(0x42c80000)
float v1

if (arg1 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

vcvts_s32_f32(arg1 + v1)
return XFormatString("%%%d") __tailcall
