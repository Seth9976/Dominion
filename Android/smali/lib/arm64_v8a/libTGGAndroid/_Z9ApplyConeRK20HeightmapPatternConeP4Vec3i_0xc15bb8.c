// 函数: _Z9ApplyConeRK20HeightmapPatternConeP4Vec3i
// 地址: 0xc15bb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

int128_t v0
v0.q = *(arg1 + 4)
uint128_t v1
v1.q = data_18c7568
uint64_t x8_1 = zx.q(arg3)
uint128_t v0_1 = vadd_f32(v0, v1)
int64_t i_4
uint128_t v2
float128 v3
float128 v4

if (arg3 u< 4 || (arg1 + 1 u> arg2 && arg2 + x8_1 * 0xc u> arg1))
    i_4 = 0
label_c15c00:
    int64_t i_2 = x8_1 - i_4
    void* x9_4 = arg2 + i_4 * 0xc + 8
    v1.d = 0f
    int64_t i
    
    do
        v2.q = *(x9_4 - 8)
        v3.d = *arg1
        v4.d = *x9_4
        int128_t v2_1 = vsub_f32(v2, v0_1)
        v2 = vmul_f32(v2_1, v2_1, 0)
        v2.d = v2.d f+ v2:4.d
        v2.d = sqrt(v2.d)
        v2.d = v3.d f* v2.d
        v2.d = v4.d f+ v2.d
        *x9_4 = v2.d
        v3.d = *arg1
        bool n_1
        
        if (v2.d f> 0f)
            v3.d f- v1.d
            n_1 = unimplemented  {fccmp s3, s1, #0, gt}
        else
            n_1 = false
        
        if (n_1)
            v2.d = v1.d
        else
            v2.d = v2.d
        
        *x9_4 = v2.d
        v3.d = *arg1
        bool v_1
        bool z_1
        bool n_2
        
        if (v2.d f< 0f)
            v3.d f- v1.d
            v_1 = unimplemented  {fccmp s3, s1, #0x4, mi}
            z_1 = v3.d f== v1.d
            n_2 = unimplemented  {fccmp s3, s1, #0x4, mi}
        else
            n_2 = false
            z_1 = true
            v_1 = false
        
        if (not(z_1) && n_2 == v_1)
            v2.d = v1.d
        else
            v2.d = v2.d
        
        i = i_2
        i_2 -= 1
        *x9_4 = v2.d
        x9_4 += 0xc
    while (i != 1)
else
    i_4 = x8_1 & 0xfffffffc
    v1 = vdupq_laneq_s32(v0_1, 0)
    v2 = vdupq_laneq_s32(v0_1, 1)
    void* __offset(Vec3, 0x20) x10_1 = arg2 + 0x20
    int64_t i_3 = i_4
    int64_t i_1
    
    do
        v3.d = *(x10_1 - 0x20)
        v4.d = *(x10_1 - 0x1c)
        float128 v5
        v5.d = *(x10_1 - 0x18)
        v3:4.d = *(x10_1 - 0x14)
        v4:4.d = *(x10_1 - 0x10)
        v5:4.d = *(x10_1 - 0xc)
        v3:8.d = *(x10_1 - 8)
        v4:8.d = *(x10_1 - 4)
        v5:8.d = *x10_1
        v3:0xc.d = *(x10_1 + 4)
        v4:0xc.d = *(x10_1 + 8)
        v5:0xc.d = *(x10_1 + 0xc)
        void* __offset(Vec3, 0x2c) x13_1 = x10_1 + 0xc
        i_1 = i_3
        i_3 -= 4
        float128 v6_1 = vsubq_f32(v3, v1)
        float128 v7_1 = vsubq_f32(v4, v2)
        float128 v6_3 = vaddq_f32(vmulq_f32(v6_1, v6_1, 0), vmulq_f32(v7_1, v7_1, 0))
        float128 v7_2
        v7_2.q = *arg1
        float128 v6_4
        v6_4.d = vsqrtq_f32(v6_3).d f* v7_2.d
        v6_4:4.d = v6_4:4.d f* v7_2.d
        v6_4:8.d = v6_4:8.d f* v7_2.d
        v6_4:0xc.d = v6_4:0xc.d f* v7_2.d
        float128 v3_1 = vaddq_f32(v5, v6_4)
        *(x10_1 - 0x18) = v3_1.d
        *(x10_1 - 0xc) = v3_1:4.d
        *x10_1 = v3_1:8.d
        *x13_1 = v3_1:0xc.d
        v4.q = *arg1
        int128_t v5_2 = vmovn_s32(vcgtzq_f32(v3_1, 0))
        int128_t v4_3
        v4_3.d = sx.d((vdup_laneq_s16(vcltz_f32(v4, 0), 0) & v5_2).w)
        v4_3:4.d = sx.d(v4_3:2.w)
        v4_3:8.d = sx.d(v4_3:4.w)
        v4_3:0xc.d = sx.d(v4_3:6.w)
        float128 v3_2 = v3_1 & not.o(v4_3)
        *(x10_1 - 0x18) = v3_2.d
        *(x10_1 - 0xc) = v3_2:4.d
        *x10_1 = v3_2:8.d
        *x13_1 = v3_2:0xc.d
        v4_3.q = *arg1
        v5 = vmovn_s32(vcltzq_f32(v3_2, 0))
        v4.d = sx.d((vdup_laneq_s16(vcgtz_f32(v4_3, 0), 0) & v5).w)
        v4:4.d = sx.d(v4:2.w)
        v4:8.d = sx.d(v4:4.w)
        v4:0xc.d = sx.d(v4:6.w)
        v3 = v3_2 & not.o(v4)
        *(x10_1 - 0x18) = v3.d
        *(x10_1 - 0xc) = v3:4.d
        *x10_1 = v3:8.d
        x10_1 += 0x30
        *x13_1 = v3:0xc.d
    while (i_1 != 4)
    
    if (i_4 != x8_1)
        goto label_c15c00
