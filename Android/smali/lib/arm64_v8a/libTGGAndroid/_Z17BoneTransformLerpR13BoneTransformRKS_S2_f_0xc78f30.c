// 函数: _Z17BoneTransformLerpR13BoneTransformRKS_S2_f
// 地址: 0xc78f30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v1 = *arg3
float128 v2 = *arg2
float128 v3 = vmulq_f32(v1, v2, 0)
int128_t v4 = vdup_laneq_s32(v3, 3)
float128 v5 = vdup_laneq_s32(v3, 1)
int128_t v4_2 = vadd_f32(vadd_f32(v4, v3), v5)
v5.d = 0f
uint128_t v3_3 = vcgtq_f32(v5, vadd_f32(v4_2, vextq_s8(v3, v3, 8)))
float128 v4_3 = vnegq_f32(v1)
float128 v1_2
v1_2.d = vsubq_f32(vbslq_s8(vdupq_laneq_s32(v3_3, 0), v4_3, v1), v2).d f* arg4
v1_2:4.d = v1_2:4.d f* arg4
v1_2:8.d = v1_2:8.d f* arg4
v1_2:0xc.d = v1_2:0xc.d f* arg4
*arg1 = vaddq_f32(v2, v1_2)
float128 v1_3
v1_3.q = *(arg3 + 0x10)
v2.q = *(arg2 + 0x10)
uint128_t v3_4
v3_4.d = *(arg3 + 0x18)
v4_3.d = *(arg2 + 0x18)
int128_t v1_4
v1_4.d = vsub_f32(v1_3, v2).d f* arg4
v1_4:4.d = v1_4:4.d f* arg4
v3_4.d = v3_4.d f- v4_3.d
v3_4.d = v3_4.d f* arg4
int128_t v1_5 = vadd_f32(v2, v1_4)
v2.d = v4_3.d f+ v3_4.d
*(arg1 + 0x10) = v1_5.q
*(arg1 + 0x18) = v2.d
v1_5.q = *(arg3 + 0x1c)
v2.q = *(arg2 + 0x1c)
v3_4.d = *(arg3 + 0x24)
v4_3.d = *(arg2 + 0x24)
int128_t v1_6
v1_6.d = vsub_f32(v1_5, v2).d f* arg4
v1_6:4.d = v1_6:4.d f* arg4
v3_4.d = v3_4.d f- v4_3.d
*(arg1 + 0x1c) = vadd_f32(v2, v1_6)
*(arg1 + 0x24) = v4_3.d f+ v3_4.d f* arg4
*(arg1 + 0x28) = *(arg3 + 0x28)
