// 函数: _Z8DrawPathPK4Vec2iiP6XAssetf10ColorRgbaIf
// 地址: 0xb97000
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v15
int64_t var_a0 = entry_v15.q
int64_t v14
int64_t var_98 = v14
double v13
double var_90 = v13
double v12
double var_88 = v12
int64_t v11
int64_t var_80 = v11
int128_t entry_v10
int64_t var_78 = entry_v10.q
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
float var_1e4 = arg7
int32_t var_a4 = arg6

if (arg3 s>= 2)
    v9 = arg5.q
    Vec2 const* x20_1 = arg1
    int64_t var_1a8
    float128 v2
    float128 v3
    float128 v4
    
    if (arg3 != 2)
        uint64_t x10_1 = zx.q(arg3 - 1)
        int64_t x11_1
        
        if (x10_1 - 1 u>= 4)
            int64_t i_4 = (x10_1 - 1) & 0xfffffffffffffffc
            void* __offset(Vec2, 0x10) x14_1 = x20_1 + 0x10
            x11_1 = i_4 | 1
            void var_1a0
            void* x15_1 = &var_1a0
            arg5 = 0x3f000000
            int64_t i_3 = i_4
            int64_t i
            
            do
                void* x17_1 = x14_1 - 0x10
                *x14_1
                v2.d = *(x14_1 + 4)
                *(x14_1 + 8)
                v2:4.d = *(x14_1 + 0xc)
                *(x14_1 + 0x10)
                v2:8.d = *(x14_1 + 0x14)
                arg7 = *(x14_1 + 0x18)
                v2:0xc.d = *(x14_1 + 0x1c)
                x14_1 += 0x20
                v3.d = *x17_1
                v4.d = *(x17_1 + 4)
                v3:4.d = *(x17_1 + 8)
                v4:4.d = *(x17_1 + 0xc)
                v3:8.d = *(x17_1 + 0x10)
                v4:8.d = *(x17_1 + 0x14)
                v3:0xc.d = *(x17_1 + 0x18)
                v4:0xc.d = *(x17_1 + 0x1c)
                i = i_3
                i_3 -= 4
                float128 v5_1 = vsubq_f32(arg7, v3)
                arg7 = vsubq_f32(v2, v4)
                v2 = vmulq_f32(v5_1, arg5, 0)
                v3 = vmulq_f32(arg7, arg5, 0)
                *x15_1 = v2.d
                *(x15_1 + 4) = v3.d
                *(x15_1 + 8) = v2:4.d
                *(x15_1 + 0xc) = v3:4.d
                *(x15_1 + 0x10) = v2:8.d
                *(x15_1 + 0x14) = v3:8.d
                *(x15_1 + 0x18) = v2:0xc.d
                *(x15_1 + 0x1c) = v3:0xc.d
                x15_1 += 0x20
            while (i != 4)
            
            if (x10_1 - 1 != i_4)
                goto label_b970bc
        else
            x11_1 = 1
        label_b970bc:
            int64_t i_2 = x10_1 - x11_1
            int64_t* x11_2 = &(&var_1a8)[x11_1]
            void* x12_3 = (x11_1 << 3) + x20_1 + 8
            int64_t i_1
            
            do
                arg7 = (*x12_3).d
                v2.q = *(x12_3 - 0x10)
                i_1 = i_2
                i_2 -= 1
                x12_3 += 8
                *x11_2 = vmul_f32(vsub_f32(arg7, v2), 0x3f000000, 0).q
                x11_2 = &x11_2[1]
            while (i_1 != 1)
    
    entry_v10.q = *x20_1
    arg7 = 0x3f000000
    var_1a8 = vmul_f32(vsub_f32((*(x20_1 + 8)).d, entry_v10), arg7, 0).q
    int128_t v0_1
    v0_1.q = *(x20_1 + ((sx.q(arg3) - 1) << 3))
    v2.q = *(x20_1 + (zx.q(arg3 - 2) << 3))
    (&var_1a8)[sx.q(arg3) - 1] = vmul_f32(vsub_f32(v0_1, v2), arg7, 0).q
    
    if (arg2 s>= 2)
        int128_t v0_3
        v0_3.d = var_1a8:4.d
        v2.d = float.s(0x42b40000)
        v2.d = v9.d f* v2.d
        int64_t x25_1 = 0
        v11.d = fconvert.s(0.5f)
        v14.d = v2.d f* v2.d
        entry_v15.d = fconvert.s(3f)
        entry_v15:4.d = fconvert.s(3f)
        
        while (true)
            arg7 = (*(x20_1 + ((x25_1 + 1) << 3))).d
            v2.q = (&var_1a8)[x25_1 + 1]
            v3.d = v9.d f* fconvert.s(25f)
            v4.d = fconvert.s(-0.5f)
            float128 var_1e0_1 = v2
            int128_t v2_1 = vsub_f32(entry_v10, arg7)
            v2 = vmul_f32(v2_1, v2_1, 0)
            v2.d = v2.d f+ v2:4.d
            v2.d = sqrt(v2.d)
            v2.d = v2.d f/ v3.d
            
            if (v2.d f< 0f)
                v3.d = v4.d
            else
                v3.d = v11.d
            
            v2.d = v2.d f+ v3.d
            uint32_t temp0_1 = vcvts_s32_f32(v2.d)
            v2.d = var_1e4
            v8.d = float.s(temp0_1)
            v2.d = v8.d f* v2.d
            v2.d = vrndm_f32(v2.d)
            
            if (v2.d f< 0f)
                v3.d = v4.d
            else
                v3.d = v11.d
            
            v2.d = v2.d f+ v3.d
            uint32_t temp0_3 = vcvts_s32_f32(v2.d)
            uint32_t x8_4
            
            if (x25_1 == zx.q(arg2 - 2))
                x8_4 = temp0_3
            else
                x8_4 = temp0_1
            
            if (x8_4 s>= 1)
                v4.d = (&var_1a8)[x25_1].d
                int128_t v2_2 = vmul_f32(entry_v10, entry_v15, 0)
                v3 = vmul_f32(arg7, entry_v15, 0)
                int128_t v1_1 = vadd_f32(arg7, arg7)
                v4:4.d = v0_3.d
                int128_t v0_5 = vadd_f32(vadd_f32(entry_v10, entry_v10), v4)
                v2 = vsub_f32(v3, v2_2)
                int128_t v0_6 = vsub_f32(v0_5, v1_1)
                arg7 = vsub_f32(v2, vadd_f32(v4, v4))
                int32_t x28_1 = 0
                float128 var_1d0_1 = v4
                v12 = vadd_f32(v0_6, var_1e0_1)
                v13 = vsub_f32(arg7, var_1e0_1)
                v0_3 = entry_v10
                
                while (true)
                    arg7 = (float.s(x28_1) f+ v11.d) f/ v8.d
                    v2.d = v12.d f* arg7
                    v2:4.d = v12:4.d f* arg7
                    v3.d = v13.d f* arg7
                    v3:4.d = v13:4.d f* arg7
                    v2.d = v2.d f* arg7
                    v2:4.d = v2:4.d f* arg7
                    v3.d = v3.d f* arg7
                    v3:4.d = v3:4.d f* arg7
                    v2.d = v2.d f* arg7
                    v2:4.d = v2:4.d f* arg7
                    arg7 = vadd_f32(entry_v10, vadd_f32(v4:4.d f* v4.d f* arg7, vadd_f32(v3, v2)))
                    int128_t v0_7 = vsub_f32(v0_3, arg7)
                    v0_3 = vmul_f32(v0_7, v0_7, 0)
                    v0_3.d = v0_3.d f+ v0_3:4.d
                    
                    if (not(v0_3.d f< v14.d))
                        v0_3.q = *(x20_1 + ((x25_1 + 1) << 3))
                        int128_t v0_8 = vsub_f32(v0_3, arg7)
                        v0_3 = vmul_f32(v0_8, v0_8, 0)
                        v0_3.d = v0_3.d f+ v0_3:4.d
                        
                        if (not(v0_3.d f< v14.d))
                            int64_t var_1c0_1 = arg7.q
                            int64_t var_1b0 = SpriteColorSet(&var_a4, gRgbaINone)
                            arg1, v0_3, v2, v3, v4 = DrawImageColorScale(arg4, &var_1b0, 
                                var_1c0_1.d, var_1c0_1:4.d, v9.d, v9.d)
                            v4 = var_1d0_1
                    
                    if (x8_4 - 1 == x28_1)
                        break
                    
                    v0_3.q = *(x20_1 + (x25_1 << 3))
                    x28_1 += 1
            
            if (x25_1 + 1 == zx.q(arg2 - 1))
                break
            
            entry_v10.q = *(x20_1 + ((x25_1 + 1) << 3))
            x25_1 += 1
            v0_3.d = var_1e0_1:4.d

entry_v10.q = var_78
entry_v15.q = var_a0
