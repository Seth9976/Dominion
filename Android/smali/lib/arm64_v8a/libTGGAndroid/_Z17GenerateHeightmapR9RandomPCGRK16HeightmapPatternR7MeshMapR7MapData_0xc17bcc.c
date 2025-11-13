// 函数: _Z17GenerateHeightmapR9RandomPCGRK16HeightmapPatternR7MeshMapR7MapData
// 地址: 0xc17bcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_80 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8

if (*(arg2 + 0x1c4) s< 1)
    return 

void* __offset(MeshMap, 0x30000) x9_1 = arg3 + 0x30000
MeshMap& x20_1 = arg3
RandomPCG& x24_1 = arg1
int64_t i = 0
void* __offset(MeshMap, 0x14) x11_1 = arg3 + 0x14
void* __offset(MeshMap, 0x20) x10_1 = arg3 + 0x20
void* __offset(MeshMap, 0x8) x27_1 = arg3 + 8
v8.d = 0f
v9.d = fconvert.s(-1f)
v10.d = fconvert.s(1f)
void* __offset(MeshMap, 0x2ffd8) x8_1 = arg3 + 0x2ffd8
void* __offset(MeshMap, 0xfffc4) x22_1 = arg3 + 0xfffc4
RandomPCG& var_10098_1 = arg1

