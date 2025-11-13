// 函数: _Z12MoveToLinearRK9TransformS1_fRb
// 地址: 0x9f2e1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result
float128 v0
int128_t v1
float128 v3
int128_t v4
result, v0, v1, v3, v4 = GetLocalSettings()
int32_t x8 = *(result + 8)
int32_t x8_1

if (x8 == 0)
    x8_1 = 0x43fa0000
else if (x8 == 3)
    x8_1 = 0x44fa0000
else
    if (x8 != 1)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return UISpeed() __tailcall
    
    x8_1 = 0x447a0000

v1.d = *(arg1 + 0x14)
v3.q = *(arg1 + 0x18)
v4.q = *(arg2 + 0x18)
v0.d = float.s(x8_1)
v1.d = v1.d f- *(arg2 + 0x14)
v1.d = v1.d f* v1.d
int128_t v2_1 = vsub_f32(v3, v4)
float128 v2_2 = vmul_f32(v2_1, v2_1, 0)
v0.d = v0.d f* arg3
v1.d = v1.d f+ v2_2.d
v2_2.d = v2_2:4.d
v1.d = v1.d f+ v2_2.d
v2_2.d = v0.d f* v0.d
int128_t* entry_x8

if (v1.d f>= v2_2.d)
    *arg4 = false
    v1.q = *(arg2 + 0x14)
    v2_2.q = *(arg1 + 0x14)
    v3.d = *(arg2 + 0x1c)
    v4.d = *(arg1 + 0x1c)
    int128_t v1_1 = vsub_f32(v1, v2_2)
    double v5_1 = vmul_f32(v1_1, v1_1, 0)
    v3.d = v3.d f- v4.d
    v5_1.d = v5_1.d f+ v5_1:4.d
    v5_1.d = v5_1.d f+ v3.d f* v3.d
    v5_1.d = sqrt(v5_1.d)
    v0.d = v0.d f/ v5_1.d
    v1_1.d = v1_1.d f* v0.d
    v1_1:4.d = v1_1:4.d f* v0.d
    v3.d = v0.d f* v3.d
    float128 v1_2 = vadd_f32(v2_2, v1_1)
    v2_2.d = v4.d f+ v3.d
    *(entry_x8 + 0x14) = v1_2.q
    *(entry_x8 + 0x1c) = v2_2.d
    v1_2.d = *arg1
    v2_2.d = *arg2
    v3.d = 0f
    v2_2.d = v2_2.d f- v1_2.d
    v2_2.d = v0.d f* v2_2.d
    v1_2.d = v1_2.d f+ v2_2.d
    *entry_x8 = v1_2.d
    v1_2 = *(arg2 + 4)
    v2_2 = *(arg1 + 4)
    float128 v4_1 = vmulq_f32(v1_2, v2_2, 0)
    int128_t v5_2 = vdup_laneq_s32(v4_1, 3)
    int128_t v6_2 = vdup_laneq_s32(v4_1, 1)
    uint128_t v3_1 =
        vcgtq_f32(v3, vadd_f32(vadd_f32(vadd_f32(v5_2, v4_1), v6_2), vextq_s8(v4_1, v4_1, 8)))
    float128 v6_3 = vnegq_f32(v1_2)
    float128 v1_4 = vsubq_f32(vbslq_s8(vdupq_laneq_s32(v3_1, 0), v6_3, v1_2), v2_2)
    v0.d = v1_4.d f* v0.d
    v0:4.d = v1_4:4.d f* v0.d
    v0:8.d = v1_4:8.d f* v0.d
    v0:0xc.d = v1_4:0xc.d f* v0.d
    float128 v0_1 = vaddq_f32(v2_2, v0)
    float128 v1_5 = vmulq_f32(v0_1, v0_1, 0)
    uint128_t v2_3 = vdupq_laneq_s32(v1_5, 3)
    float128 v2_5 = vaddq_f32(vdupq_laneq_s32(v1_5, 1), vaddq_f32(v2_3, v1_5))
    float128 v1_7
    v1_7.d = sqrt(vaddq_f32(vdupq_laneq_s32(v1_5, 2), v2_5).d)
    *(entry_x8 + 4) = vdivq_f32(v0_1, vdupq_laneq_s32(v1_7, 0))
else
    *arg4 = true
    v0 = *(arg2 + 0x10)
    *entry_x8 = *arg2
    entry_x8[1] = v0
return result
