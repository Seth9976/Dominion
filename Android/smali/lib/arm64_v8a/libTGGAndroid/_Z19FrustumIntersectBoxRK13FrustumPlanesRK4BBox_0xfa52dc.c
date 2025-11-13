// 函数: _Z19FrustumIntersectBoxRK13FrustumPlanesRK4BBox
// 地址: 0xfa52dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v2
v2.d = *arg2
uint128_t v0
v0.d = *(arg2 + 4)
uint128_t v1
v1.d = *(arg2 + 8)
v2:4.d = *(arg2 + 0xc)
v0:4.d = *(arg2 + 0x10)
v1:4.d = *(arg2 + 0x14)
int32_t temp0 = *arg1
int128_t v3
v3.d = temp0
v3:4.d = temp0
uint128_t v4
v4.d = *(arg1 + 8)
int32_t temp0_1 = *(arg1 + 0xc)
float128 v5
v5.d = temp0_1
v5:4.d = temp0_1
v5:8.d = temp0_1
v5:0xc.d = temp0_1
uint128_t v6
v6.d = *arg1
v4.d = v1.d f* v4.d
v4:4.d = v1:4.d f* v4.d
float128 v3_1
v3_1:8.q = vmul_f32(v2, v3, 0).q
v6.d = v0.d f* v6.d
v6:4.d = v0:4.d f* v6.d
float128 v3_2 = vaddq_f32(v3_1, vzip1q_s32(v6, v6))
uint128_t v6_2 = vdupq_laneq_s32(v4, 1)
float128 v4_2 = vaddq_f32(v3_2, vdupq_laneq_s32(v4, 0))
float128 v3_3 = vaddq_f32(v3_2, v6_2)
float128 v4_3 = vaddq_f32(v5, v4_2)
float128 v6_3 = vaddq_f32(v5, v3_3)
v3_3.d = 1
v3_3:4.d = 1
v3_3:8.d = 1
v3_3:0xc.d = 1
float128 v4_6
v4_6.d = vaddvq_u32((vcltzq_f32(v4_3, 0) & v3_3) - vcltzq_f32(v6_3, 0))

