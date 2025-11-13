// 函数: spPathConstraint_apply
// 地址: 0xfb854c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_a0 = arg2.q
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
void* fp = *arg1
int64_t v11
v11.d = arg1[5].d
int64_t v12
v12.d = *(arg1 + 0x2c)
uint64_t x28 = zx.q(arg1[1].d)
int32_t x21 = *(fp + 0x2c)
int32_t x26 = *(fp + 0x30)
void* x23 = *(arg1[3] + 0x28)
int32_t x25

if (x26 != 0)
    x25 = x28.d + 1
else
    x25 = x28.d

if (x23 != 0 && ((v11.d f> 0f ? 1 : 0) | (v12.d f> 0f ? 1 : 0)) != 0 && *(x23 + 8) == 4)
    int64_t* x20_1 = arg1
    int64_t** x27_1 = arg1[2]
    int32_t* x0 = arg1[7]
    uint128_t v4
    
    if (arg1[6].d != x25)
        if (x0 != 0)
            _spFree()
        
        x0, v4 = _spMalloc(zx.q(x25) << 0x20 s>> 0x1e, 
            "..\..\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x63)
        x20_1[7] = x0
        x20_1[6].d = x25
    
    *x0 = 0
    v4.d = *(x20_1 + 0x24)
    float* x19_1
    
    if (x21 != 2 || x26 == 2)
        if (x26 != 2)
            x19_1 = nullptr
        else
            x19_1 = x20_1[0xf]
            
            if (x20_1[0xe].d != x28.d)
                uint128_t var_d0_1 = v4
                
                if (x19_1 != 0)
                    _spFree(x19_1)
                
                float* x0_4
                x0_4, v4 = _spMalloc(sx.q(x28.d) << 2, 
                    "..\..\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x6e)
                v4 = var_d0_1
                x19_1 = x0_4
                x20_1[0xf] = x0_4
                x20_1[0xe].d = x28.d
        
        if (x25 s>= 2)
            float v0
            float v1
            
            if (x21 != 2)
                int32_t x9_3 = *(fp + 0x2c)
                float v2
                
                if (x26 != 2)
                    int64_t x10_6 = 0
                    
                    do
                        int64_t* x13_3 = x27_1[x10_6]
                        v0 = *(*x13_3 + 0x18)
                        v1 = 0f
                        
                        if (not(v0 < float.s(0x3727c5ac)))
                            v1 = v0 * *(x13_3 + 0x64)
                            v2 = v0 f* x13_3[0xe].d
                            v1 = sqrt(v1 * v1 + v2 * v2)
                            
                            if (x9_3 == 0)
                                v2 = v4.d f+ v0
                            else
                                v2 = v4.d
                            
                            v1 = v2 * v1 / v0
                        
                        x0[1 + x10_6] = v1
                        x10_6 += 1
                    while (x10_6.d s< x25 - 1)
                else
                    int64_t x10_4 = 0
                    
                    while (true)
                        int64_t* x13_2 = x27_1[x10_4]
                        v0 = *(*x13_2 + 0x18)
                        
                        if (v0 < float.s(0x3727c5ac))
                            x19_1[x10_4] = 0
                            x0[1 + x10_4] = 0f
                            x10_4 += 1
                            
                            if (x10_4.d s>= x25 - 1)
                                break
                        else
                            v1 = v0 * *(x13_2 + 0x64)
                            v2 = v0 f* x13_2[0xe].d
                            float v3
                            
                            if (x9_3 == 0)
                                v3 = v4.d f+ v0
                            else
                                v3 = v4.d
                            
                            v1 = sqrt(v1 * v1 + v2 * v2)
                            x19_1[x10_4] = v1
                            x0[1 + x10_4] = v3 * v1 / v0
                            x10_4 += 1
                            
                            if (x10_4.d s>= x25 - 1)
                                break
            else
                int64_t x9_2 = 0
                
                do
                    int64_t* x12_1 = x27_1[x9_2]
                    v1 = *(*x12_1 + 0x18)
                    
                    if (v1 >= float.s(0x3727c5ac))
                        v0 = v4.d
                        
                        if (x26 == 2)
                            v0 = v1 * *(x12_1 + 0x64)
                            v1 = v1 f* x12_1[0xe].d
                            x19_1[x9_2] = sqrt(v0 * v0 + v1 * v1)
                            v0 = v4.d
                    else
                        v0 = 0f
                        
                        if (x26 == 2)
                            x19_1[x9_2] = 0
                    
                    x0[1 + x9_2] = v0
                    x9_2 += 1
                while (x9_2.d s< x25 - 1)
    else
        if (x25 s>= 2)
            uint64_t x8_5 = zx.q(x25)
            int64_t x9_1
            
            if (x8_5 - 1 u>= 8)
                int64_t i_5 = (x8_5 - 1) & 0xfffffffffffffff8
                uint128_t v0_1 = vdupq_laneq_s32(v4, 0)
                x9_1 = i_5 | 1
                void* x12_2 = &x0[5]
                int64_t i_4 = i_5
                int64_t i
                
                do
                    *(x12_2 - 0x10) = v0_1
                    *x12_2 = v0_1
                    i = i_4
                    i_4 -= 8
                    x12_2 += 0x20
                while (i != 8)
                
                if (x8_5 - 1 != i_5)
                    goto label_fb8814
            else
                x9_1 = 1
            label_fb8814:
                void* x10_5 = &x0[x9_1]
                int64_t i_3 = x8_5 - x9_1
                int64_t i_1
                
                do
                    i_1 = i_3
                    i_3 -= 1
                    *x10_5 = v4.d
                    x10_5 += 4
                while (i_1 != 1)
        
        x19_1 = nullptr
    
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    int32_t* v4_1
    arg1, v1_1, v2_1, v3_1, v4_1 = spPathConstraint_computeWorldPositions(x20_1, x23, zx.q(x25), 
        zx.q(x26 == 0 ? 1 : 0), zx.q(*(fp + 0x28) == 1 ? 1 : 0), zx.q(x21 == 2 ? 1 : 0))
    int64_t* x22_1 = arg1
    v4_1.d = *(*x20_1 + 0x34)
    float var_d4_1
    int32_t x23_1
    float v0_2
    
    if (v4_1.d f!= 0f)
        x23_1 = 0
        void* x8_13 = *(x20_1[3] + 8)
        v3_1.d = *(x8_13 + 0x70)
        v1_1.d = *(x8_13 + 0x64)
        v2_1.d = *(x8_13 + 0x68)
        v0_2 = v1_1.d f* *(x8_13 + 0x74)
        v1_1.d = v2_1.d f* v3_1.d
        v2_1.d = float.s(0xbc8efa35)
        v0_2 = v0_2 f- v1_1.d
        v1_1.d = float.s(0x3c8efa35)
        
        if (v0_2 > 0f)
            v0_2 = v1_1.d
        else
            v0_2 = v2_1.d
        
        v4_1.d = v4_1.d f* v0_2
        var_d4_1 = v4_1.d
        
        if (x28.d s>= 1)
            goto label_fb88d0
    else
        var_d4_1 = v4_1.d
        x23_1 = x26 == 1 ? 1 : 0
        
        if (x28.d s>= 1)
        label_fb88d0:
            v3_1.d = var_d4_1
            v0_2 = *x22_1
            v1_1.d = *(x22_1 + 4)
            v2_1.d = float.s(0x3c8efa35)
            int64_t i_2 = 0
            void* x25_1 = &x22_1[2]
            float* x21_1 = &x0[1]
            v14.d = v3_1.d f* v2_1.d
            
            do
                int64_t* x28_1 = *x27_1
                v2_1.d = *(x28_1 + 0x6c)
                v3_1.d = x28_1[0xf].d
                v4_1.d = v0_2 f- v2_1.d
                v4_1.d = v12.d f* v4_1.d
                v2_1.d = v2_1.d f+ v4_1.d
                v4_1.d = v1_1.d f- v3_1.d
                v4_1.d = v12.d f* v4_1.d
                v3_1.d = v3_1.d f+ v4_1.d
                *(x28_1 + 0x6c) = v2_1.d
                x28_1[0xf].d = v3_1.d
                v13.d = *(x25_1 - 4)
                arg2.d = *x25_1
                v9.d = v13.d f- v0_2
                v8.d = arg2.d f- v1_1.d
                
                if (x26 == 2)
                    v0_2 = *x19_1
                    
                    if (not(v0_2 == 0f))
                        v1_1.d = v9.d f* v9.d
                        v2_1.d = v8.d f* v8.d
                        v1_1.d = v1_1.d f+ v2_1.d
                        v1_1.d = sqrt(v1_1.d)
                        v3_1.d = *(x28_1 + 0x64)
                        v4_1.d = x28_1[0xe].d
                        v0_2 = v1_1.d f/ v0_2
                        v1_1.d = fconvert.s(-1f)
                        v0_2 = v11.d f* (v0_2 f+ v1_1.d)
                        v1_1.d = fconvert.s(1f)
                        v0_2 = v0_2 f+ v1_1.d
                        v1_1.d = v0_2 f* v3_1.d
                        *(x28_1 + 0x64) = v1_1.d
                        x28_1[0xe].d = v0_2 f* v4_1.d
                
                if (not(v11.d f<= 0f))
                    v1_1.q = *(x28_1 + 0x64)
                    v2_1.q = x28_1[0xe]
                    int128_t var_d0_2 = v2_1
                    int32_t* var_c0_1
                    var_c0_1.o = v1_1
                    
                    if (x26 == 0)
                        v10.d = *(x25_1 - 8)
                    else if (*x21_1 != 0f)
                        int64_t v0_6
                        v0_6, v1_1, v2_1 = atan2f(v8.d, v9.d, v2_1.d)
                        v2_1 = var_d0_2
                        v1_1 = var_c0_1.o
                        v10 = v0_6
                    else
                        v10.d = *(x22_1 + (zx.q(i_2.d + 5) << 2))
                    
                    v10.d = v10.d f- (atan2f(v2_1.d, v1_1.d, v2_1.d) f- v14.d)
                    
                    if (x23_1 == 0)
                        v10.d = var_d4_1 f+ v10.d
                    else
                        float cosp_1
                        float sinp_1
                        sincosf(&sinp_1, &cosp_1, v10.d)
                        float cosp_2 = cosp_1
                        float sinp_2 = sinp_1
                        float v5_2 = var_d0_2.d
                        float v6_1 = var_c0_1.d
                        float v2_3 = *(*x28_1 + 0x18)
                        v13.d = v13.d f+ v11.d f* ((v6_1 * cosp_2 - v5_2 * sinp_2) * v2_3 f- v9.d)
                        arg2.d = arg2.d f+ v11.d f* ((v6_1 * sinp_2 + v5_2 * cosp_2) * v2_3 f- v8.d)
                    
                    if (v10.d f> float.s(0x40490fdb))
                        v10.d = v10.d f+ float.s(-0x3f36f025)
                    else if (not(v10.d f>= float.s(0xc0490fdb)))
                        v10.d = v10.d f+ float.s(0x40c90fdb)
                    
                    float cosp
                    float sinp
                    int128_t v0_3
                    int128_t v1_2
                    int128_t v2_2
                    arg1, v0_3, v1_2, v2_2, v3_1 = sincosf(&sinp, &cosp, v11.d f* v10.d)
                    v0_3.d = cosp
                    v1_2.d = sinp
                    int64_t v5_1 = var_d0_2.q
                    v2_2.d = var_c0_1.d f* v0_3.d
                    v2_2:4.d = var_c0_1:4.d f* v0_3.d
                    v3_1.d = v5_1.d f* v1_2.d
                    v3_1:4.d = v5_1:4.d f* v1_2.d
                    v1_2.d = var_c0_1.d f* v1_2.d
                    v1_2:4.d = var_c0_1:4.d f* v1_2.d
                    v0_3.d = v5_1.d f* v0_3.d
                    v0_3:4.d = v5_1:4.d f* v0_3.d
                    v2_1 = vsub_f32(v2_2, v3_1)
                    double v0_4 = vadd_f32(v1_2, v0_3)
                    *(x28_1 + 0x64) = v2_1.q
                    x28_1[0xe] = v0_4
                
                i_2 += 3
                x27_1 = &x27_1[1]
                x25_1 += 0xc
                x21_1 = &x21_1[1]
                x19_1 = &x19_1[1]
                v0_2 = v13.d
                v1_1 = arg2
                x28_1[0xc].d = 0xffffffff
            while (x28 * 3 != i_2)

arg2.q = var_a0
