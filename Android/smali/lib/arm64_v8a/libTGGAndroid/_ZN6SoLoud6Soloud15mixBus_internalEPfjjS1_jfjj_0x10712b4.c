// 函数: _ZN6SoLoud6Soloud15mixBus_internalEPfjjS1_jfjj
// 地址: 0x10712b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_a0 = v14
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
int32_t entry_x7
int32_t x26 = entry_x7
float v8 = arg6
uint32_t x19 = arg7
float* x24 = arg5
uint32_t x23 = arg4.d
uint32_t x21 = arg3
float* x25 = arg2
float* x28 = arg1

if (arg3 != 0 && arg8 != 0)
    uint64_t x9_1 = zx.q(arg8)
    int32_t x8_1 = 0
    int64_t i_5 = x9_1 & 0xfffffff8
    
    do
        int64_t i_6
        
        if (arg8 u>= 8)
            i_6 = 0
            
            if (x23 != 1 || x8_1 + (x9_1 - 1).d u< x8_1 || (x9_1 - 1) u>> 0x20 != 0)
                goto label_1071340
            
            int64_t i_4 = i_5
            int32_t x15_3 = x8_1
            int64_t i
            
            do
                void* x16_1 = &x25[zx.q(x15_3)]
                i = i_4
                i_4 -= 8
                x15_3 += x23 << 3
                __builtin_memset(x16_1, 0, 0x20)
            while (i != 8)
            i_6 = i_5
            
            if (i_5 != x9_1)
                goto label_1071340
        else
            i_6 = 0
        label_1071340:
            int32_t x15_1 = x8_1 + x23 * i_6.d
            int64_t i_3 = x9_1 - i_6
            int64_t i_1
            
            do
                x25[zx.q(x15_1)] = 0
                i_1 = i_3
                i_3 -= 1
                x15_1 += x23
            while (i_1 != 1)
        x8_1 += 1
    while (x8_1 != x21)

void* x20 = &x28[0x8793]

if (*x20 == 0)
    return 

int64_t i_2 = 0
v9.d = 0f
v10.d = fconvert.s(-5f)
v11.d = fconvert.s(4f)
v12.d = fconvert.s(3f)
v13.d = fconvert.s(0.5f)
int32_t var_b0_1 = x26
uint32_t var_ac_1 = x21
uint32_t var_cc_1 = x19
float* var_a8_1 = x24
float* var_98_1 = x28
void* var_c8_1 = x20

