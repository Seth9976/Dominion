// 函数: _spDeformTimeline_apply
// 地址: 0xfafbc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_50 = v8
void* x22 = *(*(arg2 + 0x28) + (sx.q(*(arg1 + 0x38)) << 3))

if (*(*(x22 + 8) + 0x80) == 0)
    return 

void* x8_3 = *(x22 + 0x28)

if (x8_3 == 0)
    return 

int32_t x9_1 = *(x8_3 + 8)

if (x9_1 u> 6 || (1 << x9_1 & 0x56) == 0)
    return 

void* x19_1 = arg1

if (*(x8_3 + 0x50) != *(arg1 + 0x40))
    return 

uint64_t x21_1 = zx.q(*(x19_1 + 0x28))
int32_t x8_5 = *(x22 + 0x34)
int32_t* x23_1 = *(x19_1 + 0x20)
int32_t x25_1 = *(x19_1 + 0x18)
uint128_t v17_1 = arg8
v8 = arg7.q
int64_t x24_1 = sx.q(x21_1.d)
float128 v3
float128 v4
float128 v5
float128 v6
float128 v7
float128 v16

if (x8_5 s< x21_1.d && *(x22 + 0x30) s< x21_1.d)
    uint128_t var_60_1 = v17_1
    _spFree(*(x22 + 0x38))
    int64_t x0_2
    x0_2, arg6, arg7, arg8, v3, v4, v5, v6, v7, v16, v17_1 =
        _spMalloc(x24_1 << 2, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x3a8)
    v17_1 = var_60_1
    x8_5 = *(x22 + 0x34)
    *(x22 + 0x38) = x0_2
    *(x22 + 0x30) = x21_1.d

arg6.d = *x23_1
arg1 = *(x22 + 0x38)
int32_t x10_1

x10_1 = x8_5 == 0 ? 0 : arg5

