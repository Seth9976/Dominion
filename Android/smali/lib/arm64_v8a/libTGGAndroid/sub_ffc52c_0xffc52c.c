// 函数: sub_ffc52c
// 地址: 0xffc52c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x27 = sx.q(*(*arg1 + 8))
char* x26 = arg2
int32_t fp

fp = arg7 == 0x10 ? 2 : 1

if (x27.d != arg4 && x27.d + 1 != arg4)
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 
        0x10f7, 
        "int stbi__create_png_image_raw(stbi__png *, stbi_uc *, stbi__uint32, int, stbi__uint32, "
    "stbi__uint32, int, int)", 
        "out_n == s->img_n || out_n == s->img_n+1")
label_ffe9f4:
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 
        0x110d, 
        "int stbi__create_png_image_raw(stbi__png *, stbi_uc *, stbi__uint32, int, stbi__uint32, "
    "stbi__uint32, int, int)", 
        "img_width_bytes <= x")
label_ffea14:
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 
        0x114b, 
        "int stbi__create_png_image_raw(stbi__png *, stbi_uc *, stbi__uint32, int, stbi__uint32, "
    "stbi__uint32, int, int)", 
        "img_n+1 == out_n")
label_ffea34:
    return sub_ffea38(__assert2(
        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 0x11a4, 
        "int stbi__create_png_image_raw(stbi__png *, stbi_uc *, stbi__uint32, int, stbi__uint32, "
    "stbi__uint32, int, int)", 
        "img_n == 3")) __tailcall

int32_t x8_3
int32_t x21_1

if (((arg6 | arg5) & 0x80000000) == 0 && (arg6 == 0 || 0x7fffffff s/ arg6 s>= arg5))
    x21_1 = fp * arg4
    x8_3 = arg6 * arg5

int64_t result

if (((arg6 | arg5) & 0x80000000) != 0 || (arg6 != 0 && 0x7fffffff s/ arg6 s< arg5)
        || ((x21_1 | x8_3) & 0x80000000) != 0 || (x21_1 != 0 && 0x7fffffff s/ x21_1 s< x8_3))
    arg1[3] = 0
label_ffc5d8:
    result = 0
    data_2423720 = "outofmem"