do
    void* x10_2 = &x28[i_2 + 0x8393]
    int64_t* x27_1 = *(x28 + (zx.q(*x10_2) << 3) + 0x98)
    
    if (x27_1 != 0 && x27_1[0x30].d == x19)
        int32_t x8_9 = x27_1[2].d
        
        if ((x8_9 & 0x24) == 0)
            uint32_t x8_10 = x27_1[0x3c].d
            arg6 = *(x27_1 + 0x44) / v8
            
            if (arg6 > float.s(0x45800000))
                v14.d = v9.d
            else
                v14.d = arg6 f* float.s(0x49800000)
            
            uint32_t x20_2
            uint32_t x22_1
            
            if (x8_10 == 0)
                x20_2 = 0
                x22_1 = vcvtms_s32_f32(v14.d)
                
                if (x22_1 != 0)
                label_1071554:
                    
                    while (x20_2 u< x21)
                        if (*(x27_1 + 0x1dc) == 0)
                            arg6 = (*(x27_1 + 0x1c8)).d
                            *(x27_1 + 0x1c8) = vextq_s8(arg6, arg6, 8)
                            int32_t x28_2
                            
                            if (((*(*x27_1 + 0x18))(x27_1) & 1) == 0 || (zx.d(x27_1[2].b) & 1) != 0)
                                int32_t x0_5 = (*(*x27_1 + 0x10))(x27_1, x27_1[0x39], 0x200, 0x200)
                                
                                if (x0_5 s<= 0x1ff)
                                    x28_2 = x0_5
                                    
                                    if ((zx.d(x27_1[2].b) & 1) != 0)
                                        while (true)
                                            if (x28_2 s> 0x1ff)
                                                goto label_107163c
                                            
                                            if ((*(*x27_1 + 0x20))(x27_1, *(var_98_1 + 0x38), 
                                                    zx.q(var_98_1[0x14]), (x27_1[0x3d]).d) != 0)
                                                break
                                            
                                            void* x9_12 = *x27_1
                                            int64_t x10_6 = x27_1[0x39]
                                            *(x27_1 + 0xc) += 1
                                            int32_t x0_18 = (*(x9_12 + 0x10))(x27_1, 
                                                x10_6 + (sx.q(x28_2) << 2), zx.q(0x200 - x28_2), 
                                                0x200)
                                            x28_2 += x0_18
                                            
                                            if (x0_18 == 0)
                                                if (x28_2 s<= 0x1ff)
                                                    break
                                                
                                                goto label_107163c
                                    
                                    goto label_10715f0
                            else
                                x28_2 = 0
                            label_10715f0:
                                
                                if (x27_1[9].d != 0)
                                    int64_t x21_1 = 0
                                    int64_t j = 0
                                    
                                    do
                                        memset(
                                            x27_1[0x39] + (sx.q(x28_2) << 2)
                                                + ((x21_1 & 0xfffffe00) << 2), 
                                            0, zx.q(0x200 - x28_2) << 0x20 s>> 0x1e)
                                        j += 1
                                        x21_1 += 0x200
                                    while (j u< zx.q(x27_1[9].d))
                        label_107163c:
                            int32_t x8_26 = x27_1[0x3b].d
                            int64_t* x0_7 = x27_1[0x31]
                            x28 = var_98_1
                            int32_t x8_28
                            
                            if (x8_26 u< 0x20000000)
                                x8_28 = 0
                            else
                                x8_28 = x8_26 - 0x20000000
                            
                            x27_1[0x3b].d = x8_28
                            
                            if (x0_7 != 0)
                                (*(*x0_7 + 0x10))(x0_7, x27_1[0x39], 0x200, 0x200, 
                                    zx.q(x27_1[9].d), *(x27_1 + 0x44), (*(x28 + 0x20f8)).d)
                            
                            int64_t* x0_8 = x27_1[0x32]
                            
                            if (x0_8 != 0)
                                (*(*x0_8 + 0x10))(x0_8, x27_1[0x39], 0x200, 0x200, 
                                    zx.q(x27_1[9].d), *(x27_1 + 0x44), (*(x28 + 0x20f8)).d)
                            
                            int64_t* x0_9 = x27_1[0x33]
                            
                            if (x0_9 != 0)
                                (*(*x0_9 + 0x10))(x0_9, x27_1[0x39], 0x200, 0x200, 
                                    zx.q(x27_1[9].d), *(x27_1 + 0x44), (*(x28 + 0x20f8)).d)
                            
                            int64_t* x0_10 = x27_1[0x34]
                            x26 = var_b0_1
                            x21 = var_ac_1
                            
                            if (x0_10 != 0)
                                (*(*x0_10 + 0x10))(x0_10, x27_1[0x39], 0x200, 0x200, 
                                    zx.q(x27_1[9].d), *(x27_1 + 0x44), (*(x28 + 0x20f8)).d)
                            
                            int64_t* x0_11 = x27_1[0x35]
                            
                            if (x0_11 != 0)
                                (*(*x0_11 + 0x10))(x0_11, x27_1[0x39], 0x200, 0x200, 
                                    zx.q(x27_1[9].d), *(x27_1 + 0x44), (*(x28 + 0x20f8)).d)
                            
                            int64_t* x0_12 = x27_1[0x36]
                            
                            if (x0_12 != 0)
                                (*(*x0_12 + 0x10))(x0_12, x27_1[0x39], 0x200, 0x200, 
                                    zx.q(x27_1[9].d), *(x27_1 + 0x44), (*(x28 + 0x20f8)).d)
                            
                            int64_t* x0_13 = x27_1[0x37]
                            
                            if (x0_13 != 0)
                                (*(*x0_13 + 0x10))(x0_13, x27_1[0x39], 0x200, 0x200, 
                                    zx.q(x27_1[9].d), *(x27_1 + 0x44), (*(x28 + 0x20f8)).d)
                            
                            int64_t* x0_14 = x27_1[0x38]
                            
                            if (x0_14 != 0)
                                (*(*x0_14 + 0x10))(x0_14, x27_1[0x39], 0x200, 0x200, 
                                    zx.q(x27_1[9].d), *(x27_1 + 0x44), (*(x28 + 0x20f8)).d)
                        else
                            *(x27_1 + 0x1dc) = 0
                        
                        int32_t x8_45 = x27_1[0x3b].d
                        uint32_t k_7
                        
                        if (x8_45 u>> 0x1d != 0)
                            k_7 = 0
                            
                            if (x20_2 u> x21)
                                k_7 = x21 - x20_2
                                *(x27_1 + 0x1dc) = x20_2 - x21
                        else
                            uint32_t k_8 = (0x20000000 - x8_45) u/ x22_1
                            
                            if ((x8_45 + (k_8 + 1) * x22_1) u>> 0x1d == 0)
                                k_7 = k_8 + 1
                            else
                                k_7 = k_8
                            
                            uint32_t x9_9 = k_7 + x20_2
                            
                            if (x9_9 u> x21)
                                k_7 = x21 - x20_2
                                *(x27_1 + 0x1dc) = x9_9 - x21
                        
                        if (k_7 != 0)
                            int32_t x13_2 = x27_1[9].d
                            
                            if (x13_2 != 0)
                                uint64_t x12_1 = zx.q(x20_2)
                                uint64_t k_6 = zx.q(k_7)
                                int32_t x10_7 = 0
                                int64_t j_1 = 0
                                
                                if (x26 == 0)
                                    do
                                        if (k_7 s>= 1)
                                            int32_t x13_8 = x27_1[0x3b].d
                                            void* x14_4 = &var_a8_1[x12_1 + zx.q(x10_7)]
                                            int64_t x15_7 = x27_1[0x39] + (zx.q(j_1.d << 9) << 2)
                                            uint64_t k_3 = k_6
                                            uint64_t k
                                            
                                            do
                                                arg6 = *(x15_7 + (sx.q(x13_8 s>> 0x14) << 2))
                                                k = k_3
                                                k_3 -= 1
                                                x13_8 += x22_1
                                                *x14_4 = arg6
                                                x14_4 += 4
                                            while (k != 1)
                                            x13_2 = x27_1[9].d
                                        
                                        j_1 += 1
                                        x10_7 += x23
                                    while (j_1 u< zx.q(x13_2))
                                else
                                    do
                                        uint64_t x16_2 = zx.q(j_1.d << 9)
                                        void* x13_7 = &var_a8_1[x12_1 + zx.q(x10_7)]
                                        float* x14_2 = x27_1[0x39] + (zx.q(x16_2.d) << 2)
                                        int32_t v1
                                        
                                        if (x26 != 2)
                                            if (k_7 s>= 1)
                                                int32_t x15_5 = x27_1[0x3b].d
                                                void* x16_5 = x27_1[0x3a] + (x16_2 << 2) + 0x7fc
                                                uint64_t k_5 = k_6
                                                uint64_t k_1
                                                
                                                do
                                                    int32_t x0_23 = x15_5 s>> 0x14
                                                    void* x1_15 = &x14_2[sx.q(x0_23)]
                                                    void* x0_24
                                                    
                                                    if (x0_23 == 0)
                                                        x0_24 = x16_5
                                                    else
                                                        x0_24 = x1_15 - 4
                                                    
                                                    v1 = *x0_24
                                                    k_1 = k_5
                                                    k_5 -= 1
                                                    *x13_7 = v1 f+ (*x1_15 f- v1)
                                                        * float.s(x15_5 & 0xfffff)
                                                        * float.s(0x35800000)
                                                    x13_7 += 4
                                                    x15_5 += x22_1
                                                while (k_1 != 1)
                                        else if (k_7 s>= 1)
                                            int32_t x15_4 = x27_1[0x3b].d
                                            int64_t x16_3 = x27_1[0x3a] + (x16_2 << 2)
                                            uint64_t k_4 = k_6
                                            uint64_t k_2
                                            
                                            do
                                                int32_t x0_19 = x15_4 s>> 0x14
                                                int64_t x2_5 = zx.q(x0_19) << 0x20 s>> 0x1e
                                                void* x1_13 = x2_5 + x16_3
                                                float v2 = *(x14_2 + x2_5)
                                                void* x2_7
                                                
                                                if (x15_4 s< 0x300000)
                                                    x2_7 = x1_13 + 0x7f4
                                                else
                                                    x2_7 = &x14_2[zx.q(x0_19 - 3)]
                                                
                                                arg6 =
                                                    float.s(x15_4 & 0xfffff) f* float.s(0x35800000)
                                                v1 = *x2_7
                                                float* x2_8
                                                
                                                if (x15_4 s< 0x200000)
                                                    x2_8 = x1_13 + 0x7f8
                                                else
                                                    x2_8 = &x14_2[zx.q(x0_19 - 2)]
                                                
                                                float v3 = *x2_8
                                                void* x0_22
                                                
                                                if (x15_4 s< 0x100000)
                                                    x0_22 = x1_13 + 0x7fc
                                                else
                                                    x0_22 = &x14_2[zx.q(x0_19 - 1)]
                                                
                                                float v4 = *x0_22
                                                k_2 = k_4
                                                k_4 -= 1
                                                *x13_7 = (v3 + v3 + arg6 * (v4 f- v1) + arg6 * arg6
                                                    * (v1 f+ v1 + v3 f* v10.d + v4 f* v11.d - v2)
                                                    + arg6 f* arg6 f* arg6
                                                    f* (v2 f+ v3 f* v12.d f- v1 f- v4 f* v12.d))
                                                    f* v13.d
                                                x13_7 += 4
                                                x15_4 += x22_1
                                            while (k_2 != 1)
                                        j_1 += 1
                                        x10_7 += x23
                                    while (j_1 u< zx.q(x27_1[9].d))
                        
                        x20_2 += k_7
                        x27_1[0x3b].d += k_7 * x22_1
            else
                uint32_t x10_4
                
                if (x8_10 u< x21)
                    x10_4 = 0
                else
                    x10_4 = x8_10 - x21
                
                x20_2 = x8_10 u> x21 ? x21 : x8_10
                
                x27_1[0x3c].d = x10_4
                
                if (x27_1[9].d != 0)
                    int32_t x19_1 = 0
                    int64_t j_2 = 0
                    
                    do
                        memset(&x24[zx.q(x19_1)], 0, zx.q(x20_2) << 2)
                        j_2 += 1
                        x19_1 += x23
                    while (j_2 u< zx.q(x27_1[9].d))
                    
                    x21 = var_ac_1
                    x28 = var_98_1
                
                x22_1 = vcvtms_s32_f32(v14.d)
                
                if (x22_1 != 0)
                    goto label_1071554
            x24 = var_a8_1
            SoLoud::panAndExpand(x27_1, x25, x21, x23, x24, arg8)
            x19 = var_cc_1
            x20 = var_c8_1
            
            if ((zx.d(x27_1[2].w) & 0x1010101) == 0)
                goto label_1071c34
        else if ((x8_9 & 0xa4) == 0xa0)
            int32_t x20_1 = x27_1[0x3c].d
            
            if (x20_1 == 0)
                goto label_1071a9c
            
            if (x20_1 u<= x21)
                x27_1[0x3c].d = 0
            label_1071a9c:
                uint32_t temp0_3 = vcvtms_s32_f32(*(x27_1 + 0x44) / v8 f* float.s(0x49800000))
                
                if (temp0_3 != 0 && x20_1 u< x21)
                    bool cond:6_1
                    
                    do
                        int32_t x8_54
                        
                        if (*(x27_1 + 0x1dc) == 0)
                            arg6 = (*(x27_1 + 0x1c8)).d
                            *(x27_1 + 0x1c8) = vextq_s8(arg6, arg6, 8)
                            
                            if (((*(*x27_1 + 0x18))(x27_1).d & 1) == 0
                                    || (zx.d(x27_1[2].b) & 1) != 0)
                                arg1 = (*(*x27_1 + 0x10))(x27_1, x27_1[0x39], 0x200, 0x200)
                                
                                if (arg1.d s<= 0x1ff && (zx.d(x27_1[2].b) & 1) != 0)
                                    int32_t j_3 = arg1.d
                                    
                                    do
                                        if ((*(*x27_1 + 0x20))(x27_1, *(var_98_1 + 0x38), 
                                                zx.q(var_98_1[0x14]), (x27_1[0x3d]).d).d != 0)
                                            break
                                        
                                        void* x9_19 = *x27_1
                                        int64_t x10_12 = x27_1[0x39]
                                        *(x27_1 + 0xc) += 1
                                        j_3 += (*(x9_19 + 0x10))(x27_1, x10_12 + (sx.q(j_3) << 2), 
                                            zx.q(0x200 - j_3), 0x200).d
                                    while (j_3 s< 0x200)
                            
                            int32_t x8_66 = x27_1[0x3b].d
                            x28 = var_98_1
                            
                            if (x8_66 u< 0x20000000)
                                x8_54 = 0
                            else
                                x8_54 = x8_66 - 0x20000000
                            
                            x27_1[0x3b].d = x8_54
                            
                            if (x8_54 u>> 0x1d == 0)
                                goto label_1071ad0
                            
                            goto label_1071bd4
                        
                        x8_54 = x27_1[0x3b].d
                        *(x27_1 + 0x1dc) = 0
                        uint32_t x9_17
                        int32_t x10_11
                        int32_t x11_2
                        
                        if (x8_54 u>> 0x1d != 0)
                        label_1071bd4:
                            x9_17 = 0
                            x10_11 = x20_1
                            x11_2 = x10_11 - x21
                            cond:6_1 = x10_11 u< x21
                            
                            if (x10_11 u> x21)
                            label_1071c00:
                                *(x27_1 + 0x1dc) = x11_2
                                x27_1[0x3b].d = x8_54 + (x21 - x20_1) * temp0_3
                                break
                        else
                        label_1071ad0:
                            uint32_t x9_16 = (0x20000000 - x8_54) u/ temp0_3
                            
                            if ((x8_54 + (x9_16 + 1) * temp0_3) u>> 0x1d == 0)
                                x9_17 = x9_16 + 1
                            else
                                x9_17 = x9_16
                            
                            x10_11 = x9_17 + x20_1
                            x11_2 = x10_11 - x21
                            cond:6_1 = x10_11 u< x21
                            
                            if (x10_11 u> x21)
                                goto label_1071c00
                        x20_1 = x10_11
                        x27_1[0x3b].d = x8_54 + x9_17 * temp0_3
                    while (cond:6_1)
                    x8_9 = x27_1[2].d
                    x19 = var_cc_1
                    x24 = var_a8_1
            else
                x27_1[0x3c].d = x20_1 - x21
            
            x20 = var_c8_1
            
            if ((x8_9 & 0x101) == 0)
            label_1071c34:
                
                if (((*(*x27_1 + 0x18))(x27_1).d & 1) != 0)
                    *x10_2
                    SoLoud::Soloud::stopVoice_internal(x28.d)
    
    i_2 += 1
while (i_2 u< zx.q(*x20))
