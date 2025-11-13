// 函数: _Z12VRGetEyePose5VREye
// 地址: 0x1060e38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x10 = gVR + 0xf4 + muls.dp.d(arg1.d, 0xc)
int64_t x10_1 = *(x10 + 4)
int128_t v0 = *(gVR + 0xf4 + (sx.q(arg1.d) << 4) + 0x1c)
int128_t* entry_x8
*(entry_x8 + 0x18) = *(x10 + 0xc)
entry_x8[1].q = x10_1
*entry_x8 = v0
