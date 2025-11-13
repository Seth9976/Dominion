// 函数: sub_fe66d0
// 地址: 0xfe66d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(arg1 + 0x64)
uint64_t x28 = zx.q(*(arg1 + 0x50))
int32_t x11 = *(arg1 + 0x68)
int32_t x10_1 = *(arg1 + 8)
int64_t x17 = *(arg1 + 0x98)
int32_t x3 = *(arg1 + 0xb8)
int32_t x10_2 = *(arg1 + 0xc)
int64_t x21_1 = sx.q(*(arg1 + 0x4c))
int64_t x12_1 = sx.q(*(arg1 + 0x10))
int32_t x13_1

if ((arg2 & 0x80000000) == 0)
    x13_1 = arg2

if ((arg2 & 0x80000000) != 0 || x10_2 s<= arg2)
    uint64_t x13_5 = zx.q(x11 - 1)
    
    if (x13_5.d u<= 3)
        x13_1 = 0
        
        switch (x13_5)
            case 0
                if ((arg2 & 0x80000000) != 0)
                    x13_1 = 0
                else if (x10_2 s> arg2)
                    x13_1 = arg2
                else
                    x13_1 = x10_2 - 1
            case 1
                if ((arg2 & 0x80000000) == 0)
                    x13_1 = arg2
                    
                    if (x10_2 s<= arg2)
                        int32_t x13_7 = x10_2 << 1
                        
                        if (x13_7 s> arg2)
                            x13_1 = x13_7 + not.d(arg2)
                        else
                            x13_1 = 0
                else if (x10_2 s<= arg2)
                    x13_1 = x10_2 - 1
                else
                    x13_1 = neg.d(arg2)
            case 2
                x13_1 = arg2 s% x10_2
                
                if ((arg2 & 0x80000000) != 0)
                    if (x13_1 == 0)
                        x13_1 = 0
                    else
                        x13_1 += x10_2
        
        goto label_fe672c
    
label_fe7a78:
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
        0x3e0, "int stbir__edge_wrap_slow(stbir_edge, int, int)", "!"Unimplemented edge type"")