do
    uint64_t x8_5 = zx.q(*(arg2 + i * 0x1c + 4))
    
    if (x8_5.d u> 9)
        pthread_kill(pthread_self(), 6)
        return MapLake(XNoReturn()) __tailcall
    
    float128 v0
    uint128_t v1
    uint128_t v2
    uint128_t v3
    uint128_t v4
    uint128_t v5
    float128 v6
    float128 v7
    
    switch (x8_5)
        case 0
            void* x24_2 = arg2 + i * 0x1c
            v0.d = *(x24_2 + 8)
            float cosp
            float sinp
            arg1, arg3, v0, v1, v2, v3, v4, v5, v6, v7 = sincosf(&sinp, &cosp, v0.d)
            v0.d = sinp
            v4.d = data_18c7568.d
            v5.d = data_18c7568:4.d
            v1.d = *(x24_2 + 0xc)
            v3.d = *(x24_2 + 0x10)
            v2.d = cosp
            v1.d = v1.d f+ v4.d
            v3.d = v3.d f+ v5.d
            
            if (x24_2 + 0x15 u<= x20_1 || x24_2 + 0x14 u>= x9_1)
                int32_t temp0_1 = *(x24_2 + 0x14)
                v4.d = temp0_1
                v4:4.d = temp0_1
                v4:8.d = temp0_1
                v4:0xc.d = temp0_1
                x24_1 = var_10098_1
                int64_t j = 0
                v1 = vdupq_laneq_s32(v1, 0)
                v3 = vdupq_laneq_s32(v3, 0)
                v2 = vdupq_laneq_s32(v2, 0)
                v0 = vdupq_laneq_s32(v0, 0)
                
                do
                    void* x9_12 = x20_1 + j
                    v5.d = *x9_12
                    v6.d = *(x9_12 + 4)
                    v7.d = *(x9_12 + 8)
                    v5:4.d = *(x9_12 + 0xc)
                    v6:4.d = *(x9_12 + 0x10)
                    v7:4.d = *(x9_12 + 0x14)
                    v5:8.d = *(x9_12 + 0x18)
                    v6:8.d = *(x9_12 + 0x1c)
                    v7:8.d = *(x9_12 + 0x20)
                    v5:0xc.d = *(x9_12 + 0x24)
                    v6:0xc.d = *(x9_12 + 0x28)
                    v7:0xc.d = *(x9_12 + 0x2c)
                    j += 0x30
                    float128 v16_1 = vsubq_f32(v5, v1)
                    float128 v17_1 = vsubq_f32(v6, v3)
                    v5 = vaddq_f32(v7, 
                        vmulq_f32(v4, vaddq_f32(vmulq_f32(v2, v16_1, 0), vmulq_f32(v0, v17_1, 0)), 
                            0))
                    *(x9_12 + 8) = v5.d
                    *(x9_12 + 0x14) = v5:4.d
                    *(x9_12 + 0x20) = v5:8.d
                    *(x9_12 + 0x2c) = v5:0xc.d
                while (j != 0x30000)
            else
                x24_1 = var_10098_1
                
                for (int64_t j_1 = 0; j_1 != 0x30000; )
                    void* x9_3 = x20_1 + j_1
                    v5.d = *x9_3
                    v6.d = *(x9_3 + 4)
                    v4.d = *(x24_2 + 0x14)
                    v7.d = *(x9_3 + 8)
                    j_1 += 0xc
                    v5.d = v5.d f- v1.d
                    v6.d = v6.d f- v3.d
                    v5.d = v2.d f* v5.d
                    v6.d = v0.d f* v6.d
                    v5.d = v5.d f+ v6.d
                    v4.d = v4.d f* v5.d
                    v4.d = v7.d f+ v4.d
                    *(x9_3 + 8) = v4.d
        case 1
            void* x8_7 = arg2 + i * 0x1c
            v0.q = *(x8_7 + 0xc)
            v1.q = data_18c7568
            v1 = vadd_f32(v0, v1)
            
            if (x8_7 + 9 u<= x20_1 || x8_7 + 8 u>= x9_1)
                v3.d = *(x8_7 + 8)
                int64_t j_2 = 0
                v0 = vdupq_laneq_s32(v1, 0)
                v1 = vdupq_laneq_s32(v1, 1)
                v2 = vdupq_laneq_s32(v3, 0)
                uint128_t v4_1 = vcltzq_f32(v3, 0)
                uint128_t v3_3 = vcgtzq_f32(v3, 0)
                uint128_t v4_2 = vmovn_s32(v4_1)
                v5 = vmovn_s32(v3_3)
                v3 = vdup_laneq_s16(v4_2, 0)
                v4 = vdup_laneq_s16(v5, 0)
                
                do
                    void* x9_13 = x20_1 + j_2
                    v5.d = *x9_13
                    v6.d = *(x9_13 + 4)
                    v7.d = *(x9_13 + 8)
                    v5:4.d = *(x9_13 + 0xc)
                    v6:4.d = *(x9_13 + 0x10)
                    v7:4.d = *(x9_13 + 0x14)
                    v5:8.d = *(x9_13 + 0x18)
                    v6:8.d = *(x9_13 + 0x1c)
                    v7:8.d = *(x9_13 + 0x20)
                    v5:0xc.d = *(x9_13 + 0x24)
                    v6:0xc.d = *(x9_13 + 0x28)
                    v7:0xc.d = *(x9_13 + 0x2c)
                    j_2 += 0x30
                    float128 v16_5 = vsubq_f32(v5, v0)
                    float128 v17_3 = vsubq_f32(v6, v1)
                    float128 v5_1 = vaddq_f32(v7, 
                        vmulq_f32(v2, 
                            vsqrtq_f32(vaddq_f32(vmulq_f32(v16_5, v16_5, 0), 
                                vmulq_f32(v17_3, v17_3, 0))), 
                            0))
                    uint128_t v6_3
                    v6_3.d = zx.d((v3 & vmovn_s32(vcgtzq_f32(v5_1, 0))).w)
                    v6_3:4.d = zx.d(v6_3:2.w)
                    v6_3:8.d = zx.d(v6_3:4.w)
                    v6_3:0xc.d = zx.d(v6_3:6.w)
                    v6_3.d <<= 0x1f
                    v6_3:4.d <<= 0x1f
                    v6_3:8.d <<= 0x1f
                    v6_3:0xc.d <<= 0x1f
                    float128 v5_2 = v5_1 & vcgezq_s32(v6_3)
                    uint128_t v6_7
                    v6_7.d = zx.d((v4 & vmovn_s32(vcltzq_f32(v5_2, 0))).w)
                    v6_7:4.d = zx.d(v6_7:2.w)
                    v6_7:8.d = zx.d(v6_7:4.w)
                    v6_7:0xc.d = zx.d(v6_7:6.w)
                    v6_7.d <<= 0x1f
                    v6_7:4.d <<= 0x1f
                    v6_7:8.d <<= 0x1f
                    v6_7:0xc.d <<= 0x1f
                    v5 = v5_2 & vcgezq_s32(v6_7)
                    *(x9_13 + 8) = v5.d
                    *(x9_13 + 0x14) = v5:4.d
                    *(x9_13 + 0x20) = v5:8.d
                    *(x9_13 + 0x2c) = v5:0xc.d
                while (j_2 != 0x30000)
            else
                for (int64_t j_3 = 0; j_3 != 0x30000; )
                    void* x10_3 = x20_1 + j_3
                    v0.q = *x10_3
                    v2.d = *(x8_7 + 8)
                    v3.d = *(x10_3 + 8)
                    j_3 += 0xc
                    int128_t v0_1 = vsub_f32(v0, v1)
                    v0 = vmul_f32(v0_1, v0_1, 0)
                    v0.d = v0.d f+ v0:4.d
                    v0.d = sqrt(v0.d)
                    v0.d = v2.d f* v0.d
                    v0.d = v3.d f+ v0.d
                    *(x10_3 + 8) = v0.d
                    v2.d = *(x8_7 + 8)
                    bool n_1
                    
                    if (v0.d f> 0f)
                        v2.d f- v8.d
                        n_1 = unimplemented  {fccmp s2, s8, #0, gt}
                    else
                        n_1 = false
                    
                    if (n_1)
                        v0.d = v8.d
                    else
                        v0.d = v0.d
                    
                    *(x10_3 + 8) = v0.d
                    v2.d = *(x8_7 + 8)
                    bool v_1
                    bool z_1
                    bool n_2
                    
                    if (v0.d f< 0f)
                        v2.d f- v8.d
                        v_1 = unimplemented  {fccmp s2, s8, #0x4, mi}
                        z_1 = v2.d f== v8.d
                        n_2 = unimplemented  {fccmp s2, s8, #0x4, mi}
                    else
                        n_2 = false
                        z_1 = true
                        v_1 = false
                    
                    if (not(z_1) && n_2 == v_1)
                        v0.d = v8.d
                    else
                        v0.d = v0.d
                    
                    *(x10_3 + 8) = v0.d
        case 2
            arg1, arg3, v0, v1, v2, v3, v4, v5, v6, v7 =
                ApplyNoise(x24_1, arg2 + i * 0x1c + 8, x20_1, 0x4000)
        case 3
            arg1, arg3, v0, v1, v2, v3, v4, v5, v6, v7 =
                ApplyDots(x24_1, arg2 + i * 0x1c + 8, x20_1, 0x4000)
        case 4
            int64_t j_4 = 0
            v0.d = float.s(0x461c4000)
            v1.d = float.s(0xc61c4000)
            
            do
                v2.d = *(x27_1 + j_4)
                j_4 += 0xc
                
                if (v2.d f> v1.d)
                    v1.d = v2.d
                else
                    v1.d = v1.d
                
                if (v2.d f< v0.d)
                    v0.d = v2.d
                else
                    v0.d = v0.d
            while (j_4 != 0x30000)
            
            int64_t j_5 = 0
            v1.d = v1.d f- v0.d
            
            do
                void* x9_5 = x20_1 + j_5
                v2.d = *(x9_5 + 0x14)
                v3.d = *(x9_5 + 8)
                j_5 += 0x18
                v2.d = v2.d f- v0.d
                v2.d = v2.d f/ v1.d
                v3.d = v3.d f- v0.d
                v4.d = v2.d f+ v2.d
                v3.d = v3.d f/ v1.d
                v2.d f- 0f
                v4.d = v4.d f+ v9.d
                
                if (v2.d f> 0f)
                    v4.d = v4.d
                else
                    v4.d = v9.d
                
                bool v_2
                bool n_3
                
                if (v2.d f> 0f)
                    v2.d f- v10.d
                    v_2 = unimplemented  {fccmp s2, s10, #0x8, hi}
                    n_3 = unimplemented  {fccmp s2, s10, #0x8, hi}
                else
                    n_3 = true
                    v_2 = false
                
                v2.d = v3.d f+ v3.d
                v2.d = v2.d f+ v9.d
                
                if (n_3 == v_2)
                    v4.d = v10.d
                else
                    v4.d = v4.d
                
                v3.d f- 0f
                
                if (v3.d f> 0f)
                    v2.d = v2.d
                else
                    v2.d = v9.d
                
                bool v_3
                bool n_4
                
                if (v3.d f> 0f)
                    v3.d f- v10.d
                    v_3 = unimplemented  {fccmp s3, s10, #0x8, hi}
                    n_4 = unimplemented  {fccmp s3, s10, #0x8, hi}
                else
                    n_4 = true
                    v_3 = false
                
                if (n_4 == v_3)
                    v2.d = v10.d
                else
                    v2.d = v2.d
                
                *(x9_5 + 8) = v2.d
                *(x9_5 + 0x14) = v4.d
            while (j_5 != 0x30000)
        case 5
            void* __offset(MeshMap, 0x20) x9_6 = x10_1
            int64_t j_9 = 0x3ffc
            v5.d = 0x80000000
            v5:4.d = 0x80000000
            v5:8.d = 0x80000000
            v5:0xc.d = 0x80000000
            int64_t j_6
            
            do
                v0.d = *(x9_6 - 0x18)
                v1.d = *(x9_6 - 0x14)
                v2.d = *(x9_6 - 0x10)
                v0:4.d = *(x9_6 - 0xc)
                v1:4.d = *(x9_6 - 8)
                v2:4.d = *(x9_6 - 4)
                v0:8.d = *x9_6
                v1:8.d = *(x9_6 + 4)
                v2:8.d = *(x9_6 + 8)
                v0:0xc.d = *(x9_6 + 0xc)
                v1:0xc.d = *(x9_6 + 0x10)
                v2:0xc.d = *(x9_6 + 0x14)
                void* __offset(MeshMap, 0x2c) x11_2 = x9_6 + 0xc
                j_6 = j_9
                j_9 -= 4
                v3 = vbslq_s8(v5, v0, vsqrtq_f32(vabsq_f32(v0)))
                *(x9_6 - 0x18) = v3.d
                *(x9_6 - 0xc) = v3:4.d
                *x9_6 = v3:8.d
                x9_6 += 0x30
                *x11_2 = v3:0xc.d
            while (j_6 != 4)
            v0.d = *x8_1
            v1.d = *(x8_1 + 0xc)
            v2.d = *(x8_1 + 0x18)
            v3.d = *(x8_1 + 0x24)
            v4.d = fabs(v0.d)
            v4.d = sqrt(v4.d)
            v4 = vbslq_s8(v5, v0, v4)
            v0.d = fabs(v1.d)
            v0.d = sqrt(v0.d)
            v0 = vbslq_s8(v5, v1, v0)
            v1.d = fabs(v2.d)
            v1.d = sqrt(v1.d)
            v1 = vbslq_s8(v5, v2, v1)
            v2.d = fabs(v3.d)
            v2.d = sqrt(v2.d)
            v2 = vbslq_s8(v5, v3, v2)
            *x8_1 = v4.d
            *(x8_1 + 0xc) = v0.d
            *(x8_1 + 0x18) = v1.d
            *(x8_1 + 0x24) = v2.d
        case 6
            int32_t var_10080[0x2ff0]
            
            for (int64_t j_7 = 0; j_7 != 0x4000; j_7 += 1)
                int64_t x9_8 = sx.q(*(x20_1 + (j_7 << 2) + 0xeffc0))
                int32_t k = *(x20_1 + (x9_8 << 2) + 0xfffc0)
                
                if (k == 0xffffffff)
                    v1.d = 0f
                else
                    void* x11_3 = x22_1 + (x9_8 << 2)
                    v0.d = 0f
                    int32_t x9_9 = -1
                    
                    do
                        v1.d = *(x20_1 + muls.dp.d(k, 0xc) + 8)
                        k = *x11_3
                        x11_3 += 4
                        x9_9 += 1
                        v0.d = v0.d f+ v1.d
                    while (k != 0xffffffff)
                    
                    v1.d = 0f
                    
                    if (x9_9 u>= 2)
                        v1.d = float.s(x9_9 + 1)
                        v1.d = v0.d f/ v1.d
                
                var_10080[j_7] = v1.d
            
            void* __offset(MeshMap, 0x14) x9_11 = x11_1
            
            for (int64_t j_8 = 0; j_8 != 0x10000; )
                void* x10_8 = &var_10080 + j_8
                v0.d = *x10_8
                v1.d = *(x10_8 + 4)
                j_8 += 8
                *(x9_11 - 0xc) = v0.d
                *x9_11 = v1.d
                x9_11 += 0x18
        case 7
            arg1, arg3, v0, v1, v2, v3, v4, v5, v6, v7 =
                ApplySetSealevel(arg2 + i * 0x1c + 8, x20_1, arg3.d)
        case 8
            arg1, arg3, v0, v1, v2, v3, v4, v5, v6, v7 = ApplyErosion(x20_1, arg4)
        case 9
            arg1, arg3, v0, v1, v2, v3, v4, v5, v6, v7 = ApplyCleanCoast(arg1, x20_1)
    
    i += 1
while (i s< sx.q(*(arg2 + 0x1c4)))
