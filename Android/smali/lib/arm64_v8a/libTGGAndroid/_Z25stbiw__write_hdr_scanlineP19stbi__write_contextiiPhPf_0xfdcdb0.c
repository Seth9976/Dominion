// 函数: _Z25stbiw__write_hdr_scanlineP19stbi__write_contextiiPhPf
// 地址: 0xfdcdb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int32_t temp0 = _byteswap(arg2)
int32_t var_8c = 0x202
float* x22 = arg5
var_8c:2.w = (temp0 u>> 0x10).w
char var_90
int32_t eptr
float v0

if ((arg2 - 8) u>> 3 u<= 0xffe)
    uint8_t* fp_1 = arg4
    uint64_t x21_2 = zx.q(arg2)
    
    if (arg3 - 3 u>= 2)
        int32_t x24_2 = arg2 << 1
        int64_t x20_2 = 0
        
        do
            v8.d = *x22
            v0 = float.s(0xa4fb11f)
            char x8_8
            char x9_8
            
            if (v8.d f>= v0)
                v0 = frexpf(&eptr, v8.d)
                char x9_7 = eptr.b
                v0 = v8.d f* v0 * float.s(0x43800000) f/ v8.d
                x8_8 = vcvts_s32_f32(v0)
                x9_8 = x9_7 ^ 0x80
                var_90 = x8_8
                char var_8f_3 = x8_8
            else
                x9_8 = 0
                x8_8 = 0
                var_90.w = 0
            
            char var_8d_3 = x9_8
            char var_8e_3 = x8_8
            fp_1[x20_2] = x8_8
            int32_t x10_4 = x21_2.d + x20_2.d
            int32_t x11_3 = x24_2 + x20_2.d
            int32_t x12_1 = x24_2 + arg2 + x20_2.d
            x20_2 += 1
            x22 += zx.q(arg3) << 0x20 s>> 0x1e
            fp_1[sx.q(x10_4)] = x8_8
            fp_1[sx.q(x11_3)] = x8_8
            fp_1[sx.q(x12_1)] = x9_8
        while (x21_2 != x20_2)
    else
        uint64_t x8_6 = x21_2 << 1
        void* x20_1 = &x22[2]
        int64_t x23_2 = 0
        
        do
            v10.d = *(x20_1 - 4)
            v9.d = *x20_1
            v11.d = *(x20_1 - 8)
            
            if (v10.d f> v9.d)
                v0 = v10.d
            else
                v0 = v9.d
            
            if (v11.d f> v0)
                v8.d = v11.d
            else
                v8.d = v0
            
            v0 = float.s(0xa4fb11f)
            char x8_7
            char x9_5
            char x10_3
            char x11_2
            
            if (v8.d f< v0)
                x8_7 = 0
                x11_2 = 0
                x9_5 = 0
                x10_3 = 0
                var_90.w = 0
            else
                v0 = frexpf(&eptr, v8.d) * float.s(0x43800000)
                char x9_6 = eptr.b
                v0 = v0 f/ v8.d
                float v1_2 = v11.d f* v0
                float v2_2 = v10.d f* v0
                v0 = v9.d f* v0
                x11_2 = vcvts_s32_f32(v1_2)
                x8_7 = vcvts_s32_f32(v2_2)
                x10_3 = vcvts_s32_f32(v0)
                var_90 = x11_2
                char var_8f_2 = x8_7
                x9_5 = x9_6 ^ 0x80
            
            char var_8d_2 = x9_5
            char var_8e_2 = x10_3
            fp_1[x23_2] = x11_2
            fp_1[x21_2 + x23_2] = x8_7
            fp_1[x8_6 + x23_2] = x10_3
            fp_1[x8_6 + x21_2 + x23_2] = x9_5
            x23_2 += 1
            x20_1 += zx.q(arg3) << 2
        while (x21_2 != x23_2)
    
    (*arg1)(*(arg1 + 8), &var_8c, 4, v0)
    int32_t j_5 = arg2
    int64_t i = 0
    void* x26_3 = &fp_1[1]
    int64_t j_6 = sx.q(j_5)
    uint8_t* var_a8_1 = fp_1
    
    do
        int32_t j = 0
        char* x24_3 = var_a8_1 + i * j_6
        
        do
            int32_t j_3 = j_5
            
            if (j + 2 s< j_5)
                int64_t j_2 = sx.q(j)
                char x10_5 = x24_3[j_2]
                void* x9_11 = &fp_1[sx.q(j + 2)]
                j_3 = j
                
                while (true)
                    uint32_t x11_4 = zx.d(*(x26_3 + j_2))
                    
                    if (x11_4 == zx.d(x10_5) && zx.d(*x9_11) == zx.d(x10_5))
                        break
                    
                    j_2 += 1
                    j_3 += 1
                    x9_11 += 1
                    x10_5 = x11_4.b
                    
                    if (j_2 + 2 s>= j_6)
                        j_3 = j_5
                        break
            
            int32_t x22_1
            
            for (; j_3 s> j; j += x22_1)
                int32_t x8_11 = j_3 - j
                
                x22_1 = x8_11 s< 0x80 ? x8_11 : 0x80
                
                eptr.b = x22_1.b
                (*arg1)(*(arg1 + 8), &eptr, 1)
                (*arg1)(*(arg1 + 8), &x24_3[sx.q(j)], zx.q(x22_1))
            
            j_5 = arg2
            
            if (j_3 + 2 s< j_5)
                uint32_t j_1 = zx.d(x24_3[sx.q(j)])
                uint64_t j_4 = sx.q(j_3)
                
                while (zx.d(fp_1[j_4]) == j_1)
                    j_4 += 1
                    
                    if (j_4 s>= j_6)
                        j_4 = zx.q(j_5)
                        break
                
                if (j_4.d s> j)
                    while (true)
                        int32_t x9_13 = j_4.d - j
                        int32_t x22_2
                        
                        x22_2 = x9_13 s< 0x7f ? x9_13 : 0x7f
                        
                        eptr.b = j_1.b
                        char var_84 = x22_2.b ^ 0x80
                        (*arg1)(*(arg1 + 8), &var_84, 1)
                        (*arg1)(*(arg1 + 8), &eptr, 1)
                        j += x22_2
                        
                        if (j_4.d s<= j)
                            break
                        
                        j_1 = zx.d(x24_3[sx.q(j)])
        while (j s< j_5)
        
        x26_3 += j_6
        fp_1 = &fp_1[j_6]
        i += 1
    while (i != 4)