else
label_fe672c:
    int32_t x14_1 = x3 * x21_1.d
    int64_t x15_1 = sx.q(x14_1)
    void* x2_1 = *arg1
    void* x16_1 = x21_1 & 0xffffffff
    int32_t x15_3 = x3 + x10_1
    int32_t x11_1 = neg.d(x3)
    
    if (x11 == 4 && ((arg2 & 0x80000000) != 0 || x10_2 s<= arg2))
        if (x15_3 s<= x11_1)
            return 
        
        if (x16_1.d s>= 1)
            int32_t i_21 = x10_1 + (x3 << 1)
            int64_t x19_1 = x16_1 << 2
            int64_t x20_1 = x17 + ((x15_1 + sx.q(neg.d(x15_1.d))) << 2)
            int32_t i
            
            do
                memset(x20_1, 0, x19_1)
                i = i_21
                i_21 -= 1
                x20_1 += x19_1
            while (i != 1)
        
        return 
    
    int32_t x8_1 = *(arg1 + 0x6c) + (*(arg1 + 0x58) << 1)
    
    if (x8_1 u<= 7)
        int64_t x10_3 = sx.q(x28.d)
        int64_t x13_2 = sx.q(x13_1)
        int64_t x9_2 = sx.q(x10_1)
        int64_t x9_3 = x17 + (sx.q(x14_1) << 2)
        void* x8_3 = x2_1 + x13_2 * x12_1
        void* var_88_1 = arg1
        int64_t var_98_1 = x21_1
        
        switch (x8_1)
            case 0
                if (x15_3 s> x11_1)
                    int64_t x10_5 = sx.q(x11_1)
                    void* x14_5 = x17 + ((x15_1 + x21_1 * x10_5) << 2)
                    int64_t x8_5 = x9_2 << 1
                    uint64_t x13_4 = zx.q(x10 - 1)
                    
                    while (true)
                        int32_t x2_2
                        int32_t x16_3
                        
                        if ((x10_5 & 0xffffffff80000000) != 0 || x10_5 s>= x9_2)
                            x2_2 = x15_3
                            
                            if (x13_4.d u> 3)
                                goto label_fe7a78
                            
                            arg1 = x16_1
                            x16_3 = 0
                            
                            switch (x13_4)
                                case 0
                                    int32_t x16_8
                                    
                                    if (x10_5 s< x9_2)
                                        x16_8 = x10_5.d
                                    else
                                        x16_8 = x10_1 - 1
                                    
                                    x16_3 = x10_5 s< 0 ? 0 : x16_8
                                    
                                    goto label_fe6834
                                case 1
                                    if ((x10_5 & 0xffffffff80000000) != 0)
                                        if (x10_5 s>= x9_2)
                                            x16_3 = x10_1 - 1
                                        else
                                            x16_3 = neg.d(x10_5.d)
                                        
                                        goto label_fe6834
                                    
                                    if (x10_5 s< x9_2)
                                        goto label_fe682c
                                    
                                    if (x10_5 s< x8_5)
                                        x16_3 = x8_5.d + not.d(x10_5.d)
                                    else
                                        x16_3 = 0
                                    
                                    goto label_fe6834
                                case 2
                                    x16_3 = x10_5.d s% x10_1
                                    
                                    if ((x10_5 & 0xffffffff80000000) != 0)
                                        if (x16_3 == 0)
                                            x16_3 = 0
                                        else
                                            x16_3 += x10_1
                                    
                                    goto label_fe6834
                                case 3
                                    goto label_fe6834
                        else
                            x2_2 = x15_3
                            arg1 = x16_1
                        label_fe682c:
                            x16_3 = x10_5.d
                        label_fe6834:
                            
                            if (x21_1.d s>= 1)
                                void* x16_5 = x8_3 + sx.q(x16_3 * x21_1.d)
                                void* i_15 = arg1
                                arg1 = x14_5
                                void* i_1
                                
                                do
                                    uint32_t x1 = zx.d(*x16_5)
                                    x16_5 += 1
                                    arg3.d = float.s(0x437f0000)
                                    i_1 = i_15
                                    i_15 -= 1
                                    arg4.d = float.s(x1)
                                    arg3.d = arg4.d f/ arg3.d
                                    *arg1 = arg3.d
                                    arg1 += 4
                                while (i_1 != 1)
                            
                            x10_5 += 1
                            x14_5 += x21_1 << 2
                            
                            if (x2_2 == x10_5.d)
                                break
            case 1
                if (x15_3 s> x11_1)
                    int64_t x10_14 = sx.q(x11_1)
                    int32_t* x14_13 = x17 + ((x15_1 + x21_1 * x10_14) << 2)
                    int64_t x8_41 = x9_2 << 1
                    
                    while (true)
                        void* x3_5
                        int32_t x4_7
                        int32_t x16_18
                        
                        if ((x10_14 & 0xffffffff80000000) != 0 || x10_14 s>= x9_2)
                            x4_7 = x15_3
                            uint64_t x16_24 = zx.q(x10 - 1)
                            
                            if (x16_24.d u> 3)
                                goto label_fe7a78
                            
                            x3_5 = var_88_1
                            arg1 = x16_1
                            x16_18 = 0
                            
                            switch (x16_24)
                                case 0
                                    int32_t x16_26
                                    
                                    if (x10_14 s< x9_2)
                                        x16_26 = x10_14.d
                                    else
                                        x16_26 = x10_1 - 1
                                    
                                    x16_18 = x10_14 s< 0 ? 0 : x16_26
                                    
                                    goto label_fe70d0
                                case 1
                                    if ((x10_14 & 0xffffffff80000000) != 0)
                                        if (x10_14 s>= x9_2)
                                            x16_18 = x10_1 - 1
                                        else
                                            x16_18 = neg.d(x10_14.d)
                                        
                                        goto label_fe70d0
                                    
                                    if (x10_14 s< x9_2)
                                        goto label_fe70c8
                                    
                                    if (x10_14 s< x8_41)
                                        x16_18 = x8_41.d + not.d(x10_14.d)
                                    else
                                        x16_18 = 0
                                    
                                    goto label_fe70d0
                                case 2
                                    x16_18 = x10_14.d s% x10_1
                                    
                                    if ((x10_14 & 0xffffffff80000000) != 0)
                                        if (x16_18 == 0)
                                            x16_18 = 0
                                        else
                                            x16_18 += x10_1
                                    
                                    goto label_fe70d0
                                case 3
                                    goto label_fe70d0
                        else
                            x3_5 = var_88_1
                            x4_7 = x15_3
                            arg1 = x16_1
                        label_fe70c8:
                            x16_18 = x10_14.d
                        label_fe70d0:
                            int32_t x16_19 = x16_18 * arg1.d
                            
                            if (x21_1.d s>= 1)
                                int32_t* x1_5 = x14_13
                                char* x17_9 = x8_3 + sx.q(x16_19)
                                void* i_2
                                
                                do
                                    uint64_t x2_6 = zx.q(*x17_9)
                                    x17_9 = &x17_9[1]
                                    i_2 = arg1
                                    arg1 -= 1
                                    arg3.d = *(&data_866830 + (x2_6 << 2))
                                    *x1_5 = arg3.d
                                    x1_5 = &x1_5[1]
                                while (i_2 != 1)
                            
                            if ((zx.d(*(x3_5 + 0x54)) & 2) == 0)
                                arg4.d = float.s(0x437f0000)
                                arg3.b = *(x8_3 + sx.q(x16_19 + x10_3.d))
                                arg3.d = float.s(arg3.d)
                                arg3.d = arg3.d f/ arg4.d
                                *(x9_3 + ((x10_14 * x21_1 + x10_3) << 2)) = arg3.d
                            
                            x10_14 += 1
                            x14_13 = &x14_13[x21_1]
                            
                            if (x4_7 == x10_14.d)
                                break
            case 2
                if (x15_3 s> x11_1)
                    int64_t x11_3 = sx.q(x11_1)
                    int64_t x0_1 = x13_2 * x12_1
                    void* x16_15 = x21_1 * x11_3
                    void* x17_6 = x2_1 + x0_1
                    arg1 = x16_15 + x15_1
                    void* i_23 = x16_1 & 0xfffffff8
                    int64_t x8_8 = 0
                    int64_t x9_9 = x9_2 << 1
                    int64_t x13_9 = x21_1 << 2
                    arg3.d = 0x477fff00
                    arg3:4.d = 0x477fff00
                    arg3:8.d = 0x477fff00
                    arg3:0xc.d = 0x477fff00
                    uint128_t* x4_3 = x17 + (arg1 << 2) + 0x10
                    
                    while (true)
                        int32_t x6_2
                        int32_t x23_1
                        void* x24_1
                        
                        if ((x11_3 & 0xffffffff80000000) != 0 || x11_3 s>= x9_2)
                            x23_1 = x15_3
                            uint64_t x6_6 = zx.q(x10 - 1)
                            
                            if (x6_6.d u> 3)
                                goto label_fe7a78
                            
                            x24_1 = x16_1
                            x6_2 = 0
                            
                            switch (x6_6)
                                case 0
                                    int32_t x6_8
                                    
                                    if (x11_3 s< x9_2)
                                        x6_8 = x11_3.d
                                    else
                                        x6_8 = x10_1 - 1
                                    
                                    x6_2 = x11_3 s< 0 ? 0 : x6_8
                                    
                                    goto label_fe6a80
                                case 1
                                    if ((x11_3 & 0xffffffff80000000) != 0)
                                        if (x11_3 s>= x9_2)
                                            x6_2 = x10_1 - 1
                                        else
                                            x6_2 = neg.d(x11_3.d)
                                        
                                        goto label_fe6a80
                                    
                                    if (x11_3 s< x9_2)
                                        goto label_fe6a78
                                    
                                    if (x11_3 s< x9_9)
                                        x6_2 = x9_9.d + not.d(x11_3.d)
                                    else
                                        x6_2 = 0
                                    
                                    goto label_fe6a80
                                case 2
                                    x6_2 = x11_3.d s% x10_1
                                    
                                    if ((x11_3 & 0xffffffff80000000) != 0)
                                        if (x6_2 == 0)
                                            x6_2 = 0
                                        else
                                            x6_2 += x10_1
                                    
                                    goto label_fe6a80
                                case 3
                                    goto label_fe6a80
                        else
                            x23_1 = x15_3
                            x24_1 = x16_1
                        label_fe6a78:
                            x6_2 = x11_3.d
                        label_fe6a80:
                            
                            if (x21_1.d s>= 1)
                                int64_t x6_4 = sx.q(x6_2 * x21_1.d)
                                void* i_27
                                
                                if (x24_1.d u>= 8)
                                    int64_t x7_2 = x8_8 * x21_1
                                    int64_t x19_3 = x6_4 << 1
                                    
                                    if (x2_1 + x0_1 + (x16_1 << 1) + x19_3
                                            u> x17 + ((arg1 + x7_2) << 2)
                                            && x17_6 + x19_3 u< x17 + ((arg1 + x16_1 + x7_2) << 2))
                                        x21_1 = var_98_1
                                        i_27 = nullptr
                                        goto label_fe6b70
                                    
                                    void* x7_5 = x17_6 + 8 + (x6_4 << 1)
                                    uint128_t* x19_5 = x4_3
                                    void* i_19 = i_23
                                    void* i_3
                                    
                                    do
                                        arg4.q = *(x7_5 - 8)
                                        arg5.q = *x7_5
                                        i_3 = i_19
                                        i_19 -= 8
                                        x7_5 += 0x10
                                        arg4.d = zx.d(arg4.w)
                                        arg4:4.d = zx.d(arg4:2.w)
                                        arg4:8.d = zx.d(arg4:4.w)
                                        arg4:0xc.d = zx.d(arg4:6.w)
                                        arg5.d = zx.d(arg5.w)
                                        arg5:4.d = zx.d(arg5:2.w)
                                        arg5:8.d = zx.d(arg5:4.w)
                                        arg5:0xc.d = zx.d(arg5:6.w)
                                        float128 v1 = vcvtq_f32_u32(arg4)
                                        float128 v2 = vcvtq_f32_u32(arg5)
                                        arg4 = vdivq_f32(v1, arg3)
                                        arg5 = vdivq_f32(v2, arg3)
                                        x19_5[-1] = arg4
                                        *x19_5 = arg5
                                        x19_5 = &x19_5[2]
                                    while (i_3 != 8)
                                    x21_1 = var_98_1
                                    i_27 = i_23
                                    
                                    if (i_23 != x24_1)
                                        goto label_fe6b70
                                else
                                    i_27 = nullptr
                                label_fe6b70:
                                    int32_t* x6_9 = x17 + (x15_1 << 2) + ((i_27 + x16_15) << 2)
                                    void* x7_7 = x17_6 + ((i_27 + x6_4) << 1)
                                    void* i_16 = x24_1 - i_27
                                    void* i_4
                                    
                                    do
                                        uint32_t x20_5 = zx.d(*x7_7)
                                        x7_7 += 2
                                        arg4.d = float.s(0x477fff00)
                                        i_4 = i_16
                                        i_16 -= 1
                                        arg5.d = float.s(x20_5)
                                        arg4.d = arg5.d f/ arg4.d
                                        *x6_9 = arg4.d
                                        x6_9 = &x6_9[1]
                                    while (i_4 != 1)
                            
                            x11_3 += 1
                            x8_8 += 1
                            x4_3 += x13_9
                            x16_15 += x21_1
                            
                            if (x23_1 == x11_3.d)
                                break
            case 3
                if (x15_3 s> x11_1)
                    int64_t x20_6 = sx.q(x11_1)
                    int64_t x8_10 = x9_2 << 1
                    int32_t* x25_1 = x17 + ((x15_1 + x21_1 * x20_6) << 2)
                    
                    while (true)
                        int32_t x8_19
                        int32_t x10_9
                        
                        if ((x20_6 & 0xffffffff80000000) != 0 || x20_6 s>= x9_2)
                            uint64_t x8_29 = zx.q(x10 - 1)
                            
                            if (x8_29.d u> 3)
                                goto label_fe7a78
                            
                            x10_9 = x16_1.d
                            x8_19 = 0
                            
                            switch (x8_29)
                                case 0
                                    int32_t x8_32
                                    
                                    if (x20_6 s< x9_2)
                                        x8_32 = x20_6.d
                                    else
                                        x8_32 = x10_1 - 1
                                    
                                    x8_19 = x20_6 s< 0 ? 0 : x8_32
                                    
                                    goto label_fe6c90
                                case 1
                                    if ((x20_6 & 0xffffffff80000000) != 0)
                                        if (x20_6 s>= x9_2)
                                            x8_19 = x10_1 - 1
                                        else
                                            x8_19 = neg.d(x20_6.d)
                                        
                                        goto label_fe6c90
                                    
                                    if (x20_6 s< x9_2)
                                        goto label_fe6c88
                                    
                                    if (x20_6 s< x8_10)
                                        x8_19 = x8_10.d + not.d(x20_6.d)
                                    else
                                        x8_19 = 0
                                    
                                    goto label_fe6c90
                                case 2
                                    x8_19 = x20_6.d s% x10_1
                                    
                                    if ((x20_6 & 0xffffffff80000000) != 0)
                                        if (x8_19 == 0)
                                            x8_19 = 0
                                        else
                                            x8_19 += x10_1
                                    
                                    goto label_fe6c90
                                case 3
                                    goto label_fe6c90
                        else
                            x10_9 = x16_1.d
                        label_fe6c88:
                            x8_19 = x20_6.d
                        label_fe6c90:
                            int32_t x8_20 = x8_19 * x10_9
                            
                            if (x21_1.d s>= 1)
                                void* x27_1 = x16_1
                                int32_t* x26_1 = x25_1
                                void* x21_3 = x8_3 + (sx.q(x8_20) << 1)
                                
                                while (true)
                                    arg3.w = *x21_3
                                    arg4.d = float.s(0x477fff00)
                                    arg3.d = float.s(arg3.d)
                                    arg3.d = arg3.d f/ arg4.d
                                    arg4.d = float.s(0x3d25aee6)
                                    
                                    if (arg3.d f> arg4.d)
                                        arg4.d = float.s(0x3d6147ae)
                                        arg3.d = arg3.d f+ arg4.d
                                        arg4.d = float.s(0x3f870a3d)
                                        arg3.d = arg3.d f/ arg4.d
                                        arg4.d = float.s(0x4019999a)
                                        arg3, arg1, arg4, arg5, arg6 =
                                            powf(arg3.d, arg4.d, arg5.d, arg6.d)
                                        *x26_1 = arg3.d
                                        x26_1 = &x26_1[1]
                                        void* temp5_1 = x27_1
                                        x27_1 -= 1
                                        x21_3 += 2
                                        
                                        if (temp5_1 == 1)
                                            break
                                    else
                                        arg4.d = float.s(0x414eb852)
                                        arg3.d = arg3.d f/ arg4.d
                                        *x26_1 = arg3.d
                                        x26_1 = &x26_1[1]
                                        void* temp6_1 = x27_1
                                        x27_1 -= 1
                                        x21_3 += 2
                                        
                                        if (temp6_1 == 1)
                                            break
                            
                            x21_1 = var_98_1
                            
                            if ((zx.d(*(var_88_1 + 0x54)) & 2) == 0)
                                arg4.d = float.s(0x477fff00)
                                arg3.w = *(x8_3 + (sx.q(x8_20 + x10_3.d) << 1))
                                arg3.d = float.s(arg3.d)
                                arg3.d = arg3.d f/ arg4.d
                                *(x9_3 + ((x20_6 * x21_1 + x10_3) << 2)) = arg3.d
                            
                            x20_6 += 1
                            x25_1 = &x25_1[x21_1]
                            
                            if (x15_3 == x20_6.d)
                                break
            case 4
                if (x15_3 s> x11_1)
                    int64_t x11_4 = sx.q(x11_1)
                    int64_t x0_2 = x13_2 * x12_1
                    void* x16_16 = x21_1 * x11_4
                    void* x17_7 = x2_1 + x0_2
                    arg1 = x16_16 + x15_1
                    void* i_24 = x16_1 & 0xfffffff8
                    int64_t x8_39 = 0
                    int64_t x9_20 = x9_2 << 1
                    int64_t x13_10 = x21_1 << 2
                    arg3.q = 0x41efffffffe00000
                    arg3:8.q = 0x41efffffffe00000
                    uint128_t* x4_6 = x17 + (arg1 << 2) + 0x10
                    
                    while (true)
                        int32_t x6_16
                        int32_t x23_2
                        void* x24_2
                        
                        if ((x11_4 & 0xffffffff80000000) != 0 || x11_4 s>= x9_2)
                            x23_2 = x15_3
                            uint64_t x6_20 = zx.q(x10 - 1)
                            
                            if (x6_20.d u> 3)
                                goto label_fe7a78
                            
                            x24_2 = x16_1
                            x6_16 = 0
                            
                            switch (x6_20)
                                case 0
                                    int32_t x6_22
                                    
                                    if (x11_4 s< x9_2)
                                        x6_22 = x11_4.d
                                    else
                                        x6_22 = x10_1 - 1
                                    
                                    x6_16 = x11_4 s< 0 ? 0 : x6_22
                                    
                                    goto label_fe6eb8
                                case 1
                                    if ((x11_4 & 0xffffffff80000000) != 0)
                                        if (x11_4 s>= x9_2)
                                            x6_16 = x10_1 - 1
                                        else
                                            x6_16 = neg.d(x11_4.d)
                                        
                                        goto label_fe6eb8
                                    
                                    if (x11_4 s< x9_2)
                                        goto label_fe6eb0
                                    
                                    if (x11_4 s< x9_20)
                                        x6_16 = x9_20.d + not.d(x11_4.d)
                                    else
                                        x6_16 = 0
                                    
                                    goto label_fe6eb8
                                case 2
                                    x6_16 = x11_4.d s% x10_1
                                    
                                    if ((x11_4 & 0xffffffff80000000) != 0)
                                        if (x6_16 == 0)
                                            x6_16 = 0
                                        else
                                            x6_16 += x10_1
                                    
                                    goto label_fe6eb8
                                case 3
                                    goto label_fe6eb8
                        else
                            x23_2 = x15_3
                            x24_2 = x16_1
                        label_fe6eb0:
                            x6_16 = x11_4.d
                        label_fe6eb8:
                            
                            if (x21_1.d s>= 1)
                                int64_t x6_18 = sx.q(x6_16 * x24_2.d)
                                void* i_28
                                
                                if (x24_2.d u>= 8)
                                    int64_t x7_12 = x8_39 * x21_1
                                    int64_t x19_7 = x6_18 << 2
                                    
                                    if (x2_1 + x0_2 + (x16_1 << 2) + x19_7
                                            u> x17 + ((arg1 + x7_12) << 2) && x17_7 + x19_7
                                            u< x17 + ((arg1 + x16_1 + x7_12) << 2))
                                        x21_1 = var_98_1
                                        i_28 = nullptr
                                        goto label_fe6fd0
                                    
                                    void* x7_15 = x17_7 + 0x10 + (x6_18 << 2)
                                    uint128_t* x19_9 = x4_6
                                    void* i_20 = i_24
                                    void* i_5
                                    
                                    do
                                        arg4 = *(x7_15 - 0x10)
                                        arg5 = *x7_15
                                        i_5 = i_20
                                        i_20 -= 8
                                        x7_15 += 0x20
                                        arg6.q = zx.q(arg4.d)
                                        arg6:8.q = zx.q(arg4:4.d)
                                        uint128_t v4
                                        v4.q = zx.q(arg5.d)
                                        v4:8.q = zx.q(arg5:4.d)
                                        arg4.q = zx.q(arg4:8.d)
                                        arg4:8.q = zx.q(arg4:0xc.d)
                                        arg5.q = zx.q(arg5:8.d)
                                        arg5:8.q = zx.q(arg5:0xc.d)
                                        float128 v3 = vcvtq_f64_u64(arg6)
                                        float128 v4_1 = vcvtq_f64_u64(v4)
                                        float128 v1_1 = vcvtq_f64_u64(arg4)
                                        float128 v2_1 = vcvtq_f64_u64(arg5)
                                        float128 v3_1 = vdivq_f64(v3, arg3)
                                        float128 v4_2 = vdivq_f64(v4_1, arg3)
                                        arg4 = vdivq_f64(v1_1, arg3)
                                        arg5 = vdivq_f64(v2_1, arg3)
                                        int128_t v3_2 = vcvt_f32_f64(v3_1, v3_1)
                                        int128_t v4_3 = vcvt_f32_f64(v4_2, v4_2)
                                        arg6 = vcvt_high_f32_f64(v3_2, arg4)
                                        v4 = vcvt_high_f32_f64(v4_3, arg5)
                                        x19_9[-1] = arg6
                                        *x19_9 = v4
                                        x19_9 = &x19_9[2]
                                    while (i_5 != 8)
                                    x21_1 = var_98_1
                                    i_28 = i_24
                                    
                                    if (i_24 != x24_2)
                                        goto label_fe6fd0
                                else
                                    i_28 = nullptr
                                label_fe6fd0:
                                    int32_t* x6_23 = x17 + (x15_1 << 2) + ((i_28 + x16_16) << 2)
                                    void* x7_17 = x17_7 + ((i_28 + x6_18) << 2)
                                    void* i_17 = x24_2 - i_28
                                    void* i_6
                                    
                                    do
                                        int32_t x20_10 = *x7_17
                                        x7_17 += 4
                                        arg4.q = float.d(0x41efffffffe00000)
                                        i_6 = i_17
                                        i_17 -= 1
                                        arg5.q = float.d(zx.q(x20_10))
                                        arg4.q = arg5.q f/ arg4.q
                                        arg4.d = fconvert.s(arg4.q)
                                        *x6_23 = arg4.d
                                        x6_23 = &x6_23[1]
                                    while (i_6 != 1)
                            
                            x11_4 += 1
                            x8_39 += 1
                            x4_6 += x13_10
                            x16_16 += x21_1
                            
                            if (x23_2 == x11_4.d)
                                break
            case 5
                if (x15_3 s> x11_1)
                    int64_t x20_11 = sx.q(x11_1)
                    int64_t x8_43 = x9_2 << 1
                    int32_t* x24_3 = x17 + ((x15_1 + x21_1 * x20_11) << 2)
                    
                    while (true)
                        int32_t x8_52
                        int32_t x10_15
                        
                        if ((x20_11 & 0xffffffff80000000) != 0 || x20_11 s>= x9_2)
                            uint64_t x8_62 = zx.q(x10 - 1)
                            
                            if (x8_62.d u> 3)
                                goto label_fe7a78
                            
                            x10_15 = x16_1.d
                            x8_52 = 0
                            
                            switch (x8_62)
                                case 0
                                    int32_t x8_65
                                    
                                    if (x20_11 s< x9_2)
                                        x8_65 = x20_11.d
                                    else
                                        x8_65 = x10_1 - 1
                                    
                                    x8_52 = x20_11 s< 0 ? 0 : x8_65
                                    
                                    goto label_fe726c
                                case 1
                                    if ((x20_11 & 0xffffffff80000000) != 0)
                                        if (x20_11 s>= x9_2)
                                            x8_52 = x10_1 - 1
                                        else
                                            x8_52 = neg.d(x20_11.d)
                                        
                                        goto label_fe726c
                                    
                                    if (x20_11 s< x9_2)
                                        goto label_fe7264
                                    
                                    if (x20_11 s< x8_43)
                                        x8_52 = x8_43.d + not.d(x20_11.d)
                                    else
                                        x8_52 = 0
                                    
                                    goto label_fe726c
                                case 2
                                    x8_52 = x20_11.d s% x10_1
                                    
                                    if ((x20_11 & 0xffffffff80000000) != 0)
                                        if (x8_52 == 0)
                                            x8_52 = 0
                                        else
                                            x8_52 += x10_1
                                    
                                    goto label_fe726c
                                case 3
                                    goto label_fe726c
                        else
                            x10_15 = x16_1.d
                        label_fe7264:
                            x8_52 = x20_11.d
                        label_fe726c:
                            int32_t x8_53 = x8_52 * x10_15
                            
                            if (x21_1.d s>= 1)
                                void* x27_2 = x16_1
                                int32_t* x19_10 = x24_3
                                int32_t* x21_5 = x8_3 + (sx.q(x8_53) << 2)
                                
                                while (true)
                                    arg3.d = *x21_5
                                    arg4.q = float.d(0x41efffffffe00000)
                                    arg3.q = float.d(arg3.q)
                                    arg3.q = arg3.q f/ arg4.q
                                    arg3.d = fconvert.s(arg3.q)
                                    arg4.d = float.s(0x3d25aee6)
                                    
                                    if (arg3.d f> arg4.d)
                                        arg4.d = float.s(0x3d6147ae)
                                        arg3.d = arg3.d f+ arg4.d
                                        arg4.d = float.s(0x3f870a3d)
                                        arg3.d = arg3.d f/ arg4.d
                                        arg4.d = float.s(0x4019999a)
                                        arg3, arg1, arg4, arg5, arg6 =
                                            powf(arg3.d, arg4.d, arg5.d, arg6.d)
                                        *x19_10 = arg3.d
                                        x19_10 = &x19_10[1]
                                        void* temp7_1 = x27_2
                                        x27_2 -= 1
                                        x21_5 = &x21_5[1]
                                        
                                        if (temp7_1 == 1)
                                            break
                                    else
                                        arg4.d = float.s(0x414eb852)
                                        arg3.d = arg3.d f/ arg4.d
                                        *x19_10 = arg3.d
                                        x19_10 = &x19_10[1]
                                        void* temp8_1 = x27_2
                                        x27_2 -= 1
                                        x21_5 = &x21_5[1]
                                        
                                        if (temp8_1 == 1)
                                            break
                            
                            x21_1 = var_98_1
                            
                            if ((zx.d(*(var_88_1 + 0x54)) & 2) == 0)
                                arg4.q = float.d(0x41efffffffe00000)
                                arg3.d = *(x8_3 + (sx.q(x8_53 + x28.d) << 2))
                                arg3.q = float.d(arg3.q)
                                arg3.q = arg3.q f/ arg4.q
                                arg3.d = fconvert.s(arg3.q)
                                *(x9_3 + ((x20_11 * x21_1 + x10_3) << 2)) = arg3.d
                            
                            x20_11 += 1
                            x24_3 = &x24_3[x21_1]
                            
                            if (x15_3 == x20_11.d)
                                break
            case 6
                if (x15_3 s> x11_1)
                    int64_t x11_6 = sx.q(x11_1)
                    int64_t x17_17 = x13_2 * x12_1
                    void* x15_7 = x21_1 * x11_6
                    void* x16_32 = x2_1 + x17_17
                    void* x17_18 = x15_7 + x15_1
                    void* i_25 = x16_1 & 0xfffffff8
                    int64_t x8_72 = 0
                    int64_t x9_34 = x9_2 << 1
                    int64_t x13_11 = x21_1 << 2
                    void* x3_8 = x17 + (x17_18 << 2) + 0x10
                    
                    while (true)
                        int32_t x5_4
                        int32_t x22_3
                        void* x23_3
                        
                        if ((x11_6 & 0xffffffff80000000) != 0 || x11_6 s>= x9_2)
                            x22_3 = x15_3
                            uint64_t x5_8 = zx.q(x10 - 1)
                            
                            if (x5_8.d u> 3)
                                goto label_fe7a78
                            
                            x23_3 = x16_1
                            x5_4 = 0
                            
                            switch (x5_8)
                                case 0
                                    int32_t x5_10
                                    
                                    if (x11_6 s< x9_2)
                                        x5_10 = x11_6.d
                                    else
                                        x5_10 = x10_1 - 1
                                    
                                    x5_4 = x11_6 s< 0 ? 0 : x5_10
                                    
                                    goto label_fe748c
                                case 1
                                    if ((x11_6 & 0xffffffff80000000) != 0)
                                        if (x11_6 s>= x9_2)
                                            x5_4 = x10_1 - 1
                                        else
                                            x5_4 = neg.d(x11_6.d)
                                        
                                        goto label_fe748c
                                    
                                    if (x11_6 s< x9_2)
                                        goto label_fe7484
                                    
                                    if (x11_6 s< x9_34)
                                        x5_4 = x9_34.d + not.d(x11_6.d)
                                    else
                                        x5_4 = 0
                                    
                                    goto label_fe748c
                                case 2
                                    x5_4 = x11_6.d s% x10_1
                                    
                                    if ((x11_6 & 0xffffffff80000000) != 0)
                                        if (x5_4 == 0)
                                            x5_4 = 0
                                        else
                                            x5_4 += x10_1
                                    
                                    goto label_fe748c
                                case 3
                                    goto label_fe748c
                        else
                            x22_3 = x15_3
                            x23_3 = x16_1
                        label_fe7484:
                            x5_4 = x11_6.d
                        label_fe748c:
                            
                            if (x21_1.d s>= 1)
                                int64_t x5_6 = sx.q(x5_4 * x23_3.d)
                                void* i_26
                                
                                if (x23_3.d u>= 8)
                                    int64_t x6_30 = x8_72 * x21_1
                                    int64_t x7_22 = x5_6 << 2
                                    
                                    if (x2_1 + x17_17 + (x16_1 << 2) + x7_22
                                            u> x17 + ((x17_18 + x6_30) << 2) && x16_32 + x7_22
                                            u< x17 + ((x17_18 + x16_1 + x6_30) << 2))
                                        x21_1 = var_98_1
                                        i_26 = nullptr
                                        goto label_fe7568
                                    
                                    void* x6_33 = x16_32 + 0x10 + (x5_6 << 2)
                                    void* x7_24 = x3_8
                                    void* i_18 = i_25
                                    void* i_7
                                    
                                    do
                                        arg3 = *(x6_33 - 0x10)
                                        arg4 = *x6_33
                                        i_7 = i_18
                                        i_18 -= 8
                                        x6_33 += 0x20
                                        *(x7_24 - 0x10) = arg3
                                        *x7_24 = arg4
                                        x7_24 += 0x20
                                    while (i_7 != 8)
                                    x21_1 = var_98_1
                                    i_26 = i_25
                                    
                                    if (i_25 != x23_3)
                                        goto label_fe7568
                                else
                                    i_26 = nullptr
                                label_fe7568:
                                    int32_t* x5_11 = x17 + (x15_1 << 2) + ((i_26 + x15_7) << 2)
                                    void* x6_35 = x16_32 + ((i_26 + x5_6) << 2)
                                    void* i_12 = x23_3 - i_26
                                    void* i_8
                                    
                                    do
                                        arg3.d = *x6_35
                                        x6_35 += 4
                                        i_8 = i_12
                                        i_12 -= 1
                                        *x5_11 = arg3.d
                                        x5_11 = &x5_11[1]
                                    while (i_8 != 1)
                            
                            x11_6 += 1
                            x8_72 += 1
                            x3_8 += x13_11
                            x15_7 += x21_1
                            
                            if (x22_3 == x11_6.d)
                                break
            case 7
                if (x15_3 s> x11_1)
                    int64_t x22_4 = sx.q(x11_1)
                    int64_t x8_74 = x9_2 << 1
                    int32_t* x27_3 = x17 + ((x15_1 + x21_1 * x22_4) << 2)
                    
                    while (true)
                        int32_t x8_83
                        
                        if ((x22_4 & 0xffffffff80000000) != 0 || x22_4 s>= x9_2)
                            uint64_t x8_93 = zx.q(x10 - 1)
                            
                            if (x8_93.d u> 3)
                                goto label_fe7a78
                            
                            x8_83 = 0
                            
                            switch (x8_93)
                                case 0
                                    int32_t x8_96
                                    
                                    if (x22_4 s< x9_2)
                                        x8_96 = x22_4.d
                                    else
                                        x8_96 = x10_1 - 1
                                    
                                    x8_83 = x22_4 s< 0 ? 0 : x8_96
                                    
                                    goto label_fe767c
                                case 1
                                    if ((x22_4 & 0xffffffff80000000) != 0)
                                        if (x22_4 s>= x9_2)
                                            x8_83 = x10_1 - 1
                                        else
                                            x8_83 = neg.d(x22_4.d)
                                        
                                        goto label_fe767c
                                    
                                    if (x22_4 s< x9_2)
                                        goto label_fe7670
                                    
                                    if (x22_4 s< x8_74)
                                        x8_83 = x8_74.d + not.d(x22_4.d)
                                    else
                                        x8_83 = 0
                                    
                                    goto label_fe767c
                                case 2
                                    x8_83 = x22_4.d s% x10_1
                                    
                                    if ((x22_4 & 0xffffffff80000000) != 0)
                                        if (x8_83 == 0)
                                            x8_83 = 0
                                        else
                                            x8_83 += x10_1
                                    
                                    goto label_fe767c
                                case 3
                                    goto label_fe767c
                        else
                        label_fe7670:
                            x8_83 = x22_4.d
                        label_fe767c:
                            int32_t x8_84 = x8_83 * x16_1.d
                            
                            if (x21_1.d s>= 1)
                                void* x19_14 = x16_1
                                int32_t* x24_4 = x27_3
                                int32_t* x21_7 = x8_3 + (sx.q(x8_84) << 2)
                                
                                while (true)
                                    arg3.d = *x21_7
                                    arg4.d = float.s(0x3d25aee6)
                                    
                                    if (arg3.d f> arg4.d)
                                        arg4.d = float.s(0x3d6147ae)
                                        arg3.d = arg3.d f+ arg4.d
                                        arg4.d = float.s(0x3f870a3d)
                                        arg3.d = arg3.d f/ arg4.d
                                        arg4.d = float.s(0x4019999a)
                                        arg3, arg1, arg4, arg5, arg6 =
                                            powf(arg3.d, arg4.d, arg5.d, arg6.d)
                                        *x24_4 = arg3.d
                                        x24_4 = &x24_4[1]
                                        void* temp9_1 = x19_14
                                        x19_14 -= 1
                                        x21_7 = &x21_7[1]
                                        
                                        if (temp9_1 == 1)
                                            break
                                    else
                                        arg4.d = float.s(0x414eb852)
                                        arg3.d = arg3.d f/ arg4.d
                                        *x24_4 = arg3.d
                                        x24_4 = &x24_4[1]
                                        void* temp10_1 = x19_14
                                        x19_14 -= 1
                                        x21_7 = &x21_7[1]
                                        
                                        if (temp10_1 == 1)
                                            break
                            
                            x21_1 = var_98_1
                            
                            if ((zx.d(*(var_88_1 + 0x54)) & 2) == 0)
                                arg3.d = *(x8_3 + (sx.q(x8_84 + x10_3.d) << 2))
                                *(x9_3 + ((x22_4 * x21_1 + x10_3) << 2)) = arg3.d
                            
                            x22_4 += 1
                            x27_3 = &x27_3[x21_1]
                            
                            if (x15_3 == x22_4.d)
                                break
        
        if ((zx.d(*(var_88_1 + 0x54)) & 1) == 0)
            int32_t i_13 = neg.d(*(var_88_1 + 0xb8))
            
            if (x15_3 s> i_13)
                if (x16_1.d s<= 0)
                    int64_t i_14 = sx.q(x15_3) - sx.q(i_13)
                    int32_t* x10_25 = x17 + ((muls.dp.d(x16_1.d, i_13) + x10_3 + x15_1) << 2)
                    int64_t i_9
                    
                    do
                        if (*(var_88_1 + 0x58) != 3)
                            arg3.d = *x10_25
                            arg4.d = float.s(0x17800000)
                            arg3.d = arg3.d f+ arg4.d
                            *x10_25 = arg3.d
                        
                        i_9 = i_14
                        i_14 -= 1
                        x10_25 = &x10_25[sx.q(x16_1.d)]
                    while (i_9 != 1)
                else
                    int64_t i_10 = sx.q(i_13)
                    void* x13_12 = i_10 * x16_1
                    void* x10_21 = x16_1 & 0xfffffffe
                    int32_t* x14_18 = x17 + ((x13_12 + x15_1) << 2) + 4
                    
                    do
                        int64_t x16_33 = x10_3 + i_10 * x16_1
                        arg3.d = *(x9_3 + (x16_33 << 2))
                        
                        if (*(var_88_1 + 0x58) != 3)
                            arg4.d = float.s(0x17800000)
                            arg3.d = arg3.d f+ arg4.d
                            *(x9_3 + (x16_33 << 2)) = arg3.d
                        
                        if (x16_1.d u>= 2)
                            int64_t x16_34 = 0
                            uint64_t x17_20 = x28
                            int32_t* x0_5 = x14_18
                            
                            do
                                if (x17_20 != 0)
                                    arg4.d = x0_5[-1]
                                
                                int64_t x1_8 = x16_34 | 1
                                
                                if (x1_8 != x28)
                                    arg5.d = *x0_5
                                
                                if (x17_20 != 0)
                                    arg4.d = arg3.d f* arg4.d
                                    x0_5[-1] = arg4.d
                                
                                if (x1_8 != x28)
                                    arg4.d = arg3.d f* arg5.d
                                    *x0_5 = arg4.d
                                
                                x16_34 += 2
                                x0_5 = &x0_5[2]
                                x17_20 -= 2
                            while (x16_34 != x10_21)
                            
                            arg1 = x10_21
                            
                            if (x10_21 != x16_1)
                                goto label_fe78ec
                        else
                            arg1 = nullptr
                        label_fe78ec:
                            void* x16_35 = x28 - arg1
                            int32_t* x17_22 = x17 + (x15_1 << 2) + ((arg1 + x13_12) << 2)
                            arg1 = x16_1 - arg1
                            void* j
                            
                            do
                                if (x16_35 != 0)
                                    arg4.d = *x17_22
                                    arg4.d = arg3.d f* arg4.d
                                    *x17_22 = arg4.d
                                
                                x17_22 = &x17_22[1]
                                j = arg1
                                arg1 -= 1
                                x16_35 -= 1
                            while (j != 1)
                        
                        i_10 += 1
                        x14_18 = &x14_18[x16_1]
                        x13_12 += x16_1
                    while (i_10 != sx.q(x15_3))
        
        int32_t x22_5 = x10_1
        
        if (x10 == 4)
            uint64_t i_22 = zx.q(*(var_88_1 + 0xb8))
            
            if (i_22.d s>= 1 && x16_1.d s>= 1)
                int64_t x19_15 = x16_1 << 2
                int64_t x20_13 = x17 + ((x15_1 + sx.q(0 - i_22.d * x16_1.d)) << 2)
                uint64_t i_11
                
                do
                    memset(x20_13, 0, x19_15)
                    i_11 = i_22
                    i_22 -= 1
                    x20_13 += x19_15
                while (i_11 != 1)
            
            if (x3 s>= 1 && x16_1.d s>= 1)
                int64_t x19_16 = x16_1 << 2
                int64_t x20_14 = x17 + ((x15_1 + sx.q(x22_5 * var_98_1.d)) << 2)
                
                do
                    memset(x20_14, 0, x19_16)
                    x22_5 += 1
                    x20_14 += x19_16
                while (x22_5 s< x15_3)
        
        return 

void* x0_8
int32_t* x1_9
x0_8, x1_9 = __assert2(
    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 0x556, 
    "void stbir__decode_scanline(stbir__info *, int)", 
    "!"Unknown type/colorspace/channels combination."")
return sub_fe7a9c(x0_8, x1_9) __tailcall
