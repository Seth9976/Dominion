// 函数: _Z20SoundSetGlobalVolumeff
// 地址: 0xfa7c04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = fconvert.s(1f)
float v3 = 0f
uint64_t x8 = *gpSoundGlobals
float temp0 = vmin_f32(arg1, v2)
float temp0_1 = vmin_f32(arg2, v2)

arg1 = arg1 < 0f ? v3 : temp0

arg2 = arg2 < 0f ? v3 : temp0_1

*(x8 + 0x28) = arg1
*(x8 + 0x2c) = arg2
