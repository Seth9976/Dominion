// 函数: _Z11SpriteAlphaf
// 地址: 0x1051614
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg1 = arg1 * float.s(0x437f0000)
float v1

if (arg1 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

return SpriteColorSet(0xff, 0xff, 0xff, vcvts_s32_f32(arg1 + v1)) __tailcall
