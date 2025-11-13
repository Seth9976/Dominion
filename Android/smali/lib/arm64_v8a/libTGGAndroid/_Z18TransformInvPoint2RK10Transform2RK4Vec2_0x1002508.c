// 函数: _Z18TransformInvPoint2RK10Transform2RK4Vec2
// 地址: 0x1002508
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = *arg2
int128_t v1
v1.q = *arg1
double var_18 = vsub_f32(v0, v1)
int64_t result
float v0_2
float v1_1
result, v0_2, v1_1 = Rot2InvRotate(arg1 + 8, &var_18)
*(arg1 + 0x10)
*(arg1 + 0x14)
return result
