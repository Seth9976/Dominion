// 函数: _Z20AppGetWindowSafeRectv
// 地址: 0x1069d68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1
v1.q = *(gAndroidGlobals + 0x10)
int128_t v2
v2.q = *(gAndroidGlobals + 0x18)
int128_t v3
v3.q = *(gAndroidGlobals + 0x20)
int128_t v0
v0.q = *V20
int128_t v1_1 = vcvt_f32_s32(v1)
double v0_1 = vadd_f32(v0, v2)
double v2_1 = vadd_f32(v3, v1_1)
v1_1.d = v0_1:4.d
v3.d = v2_1:4.d
