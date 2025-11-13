// 函数: sub_fe8630
// 地址: 0xfe8630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v10
double var_80 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int16_t var_100[0x40]
int32_t x8_2
int32_t i_19

if ((zx.d(*(arg1 + 0x54)) & 1) != 0 || arg2 s< 1)
label_fe8784:
    x8_2 = arg5 s> 0 ? 1 : 0
    
    if (arg5 s< 1)
        x8_2 = 0
        i_19 = 0
    else
        int32_t x9_1 = 0
        i_19 = 0
        
        do
            if (arg6 != x9_1 || (zx.d(*(arg1 + 0x54)) & 2) != 0)
                var_100[sx.q(i_19)] = x9_1.w
                i_19 += 1
            
            x9_1 += 1
        while (arg5 != x9_1)
else
    if (arg5 s>= 1)
        uint64_t x11_1 = zx.q(arg5)
        int64_t x8_1 = 0
        int64_t i = 0
        uint64_t x10_1 = zx.q(arg6)
        void* x14_1 = &arg4[1]
        arg8.d = fconvert.s(1f)
        int64_t x15_1 = x11_1 & 0xfffffffe
        arg9.d = 0f
        
        do
            arg10.d = arg4[sx.q(arg6) + i * x11_1]
            arg11.d = arg8.d f/ arg10.d
            
            if (arg10.d f!= 0f)
                arg10.d = arg11.d
            else
                arg10.d = arg9.d
            
            int64_t x2
            
            if (arg5 u>= 2)
                int64_t x17_2 = 0
                uint64_t x7_1 = x10_1
                void* x2_1 = x14_1
                
                do
                    if (x7_1 != 0)
                        arg11.d = *(x2_1 - 4)
                    
                    int64_t x3 = x17_2 | 1
                    
                    if (x3 != x10_1)
                        arg12.d = *x2_1
                    
                    if (x7_1 != 0)
                        arg11.d = arg10.d f* arg11.d
                        *(x2_1 - 4) = arg11.d
                    
                    if (x3 != x10_1)
                        arg11.d = arg10.d f* arg12.d
                        *x2_1 = arg11.d
                    
                    x17_2 += 2
                    x2_1 += 8
                    x7_1 -= 2
                while (x17_2 != x15_1)
                
                x2 = x15_1
                
                if (x15_1 != x11_1)
                    goto label_fe874c
            else
                x2 = 0
            label_fe874c:
                int64_t x17_3 = x10_1 - x2
                int32_t* x3_2 = &arg4[x2 + x8_1]
                int64_t j_8 = x11_1 - x2
                int64_t j
                
                do
                    if (x17_3 != 0)
                        arg11.d = *x3_2
                        arg11.d = arg10.d f* arg11.d
                        *x3_2 = arg11.d
                    
                    x3_2 = &x3_2[1]
                    j = j_8
                    j_8 -= 1
                    x17_3 -= 1
                while (j != 1)
            i += 1
            x14_1 += x11_1 << 2
            x8_1 += x11_1
        while (i != zx.q(arg2))
        
        goto label_fe8784
    
    x8_2 = 0
    i_19 = 0

if (arg7 u> 7)
    int64_t* x0_9
    int64_t x1_17
    int64_t x2_16
    int32_t x3_10
    int32_t x4_4
    int32_t x5_6
    int32_t x6_3
    int64_t x7_3
    int128_t v0
    int128_t v1
    int128_t v2
    int128_t v3
    int128_t v4
    int128_t v5_1
    int128_t v6_20
    int128_t v7_6
    x0_9, x1_17, x2_16, x3_10, x4_4, x5_6, x6_3, x7_3, v0, v1, v2, v3, v4, v5_1, v6_20, v7_6 =
        __assert2(
        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
        0x743, "void stbir__encode_scanline(stbir__info *, int, void *, float *, int, int, int)", 
        "!"Unknown type/colorspace/channels combination."", arg8, arg9, arg10)
    void var_130
    int32_t var_128
    char* var_120
    return sub_fe92b4(x0_9, x1_17, x2_16, x3_10, x4_4, x5_6, x6_3, x7_3, v0, v1, v2, v3, v4, v5_1, 
        v6_20, v7_6, var_130, var_128, var_120) __tailcall

