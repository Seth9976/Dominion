// 函数: _Z15DrawTriMaterialP4Vec2P6XAssetS2_
// 地址: 0xc1c5c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x10 = *(arg1 + 8)
int128_t v0
v0.q = data_18c7560
int64_t var_30 = x9
int64_t var_28 = x10
int64_t x11 = *(arg1 + 0x10)
int128_t v1
v1.q = float.d(x9)
int128_t v2
v2.q = float.d(x10)
int64_t var_20 = x11
int64_t var_18 = x11
v1:4.d = *(arg1 + 4)
v2:4.d = *(arg1 + 0xc)
double v3 = vmul_f32(v0, v1, 0)
v1.q = float.d(x11)
double v2_1 = vmul_f32(v0, v2, 0)
double var_50 = v3
double var_48 = v2_1
v1:4.d = *(arg1 + 0x14)
int128_t v0_1
v0_1:8.q = vmul_f32(v0, v1, 0).q
int128_t var_40 = v0_1
return DrawQuadParams(arg2, &var_30, &var_50, gSpriteWhite, false, arg3)
