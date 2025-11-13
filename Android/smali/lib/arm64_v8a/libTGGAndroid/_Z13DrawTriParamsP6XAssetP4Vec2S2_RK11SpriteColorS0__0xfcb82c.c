// 函数: _Z13DrawTriParamsP6XAssetP4Vec2S2_RK11SpriteColorS0_
// 地址: 0xfcb82c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v0
v0.q = *(*gpSpriteAppData + 0x20)
float128 v2
v2:8.q = v0.q
float128 v3 = vaddq_f32(*arg2, v2)
float128 v1
v1.q = *(arg2 + 0x10)
int128_t v0_1
v0_1:8.q = vadd_f32(v0, v1).q
float128 var_30 = v3
int128_t var_20 = v0_1
int128_t var_50 = *arg3
int64_t x8_1 = *(arg3 + 0x10)
int64_t var_40 = x8_1
int64_t var_38 = x8_1
return SpriteDrawVertsInt<DefVertPosXY>(&var_30, &var_50, arg4, false, arg1, arg5)
