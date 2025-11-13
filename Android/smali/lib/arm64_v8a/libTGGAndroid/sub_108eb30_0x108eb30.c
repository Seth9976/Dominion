// 函数: sub_108eb30
// 地址: 0x108eb30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t __saved_v8 = arg2.q
int64_t __saved_x28_1
int64_t __saved_x28 = __saved_x28_1
int64_t __saved_x27_1
int64_t __saved_x27 = __saved_x27_1
int64_t __saved_x26_1
int64_t __saved_x26 = __saved_x26_1
int64_t __saved_x25_1
int64_t __saved_x25 = __saved_x25_1
int64_t __saved_x24_1
int64_t __saved_x24 = __saved_x24_1
int64_t __saved_x23_1
int64_t __saved_x23 = __saved_x23_1
int64_t __saved_x22_1
int64_t __saved_x22 = __saved_x22_1
int64_t __saved_x21_1
int64_t __saved_x21 = __saved_x21_1
int64_t __saved_x20_1
int64_t __saved_x20 = __saved_x20_1
int64_t __saved_x19_1
int64_t __saved_x19 = __saved_x19_1
int64_t __saved_fp_1
int64_t __saved_fp = __saved_fp_1
int64_t __saved_lr_1
int64_t __saved_lr = __saved_lr_1
uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
void* x8_2 = arg1[0xd]
int64_t x24 = sx.q(arg1[9].d)
void* x19 = arg1[0x17]
void* x20 = *(x8_2 + 8)
void* x22 = *(x8_2 + 0x88)
int64_t x8_3 = sx.q(*(x20 + 4))
int64_t x25 = *(x20 + 0x30)
int128_t var_1a0
void* x9 = &var_1a0 - (((x8_3 << 2) + 0xf) & 0xfffffffffffffff0)
int64_t* x0 = _vorbis_block_alloc(arg1, x8_3 << 3)
int64_t* x0_2 = _vorbis_block_alloc(arg1, sx.q(*(x20 + 4)) << 3)
int64_t* x0_4 = _vorbis_block_alloc(arg1, sx.q(*(x20 + 4)) << 3)
int64_t x8_6 = sx.q(*(x20 + 4))
arg2.d = *(x19 + 8)
void* x9_2 = x9 - (((x8_6 << 2) + 0xf) & 0xfffffffffffffff0)
int64_t x14 = arg1[7]
int32_t* x10_8 = *(x25 + (x14 << 0x20 s>> 0x1d) + 0x328)
int64_t x10_9

x10_9 = x14 == 0 ? 0 : 0xc0

int64_t x9_5 = *(x22 + 0x68) + sx.q(*(x19 + 0xc)) * 0x60 + x10_9
int32_t var_140 = x14.d
*(arg1 + 0x4c) = x14.d
int32_t var_e0 = x24.d
int32_t var_158
int64_t var_128
int64_t x22_1
int64_t* x26_1

if (x8_6.d s<= 0)
    uint64_t x8_24
    
    if (x24.d s< 0)
        x8_24 = zx.q(x24.d + 1)
    else
        x8_24 = zx.q(x24.d)
    
    int32_t x9_9 = x8_24.d s>> 1
    var_128 = (x8_24 & 0xfffffffe) << 0x20 s>> 0x21
    var_158 = x9_9
    x22_1 = zx.q(x9_9) << 0x20 s>> 0x1e
    x26_1 = arg1
