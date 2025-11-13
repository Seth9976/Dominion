// 函数: _Z12MoveToSCurveRK9TransformS1_fRfRbbf
// 地址: 0x9f2fc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v8 = arg3
Transform const& x21 = arg1
int128_t v2
float128 v3

if (not(arg7 != 0f))
    arg1, v2, v3 = GetLocalSettings()
    int32_t x8 = *(arg1 + 8)
    
    if (x8 == 0)
        arg3 = fconvert.s(2f)
    else if (x8 == 3)
        arg3 = fconvert.s(10f)
    else
        if (x8 != 1)
            pthread_kill(pthread_self(), 6)
            Transform* x0_1
            Transform* x1
            bool* x2
            float v0_6
            x0_1, x1, x2, v0_6 = XNoReturn()
            return MoveToExp(x0_1, x1, v0_6, x2) __tailcall
        
        arg3 = fconvert.s(4f)
    
    if ((arg6.d & 1) != 0)
        arg7 = fconvert.s(4f)
    else
        arg7 = arg3

arg3 = *arg4 + arg7 * v8
*arg4 = arg3
int32_t* entry_x8

if (arg3 >= fconvert.s(1f))
    *arg5 = true
    arg3 = (*(arg2 + 0x10)).d
    *entry_x8 = (*arg2).d.o
    *(entry_x8 + 0x10) = arg3.o
    return 

*arg5 = false
v2.d = *arg4
arg7 = 0f

if (not(v2.d f<= 0f))
    arg7 = fconvert.s(1f)
    
    if (not(v2.d f>= arg7))
        arg7 = v2.d f* v2.d
        v2.d = v2.d f+ v2.d
        v3.d = fconvert.s(3f)
        v2.d = v3.d f- v2.d
        arg7 = arg7 f* v2.d
        v2.d = arg7 * arg7
        arg7 = v2.d f* (v3.d f- (arg7 + arg7))
        v2.d = 0f
        arg7 = arg7 f+ v2.d

v2.q = *(arg2 + 0x14)
v3.q = *(x21 + 0x14)
float v4 = *(arg2 + 0x1c)
float v5 = *(x21 + 0x1c)
int128_t v2_1
v2_1.d = vsub_f32(v2, v3).d f* arg7
v2_1:4.d = v2_1:4.d f* arg7
float128 v2_2 = vadd_f32(v3, v2_1)
v3.d = v5 + arg7 * (v4 - v5)
*(entry_x8 + 0x14) = v2_2.q
entry_x8[7] = v3.d
v2_2.d = *x21
v3.d = *arg2
v3.d = v3.d f- v2_2.d
v3.d = arg7 f* v3.d
v2_2.d = v2_2.d f+ v3.d
*entry_x8 = v2_2.d
v2_2 = *(arg2 + 4)
v3 = *(x21 + 4)
float128 v4_1 = vmulq_f32(v2_2, v3, 0)
int128_t v5_1 = vdup_laneq_s32(v4_1, 3)
int128_t v6_1 = vdup_laneq_s32(v4_1, 1)
uint128_t v0 =
    vcgtq_f32(0f, vadd_f32(vadd_f32(vadd_f32(v5_1, v4_1), v6_1), vextq_s8(v4_1, v4_1, 8)))
float128 v6_2 = vnegq_f32(v2_2)
float128 v0_3
v0_3.d = vsubq_f32(vbslq_s8(vdupq_laneq_s32(v0, 0), v6_2, v2_2), v3).d f* arg7
v0_3:4.d = v0_3:4.d f* arg7
v0_3:8.d = v0_3:8.d f* arg7
v0_3:0xc.d = v0_3:0xc.d f* arg7
float128 v0_4 = vaddq_f32(v3, v0_3)
float128 v1 = vmulq_f32(v0_4, v0_4, 0)
uint128_t v2_3 = vdupq_laneq_s32(v1, 3)
float128 v2_5 = vaddq_f32(vdupq_laneq_s32(v1, 1), vaddq_f32(v2_3, v1))
float128 v1_2
v1_2.d = sqrt(vaddq_f32(vdupq_laneq_s32(v1, 2), v2_5).d)
*(entry_x8 + 4) = vdivq_f32(v0_4, vdupq_laneq_s32(v1_2, 0))