else if (arg2 s>= 1)
    if (arg3 - 3 u>= 2)
        uint64_t i_4 = zx.q(arg2)
        uint64_t i_1
        
        do
            v8.d = *x22
            v0 = float.s(0xa4fb11f)
            char x8_18
            char x9_15
            
            if (v8.d f>= v0)
                v0 = frexpf(&eptr, v8.d)
                char x9_14 = eptr.b
                v0 = v8.d f* v0 * float.s(0x43800000) f/ v8.d
                x8_18 = vcvts_s32_f32(v0)
                x9_15 = x9_14 ^ 0x80
                var_90 = x8_18
                char var_8f_4 = x8_18
            else
                x9_15 = 0
                x8_18 = 0
                var_90.w = 0
            
            char var_8d_4 = x9_15
            char var_8e_4 = x8_18
            (*arg1)(*(arg1 + 8), &var_90, 4, v0)
            i_1 = i_4
            i_4 -= 1
            x22 += zx.q(arg3) << 0x20 s>> 0x1e
        while (i_1 != 1)
    else
        void* x21_1 = &x22[2]
        uint64_t i_3 = zx.q(arg2)
        uint64_t i_2
        
        do
            v10.d = *(x21_1 - 4)
            v9.d = *x21_1
            v11.d = *(x21_1 - 8)
            
            if (v10.d f> v9.d)
                v0 = v10.d
            else
                v0 = v9.d
            
            if (v11.d f> v0)
                v8.d = v11.d
            else
                v8.d = v0
            
            v0 = float.s(0xa4fb11f)
            char x8_3
            char x9_2
            
            if (v8.d f< v0)
                x9_2 = 0
                x8_3 = 0
                var_90.w = 0
            else
                v0 = frexpf(&eptr, v8.d) * float.s(0x43800000)
                char x9_3 = eptr.b
                v0 = v0 f/ v8.d
                float v1_1 = v11.d f* v0
                float v2_1 = v10.d f* v0
                v0 = v9.d f* v0
                char temp0_1 = vcvts_s32_f32(v1_1)
                char temp0_2 = vcvts_s32_f32(v2_1)
                x8_3 = vcvts_s32_f32(v0)
                var_90 = temp0_1
                char var_8f_1 = temp0_2
                x9_2 = x9_3 ^ 0x80
            
            char var_8d_1 = x9_2
            char var_8e_1 = x8_3
            (*arg1)(*(arg1 + 8), &var_90, 4, v0)
            i_2 = i_3
            i_3 -= 1
            x21_1 += zx.q(arg3) << 2
        while (i_2 != 1)