else
    uint64_t x8_8
    
    if (x24.d s< 0)
        x8_8 = zx.q(x24.d + 1)
    else
        x8_8 = zx.q(x24.d)
    
    int32_t x9_6 = x8_8.d s>> 1
    int64_t x19_1 = 0
    v13.d = fconvert.s(1f) / float.s(x24.d) * fconvert.s(4f)
    var_128 = (x8_8 & 0xfffffffe) << 0x20 s>> 0x21
    x22_1 = zx.q(x9_6) << 0x20 s>> 0x1e
    x26_1 = arg1
    var_158 = x9_6
    int64_t x8_23
    
    do
        int32_t* x24_1 = (*x26_1)[x19_1]
        x0_2[x19_1] = _vorbis_block_alloc(x26_1, x22_1)
        int64_t x0_8
        double v0_2
        x0_8, v0_2 = _vorbis_block_alloc(x26_1, x22_1)
        v0_2.d = float.s(v13.d & 0x7fffffff)
        x0[x19_1] = x0_8
        uint64_t x3_1 = zx.q(x26_1[6].d)
        uint64_t x4_1 = zx.q(x26_1[7].d)
        uint64_t x5_1 = zx.q(x26_1[8].d)
        v0_2.d = vfma_f32(-764.616211f, v0_2.d, 7.1771143e-07f)
        v0_2 = fconvert.d(v0_2.d) + 0.34499999999999997
        v15.d = fconvert.s(v0_2)
        _vorbis_apply_window(x24_1, x22 + 8, x25, x3_1, x4_1, x5_1, v0_2)
        mdct_forward(**(x22 + (x26_1[7] << 3) + 0x10), x24_1, x0[x19_1])
        double v0_3
        double v2_2
        v0_3, v2_2 = drft_forward(x22 + x26_1[7] * 0x18 + 0x20, x24_1)
        v0_3.d = v15.d f+ -764.616211f
        v0_3.d = vfma_f32(v0_3.d, float.s(*x24_1 & 0x7fffffff), 7.1771143e-07f)
        v0_3.d = fconvert.s(fconvert.d(v0_3.d) + 0.34499999999999997)
        *x24_1 = v0_3.d
        *(x9_2 + (x19_1 << 2)) = v0_3.d
        
        if (var_e0 s>= 3)
            int64_t x9_8 = 0
            int64_t x8_20 = 4
            bool cond:3_1
            
            do
                void* x10_10 = &x24_1[x9_8]
                v2_2.d = *(x10_10 + 4)
                int32_t v3_1 = *(x10_10 + 8)
                cond:3_1 = x9_8 + 3 s< x24 - 1
                x9_8 += 2
                v2_2.d = v2_2.d f* v2_2.d
                v2_2.d = vfma_f32(v2_2.d, v3_1, v3_1)
                v2_2.d = float.s(v2_2.d & 0x7fffffff)
                v2_2.d = vfma_f32(v15.d f+ -382.308105f, v2_2.d, 3.58855715e-07f)
                v2_2.d = fconvert.s(fconvert.d(v2_2.d) + 0.34499999999999997)
                *(x24_1 + x8_20) = v2_2.d
                v0_3.d = vmaxnm_f32(v0_3.d, v2_2.d)
                x8_20 += 4
            while (cond:3_1)
            *(x9_2 + (x19_1 << 2)) = v0_3.d
        
        x26_1 = arg1
        
        if (not(v0_3.d f<= 0f))
            v0_3.d = 0f
            *(x9_2 + (x19_1 << 2)) = 0
        
        x8_23 = sx.q(*(x20 + 4))
        x19_1 += 1
        arg2.d = vmaxnm_f32(v0_3.d, arg2.d)
    while (x19_1 s< x8_23)

int64_t x0_13 = _vorbis_block_alloc(x26_1, x22_1)
int64_t x0_15
int128_t v0_4
x0_15, v0_4 = _vorbis_block_alloc(x26_1, x22_1)
uint64_t x8_26 = zx.q(*(x20 + 4))
int64_t result
int64_t* x21_3
void* x27_2

if (x8_26.d s<= 0)
    x21_3 = x26_1
    x27_2 = x22 + 0x58