else
    char* x0_1
    int128_t v0_1
    uint128_t v1_1
    uint128_t v2_1
    uint128_t v3_1
    uint128_t v4_1
    uint128_t v5_1
    uint128_t v6_1
    uint128_t v7_1
    uint128_t v16_1
    uint128_t v17_1
    x0_1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1 = malloc(sx.q(x21_1 * x8_3))
    arg1[3] = x0_1
    
    if (x0_1 == 0)
        goto label_ffc5d8
    
    if (((x27.d | arg5) & 0x80000000) != 0)
    label_ffc678:
        result = 0
        data_2423720 = "too large"
    else
        char* x8_5 = x0_1
        
        if (arg5 != 0 && 0x7fffffff s/ arg5 s< x27.d)
            goto label_ffc678
        
        int32_t x11_1 = x27.d * arg5
        
        if (((x11_1 | arg7) & 0x80000000) != 0 || (arg7 != 0 && 0x7fffffff s/ arg7 s< x11_1))
            goto label_ffc678
        
        int32_t x9_8 = x11_1 * arg7
        
        if (x9_8 s>= 0x7ffffff9)
            goto label_ffc678
        
        uint32_t x13_1 = (x9_8 + 7) u>> 3
        
        if ((x13_1 + 1) * arg6 u<= arg3)
            int32_t x9_12 = arg5 * arg4
            
            if (arg6 == 0)
                result = 1
                
                if (arg7 s>= 8 && arg7 == 0x10)
                label_ffe574:
                    int32_t i_44 = x9_12 * arg6
                    
                    if (i_44 == 0)
                        return 1
                    
                    int16_t* x9_163 = arg1[3]
                    result = 1
                    int32_t i
                    
                    do
                        i = i_44
                        i_44 -= 1
                        *x9_163 = (_byteswap(zx.d(*x9_163)) u>> 0x10).w
                        x9_163 = &x9_163[1]
                    while (i != 1)
            else
                uint32_t x12_1 = zx.d(*x26)
                
                if (x12_1 u<= 4)
                    int64_t x21_2 = sx.q(x21_1)
                    uint64_t x1 = 0
                    int32_t x15_1 = fp * x9_12
                    uint64_t x9_14 = zx.q(x9_12 - x13_1)
                    uint64_t x10_2 = zx.q(arg6)
                    uint64_t x10_3 = zx.q(x15_1)
                    int64_t x9_18 = neg.q(x21_2)
                    int64_t x14_1 = 0
                    uint64_t lr_1 = zx.q(x27.d * fp)
                    uint64_t x11_3 = zx.q(arg5 - 1)
                    uint64_t x25_1 = zx.q(0 - fp * arg4)
                    int64_t x0_2 = neg.q(x10_3)
                    uint32_t var_d0_1 = x13_1
                    uint32_t var_cc_1 = arg5
                    int64_t var_88_1 = x21_2
                    uint64_t var_e0_1 = x25_1
                    int64_t var_a8_1 = x0_2
                    
                    while (true)
                        if (arg7 s<= 7)
                            if (x13_1 u> arg5)
                                goto label_ffe9f4
                            
                            lr_1 = 1
                            var_cc_1 = x13_1
                            x8_5 = &x8_5[x9_14]
                        
                        if (x14_1 == 0)
                            x12_1 = zx.d(*(&data_868754 + zx.q(x12_1.b)))
                        
                        if (lr_1.d s>= 1)
                            int32_t x9_22 = x12_1 & 0xff
                            
                            if (x9_22 == 0)
                                uint64_t x11_5 = zx.q(lr_1.d)
                                int64_t i_86
                                
                                if (lr_1.d u< 8
                                        || (x8_5 u< &x26[1 + x11_5] && &x26[1] u< &x8_5[x11_5]))
                                    i_86 = 0
                                label_ffc81c:
                                    void* x14_3 = &x8_5[i_86]
                                    void* x15_4 = &x26[i_86 + 1]
                                    int64_t i_54 = x11_5 - i_86
                                    int64_t i_1
                                    
                                    do
                                        char x9_30 = *x15_4
                                        x15_4 += 1
                                        i_1 = i_54
                                        i_54 -= 1
                                        *x14_3 = x9_30
                                        x14_3 += 1
                                    while (i_1 != 1)
                                else if (lr_1.d u>= 0x20)
                                    i_86 = x11_5 & 0xffffffe0
                                    void* x14_26 = &x26[0x11]
                                    void* x15_26 = &x8_5[0x10]
                                    int64_t i_70 = i_86
                                    int64_t i_2
                                    
                                    do
                                        v0_1 = *(x14_26 - 0x10)
                                        v1_1 = *x14_26
                                        x14_26 += 0x20
                                        i_2 = i_70
                                        i_70 -= 0x20
                                        *(x15_26 - 0x10) = v0_1
                                        *x15_26 = v1_1
                                        x15_26 += 0x20
                                    while (i_2 != 0x20)
                                    
                                    if (i_86 != x11_5)
                                        if ((x11_5 & 0x18) == 0)
                                            goto label_ffc81c
                                        
                                        goto label_ffd9a8
                                else
                                    i_86 = 0
                                label_ffd9a8:
                                    int64_t i_91 = i_86
                                    i_86 = x11_5 & 0xfffffff8
                                    void* x14_27 = &x8_5[i_91]
                                    void* x15_28 = &x26[i_91 + 1]
                                    int64_t i_71 = i_91 - i_86
                                    int64_t i_3
                                    
                                    do
                                        v0_1.q = *x15_28
                                        x15_28 += 8
                                        i_3 = i_71
                                        i_71 += 8
                                        *x14_27 = v0_1.q
                                        x14_27 += 8
                                    while (i_3 != -8)
                                    
                                    if (i_86 != x11_5)
                                        goto label_ffc81c
                            else if (x9_22 != 1)
                                uint64_t i_55 = zx.q(lr_1.d)
                                void* x13_6 = &x26[1]
                                char* x14_6 = x8_5
                                uint64_t i_4
                                
                                do
                                    uint64_t x9_48 = zx.q((x12_1 & 0xff) - 2)
                                    
                                    if (x9_48.d u<= 4)
                                        char x15_6
                                        
                                        switch (x9_48)
                                            case 0, 2
                                                x15_6 = x14_6[x0_2] + *x13_6
                                            case 1
                                                x15_6 = *x13_6 + (x14_6[x0_2] u>> 1)
                                            case 3, 4
                                                x15_6 = *x13_6
                                        
                                        *x14_6 = x15_6
                                    
                                    x14_6 = &x14_6[1]
                                    i_4 = i_55
                                    i_55 -= 1
                                    x13_6 += 1
                                while (i_4 != 1)
                            else
                                uint64_t x11_4 = zx.q(lr_1.d)
                                int64_t i_85
                                
                                if (lr_1.d u< 8
                                        || (x8_5 u< &x26[1 + x11_4] && &x26[1] u< &x8_5[x11_4]))
                                    i_85 = 0
                                label_ffc7d0:
                                    void* x14_2 = &x8_5[i_85]
                                    void* x15_3 = &x26[i_85 + 1]
                                    int64_t i_53 = x11_4 - i_85
                                    int64_t i_5
                                    
                                    do
                                        char x9_26 = *x15_3
                                        x15_3 += 1
                                        i_5 = i_53
                                        i_53 -= 1
                                        *x14_2 = x9_26
                                        x14_2 += 1
                                    while (i_5 != 1)
                                else if (lr_1.d u>= 0x20)
                                    i_85 = x11_4 & 0xffffffe0
                                    void* x14_24 = &x26[0x11]
                                    void* x15_23 = &x8_5[0x10]
                                    int64_t i_68 = i_85
                                    int64_t i_6
                                    
                                    do
                                        v0_1 = *(x14_24 - 0x10)
                                        v1_1 = *x14_24
                                        x14_24 += 0x20
                                        i_6 = i_68
                                        i_68 -= 0x20
                                        *(x15_23 - 0x10) = v0_1
                                        *x15_23 = v1_1
                                        x15_23 += 0x20
                                    while (i_6 != 0x20)
                                    
                                    if (i_85 != x11_4)
                                        if ((x11_4 & 0x18) == 0)
                                            goto label_ffc7d0
                                        
                                        goto label_ffd93c
                                else
                                    i_85 = 0
                                label_ffd93c:
                                    int64_t i_90 = i_85
                                    i_85 = x11_4 & 0xfffffff8
                                    void* x14_25 = &x8_5[i_90]
                                    void* x15_25 = &x26[i_90 + 1]
                                    int64_t i_69 = i_90 - i_85
                                    int64_t i_7
                                    
                                    do
                                        v0_1.q = *x15_25
                                        x15_25 += 8
                                        i_7 = i_69
                                        i_69 += 8
                                        *x14_25 = v0_1.q
                                        x14_25 += 8
                                    while (i_7 != -8)
                                    
                                    if (i_85 != x11_4)
                                        goto label_ffc7d0
                        
                        void* x3
                        int64_t x10_5
                        
                        if (arg7 == 8)
                            if (x27.d != arg4)
                                x8_5[x27] = 0xff
                            
                            x3 = &x26[1 + x27]
                            x10_5 = sx.q(arg4)
                        else if (arg7 != 0x10)
                            x3 = &x26[2]
                            x10_5 = 1
                        else
                            int64_t x9_31 = sx.q(lr_1.d)
                            
                            if (x27.d != arg4)
                                *(x8_5 + x9_31) = 0xffff
                            
                            x3 = &x26[1 + x9_31]
                            x10_5 = x21_2
                        
                        void* x4 = &x8_5[x0_2 + x10_5]
                        char* x2 = &x8_5[x10_5]
                        uint64_t var_78_1 = lr_1
                        void* var_70_1 = x3
                        int64_t x14_40
                        
                        if (((arg7 s< 8 ? 1 : 0) | (x27.d == arg4 ? 1 : 0)) != 0)
                            int32_t x26_1 = (var_cc_1 - 1) * lr_1.d
                            
                            if ((x12_1 & 0xff) u<= 6)
                                switch (x12_1.b)
                                    case 0, 7
                                        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v16_1, 
                                            v17_1 = memcpy(x2, x3, sx.q(x26_1))
                                        lr_1 = var_78_1
                                        x3 = var_70_1
                                        x0_2 = var_a8_1
                                    case 1
                                        if (x26_1 s>= 1)
                                            uint64_t x11_7 = zx.q(x26_1)
                                            int64_t i_82
                                            int32_t x13_7
                                            
                                            if (x26_1 u>= 8)
                                                int64_t x16_12 = sx.q(lr_1.d)
                                                void* x15_29 = &x2[x11_7]
                                                x13_7 = 0
                                                i_82 = 0
                                                
                                                if (((x2 u< x3 + x11_7 ? 1 : 0)
                                                        & (x3 u< x15_29 ? 1 : 0) & 1) != 0 || ((
                                                        x2 u< &x2[x11_7 - x16_12] ? 1 : 0)
                                                        & (x2 - x16_12 u< x15_29 ? 1 : 0) & 1) != 0)
                                                    goto label_ffe420
                                                
                                                if (x26_1 u>= 0x20)
                                                    i_82 = x11_7 & 0xffffffe0
                                                    void* x13_24 = x3 + 0x10
                                                    void* x14_46 = &x8_5[x10_5 + 0x10]
                                                    int32_t x15_44 = neg.d(lr_1.d)
                                                    int64_t i_72 = i_82
                                                    int64_t i_8
                                                    
                                                    do
                                                        void* x17_16 = &x2[sx.q(x15_44)]
                                                        v0_1 = *(x13_24 - 0x10)
                                                        v1_1 = *x13_24
                                                        x13_24 += 0x20
                                                        i_8 = i_72
                                                        i_72 -= 0x20
                                                        x15_44 += 0x20
                                                        v1_1 += *(x17_16 + 0x10)
                                                        *(x14_46 - 0x10) = *x17_16 + v0_1
                                                        *x14_46 = v1_1
                                                        x14_46 += 0x20
                                                    while (i_8 != 0x20)
                                                    
                                                    if (i_82 != x11_7)
                                                        if ((x11_7 & 0x18) != 0)
                                                            goto label_ffdedc
                                                        
                                                        x13_7 = i_82.d
                                                        goto label_ffe420
                                                else
                                                    i_82 = 0
                                                label_ffdedc:
                                                    uint64_t x9_153 = zx.q(lr_1.d * (var_cc_1 - 1))
                                                    int64_t i_93 = i_82
                                                    void* x13_25 = x3 + i_82
                                                    int64_t x14_47 = x10_5 + i_82
                                                    i_82 = x9_153 & 0xfffffff8
                                                    void* x14_48 = &x8_5[x14_47]
                                                    int32_t x15_45 = i_93.d - lr_1.d
                                                    int64_t i_73 = i_93 - i_82
                                                    int64_t i_9
                                                    
                                                    do
                                                        v0_1.q = *x13_25
                                                        x13_25 += 8
                                                        v1_1.q = *(x2 + sx.q(x15_45))
                                                        i_9 = i_73
                                                        i_73 += 8
                                                        x15_45 += 8
                                                        *x14_48 = (v1_1 + v0_1).q
                                                        x14_48 += 8
                                                    while (i_9 != -8)
                                                    x13_7 = i_82.d
                                                    
                                                    if (i_82 != x9_153)
                                                        goto label_ffe420
                                            else
                                                i_82 = 0
                                                x13_7 = 0
                                            label_ffe420:
                                                void* x9_158 = x3 + i_82
                                                int64_t i_56 = x11_7 - i_82
                                                void* x10_16 = &x8_5[i_82 + x10_5]
                                                void* x8_63 =
                                                    &x8_5[x10_5 + sx.q(x13_7) - sx.q(lr_1.d)]
                                                int64_t i_10
                                                
                                                do
                                                    char x12_21 = *x9_158
                                                    x9_158 += 1
                                                    char x13_31 = *x8_63
                                                    x8_63 += 1
                                                    i_10 = i_56
                                                    i_56 -= 1
                                                    *x10_16 = x13_31 + x12_21
                                                    x10_16 += 1
                                                while (i_10 != 1)
                                    case 2
                                        if (x26_1 s>= 1)
                                            uint64_t x12_5 = zx.q(x26_1)
                                            int64_t i_87 = 0
                                            
                                            if (x26_1 u< 8)
                                            label_ffde5c:
                                                void* x9_152 = x3 + i_87
                                                void* x8_61 = &x8_5[i_87 + x10_5]
                                                int64_t i_52 = x12_5 - i_87
                                                int64_t i_11
                                                
                                                do
                                                    char x11_37 = *x9_152
                                                    x9_152 += 1
                                                    i_11 = i_52
                                                    i_52 -= 1
                                                    *x8_61 = *(x8_61 + x0_2) + x11_37
                                                    x8_61 += 1
                                                while (i_11 != 1)
                                            else
                                                void* x15_10 = &x2[x12_5]
                                                
                                                if (((x2 u< x3 + x12_5 ? 1 : 0)
                                                        & (x3 u< x15_10 ? 1 : 0) & 1) != 0 || ((
                                                        x2 u< x4 + x12_5 ? 1 : 0) & (x4 u< x15_10 ? 1 : 0)
                                                        & 1) != 0)
                                                    goto label_ffde5c
                                                
                                                if (x26_1 u>= 0x20)
                                                    i_87 = x12_5 & 0xffffffe0
                                                    void* x11_35 = x3 + 0x10
                                                    void* x14_42 = &x8_5[x10_5 + 0x10]
                                                    int64_t i_60 = i_87
                                                    int64_t i_12
                                                    
                                                    do
                                                        void* x16_31 = x14_42 + x0_2
                                                        v0_1 = *(x11_35 - 0x10)
                                                        v1_1 = *x11_35
                                                        i_12 = i_60
                                                        i_60 -= 0x20
                                                        x11_35 += 0x20
                                                        v1_1 += *x16_31
                                                        *(x14_42 - 0x10) = *(x16_31 - 0x10) + v0_1
                                                        *x14_42 = v1_1
                                                        x14_42 += 0x20
                                                    while (i_12 != 0x20)
                                                    
                                                    if (i_87 != x12_5)
                                                        if ((x12_5 & 0x18) == 0)
                                                            goto label_ffde5c
                                                        
                                                        goto label_ffde1c
                                                else
                                                    i_87 = 0
                                                label_ffde1c:
                                                    uint64_t x9_151 = zx.q(lr_1.d * (var_cc_1 - 1))
                                                    int64_t i_92 = i_87
                                                    void* x11_36 = x3 + i_87
                                                    int64_t x14_43 = x10_5 + i_87
                                                    i_87 = x9_151 & 0xfffffff8
                                                    void* x14_44 = &x8_5[x14_43]
                                                    int64_t i_61 = i_92 - i_87
                                                    int64_t i_13
                                                    
                                                    do
                                                        v0_1.q = *x11_36
                                                        x11_36 += 8
                                                        v1_1.q = *(x14_44 + x0_2)
                                                        i_13 = i_61
                                                        i_61 += 8
                                                        *x14_44 = (v1_1 + v0_1).q
                                                        x14_44 += 8
                                                    while (i_13 != -8)
                                                    
                                                    if (i_87 != x9_151)
                                                        goto label_ffde5c
                                    case 3
                                        if (x26_1 s>= 1)
                                            uint64_t x12_6 = zx.q(x26_1)
                                            int64_t i_88
                                            int32_t x14_10
                                            
                                            if (x26_1 u>= 8)
                                                void* x17_10 = &x2[x12_6]
                                                int64_t x1_14 = sx.q(lr_1.d)
                                                x14_10 = 0
                                                i_88 = 0
                                                
                                                if (((x2 u< x3 + x12_6 ? 1 : 0)
                                                        & (x3 u< x17_10 ? 1 : 0) & 1) != 0 || ((
                                                        x2 u< x4 + x12_6 ? 1 : 0) & (x4 u< x17_10 ? 1 : 0)
                                                        & 1) != 0)
                                                    x3 = var_70_1
                                                    goto label_ffe458
                                                
                                                x3 = var_70_1
                                                char* x1_18 = x2
                                                
                                                if (((x2 u< &x2[x12_6 - x1_14] ? 1 : 0)
                                                        & (x2 - x1_14 u< x17_10 ? 1 : 0) & 1) != 0)
                                                    goto label_ffe458
                                                
                                                if (x26_1 u>= 0x20)
                                                    i_88 = x12_6 & 0xffffffe0
                                                    void* x11_39 = x3 + 0x10
                                                    int32_t x14_49 = neg.d(lr_1.d)
                                                    void* x15_47 = &x8_5[x10_5 + 0x10]
                                                    int64_t i_74 = i_88
                                                    int64_t i_14
                                                    
                                                    do
                                                        void* x17_17 = x15_47 + x0_2
                                                        v3_1 = *x17_17
                                                        void* x17_18 = &x1_18[sx.q(x14_49)]
                                                        v5_1 = *(x17_18 + 0x10)
                                                        v0_1 = *(x11_39 - 0x10)
                                                        v1_1 = *x11_39
                                                        i_14 = i_74
                                                        i_74 -= 0x20
                                                        x11_39 += 0x20
                                                        v2_1 = vhaddq_u8(*x17_18, *(x17_17 - 0x10))
                                                        v1_1 += vhaddq_u8(v5_1, v3_1)
                                                        x14_49 += 0x20
                                                        *(x15_47 - 0x10) = v0_1 + v2_1
                                                        *x15_47 = v1_1
                                                        x15_47 += 0x20
                                                    while (i_14 != 0x20)
                                                    
                                                    if (i_88 != x12_6)
                                                        if ((x12_6 & 0x18) == 0)
                                                            x14_10 = i_88.d
                                                            goto label_ffe458
                                                        
                                                        x1_18 = x2
                                                        goto label_ffdf98
                                                else
                                                    i_88 = 0
                                                label_ffdf98:
                                                    uint64_t x9_154 = zx.q(lr_1.d * (var_cc_1 - 1))
                                                    int64_t i_94 = i_88
                                                    void* x11_40 = x3 + i_88
                                                    int64_t x14_50 = x10_5 + i_88
                                                    i_88 = x9_154 & 0xfffffff8
                                                    void* x14_51 = &x8_5[x14_50]
                                                    int32_t x15_48 = i_94.d - lr_1.d
                                                    int64_t i_75 = i_94 - i_88
                                                    int64_t i_15
                                                    
                                                    do
                                                        v0_1.q = *x11_40
                                                        x11_40 += 8
                                                        v1_1.q = *(x14_51 + x0_2)
                                                        v2_1.q = *(x1_18 + sx.q(x15_48))
                                                        i_15 = i_75
                                                        i_75 += 8
                                                        x15_48 += 8
                                                        *x14_51 = (v0_1 + vhadd_u8(v2_1, v1_1)).q
                                                        x14_51 += 8
                                                    while (i_15 != -8)
                                                    x14_10 = i_88.d
                                                    
                                                    if (i_88 != x9_154)
                                                        goto label_ffe458
                                            else
                                                i_88 = 0
                                                x14_10 = 0
                                            label_ffe458:
                                                int64_t i_57 = x12_6 - i_88
                                                void* x9_159 = x3 + i_88
                                                void* x10_17 = &x8_5[i_88 + x10_5]
                                                void* x8_64 =
                                                    &x8_5[x10_5 + sx.q(x14_10) - sx.q(lr_1.d)]
                                                int64_t i_16
                                                
                                                do
                                                    char x12_25 = *x9_159
                                                    x9_159 += 1
                                                    uint32_t x14_65 = zx.d(*x8_64)
                                                    x8_64 += 1
                                                    i_16 = i_57
                                                    i_57 -= 1
                                                    *x10_17 = x12_25 +
                                                        ((x14_65 + zx.d(*(x10_17 + x0_2))) u>> 1).b
                                                    x10_17 += 1
                                                while (i_16 != 1)
                                    case 4
                                        if (x26_1 s>= 1)
                                            uint64_t x12_7 = zx.q(x26_1)
                                            int64_t i_89
                                            int32_t x14_11
                                            
                                            if (x26_1 u>= 8)
                                                int64_t x16_19 = sx.q(lr_1.d)
                                                void* x3_28 = &x2[x12_7]
                                                int64_t x5_13 = x12_7 - x16_19
                                                x14_11 = 0
                                                
                                                if (((x2 u< x3 + x12_7 ? 1 : 0)
                                                        & (x3 u< x3_28 ? 1 : 0) & 1) != 0 || ((
                                                        x2 u< &x2[x5_13] ? 1 : 0)
                                                        & (x2 - x16_19 u< x3_28 ? 1 : 0) & 1) != 0)
                                                    i_89 = 0
                                                    x3 = var_70_1
                                                    goto label_ffe388
                                                
                                                if (((x2 u< x4 + x12_7 ? 1 : 0)
                                                        & (x4 u< x3_28 ? 1 : 0) & 1) != 0)
                                                    i_89 = 0
                                                    x3 = var_70_1
                                                    goto label_ffe388
                                                
                                                i_89 = 0
                                                x3 = var_70_1
                                                
                                                if (((x2 u< x4 + x5_13 ? 1 : 0)
                                                        & (x4 - x16_19 u< x3_28 ? 1 : 0) & 1) != 0)
                                                    goto label_ffe388
                                                
                                                if (x26_1 u>= 0x10)
                                                    i_89 = x12_7 & 0xfffffff0
                                                    int32_t x14_52 = neg.d(lr_1.d)
                                                    int64_t i_62 = i_89
                                                    char* x16_32 = x2
                                                    void* x17_19 = x3
                                                    int64_t i_17
                                                    
                                                    do
                                                        int64_t x1_23 = sx.q(x14_52)
                                                        v0_1 = *x17_19
                                                        x17_19 += 0x10
                                                        v1_1 = *(x16_32 + x0_2)
                                                        v2_1 = *(x2 + x1_23)
                                                        v3_1 = *(x4 + x1_23)
                                                        i_17 = i_62
                                                        i_62 -= 0x10
                                                        v4_1.w = zx.w(v1_1:8.b)
                                                        v4_1:2.w = zx.w(v1_1:9.b)
                                                        v4_1:4.w = zx.w(v1_1:0xa.b)
                                                        v4_1:6.w = zx.w(v1_1:0xb.b)
                                                        v4_1:8.w = zx.w(v1_1:0xc.b)
                                                        v4_1:0xa.w = zx.w(v1_1:0xd.b)
                                                        v4_1:0xc.w = zx.w(v1_1:0xe.b)
                                                        v4_1:0xe.w = zx.w(v1_1:0xf.b)
                                                        v5_1.w = zx.w(v1_1.b)
                                                        v5_1:2.w = zx.w(v1_1:1.b)
                                                        v5_1:4.w = zx.w(v1_1:2.b)
                                                        v5_1:6.w = zx.w(v1_1:3.b)
                                                        v5_1:8.w = zx.w(v1_1:4.b)
                                                        v5_1:0xa.w = zx.w(v1_1:5.b)
                                                        v5_1:0xc.w = zx.w(v1_1:6.b)
                                                        v5_1:0xe.w = zx.w(v1_1:7.b)
                                                        v6_1.w = zx.w(v2_1:8.b)
                                                        v6_1:2.w = zx.w(v2_1:9.b)
                                                        v6_1:4.w = zx.w(v2_1:0xa.b)
                                                        v6_1:6.w = zx.w(v2_1:0xb.b)
                                                        v6_1:8.w = zx.w(v2_1:0xc.b)
                                                        v6_1:0xa.w = zx.w(v2_1:0xd.b)
                                                        v6_1:0xc.w = zx.w(v2_1:0xe.b)
                                                        v6_1:0xe.w = zx.w(v2_1:0xf.b)
                                                        v7_1.w = zx.w(v2_1.b)
                                                        v7_1:2.w = zx.w(v2_1:1.b)
                                                        v7_1:4.w = zx.w(v2_1:2.b)
                                                        v7_1:6.w = zx.w(v2_1:3.b)
                                                        v7_1:8.w = zx.w(v2_1:4.b)
                                                        v7_1:0xa.w = zx.w(v2_1:5.b)
                                                        v7_1:0xc.w = zx.w(v2_1:6.b)
                                                        v7_1:0xe.w = zx.w(v2_1:7.b)
                                                        v16_1.w = zx.w(v3_1.b)
                                                        v16_1:2.w = zx.w(v3_1:1.b)
                                                        v16_1:4.w = zx.w(v3_1:2.b)
                                                        v16_1:6.w = zx.w(v3_1:3.b)
                                                        v16_1:8.w = zx.w(v3_1:4.b)
                                                        v16_1:0xa.w = zx.w(v3_1:5.b)
                                                        v16_1:0xc.w = zx.w(v3_1:6.b)
                                                        v16_1:0xe.w = zx.w(v3_1:7.b)
                                                        v17_1.w = zx.w(v3_1:8.b)
                                                        v17_1:2.w = zx.w(v3_1:9.b)
                                                        v17_1:4.w = zx.w(v3_1:0xa.b)
                                                        v17_1:6.w = zx.w(v3_1:0xb.b)
                                                        v17_1:8.w = zx.w(v3_1:0xc.b)
                                                        v17_1:0xa.w = zx.w(v3_1:0xd.b)
                                                        v17_1:0xc.w = zx.w(v3_1:0xe.b)
                                                        v17_1:0xe.w = zx.w(v3_1:0xf.b)
                                                        uint128_t v18_10 = vaddl_u16(v5_1, v7_1)
                                                        uint128_t v19_9 = vaddl_high_u16(v5_1, v7_1)
                                                        uint128_t v20_5 = vaddl_u16(v4_1, v6_1)
                                                        uint128_t v21_5 = vaddl_high_u16(v4_1, v6_1)
                                                        uint128_t v20_6 = vsubw_u16(v20_5, v17_1)
                                                        uint128_t v19_10 = vsubw_u16(v19_9, v16_1)
                                                        uint128_t v18_11 = vsubw_u16(v18_10, v16_1)
                                                        uint128_t v21_6 = vsubw_u16(v21_5, v17_1)
                                                        uint128_t v22_3 = vsubw_u16(v18_11, v7_1)
                                                        uint128_t v7_11 = vsubw_u16(v19_10, v7_1)
                                                        uint128_t v23_3 = vsubw_u16(v20_6, v6_1)
                                                        uint128_t v24_3 = vsubw_u16(v18_11, v5_1)
                                                        uint128_t v5_8 = vsubw_u16(v19_10, v5_1)
                                                        uint128_t v25_3 = vsubw_u16(v20_6, v4_1)
                                                        uint128_t v18_12 = vsubw_u16(v18_11, v16_1)
                                                        uint128_t v16_9 = vsubw_u16(v19_10, v16_1)
                                                        uint128_t v19_11 = vsubw_u16(v20_6, v17_1)
                                                        uint128_t v6_11 = vsubw_u16(v21_6, v6_1)
                                                        uint128_t v4_9 = vsubw_u16(v21_6, v4_1)
                                                        uint128_t v17_7 = vsubw_u16(v21_6, v17_1)
                                                        uint128_t v20_7 = vabsq_s32(v23_3)
                                                        uint128_t v21_7 = vabsq_s32(v22_3)
                                                        uint128_t v22_4 = vabsq_s32(v25_3)
                                                        uint128_t v23_4 = vabsq_s32(v24_3)
                                                        uint128_t v19_12 = vabsq_s32(v19_11)
                                                        uint128_t v18_13 = vabsq_s32(v18_12)
                                                        uint128_t v6_12 = vabsq_s32(v6_11)
                                                        uint128_t v7_12 = vabsq_s32(v7_11)
                                                        uint128_t v4_10 = vabsq_s32(v4_9)
                                                        uint128_t v5_9 = vabsq_s32(v5_8)
                                                        uint128_t v17_8 = vabsq_s32(v17_7)
                                                        uint128_t v16_10 = vabsq_s32(v16_9)
                                                        uint128_t v24_4 = vcgtq_u32(v21_7, v23_4)
                                                        uint128_t v26_2 = vcgtq_u32(v20_7, v22_4)
                                                        uint128_t v21_8 = vcgtq_u32(v21_7, v18_13)
                                                        uint128_t v20_8 = vcgtq_u32(v20_7, v19_12)
                                                        uint128_t v25_4 = vcgtq_u32(v7_12, v5_9)
                                                        uint128_t v27_2 = vcgtq_u32(v6_12, v4_10)
                                                        uint128_t v7_13 = vcgtq_u32(v7_12, v16_10)
                                                        uint128_t v6_13 = vcgtq_u32(v6_12, v17_8)
                                                        uint128_t v4_11 = vcgtq_u32(v4_10, v17_8)
                                                        uint128_t v17_9 = vcgtq_u32(v22_4, v19_12)
                                                        v5_1 = vcgtq_u32(v5_9, v16_10)
                                                        uint128_t v16_11 = vcgtq_u32(v23_4, v18_13)
                                                        uint128_t v18_14 = vorrq_s8(v26_2, v20_8)
                                                        uint128_t v19_13 = vorrq_s8(v24_4, v21_8)
                                                        uint128_t v6_14 = vorrq_s8(v27_2, v6_13)
                                                        v7_1 = vorrq_s8(v25_4, v7_13)
                                                        vmovn_s32(v18_14)
                                                        vmovn_s32(v19_13)
                                                        uint128_t v18_16 = vmovn_high_s32(v6_14)
                                                        uint128_t v19_15 = vmovn_high_s32(v7_1)
                                                        vmovn_s32(v17_9)
                                                        vmovn_s32(v16_11)
                                                        vmovn_s16(v19_15)
                                                        v6_1 = vmovn_high_s16(v18_16)
                                                        v17_1 = vmovn_high_s32(v4_11)
                                                        vmovn_s16(vmovn_high_s32(v5_1))
                                                        *x16_32 = vbslq_s8(v6_1, 
                                                            vbslq_s8(vmovn_high_s16(v17_1), v3_1, 
                                                                v1_1), 
                                                            v2_1) + v0_1
                                                        x16_32 = &x16_32[0x10]
                                                        x14_52 += 0x10
                                                    while (i_17 != 0x10)
                                                    
                                                    if (i_89 != x12_7)
                                                        x14_11 = i_89.d
                                                        
                                                        if ((x12_7.d & 8) == 0)
                                                            goto label_ffe388
                                                        
                                                        goto label_ffe148
                                                else
                                                    i_89 = 0
                                                label_ffe148:
                                                    uint64_t x9_155 = zx.q(lr_1.d * (var_cc_1 - 1))
                                                    int64_t i_97 = i_89
                                                    void* x14_53 = x3 + i_89
                                                    int64_t x15_49 = x10_5 + i_89
                                                    i_89 = x9_155 & 0xfffffff8
                                                    void* x15_50 = &x8_5[x15_49]
                                                    int32_t x16_33 = i_97.d - lr_1.d
                                                    int64_t i_80 = i_97 - i_89
                                                    int64_t i_18
                                                    
                                                    do
                                                        int64_t x1_24 = sx.q(x16_33)
                                                        v0_1.q = *x14_53
                                                        x14_53 += 8
                                                        v1_1.q = *(x15_50 + x0_2)
                                                        v2_1.q = *(x2 + x1_24)
                                                        v3_1.q = *(x4 + x1_24)
                                                        i_18 = i_80
                                                        i_80 += 8
                                                        v4_1.w = zx.w(v1_1.b)
                                                        v4_1:2.w = zx.w(v1_1:1.b)
                                                        v4_1:4.w = zx.w(v1_1:2.b)
                                                        v4_1:6.w = zx.w(v1_1:3.b)
                                                        v4_1:8.w = zx.w(v1_1:4.b)
                                                        v4_1:0xa.w = zx.w(v1_1:5.b)
                                                        v4_1:0xc.w = zx.w(v1_1:6.b)
                                                        v4_1:0xe.w = zx.w(v1_1:7.b)
                                                        v5_1.w = zx.w(v2_1.b)
                                                        v5_1:2.w = zx.w(v2_1:1.b)
                                                        v5_1:4.w = zx.w(v2_1:2.b)
                                                        v5_1:6.w = zx.w(v2_1:3.b)
                                                        v5_1:8.w = zx.w(v2_1:4.b)
                                                        v5_1:0xa.w = zx.w(v2_1:5.b)
                                                        v5_1:0xc.w = zx.w(v2_1:6.b)
                                                        v5_1:0xe.w = zx.w(v2_1:7.b)
                                                        v6_1.w = zx.w(v3_1.b)
                                                        v6_1:2.w = zx.w(v3_1:1.b)
                                                        v6_1:4.w = zx.w(v3_1:2.b)
                                                        v6_1:6.w = zx.w(v3_1:3.b)
                                                        v6_1:8.w = zx.w(v3_1:4.b)
                                                        v6_1:0xa.w = zx.w(v3_1:5.b)
                                                        v6_1:0xc.w = zx.w(v3_1:6.b)
                                                        v6_1:0xe.w = zx.w(v3_1:7.b)
                                                        uint128_t v7_14 = vaddl_u16(v4_1, v5_1)
                                                        uint128_t v16_13 =
                                                            vaddl_high_u16(v4_1, v5_1)
                                                        uint128_t v7_15 = vsubw_u16(v7_14, v6_1)
                                                        uint128_t v16_14 = vsubw_u16(v16_13, v6_1)
                                                        uint128_t v17_11 = vsubw_u16(v7_15, v5_1)
                                                        uint128_t v18_17 = vsubw_u16(v7_15, v4_1)
                                                        uint128_t v7_16 = vsubw_u16(v7_15, v6_1)
                                                        uint128_t v5_10 = vsubw_u16(v16_14, v5_1)
                                                        uint128_t v4_13 = vsubw_u16(v16_14, v4_1)
                                                        uint128_t v6_16 = vsubw_u16(v16_14, v6_1)
                                                        uint128_t v16_15 = vabsq_s32(v17_11)
                                                        v17_1 = vabsq_s32(v18_17)
                                                        uint128_t v7_17 = vabsq_s32(v7_16)
                                                        uint128_t v5_11 = vabsq_s32(v5_10)
                                                        uint128_t v4_14 = vabsq_s32(v4_13)
                                                        uint128_t v6_17 = vabsq_s32(v6_16)
                                                        uint128_t v18_18 = vcgtq_u32(v16_15, v17_1)
                                                        v16_1 = vcgtq_u32(v16_15, v7_17)
                                                        uint128_t v19_16 = vcgtq_u32(v5_11, v4_14)
                                                        uint128_t v5_12 = vcgtq_u32(v5_11, v6_17)
                                                        uint128_t v4_15 = vcgtq_u32(v4_14, v6_17)
                                                        uint128_t v6_18 = vcgtq_u32(v17_1, v7_17)
                                                        uint128_t v7_18 = vorrq_s8(v18_18, v16_1)
                                                        uint128_t v5_13 = vorrq_s8(v19_16, v5_12)
                                                        vmovn_s32(v6_18)
                                                        vmovn_s32(v7_18)
                                                        v7_1 = vmovn_high_s32(v5_13)
                                                        v5_1 = vmovn_s16(vmovn_high_s32(v4_15))
                                                        *x15_50 = (vbsl_s8(vmovn_s16(v7_1), 
                                                            vbsl_s8(v5_1, v3_1, v1_1), v2_1) + v0_1).q
                                                        x15_50 += 8
                                                        x16_33 += 8
                                                    while (i_18 != -8)
                                                    x14_11 = i_89.d
                                                    
                                                    if (i_89 != x9_155)
                                                        goto label_ffe388
                                            else
                                                i_89 = 0
                                                x14_11 = 0
                                            label_ffe388:
                                                int64_t x15_55 = i_89 + x10_5
                                                void* x16_34 = &x8_5[x0_2]
                                                void* x11_41 = x3 + i_89
                                                int64_t x15_56 = x10_5 + sx.q(x14_11) - sx.q(lr_1.d)
                                                int64_t i_19 = 0
                                                
                                                do
                                                    uint32_t x15_57 = zx.d(x8_5[x15_56 + i_19])
                                                    uint32_t x16_35 =
                                                        zx.d(*(x16_34 + x15_55 + i_19))
                                                    uint32_t x17_22 =
                                                        zx.d(*(x16_34 + x15_56 + i_19))
                                                    uint32_t x1_26 = x16_35 + x15_57 - x17_22
                                                    uint32_t x2_20 = x1_26 - x15_57
                                                    uint32_t x2_21
                                                    
                                                    if (x1_26 - x15_57 s< 0)
                                                        x2_21 = neg.d(x2_20)
                                                    else
                                                        x2_21 = x2_20
                                                    
                                                    uint32_t x3_30 = x1_26 - x16_35
                                                    uint32_t x3_31
                                                    
                                                    if (x1_26 - x16_35 s< 0)
                                                        x3_31 = neg.d(x3_30)
                                                    else
                                                        x3_31 = x3_30
                                                    
                                                    uint32_t x1_27 = x1_26 - x17_22
                                                    uint32_t x1_28
                                                    
                                                    if (x1_26 - x17_22 s< 0)
                                                        x1_28 = neg.d(x1_27)
                                                    else
                                                        x1_28 = x1_27
                                                    
                                                    char x16_36
                                                    
                                                    if (x3_31 u> x1_28)
                                                        x16_36 = x17_22.b
                                                    else
                                                        x16_36 = x16_35.b
                                                    
                                                    bool c_2
                                                    bool z_2
                                                    
                                                    if (x2_21 u<= x1_28)
                                                        c_2 = x2_21 u>= x3_31
                                                        z_2 = x2_21 == x3_31
                                                    else
                                                        z_2 = false
                                                        c_2 = true
                                                    
                                                    char x15_58
                                                    
                                                    if (not(z_2) && c_2)
                                                        x15_58 = x16_36
                                                    else
                                                        x15_58 = x15_57.b
                                                    
                                                    x3 = var_70_1
                                                    x0_2 = var_a8_1
                                                    x8_5[x15_55 + i_19] = x15_58 + *(x11_41 + i_19)
                                                    i_19 += 1
                                                while (x12_7 - i_89 != i_19)
                                    case 5
                                        if (x26_1 s>= 1)
                                            uint64_t x11_10 = zx.q(x26_1)
                                            int64_t i_83
                                            int32_t x13_8
                                            
                                            if (x26_1 u>= 8)
                                                int64_t x16_22 = sx.q(lr_1.d)
                                                void* x15_40 = &x2[x11_10]
                                                x13_8 = 0
                                                i_83 = 0
                                                
                                                if (((x2 u< x3 + x11_10 ? 1 : 0)
                                                        & (x3 u< x15_40 ? 1 : 0) & 1) != 0 || ((
                                                        x2 u< &x2[x11_10 - x16_22] ? 1 : 0)
                                                        & (x2 - x16_22 u< x15_40 ? 1 : 0) & 1) != 0)
                                                    goto label_ffe4a0
                                                
                                                if (x26_1 u>= 0x20)
                                                    i_83 = x11_10 & 0xffffffe0
                                                    void* x13_26 = x3 + 0x10
                                                    void* x14_55 = &x8_5[x10_5 + 0x10]
                                                    int32_t x15_51 = neg.d(lr_1.d)
                                                    int64_t i_76 = i_83
                                                    int64_t i_20
                                                    
                                                    do
                                                        void* x17_20 = &x2[sx.q(x15_51)]
                                                        v0_1 = *(x13_26 - 0x10)
                                                        v1_1 = *x13_26
                                                        *x17_20
                                                        *(x17_20 + 0x10)
                                                        x13_26 += 0x20
                                                        i_20 = i_76
                                                        i_76 -= 0x20
                                                        x15_51 += 0x20
                                                        unimplemented  {usra v0.16b, v2.16b, #0x1}
                                                        unimplemented  {usra v1.16b, v3.16b, #0x1}
                                                        *(x14_55 - 0x10) = v0_1
                                                        *x14_55 = v1_1
                                                        x14_55 += 0x20
                                                    while (i_20 != 0x20)
                                                    
                                                    if (i_83 != x11_10)
                                                        if ((x11_10 & 0x18) != 0)
                                                            goto label_ffe284
                                                        
                                                        x13_8 = i_83.d
                                                        goto label_ffe4a0
                                                else
                                                    i_83 = 0
                                                label_ffe284:
                                                    uint64_t x9_156 = zx.q(lr_1.d * (var_cc_1 - 1))
                                                    int64_t i_95 = i_83
                                                    void* x13_27 = x3 + i_83
                                                    int64_t x14_56 = x10_5 + i_83
                                                    i_83 = x9_156 & 0xfffffff8
                                                    void* x14_57 = &x8_5[x14_56]
                                                    int32_t x15_52 = i_95.d - lr_1.d
                                                    int64_t i_77 = i_95 - i_83
                                                    int64_t i_21
                                                    
                                                    do
                                                        v0_1.q = *x13_27
                                                        x13_27 += 8
                                                        v1_1.q = *(x2 + sx.q(x15_52))
                                                        i_21 = i_77
                                                        i_77 += 8
                                                        x15_52 += 8
                                                        *x14_57 = vsra_n_u8(v0_1, v1_1, 1).q
                                                        x14_57 += 8
                                                    while (i_21 != -8)
                                                    x13_8 = i_83.d
                                                    
                                                    if (i_83 != x9_156)
                                                        goto label_ffe4a0
                                            else
                                                i_83 = 0
                                                x13_8 = 0
                                            label_ffe4a0:
                                                void* x9_160 = x3 + i_83
                                                int64_t i_58 = x11_10 - i_83
                                                void* x10_18 = &x8_5[i_83 + x10_5]
                                                void* x8_65 =
                                                    &x8_5[x10_5 + sx.q(x13_8) - sx.q(lr_1.d)]
                                                int64_t i_22
                                                
                                                do
                                                    char x12_29 = *x9_160
                                                    x9_160 += 1
                                                    uint32_t x13_34 = zx.d(*x8_65)
                                                    x8_65 += 1
                                                    i_22 = i_58
                                                    i_58 -= 1
                                                    *x10_18 = x12_29 + (x13_34 u>> 1).b
                                                    x10_18 += 1
                                                while (i_22 != 1)
                                    case 6
                                        if (x26_1 s>= 1)
                                            uint64_t x11_11 = zx.q(x26_1)
                                            int64_t i_84
                                            int32_t x13_9
                                            
                                            if (x26_1 u>= 8)
                                                int64_t x16_27 = sx.q(lr_1.d)
                                                void* x15_42 = &x2[x11_11]
                                                x13_9 = 0
                                                i_84 = 0
                                                
                                                if (((x2 u< x3 + x11_11 ? 1 : 0)
                                                        & (x3 u< x15_42 ? 1 : 0) & 1) != 0 || ((
                                                        x2 u< &x2[x11_11 - x16_27] ? 1 : 0)
                                                        & (x2 - x16_27 u< x15_42 ? 1 : 0) & 1) != 0)
                                                    goto label_ffe4dc
                                                
                                                if (x26_1 u>= 0x20)
                                                    i_84 = x11_11 & 0xffffffe0
                                                    void* x13_28 = x3 + 0x10
                                                    void* x14_59 = &x8_5[x10_5 + 0x10]
                                                    int32_t x15_53 = neg.d(lr_1.d)
                                                    int64_t i_78 = i_84
                                                    int64_t i_23
                                                    
                                                    do
                                                        void* x17_21 = &x2[sx.q(x15_53)]
                                                        v0_1 = *(x13_28 - 0x10)
                                                        v1_1 = *x13_28
                                                        x13_28 += 0x20
                                                        i_23 = i_78
                                                        i_78 -= 0x20
                                                        x15_53 += 0x20
                                                        v1_1 += *(x17_21 + 0x10)
                                                        *(x14_59 - 0x10) = *x17_21 + v0_1
                                                        *x14_59 = v1_1
                                                        x14_59 += 0x20
                                                    while (i_23 != 0x20)
                                                    
                                                    if (i_84 != x11_11)
                                                        if ((x11_11 & 0x18) != 0)
                                                            goto label_ffe328
                                                        
                                                        x13_9 = i_84.d
                                                        goto label_ffe4dc
                                                else
                                                    i_84 = 0
                                                label_ffe328:
                                                    uint64_t x9_157 = zx.q(lr_1.d * (var_cc_1 - 1))
                                                    int64_t i_96 = i_84
                                                    void* x13_29 = x3 + i_84
                                                    int64_t x14_60 = x10_5 + i_84
                                                    i_84 = x9_157 & 0xfffffff8
                                                    void* x14_61 = &x8_5[x14_60]
                                                    int32_t x15_54 = i_96.d - lr_1.d
                                                    int64_t i_79 = i_96 - i_84
                                                    int64_t i_24
                                                    
                                                    do
                                                        v0_1.q = *x13_29
                                                        x13_29 += 8
                                                        v1_1.q = *(x2 + sx.q(x15_54))
                                                        i_24 = i_79
                                                        i_79 += 8
                                                        x15_54 += 8
                                                        *x14_61 = (v1_1 + v0_1).q
                                                        x14_61 += 8
                                                    while (i_24 != -8)
                                                    x13_9 = i_84.d
                                                    
                                                    if (i_84 != x9_157)
                                                        goto label_ffe4dc
                                            else
                                                i_84 = 0
                                                x13_9 = 0
                                            label_ffe4dc:
                                                void* x9_161 = x3 + i_84
                                                int64_t i_59 = x11_11 - i_84
                                                void* x10_19 = &x8_5[i_84 + x10_5]
                                                void* x8_66 =
                                                    &x8_5[x10_5 + sx.q(x13_9) - sx.q(lr_1.d)]
                                                int64_t i_25
                                                
                                                do
                                                    char x12_33 = *x9_161
                                                    x9_161 += 1
                                                    char x13_35 = *x8_66
                                                    x8_66 += 1
                                                    i_25 = i_59
                                                    i_59 -= 1
                                                    *x10_19 = x13_35 + x12_33
                                                    x10_19 += 1
                                                while (i_25 != 1)
                            
                            x13_1 = var_d0_1
                            x14_40 = x14_1
                            x26 = x3 + sx.q(x26_1)
                            goto label_ffe524
                        
                        if (x27.d + 1 != arg4)
                            goto label_ffea14
                        
                        if ((x12_1 & 0xff) u> 6)
                            x26 = x3
                        else
                            switch (x12_1.b)
                                case 0
                                    if (x11_3.d == 0)
                                        x26 = x3
                                    else
                                        int64_t x11_6 = sx.q(lr_1.d)
                                        
                                        if (lr_1.d s<= 0)
                                            void* x8_52 = &x8_5[x10_5 + x11_6]
                                            int32_t i_46 = x11_3.d
                                            int32_t i_26
                                            
                                            do
                                                *x8_52 = 0xff
                                                i_26 = i_46
                                                i_46 -= 1
                                                x8_52 += x21_2
                                            while (i_26 != 1)
                                            x26 = x3 + (zx.q(arg5 - 2) + 1) * x11_6
                                        else
                                            uint64_t x10_6 = zx.q(lr_1.d)
                                            int64_t x12_4 = x10_6 & 0xffffffe0
                                            int64_t x8_6 = 0
                                            int64_t x14_5 = x10_6 & 0xfffffff8
                                            int32_t i_63 = x11_3.d
                                            x26 = x3
                                            char* x17_1 = x2
                                            int32_t i_27
                                            
                                            do
                                                int64_t x1_2
                                                
                                                if (lr_1.d u>= 8)
                                                    int64_t x1_3 = x8_6 * x11_6
                                                    int64_t x9_41 = x8_6 * x21_2
                                                    
                                                    if (&x2[x9_41] u< var_70_1 + x1_3 + x10_6
                                                            && var_70_1 + x1_3 u<
                                                            &x2[x9_41 + x10_6])
                                                        x1_2 = 0
                                                        goto label_ffca58
                                                    
                                                    int64_t x2_4
                                                    
                                                    if (lr_1.d u>= 0x20)
                                                        int64_t x1_4 = 0x10
                                                        
                                                        do
                                                            void* x9_44 = &x26[x1_4]
                                                            v1_1 = *x9_44
                                                            void* x0_7 = &x17_1[x1_4]
                                                            x1_4 += 0x20
                                                            *(x0_7 - 0x10) = *(x9_44 - 0x10)
                                                            *x0_7 = v1_1
                                                        while (neg.q(x12_4) + x1_4 != 0x10)
                                                        
                                                        if (x12_4 != x10_6)
                                                            x2_4 = x12_4
                                                            x1_2 = x12_4
                                                            
                                                            if ((x10_6 & 0x18) == 0)
                                                                goto label_ffca58
                                                            
                                                            goto label_ffca38
                                                    else
                                                        x2_4 = 0
                                                    label_ffca38:
                                                        
                                                        do
                                                            v0_1.q = *(x26 + x2_4)
                                                            *(x17_1 + x2_4) = v0_1.q
                                                            x2_4 += 8
                                                        while (x14_5 != x2_4)
                                                        
                                                        x1_2 = x14_5
                                                        
                                                        if (x14_5 != x10_6)
                                                            goto label_ffca58
                                                else
                                                    x1_2 = 0
                                                label_ffca58:
                                                    
                                                    do
                                                        x17_1[x1_2] = x26[x1_2]
                                                        x1_2 += 1
                                                    while (x10_6 != x1_2)
                                                x17_1[x11_6] = 0xff
                                                x26 = &x26[x11_6]
                                                x17_1 = &x17_1[x21_2]
                                                i_27 = i_63
                                                i_63 -= 1
                                                x8_6 += 1
                                            while (i_27 != 1)
                                case 1
                                    if (x11_3.d == 0)
                                        x26 = x3
                                    else
                                        int64_t x11_12 = sx.q(lr_1.d)
                                        
                                        if (lr_1.d s<= 0)
                                            void* x8_53 = &x8_5[x10_5 + x11_12]
                                            int32_t i_47 = x11_3.d
                                            int32_t i_28
                                            
                                            do
                                                *x8_53 = 0xff
                                                i_28 = i_47
                                                i_47 -= 1
                                                x8_53 += x21_2
                                            while (i_28 != 1)
                                            x26 = x3 + (zx.q(arg5 - 2) + 1) * x11_12
                                        else
                                            uint64_t x10_7 = zx.q(lr_1.d)
                                            int64_t x8_7 = 0
                                            int64_t x13_10 = x10_7 & 0xffffffe0
                                            int64_t x15_11 = x10_7 & 0xfffffff8
                                            int32_t i_64 = x11_3.d
                                            x26 = x3
                                            char* x17_3 = x2
                                            int32_t i_29
                                            
                                            do
                                                int64_t x1_5
                                                int32_t x2_5
                                                
                                                if (lr_1.d u>= 8)
                                                    int64_t x9_59 = x8_7 * x21_2
                                                    int64_t x0_9 = x8_7 * x11_12
                                                    void* x3_2 = &x2[x9_59]
                                                    void* x4_3 = &x2[x9_59 + x10_7]
                                                    x2_5 = 0
                                                    x1_5 = 0
                                                    
                                                    if (((x3_2 u< var_70_1 + x0_9 + x10_7 ? 1 : 0)
                                                            & (var_70_1 + x0_9 u< x4_3 ? 1 : 0)
                                                            & 1) != 0 || ((
                                                            x3_2 u< &x2[x10_7 - x21_2 + x9_59] ? 1
                                                            : 0) & (&x2[x9_59 - x21_2] u< x4_3 ? 1 : 0)
                                                            & 1) != 0)
                                                        goto label_ffcc44
                                                    
                                                    int64_t x3_5
                                                    
                                                    if (lr_1.d u>= 0x20)
                                                        int64_t x1_6 = 0
                                                        
                                                        do
                                                            void* x9_63 = &x26[x1_6]
                                                            void* x9_64 =
                                                                &x17_3[sx.q(x25_1.d + x1_6.d)]
                                                            void* x2_7 = &x17_3[x1_6]
                                                            x1_6 += 0x20
                                                            v1_1 = *(x9_64 + 0x10) + *(x9_63 + 0x10)
                                                            *x2_7 = *x9_64 + *x9_63
                                                            *(x2_7 + 0x10) = v1_1
                                                        while (x13_10 != x1_6)
                                                        
                                                        if (x13_10 != x10_7)
                                                            x3_5 = x13_10
                                                            x1_5 = x13_10
                                                            x2_5 = x13_10.d
                                                            
                                                            if ((x10_7 & 0x18) == 0)
                                                                goto label_ffcc44
                                                            
                                                            goto label_ffcd58
                                                    else
                                                        x3_5 = 0
                                                    label_ffcd58:
                                                        
                                                        do
                                                            v0_1.q = *(x26 + x3_5)
                                                            v1_1.q =
                                                                *(x17_3 + sx.q(x25_1.d + x3_5.d))
                                                            *(x17_3 + x3_5) = (v1_1 + v0_1).q
                                                            x3_5 += 8
                                                        while (x15_11 != x3_5)
                                                        
                                                        x1_5 = x15_11
                                                        x2_5 = x15_11.d
                                                        
                                                        if (x15_11 != x10_7)
                                                            goto label_ffcc44
                                                else
                                                    x1_5 = 0
                                                    x2_5 = 0
                                                label_ffcc44:
                                                    int64_t x2_6 = x9_18 + sx.q(x2_5)
                                                    
                                                    do
                                                        char x0_8 = x17_3[x2_6]
                                                        x2_6 += 1
                                                        x17_3[x1_5] = x0_8 + x26[x1_5]
                                                        x1_5 += 1
                                                    while (x10_7 != x1_5)
                                                x17_3[x11_12] = 0xff
                                                x26 = &x26[x11_12]
                                                x17_3 = &x17_3[x21_2]
                                                i_29 = i_64
                                                i_64 -= 1
                                                x8_7 += 1
                                            while (i_29 != 1)
                                case 2
                                    if (x11_3.d == 0)
                                        x26 = x3
                                    else
                                        int64_t x12_9 = sx.q(lr_1.d)
                                        
                                        if (lr_1.d s<= 0)
                                            void* x8_54 = &x8_5[x10_5 + x12_9]
                                            int32_t i_48 = x11_3.d
                                            int32_t i_30
                                            
                                            do
                                                *x8_54 = 0xff
                                                i_30 = i_48
                                                i_48 -= 1
                                                x8_54 += x21_2
                                            while (i_30 != 1)
                                            x26 = x3 + (zx.q(arg5 - 2) + 1) * x12_9
                                        else
                                            uint64_t x10_8 = zx.q(lr_1.d)
                                            int64_t x8_8 = 0
                                            int64_t x13_11 = x10_8 & 0xffffffe0
                                            int64_t x15_12 = x10_8 & 0xfffffff8
                                            int32_t i_65 = x11_3.d
                                            x26 = x3
                                            void* x17_4 = x4
                                            char* x1_7 = x2
                                            int32_t i_31
                                            
                                            do
                                                int64_t x2_8
                                                
                                                if (lr_1.d u>= 8)
                                                    int64_t x11_14 = x8_8 * x12_9
                                                    int64_t x9_73 = x8_8 * x21_2
                                                    void* x0_14 = &x2[x9_73]
                                                    int64_t x3_6 = x9_73 + x10_8
                                                    void* x5_3 = &x2[x3_6]
                                                    x2_8 = 0
                                                    
                                                    if (((x0_14 u< var_70_1 + x11_14 + x10_8 ? 1
                                                            : 0) & (var_70_1 + x11_14 u< x5_3 ? 1 : 0) & 1)
                                                            != 0 || ((x0_14 u< x4 + x3_6 ? 1 : 0)
                                                            & (x4 + x9_73 u< x5_3 ? 1 : 0) & 1) != 0)
                                                        goto label_ffcdf8
                                                    
                                                    int64_t x3_9
                                                    
                                                    if (lr_1.d u>= 0x20)
                                                        int64_t x2_9 = 0
                                                        void* x3_10 = &x1_7[var_a8_1]
                                                        
                                                        do
                                                            void* x9_77 = &x26[x2_9]
                                                            v0_1 = *(x3_10 + x2_9)
                                                            v3_1 = *(x3_10 + x2_9 + 0x10)
                                                            void* x0_16 = &x1_7[x2_9]
                                                            x2_9 += 0x20
                                                            v1_1 = v3_1 + *(x9_77 + 0x10)
                                                            *x0_16 = v0_1 + *x9_77
                                                            *(x0_16 + 0x10) = v1_1
                                                        while (x13_11 != x2_9)
                                                        
                                                        if (x13_11 != x10_8)
                                                            x3_9 = x13_11
                                                            x2_8 = x13_11
                                                            
                                                            if ((x10_8 & 0x18) == 0)
                                                                goto label_ffcdf8
                                                            
                                                            goto label_ffcee4
                                                    else
                                                        x3_9 = 0
                                                    label_ffcee4:
                                                        
                                                        do
                                                            v0_1.q = *(x26 + x3_9)
                                                            v1_1.q = *(x17_4 + x3_9)
                                                            *(x1_7 + x3_9) = (v1_1 + v0_1).q
                                                            x3_9 += 8
                                                        while (x15_12 != x3_9)
                                                        
                                                        x2_8 = x15_12
                                                        
                                                        if (x15_12 != x10_8)
                                                            goto label_ffcdf8
                                                else
                                                    x2_8 = 0
                                                label_ffcdf8:
                                                    
                                                    do
                                                        x1_7[x2_8] = *(x17_4 + x2_8) + x26[x2_8]
                                                        x2_8 += 1
                                                    while (x10_8 != x2_8)
                                                x1_7[x12_9] = 0xff
                                                x26 = &x26[x12_9]
                                                x1_7 = &x1_7[x21_2]
                                                x17_4 += x21_2
                                                i_31 = i_65
                                                i_65 -= 1
                                                x8_8 += 1
                                            while (i_31 != 1)
                                case 3
                                    if (x11_3.d == 0)
                                        x26 = x3
                                    else
                                        int64_t x12_10 = sx.q(lr_1.d)
                                        
                                        if (lr_1.d s<= 0)
                                            void* x8_55 = &x8_5[x10_5 + x12_10]
                                            int32_t i_49 = x11_3.d
                                            int32_t i_32
                                            
                                            do
                                                *x8_55 = 0xff
                                                i_32 = i_49
                                                i_49 -= 1
                                                x8_55 += x21_2
                                            while (i_32 != 1)
                                            x26 = x3 + (zx.q(arg5 - 2) + 1) * x12_10
                                        else
                                            uint64_t x14_15 = zx.q(lr_1.d)
                                            int64_t x13_12 = 0
                                            int64_t x15_13 = x14_15 & 0xffffffe0
                                            int64_t x8_9 = x14_15 - x21_2
                                            int64_t x8_10 = x14_15 & 0x18
                                            int64_t x17_5 = x14_15 & 0xfffffff8
                                            void* x10_9 = &x8_5[x9_18 + x10_5]
                                            x26 = x3
                                            int32_t i_42 = x11_3.d
                                            char* x3_11 = x2
                                            void* x2_10 = x4
                                            uint64_t var_b8_1 = x14_15
                                            int64_t var_b0_1 = x12_10
                                            int32_t i_33
                                            
                                            do
                                                int64_t x4_7
                                                int32_t x5_4
                                                
                                                if (lr_1.d u>= 8)
                                                    int64_t x7_1 = x13_12 * x21_2
                                                    int64_t x9_84 = x13_12 * x12_10
                                                    int64_t x6_4 = x7_1 + x14_15
                                                    void* x21_4 = &x2[x7_1]
                                                    void* x11_20 = &x2[x6_4]
                                                    x5_4 = 0
                                                    x4_7 = 0
                                                    
                                                    if (((x21_4 u< var_70_1 + x9_84 + x14_15 ? 1
                                                            : 0) & (var_70_1 + x9_84 u< x11_20 ? 1 : 0)
                                                            & 1) != 0)
                                                        x25_1 = var_e0_1
                                                    label_ffd12c:
                                                        x14_15 = var_b8_1
                                                        x12_10 = var_b0_1
                                                        goto label_ffcf94
                                                    
                                                    x25_1 = var_e0_1
                                                    
                                                    if (((x21_4 u< x4 + x6_4 ? 1 : 0)
                                                            & (x4 + x7_1 u< x11_20 ? 1 : 0) & 1) != 0)
                                                        goto label_ffd12c
                                                    
                                                    x14_15 = var_b8_1
                                                    x12_10 = var_b0_1
                                                    
                                                    if (((x21_4 u< &x2[x8_9 + x7_1] ? 1 : 0)
                                                            & (&x2[x7_1 - x21_2] u< x11_20 ? 1 : 0)
                                                            & 1) != 0)
                                                        goto label_ffcf94
                                                    
                                                    int64_t x6_7
                                                    
                                                    if (var_78_1.d u>= 0x20)
                                                        int64_t x4_9 = 0
                                                        
                                                        do
                                                            void* x8_23 = &x26[x4_9]
                                                            v0_1 = *x8_23
                                                            v1_1 = *(x8_23 + 0x10)
                                                            void* x8_24 = x2_10 + x4_9
                                                            v3_1 = *(x8_24 + 0x10)
                                                            void* x8_26 =
                                                                &x3_11[sx.q(x25_1.d + x4_9.d)]
                                                            v5_1 = *(x8_26 + 0x10)
                                                            void* x8_27 = &x3_11[x4_9]
                                                            x4_9 += 0x20
                                                            v2_1 = vhaddq_u8(*x8_26, *x8_24)
                                                            v1_1 += vhaddq_u8(v5_1, v3_1)
                                                            *x8_27 = v0_1 + v2_1
                                                            *(x8_27 + 0x10) = v1_1
                                                        while (x15_13 != x4_9)
                                                        
                                                        if (x15_13 != x14_15)
                                                            x6_7 = x15_13
                                                            x4_7 = x15_13
                                                            x5_4 = x15_13.d
                                                            
                                                            if (x8_10 == 0)
                                                                goto label_ffcf94
                                                            
                                                            goto label_ffd110
                                                    else
                                                        x6_7 = 0
                                                    label_ffd110:
                                                        
                                                        do
                                                            v0_1.q = *(x2_10 + x6_7)
                                                            v1_1.q =
                                                                *(x3_11 + sx.q(x25_1.d + x6_7.d))
                                                            v2_1.q = *(x26 + x6_7)
                                                            *(x3_11 + x6_7) =
                                                                (v2_1 + vhadd_u8(v1_1, v0_1)).q
                                                            x6_7 += 8
                                                        while (x17_5 != x6_7)
                                                        
                                                        x4_7 = x17_5
                                                        x5_4 = x17_5.d
                                                        
                                                        if (x17_5 != x14_15)
                                                            goto label_ffcf94
                                                else
                                                    x4_7 = 0
                                                    x5_4 = 0
                                                label_ffcf94:
                                                    int64_t j = 0
                                                    
                                                    do
                                                        x3_11[x4_7 + j] = x26[x4_7 + j] + ((
                                                            zx.d(*(x10_9 + sx.q(x5_4) + j))
                                                            + zx.d(*(x2_10 + x4_7 + j))) u>> 1).b
                                                        j += 1
                                                    while (x14_15 - x4_7 != j)
                                                x21_2 = var_88_1
                                                lr_1 = var_78_1
                                                x3_11[x12_10] = 0xff
                                                x26 = &x26[x12_10]
                                                x3_11 = &x3_11[x21_2]
                                                x2_10 += x21_2
                                                i_33 = i_42
                                                i_42 -= 1
                                                x13_12 += 1
                                                x10_9 += x21_2
                                            while (i_33 != 1)
                                case 4
                                    int32_t i_81 = x11_3.d
                                    
                                    if (i_81 == 0)
                                        x26 = x3
                                    else
                                        int64_t x15_14 = sx.q(lr_1.d)
                                        uint64_t x14_18 = zx.q(lr_1.d)
                                        int64_t x12_12 = 0
                                        int64_t x13_14 = x14_18 - x21_2
                                        int64_t x13_15 = x14_18 & 0xfffffff0
                                        int64_t x13_16 = x14_18 & 0xfffffff8
                                        void* x17_6 = &x8_5[x9_18 - x10_3 + x10_5]
                                        void* x10_10 = &x8_5[x9_18 + x10_5]
                                        int32_t i_43 = i_81
                                        x26 = x3
                                        char* x3_12 = x2
                                        void* x2_11 = x4
                                        int32_t var_100_1 = fp
                                        int32_t i_34
                                        
                                        do
                                            if (lr_1.d s>= 1)
                                                int64_t x4_10
                                                int64_t x5_6
                                                
                                                if (var_78_1.d u>= 8)
                                                    int64_t x8_36 = x12_12 * var_88_1
                                                    int64_t x21_7 = x8_36 - var_88_1
                                                    int64_t x9_94 = x12_12 * x15_14
                                                    void* x11_23 = &x2[x8_36]
                                                    int64_t x0_20 = x8_36 + x14_18
                                                    int64_t x7_4 = x13_14 + x8_36
                                                    void* x14_21 = &x2[x0_20]
                                                    x5_6 = 0
                                                    x4_10 = 0
                                                    
                                                    if (((x11_23 u< var_70_1 + x9_94 + x14_18 ? 1
                                                            : 0) & (var_70_1 + x9_94 u< x14_21 ? 1 : 0)
                                                            & 1) != 0)
                                                        x25_1 = var_e0_1
                                                        fp = var_100_1
                                                        goto label_ffd1fc
                                                    
                                                    x25_1 = var_e0_1
                                                    fp = var_100_1
                                                    
                                                    if (((x11_23 u< &x2[x7_4] ? 1 : 0)
                                                            & (&x2[x21_7] u< x14_21 ? 1 : 0) & 1) != 0 || (
                                                            (x11_23 u< x4 + x0_20 ? 1 : 0)
                                                            & (x4 + x8_36 u< x14_21 ? 1 : 0) & 1) != 0 || (
                                                            (x11_23 u< x4 + x7_4 ? 1 : 0)
                                                            & (x4 + x21_7 u< x14_21 ? 1 : 0) & 1) != 0)
                                                        goto label_ffd1fc
                                                    
                                                    int64_t x6_10
                                                    
                                                    if (var_78_1.d u>= 0x10)
                                                        int64_t x4_12 = 0
                                                        
                                                        do
                                                            int64_t x8_47 = sx.q(x25_1.d + x4_12.d)
                                                            v2_1 = *(x2_11 + x4_12)
                                                            v1_1 = *(x3_12 + x8_47)
                                                            v3_1 = *(x2_11 + x8_47)
                                                            v0_1 = *(x26 + x4_12)
                                                            v4_1.w = zx.w(v2_1:8.b)
                                                            v4_1:2.w = zx.w(v2_1:9.b)
                                                            v4_1:4.w = zx.w(v2_1:0xa.b)
                                                            v4_1:6.w = zx.w(v2_1:0xb.b)
                                                            v4_1:8.w = zx.w(v2_1:0xc.b)
                                                            v4_1:0xa.w = zx.w(v2_1:0xd.b)
                                                            v4_1:0xc.w = zx.w(v2_1:0xe.b)
                                                            v4_1:0xe.w = zx.w(v2_1:0xf.b)
                                                            v5_1.w = zx.w(v2_1.b)
                                                            v5_1:2.w = zx.w(v2_1:1.b)
                                                            v5_1:4.w = zx.w(v2_1:2.b)
                                                            v5_1:6.w = zx.w(v2_1:3.b)
                                                            v5_1:8.w = zx.w(v2_1:4.b)
                                                            v5_1:0xa.w = zx.w(v2_1:5.b)
                                                            v5_1:0xc.w = zx.w(v2_1:6.b)
                                                            v5_1:0xe.w = zx.w(v2_1:7.b)
                                                            v6_1.w = zx.w(v1_1:8.b)
                                                            v6_1:2.w = zx.w(v1_1:9.b)
                                                            v6_1:4.w = zx.w(v1_1:0xa.b)
                                                            v6_1:6.w = zx.w(v1_1:0xb.b)
                                                            v6_1:8.w = zx.w(v1_1:0xc.b)
                                                            v6_1:0xa.w = zx.w(v1_1:0xd.b)
                                                            v6_1:0xc.w = zx.w(v1_1:0xe.b)
                                                            v6_1:0xe.w = zx.w(v1_1:0xf.b)
                                                            v7_1.w = zx.w(v1_1.b)
                                                            v7_1:2.w = zx.w(v1_1:1.b)
                                                            v7_1:4.w = zx.w(v1_1:2.b)
                                                            v7_1:6.w = zx.w(v1_1:3.b)
                                                            v7_1:8.w = zx.w(v1_1:4.b)
                                                            v7_1:0xa.w = zx.w(v1_1:5.b)
                                                            v7_1:0xc.w = zx.w(v1_1:6.b)
                                                            v7_1:0xe.w = zx.w(v1_1:7.b)
                                                            v16_1.w = zx.w(v3_1.b)
                                                            v16_1:2.w = zx.w(v3_1:1.b)
                                                            v16_1:4.w = zx.w(v3_1:2.b)
                                                            v16_1:6.w = zx.w(v3_1:3.b)
                                                            v16_1:8.w = zx.w(v3_1:4.b)
                                                            v16_1:0xa.w = zx.w(v3_1:5.b)
                                                            v16_1:0xc.w = zx.w(v3_1:6.b)
                                                            v16_1:0xe.w = zx.w(v3_1:7.b)
                                                            v17_1.w = zx.w(v3_1:8.b)
                                                            v17_1:2.w = zx.w(v3_1:9.b)
                                                            v17_1:4.w = zx.w(v3_1:0xa.b)
                                                            v17_1:6.w = zx.w(v3_1:0xb.b)
                                                            v17_1:8.w = zx.w(v3_1:0xc.b)
                                                            v17_1:0xa.w = zx.w(v3_1:0xd.b)
                                                            v17_1:0xc.w = zx.w(v3_1:0xe.b)
                                                            v17_1:0xe.w = zx.w(v3_1:0xf.b)
                                                            uint128_t v18_3 = vaddl_u16(v5_1, v7_1)
                                                            uint128_t v19_2 =
                                                                vaddl_high_u16(v5_1, v7_1)
                                                            uint128_t v20_1 = vaddl_u16(v4_1, v6_1)
                                                            uint128_t v21_1 =
                                                                vaddl_high_u16(v4_1, v6_1)
                                                            uint128_t v20_2 =
                                                                vsubw_u16(v20_1, v17_1)
                                                            uint128_t v19_3 =
                                                                vsubw_u16(v19_2, v16_1)
                                                            uint128_t v18_4 =
                                                                vsubw_u16(v18_3, v16_1)
                                                            uint128_t v21_2 =
                                                                vsubw_u16(v21_1, v17_1)
                                                            uint128_t v22_1 = vsubw_u16(v18_4, v7_1)
                                                            uint128_t v7_8 = vsubw_u16(v19_3, v7_1)
                                                            uint128_t v23_1 = vsubw_u16(v20_2, v6_1)
                                                            uint128_t v24_1 = vsubw_u16(v18_4, v5_1)
                                                            uint128_t v5_6 = vsubw_u16(v19_3, v5_1)
                                                            uint128_t v25_1 = vsubw_u16(v20_2, v4_1)
                                                            uint128_t v18_5 =
                                                                vsubw_u16(v18_4, v16_1)
                                                            uint128_t v16_5 =
                                                                vsubw_u16(v19_3, v16_1)
                                                            uint128_t v19_4 =
                                                                vsubw_u16(v20_2, v17_1)
                                                            uint128_t v6_6 = vsubw_u16(v21_2, v6_1)
                                                            uint128_t v4_5 = vsubw_u16(v21_2, v4_1)
                                                            uint128_t v17_3 =
                                                                vsubw_u16(v21_2, v17_1)
                                                            uint128_t v20_3 = vabsq_s32(v23_1)
                                                            uint128_t v21_3 = vabsq_s32(v22_1)
                                                            uint128_t v22_2 = vabsq_s32(v25_1)
                                                            uint128_t v23_2 = vabsq_s32(v24_1)
                                                            uint128_t v19_5 = vabsq_s32(v19_4)
                                                            uint128_t v18_6 = vabsq_s32(v18_5)
                                                            uint128_t v6_7 = vabsq_s32(v6_6)
                                                            uint128_t v7_9 = vabsq_s32(v7_8)
                                                            uint128_t v4_6 = vabsq_s32(v4_5)
                                                            uint128_t v5_7 = vabsq_s32(v5_6)
                                                            uint128_t v17_4 = vabsq_s32(v17_3)
                                                            uint128_t v16_6 = vabsq_s32(v16_5)
                                                            uint128_t v24_2 =
                                                                vcgtq_u32(v21_3, v23_2)
                                                            uint128_t v26_1 =
                                                                vcgtq_u32(v20_3, v22_2)
                                                            uint128_t v21_4 =
                                                                vcgtq_u32(v21_3, v18_6)
                                                            uint128_t v20_4 =
                                                                vcgtq_u32(v20_3, v19_5)
                                                            uint128_t v25_2 = vcgtq_u32(v7_9, v5_7)
                                                            uint128_t v27_1 = vcgtq_u32(v6_7, v4_6)
                                                            uint128_t v7_10 = vcgtq_u32(v7_9, v16_6)
                                                            uint128_t v6_8 = vcgtq_u32(v6_7, v17_4)
                                                            uint128_t v4_7 = vcgtq_u32(v4_6, v17_4)
                                                            uint128_t v17_5 =
                                                                vcgtq_u32(v22_2, v19_5)
                                                            v5_1 = vcgtq_u32(v5_7, v16_6)
                                                            uint128_t v16_7 =
                                                                vcgtq_u32(v23_2, v18_6)
                                                            uint128_t v18_7 = vorrq_s8(v26_1, v20_4)
                                                            uint128_t v19_6 = vorrq_s8(v24_2, v21_4)
                                                            uint128_t v6_9 = vorrq_s8(v27_1, v6_8)
                                                            v7_1 = vorrq_s8(v25_2, v7_10)
                                                            vmovn_s32(v18_7)
                                                            vmovn_s32(v19_6)
                                                            uint128_t v18_9 = vmovn_high_s32(v6_9)
                                                            uint128_t v19_8 = vmovn_high_s32(v7_1)
                                                            vmovn_s32(v17_5)
                                                            vmovn_s32(v16_7)
                                                            vmovn_s16(v19_8)
                                                            v6_1 = vmovn_high_s16(v18_9)
                                                            v17_1 = vmovn_high_s32(v4_7)
                                                            vmovn_s16(vmovn_high_s32(v5_1))
                                                            *(x3_12 + x4_12) = vbslq_s8(v6_1, 
                                                                vbslq_s8(vmovn_high_s16(v17_1), v3_1, 
                                                                    v2_1), 
                                                                v1_1) + v0_1
                                                            x4_12 += 0x10
                                                        while (x13_15 != x4_12)
                                                        
                                                        if (x13_15 != x14_18)
                                                            x5_6 = x13_15
                                                            x6_10 = x5_6
                                                            x4_10 = x5_6
                                                            
                                                            if ((x14_18.d & 8) == 0)
                                                                goto label_ffd1fc
                                                            
                                                            goto label_ffd3f4
                                                    else
                                                        x6_10 = 0
                                                    label_ffd3f4:
                                                        
                                                        do
                                                            int64_t x8_44 = sx.q(x25_1.d + x6_10.d)
                                                            v0_1.q = *(x2_11 + x6_10)
                                                            v1_1.q = *(x3_12 + x8_44)
                                                            v2_1.q = *(x2_11 + x8_44)
                                                            v3_1.q = *(x26 + x6_10)
                                                            v4_1.w = zx.w(v0_1.b)
                                                            v4_1:2.w = zx.w(v0_1:1.b)
                                                            v4_1:4.w = zx.w(v0_1:2.b)
                                                            v4_1:6.w = zx.w(v0_1:3.b)
                                                            v4_1:8.w = zx.w(v0_1:4.b)
                                                            v4_1:0xa.w = zx.w(v0_1:5.b)
                                                            v4_1:0xc.w = zx.w(v0_1:6.b)
                                                            v4_1:0xe.w = zx.w(v0_1:7.b)
                                                            v5_1.w = zx.w(v1_1.b)
                                                            v5_1:2.w = zx.w(v1_1:1.b)
                                                            v5_1:4.w = zx.w(v1_1:2.b)
                                                            v5_1:6.w = zx.w(v1_1:3.b)
                                                            v5_1:8.w = zx.w(v1_1:4.b)
                                                            v5_1:0xa.w = zx.w(v1_1:5.b)
                                                            v5_1:0xc.w = zx.w(v1_1:6.b)
                                                            v5_1:0xe.w = zx.w(v1_1:7.b)
                                                            v6_1.w = zx.w(v2_1.b)
                                                            v6_1:2.w = zx.w(v2_1:1.b)
                                                            v6_1:4.w = zx.w(v2_1:2.b)
                                                            v6_1:6.w = zx.w(v2_1:3.b)
                                                            v6_1:8.w = zx.w(v2_1:4.b)
                                                            v6_1:0xa.w = zx.w(v2_1:5.b)
                                                            v6_1:0xc.w = zx.w(v2_1:6.b)
                                                            v6_1:0xe.w = zx.w(v2_1:7.b)
                                                            uint128_t v7_2 = vaddl_u16(v4_1, v5_1)
                                                            uint128_t v16_2 =
                                                                vaddl_high_u16(v4_1, v5_1)
                                                            uint128_t v7_3 = vsubw_u16(v7_2, v6_1)
                                                            uint128_t v16_3 = vsubw_u16(v16_2, v6_1)
                                                            uint128_t v17_2 = vsubw_u16(v7_3, v5_1)
                                                            uint128_t v18_1 = vsubw_u16(v7_3, v4_1)
                                                            uint128_t v7_4 = vsubw_u16(v7_3, v6_1)
                                                            uint128_t v5_2 = vsubw_u16(v16_3, v5_1)
                                                            uint128_t v4_2 = vsubw_u16(v16_3, v4_1)
                                                            uint128_t v6_2 = vsubw_u16(v16_3, v6_1)
                                                            uint128_t v16_4 = vabsq_s32(v17_2)
                                                            v17_1 = vabsq_s32(v18_1)
                                                            uint128_t v7_5 = vabsq_s32(v7_4)
                                                            uint128_t v5_3 = vabsq_s32(v5_2)
                                                            uint128_t v4_3 = vabsq_s32(v4_2)
                                                            uint128_t v6_3 = vabsq_s32(v6_2)
                                                            uint128_t v18_2 =
                                                                vcgtq_u32(v16_4, v17_1)
                                                            v16_1 = vcgtq_u32(v16_4, v7_5)
                                                            uint128_t v19_1 = vcgtq_u32(v5_3, v4_3)
                                                            uint128_t v5_4 = vcgtq_u32(v5_3, v6_3)
                                                            uint128_t v4_4 = vcgtq_u32(v4_3, v6_3)
                                                            uint128_t v6_4 = vcgtq_u32(v17_1, v7_5)
                                                            uint128_t v7_6 = vorrq_s8(v18_2, v16_1)
                                                            uint128_t v5_5 = vorrq_s8(v19_1, v5_4)
                                                            vmovn_s32(v6_4)
                                                            vmovn_s32(v7_6)
                                                            v7_1 = vmovn_high_s32(v5_5)
                                                            v5_1 = vmovn_s16(vmovn_high_s32(v4_4))
                                                            *(x3_12 + x6_10) = (vbsl_s8(
                                                                vmovn_s16(v7_1), 
                                                                vbsl_s8(v5_1, v2_1, v0_1), v1_1) + v3_1)
                                                                .q
                                                            x6_10 += 8
                                                        while (x13_16 != x6_10)
                                                        
                                                        x4_10 = x13_16
                                                        x5_6 = x13_16
                                                        
                                                        if (x13_16 != x14_18)
                                                            goto label_ffd1fc
                                                else
                                                    x4_10 = 0
                                                    x5_6 = 0
                                                label_ffd1fc:
                                                    int64_t x8_34 = sx.q(x5_6.d)
                                                    int64_t j_1 = 0
                                                    
                                                    do
                                                        uint32_t x9_90 =
                                                            zx.d(*(x10_10 + x8_34 + j_1))
                                                        uint32_t x11_21 =
                                                            zx.d(*(x2_11 + x4_10 + j_1))
                                                        uint32_t x13_17 =
                                                            zx.d(*(x17_6 + x8_34 + j_1))
                                                        uint32_t x15_16 = x11_21 + x9_90 - x13_17
                                                        uint32_t x16_7 = x15_16 - x9_90
                                                        uint32_t x16_8
                                                        
                                                        if (x15_16 - x9_90 s< 0)
                                                            x16_8 = neg.d(x16_7)
                                                        else
                                                            x16_8 = x16_7
                                                        
                                                        uint32_t x0_18 = x15_16 - x11_21
                                                        uint32_t x0_19
                                                        
                                                        if (x15_16 - x11_21 s< 0)
                                                            x0_19 = neg.d(x0_18)
                                                        else
                                                            x0_19 = x0_18
                                                        
                                                        uint32_t x15_17 = x15_16 - x13_17
                                                        uint32_t x15_18
                                                        
                                                        if (x15_16 - x13_17 s< 0)
                                                            x15_18 = neg.d(x15_17)
                                                        else
                                                            x15_18 = x15_17
                                                        
                                                        char x11_22
                                                        
                                                        if (x0_19 u> x15_18)
                                                            x11_22 = x13_17.b
                                                        else
                                                            x11_22 = x11_21.b
                                                        
                                                        bool c_1
                                                        bool z_1
                                                        
                                                        if (x16_8 u<= x15_18)
                                                            c_1 = x16_8 u>= x0_19
                                                            z_1 = x16_8 == x0_19
                                                        else
                                                            z_1 = false
                                                            c_1 = true
                                                        
                                                        char x9_91
                                                        
                                                        if (not(z_1) && c_1)
                                                            x9_91 = x11_22
                                                        else
                                                            x9_91 = x9_90.b
                                                        
                                                        x3_12[x4_10 + j_1] =
                                                            x9_91 + x26[x4_10 + j_1]
                                                        j_1 += 1
                                                    while (x14_18 - x4_10 != j_1)
                                            
                                            x21_2 = var_88_1
                                            lr_1 = var_78_1
                                            x3_12[x15_14] = 0xff
                                            x26 = &x26[x15_14]
                                            x3_12 = &x3_12[x21_2]
                                            x2_11 += x21_2
                                            i_34 = i_43
                                            i_43 -= 1
                                            x12_12 += 1
                                            x17_6 += x21_2
                                            x10_10 += x21_2
                                        while (i_34 != 1)
                                case 5
                                    if (x11_3.d == 0)
                                        x26 = x3
                                    else
                                        int64_t x11_25 = sx.q(lr_1.d)
                                        
                                        if (lr_1.d s<= 0)
                                            void* x8_56 = &x8_5[x10_5 + x11_25]
                                            int32_t i_50 = x11_3.d
                                            int32_t i_35
                                            
                                            do
                                                *x8_56 = 0xff
                                                i_35 = i_50
                                                i_50 -= 1
                                                x8_56 += x21_2
                                            while (i_35 != 1)
                                            x26 = x3 + (zx.q(arg5 - 2) + 1) * x11_25
                                        else
                                            uint64_t x10_11 = zx.q(lr_1.d)
                                            int64_t x8_50 = 0
                                            int64_t x13_21 = x10_11 & 0xffffffe0
                                            int64_t x15_21 = x10_11 & 0xfffffff8
                                            int32_t i_66 = x11_3.d
                                            x26 = x3
                                            char* x17_7 = x2
                                            int32_t i_36
                                            
                                            do
                                                int64_t x1_8
                                                int32_t x2_12
                                                
                                                if (lr_1.d u>= 8)
                                                    int64_t x3_14 = x8_50 * x11_25
                                                    int64_t x9_108 = x8_50 * x21_2
                                                    void* x4_13 = &x2[x9_108]
                                                    void* x5_9 = &x2[x9_108 + x10_11]
                                                    x2_12 = 0
                                                    x1_8 = 0
                                                    
                                                    if (((x4_13 u< var_70_1 + x3_14 + x10_11 ? 1
                                                            : 0) & (var_70_1 + x3_14 u< x5_9 ? 1 : 0) & 1)
                                                            != 0 || ((x4_13 u< &x2[x10_11 - x21_2 + x9_108]
                                                            ? 1 : 0)
                                                            & (&x2[x9_108 - x21_2] u< x5_9 ? 1 : 0)
                                                            & 1) != 0)
                                                        goto label_ffd5f8
                                                    
                                                    int64_t x3_18
                                                    
                                                    if (lr_1.d u>= 0x20)
                                                        int64_t x1_9 = 0
                                                        
                                                        do
                                                            void* x9_112 = &x26[x1_9]
                                                            v1_1 = *(x9_112 + 0x10)
                                                            void* x9_113 =
                                                                &x17_7[sx.q(x25_1.d + x1_9.d)]
                                                            *x9_113
                                                            *(x9_113 + 0x10)
                                                            void* x3_19 = &x17_7[x1_9]
                                                            x1_9 += 0x20
                                                            unimplemented  {usra v0.16b, v2.16b, 
                                                                #0x1}
                                                            unimplemented  {usra v1.16b, v3.16b, 
                                                                #0x1}
                                                            *x3_19 = *x9_112
                                                            *(x3_19 + 0x10) = v1_1
                                                        while (x13_21 != x1_9)
                                                        
                                                        if (x13_21 != x10_11)
                                                            x3_18 = x13_21
                                                            x1_8 = x13_21
                                                            x2_12 = x13_21.d
                                                            
                                                            if ((x10_11 & 0x18) == 0)
                                                                goto label_ffd5f8
                                                            
                                                            goto label_ffd718
                                                    else
                                                        x3_18 = 0
                                                    label_ffd718:
                                                        
                                                        do
                                                            v0_1.q = *(x26 + x3_18)
                                                            v1_1.q =
                                                                *(x17_7 + sx.q(x25_1.d + x3_18.d))
                                                            *(x17_7 + x3_18) =
                                                                vsra_n_u8(v0_1, v1_1, 1).q
                                                            x3_18 += 8
                                                        while (x15_21 != x3_18)
                                                        
                                                        x1_8 = x15_21
                                                        x2_12 = x15_21.d
                                                        
                                                        if (x15_21 != x10_11)
                                                            goto label_ffd5f8
                                                else
                                                    x1_8 = 0
                                                    x2_12 = 0
                                                label_ffd5f8:
                                                    int64_t x2_13 = x9_18 + sx.q(x2_12)
                                                    
                                                    do
                                                        uint32_t x3_13 = zx.d(x17_7[x2_13])
                                                        x2_13 += 1
                                                        x17_7[x1_8] = x26[x1_8] + (x3_13 u>> 1).b
                                                        x1_8 += 1
                                                    while (x10_11 != x1_8)
                                                x17_7[x11_25] = 0xff
                                                x26 = &x26[x11_25]
                                                x17_7 = &x17_7[x21_2]
                                                i_36 = i_66
                                                i_66 -= 1
                                                x8_50 += 1
                                            while (i_36 != 1)
                                case 6
                                    if (x11_3.d == 0)
                                        x26 = x3
                                    else
                                        int64_t x11_26 = sx.q(lr_1.d)
                                        
                                        if (lr_1.d s<= 0)
                                            void* x8_57 = &x8_5[x10_5 + x11_26]
                                            int32_t i_51 = x11_3.d
                                            int32_t i_37
                                            
                                            do
                                                *x8_57 = 0xff
                                                i_37 = i_51
                                                i_51 -= 1
                                                x8_57 += x21_2
                                            while (i_37 != 1)
                                            x26 = x3 + (zx.q(arg5 - 2) + 1) * x11_26
                                        else
                                            uint64_t x10_12 = zx.q(lr_1.d)
                                            int64_t x8_51 = 0
                                            int64_t x13_22 = x10_12 & 0xffffffe0
                                            int64_t x15_22 = x10_12 & 0xfffffff8
                                            int32_t i_67 = x11_3.d
                                            x26 = x3
                                            char* x17_8 = x2
                                            int32_t i_38
                                            
                                            do
                                                int64_t x1_10
                                                int32_t x2_15
                                                
                                                if (lr_1.d u>= 8)
                                                    int64_t x3_21 = x8_51 * x11_26
                                                    int64_t x9_123 = x8_51 * x21_2
                                                    void* x4_15 = &x2[x9_123]
                                                    void* x5_11 = &x2[x9_123 + x10_12]
                                                    x2_15 = 0
                                                    x1_10 = 0
                                                    
                                                    if (((x4_15 u< var_70_1 + x3_21 + x10_12 ? 1
                                                            : 0) & (var_70_1 + x3_21 u< x5_11 ? 1 : 0) & 1)
                                                            != 0 || ((x4_15 u< &x2[x10_12 - x21_2 + x9_123]
                                                            ? 1 : 0) & (&x2[x9_123 - x21_2] u< x5_11 ? 1
                                                            : 0) & 1) != 0)
                                                        goto label_ffd7a4
                                                    
                                                    int64_t x3_25
                                                    
                                                    if (lr_1.d u>= 0x20)
                                                        int64_t x1_11 = 0
                                                        
                                                        do
                                                            void* x9_127 = &x26[x1_11]
                                                            void* x9_128 =
                                                                &x17_8[sx.q(x25_1.d + x1_11.d)]
                                                            void* x3_26 = &x17_8[x1_11]
                                                            x1_11 += 0x20
                                                            v1_1 =
                                                                *(x9_128 + 0x10) + *(x9_127 + 0x10)
                                                            *x3_26 = *x9_128 + *x9_127
                                                            *(x3_26 + 0x10) = v1_1
                                                        while (x13_22 != x1_11)
                                                        
                                                        if (x13_22 != x10_12)
                                                            x3_25 = x13_22
                                                            x1_10 = x13_22
                                                            x2_15 = x13_22.d
                                                            
                                                            if ((x10_12 & 0x18) == 0)
                                                                goto label_ffd7a4
                                                            
                                                            goto label_ffd8c4
                                                    else
                                                        x3_25 = 0
                                                    label_ffd8c4:
                                                        
                                                        do
                                                            v0_1.q = *(x26 + x3_25)
                                                            v1_1.q =
                                                                *(x17_8 + sx.q(x25_1.d + x3_25.d))
                                                            *(x17_8 + x3_25) = (v1_1 + v0_1).q
                                                            x3_25 += 8
                                                        while (x15_22 != x3_25)
                                                        
                                                        x1_10 = x15_22
                                                        x2_15 = x15_22.d
                                                        
                                                        if (x15_22 != x10_12)
                                                            goto label_ffd7a4
                                                else
                                                    x1_10 = 0
                                                    x2_15 = 0
                                                label_ffd7a4:
                                                    int64_t x2_16 = x9_18 + sx.q(x2_15)
                                                    
                                                    do
                                                        char x3_20 = x17_8[x2_16]
                                                        x2_16 += 1
                                                        x17_8[x1_10] = x3_20 + x26[x1_10]
                                                        x1_10 += 1
                                                    while (x10_12 != x1_10)
                                                x17_8[x11_26] = 0xff
                                                x26 = &x26[x11_26]
                                                x17_8 = &x17_8[x21_2]
                                                i_38 = i_67
                                                i_67 -= 1
                                                x8_51 += 1
                                            while (i_38 != 1)
                        
                        if (arg7 != 0x10)
                            x13_1 = var_d0_1
                            x0_2 = var_a8_1
                            x14_40 = x14_1
                        label_ffe524:
                            x14_1 = x14_40 + 1
                            
                            if (x14_1 == x10_2)
                                if (arg7 s>= 8)
                                    if (arg7 == 0x10)
                                        break
                                    
                                    return 1
                                
                                if (arg6 == 0)
                                    return 1
                                
                                uint64_t x9_165 = zx.q(x9_12)
                                uint64_t x14_68 = zx.q(x13_1)
                                int32_t x2_22 = 0
                                int64_t x8_70 = 0
                                uint64_t x14_69 = x9_165 - x14_68
                                
                                while (true)
                                    uint64_t x0_27 = zx.q(x2_22)
                                    char x2_25
                                    
                                    if (arg8 == 0)
                                        x2_25 = *(&data_8686d8 + sx.q(arg7))
                                    else
                                        x2_25 = 1
                                    
                                    int64_t x3_32 = arg1[3]
                                    char* x4_20 = x3_32 + zx.q(x15_1 * x8_70.d)
                                    char* x5_16 = &x4_20[x9_165 + neg.q(x14_68)]
                                    
                                    if (arg7 == 4)
                                        int32_t x6_19 = x11_1
                                        
                                        if (x6_19 s>= 2)
                                            x6_19 = x11_1
                                            int64_t x4_22 = x3_32 + x14_69
                                            bool cond:99_1
                                            
                                            do
                                                char* x7_14 = x3_32 + x0_27
                                                cond:99_1 = x6_19 s> 3
                                                x6_19 -= 2
                                                *x7_14 = (*(x4_22 + x0_27) u>> 4) * x2_25
                                                char x5_43 = *(x4_22 + x0_27)
                                                x4_22 += 1
                                                x3_32 += 2
                                                x7_14[1] = (x5_43 & 0xf) * x2_25
                                            while (cond:99_1)
                                            x5_16 = x4_22 + x0_27
                                            x4_20 = x3_32 + x0_27
                                        
                                        if (x6_19 == 1)
                                            *x4_20 = (*x5_16 u>> 4) * x2_25
                                    else if (arg7 == 2)
                                        int32_t x6_20 = x11_1
                                        
                                        if (x6_20 s>= 4)
                                            x6_20 = x11_1
                                            int64_t x4_23 = x3_32 + x14_69
                                            bool cond:112_1
                                            
                                            do
                                                char* x7_15 = x3_32 + x0_27
                                                cond:112_1 = x6_20 s> 7
                                                x6_20 -= 4
                                                *x7_15 = (*(x4_23 + x0_27) u>> 6) * x2_25
                                                x3_32 += 4
                                                x7_15[1] = (*(x4_23 + x0_27) u>> 4 & 3) * x2_25
                                                x7_15[2] = (*(x4_23 + x0_27) u>> 2 & 3) * x2_25
                                                char x5_55 = *(x4_23 + x0_27)
                                                x4_23 += 1
                                                x7_15[3] = (x5_55 & 3) * x2_25
                                            while (cond:112_1)
                                            x5_16 = x4_23 + x0_27
                                            x4_20 = x3_32 + x0_27
                                        
                                        if (x6_20 s>= 1)
                                            *x4_20 = (*x5_16 u>> 6) * x2_25
                                            
                                            if (x6_20 != 1)
                                                x4_20[1] = (*x5_16 u>> 4 & 3) * x2_25
                                                
                                                if (x6_20 s>= 3)
                                                    x4_20[2] = (*x5_16 u>> 2 & 3) * x2_25
                                    else if (arg7 == 1)
                                        int32_t x6_18 = x11_1
                                        
                                        if (x6_18 s>= 8)
                                            x6_18 = x11_1
                                            int64_t x4_21 = x3_32 + x14_69
                                            bool cond:123_1
                                            
                                            do
                                                char* x7_13 = x3_32 + x0_27
                                                cond:123_1 = x6_18 s> 0xf
                                                x6_18 -= 8
                                                *x7_13 = x2_25 & (sx.d(*(x4_21 + x0_27)) u>> 7).b
                                                x3_32 += 8
                                                x7_13[1] = (*(x4_21 + x0_27) u>> 6 & 1) * x2_25
                                                x7_13[2] = (*(x4_21 + x0_27) u>> 5 & 1) * x2_25
                                                x7_13[3] = (*(x4_21 + x0_27) u>> 4 & 1) * x2_25
                                                x7_13[4] = (*(x4_21 + x0_27) u>> 3 & 1) * x2_25
                                                x7_13[5] = (*(x4_21 + x0_27) u>> 2 & 1) * x2_25
                                                x7_13[6] = (*(x4_21 + x0_27) u>> 1 & 1) * x2_25
                                                char x5_37 = *(x4_21 + x0_27)
                                                x4_21 += 1
                                                x7_13[7] = (x5_37 & 1) * x2_25
                                            while (cond:123_1)
                                            x5_16 = x4_21 + x0_27
                                            x4_20 = x3_32 + x0_27
                                        
                                        if (x6_18 s>= 1)
                                            *x4_20 = x2_25 & (sx.d(*x5_16) u>> 7).b
                                            
                                            if (x6_18 != 1)
                                                x4_20[1] = (*x5_16 u>> 6 & 1) * x2_25
                                                
                                                if (x6_18 s>= 3)
                                                    x4_20[2] = (*x5_16 u>> 5 & 1) * x2_25
                                                    
                                                    if (x6_18 != 3)
                                                        x4_20[3] = (*x5_16 u>> 4 & 1) * x2_25
                                                        
                                                        if (x6_18 s>= 5)
                                                            x4_20[4] = (*x5_16 u>> 3 & 1) * x2_25
                                                            
                                                            if (x6_18 != 5)
                                                                x4_20[5] = (*x5_16 u>> 2 & 1) * x2_25
                                                                
                                                                if (x6_18 s>= 7)
                                                                    x4_20[6] = (*x5_16 u>> 1 & 1) * x2_25
                                    
                                    if (x27.d != arg4)
                                        int64_t x2_29 = arg1[3]
                                        
                                        if (x27.d != 1)
                                            if (x27.d != 3)
                                                break
                                            
                                            if ((x11_3.d & 0x80000000) == 0)
                                                void* x2_30 =
                                                    x2_29 + (sx.q((arg5 << 2) - 4) | 1) + x0_27
                                                char* x3_64 = x2_29 + sx.q(x11_3.d) * 3 + 2 + x0_27
                                                uint32_t i_39 = arg5
                                                
                                                do
                                                    *(x2_30 + 2) = 0xff
                                                    i_39 -= 1
                                                    *(x2_30 + 1) = *x3_64
                                                    *x2_30 = x3_64[-1]
                                                    char x5_60 = x3_64[-2]
                                                    x3_64 -= 3
                                                    *(x2_30 - 1) = x5_60
                                                    x2_30 -= 4
                                                while (i_39 s> 0)
                                        else if ((x11_3.d & 0x80000000) == 0)
                                            char* x2_31 =
                                                x2_29 + (sx.q((arg5 << 1) - 2) | 1) + x0_27
                                            char* x3_67 = x2_29 + x11_3 + x0_27
                                            uint32_t i_40 = arg5
                                            
                                            do
                                                *x2_31 = 0xff
                                                char x5_61 = *x3_67
                                                x3_67 = &x3_67[-1]
                                                i_40 -= 1
                                                x2_31[-1] = x5_61
                                                x2_31 -= 2
                                            while (i_40 s> 0)
                                    
                                    x2_22 = x0_27.d + fp * arg5 * arg4
                                    x8_70 += 1
                                    
                                    if (x8_70 == x10_2)
                                        return 1
                                
                                goto label_ffea34
                        else
                            x13_1 = var_d0_1
                            x0_2 = var_a8_1
                            x14_40 = x14_1
                            
                            if (arg5 != 0)
                                char* x8_59 = arg1[3] + x1 + sx.q(lr_1.d + 1)
                                uint32_t i_45 = arg5
                                uint32_t i_41
                                
                                do
                                    *x8_59 = 0xff
                                    i_41 = i_45
                                    i_45 -= 1
                                    x8_59 = &x8_59[x21_2]
                                while (i_41 != 1)
                                goto label_ffe524
                            
                            x14_1 = x14_40 + 1
                            
                            if (x14_1 == x10_2)
                                break
                        
                        x12_1 = zx.d(*x26)
                        x1 = zx.q(x15_1 * x14_1.d)
                        x8_5 = arg1[3] + x1
                        
                        if (x12_1 u>= 5)
                            goto label_ffe554
                    
                    goto label_ffe574
                
            label_ffe554:
                result = 0
                data_2423720 = "invalid filter"
        else
            result = 0
            data_2423720 = "not enough pixels"

return result