void* var_78 = arg1
float128 v5
float128 v6
uint128_t v7

switch (arg7)
    case 0
        if ((((arg2 s< 1 ? 1 : 0) | (x8_2 ^ 1)) & 1) == 0)
            uint64_t x11_2 = zx.q(arg5)
            int64_t i_1 = 0
            int64_t x9_4 = sx.q(arg5)
            arg8.d = fconvert.s(1f)
            arg9.d = 0f
            arg11.d = fconvert.s(1f)
            arg11:4.d = fconvert.s(1f)
            arg11:8.d = fconvert.s(1f)
            arg11:0xc.d = fconvert.s(1f)
            int64_t j_11 = x11_2 & 0xfffffffc
            arg12.d = 0x437f0000
            arg12:4.d = 0x437f0000
            arg12:8.d = 0x437f0000
            arg12:0xc.d = 0x437f0000
            v5.q = fconvert.d(0.5)
            v5:8.q = fconvert.d(0.5)
            int32_t* x15_2 = arg4
            char* x16_2 = arg3
            
            do
                int64_t j_15
                
                if (arg5 u>= 4)
                    int64_t x17_4 = i_1 * x9_4
                    int64_t x0 = x17_4 + x11_2
                    
                    if (&arg3[x17_4] u< &arg4[x0] && &arg3[x0] u> &arg4[x17_4])
                        j_15 = 0
                        goto label_fe8938
                    
                    int64_t j_10 = j_11
                    arg1 = x15_2
                    char* x1_1 = x16_2
                    int64_t j_1
                    
                    do
                        v6 = *arg1
                        arg1 += 0x10
                        j_1 = j_10
                        j_10 -= 4
                        uint128_t v7_1 = vcltzq_f32(v6, 0)
                        float128 v6_3 = vmulq_f32(vminq_f32(v6, arg11), arg12, 0) & not.o(v7_1)
                        float128 v7_2 = vcvt_f64_f32(v6_3)
                        float128 v6_4 = vcvt_high_f64_f32(v6_3)
                        float128 v7_3 = vaddq_f64(v7_2, v5)
                        float128 v6_5 = vaddq_f64(v6_4, v5)
                        uint128_t v7_4 = vcvtq_s64_f64(v7_3)
                        uint128_t v6_6 = vcvtq_s64_f64(v6_5)
                        vmovn_s64(v7_4)
                        *x1_1 = vmovn_s16(vmovn_s32(vmovn_high_s64(v6_6))).d
                        x1_1 = &x1_1[4]
                    while (j_1 != 4)
                    j_15 = j_11
                    
                    if (j_11 != x11_2)
                        goto label_fe8938
                else
                    j_15 = 0
                label_fe8938:
                    
                    do
                        v6.d = x15_2[j_15]
                        v7.d = float.s(0x437f0000)
                        bool cond:4_1 = v6.d f< 0f
                        v6.d = vmin_f32(v6.d, arg8.d) f* v7.d
                        
                        if (cond:4_1)
                            v6.d = arg9.d
                        else
                            v6.d = v6.d
                        
                        v6.q = fconvert.d(v6.d)
                        v6.q = v6.q f+ fconvert.d(0.5)
                        x16_2[j_15] = zx.b(vcvtd_s32_f64(v6.q))
                        j_15 += 1
                    while (x11_2 != j_15)
                i_1 += 1
                x16_2 = &x16_2[x9_4]
                x15_2 += zx.q(arg5) << 0x20 s>> 0x1e
            while (i_1 != zx.q(arg2))
    case 1
        if (arg2 s>= 1)
            int64_t x8_13 = sx.q(arg5)
            int64_t x9_9 = sx.q(arg6)
            uint64_t i_13 = zx.q(arg2)
            
            if (i_19 s<= 0)
                arg8.d = fconvert.s(1f)
                arg9.d = 0f
                uint64_t i_2
                
                do
                    if ((zx.d(*(arg1 + 0x54)) & 2) == 0)
                        arg11.d = arg4[x9_9]
                        arg12.d = float.s(0x437f0000)
                        v5.d = vmin_f32(arg11.d, arg8.d)
                        arg12.d = v5.d f* arg12.d
                        
                        if (arg11.d f< 0f)
                            arg11.d = arg9.d
                        else
                            arg11.d = arg12.d
                        
                        arg11.q = fconvert.d(arg11.d)
                        arg11.q = arg11.q f+ fconvert.d(0.5)
                        arg3[x9_9] = vcvtd_s32_f64(arg11.q)
                    
                    i_2 = i_13
                    i_13 -= 1
                    x9_9 += x8_13
                while (i_2 != 1)
            else
                int64_t x12_12 = 0
                arg8.d = fconvert.s(1f)
                arg9.d = 0f
                
                do
                    int64_t x7_2 = x12_12 * x8_13
                    int16_t (* x1_9)[0x40] = &var_100
                    uint64_t i_12 = zx.q(i_19)
                    uint64_t i_3
                    
                    do
                        uint64_t x3_7 = zx.q(*x1_9)
                        x1_9 = &(*x1_9)[1]
                        arg12.d = float.s(0x39000000)
                        i_3 = i_12
                        i_12 -= 1
                        int64_t x3_8 = x7_2 + x3_7
                        arg11.d = arg4[x3_8]
                        arg11.d = vmaxnm_f32(arg11.d, arg12.d)
                        arg12.d = float.s(0x3f7fffff)
                        arg11.d = vmin_f32(arg11.d, arg12.d)
                        int32_t x4 = arg11.d
                        int32_t x5_4 = *(&data_866c30 + (zx.q((x4 - 0x39000000) u>> 0x14) << 2))
                        arg3[x3_8] = (((x5_4 u>> 7 & 0xfffe00)
                            + (x4 u>> 0xc & 0xff) * (x5_4 & 0xffff)) u>> 0x10).b
                    while (i_3 != 1)
                    
                    if ((zx.d(*(arg1 + 0x54)) & 2) == 0)
                        int64_t x2_11 = x7_2 + x9_9
                        arg11.d = arg4[x2_11]
                        arg12.d = float.s(0x437f0000)
                        v5.d = vmin_f32(arg11.d, arg8.d)
                        arg12.d = v5.d f* arg12.d
                        
                        if (arg11.d f< 0f)
                            arg11.d = arg9.d
                        else
                            arg11.d = arg12.d
                        
                        arg11.q = fconvert.d(arg11.d)
                        arg11.q = arg11.q f+ fconvert.d(0.5)
                        arg3[x2_11] = vcvtd_s32_f64(arg11.q)
                    
                    x12_12 += 1
                while (x12_12 != i_13)
    case 2
        if (arg2 s>= 1 && x8_2 != 0)
            uint64_t x11_3 = zx.q(arg5)
            int64_t i_4 = 0
            int64_t x12_8 = zx.q(arg5) << 0x20 s>> 0x1f
            arg8.d = fconvert.s(1f)
            arg9.d = 0f
            arg11.d = fconvert.s(1f)
            arg11:4.d = fconvert.s(1f)
            int64_t j_13 = x11_3 & 0xfffffffe
            arg12.d = 0x477fff00
            arg12:4.d = 0x477fff00
            v5.q = fconvert.d(0.5)
            v5:8.q = fconvert.d(0.5)
            int32_t* x17_6 = arg4
            arg1 = arg3
            
            do
                int64_t j_14
                
                if (arg5 u>= 2)
                    int64_t x2_3 = i_4 * sx.q(arg5)
                    int64_t x1_2 = x12_8 * i_4
                    
                    if (&arg3[x1_2] u< &arg4[x2_3 + x11_3]
                            && &arg3[(x11_3 << 1) + x1_2] u> &arg4[x2_3])
                        j_14 = 0
                        goto label_fe8a80
                    
                    int64_t j_7 = j_13
                    int32_t* x2_5 = x17_6
                    void* x3_5 = arg1
                    int64_t j_2
                    
                    do
                        v6.q = *x2_5
                        x2_5 = &x2_5[2]
                        j_2 = j_7
                        j_7 -= 2
                        v7 = vcltz_f32(v6, 0)
                        v6 = vmovn_s64(vcvtq_s64_f64(vaddq_f64(
                            vcvt_f64_f32(vmul_f32(vmin_f32(v6, arg11), arg12, 0) & not.o(v7)), v5)))
                        *x3_5 = v6.w
                        *(x3_5 + 2) = v6:4.w
                        x3_5 += 4
                    while (j_2 != 2)
                    j_14 = j_13
                    
                    if (j_13 != x11_3)
                        goto label_fe8a80
                else
                    j_14 = 0
                label_fe8a80:
                    
                    do
                        v6.d = x17_6[j_14]
                        v7.d = float.s(0x477fff00)
                        bool cond:13_1 = v6.d f< 0f
                        v6.d = vmin_f32(v6.d, arg8.d) f* v7.d
                        
                        if (cond:13_1)
                            v6.d = arg9.d
                        else
                            v6.d = v6.d
                        
                        v6.q = fconvert.d(v6.d)
                        v6.q = v6.q f+ fconvert.d(0.5)
                        *(arg1 + (j_14 << 1)) = vcvtd_s32_f64(v6.q)
                        j_14 += 1
                    while (x11_3 != j_14)
                i_4 += 1
                arg1 += x12_8
                x17_6 += zx.q(arg5) << 0x20 s>> 0x1e
            while (i_4 != zx.q(arg2))
    case 3
        if (arg2 s>= 1)
            int64_t x12_9 = sx.q(arg5)
            int64_t x10_4 = sx.q(arg6)
            uint64_t i_16 = zx.q(arg2)
            
            if (i_19 s<= 0)
                void* x8_34 = &arg4[x10_4]
                void* x10_9 = &arg3[x10_4 << 1]
                arg8.d = fconvert.s(1f)
                arg9.d = 0f
                uint64_t i_5
                
                do
                    if ((zx.d(*(arg1 + 0x54)) & 2) == 0)
                        arg11.d = *x8_34
                        arg12.d = float.s(0x477fff00)
                        v5.d = vmin_f32(arg11.d, arg8.d)
                        arg12.d = v5.d f* arg12.d
                        
                        if (arg11.d f< 0f)
                            arg11.d = arg9.d
                        else
                            arg11.d = arg12.d
                        
                        arg11.q = fconvert.d(arg11.d)
                        arg11.q = arg11.q f+ fconvert.d(0.5)
                        *x10_9 = vcvtd_s32_f64(arg11.q)
                    
                    x8_34 += x12_9 << 2
                    i_5 = i_16
                    i_16 -= 1
                    x10_9 += x12_9 << 1
                while (i_5 != 1)
            else
                int64_t x8_5 = 0
                v8.d = fconvert.s(1f)
                v9.d = 0f
                v10 = fconvert.d(0.5)
                int64_t var_118_1 = x12_9
                
                do
                    uint64_t i_17 = zx.q(i_19)
                    int64_t x21_1 = x8_5 * x12_9
                    int16_t (* x22_1)[0x40] = &var_100
                    uint64_t i_6
                    
                    do
                        int64_t x28_1 = x21_1 + zx.q(*x22_1)
                        arg8.d = arg4[x28_1]
                        arg9.d = vmin_f32(arg8.d, v8.d)
                        
                        if (arg8.d f< 0f)
                            arg8.d = v9.d
                        else
                            arg8.d = arg9.d
                        
                        arg9.d = float.s(0x3b4d2e1c)
                        
                        if (arg8.d f> arg9.d)
                            arg9.d = float.s(0x3ed55555)
                            arg8, arg1, arg9, arg10, arg11 = powf(arg8.d, arg9.d, arg10.d, arg11.d)
                            arg9.d = float.s(0x3f870a3d)
                            arg8.d = arg8.d f* arg9.d
                            arg9.d = float.s(0xbd6147ae)
                            arg8.d = arg8.d f+ arg9.d
                        else
                            arg9.d = float.s(0x414eb852)
                            arg8.d = arg8.d f* arg9.d
                        
                        arg9.d = float.s(0x477fff00)
                        arg8.d = arg8.d f* arg9.d
                        arg8.q = fconvert.d(arg8.d)
                        arg8.q = arg8.q f+ v10
                        i_6 = i_17
                        i_17 -= 1
                        x22_1 = &(*x22_1)[1]
                        *(arg3 + (x28_1 << 1)) = vcvtd_s32_f64(arg8.q)
                    while (i_6 != 1)
                    
                    if ((zx.d(*(var_78 + 0x54)) & 2) == 0)
                        arg9.d = float.s(0x477fff00)
                        int64_t x8_12 = x21_1 + x10_4
                        arg8.d = arg4[x8_12]
                        arg10.d = vmin_f32(arg8.d, v8.d)
                        arg9.d = arg10.d f* arg9.d
                        
                        if (arg8.d f< 0f)
                            arg8.d = v9.d
                        else
                            arg8.d = arg9.d
                        
                        arg8.q = fconvert.d(arg8.d)
                        arg8.q = arg8.q f+ v10
                        *(arg3 + (x8_12 << 1)) = vcvtd_s32_f64(arg8.q)
                    
                    x12_9 = var_118_1
                    x8_5 += 1
                while (x8_5 != i_16)
    case 4
        if (arg2 s>= 1 && x8_2 != 0)
            uint64_t x11_4 = zx.q(arg5)
            int64_t i_7 = 0
            int64_t x12_11 = zx.q(arg5) << 0x20 s>> 0x1e
            arg8.d = fconvert.s(1f)
            arg9.d = 0f
            arg11.d = fconvert.s(1f)
            arg11:4.d = fconvert.s(1f)
            void* j_12 = x11_4 & 0xfffffffe
            arg12.q = 0x41efffffffe00000
            arg12:8.q = 0x41efffffffe00000
            v5.q = fconvert.d(0.5)
            v5:8.q = fconvert.d(0.5)
            int32_t* x16_3 = arg4
            char* x17_7 = arg3
            
            do
                if (arg5 u>= 2)
                    int64_t x1_5 = i_7 * sx.q(arg5)
                    int64_t x0_2 = x12_11 * i_7
                    
                    if (&arg3[x0_2] u< &arg4[x1_5 + x11_4]
                            && &arg3[(x11_4 << 2) + x0_2] u> &arg4[x1_5])
                        arg1 = nullptr
                        goto label_fe8cf8
                    
                    void* j_6 = j_12
                    int32_t* x1_7 = x16_3
                    char* x2_9 = x17_7
                    void* j_3
                    
                    do
                        v6.q = *x1_7
                        x1_7 = &x1_7[2]
                        j_3 = j_6
                        j_6 -= 2
                        v7 = vcltz_f32(v6, 0)
                        *x2_9 = vmovn_s64(vcvtq_u64_f64(vaddq_f64(
                            vmulq_f64(vcvt_f64_f32(vmin_f32(v6, arg11) & not.o(v7)), arg12, 0), 
                            v5))).q
                        x2_9 = &x2_9[8]
                    while (j_3 != 2)
                    arg1 = j_12
                    
                    if (j_12 != x11_4)
                        goto label_fe8cf8
                else
                    arg1 = nullptr
                label_fe8cf8:
                    
                    do
                        int64_t x1_8 = arg1 << 2
                        v6.d = x16_3[arg1]
                        v7.q = float.d(0x41efffffffe00000)
                        arg1 += 1
                        int32_t temp0_9 = vmin_f32(v6.d, arg8.d)
                        
                        if (v6.d f< 0f)
                            v6.d = arg9.d
                        else
                            v6.d = temp0_9
                        
                        v6.q = fconvert.d(v6.d)
                        v6.q = v6.q f* v7.q
                        v6.q = v6.q f+ fconvert.d(0.5)
                        *(x17_7 + x1_8) = vcvtd_u32_f64(v6.q)
                    while (x11_4 != arg1)
                
                i_7 += 1
                x17_7 = &x17_7[x12_11]
                x16_3 += x12_11
            while (i_7 != zx.q(arg2))
    case 5
        if (arg2 s>= 1)
            int64_t x9_10 = sx.q(arg5)
            int64_t x8_14 = sx.q(arg6)
            uint64_t i_14 = zx.q(arg2)
            
            if (i_19 s<= 0)
                int64_t x8_35 = x8_14 << 2
                arg8.d = fconvert.s(1f)
                arg9.d = 0f
                uint64_t i_8
                
                do
                    if ((zx.d(*(arg1 + 0x54)) & 2) == 0)
                        arg11.d = *(arg4 + x8_35)
                        arg12.d = vmin_f32(arg11.d, arg8.d)
                        
                        if (arg11.d f< 0f)
                            arg11.d = arg9.d
                        else
                            arg11.d = arg12.d
                        
                        arg11.q = fconvert.d(arg11.d)
                        arg12.q = float.d(0x41efffffffe00000)
                        arg11.q = arg11.q f* arg12.q
                        arg11.q = arg11.q f+ fconvert.d(0.5)
                        *(arg3 + x8_35) = vcvtd_s32_f64(arg11.q)
                    
                    i_8 = i_14
                    i_14 -= 1
                    x8_35 += x9_10 << 2
                while (i_8 != 1)
            else
                int64_t x8_15 = 0
                v8.d = fconvert.s(1f)
                v9.d = 0f
                v10 = fconvert.d(0.5)
                int64_t var_118_2 = x9_10
                
                do
                    uint64_t i_18 = zx.q(i_19)
                    int64_t x21_2 = x8_15 * x9_10
                    int16_t (* x22_2)[0x40] = &var_100
                    uint64_t i_9
                    
                    do
                        int64_t x28_2 = x21_2 + zx.q(*x22_2)
                        arg8.d = arg4[x28_2]
                        arg9.d = vmin_f32(arg8.d, v8.d)
                        
                        if (arg8.d f< 0f)
                            arg8.d = v9.d
                        else
                            arg8.d = arg9.d
                        
                        arg9.d = float.s(0x3b4d2e1c)
                        
                        if (arg8.d f> arg9.d)
                            arg9.d = float.s(0x3ed55555)
                            arg8, arg1, arg9, arg10, arg11 = powf(arg8.d, arg9.d, arg10.d, arg11.d)
                            arg9.d = float.s(0x3f870a3d)
                            arg8.d = arg8.d f* arg9.d
                            arg9.d = float.s(0xbd6147ae)
                            arg8.d = arg8.d f+ arg9.d
                        else
                            arg9.d = float.s(0x414eb852)
                            arg8.d = arg8.d f* arg9.d
                        
                        arg8.q = fconvert.d(arg8.d)
                        arg9.q = float.d(0x41efffffffe00000)
                        arg8.q = arg8.q f* arg9.q
                        arg8.q = arg8.q f+ v10
                        i_9 = i_18
                        i_18 -= 1
                        x22_2 = &(*x22_2)[1]
                        *(arg3 + (x28_2 << 2)) = vcvtd_u32_f64(arg8.q)
                    while (i_9 != 1)
                    
                    if ((zx.d(*(var_78 + 0x54)) & 2) == 0)
                        arg8.d = arg4[x21_2 + x8_14]
                        arg9.d = vmin_f32(arg8.d, v8.d)
                        
                        if (arg8.d f< 0f)
                            arg8.d = v9.d
                        else
                            arg8.d = arg9.d
                        
                        arg8.q = fconvert.d(arg8.d)
                        arg9.q = float.d(0x41efffffffe00000)
                        arg8.q = arg8.q f* arg9.q
                        arg8.q = arg8.q f+ v10
                        *(arg3 + ((x21_2 + x8_14) << 2)) = vcvtd_s32_f64(arg8.q)
                    
                    x9_10 = var_118_2
                    x8_15 += 1
                while (x8_15 != i_14)
    case 6
        if (arg2 s>= 1 && x8_2 != 0)
            uint64_t x12_14 = zx.q(arg5)
            int64_t x8_24 = 0
            int64_t i_10 = 0
            int64_t x10_7 = sx.q(arg5)
            int64_t x13_6 = zx.q(arg5) << 0x20 s>> 0x1e
            void* x14_4 = &arg3[0x10]
            void* x16_4 = x12_14 & 0xfffffff8
            void* x17_8 = &arg4[4]
            
            do
                int64_t x0_5
                int64_t x1_12
                
                if (arg5 u>= 8)
                    x1_12 = i_10 * x10_7
                    x0_5 = x13_6 * i_10
                
                void* x2_14
                
                if (arg5 u>= 8 && (&arg3[x0_5] u>= &arg4[x1_12 + x12_14]
                        || &arg3[(x12_14 << 2) + x0_5] u<= &arg4[x1_12]))
                    arg1 = x16_4
                    void* x1_16 = x17_8
                    void* x2_15 = x14_4
                    void* j_4
                    
                    do
                        arg8 = *(x1_16 - 0x10)
                        arg9 = *x1_16
                        j_4 = arg1
                        arg1 -= 8
                        x1_16 += 0x20
                        *(x2_15 - 0x10) = arg8
                        *x2_15 = arg9
                        x2_15 += 0x20
                    while (j_4 != 8)
                    x2_14 = x16_4
                    
                    if (x16_4 != x12_14)
                        goto label_fe8fc8
                else
                    x2_14 = nullptr
                label_fe8fc8:
                    arg1 = &arg4[x2_14 + x8_24]
                    void* x1_15 = &arg3[(x2_14 + x8_24) << 2]
                    void* j_9 = x12_14 - x2_14
                    void* j_5
                    
                    do
                        arg8.d = *arg1
                        arg1 += 4
                        j_5 = j_9
                        j_9 -= 1
                        *x1_15 = arg8.d
                        x1_15 += 4
                    while (j_5 != 1)
                i_10 += 1
                x14_4 += x13_6
                x17_8 += x13_6
                x8_24 += x10_7
            while (i_10 != zx.q(arg2))
    case 7
        if (arg2 s>= 1)
            int64_t x9_12 = sx.q(arg5)
            int64_t x8_25 = sx.q(arg6)
            uint64_t i_15 = zx.q(arg2)
            
            if (i_19 s<= 0)
                int64_t x8_36 = x8_25 << 2
                uint64_t i_11
                
                do
                    if ((zx.d(*(arg1 + 0x54)) & 2) == 0)
                        arg8.d = *(arg4 + x8_36)
                        *(arg3 + x8_36) = arg8.d
                    
                    i_11 = i_15
                    i_15 -= 1
                    x8_36 += x9_12 << 2
                while (i_11 != 1)
            else
                int64_t x8_26 = 0
                int64_t var_118_3 = x9_12
                
                do
                    uint64_t i_20 = zx.q(i_19)
                    int64_t x21_3 = x8_26 * x9_12
                    int16_t (* x26_1)[0x40] = &var_100
                    
                    while (true)
                        arg9.d = float.s(0x3b4d2e1c)
                        int64_t x25_1 = x21_3 + zx.q(*x26_1)
                        arg8.d = arg4[x25_1]
                        
                        if (arg8.d f> arg9.d)
                            arg9.d = float.s(0x3ed55555)
                            arg8, arg1, arg9, arg10, arg11 = powf(arg8.d, arg9.d, arg10.d, arg11.d)
                            arg9.d = float.s(0x3f870a3d)
                            arg8.d = arg8.d f* arg9.d
                            arg9.d = float.s(0xbd6147ae)
                            arg8.d = arg8.d f+ arg9.d
                            uint64_t i_21 = i_20
                            i_20 -= 1
                            x26_1 = &(*x26_1)[1]
                            *(arg3 + (x25_1 << 2)) = arg8.d
                            
                            if (i_21 == 1)
                                break
                        else
                            arg9.d = float.s(0x414eb852)
                            arg8.d = arg8.d f* arg9.d
                            uint64_t i_22 = i_20
                            i_20 -= 1
                            x26_1 = &(*x26_1)[1]
                            *(arg3 + (x25_1 << 2)) = arg8.d
                            
                            if (i_22 == 1)
                                break
                    
                    if ((zx.d(*(var_78 + 0x54)) & 2) == 0)
                        arg8.d = arg4[x21_3 + x8_25]
                        *(arg3 + ((x21_3 + x8_25) << 2)) = arg8.d
                    
                    x9_12 = var_118_3
                    x8_26 += 1
                while (x8_26 != i_15)