if (v4_6.d != 8)
    v4_6.d = *(arg1 + 0x10)
    uint128_t v5_1
    v5_1.d = *(arg1 + 0x14)
    v6_3.d = *(arg1 + 0x18)
    int32_t temp0_3 = *(arg1 + 0x1c)
    float128 v7
    v7.d = temp0_3
    v7:4.d = temp0_3
    v7:8.d = temp0_3
    v7:0xc.d = temp0_3
    v4_6.d = v2.d f* v4_6.d
    v4_6:4.d = v2:4.d f* v4_6.d
    v5_1.d = v0.d f* v5_1.d
    v5_1:4.d = v0:4.d f* v5_1.d
    v6_3.d = v1.d f* v6_3.d
    v6_3:4.d = v1:4.d f* v6_3.d
    v4_6:8.q = v4_6.q
    float128 v4_7 = vaddq_f32(v4_6, vzip1q_s32(v5_1, v5_1))
    float128 v5_3 = vdupq_laneq_s32(v6_3, 1)
    float128 v6_5 = vaddq_f32(v4_7, vdupq_laneq_s32(v6_3, 0))
    float128 v4_8 = vaddq_f32(v4_7, v5_3)
    float128 v5_4 = vaddq_f32(v7, v6_5)
    float128 v4_9 = vaddq_f32(v7, v4_8)
    uint128_t v3_5
    v3_5.d = vaddvq_u32((vcltzq_f32(v5_4, 0) & v3_3) - vcltzq_f32(v4_9, 0))
    
    if (v3_5.d != 8)
        v3_5.d = *(arg1 + 0x20)
        uint128_t v4_10
        v4_10.d = *(arg1 + 0x24)
        uint128_t v5_5
        v5_5.d = *(arg1 + 0x28)
        int32_t temp0_5 = *(arg1 + 0x2c)
        v6_5.d = temp0_5
        v6_5:4.d = temp0_5
        v6_5:8.d = temp0_5
        v6_5:0xc.d = temp0_5
        v3_5.d = v2.d f* v3_5.d
        v3_5:4.d = v2:4.d f* v3_5.d
        v4_10.d = v0.d f* v4_10.d
        v4_10:4.d = v0:4.d f* v4_10.d
        v5_5.d = v1.d f* v5_5.d
        v5_5:4.d = v1:4.d f* v5_5.d
        v3_5:8.q = v3_5.q
        float128 v3_6 = vaddq_f32(v3_5, vzip1q_s32(v4_10, v4_10))
        float128 v4_12 = vdupq_laneq_s32(v5_5, 1)
        float128 v5_7 = vaddq_f32(v3_6, vdupq_laneq_s32(v5_5, 0))
        float128 v3_7 = vaddq_f32(v3_6, v4_12)
        float128 v5_8 = vaddq_f32(v6_5, v5_7)
        float128 v4_13 = vaddq_f32(v6_5, v3_7)
        v3_7.d = 1
        v3_7:4.d = 1
        v3_7:8.d = 1
        v3_7:0xc.d = 1
        uint128_t v4_15
        v4_15.d = vaddvq_u32((vcltzq_f32(v5_8, 0) & v3_7) - vcltzq_f32(v4_13, 0))
        
        if (v4_15.d != 8)
            v4_15.d = *(arg1 + 0x30)
            uint128_t v5_10
            v5_10.d = *(arg1 + 0x34)
            v6_5.d = *(arg1 + 0x38)
            int32_t temp0_7 = *(arg1 + 0x3c)
            v7.d = temp0_7
            v7:4.d = temp0_7
            v7:8.d = temp0_7
            v7:0xc.d = temp0_7
            v4_15.d = v2.d f* v4_15.d
            v4_15:4.d = v2:4.d f* v4_15.d
            v5_10.d = v0.d f* v5_10.d
            v5_10:4.d = v0:4.d f* v5_10.d
            v6_5.d = v1.d f* v6_5.d
            v6_5:4.d = v1:4.d f* v6_5.d
            v4_15:8.q = v4_15.q
            float128 v4_16 = vaddq_f32(v4_15, vzip1q_s32(v5_10, v5_10))
            float128 v5_12 = vdupq_laneq_s32(v6_5, 1)
            float128 v6_7 = vaddq_f32(v4_16, vdupq_laneq_s32(v6_5, 0))
            float128 v4_17 = vaddq_f32(v4_16, v5_12)
            float128 v5_13 = vaddq_f32(v7, v6_7)
            float128 v4_18 = vaddq_f32(v7, v4_17)
            float128 v3_9
            v3_9.d = vaddvq_u32((vcltzq_f32(v5_13, 0) & v3_7) - vcltzq_f32(v4_18, 0))
            
            if (v3_9.d != 8)
                v3_9.d = *(arg1 + 0x40)
                uint128_t v4_19
                v4_19.d = *(arg1 + 0x44)
                uint128_t v5_14
                v5_14.d = *(arg1 + 0x48)
                int32_t temp0_9 = *(arg1 + 0x4c)
                v6_7.d = temp0_9
                v6_7:4.d = temp0_9
                v6_7:8.d = temp0_9
                v6_7:0xc.d = temp0_9
                v3_9.d = v2.d f* v3_9.d
                v3_9:4.d = v2:4.d f* v3_9.d
                v4_19.d = v0.d f* v4_19.d
                v4_19:4.d = v0:4.d f* v4_19.d
                v5_14.d = v1.d f* v5_14.d
                v5_14:4.d = v1:4.d f* v5_14.d
                v3_9:8.q = v3_9.q
                float128 v3_10 = vaddq_f32(v3_9, vzip1q_s32(v4_19, v4_19))
                uint128_t v4_21 = vdupq_laneq_s32(v5_14, 1)
                float128 v5_16 = vaddq_f32(v3_10, vdupq_laneq_s32(v5_14, 0))
                float128 v3_11 = vaddq_f32(v3_10, v4_21)
                float128 v5_17 = vaddq_f32(v6_7, v5_16)
                float128 v4_22 = vaddq_f32(v6_7, v3_11)
                v3_11.d = 1
                v3_11:4.d = 1
                v3_11:8.d = 1
                v3_11:0xc.d = 1
                uint128_t v4_24
                v4_24.d = vaddvq_u32((vcltzq_f32(v5_17, 0) & v3_11) - vcltzq_f32(v4_22, 0))
                
                if (v4_24.d != 8)
                    v4_24.d = *(arg1 + 0x50)
                    int128_t v5_19
                    v5_19.d = *(arg1 + 0x54)
                    v6_7.d = *(arg1 + 0x58)
                    v2.d = v2.d f* v4_24.d
                    v2:4.d = v2:4.d f* v4_24.d
                    int32_t temp0_11 = *(arg1 + 0x5c)
                    v4_24.d = temp0_11
                    v4_24:4.d = temp0_11
                    v4_24:8.d = temp0_11
                    v4_24:0xc.d = temp0_11
                    v0.d = v0.d f* v5_19.d
                    v0:4.d = v0:4.d f* v5_19.d
                    v1.d = v1.d f* v6_7.d
                    v1:4.d = v1:4.d f* v6_7.d
                    v2:8.q = v2.q
                    uint128_t v0_1 = vzip1q_s32(v0, v0)
                    float128 v5_20 = vdupq_laneq_s32(v1, 1)
                    uint128_t v1_1 = vdupq_laneq_s32(v1, 0)
                    float128 v0_2 = vaddq_f32(v2, v0_1)
                    float128 v1_2 = vaddq_f32(v0_2, v1_1)
                    float128 v0_3 = vaddq_f32(v0_2, v5_20)
                    float128 v1_3 = vaddq_f32(v4_24, v1_2)
                    float128 v0_4 = vaddq_f32(v4_24, v0_3)
                    uint128_t v0_6
                    v0_6.d = vaddvq_u32((vcltzq_f32(v1_3, 0) & v3_11) - vcltzq_f32(v0_4, 0))
                    return zx.q(v0_6.d != 8 ? 1 : 0)

return 0