else
    x27_2 = x22 + 0x58
    v0_4.d = 0x3540a8c1
    v0_4:4.d = 0x3540a8c1
    v0_4:8.d = 0x3540a8c1
    v0_4:0xc.d = 0x3540a8c1
    uint64_t x11_1 = zx.q(var_158)
    int128_t var_180_1 = v0_4
    v0_4.d = 0xc43f2770
    v0_4:4.d = 0xc43f2770
    v0_4:8.d = 0xc43f2770
    v0_4:0xc.d = 0xc43f2770
    int128_t var_190_1 = v0_4
    v0_4.q = 0x3fd6147ae147ae14
    v0_4:8.q = 0x3fd6147ae147ae14
    var_1a0 = v0_4
    int64_t i_5 = x11_1 & 0xfffffffc
    int32_t* x9_12 = x10_8
    int64_t x10_14 = 0
    
    do
        int64_t x22_3 = (*arg1)[x10_14]
        int64_t x8_30 = sx.q(x9_12[x10_14 + 1])
        int128_t* x24_2 = x0[x10_14]
        float128* x26_2 = x22_3 + (var_128 << 2)
        *(arg1 + 0x4c) = var_140
        int64_t x0_17 = _vorbis_block_alloc(arg1, 0x78)
        int64_t* x28_1 = &x0_4[x10_14]
        *x28_1 = x0_17
        float128 v0_5
        float128 v2_3
        float128 v3_2
        float128 v4_1
        v0_5, v2_3, v3_2, v4_1 = memset(x0_17, 0, 0x78)
        
        if (var_e0 s>= 2)
            int64_t i_6 = 0
            
            if (var_158 u< 4)
            label_108f07c:
                int64_t x9_15 = i_6 << 2
                int32_t* x8_44 = x22_3 + (var_128 << 2) + x9_15
                void* x9_16 = x24_2 + x9_15
                int64_t i_4 = x11_1 - i_6
                int64_t i
                
                do
                    int32_t x11_3 = *x9_16
                    x9_16 += 4
                    i = i_4
                    i_4 -= 1
                    v0_5.d = float.s(x11_3 & 0x7fffffff)
                    v0_5.d = vfma_f32(-764.616211f, v0_5.d, 7.1771143e-07f)
                    v0_5.q = fconvert.d(v0_5.d)
                    v0_5.q = v0_5.q f+ 0.34499999999999997
                    v0_5.d = fconvert.s(v0_5.q)
                    *x8_44 = v0_5.d
                    x8_44 = &x8_44[1]
                while (i != 1)
            else
                if (x26_2 u< x24_2 + (x11_1 << 2))
                    i_6 = 0
                
                if (x26_2 u< x24_2 + (x11_1 << 2) && x24_2 u< x22_3 + ((var_128 + x11_1) << 2))
                    goto label_108f07c
                
                int64_t i_3 = i_5
                v4_1 = var_1a0
                float128* x9_14 = x26_2
                int128_t* x10_15 = x24_2
                int64_t i_1
                
                do
                    v0_5 = *x10_15
                    x10_15 = &x10_15[1]
                    i_1 = i_3
                    i_3 -= 4
                    float128 v1_4 = vfmaq_f32(var_190_1, var_180_1, vcvtq_f32_u32(v0_5 & true))
                    float128 v0_8 = vcvt_f64_f32(v1_4)
                    float128 v1_5 = vcvt_high_f64_f32(v1_4)
                    float128 v0_9 = vaddq_f64(v0_8, v4_1)
                    float128 v1_6 = vaddq_f64(v1_5, v4_1)
                    *x9_14 = vcvt_high_f32_f64(vcvt_f32_f64(v0_9, v0_9), v1_6)
                    x9_14 = &x9_14[1]
                while (i_1 != 4)
                i_6 = i_5
                
                if (i_6 != x11_1)
                    goto label_108f07c
        
        _vp_noisemask(x9_5, x26_2, x0_13)
        int128_t v1_7
        v1_7.d = *(x9_2 + (x10_14 << 2))
        _vp_tonemask(x9_5, x22_3, x0_15, arg2, v1_7)
        _vp_offset_and_mix(x9_5, x0_13, x0_15, 1, x22_3, x24_2, x26_2)
        void* x19_3 = &x10_8[x8_30]
        int64_t x8_47 = sx.q(*(x19_3 + 0x404))
        
        if (*(x25 + (x8_47 << 2) + 0x528) != 1)
            result = 0xffffffff
            goto label_108f7bc
        
        *(*x28_1 + 0x38) = floor1_fit(arg1, *(*x27_2 + (x8_47 << 3)), x26_2, x22_3)
        
        if (vorbis_bitrate_managed(arg1) != 0 && *(*x28_1 + 0x38) != 0)
            void* x21_2 = x27_2
            _vp_offset_and_mix(x9_5, x0_13, x0_15, 2, x22_3, x24_2, x26_2)
            *(*x28_1 + 0x70) =
                floor1_fit(arg1, *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), x26_2, x22_3)
            x27_2 = x21_2
            _vp_offset_and_mix(x9_5, x0_13, x0_15, 0, x22_3, x24_2, x26_2)
            **x28_1 = floor1_fit(arg1, *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), x26_2, x22_3)
            int64_t* x10_16 = *x28_1
            *(*x28_1 + 8) = floor1_interpolate_fit(arg1, *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), 
                *x10_16, x10_16[7], 0x2492)
            int64_t* x10_17 = *x28_1
            *(*x28_1 + 0x10) = floor1_interpolate_fit(arg1, 
                *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), *x10_17, x10_17[7], 0x4924)
            int64_t* x10_18 = *x28_1
            *(*x28_1 + 0x18) = floor1_interpolate_fit(arg1, 
                *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), *x10_18, x10_18[7], 0x6db6)
            int64_t* x10_19 = *x28_1
            *(*x28_1 + 0x20) = floor1_interpolate_fit(arg1, 
                *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), *x10_19, x10_19[7], 0x9249)
            int64_t* x10_20 = *x28_1
            *(*x28_1 + 0x28) = floor1_interpolate_fit(arg1, 
                *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), *x10_20, x10_20[7], 0xb6db)
            int64_t* x10_21 = *x28_1
            *(*x28_1 + 0x30) = floor1_interpolate_fit(arg1, 
                *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), *x10_21, x10_21[7], 0xdb6d)
            void* x10_22 = *x28_1
            *(*x28_1 + 0x40) = floor1_interpolate_fit(arg1, 
                *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), *(x10_22 + 0x38), *(x10_22 + 0x70), 
                0x2492)
            void* x10_23 = *x28_1
            *(*x28_1 + 0x48) = floor1_interpolate_fit(arg1, 
                *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), *(x10_23 + 0x38), *(x10_23 + 0x70), 
                0x4924)
            void* x10_24 = *x28_1
            *(*x28_1 + 0x50) = floor1_interpolate_fit(arg1, 
                *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), *(x10_24 + 0x38), *(x10_24 + 0x70), 
                0x6db6)
            void* x10_25 = *x28_1
            *(*x28_1 + 0x58) = floor1_interpolate_fit(arg1, 
                *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), *(x10_25 + 0x38), *(x10_25 + 0x70), 
                0x9249)
            void* x10_26 = *x28_1
            *(*x28_1 + 0x60) = floor1_interpolate_fit(arg1, 
                *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), *(x10_26 + 0x38), *(x10_26 + 0x70), 
                0xb6db)
            void* x10_27 = *x28_1
            *(*x28_1 + 0x68) = floor1_interpolate_fit(arg1, 
                *(*x21_2 + (sx.q(*(x19_3 + 0x404)) << 3)), *(x10_27 + 0x38), *(x10_27 + 0x70), 
                0xdb6d)
        
        x8_26 = sx.q(*(x20 + 4))
        x9_12 = x10_8
        x10_14 += 1
    while (x10_14 s< x8_26)
    
    x21_3 = arg1