if (arg6.d f<= v8.d)
    int64_t x9_6 = *(x19_1 + 0x30)
    *(x22 + 0x34) = x21_1.d
    arg6.d = x23_1[sx.q(x25_1 - 1)]
    
    if (arg6.d f<= v8.d)
        arg6.d = fconvert.s(1f)
        void* x1 = *(*(x19_1 + 0x30) + (sx.q(x25_1 - 1) << 3))
        
        if (v17_1.d f!= arg6.d)
            if (x10_1 - 1 u< 2)
                if (x21_1.d s>= 1)
                    uint64_t x8_20
                    
                    if (x21_1.d u>= 8)
                        x8_20 = x21_1 << 2
                    
                    int64_t i_71
                    
                    if (x21_1.d u>= 8 && (arg1 u>= x1 + x8_20 || x1 u>= arg1 + x8_20))
                        i_71 = x21_1 & 0xfffffff8
                        arg6 = vdupq_laneq_s32(v17_1, 0)
                        void* x9_33 = x1 + 0x10
                        int128_t* x10_33 = arg1 + 0x10
                        int64_t i_51 = i_71
                        int64_t i
                        
                        do
                            arg7 = *(x9_33 - 0x10)
                            arg8 = *x9_33
                            v3 = x10_33[-1]
                            v4 = *x10_33
                            x9_33 += 0x20
                            i = i_51
                            i_51 -= 8
                            float128 v1_3 = vsubq_f32(arg7, v3)
                            float128 v2_4 = vsubq_f32(arg8, v4)
                            float128 v1_4 = vmulq_f32(v1_3, arg6, 0)
                            float128 v2_5 = vmulq_f32(v2_4, arg6, 0)
                            arg7 = vaddq_f32(v3, v1_4)
                            arg8 = vaddq_f32(v4, v2_5)
                            x10_33[-1] = arg7
                            *x10_33 = arg8
                            x10_33 = &x10_33[2]
                        while (i != 8)
                        
                        if (i_71 != x21_1)
                            goto label_faffac
                    else
                        i_71 = 0
                    label_faffac:
                        int64_t x10_7 = i_71 << 2
                        void* x9_17 = arg1 + x10_7
                        void* x10_8 = x1 + x10_7
                        int64_t i_36 = x21_1 - i_71
                        int64_t i_1
                        
                        do
                            arg6.d = *x10_8
                            x10_8 += 4
                            arg7.d = *x9_17
                            i_1 = i_36
                            i_36 -= 1
                            arg6.d = arg6.d f- arg7.d
                            arg6.d = arg6.d f* v17_1.d
                            arg6.d = arg7.d f+ arg6.d
                            *x9_17 = arg6.d
                            x9_17 += 4
                        while (i_1 != 1)
                
                goto label_faffdc
            
            if (x10_1 == 3)
            label_faffdc:
                void* x8_22 = *(x22 + 0x28)
                
                if (*(x8_22 + 0x30) == 0)
                    if (x21_1.d s>= 1)
                        void* x8_29 = *(x8_22 + 0x40)
                        int64_t i_75
                        
                        if (x21_1.d u>= 8)
                            uint64_t x10_20 = x21_1 << 2
                            void* x11_10 = arg1 + x10_20
                            i_75 = 0
                            
                            if (((arg1 u< x1 + x10_20 ? 1 : 0) & (x1 u< x11_10 ? 1 : 0) & 1) != 0
                                    || ((arg1 u< x8_29 + x10_20 ? 1 : 0)
                                    & (x8_29 u< x11_10 ? 1 : 0) & 1) != 0)
                                goto label_fb0320
                            
                            i_75 = x21_1 & 0xfffffff8
                            arg6 = vdupq_laneq_s32(v17_1, 0)
                            void* x10_24 = x1 + 0x10
                            int128_t* x11_12 = x8_29 + 0x10
                            int128_t* x12_12 = arg1 + 0x10
                            int64_t i_58 = i_75
                            int64_t i_2
                            
                            do
                                arg7 = *(x10_24 - 0x10)
                                v3 = *x10_24
                                arg8 = x11_12[-1]
                                v4 = *x11_12
                                x10_24 += 0x20
                                x11_12 = &x11_12[2]
                                i_2 = i_58
                                i_58 -= 8
                                float128 v1_1 = vsubq_f32(arg7, arg8)
                                float128 v3_2 = vsubq_f32(v3, v4)
                                arg8 = x12_12[-1]
                                v4 = *x12_12
                                float128 v1_2 = vmulq_f32(v1_1, arg6, 0)
                                v3 = vmulq_f32(v3_2, arg6, 0)
                                arg7 = vaddq_f32(arg8, v1_2)
                                arg8 = vaddq_f32(v4, v3)
                                x12_12[-1] = arg7
                                *x12_12 = arg8
                                x12_12 = &x12_12[2]
                            while (i_2 != 8)
                            
                            if (i_75 != x21_1)
                                goto label_fb0320
                        else
                            i_75 = 0
                        label_fb0320:
                            int64_t x11_13 = i_75 << 2
                            void* x10_25 = arg1 + x11_13
                            void* x8_31 = x8_29 + x11_13
                            void* x11_14 = x1 + x11_13
                            int64_t i_41 = x21_1 - i_75
                            int64_t i_3
                            
                            do
                                arg6.d = *x11_14
                                x11_14 += 4
                                arg7.d = *x8_31
                                x8_31 += 4
                                arg8.d = *x10_25
                                i_3 = i_41
                                i_41 -= 1
                                arg6.d = arg6.d f- arg7.d
                                arg6.d = arg6.d f* v17_1.d
                                arg6.d = arg8.d f+ arg6.d
                                *x10_25 = arg6.d
                                x10_25 += 4
                            while (i_3 != 1)
                else if (x21_1.d s>= 1)
                    uint64_t x8_23
                    
                    if (x21_1.d u>= 8)
                        x8_23 = x21_1 << 2
                    
                    int64_t i_72
                    
                    if (x21_1.d u>= 8 && (arg1 u>= x1 + x8_23 || x1 u>= arg1 + x8_23))
                        i_72 = x21_1 & 0xfffffff8
                        arg6 = vdupq_laneq_s32(v17_1, 0)
                        void* x9_34 = x1 + 0x10
                        int128_t* x10_34 = arg1 + 0x10
                        int64_t i_52 = i_72
                        int64_t i_4
                        
                        do
                            arg7 = *(x9_34 - 0x10)
                            arg8 = *x9_34
                            v3 = x10_34[-1]
                            v4 = *x10_34
                            x9_34 += 0x20
                            i_4 = i_52
                            i_52 -= 8
                            float128 v1_5 = vmulq_f32(arg7, arg6, 0)
                            float128 v2_6 = vmulq_f32(arg8, arg6, 0)
                            arg7 = vaddq_f32(v3, v1_5)
                            arg8 = vaddq_f32(v4, v2_6)
                            x10_34[-1] = arg7
                            *x10_34 = arg8
                            x10_34 = &x10_34[2]
                        while (i_4 != 8)
                        
                        if (i_72 != x21_1)
                            goto label_fb0018
                    else
                        i_72 = 0
                    label_fb0018:
                        int64_t x10_9 = i_72 << 2
                        void* x9_20 = arg1 + x10_9
                        void* x10_10 = x1 + x10_9
                        int64_t i_37 = x21_1 - i_72
                        int64_t i_5
                        
                        do
                            arg6.d = *x10_10
                            x10_10 += 4
                            arg7.d = *x9_20
                            i_5 = i_37
                            i_37 -= 1
                            arg6.d = arg6.d f* v17_1.d
                            arg6.d = arg7.d f+ arg6.d
                            *x9_20 = arg6.d
                            x9_20 += 4
                        while (i_5 != 1)
            else if (x10_1 == 0)
                void* x8_15 = *(x22 + 0x28)
                
                if (*(x8_15 + 0x30) == 0)
                    if (x21_1.d s>= 1)
                        void* x8_30 = *(x8_15 + 0x40)
                        int64_t i_76
                        
                        if (x21_1.d u>= 8)
                            uint64_t x10_36 = x21_1 << 2
                            void* x11_50 = arg1 + x10_36
                            i_76 = 0
                            
                            if (((arg1 u< x8_30 + x10_36 ? 1 : 0) & (x8_30 u< x11_50 ? 1 : 0) & 1)
                                    != 0 || ((arg1 u< x1 + x10_36 ? 1 : 0) & (x1 u< x11_50 ? 1 : 0) & 1)
                                    != 0)
                                goto label_fb0bf4
                            
                            i_76 = x21_1 & 0xfffffff8
                            arg6 = vdupq_laneq_s32(v17_1, 0)
                            void* x10_40 = x8_30 + 0x10
                            int128_t* x11_52 = x1 + 0x10
                            void* x12_43 = arg1 + 0x10
                            int64_t i_59 = i_76
                            int64_t i_6
                            
                            do
                                arg7 = *(x10_40 - 0x10)
                                arg8 = *x10_40
                                v3 = x11_52[-1]
                                v4 = *x11_52
                                x10_40 += 0x20
                                x11_52 = &x11_52[2]
                                i_6 = i_59
                                i_59 -= 8
                                float128 v3_14 = vsubq_f32(v3, arg7)
                                float128 v4_8 = vsubq_f32(v4, arg8)
                                v3 = vmulq_f32(v3_14, arg6, 0)
                                v4 = vmulq_f32(v4_8, arg6, 0)
                                arg7 = vaddq_f32(arg7, v3)
                                arg8 = vaddq_f32(arg8, v4)
                                *(x12_43 - 0x10) = arg7
                                *x12_43 = arg8
                                x12_43 += 0x20
                            while (i_6 != 8)
                            
                            if (i_76 != x21_1)
                                goto label_fb0bf4
                        else
                            i_76 = 0
                        label_fb0bf4:
                            int64_t x12_44 = i_76 << 2
                            void* x10_41 = arg1 + x12_44
                            void* x11_53 = x1 + x12_44
                            int32_t* x8_39 = x8_30 + x12_44
                            int64_t i_42 = x21_1 - i_76
                            int64_t i_7
                            
                            do
                                arg6.d = *x8_39
                                x8_39 = &x8_39[1]
                                arg7.d = *x11_53
                                x11_53 += 4
                                i_7 = i_42
                                i_42 -= 1
                                arg7.d = arg7.d f- arg6.d
                                arg7.d = arg7.d f* v17_1.d
                                arg6.d = arg6.d f+ arg7.d
                                *x10_41 = arg6.d
                                x10_41 += 4
                            while (i_7 != 1)
                else if (x21_1.d s>= 1)
                    uint64_t x8_16
                    
                    if (x21_1.d u>= 8)
                        x8_16 = x21_1 << 2
                    
                    int64_t i_69
                    
                    if (x21_1.d u>= 8 && (arg1 u>= x1 + x8_16 || x1 u>= arg1 + x8_16))
                        i_69 = x21_1 & 0xfffffff8
                        arg6 = vdupq_laneq_s32(v17_1, 0)
                        void* x9_37 = x1 + 0x10
                        void* x10_44 = arg1 + 0x10
                        int64_t i_55 = i_69
                        int64_t i_8
                        
                        do
                            arg7 = *(x9_37 - 0x10)
                            arg8 = *x9_37
                            x9_37 += 0x20
                            i_8 = i_55
                            i_55 -= 8
                            arg7 = vmulq_f32(arg7, arg6, 0)
                            arg8 = vmulq_f32(arg8, arg6, 0)
                            *(x10_44 - 0x10) = arg7
                            *x10_44 = arg8
                            x10_44 += 0x20
                        while (i_8 != 8)
                        
                        if (i_69 != x21_1)
                            goto label_fafe7c
                    else
                        i_69 = 0
                    label_fafe7c:
                        int64_t x10_4 = i_69 << 2
                        void* x9_13 = arg1 + x10_4
                        void* x10_5 = x1 + x10_4
                        int64_t i_35 = x21_1 - i_69
                        int64_t i_9
                        
                        do
                            arg6.d = *x10_5
                            x10_5 += 4
                            i_9 = i_35
                            i_35 -= 1
                            arg6.d = arg6.d f* v17_1.d
                            *x9_13 = arg6.d
                            x9_13 += 4
                        while (i_9 != 1)
        else
            if (x10_1 != 3)
                return memcpy(arg1, x1, x24_1 << 2) __tailcall
            
            void* x8_9 = *(x22 + 0x28)
            
            if (*(x8_9 + 0x30) == 0)
                if (x21_1.d s>= 1)
                    void* x8_25 = *(x8_9 + 0x40)
                    int64_t i_73
                    
                    if (x21_1.d u>= 8)
                        uint64_t x10_14 = x21_1 << 2
                        void* x11_7 = arg1 + x10_14
                        i_73 = 0
                        
                        if (((arg1 u< x1 + x10_14 ? 1 : 0) & (x1 u< x11_7 ? 1 : 0) & 1) != 0 || ((
                                arg1 u< x8_25 + x10_14 ? 1 : 0) & (x8_25 u< x11_7 ? 1 : 0) & 1) != 0)
                            goto label_fb0060
                        
                        i_73 = x21_1 & 0xfffffff8
                        void* x10_18 = x1 + 0x10
                        void* x11_9 = x8_25 + 0x10
                        void* x12_8 = arg1 + 0x10
                        int64_t i_57 = i_73
                        int64_t i_10
                        
                        do
                            arg6 = *(x10_18 - 0x10)
                            arg8 = *x10_18
                            arg7 = *(x11_9 - 0x10)
                            v3 = *x11_9
                            x10_18 += 0x20
                            x11_9 += 0x20
                            i_10 = i_57
                            i_57 -= 8
                            float128 v0_1 = vsubq_f32(arg6, arg7)
                            arg8 = vsubq_f32(arg8, v3)
                            v3 = *x12_8
                            arg6 = vaddq_f32(*(x12_8 - 0x10), v0_1)
                            arg7 = vaddq_f32(v3, arg8)
                            *(x12_8 - 0x10) = arg6
                            *x12_8 = arg7
                            x12_8 += 0x20
                        while (i_10 != 8)
                        
                        if (i_73 != x21_1)
                            goto label_fb0060
                    else
                        i_73 = 0
                    label_fb0060:
                        int64_t x11_4 = i_73 << 2
                        void* x10_11 = arg1 + x11_4
                        int32_t* x8_26 = x8_25 + x11_4
                        void* x11_5 = x1 + x11_4
                        int64_t i_39 = x21_1 - i_73
                        int64_t i_11
                        
                        do
                            arg6.d = *x11_5
                            x11_5 += 4
                            arg7.d = *x8_26
                            x8_26 = &x8_26[1]
                            arg8.d = *x10_11
                            i_11 = i_39
                            i_39 -= 1
                            arg6.d = arg6.d f- arg7.d
                            arg6.d = arg8.d f+ arg6.d
                            *x10_11 = arg6.d
                            x10_11 += 4
                        while (i_11 != 1)
            else if (x21_1.d s>= 1)
                uint64_t x8_10
                
                if (x21_1.d u>= 8)
                    x8_10 = x21_1 << 2
                
                int64_t i_68
                
                if (x21_1.d u>= 8 && (arg1 u>= x1 + x8_10 || x1 u>= arg1 + x8_10))
                    i_68 = x21_1 & 0xfffffff8
                    void* x9_25 = x1 + 0x10
                    void* x10_19 = arg1 + 0x10
                    int64_t i_49 = i_68
                    int64_t i_12
                    
                    do
                        arg6 = *(x9_25 - 0x10)
                        arg7 = *x9_25
                        v3 = *x10_19
                        x9_25 += 0x20
                        i_12 = i_49
                        i_49 -= 8
                        arg6 = vaddq_f32(arg6, *(x10_19 - 0x10))
                        arg7 = vaddq_f32(arg7, v3)
                        *(x10_19 - 0x10) = arg6
                        *x10_19 = arg7
                        x10_19 += 0x20
                    while (i_12 != 8)
                    
                    if (i_68 != x21_1)
                        goto label_fafd90
                else
                    i_68 = 0
                label_fafd90:
                    int64_t x10_2 = i_68 << 2
                    void* x9_10 = arg1 + x10_2
                    void* x10_3 = x1 + x10_2
                    int64_t i_34 = x21_1 - i_68
                    int64_t i_13
                    
                    do
                        arg6.d = *x10_3
                        x10_3 += 4
                        arg7.d = *x9_10
                        i_13 = i_34
                        i_34 -= 1
                        arg6.d = arg6.d f+ arg7.d
                        *x9_10 = arg6.d
                        x9_10 += 4
                    while (i_13 != 1)
    else
        int32_t x12_1 = x25_1 - 2
        int32_t x11_2
        
        if (x25_1 == 2)
            x11_2 = 1
        else
            int32_t x8_7 = 0
            int32_t x11_1 = x12_1
            
            do
                int32_t x12_2 = x12_1 s>> 1
                arg6.d = x23_1[sx.q(x12_2 + 1)]
                arg6.d f- v8.d
                
                if (not(arg6.d f> v8.d))
                    x8_7 = x12_2 + 1
                
                if (arg6.d f> v8.d)
                    x11_1 = x12_2
                
                x12_1 = x8_7 + x11_1
            while (x8_7 != x11_1)
            
            x11_2 = x8_7 + 1
        
        arg6.d = x23_1[sx.q(x11_2)]
        arg8.d = x23_1[sx.q(x11_2) - 1]
        int32_t* x12_3 = *(x19_1 + 0x10)
        v3.d = v8.d f- arg6.d
        arg8.d = arg8.d f- arg6.d
        int32_t x15_1 = (x11_2 - 1) * 0x13
        arg8.d = v3.d f/ arg8.d
        v3.d = x12_3[sx.q(x15_1)]
        arg7.d = fconvert.s(1f)
        arg8.d = arg7.d f- arg8.d
        arg6.d = 0f
        bool cond:4_1 = arg8.d f< 0f
        arg8.d = vmin_f32(arg8.d, arg7.d)
        
        if (cond:4_1)
            arg8.d = arg6.d
        else
            arg8.d = arg8.d
        
        if (not(v3.d f!= 0f))
            arg6 = arg8
        else if (not(v3.d f== arg7.d))
            int32_t x13_2 = x15_1 + 1
            int64_t x4 = zx.q(x13_2) << 0x20
            int64_t x14_1 = 0
            int64_t x15_3 = x4 + -0x100000000
            int64_t x16_1 = x4 + -0x200000000
            
            while (true)
                arg6.d = x12_3[sx.q(x13_2) + x14_1]
                
                if (arg6.d f>= arg8.d)
                    if (x14_1.d == 0)
                        v3.d = 0f
                        v4.d = 0f
                    else
                        v3.d = *(x12_3 + (x16_1 s>> 0x1e))
                        v4.d = *(x12_3 + (x15_3 s>> 0x1e))
                        x13_2 += x14_1.d
                    
                    v5.d = x12_3[sx.q(x13_2 + 1)]
                    arg8.d = arg8.d f- v3.d
                    arg6.d = arg6.d f- v3.d
                    v5.d = v5.d f- v4.d
                    arg8.d = arg8.d f* v5.d
                    arg6.d = arg8.d f/ arg6.d
                    arg6.d = v4.d f+ arg6.d
                    break
                
                x14_1 += 2
                x15_3 += 0x200000000
                x16_1 += 0x200000000
                
                if (sx.q(x13_2) - 2 + x14_1 s>= sx.q(x15_1 + 0x11))
                    v3.d = *(x12_3 + (x15_3 s>> 0x1e))
                    v4.d = fconvert.s(1f)
                    arg8.d = arg8.d f- arg6.d
                    arg6.d = v4.d f- arg6.d
                    v5.d = v4.d f- v3.d
                    arg8.d = arg8.d f* v5.d
                    arg6.d = arg8.d f/ arg6.d
                    arg6.d = v3.d f+ arg6.d
                    break
        
        void* x8_32 = *(x9_6 + ((sx.q(x11_2) - 1) << 3))
        void* x9_26 = *(x9_6 + (sx.q(x11_2) << 3))
        
        if (v17_1.d f!= arg7.d)
            if (x10_1 - 1 u< 2)
                if (x21_1.d s>= 1)
                    int64_t i_80
                    
                    if (x21_1.d u>= 8)
                        uint64_t x11_34 = x21_1 << 2
                        void* x12_25 = arg1 + x11_34
                        i_80 = 0
                        
                        if (((arg1 u< x8_32 + x11_34 ? 1 : 0) & (x8_32 u< x12_25 ? 1 : 0) & 1) != 0
                                || ((arg1 u< x9_26 + x11_34 ? 1 : 0) & (x9_26 u< x12_25 ? 1 : 0)
                                & 1) != 0)
                            goto label_fb049c
                        
                        i_80 = x21_1 & 0xfffffff8
                        arg7 = vdupq_laneq_s32(arg6, 0)
                        arg8 = vdupq_laneq_s32(v17_1, 0)
                        void* x11_38 = x8_32 + 0x10
                        int128_t* x12_27 = x9_26 + 0x10
                        int128_t* x13_20 = arg1 + 0x10
                        int64_t i_62 = i_80
                        int64_t i_14
                        
                        do
                            v3 = *(x11_38 - 0x10)
                            v5 = *x11_38
                            v4 = x12_27[-1]
                            v6 = *x12_27
                            x11_38 += 0x20
                            x12_27 = &x12_27[2]
                            i_14 = i_62
                            i_62 -= 8
                            float128 v4_3 = vsubq_f32(v4, v3)
                            float128 v6_2 = vsubq_f32(v6, v5)
                            float128 v4_4 = vmulq_f32(arg7, v4_3, 0)
                            v6 = vmulq_f32(arg7, v6_2, 0)
                            float128 v3_5 = vaddq_f32(v3, v4_4)
                            float128 v5_4 = vaddq_f32(v5, v6)
                            v4_4 = x13_20[-1]
                            v6 = *x13_20
                            float128 v3_6 = vsubq_f32(v3_5, v4_4)
                            float128 v5_5 = vsubq_f32(v5_4, v6)
                            float128 v3_7 = vmulq_f32(v3_6, arg8, 0)
                            v5 = vmulq_f32(v5_5, arg8, 0)
                            v3 = vaddq_f32(v4_4, v3_7)
                            v4 = vaddq_f32(v6, v5)
                            x13_20[-1] = v3
                            *x13_20 = v4
                            x13_20 = &x13_20[2]
                        while (i_14 != 8)
                        
                        if (i_80 != x21_1)
                            goto label_fb049c
                    else
                        i_80 = 0
                    label_fb049c:
                        int64_t x12_15 = i_80 << 2
                        void* x11_20 = arg1 + x12_15
                        void* x9_29 = x9_26 + x12_15
                        void* x8_35 = x8_32 + x12_15
                        int64_t i_46 = x21_1 - i_80
                        int64_t i_15
                        
                        do
                            arg7.d = *x8_35
                            x8_35 += 4
                            arg8.d = *x9_29
                            x9_29 += 4
                            v3.d = *x11_20
                            i_15 = i_46
                            i_46 -= 1
                            arg8.d = arg8.d f- arg7.d
                            arg8.d = arg6.d f* arg8.d
                            arg7.d = arg7.d f+ arg8.d
                            arg7.d = arg7.d f- v3.d
                            arg7.d = arg7.d f* v17_1.d
                            arg7.d = v3.d f+ arg7.d
                            *x11_20 = arg7.d
                            x11_20 += 4
                        while (i_15 != 1)
            else if (x10_1 == 3)
                void* x10_30 = *(x22 + 0x28)
                
                if (*(x10_30 + 0x30) == 0)
                    if (x21_1.d s>= 1)
                        void* x10_32 = *(x10_30 + 0x40)
                        int64_t i_84
                        
                        if (x21_1.d u>= 8)
                            uint64_t x12_52 = x21_1 << 2
                            void* x15_12 = arg1 + x12_52
                            i_84 = 0
                            
                            if (((arg1 u< x8_32 + x12_52 ? 1 : 0) & (x8_32 u< x15_12 ? 1 : 0) & 1)
                                    != 0 || ((arg1 u< x9_26 + x12_52 ? 1 : 0) & (x9_26 u< x15_12 ? 1 : 0)
                                    & 1) != 0 || ((arg1 u< x10_32 + x12_52 ? 1 : 0)
                                    & (x10_32 u< x15_12 ? 1 : 0) & 1) != 0)
                                goto label_fb0e3c
                            
                            i_84 = x21_1 & 0xfffffff8
                            arg7 = vdupq_laneq_s32(arg6, 0)
                            arg8 = vdupq_laneq_s32(v17_1, 0)
                            void* x12_57 = x8_32 + 0x10
                            void* x13_42 = x9_26 + 0x10
                            int128_t* x14_16 = x10_32 + 0x10
                            int128_t* x15_14 = arg1 + 0x10
                            int64_t i_67 = i_84
                            int64_t i_16
                            
                            do
                                v3 = *(x12_57 - 0x10)
                                v5 = *x12_57
                                v4 = *(x13_42 - 0x10)
                                v6 = *x13_42
                                x12_57 += 0x20
                                x13_42 += 0x20
                                i_16 = i_67
                                i_67 -= 8
                                float128 v3_18 =
                                    vaddq_f32(v3, vmulq_f32(arg7, vsubq_f32(v4, v3), 0))
                                v7 = x14_16[-1]
                                float128 v4_14 = vsubq_f32(
                                    vaddq_f32(v5, vmulq_f32(arg7, vsubq_f32(v6, v5), 0)), *x14_16)
                                v6 = x15_14[-1]
                                v5 = *x15_14
                                float128 v3_20 = vmulq_f32(vsubq_f32(v3_18, v7), arg8, 0)
                                float128 v4_15 = vmulq_f32(v4_14, arg8, 0)
                                v3 = vaddq_f32(v6, v3_20)
                                v4 = vaddq_f32(v5, v4_15)
                                x14_16 = &x14_16[2]
                                x15_14[-1] = v3
                                *x15_14 = v4
                                x15_14 = &x15_14[2]
                            while (i_16 != 8)
                            
                            if (i_84 != x21_1)
                                goto label_fb0e3c
                        else
                            i_84 = 0
                        label_fb0e3c:
                            int64_t x13_43 = i_84 << 2
                            int32_t* x12_58 = arg1 + x13_43
                            void* x10_43 = x10_32 + x13_43
                            void* x9_36 = x9_26 + x13_43
                            void* x8_41 = x8_32 + x13_43
                            int64_t i_54 = x21_1 - i_84
                            int64_t i_17
                            
                            do
                                arg7.d = *x8_41
                                x8_41 += 4
                                arg8.d = *x9_36
                                x9_36 += 4
                                v3.d = *x10_43
                                x10_43 += 4
                                v4.d = *x12_58
                                i_17 = i_54
                                i_54 -= 1
                                arg8.d = arg8.d f- arg7.d
                                arg8.d = arg6.d f* arg8.d
                                arg7.d = arg7.d f+ arg8.d
                                arg7.d = arg7.d f- v3.d
                                arg7.d = arg7.d f* v17_1.d
                                arg7.d = v4.d f+ arg7.d
                                *x12_58 = arg7.d
                                x12_58 = &x12_58[1]
                            while (i_17 != 1)
                else if (x21_1.d s>= 1)
                    int64_t i_81
                    
                    if (x21_1.d u>= 8)
                        uint64_t x11_45 = x21_1 << 2
                        void* x12_37 = arg1 + x11_45
                        i_81 = 0
                        
                        if (((arg1 u< x8_32 + x11_45 ? 1 : 0) & (x8_32 u< x12_37 ? 1 : 0) & 1) != 0
                                || ((arg1 u< x9_26 + x11_45 ? 1 : 0) & (x9_26 u< x12_37 ? 1 : 0)
                                & 1) != 0)
                            goto label_fb063c
                        
                        i_81 = x21_1 & 0xfffffff8
                        arg7 = vdupq_laneq_s32(arg6, 0)
                        arg8 = vdupq_laneq_s32(v17_1, 0)
                        void* x11_49 = x8_32 + 0x10
                        int128_t* x12_39 = x9_26 + 0x10
                        int128_t* x13_32 = arg1 + 0x10
                        int64_t i_64 = i_81
                        int64_t i_18
                        
                        do
                            v3 = *(x11_49 - 0x10)
                            v5 = *x11_49
                            v4 = x12_39[-1]
                            v6 = *x12_39
                            x11_49 += 0x20
                            x12_39 = &x12_39[2]
                            i_18 = i_64
                            i_64 -= 8
                            float128 v4_6 = vsubq_f32(v4, v3)
                            float128 v6_4 = vsubq_f32(v6, v5)
                            float128 v4_7 = vmulq_f32(arg7, v4_6, 0)
                            v6 = vmulq_f32(arg7, v6_4, 0)
                            float128 v3_12 = vaddq_f32(v3, v4_7)
                            float128 v5_8 = vaddq_f32(v5, v6)
                            v4_7 = x13_32[-1]
                            v6 = *x13_32
                            float128 v3_13 = vmulq_f32(v3_12, arg8, 0)
                            v5 = vmulq_f32(v5_8, arg8, 0)
                            v3 = vaddq_f32(v4_7, v3_13)
                            v4 = vaddq_f32(v6, v5)
                            x13_32[-1] = v3
                            *x13_32 = v4
                            x13_32 = &x13_32[2]
                        while (i_18 != 8)
                        
                        if (i_81 != x21_1)
                            goto label_fb063c
                    else
                        i_81 = 0
                    label_fb063c:
                        int64_t x12_21 = i_81 << 2
                        void* x11_28 = arg1 + x12_21
                        void* x9_32 = x9_26 + x12_21
                        void* x8_38 = x8_32 + x12_21
                        int64_t i_48 = x21_1 - i_81
                        int64_t i_19
                        
                        do
                            arg7.d = *x8_38
                            x8_38 += 4
                            arg8.d = *x9_32
                            x9_32 += 4
                            v3.d = *x11_28
                            i_19 = i_48
                            i_48 -= 1
                            arg8.d = arg8.d f- arg7.d
                            arg8.d = arg6.d f* arg8.d
                            arg7.d = arg7.d f+ arg8.d
                            arg7.d = arg7.d f* v17_1.d
                            arg7.d = v3.d f+ arg7.d
                            *x11_28 = arg7.d
                            x11_28 += 4
                        while (i_19 != 1)
            else if (x10_1 == 0)
                void* x10_27 = *(x22 + 0x28)
                
                if (*(x10_27 + 0x30) == 0)
                    if (x21_1.d s>= 1)
                        void* x10_31 = *(x10_27 + 0x40)
                        int64_t i_83
                        
                        if (x21_1.d u>= 8)
                            uint64_t x12_45 = x21_1 << 2
                            void* x15_9 = arg1 + x12_45
                            i_83 = 0
                            
                            if (((arg1 u< x8_32 + x12_45 ? 1 : 0) & (x8_32 u< x15_9 ? 1 : 0) & 1)
                                    != 0 || ((arg1 u< x10_31 + x12_45 ? 1 : 0) & (x10_31 u< x15_9 ? 1 : 0)
                                    & 1) != 0 || ((arg1 u< x9_26 + x12_45 ? 1 : 0)
                                    & (x9_26 u< x15_9 ? 1 : 0) & 1) != 0)
                                goto label_fb0d0c
                            
                            i_83 = x21_1 & 0xfffffff8
                            arg7 = vdupq_laneq_s32(arg6, 0)
                            arg8 = vdupq_laneq_s32(v17_1, 0)
                            void* x12_50 = x8_32 + 0x10
                            int128_t* x13_37 = x10_31 + 0x10
                            void* x14_13 = x9_26 + 0x10
                            void* x15_11 = arg1 + 0x10
                            int64_t i_66 = i_83
                            int64_t i_20
                            
                            do
                                v3 = *(x12_50 - 0x10)
                                v4 = *x12_50
                                v16 = *x14_13
                                v5 = x13_37[-1]
                                v6 = *x13_37
                                x12_50 += 0x20
                                x13_37 = &x13_37[2]
                                float128 v7_2 = vsubq_f32(*(x14_13 - 0x10), v3)
                                float128 v16_2 = vsubq_f32(v16, v4)
                                v7 = vmulq_f32(arg7, v7_2, 0)
                                v16 = vmulq_f32(arg7, v16_2, 0)
                                float128 v3_15 = vaddq_f32(v3, v7)
                                float128 v4_9 = vaddq_f32(v4, v16)
                                float128 v3_16 = vsubq_f32(v3_15, v5)
                                float128 v4_10 = vsubq_f32(v4_9, v6)
                                float128 v3_17 = vmulq_f32(v3_16, arg8, 0)
                                float128 v4_11 = vmulq_f32(v4_10, arg8, 0)
                                v3 = vaddq_f32(v5, v3_17)
                                v4 = vaddq_f32(v6, v4_11)
                                x14_13 += 0x20
                                i_20 = i_66
                                i_66 -= 8
                                *(x15_11 - 0x10) = v3
                                *x15_11 = v4
                                x15_11 += 0x20
                            while (i_20 != 8)
                            
                            if (i_83 != x21_1)
                                goto label_fb0d0c
                        else
                            i_83 = 0
                        label_fb0d0c:
                            int64_t x13_38 = i_83 << 2
                            void* x12_51 = arg1 + x13_38
                            void* x9_35 = x9_26 + x13_38
                            void* x10_42 = x10_31 + x13_38
                            void* x8_40 = x8_32 + x13_38
                            int64_t i_53 = x21_1 - i_83
                            int64_t i_21
                            
                            do
                                arg7.d = *x8_40
                                x8_40 += 4
                                arg8.d = *x10_42
                                x10_42 += 4
                                v3.d = *x9_35
                                x9_35 += 4
                                i_21 = i_53
                                i_53 -= 1
                                v3.d = v3.d f- arg7.d
                                v3.d = arg6.d f* v3.d
                                arg7.d = arg7.d f+ v3.d
                                arg7.d = arg7.d f- arg8.d
                                arg7.d = arg7.d f* v17_1.d
                                arg7.d = arg8.d f+ arg7.d
                                *x12_51 = arg7.d
                                x12_51 += 4
                            while (i_21 != 1)
                else if (x21_1.d s>= 1)
                    int64_t i_78
                    
                    if (x21_1.d u>= 8)
                        uint64_t x11_40 = x21_1 << 2
                        void* x12_34 = arg1 + x11_40
                        i_78 = 0
                        
                        if (((arg1 u< x8_32 + x11_40 ? 1 : 0) & (x8_32 u< x12_34 ? 1 : 0) & 1) != 0
                                || ((arg1 u< x9_26 + x11_40 ? 1 : 0) & (x9_26 u< x12_34 ? 1 : 0)
                                & 1) != 0)
                            goto label_fb0434
                        
                        i_78 = x21_1 & 0xfffffff8
                        arg7 = vdupq_laneq_s32(arg6, 0)
                        arg8 = vdupq_laneq_s32(v17_1, 0)
                        void* x11_44 = x8_32 + 0x10
                        void* x12_36 = x9_26 + 0x10
                        void* x13_28 = arg1 + 0x10
                        int64_t i_63 = i_78
                        int64_t i_22
                        
                        do
                            v3 = *(x11_44 - 0x10)
                            v4 = *x11_44
                            v5 = *(x12_36 - 0x10)
                            v6 = *x12_36
                            x11_44 += 0x20
                            x12_36 += 0x20
                            i_22 = i_63
                            i_63 -= 8
                            float128 v5_7 = vsubq_f32(v5, v3)
                            float128 v6_3 = vsubq_f32(v6, v4)
                            v5 = vmulq_f32(arg7, v5_7, 0)
                            v6 = vmulq_f32(arg7, v6_3, 0)
                            float128 v3_11 = vaddq_f32(v3, v5)
                            float128 v4_5 = vaddq_f32(v4, v6)
                            v3 = vmulq_f32(v3_11, arg8, 0)
                            v4 = vmulq_f32(v4_5, arg8, 0)
                            *(x13_28 - 0x10) = v3
                            *x13_28 = v4
                            x13_28 += 0x20
                        while (i_22 != 8)
                        
                        if (i_78 != x21_1)
                            goto label_fb0434
                    else
                        i_78 = 0
                    label_fb0434:
                        int64_t x12_14 = i_78 << 2
                        void* x11_19 = arg1 + x12_14
                        void* x9_28 = x9_26 + x12_14
                        void* x8_34 = x8_32 + x12_14
                        int64_t i_45 = x21_1 - i_78
                        int64_t i_23
                        
                        do
                            arg7.d = *x8_34
                            x8_34 += 4
                            arg8.d = *x9_28
                            x9_28 += 4
                            i_23 = i_45
                            i_45 -= 1
                            arg8.d = arg8.d f- arg7.d
                            arg8.d = arg6.d f* arg8.d
                            arg7.d = arg7.d f+ arg8.d
                            arg7.d = arg7.d f* v17_1.d
                            *x11_19 = arg7.d
                            x11_19 += 4
                        while (i_23 != 1)
        else if (x10_1 == 3)
            void* x10_26 = *(x22 + 0x28)
            
            if (*(x10_26 + 0x30) == 0)
                if (x21_1.d s>= 1)
                    void* x10_28 = *(x10_26 + 0x40)
                    int64_t i_82
                    
                    if (x21_1.d u>= 8)
                        uint64_t x12_28 = x21_1 << 2
                        void* x15_6 = arg1 + x12_28
                        i_82 = 0
                        
                        if (((arg1 u< x8_32 + x12_28 ? 1 : 0) & (x8_32 u< x15_6 ? 1 : 0) & 1) != 0
                                || ((arg1 u< x9_26 + x12_28 ? 1 : 0) & (x9_26 u< x15_6 ? 1 : 0)
                                & 1) != 0 || ((arg1 u< x10_28 + x12_28 ? 1 : 0) & (x10_28 u< x15_6 ? 1 : 0)
                                & 1) != 0)
                            goto label_fb04fc
                        
                        i_82 = x21_1 & 0xfffffff8
                        arg7 = vdupq_laneq_s32(arg6, 0)
                        void* x12_33 = x8_32 + 0x10
                        void* x13_24 = x9_26 + 0x10
                        void* x14_8 = x10_28 + 0x10
                        void* x15_8 = arg1 + 0x10
                        int64_t i_65 = i_82
                        int64_t i_24
                        
                        do
                            arg8 = *(x12_33 - 0x10)
                            v4 = *x12_33
                            v3 = *(x13_24 - 0x10)
                            v5 = *x13_24
                            x12_33 += 0x20
                            x13_24 += 0x20
                            i_24 = i_65
                            i_65 -= 8
                            float128 v2_2 = vaddq_f32(arg8, vmulq_f32(arg7, vsubq_f32(v3, arg8), 0))
                            v6 = *(x14_8 - 0x10)
                            float128 v3_10 = vsubq_f32(
                                vaddq_f32(v4, vmulq_f32(arg7, vsubq_f32(v5, v4), 0)), *x14_8)
                            v4 = *x15_8
                            x14_8 += 0x20
                            arg8 = vaddq_f32(*(x15_8 - 0x10), vsubq_f32(v2_2, v6))
                            v3 = vaddq_f32(v4, v3_10)
                            *(x15_8 - 0x10) = arg8
                            *x15_8 = v3
                            x15_8 += 0x20
                        while (i_24 != 8)
                        
                        if (i_82 != x21_1)
                            goto label_fb04fc
                    else
                        i_82 = 0
                    label_fb04fc:
                        int64_t x13_8 = i_82 << 2
                        void* x12_16 = arg1 + x13_8
                        int32_t* x10_29 = x10_28 + x13_8
                        void* x9_30 = x9_26 + x13_8
                        void* x8_36 = x8_32 + x13_8
                        int64_t i_50 = x21_1 - i_82
                        int64_t i_25
                        
                        do
                            arg7.d = *x8_36
                            x8_36 += 4
                            arg8.d = *x9_30
                            x9_30 += 4
                            v3.d = *x10_29
                            x10_29 = &x10_29[1]
                            v4.d = *x12_16
                            i_25 = i_50
                            i_50 -= 1
                            arg8.d = arg8.d f- arg7.d
                            arg8.d = arg6.d f* arg8.d
                            arg7.d = arg7.d f+ arg8.d
                            arg7.d = arg7.d f- v3.d
                            arg7.d = v4.d f+ arg7.d
                            *x12_16 = arg7.d
                            x12_16 += 4
                        while (i_25 != 1)
            else if (x21_1.d s>= 1)
                int64_t i_77
                
                if (x21_1.d u>= 8)
                    uint64_t x11_29 = x21_1 << 2
                    void* x12_22 = arg1 + x11_29
                    i_77 = 0
                    
                    if (((arg1 u< x8_32 + x11_29 ? 1 : 0) & (x8_32 u< x12_22 ? 1 : 0) & 1) != 0
                            || ((arg1 u< x9_26 + x11_29 ? 1 : 0) & (x9_26 u< x12_22 ? 1 : 0) & 1)
                            != 0)
                        goto label_fb03bc
                    
                    i_77 = x21_1 & 0xfffffff8
                    arg7 = vdupq_laneq_s32(arg6, 0)
                    void* x11_33 = x8_32 + 0x10
                    void* x12_24 = x9_26 + 0x10
                    void* x13_16 = arg1 + 0x10
                    int64_t i_61 = i_77
                    int64_t i_26
                    
                    do
                        arg8 = *(x11_33 - 0x10)
                        v4 = *x11_33
                        v3 = *(x12_24 - 0x10)
                        v5 = *x12_24
                        x11_33 += 0x20
                        x12_24 += 0x20
                        i_26 = i_61
                        i_61 -= 8
                        float128 v3_3 = vsubq_f32(v3, arg8)
                        float128 v5_3 = vsubq_f32(v5, v4)
                        float128 v3_4 = vmulq_f32(arg7, v3_3, 0)
                        v5 = vmulq_f32(arg7, v5_3, 0)
                        float128 v2_1 = vaddq_f32(arg8, v3_4)
                        v4 = vaddq_f32(v4, v5)
                        v5 = *x13_16
                        arg8 = vaddq_f32(*(x13_16 - 0x10), v2_1)
                        v3 = vaddq_f32(v5, v4)
                        *(x13_16 - 0x10) = arg8
                        *x13_16 = v3
                        x13_16 += 0x20
                    while (i_26 != 8)
                    
                    if (i_77 != x21_1)
                        goto label_fb03bc
                else
                    i_77 = 0
                label_fb03bc:
                    int64_t x12_13 = i_77 << 2
                    void* x11_16 = arg1 + x12_13
                    void* x9_27 = x9_26 + x12_13
                    int32_t* x8_33 = x8_32 + x12_13
                    int64_t i_44 = x21_1 - i_77
                    int64_t i_27
                    
                    do
                        arg7.d = *x8_33
                        x8_33 = &x8_33[1]
                        arg8.d = *x9_27
                        x9_27 += 4
                        v3.d = *x11_16
                        i_27 = i_44
                        i_44 -= 1
                        arg8.d = arg8.d f- arg7.d
                        arg8.d = arg6.d f* arg8.d
                        arg7.d = arg7.d f+ arg8.d
                        arg7.d = v3.d f+ arg7.d
                        *x11_16 = arg7.d
                        x11_16 += 4
                    while (i_27 != 1)
        else if (x21_1.d s>= 1)
            int64_t i_79
            
            if (x21_1.d u>= 8)
                uint64_t x11_21 = x21_1 << 2
                void* x12_17 = arg1 + x11_21
                i_79 = 0
                
                if (((arg1 u< x8_32 + x11_21 ? 1 : 0) & (x8_32 u< x12_17 ? 1 : 0) & 1) != 0
                        || ((arg1 u< x9_26 + x11_21 ? 1 : 0) & (x9_26 u< x12_17 ? 1 : 0) & 1) != 0)
                    goto label_fb05e4
                
                i_79 = x21_1 & 0xfffffff8
                arg7 = vdupq_laneq_s32(arg6, 0)
                void* x11_25 = x8_32 + 0x10
                void* x12_19 = x9_26 + 0x10
                void* x13_12 = arg1 + 0x10
                int64_t i_60 = i_79
                int64_t i_28
                
                do
                    arg8 = *(x11_25 - 0x10)
                    v3 = *x11_25
                    v4 = *(x12_19 - 0x10)
                    v5 = *x12_19
                    x11_25 += 0x20
                    x12_19 += 0x20
                    i_28 = i_60
                    i_60 -= 8
                    float128 v4_2 = vsubq_f32(v4, arg8)
                    float128 v5_2 = vsubq_f32(v5, v3)
                    v4 = vmulq_f32(arg7, v4_2, 0)
                    v5 = vmulq_f32(arg7, v5_2, 0)
                    arg8 = vaddq_f32(arg8, v4)
                    v3 = vaddq_f32(v3, v5)
                    *(x13_12 - 0x10) = arg8
                    *x13_12 = v3
                    x13_12 += 0x20
                while (i_28 != 8)
                
                if (i_79 != x21_1)
                    goto label_fb05e4
            else
                i_79 = 0
            label_fb05e4:
                int64_t x12_20 = i_79 << 2
                void* x11_26 = arg1 + x12_20
                void* x9_31 = x9_26 + x12_20
                void* x8_37 = x8_32 + x12_20
                int64_t i_47 = x21_1 - i_79
                int64_t i_29
                
                do
                    arg7.d = *x8_37
                    x8_37 += 4
                    arg8.d = *x9_31
                    x9_31 += 4
                    i_29 = i_47
                    i_47 -= 1
                    arg8.d = arg8.d f- arg7.d
                    arg8.d = arg6.d f* arg8.d
                    arg7.d = arg7.d f+ arg8.d
                    *x11_26 = arg7.d
                    x11_26 += 4
                while (i_29 != 1)
