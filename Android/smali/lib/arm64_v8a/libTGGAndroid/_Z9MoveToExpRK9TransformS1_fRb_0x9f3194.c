// 函数: _Z9MoveToExpRK9TransformS1_fRb
// 地址: 0x9f3194
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v2
v2.q = *(arg1 + 0x18)
int128_t v3
v3.q = *(arg2 + 0x18)
arg3 = *(arg1 + 0x14) - *(arg2 + 0x14)
int128_t v1_1 = vsub_f32(v2, v3)
int128_t v1_2 = vmul_f32(v1_1, v1_1, 0)
arg3 = arg3 * arg3 f+ v1_2.d
v1_2.d = v1_2:4.d
arg3 = arg3 f+ v1_2.d
v1_2.d = fconvert.s(25f)
int128_t* entry_x8

if (not(arg3 f>= v1_2.d))
    *arg4 = true
    arg3 = (*(arg2 + 0x10)).d
    *entry_x8 = *arg2
    entry_x8[1] = arg3.o
    return 

*arg4 = false
void* x0
int128_t v0
float128 v1_3
float128 v2_1
int128_t v4
x0, v0, v1_3, v2_1, v4 = GetLocalSettings()
int32_t x8 = *(x0 + 8)
int32_t x8_1
int32_t v3_1

if (x8 == 3)
    v0.q = *(arg2 + 0x14)
    v1_3.q = *(arg1 + 0x14)
    v2_1.d = *(arg2 + 0x1c)
    v3_1 = *(arg1 + 0x1c)
    x8_1 = 0x3f666666
else if (x8 == 1)
    v0.q = *(arg2 + 0x14)
    v1_3.q = *(arg1 + 0x14)
    v2_1.d = *(arg2 + 0x1c)
    v3_1 = *(arg1 + 0x1c)
    x8_1 = 0x3dcccccd
else
    if (x8 != 0)
        pthread_kill(pthread_self(), 6)
        Transform* x0_2
        Transform* x1
        bool* x2
        float v0_9
        x0_2, x1, x2, v0_9 = XNoReturn()
        return MoveToInstant(x0_2, x1, v0_9, x2) __tailcall
    
    v0.q = *(arg2 + 0x14)
    v1_3.q = *(arg1 + 0x14)
    v2_1.d = *(arg2 + 0x1c)
    v3_1 = *(arg1 + 0x1c)
    x8_1 = 0x3d4ccccd

v4.d = x8_1
v4:4.d = x8_1
float v5 = float.s(x8_1)
v2_1.d = v2_1.d f- v3_1
v2_1.d = v2_1.d f* v5
float128 v0_3 = vadd_f32(v1_3, vmul_f32(vsub_f32(v0, v1_3), v4, 0))
v1_3.d = v3_1 f+ v2_1.d
*(entry_x8 + 0x14) = v0_3.q
*(entry_x8 + 0x1c) = v1_3.d
v0_3.d = *arg1
v1_3.d = *arg2
v2_1.d = x8_1
v2_1:4.d = x8_1
v2_1:8.d = x8_1
v2_1:0xc.d = x8_1
v1_3.d = v1_3.d f- v0_3.d
v1_3.d = v1_3.d f* v5
v0_3.d = v0_3.d f+ v1_3.d
*entry_x8 = v0_3.d
v0_3 = *(arg2 + 4)
v1_3 = *(arg1 + 4)
float128 v3_2 = vmulq_f32(v0_3, v1_3, 0)
int128_t v4_1 = vdup_laneq_s32(v3_2, 3)
int128_t v5_1 = vdup_laneq_s32(v3_2, 1)
float128 v4_3
v4_3.d = 0f
uint128_t v3_5 =
    vcgtq_f32(v4_3, vadd_f32(vadd_f32(vadd_f32(v4_1, v3_2), v5_1), vextq_s8(v3_2, v3_2, 8)))
float128 v4_4 = vnegq_f32(v0_3)
float128 v0_7 = vaddq_f32(v1_3, 
    vmulq_f32(vsubq_f32(vbslq_s8(vdupq_laneq_s32(v3_5, 0), v4_4, v0_3), v1_3), v2_1, 0))
float128 v1_4 = vmulq_f32(v0_7, v0_7, 0)
uint128_t v2_2 = vdupq_laneq_s32(v1_4, 3)
float128 v2_4 = vaddq_f32(vdupq_laneq_s32(v1_4, 1), vaddq_f32(v2_2, v1_4))
float128 v1_6
v1_6.d = sqrt(vaddq_f32(vdupq_laneq_s32(v1_4, 2), v2_4).d)
*(entry_x8 + 4) = vdivq_f32(v0_7, vdupq_laneq_s32(v1_6, 0))