*(x19 + 8) = arg2.d
void* x28_2 = x9_2 - ((((x8_26 & 0xffffffff) << 0x20 s>> 0x1d) + 0xf) & 0xfffffffffffffff0)
void* x26_3 = x28_2 - ((((x8_26 & 0xffffffff) << 0x20 s>> 0x1e) + 0xf) & 0xfffffffffffffff0)
int32_t x0_56 = vorbis_bitrate_managed(x21_3)
vorbis_bitrate_managed(x21_3)
void* x22_5 = x22
int64_t x24_4

x24_4 = x0_56 == 0 ? 7 : 0

void* var_e8_1 = x20
int64_t var_128_1 = x25 + 0x1350
int64_t x8_101
int64_t x27_5

do
    int64_t x19_6 = *(x19 + (x24_4 << 3) + 0x10)
    oggpack_write(x19_6, 0, 1)
    int128_t v0_12
    int128_t v1_8
    int128_t v2_4
    int128_t v3_3
    int128_t v4_2
    int128_t v5_1
    int128_t v6_1
    int128_t v7_1
    v0_12, v1_8, v2_4, v3_3, v4_2, v5_1, v6_1, v7_1 =
        oggpack_write(x19_6, sx.q(var_140), zx.q(*(x22_5 + 0x50)))
    
    if (x21_3[7] != 0)
        oggpack_write(x19_6, x21_3[6], 1)
        v0_12, v1_8, v2_4, v3_3, v4_2, v5_1, v6_1, v7_1 = oggpack_write(x19_6, x21_3[8], 1)
    
    int64_t x8_91 = zx.q(*(x20 + 4))
    
    if (x8_91.d s>= 1)
        int64_t x19_7 = 0
        
        do
            int32_t x0_63
            x0_63, v0_12, v1_8, v2_4, v3_3, v4_2, v5_1, v6_1, v7_1 = floor1_encode(x19_6, arg1, 
                *(*x27_2 + (sx.q(x10_8[sx.q(x10_8[1 + x19_7]) + 0x101]) << 3)), 
                *(x0_4[x19_7] + (x24_4 << 3)), x0_2[x19_7])
            *(x9 + (x19_7 << 2)) = x0_63
            x19_7 += 1
            x8_91 = sx.q(*(var_e8_1 + 4))
        while (x19_7 s< x8_91)
        
        x22_5 = x22
        x20 = var_e8_1
        x21_3 = arg1
    
    *(x25 + x21_3[7] * 0x3c + (x24_4 << 2) + 0x14c4)
    *(x26_3 - 0x10) = x8_91.d
    int32_t* x19_8 = x10_8
    x27_5 = x24_4
    _vp_couple_quantize_normalize(nop, nop)
    
    if (*x19_8 s>= 1)
        int64_t i_2 = 0
        
        do
            int32_t x9_51 = *(x20 + 4)
            int64_t x19_9 = sx.q(x19_8[i_2 + 0x111])
            
            if (x9_51 s>= 1)
                int64_t j = 0
                int32_t x4_7 = 0
                
                do
                    if (i_2 == zx.q(x10_8[1 + j]))
                        *(x26_3 + (sx.q(x4_7) << 2)) = *(x9 + (j << 2)) != 0 ? 1 : 0
                        *(x28_2 + (sx.q(x4_7) << 3)) = x0_2[j]
                        x9_51 = *(x20 + 4)
                        x4_7 += 1
                    
                    j += 1
                while (j s< sx.q(x9_51))
            
            void* x8_95 = x25 + (x19_9 << 2)
            (*(*(_residue_P + (sx.q(*(x8_95 + 0x828)) << 3)) + 0x28))(arg1, 
                *(*(x22_5 + 0x60) + (x19_9 << 3)), x28_2, x26_3)
            int64_t x8_96 = sx.q(*(x20 + 4))
            
            if (x8_96.d s>= 1)
                int64_t x9_58 = 0
                int32_t x5_6 = 0
                
                do
                    if (i_2 == zx.q(x10_8[1 + x9_58]))
                        *(x28_2 + (sx.q(x5_6) << 3)) = x0_2[x9_58]
                        x5_6 += 1
                    
                    x9_58 += 1
                while (x9_58 s< x8_96)
            
            x22_5 = x22
            (*(*(_residue_P + (sx.q(*(x8_95 + 0x828)) << 3)) + 0x30))(x19_6, arg1, 
                *(*(x22_5 + 0x60) + (x19_9 << 3)), x28_2, x26_3)
            x19_8 = x10_8
            i_2 += 1
        while (i_2 s< sx.q(*x19_8))
    
    x21_3 = arg1
    x24_4 = x27_5 + 1
    
    if (vorbis_bitrate_managed(x21_3) == 0)
        x8_101 = 7
    else
        x8_101 = 0xe
while (x27_5 u< x8_101)
result = 0
label_108f7bc:

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
