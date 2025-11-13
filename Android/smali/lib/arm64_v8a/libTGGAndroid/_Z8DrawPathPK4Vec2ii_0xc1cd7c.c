// 函数: _Z8DrawPathPK4Vec2ii
// 地址: 0xc1cd7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_a0 = v14
double v13
double var_90 = v13
double v12
double var_88 = v12
int128_t entry_v11
int64_t var_80 = entry_v11.q
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
float128 entry_v8
int64_t var_68 = entry_v8.q
int64_t entry_x20
int64_t var_10 = entry_x20

if (arg3 s>= 2)
    Vec2 const* x19_1 = arg1
    int64_t var_1a0
    float128 v0
    float128 v1
    float128 v2
    float128 v4
    float128 v5
    
    if (arg3 != 2)
        uint64_t x10_1 = zx.q(arg3 - 1)
        int64_t x11_1
        
        if (x10_1 - 1 u>= 4)
            int64_t i_4 = (x10_1 - 1) & 0xfffffffffffffffc
            void* __offset(Vec2, 0x10) x14_1 = x19_1 + 0x10
            x11_1 = i_4 | 1
            void var_198
            void* x15_1 = &var_198
            v0.d = 0x3f000000
            v0:4.d = 0x3f000000
            v0:8.d = 0x3f000000
            v0:0xc.d = 0x3f000000
            int64_t i_3 = i_4
            int32_t i
            
            do
                void* x17_1 = x14_1 - 0x10
                v1.d = *x14_1
                v2.d = *(x14_1 + 4)
                v1:4.d = *(x14_1 + 8)
                v2:4.d = *(x14_1 + 0xc)
                v1:8.d = *(x14_1 + 0x10)
                v2:8.d = *(x14_1 + 0x14)
                v1:0xc.d = *(x14_1 + 0x18)
                v2:0xc.d = *(x14_1 + 0x1c)
                x14_1 += 0x20
                float128 v3
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
                v5 = vsubq_f32(v1, v3)
                v1 = vsubq_f32(v2, v4)
                v2 = vmulq_f32(v5, v0, 0)
                v3 = vmulq_f32(v1, v0, 0)
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
                goto label_c1ce28
        else
            x11_1 = 1
        label_c1ce28:
            int64_t i_2 = x10_1 - x11_1
            int64_t* x11_2 = &(&var_1a0)[x11_1]
            void* x12_3 = (x11_1 << 3) + x19_1 + 8
            v0.d = 0x3f000000
            v0:4.d = 0x3f000000
            int64_t i_1
            
            do
                v1.q = *x12_3
                v2.q = *(x12_3 - 0x10)
                i_1 = i_2
                i_2 -= 1
                x12_3 += 8
                *x11_2 = vmul_f32(vsub_f32(v1, v2), v0, 0).q
                x11_2 = &x11_2[1]
            while (i_1 != 1)
    
    entry_v8.q = *x19_1
    v0.q = *(x19_1 + 8)
    v1.d = 0x3f000000
    v1:4.d = 0x3f000000
    var_1a0 = vmul_f32(vsub_f32(v0, entry_v8), v1, 0).q
    int128_t v0_2
    v0_2.q = *(x19_1 + ((sx.q(arg3) - 1) << 3))
    v2.q = *(x19_1 + (zx.q(arg3 - 2) << 3))
    (&var_1a0)[sx.q(arg3) - 1] = vmul_f32(vsub_f32(v0_2, v2), v1, 0).q
    
    if (arg2 s>= 1)
        int128_t v0_4
        v0_4.d = var_1a0:4.d
        int64_t x25_1 = 0
        v9.d = fconvert.s(15f)
        v10.d = fconvert.s(0.5f)
        entry_v11.d = fconvert.s(3f)
        entry_v11:4.d = fconvert.s(3f)
        
        while (true)
            v1.q = *(x19_1 + ((x25_1 + 1) << 3))
            v4.q = (&var_1a0)[x25_1 + 1]
            int128_t v2_1 = vsub_f32(entry_v8, v1)
            double v2_2 = vmul_f32(v2_1, v2_1, 0)
            v2_2.d = v2_2.d f+ v2_2:4.d
            v2_2.d = sqrt(v2_2.d)
            v2_2.d = v2_2.d f/ v9.d
            v2_2.d = v2_2.d f+ v10.d
            uint32_t temp0_1 = vcvts_s32_f32(v2_2.d)
            
            if (temp0_1 s>= 1)
                v5.d = (&var_1a0)[x25_1].d
                int128_t v2_3 = vmul_f32(entry_v8, entry_v11, 0)
                int128_t v2_4 = vsub_f32(vmul_f32(v1, entry_v11, 0), v2_3)
                int128_t v3_2 = vadd_f32(entry_v8, entry_v8)
                v5:4.d = v0_4.d
                int128_t v1_2 = vadd_f32(v1, v1)
                int128_t v0_5 = vadd_f32(v3_2, v5)
                int128_t v3_3 = vadd_f32(v5, v5)
                v0_4 = vsub_f32(v0_5, v1_2)
                int128_t v1_3 = vsub_f32(v2_4, v3_3)
                int32_t x28_1 = 0
                v12 = vadd_f32(v0_4, v4)
                v13 = vsub_f32(v1_3, v4)
                v14.d = float.s(temp0_1)
                v1 = entry_v8
                float128 var_1c0_1 = v4
                float128 var_1b0_1 = v5
                
                while (true)
                    v0_4.d = float.s(x28_1)
                    v0_4.d = v0_4.d f+ v10.d
                    v0_4.d = v0_4.d f/ v14.d
                    v2_4.d = v12.d f* v0_4.d
                    v2_4:4.d = v12:4.d f* v0_4.d
                    v3_3.d = v13.d f* v0_4.d
                    v3_3:4.d = v13:4.d f* v0_4.d
                    v2_4.d = v2_4.d f* v0_4.d
                    v2_4:4.d = v2_4:4.d f* v0_4.d
                    v3_3.d = v3_3.d f* v0_4.d
                    v3_3:4.d = v3_3:4.d f* v0_4.d
                    v2_4.d = v2_4.d f* v0_4.d
                    v2_4:4.d = v2_4:4.d f* v0_4.d
                    v0_4.d = v5.d f* v0_4.d
                    v0_4:4.d = v5:4.d f* v0_4.d
                    v0_4 = vadd_f32(entry_v8, vadd_f32(v0_4, vadd_f32(v3_3, v2_4)))
                    int128_t v1_4 = vsub_f32(v1, v0_4)
                    v1 = vmul_f32(v1_4, v1_4, 0)
                    v1.d = v1.d f+ v1:4.d
                    v2_4.d = float.s(0x451c4000)
                    
                    if (not(v1.d f< v2_4.d))
                        v1.q = *(x19_1 + ((x25_1 + 1) << 3))
                        v2_4.d = float.s(0x451c4000)
                        int128_t v1_5 = vsub_f32(v1, v0_4)
                        v1 = vmul_f32(v1_5, v1_5, 0)
                        v1.d = v1.d f+ v1:4.d
                        
                        if (not(v1.d f< v2_4.d))
                            v1.d = v0_4:4.d
                            v2_4.d = fconvert.s(6f)
                            entry_x20 = (entry_x20 & 0xffffffff00000000) | zx.q(*COLOR_COAST)
                            arg1, arg3, v0_4, v1, v2_4, v3_3, v4, v5 =
                                CircleDraw(entry_x20, 0, arg3, v0_4.d)
                            v5 = var_1b0_1
                    
                    if (temp0_1 - 1 == x28_1)
                        break
                    
                    v1.q = *(x19_1 + (x25_1 << 3))
                    x28_1 += 1
                
                v4 = var_1c0_1
            
            if (x25_1 + 1 == zx.q(arg2))
                break
            
            entry_v8.q = *(x19_1 + ((x25_1 + 1) << 3))
            v0_4.d = v4:4.d
            x25_1 += 1

entry_v8.q = var_68
entry_v11.q = var_80