else if (x10_1 == 1)
    arg6.d = fconvert.s(1f)
    
    if (v17_1.d f!= arg6.d)
        void* x8_19 = *(x22 + 0x28)
        *(x22 + 0x34) = x21_1.d
        
        if (*(x8_19 + 0x30) == 0)
            if (x21_1.d s>= 1)
                void* x8_27 = *(x8_19 + 0x40)
                uint64_t x9_21
                
                if (x21_1.d u>= 8)
                    x9_21 = x21_1 << 2
                
                int64_t i_74
                
                if (x21_1.d u>= 8 && (arg1 u>= x8_27 + x9_21 || x8_27 u>= arg1 + x9_21))
                    i_74 = x21_1 & 0xfffffff8
                    arg6 = vdupq_laneq_s32(v17_1, 0)
                    void* x10_35 = x8_27 + 0x10
                    void* x11_39 = arg1 + 0x10
                    int64_t i_56 = i_74
                    int64_t i_30
                    
                    do
                        arg7 = *(x10_35 - 0x10)
                        arg8 = *x10_35
                        v3 = *(x11_39 - 0x10)
                        v4 = *x11_39
                        x10_35 += 0x20
                        i_30 = i_56
                        i_56 -= 8
                        float128 v1_6 = vsubq_f32(arg7, v3)
                        float128 v2_7 = vsubq_f32(arg8, v4)
                        float128 v1_7 = vmulq_f32(v1_6, arg6, 0)
                        float128 v2_8 = vmulq_f32(v2_7, arg6, 0)
                        arg7 = vaddq_f32(v3, v1_7)
                        arg8 = vaddq_f32(v4, v2_8)
                        *(x11_39 - 0x10) = arg7
                        *x11_39 = arg8
                        x11_39 += 0x20
                    while (i_30 != 8)
                    
                    if (i_74 != x21_1)
                        goto label_fb00cc
                else
                    i_74 = 0
                label_fb00cc:
                    int64_t x11_6 = i_74 << 2
                    void* x10_13 = arg1 + x11_6
                    int32_t* x8_28 = x8_27 + x11_6
                    int64_t i_40 = x21_1 - i_74
                    int64_t i_31
                    
                    do
                        arg6.d = *x8_28
                        x8_28 = &x8_28[1]
                        arg7.d = *x10_13
                        i_31 = i_40
                        i_40 -= 1
                        arg6.d = arg6.d f- arg7.d
                        arg6.d = arg6.d f* v17_1.d
                        arg6.d = arg7.d f+ arg6.d
                        *x10_13 = arg6.d
                        x10_13 += 4
                    while (i_31 != 1)
        else if (x21_1.d s>= 1)
            arg6.d = fconvert.s(1f)
            arg6.d = arg6.d f- v17_1.d
            int64_t i_70
            
            if (x21_1.d u>= 8)
                i_70 = x21_1 & 0xfffffff8
                arg7 = vdupq_laneq_s32(arg6, 0)
                void* x9_23 = arg1 + 0x10
                int64_t i_43 = i_70
                int64_t i_32
                
                do
                    v3 = *x9_23
                    i_32 = i_43
                    i_43 -= 8
                    arg8 = vmulq_f32(arg7, *(x9_23 - 0x10), 0)
                    v3 = vmulq_f32(arg7, v3, 0)
                    *(x9_23 - 0x10) = arg8
                    *x9_23 = v3
                    x9_23 += 0x20
                while (i_32 != 8)
                
                if (i_70 != x21_1)
                    goto label_fb016c
            else
                i_70 = 0
            label_fb016c:
                void* x9_24 = arg1 + (i_70 << 2)
                int64_t i_38 = x21_1 - i_70
                int64_t i_33
                
                do
                    arg7.d = *x9_24
                    i_33 = i_38
                    i_38 -= 1
                    arg7.d = arg6.d f* arg7.d
                    *x9_24 = arg7.d
                    x9_24 += 4
                while (i_33 != 1)
    else
        *(x22 + 0x34) = 0
else if (x10_1 == 0)
    *(x22 + 0x34) = 0
