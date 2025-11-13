// 函数: spPathConstraint_computeWorldPositions
// 地址: 0xfb8ba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_a0 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t var_78 = arg8.q
int64_t var_70 = arg7.q
void* x8 = *(arg1 + 0x38)
int64_t x24 = *(arg1 + 0x18)
int128_t v8
v8.d = *(arg1 + 0x20)
int64_t* result = *(arg1 + 0x48)
int32_t var_e4 = arg4
uint128_t v0
uint128_t v1
float128 v2
int128_t v3
int64_t v5
int128_t v6
int128_t v7

if (*(arg1 + 0x40) != arg3 * 3 + 2)
    if (result != 0)
        _spFree()
    
    result, arg4, v0, v1, v2, v3, v5, v6, v7 = _spMalloc(zx.q(arg3 * 3 + 2) << 0x20 s>> 0x1e, 
        "..\..\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x100)
    *(arg1 + 0x48) = result
    *(arg1 + 0x40) = arg3 * 3 + 2

int64_t x26 = sx.q(*(arg2 + 0x48))
int32_t x11 = *(arg2 + 0x70)
int64_t x8_2 = x26 * 0x2aaaaaab
uint32_t i_13 = (x8_2 u>> 0x20).d + (x8_2 u>> 0x3f).d

if (*(arg2 + 0x74) == 0)
    int32_t* x19_2 = *(arg2 + 0x68)
    int32_t x27_1
    
    x27_1 = x11 != 0 ? -1 : -2
    
    int32_t x8_9 = x27_1 + i_13
    v1.d = x19_2[sx.q(x8_9)]
    v0.d = v8.d f* v1.d
    
    if (arg5 == 0)
        v8.d = v8.d
    else
        v8.d = v0.d
    
    uint128_t var_e0 = v1
    
    if (arg6 != 0 && arg3 s>= 2)
        uint64_t x8_10 = zx.q(arg3)
        int64_t x9_5
        
        if (x8_10 - 1 u>= 8)
            int64_t i_12 = (x8_10 - 1) & 0xfffffffffffffff8
            v0 = vdupq_laneq_s32(v1, 0)
            x9_5 = i_12 | 1
            void* x12_5 = x8 + 0x14
            int64_t i_10 = i_12
            int64_t i
            
            do
                v2 = *x12_5
                i = i_10
                i_10 -= 8
                v1 = vmulq_f32(v0, *(x12_5 - 0x10), 0)
                v2 = vmulq_f32(v0, v2, 0)
                *(x12_5 - 0x10) = v1
                *x12_5 = v2
                x12_5 += 0x20
            while (i != 8)
            v1 = var_e0
            
            if (x8_10 - 1 != i_12)
                goto label_fb94b0
        else
            x9_5 = 1
        label_fb94b0:
            int64_t i_7 = x8_10 - x9_5
            void* x10_11 = x8 + (x9_5 << 2)
            int64_t i_1
            
            do
                v0.d = *x10_11
                i_1 = i_7
                i_7 -= 1
                v0.d = v1.d f* v0.d
                *x10_11 = v0.d
                x10_11 += 4
            while (i_1 != 1)
    
    int32_t* x22_1 = *(arg1 + 0x58)
    
    if (*(arg1 + 0x50) != 8)
        if (x22_1 != 0)
            _spFree(x22_1)
        
        int32_t* x0_17
        x0_17, arg4, v0, v1, v2, v3, v5, v6, v7 =
            _spMalloc(0x20, "..\..\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x112)
        v1 = var_e0
        x22_1 = x0_17
        *(arg1 + 0x58) = x0_17
        *(arg1 + 0x50) = 8
    
    if (arg3 s>= 1)
        int64_t x21_1 = 0
        int64_t x25_2 = 0
        uint64_t x26_2 = zx.q(arg3)
        int32_t x28_1 = 0
        int32_t fp_3 = -1
        
        while (true)
            arg8.d = *(x8 + (x25_2 << 2))
            v8.d = v8.d f+ arg8.d
            float i_2
            
            if (x11 == 0)
                if (v8.d f>= 0f)
                    if (v8.d f<= v1.d)
                        i_2 = v8.d
                    else
                        if (fp_3 != 0xfffffffd)
                            v0, v1, v2 = spVertexAttachment_computeWorldVertices(arg2, x24, 
                                zx.q(x26.d - 6), 4, x22_1, 0, 2)
                            v1 = var_e0
                        
                        arg8.d = x22_1[2]
                        v11.d = x22_1[3]
                        v0.d = *x22_1
                        v2.d = x22_1[1]
                        v12.d = v8.d f- v1.d
                        v1.d = arg8.d f- v0.d
                        v0.d = v11.d f- v2.d
                        int128_t v0_10 = atan2f(v0.d, v1.d, v2.d)
                        float cosp_1
                        float sinp_1
                        arg4, v0, v1, v2, v3, v5, v6, v7 = sincosf(&sinp_1, &cosp_1, v0_10.d)
                        v1.d = sinp_1
                        v0.d = cosp_1
                        fp_3 = -3
                        v1.d = v12.d f* v1.d
                        void* x8_48 = result + (x21_1 << 2)
                        v1.d = v11.d f+ v1.d
                        *(x8_48 + 4) = v1.d
                        *(x8_48 + 8) = v0_10.d
                        v1 = var_e0
                        v0.d = v12.d f* v0.d
                        v0.d = arg8.d f+ v0.d
                        *x8_48 = v0.d
                        x25_2 += 1
                        x21_1 += 3
                        
                        if (x25_2 == x26_2)
                            break
                        
                        continue
                    
                    goto label_fb95e8
                
                if (fp_3 != 0xfffffffe)
                    v0, v1, v2 =
                        spVertexAttachment_computeWorldVertices(arg2, x24, 2, 4, x22_1, 0, 2)
                
                arg8.d = *x22_1
                v11.d = x22_1[1]
                v0.d = x22_1[2]
                v2.d = x22_1[3]
                v1.d = v0.d f- arg8.d
                v0.d = v2.d f- v11.d
                int128_t v0_9 = atan2f(v0.d, v1.d, v2.d)
                float cosp
                float sinp
                arg4, v0, v1, v2, v3, v5, v6, v7 = sincosf(&sinp, &cosp, v0_9.d)
                v0.d = cosp
                v1.d = sinp
                fp_3 = -2
                v0.d = v8.d f* v0.d
                v1.d = v8.d f* v1.d
                void* x8_46 = result + (x21_1 << 2)
                v0.d = arg8.d f+ v0.d
                v1.d = v11.d f+ v1.d
                *x8_46 = v0.d
                *(x8_46 + 4) = v1.d
                *(x8_46 + 8) = v0_9.d
            else
                i_2, arg4, v1, v2, v3, v5, v6, v7 = fmodf(v8.d, v1.d)
                x28_1 = 0
                v1.d = var_e0.d f+ i_2
                
                if (i_2 < 0f)
                    i_2 = v1.d
                
            label_fb95e8:
                int64_t x8_42 = 0
                int64_t x9_24 = -0x200000000 + (sx.q(x28_1) << 0x20)
                int32_t x2_2 = x28_1 * 6 - 4
                
                do
                    v1.d = x19_2[sx.q(x28_1) + x8_42]
                    x9_24 += 0x100000000
                    x8_42 += 1
                    x2_2 += 6
                while (i_2 f> v1.d)
                
                if (1 - x28_1 != x8_42.d)
                    v2.d = *(x19_2 + (x9_24 s>> 0x1e))
                    i_2 = i_2 f- v2.d
                    v1.d = v1.d f- v2.d
                
                arg7.d = i_2 f/ v1.d
                int32_t x27_3 = x28_1 - 1 + x8_42.d
                
                if (fp_3 - x28_1 + 1 != x8_42.d)
                    if ((((x27_1 + i_13 + 1 - x28_1 != x8_42.d ? 1 : 0) | ((x11 != 0 ? 1 : 0) ^ 1))
                            & 1) != 0)
                        arg4, v1, v2, v3, v5, v6, v7 =
                            spVertexAttachment_computeWorldVertices(arg2, x24, x2_2, 8, x22_1, 0, 2)
                        fp_3 = x27_3
                    else
                        spVertexAttachment_computeWorldVertices(arg2, x24, zx.q(x26.d - 4), 4, 
                            x22_1, 0, 2)
                        arg4, v1, v2, v3, v5, v6, v7 =
                            spVertexAttachment_computeWorldVertices(arg2, x24, 0, 4, x22_1, 4, 2)
                        fp_3 = x8_9
                
                v1.d = *x22_1
                v2.d = x22_1[1]
                v3.d = x22_1[2]
                v5.d = x22_1[4]
                v6.d = x22_1[5]
                v7.d = x22_1[6]
                int32_t x2_1
                
                if (var_e4 == 0)
                    x2_1 = (x25_2 != 0 ? 1 : 0) & (arg8.d f== 0f ? 1 : 0)
                else
                    x2_1 = 1
                
                float var_1b0_2 = x22_1[7]
                arg4, v0, v1, v2, v3, v5, v6, v7 =
                    sub_fb984c(result, x21_1.d, x2_1, arg7, v1, v2.d, v3, x22_1[3], v5, v6, arg4)
                x28_1 = x27_3
            v1 = var_e0
            x25_2 += 1
            x21_1 += 3
            
            if (x25_2 == x26_2)
                break
else
    int32_t x3_1
    int32_t x19_1
    int32_t* x22
    int32_t* x24_1
    int128_t v0_1
    uint128_t v1_1
    float128 v2_1
    float128 v3_1
    int128_t v4_1
    int128_t v5_1
    int128_t v6_1
    int128_t v7_1
    uint128_t v16_1
    int128_t v17_1
    int128_t v18_1
    uint128_t v19_1
    int128_t v20_1
    int128_t v21_1
    int128_t v22_1
    int128_t v23_1
    
    if (x11 != 0)
        x22 = *(arg1 + 0x58)
        x19_1 = x26.d + 2
        
        if (*(arg1 + 0x50) != x19_1)
            if (x22 != 0)
                _spFree(x22)
            
            int32_t* x0_3 = _spMalloc(zx.q(x19_1) << 0x20 s>> 0x1e, 
                "..\..\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x14e)
            x22 = x0_3
            *(arg1 + 0x58) = x0_3
            *(arg1 + 0x50) = x19_1
        
        spVertexAttachment_computeWorldVertices(arg2, x24, 2, zx.q(x26.d - 2), x22, 0, 2)
        x3_1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1, v18_1, v19_1, v20_1, 
            v21_1, v22_1, v23_1 =
            spVertexAttachment_computeWorldVertices(arg2, x24, 0, 2, x22, zx.q(x26.d - 2), 2)
        v0_1.d = *x22
        x22[x26] = v0_1.d
        v0_1.d = x22[1]
        x22[sx.q(x26.d + 1)] = v0_1.d
        x24_1 = *(arg1 + 0x68)
        
        if (*(arg1 + 0x60) != i_13)
            goto label_fb8f14
        
        goto label_fb8d08
    
    x22 = *(arg1 + 0x58)
    x19_1 = x26.d - 4
    i_13 -= 1
    
    if (*(arg1 + 0x50) != x19_1)
        if (x22 != 0)
            _spFree(x22)
        
        int32_t* x0_8 = _spMalloc(zx.q(x19_1) << 0x20 s>> 0x1e, 
            "..\..\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x15b)
        x22 = x0_8
        *(arg1 + 0x58) = x0_8
        *(arg1 + 0x50) = x19_1
    
    x3_1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1, v18_1, v19_1, v20_1, v21_1, 
        v22_1, v23_1 = spVertexAttachment_computeWorldVertices(arg2, x24, 2, zx.q(x19_1), x22, 0, 2)
    x24_1 = *(arg1 + 0x68)
    int32_t x8_7
    
    if (*(arg1 + 0x60) != i_13)
    label_fb8f14:
        
        if (x24_1 != 0)
            _spFree(x24_1)
        
        int32_t* x0_12
        x0_12, x3_1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1, v18_1, v19_1, 
            v20_1, v21_1, v22_1, v23_1 = _spMalloc(zx.q(i_13) << 0x20 s>> 0x1e, 
            "..\..\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x165)
        x24_1 = x0_12
        *(arg1 + 0x68) = x0_12
        *(arg1 + 0x60) = i_13
        v19_1.q = *x22
        x8_7 = i_13 - 1
        arg8.d = fconvert.s(3f)
        arg8:4.d = fconvert.s(3f)
        
        if (i_13 s>= 1)
            goto label_fb8d24
        
        goto label_fb8f50
    
label_fb8d08:
    v19_1.q = *x22
    x8_7 = i_13 - 1
    arg8.d = fconvert.s(3f)
    arg8:4.d = fconvert.s(3f)
    uint128_t var_170_1
    int128_t var_160_1
    float128 var_150_1
    uint128_t var_140_1
    uint128_t var_130_1
    float v0_2
    
    if (i_13 s< 1)
    label_fb8f50:
        v1_1.d = v19_1:4.d
        v0_1.d = 0f
        var_140_1 = v0_1
        var_130_1 = v1_1
        v0_1.d = 0f
        var_150_1 = v0_1
        v0_1.d = 0f
        v16_1.d = 0f
        v17_1.d = 0f
        v18_1.d = 0f
        var_170_1 = v0_1
        v0_1.d = 0f
        var_160_1 = v0_1
        v0_2 = v16_1.d
        
        if (arg5 == 0)
            v0_2 = v16_1.d f/ *(*(arg2 + 0x68) + (sx.q(x8_7) << 2))
    else
    label_fb8d24:
        uint64_t i_8 = zx.q(i_13)
        void* x10_1 = &x22[4]
        v16_1.d = 0f
        v0_1.d = fconvert.s(0.1875f)
        v0_1:4.d = fconvert.s(0.1875f)
        v1_1.d = fconvert.s(0.75f)
        v1_1:4.d = fconvert.s(0.75f)
        v2_1.d = 0x3dc00000
        v2_1:4.d = 0x3dc00000
        v3_1.d = 0x3e2aaaab
        v3_1:4.d = 0x3e2aaaab
        int32_t* x11_1 = x24_1
        uint64_t i_3
        
        do
            v17_1.q = *(x10_1 - 8)
            v18_1.q = *x10_1
            i_3 = i_8
            i_8 -= 1
            int128_t v6_2 = vsub_f32(v17_1, v18_1)
            int128_t v5_2 = vadd_f32(v17_1, v17_1)
            int128_t v6_3 = vmul_f32(v6_2, arg8, 0)
            int128_t v7_2 = vsub_f32(v17_1, v19_1)
            int128_t v5_3 = vsub_f32(v19_1, v5_2)
            int128_t v4_3 = vsub_f32(v6_3, v19_1)
            v19_1.q = *(x10_1 + 8)
            int128_t v5_4 = vadd_f32(v5_3, v18_1)
            int128_t v7_3 = vmul_f32(v7_2, v1_1, 0)
            int128_t v5_5 = vmul_f32(v5_4, v0_1, 0)
            int128_t v4_5 = vmul_f32(vadd_f32(v19_1, v4_3), v2_1, 0)
            int128_t v6_4 = vadd_f32(v5_5, v5_5)
            int128_t v5_6 = vadd_f32(v7_3, v5_5)
            int128_t v7_4 = vmul_f32(v4_5, v3_1, 0)
            int128_t v6_5 = vadd_f32(v6_4, v4_5)
            int128_t v5_7 = vadd_f32(v5_6, v7_4)
            int128_t v7_5 = vadd_f32(v4_5, v6_5)
            int128_t v6_6 = vadd_f32(v6_5, v5_7)
            v5_1 = vmul_f32(v5_7, v5_7, 0)
            int128_t v4_6 = vadd_f32(v4_5, v7_5)
            v5_1.d = v5_1.d f+ v5_1:4.d
            int128_t v7_6 = vadd_f32(v7_5, v6_6)
            v6_1 = vmul_f32(v6_6, v6_6, 0)
            v5_1.d = sqrt(v5_1.d)
            v6_1.d = v6_1.d f+ v6_1:4.d
            int128_t v4_7 = vadd_f32(v4_6, v7_6)
            v7_1 = vmul_f32(v7_6, v7_6, 0)
            v5_1.d = v16_1.d f+ v5_1.d
            v6_1.d = sqrt(v6_1.d)
            v7_1.d = v7_1.d f+ v7_1:4.d
            v4_1 = vmul_f32(v4_7, v4_7, 0)
            v5_1.d = v5_1.d f+ v6_1.d
            v6_1.d = sqrt(v7_1.d)
            v4_1.d = v4_1.d f+ v4_1:4.d
            v5_1.d = v5_1.d f+ v6_1.d
            v4_1.d = sqrt(v4_1.d)
            v16_1.d = v5_1.d f+ v4_1.d
            *x11_1 = v16_1.d
            x11_1 = &x11_1[1]
            x10_1 += 0x18
        while (i_3 != 1)
        v2_1.d = v18_1:4.d
        v1_1.d = v17_1:4.d
        v0_1.d = v19_1:4.d
        var_150_1 = v2_1
        var_140_1 = v1_1
        var_130_1 = v0_1
        var_170_1 = v19_1
        var_160_1 = v0_1
        v0_2 = v16_1.d
        
        if (arg5 == 0)
            v0_2 = v16_1.d f/ *(*(arg2 + 0x68) + (sx.q(x8_7) << 2))
    
    if (arg6 != 0 && arg3 s> 1)
        uint64_t x8_8 = zx.q(arg3)
        int64_t x9_3
        
        if (x8_8 - 1 u>= 8)
            int64_t i_11 = (x8_8 - 1) & 0xfffffffffffffff8
            v1_1 = vdupq_laneq_s32(v16_1, 0)
            x9_3 = i_11 | 1
            int128_t* x12_2 = x8 + 0x14
            int64_t i_9 = i_11
            int64_t i_4
            
            do
                v3_1 = *x12_2
                i_4 = i_9
                i_9 -= 8
                v2_1 = vmulq_f32(v1_1, x12_2[-1], 0)
                v3_1 = vmulq_f32(v1_1, v3_1, 0)
                x12_2[-1] = v2_1
                *x12_2 = v3_1
                x12_2 = &x12_2[2]
            while (i_4 != 8)
            
            if (x8_8 - 1 != i_11)
                goto label_fb8fcc
        else
            x9_3 = 1
        label_fb8fcc:
            int64_t i_6 = x8_8 - x9_3
            int32_t* x10_5 = x8 + (x9_3 << 2)
            int64_t i_5
            
            do
                v1_1.d = *x10_5
                i_5 = i_6
                i_6 -= 1
                v1_1.d = v16_1.d f* v1_1.d
                *x10_5 = v1_1.d
                x10_5 = &x10_5[1]
            while (i_5 != 1)
    
    int32_t var_120
    var_120.o = v19_1
    int128_t var_110_1 = v18_1
    int128_t var_100_1 = v17_1
    uint128_t var_e0_1 = v16_1
    
    if (arg3 s>= 1)
        int64_t x8_15 = sx.q(x19_1)
        int64_t x23_1 = 0
        int64_t fp_2 = 0
        int32_t x25_1 = 0
        int32_t x27_2 = 0
        v8.d = v8.d f* v0_2
        uint64_t x19_3 = zx.q(arg3)
        v11.d = 0f
        int32_t x26_1 = -1
        
        while (true)
            arg7.d = *(x8 + (fp_2 << 2))
            v8.d = v8.d f+ arg7.d
            int128_t v0_3
            
            if (x11 != 0)
                v0_3, x3_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1, v18_1, v19_1, 
                    v20_1, v21_1, v22_1, v23_1 = fmodf(v8.d, var_e0_1.d)
                x25_1 = 0
                v1_1.d = var_e0_1.d f+ v0_3.d
                
                if (v0_3.d f< 0f)
                    v0_3.d = v1_1.d
                else
                    v0_3.d = v0_3.d
            else
                int64_t* result_1
                
                if (v8.d f>= 0f)
                    if (not(v8.d f<= var_e0_1.d))
                        v14.d = v8.d f- var_e0_1.d
                        v12.d = x22[x8_15 - 2]
                        v13.d = x22[x8_15 - 1]
                        v1_1.d = v12.d f- x22[x8_15 - 4]
                        v2_1.d = x22[x8_15 - 3]
                        int128_t v0_6 = atan2f(v13.d f- v2_1.d, v1_1.d, v2_1.d)
                        arg7 = v0_6
                        float cosp_3
                        float sinp_3
                        x3_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1, v18_1, v19_1, 
                            v20_1, v21_1, v22_1, v23_1 = sincosf(&sinp_3, &cosp_3, v0_6.d)
                        v1_1.d = sinp_3
                        result_1 = result
                        v0_2 = v14.d f* cosp_3
                        v1_1.d = v14.d f* v1_1.d
                        goto label_fb943c
                    
                    v0_3 = v8
                else
                    v12.d = *x22
                    v13.d = x22[1]
                    v2_1.d = x22[3]
                    v1_1.d = x22[2] f- v12.d
                    int128_t v0_5 = atan2f(v2_1.d f- v13.d, v1_1.d, v2_1.d)
                    arg7 = v0_5
                    float cosp_2
                    float sinp_2
                    x3_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1, v18_1, v19_1, 
                        v20_1, v21_1, v22_1, v23_1 = sincosf(&sinp_2, &cosp_2, v0_5.d)
                    v1_1.d = sinp_2
                    result_1 = result
                    v0_2 = v8.d f* cosp_2
                    v1_1.d = v8.d f* v1_1.d
                label_fb943c:
                    float* x8_31 = result_1 + (x23_1 << 2)
                    v1_1.d = v13.d f+ v1_1.d
                    *x8_31 = v12.d f+ v0_2
                    x8_31[1] = v1_1.d
                    x8_31[2] = arg7.d
                    fp_2 += 1
                    x23_1 += 3
                    
                    if (fp_2 == x19_3)
                        break
                    
                    continue
            
            void* x10_8 = &x24_1[sx.q(x25_1)]
            int64_t x9_9 = -0x200000000 + (sx.q(x25_1) << 0x20)
            int32_t x8_20 = 1 | (0x7fffffff & (x25_1 * 3)) << 1
            x25_1 -= 1
            
            do
                v1_1.d = *x10_8
                x10_8 += 4
                x9_9 += 0x100000000
                x8_20 += 6
                x25_1 += 1
            while (v0_3.d f> v1_1.d)
            
            if (x25_1 != 0)
                v2_1.d = *(x24_1 + (x9_9 s>> 0x1e))
                v0_3.d = v0_3.d f- v2_1.d
                v1_1.d = v1_1.d f- v2_1.d
            
            v0_3.d = v0_3.d f/ v1_1.d
            
            if (x26_1 != x25_1)
                v18_1.d = x22[sx.q(x8_20 - 7)]
                v19_1.d = x22[sx.q(x8_20 - 6)]
                v7_1.d = x22[sx.q(x8_20 - 5)]
                v20_1.d = x22[sx.q(x8_20 - 4)]
                v17_1.d = x22[sx.q(x8_20 - 3)]
                v21_1.d = x22[sx.q(x8_20 - 2)]
                v1_1.d = float.s(0x3cf5c28f)
                v2_1.d = 0x3bc49ba6
                v2_1:4.d = 0x3bc49ba6
                v3_1.d = float.s(0x3e99999a)
                v5_1.d = v7_1.d f+ v7_1.d
                var_110_1 = v17_1
                var_100_1 = v7_1
                v7_1.d = v7_1.d f- v18_1.d
                v16_1.d = v20_1.d f- v19_1.d
                v22_1.d = x22[sx.q(x8_20)]
                v7_1.d = v7_1.d f* v3_1.d
                v3_1.d = v16_1.d f* v3_1.d
                v23_1.d = x22[sx.q(x8_20 - 1)]
                int128_t v6_7
                v6_7:4.d = v20_1.d
                int128_t v16_2
                v16_2:4.d = v21_1.d
                int128_t v6_8 = vsub_f32(v6_7, v16_2)
                v16_2.d = v20_1.d f+ v20_1.d
                v5_1.d = v18_1.d f- v5_1.d
                v16_2.d = v19_1.d f- v16_2.d
                v7_1:4.d = v3_1.d
                v5_1.d = v5_1.d f+ v17_1.d
                v16_2.d = v16_2.d f+ v21_1.d
                v5_1.d = v5_1.d f* v1_1.d
                v1_1.d = v16_2.d f* v1_1.d
                int128_t v3_2
                v3_2:4.d = v19_1.d
                int128_t v16_3
                v16_3:4.d = v22_1.d
                v5_1:4.d = v1_1.d
                v4_1.d = 0x3e2aaaab
                v4_1:4.d = 0x3e2aaaab
                int128_t v1_3 =
                    vmul_f32(vadd_f32(v16_3, vsub_f32(vmul_f32(v6_8, arg8, 0), v3_2)), v2_1, 0)
                int128_t v3_4 = vadd_f32(v5_1, v5_1)
                int128_t v5_8 = vadd_f32(v7_1, v5_1)
                int128_t v2_2 = vmul_f32(v1_3, v4_1, 0)
                int128_t v3_5 = vadd_f32(v1_3, v3_4)
                int128_t v2_3 = vadd_f32(v5_8, v2_2)
                int128_t v4_8 = vadd_f32(v1_3, v3_5)
                double v5_9 = vmul_f32(v2_3, v2_3, 0)
                int128_t v2_4 = vadd_f32(v3_5, v2_3)
                int128_t v3_6 = vadd_f32(v1_3, v4_8)
                double v6_10 = vmul_f32(v2_4, v2_4, 0)
                int128_t v2_5 = vadd_f32(v4_8, v2_4)
                v5_9.d = v5_9.d f+ v5_9:4.d
                v6_10.d = v6_10.d f+ v6_10:4.d
                v7_1 = vmul_f32(v2_5, v2_5, 0)
                int128_t v2_6 = vadd_f32(v3_6, v2_5)
                int128_t v4_9 = vadd_f32(v1_3, v3_6)
                v5_9.d = sqrt(v5_9.d)
                v6_10.d = sqrt(v6_10.d)
                v7_1.d = v7_1.d f+ v7_1:4.d
                double v16_4 = vmul_f32(v2_6, v2_6, 0)
                int128_t v3_7 = vadd_f32(v1_3, v4_9)
                int128_t v2_7 = vadd_f32(v4_9, v2_6)
                v6_10.d = v5_9.d f+ v6_10.d
                v7_1.d = sqrt(v7_1.d)
                v16_4.d = v16_4.d f+ v16_4:4.d
                int128_t v4_10 = vadd_f32(v1_3, v3_7)
                int128_t v3_8 = vadd_f32(v3_7, v2_7)
                v2_1 = vmul_f32(v2_7, v2_7, 0)
                *(arg1 + 0x80) = v5_9.d
                *(arg1 + 0x84) = v6_10.d
                v5_9.d = v6_10.d f+ v7_1.d
                v7_1.d = sqrt(v16_4.d)
                int128_t v6_11 = vadd_f32(v1_3, v4_10)
                v2_1.d = v2_1.d f+ v2_1:4.d
                int128_t v4_11 = vadd_f32(v4_10, v3_8)
                v3_1 = vmul_f32(v3_8, v3_8, 0)
                v7_1.d = v5_9.d f+ v7_1.d
                v2_1.d = sqrt(v2_1.d)
                *(arg1 + 0x88) = v5_9.d
                *(arg1 + 0x8c) = v7_1.d
                int128_t v5_10 = vadd_f32(v1_3, v6_11)
                v3_1.d = v3_1.d f+ v3_1:4.d
                int128_t v6_12 = vadd_f32(v6_11, v4_11)
                v4_1 = vmul_f32(v4_11, v4_11, 0)
                v2_1.d = v7_1.d f+ v2_1.d
                int128_t v1_4 = vadd_f32(v1_3, v5_10)
                v3_1.d = sqrt(v3_1.d)
                v4_1.d = v4_1.d f+ v4_1:4.d
                int128_t v5_11 = vadd_f32(v5_10, v6_12)
                v6_1 = vmul_f32(v6_12, v6_12, 0)
                v3_1.d = v2_1.d f+ v3_1.d
                v4_1.d = sqrt(v4_1.d)
                v6_1.d = v6_1.d f+ v6_1:4.d
                int128_t v1_5 = vadd_f32(v1_4, v5_11)
                v5_1 = vmul_f32(v5_11, v5_11, 0)
                *(arg1 + 0x90) = v2_1.d
                *(arg1 + 0x94) = v3_1.d
                v2_1.d = v3_1.d f+ v4_1.d
                v3_1.d = sqrt(v6_1.d)
                v4_1.d = v5_1.d f+ v5_1:4.d
                v1_1 = vmul_f32(v1_5, v1_5, 0)
                v3_1.d = v2_1.d f+ v3_1.d
                v4_1.d = sqrt(v4_1.d)
                v1_1.d = v1_1.d f+ v1_1:4.d
                *(arg1 + 0x98) = v2_1.d
                *(arg1 + 0x9c) = v3_1.d
                v2_1.d = v3_1.d f+ v4_1.d
                v1_1.d = sqrt(v1_1.d)
                x27_2 = 0
                v11.d = v2_1.d f+ v1_1.d
                x26_1 = x25_1
                var_150_1 = v21_1
                var_140_1 = v20_1
                var_130_1 = v19_1
                var_120.o = v18_1
                var_170_1 = v23_1
                var_160_1 = v22_1
                *(arg1 + 0xa0) = v2_1.d
                *(arg1 + 0xa4) = v11.d
            
            v0_3.d = v0_3.d f* v11.d
            void* x9_18 = arg1 + 0x80 + (sx.q(x27_2) << 2)
            int64_t x8_23 = -0x200000000 + (sx.q(x27_2) << 0x20)
            x27_2 -= 1
            
            do
                v1_1.d = *x9_18
                x9_18 += 4
                x8_23 += 0x100000000
                x27_2 += 1
            while (v0_3.d f> v1_1.d)
            
            int32_t x2
            
            if (x27_2 == 0)
                v0_3.d = v0_3.d f/ v1_1.d
                
                if (var_e4 == 0)
                    x2 = (fp_2 != 0 ? 1 : 0) & (arg7.d f== 0f ? 1 : 0)
                else
                    x2 = 1
            else
                v2_1.d = *(arg1 + (x8_23 s>> 0x1e) + 0x80)
                v3_1.d = float.s(x27_2)
                v0_3.d = v0_3.d f- v2_1.d
                v1_1.d = v1_1.d f- v2_1.d
                v0_3.d = v0_3.d f/ v1_1.d
                v0_3.d = v0_3.d f+ v3_1.d
                
                if (var_e4 != 0)
                    x2 = 1
                else
                    x2 = (fp_2 != 0 ? 1 : 0) & (arg7.d f== 0f ? 1 : 0)
            
            v1_1.d = float.s(0x3dcccccd)
            v0_3.d = v0_3.d f* v1_1.d
            int32_t var_1b0_1 = var_160_1.d
            x3_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1, v18_1, v19_1, v20_1, 
                v21_1, v22_1, v23_1 = sub_fb984c(result, x23_1.d, x2, v0_3, var_120.o, var_130_1.d, 
                var_100_1, var_140_1.d, var_110_1.q, var_150_1, x3_1)
            fp_2 += 1
            x23_1 += 3
            
            if (fp_2 == x19_3)
                break

arg7.q = var_70
arg8.q = var_78
return result
