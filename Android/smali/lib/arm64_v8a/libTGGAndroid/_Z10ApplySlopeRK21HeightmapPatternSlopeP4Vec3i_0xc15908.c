// 函数: _Z10ApplySlopeRK21HeightmapPatternSlopeP4Vec3i
// 地址: 0xc15908
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float cosp
float sinp
int64_t result
uint128_t v0_1
uint128_t v1
uint128_t v2
uint128_t v3
uint128_t v4
uint128_t v5
float128 v6
uint128_t v7
float128 v17
float128 v18
float128 v19
result, v0_1, v1, v2, v3, v4, v5, v6, v7, v17, v18, v19 = sincosf(&sinp, &cosp, *arg1)

if (arg3 s>= 1)
    v2.d = *(arg1 + 4)
    v3.d = *(arg1 + 8)
    v4.d = data_18c7568.d
    v5.d = data_18c7568:4.d
    v1.d = cosp
    v0_1.d = sinp
    v2.d = v2.d f+ v4.d
    v3.d = v3.d f+ v5.d
    uint64_t x9_1 = zx.q(arg3)
    int64_t i_4
    
    if (arg3 u< 4 || (arg1 + 0xd u> arg2 && arg1 + 0xc u< arg2 + x9_1 * 0xc))
        i_4 = 0
    label_c1598c:
        void* x11_2 = arg2 + i_4 * 0xc + 8
        int64_t i_2 = x9_1 - i_4
        int64_t i
        
        do
            v4.d = *(x11_2 - 8)
            v5.d = *(x11_2 - 4)
            v6.d = *(arg1 + 0xc)
            v7.d = *x11_2
            i = i_2
            i_2 -= 1
            v4.d = v4.d f- v2.d
            v5.d = v5.d f- v3.d
            v4.d = v1.d f* v4.d
            v5.d = v0_1.d f* v5.d
            v4.d = v4.d f+ v5.d
            v4.d = v6.d f* v4.d
            v4.d = v7.d f+ v4.d
            *x11_2 = v4.d
            x11_2 += 0xc
        while (i != 1)
    else
        int32_t temp0_1 = *(arg1 + 0xc)
        v6.d = temp0_1
        v6:4.d = temp0_1
        v6:8.d = temp0_1
        v6:0xc.d = temp0_1
        i_4 = x9_1 & 0xfffffffc
        v4 = vdupq_laneq_s32(v2, 0)
        v5 = vdupq_laneq_s32(v3, 0)
        v7 = vdupq_laneq_s32(v1, 0)
        uint128_t v16_1 = vdupq_laneq_s32(v0_1, 0)
        void* __offset(Vec3, 0x20) x11_3 = arg2 + 0x20
        int64_t i_3 = i_4
        int64_t i_1
        
        do
            v17.d = *(x11_3 - 0x20)
            v18.d = *(x11_3 - 0x1c)
            v19.d = *(x11_3 - 0x18)
            v17:4.d = *(x11_3 - 0x14)
            v18:4.d = *(x11_3 - 0x10)
            v19:4.d = *(x11_3 - 0xc)
            v17:8.d = *(x11_3 - 8)
            v18:8.d = *(x11_3 - 4)
            v19:8.d = *x11_3
            v17:0xc.d = *(x11_3 + 4)
            v18:0xc.d = *(x11_3 + 8)
            v19:0xc.d = *(x11_3 + 0xc)
            void* __offset(Vec3, 0x2c) x14_1 = x11_3 + 0xc
            i_1 = i_3
            i_3 -= 4
            float128 v20_1 = vsubq_f32(v17, v4)
            float128 v21_1 = vsubq_f32(v18, v5)
            v17 = vaddq_f32(v19, 
                vmulq_f32(v6, vaddq_f32(vmulq_f32(v7, v20_1, 0), vmulq_f32(v16_1, v21_1, 0)), 0))
            *(x11_3 - 0x18) = v17.d
            *(x11_3 - 0xc) = v17:4.d
            *x11_3 = v17:8.d
            x11_3 += 0x30
            *x14_1 = v17:0xc.d
        while (i_1 != 4)
        
        if (i_4 != x9_1)
            goto label_c1598c

return result
