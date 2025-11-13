// 函数: _Z14DrawQuadParamsP6XAssetP4Vec2S2_RK11SpriteColorS0_
// 地址: 0xfcb8f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v0
v0.q = *(*gpSpriteAppData + 0x20)
v0:8.q = v0.q
float128 v2 = vaddq_f32(*arg2, v0)
float128 v0_1 = vaddq_f32(v0, *(arg2 + 0x10))
float128 var_30 = v2
float128 var_20 = v0_1
return SpriteDrawVertsInt<DefVertPosXY>(&var_30, arg3, arg4, false, arg1, arg5)
