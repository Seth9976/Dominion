// 函数: sub_100bc78
// 地址: 0x100bc78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_a0 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t var_78 = arg6.q
int64_t var_70 = arg5.q
int64_t var_68 = arg4.q
int64_t var_98 = *(arg1 + 0x70)
int64_t var_208 = *(arg1 + 0x78)
void* x0_1
int64_t x1_1
int128_t v0
int128_t v1
x0_1, x1_1, v0, v1 = sub_100cec0(*(arg1 + 0x50), *(arg1 + 0x58), arg2)
uint32_t x8_3 = (x1_1 u>> 0x20).d
void* var_220 = x0_1
int64_t var_218 = x1_1
int64_t result

if (x1_1.d s< x8_3)
    uint64_t x11_1 = zx.q(arg2 + 1)
    int32_t x9_1 = x1_1.d
    int32_t x25_1 = 0
    int32_t x23_1 = 0
    int32_t i_1 = 0
    v14.d = 0f
    float var_154
    int32_t* var_230_1 = &var_154
    int32_t var_228_1 = 0
    int32_t var_224_1 = 1
    
    while (true)
        int64_t x11_2 = sx.q(x9_1)
        uint64_t x10_1 = x11_2 + 1
        var_218.d = x10_1.d
        uint32_t x26_1 = zx.d(*(x0_1 + x11_2))
        uint64_t x11_3 = zx.q(x26_1 - 1)
        
        if (x11_3.d u> 0xfe)
        label_100bea0:
            
            if (x26_1 u< 0x20)
                break
            
            if (x26_1 == 0xff)
                goto label_100beec
            
            goto label_100beb0
        
        int128_t var_200[0xa]
        int32_t var_160
        float var_15c
        float var_158
        int32_t* x0_8
        char* x0_23
        int64_t x1_8
        int32_t x2_4
        int32_t x8_10
        int64_t x8_25
        int64_t x9_19
        float v2_1
        float v3_1
        float v4_1
        float v5_1
        float v7_1
        
        switch (x11_3)
            case 0, 2, 0x11, 0x16
                int32_t i_2
                
                if (i_1 s< 0)
                    i_2 = i_1 + 1
                else
                    i_2 = i_1
                
                i_1 = 0
                x25_1 += i_2 s>> 1
            case 1, 8, 0xc, 0xe, 0xf, 0x10, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                    0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 
                    0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 
                    0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 
                    0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 
                    0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
                    0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 
                    0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x82, 
                    0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 
                    0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 
                    0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 
                    0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 
                    0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 
                    0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 
                    0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 
                    0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 
                    0xeb, 0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 
                    0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd
                goto label_100bea0
            case 3
                if (i_1 s< 1)
                    break
                
                v1.d = (&var_160)[zx.q(i_1 - 1)]
                v0.d = 0f
            label_100c214:
                v0, v1 = sub_100d098(arg3, v0.d, v1.d)
                var_224_1 = 0
                i_1 = 0
            case 4
                if (i_1 s< 2)
                    break
                
                int32_t* x9_11 = &var_160
                int64_t i = 1
                
                do
                    v0.q = *x9_11
                    v1.q = *(arg3 + 0x10)
                    int32_t x13_4 = *arg3
                    v0 = vadd_f32(v0, v1)
                    *(arg3 + 0x10) = v0.q
                    uint32_t temp0_1 = vcvts_s32_f32(v0.d)
                    v0.d = v0:4.d
                    uint32_t temp0_2 = vcvts_s32_f32(v0.d)
                    
                    if (x13_4 == 0)
                        uint16_t* x13_3 = *(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe
                        x13_3[6].b = 2
                        *x13_3 = temp0_1.w
                        x13_3[1] = temp0_2.w
                        *(x13_3 + 4) = 0
                        *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 8) = 0
                        *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 0xa) = 0
                    else
                        if (arg3[7] s>= temp0_1 && arg3[1] != 0)
                            if (arg3[9] s>= temp0_2 && arg3[1] != 0)
                                goto label_100c018
                            
                            goto label_100c024
                        
                        arg3[7] = temp0_1
                        
                        if (arg3[9] s>= temp0_2 && arg3[1] != 0)
                        label_100c018:
                            
                            if (arg3[6] s> temp0_1 || arg3[1] == 0)
                                goto label_100c04c
                            
                            goto label_100c040
                        
                    label_100c024:
                        arg3[9] = temp0_2
                        
                        if (arg3[6] s> temp0_1 || arg3[1] == 0)
                        label_100c04c:
                            arg3[6] = temp0_1
                            
                            if (arg3[8] s> temp0_2 || arg3[1] == 0)
                                arg3[8] = temp0_2
                        else
                        label_100c040:
                            
                            if (arg3[8] s> temp0_2 || arg3[1] == 0)
                                arg3[8] = temp0_2
                        
                        arg3[1] = 1
                    
                    i += 2
                    x9_11 = &x9_11[2]
                    arg3[0xc] += 1
                while (i u< zx.q(i_1))
                
                goto label_100c070
            case 5
                x8_10 = 0
                result = 0
                
                if (i_1 s< 1)
                    goto label_100cd8c
                
                if (0 s< i_1)
                    goto label_100cb8c
                
            label_100caa8:
                i_1 = 0
            case 6
                int32_t x8_11 = 0
                result = 0
                
                if (i_1 s< 1)
                    goto label_100cd8c
                
                if (0 s< i_1)
                    do
                        v0.d = (&var_160)[sx.q(x8_11)]
                        v1.d = arg3[4]
                        int32_t x11_33 = *arg3
                        v1.d = v1.d f+ v14.d
                        v0.d = v0.d f+ arg3[5]
                        uint32_t temp0_11 = vcvts_s32_f32(v1.d)
                        uint32_t temp0_12 = vcvts_s32_f32(v0.d)
                        arg3[4] = v1.d
                        arg3[5] = v0.d
                        
                        if (x11_33 == 0)
                            uint16_t* x11_41 = *(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe
                            x11_41[6].b = 2
                            *x11_41 = temp0_11.w
                            x11_41[1] = temp0_12.w
                            *(x11_41 + 4) = 0
                            *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 8) = 0
                            *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 0xa) = 0
                        else
                            if (arg3[7] s< temp0_11 || arg3[1] == 0)
                                arg3[7] = temp0_11
                            
                            if (arg3[9] s< temp0_12 || arg3[1] == 0)
                                arg3[9] = temp0_12
                            
                            if (arg3[6] s> temp0_11 || arg3[1] == 0)
                                arg3[6] = temp0_11
                            
                            if (arg3[8] s> temp0_12 || arg3[1] == 0)
                                arg3[8] = temp0_12
                            
                            arg3[1] = 1
                        
                        x8_10 = x8_11 + 1
                        arg3[0xc] += 1
                        
                        if (x8_10 s>= i_1)
                            break
                        
                    label_100cb8c:
                        v0.d = (&var_160)[sx.q(x8_10)]
                        v1.d = arg3[4]
                        int32_t x11_24 = *arg3
                        v0.d = v0.d f+ v1.d
                        v1.d = arg3[5] f+ v14.d
                        uint32_t temp0_9 = vcvts_s32_f32(v0.d)
                        uint32_t temp0_10 = vcvts_s32_f32(v1.d)
                        arg3[4] = v0.d
                        arg3[5] = v1.d
                        
                        if (x11_24 == 0)
                            uint16_t* x11_32 = *(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe
                            x11_32[6].b = 2
                            *x11_32 = temp0_9.w
                            x11_32[1] = temp0_10.w
                            *(x11_32 + 4) = 0
                            *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 8) = 0
                            *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 0xa) = 0
                        else
                            if (arg3[7] s< temp0_9 || arg3[1] == 0)
                                arg3[7] = temp0_9
                            
                            if (arg3[9] s< temp0_10 || arg3[1] == 0)
                                arg3[9] = temp0_10
                            
                            if (arg3[6] s> temp0_9 || arg3[1] == 0)
                                arg3[6] = temp0_9
                            
                            if (arg3[8] s> temp0_10 || arg3[1] == 0)
                                arg3[8] = temp0_10
                            
                            arg3[1] = 1
                        
                        x8_11 = x8_10 + 1
                        arg3[0xc] += 1
                    while (x8_11 s< i_1)
                
                goto label_100caa8
            case 7
                if (i_1 s< 6)
                    break
                
                int32_t* x22_2 = var_230_1
                int32_t x23_3 = 5
                
                do
                    v0.d = x22_2[-3]
                    v1.d = x22_2[-2]
                    v0, v1 = sub_100d2e4(arg3, v0.d, v1.d, x22_2[-1], *x22_2, x22_2[1], x22_2[2])
                    x23_3 += 6
                    x22_2 = &x22_2[6]
                while (x23_3 s< i_1)
                
                i_1 = 0
            case 9
                if (var_228_1 == 0)
                    int32_t x8_13 = *(arg1 + 0x9c)
                    
                    if (x8_13 != 0)
                        if ((x8_13 & 0x80000000) != 0)
                            x0_23, x1_8, x2_4 = __assert2(
                                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                            "ExternalCode/stb/stb_truetype.h", 
                                0x478, "void stbtt__buf_seek(stbtt__buf *, int)", 
                                "!(o > b->size || o < 0)")
                            return sub_100cec0(x0_23, x1_8, x2_4) __tailcall
                        
                        char* x9_12 = *(arg1 + 0x90)
                        uint32_t x10_4 = zx.d(*x9_12)
                        uint32_t x2_1
                        
                        if (x10_4 == 0)
                            if (arg2 s< 0xffffffff || x8_13 s<= arg2)
                                x0_23, x1_8, x2_4 = __assert2(
                                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                                "ExternalCode/stb/stb_truetype.h", 
                                    0x478, "void stbtt__buf_seek(stbtt__buf *, int)", 
                                    "!(o > b->size || o < 0)")
                                return sub_100cec0(x0_23, x1_8, x2_4) __tailcall
                            
                            if (x11_1.d s>= x8_13)
                                x2_1 = 0
                            else
                                x2_1 = zx.d(x9_12[x11_1])
                        else
                            int32_t x10_6
                            uint32_t x11_20
                            uint32_t x13_21
                            uint32_t x14_13
                            
                            if (x10_4 == 3)
                                uint32_t x11_14
                                
                                if (x8_13 s<= 1)
                                    x11_14 = 0
                                    x10_6 = 1
                                else
                                    x11_14 = zx.d(x9_12[1]) << 8
                                    x10_6 = 2
                                
                                uint32_t x12_15
                                
                                if (x10_6 s>= x8_13)
                                    x12_15 = 0
                                else
                                    x12_15 = zx.d(x9_12[zx.q(x10_6)])
                                    x10_6 += 1
                                
                                if (x10_6 s>= x8_13)
                                    x13_21 = 0
                                else
                                    uint32_t x13_20 = zx.d(x9_12[zx.q(x10_6)])
                                    x10_6 += 1
                                    x13_21 = x13_20 << 8
                                
                                if (x10_6 s>= x8_13)
                                    x14_13 = 0
                                else
                                    x14_13 = zx.d(x9_12[zx.q(x10_6)])
                                    x10_6 += 1
                                
                                x11_20 = x12_15 | x11_14
                            
                            if (x10_4 != 3 || x11_20 s<= 0)
                            label_100c92c:
                                x2_1 = -1
                            else
                                uint32_t x12_16 = x14_13 | x13_21
                                
                                while (true)
                                    if (x10_6 s< x8_13)
                                        x2_1 = zx.d(x9_12[sx.q(x10_6)])
                                        x10_6 += 1
                                        
                                        if (x10_6 s< x8_13)
                                            goto label_100c8f0
                                        
                                        goto label_100c8d0
                                    
                                    x2_1 = 0
                                    uint32_t x13_22
                                    uint32_t x14_14
                                    
                                    if (x10_6 s>= x8_13)
                                    label_100c8d0:
                                        x13_22 = 0
                                        
                                        if (x10_6 s< x8_13)
                                            x14_14 = zx.d(x9_12[sx.q(x10_6)])
                                            x10_6 += 1
                                        else
                                            x14_14 = 0
                                    else
                                    label_100c8f0:
                                        x13_22 = zx.d(x9_12[sx.q(x10_6)])
                                        x10_6 += 1
                                        
                                        if (x10_6 s>= x8_13)
                                            x14_14 = 0
                                        else
                                            x14_14 = zx.d(x9_12[sx.q(x10_6)])
                                            x10_6 += 1
                                    
                                    bool cond:32_1 = x12_16 s> arg2
                                    x12_16 = x13_22 << 8 | x14_14
                                    
                                    if (not(cond:32_1) && x12_16 s> arg2)
                                        break
                                    
                                    uint32_t temp6_1 = x11_20
                                    x11_20 -= 1
                                    
                                    if (temp6_1 == 1)
                                        goto label_100c92c
                        
                        int64_t x22_5 = *(arg1 + 0x40)
                        int64_t x23_6 = *(arg1 + 0x48)
                        void* x0_16
                        int64_t x1_3
                        x0_16, x1_3 = sub_100cec0(*(arg1 + 0x80), *(arg1 + 0x88), x2_1)
                        int64_t x0_18
                        int64_t x1_5
                        x0_18, x1_5, v0, v1, arg4, arg5, arg6, v11, v12 =
                            sub_100d6e0(x22_5, x23_6, x0_16)
                        var_98 = x0_18
                        var_208 = x1_5
                
                var_228_1 = 1
            label_100c998:
                int32_t i_4 = i_1
                i_1 -= 1
                
                if (i_4 s< 1)
                    break
                
                if (x23_1 s> 9)
                    break
                
                var_200[sx.q(x23_1)] = var_220.o
                void* x8_37
                
                if (x26_1 == 0xa)
                    x8_37 = &var_208
                else
                    x8_37 = arg1 + 0x68
                
                int64_t x9_29 = *x8_37
                v0.d = (&var_160)[zx.q(i_1)]
                void* x8_38
                
                if (x26_1 == 0xa)
                    x8_38 = &var_98
                else
                    x8_38 = arg1 + 0x60
                
                uint32_t x11_21 = (x9_29 u>> 0x20).d
                
                if ((x11_21 & 0x80000000) != 0)
                    x0_23, x1_8, x2_4 = __assert2(
                        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                        0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
                    return sub_100cec0(x0_23, x1_8, x2_4) __tailcall
                
                char* x0_19 = *x8_38
                uint32_t x8_40
                int32_t x10_22
                uint32_t x11_22
                
                if (x11_21 == 0)
                    x10_22 = 0
                    x8_40 = 0
                    
                    if (0 s< x11_21)
                        x11_22 = zx.d(x0_19[zx.q(x10_22)])
                        x10_22 += 1
                    else
                        x11_22 = 0
                else
                    x10_22 = 1
                    x8_40 = zx.d(*x0_19) << 8
                    
                    if (1 s>= x11_21)
                        x11_22 = 0
                    else
                        x11_22 = zx.d(x0_19[zx.q(x10_22)])
                        x10_22 += 1
                
                uint32_t x11_23 = x11_22 | x8_40
                int32_t x8_41
                
                x8_41 = x11_23 s> 0x4d7 ? 0x46b : 0x6b
                
                uint32_t temp0_8 = vcvts_s32_f32(v0.d)
                int32_t x8_42
                
                x8_42 = x11_23 s> 0x846b ? 0x8000 : x8_41
                
                int32_t x2_3 = x8_42 + temp0_8
                void* x8_43 = nullptr
                
                if (x8_42 + temp0_8 s< 0)
                    var_220 = nullptr
                    var_218 = 0
                    break
                
                int64_t x1_6 = 0
                
                if (x2_3 s< x11_23)
                    void* x0_20
                    x0_20, x1_6, v0, v1 =
                        sub_100cec0(x0_19, (x9_29 & 0xffffffff00000000) | zx.q(x10_22), x2_3)
                    x8_43 = x0_20
                
                var_220 = x8_43
                var_218 = x1_6
                
                if (x1_6 u>> 0x20 == 0)
                    break
                
                x23_1 += 1
                var_218.d = 0
            case 0xa
                int32_t temp0_3 = x23_1
                x23_1 -= 1
                
                if (temp0_3 s< 1)
                    break
                
                var_220.o = var_200[zx.q(x23_1)]
            case 0xb
                if (x10_1.d s>= x8_3)
                    break
                
                var_218.d = x9_1 + 2
                uint64_t x8_16 = zx.q(zx.d(*(x0_1 + x10_1)) - 0x22)
                
                if (x8_16.d u> 3)
                    break
                
                float var_150
                float var_14c
                int32_t var_148
                int32_t var_144
                int32_t var_140
                int32_t var_13c
                float var_138
                
                switch (x8_16)
                    case 0
                        if (i_1 s< 7)
                            break
                        
                        arg4.d = var_158
                        v0.d = var_160
                        arg5.d = var_150
                        arg6.d = var_14c
                        v11.d = var_148
                        v1.d = 0f
                        sub_100d2e4(arg3, v0.d, v1.d, var_15c, arg4.d, var_154, 0f)
                        v3_1 = fneg(arg4.d)
                        v1.d = 0f
                        v5_1 = 0f
                        x0_8 = arg3
                        v0 = arg5
                        v2_1 = arg6.d
                        v4_1 = v11.d
                    case 1
                        if (i_1 s< 0xd)
                            break
                        
                        v0.d = var_160
                        v1.d = var_15c
                        v2_1 = var_158
                        v3_1 = var_154
                        v4_1 = var_150
                        v5_1 = var_14c
                        arg4.d = var_148
                        arg5.d = var_144
                        arg6.d = var_140
                        v11.d = var_13c
                        v12.d = var_138
                        int32_t var_134
                        v13.d = var_134
                    label_100c7d4:
                        sub_100d2e4(arg3, v0.d, v1.d, v2_1, v3_1, v4_1, v5_1)
                        x0_8 = arg3
                        v0 = arg4
                        v1 = arg5
                        v2_1 = arg6.d
                        v3_1 = v11.d
                        v4_1 = v12.d
                        v5_1 = v13.d
                    case 2
                        if (i_1 s< 9)
                            break
                        
                        arg4.d = var_15c
                        arg5.d = var_154
                        v0.d = var_160
                        arg6.d = var_14c
                        v11.d = var_148
                        v12.d = var_144
                        v13.d = var_140
                        sub_100d2e4(arg3, v0.d, arg4.d, var_158, arg5.d, var_150, 0f)
                        v5_1 = fneg(arg4.d f+ arg5.d f+ v12.d)
                        v1.d = 0f
                        x0_8 = arg3
                        v0 = arg6
                        v2_1 = v11.d
                        v3_1 = v12.d
                        v4_1 = v13.d
                    case 3
                        if (i_1 s< 0xb)
                            break
                        
                        v0.d = var_160
                        v1.d = var_15c
                        v2_1 = var_158
                        v3_1 = var_154
                        v4_1 = var_150
                        v5_1 = var_14c
                        arg4.d = var_148
                        arg5.d = var_144
                        arg6.d = var_140
                        v11.d = var_13c
                        v7_1 = v0.d f+ v2_1 + v4_1 f+ arg4.d f+ arg6.d
                        float v16_1 = v1.d f+ v3_1 + v5_1 f+ arg5.d f+ v11.d
                        float v17_1 = fabs(v7_1)
                        float v18_1 = fabs(v16_1)
                        v17_1 - v18_1
                        
                        if (v17_1 > v18_1)
                            v12.d = var_138
                        else
                            v12.d = fneg(v7_1)
                        
                        if (v17_1 > v18_1)
                            v13.d = fneg(v16_1)
                        else
                            v13.d = var_138
                        
                        goto label_100c7d4
                
            label_100c7f4:
                v0, v1 = sub_100d2e4(x0_8, v0.d, v1.d, v2_1, v3_1, v4_1, v5_1)
                i_1 = 0
            case 0xd
                v1.d = arg3[3]
                v0.d = arg3[2]
                
                if (v0.d f!= arg3[4] || not(v1.d f== arg3[5]))
                    int32_t x10_35 = *arg3
                    uint32_t temp0_13 = vcvts_s32_f32(v0.d)
                    uint32_t temp0_14 = vcvts_s32_f32(v1.d)
                    
                    if (x10_35 == 0)
                        uint16_t* x10_43 = *(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe
                        x10_43[6].b = 2
                        *x10_43 = temp0_13.w
                        x10_43[1] = temp0_14.w
                        *(x10_43 + 4) = 0
                        *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 8) = 0
                        *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 0xa) = 0
                    else
                        if (arg3[7] s< temp0_13 || arg3[1] == 0)
                            arg3[7] = temp0_13
                        
                        if (arg3[9] s< temp0_14 || arg3[1] == 0)
                            arg3[9] = temp0_14
                        
                        if (arg3[6] s> temp0_13 || arg3[1] == 0)
                            arg3[6] = temp0_13
                        
                        if (arg3[8] s> temp0_14 || arg3[1] == 0)
                            arg3[8] = temp0_14
                        
                        arg3[1] = 1
                    
                    result = 1
                    arg3[0xc] += 1
                else
                    result = 1
                
                goto label_100cd8c
            case 0x12, 0x13
                if (var_224_1 != 0)
                    int32_t i_3
                    
                    if (i_1 s< 0)
                        i_3 = i_1 + 1
                    else
                        i_3 = i_1
                    
                    x25_1 += i_3 s>> 1
                
                int32_t x9_4
                
                if (x25_1 + 7 s< 0)
                    x9_4 = x25_1 + 0xe
                else
                    x9_4 = x25_1 + 7
                
                int32_t x9_5 = x10_1.d + (x9_4 s>> 3)
                
                if (x10_1.d + (x9_4 s>> 3) s< 0 || x8_3 s< x9_5)
                    x0_23, x1_8, x2_4 = __assert2(
                        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                        0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
                    return sub_100cec0(x0_23, x1_8, x2_4) __tailcall
                
                var_224_1 = 0
                i_1 = 0
                var_218.d = x9_5
            case 0x14
                if (i_1 s< 2)
                    break
                
                v0.d = (&var_160)[zx.q(i_1 - 2)]
                v1.d = (&var_160)[zx.q(i_1 - 1)]
                goto label_100c214
            case 0x15
                if (i_1 s< 1)
                    break
                
                v0.d = (&var_160)[zx.q(i_1 - 1)]
                v1.d = 0f
                goto label_100c214
            case 0x17
                if (i_1 s< 8)
                    break
                
                int32_t* x22_3 = var_230_1
                int64_t x23_4 = 0
                
                do
                    v0.d = x22_3[-3]
                    v1.d = x22_3[-2]
                    v0, v1 = sub_100d2e4(arg3, v0.d, v1.d, x22_3[-1], *x22_3, x22_3[1], x22_3[2])
                    x23_4 += 6
                    x22_3 = &x22_3[6]
                while (x23_4.d + 5 s< i_1 - 2)
                
                if (x23_4.d + 1 s>= i_1)
                    break
                
                v0.d = (&var_160)[zx.q(x23_4.d + 1)]
                v1.d = arg3[4]
                int32_t x10_8 = *arg3
                v0.d = v0.d f+ arg3[5]
                v1.d = (&var_160)[x23_4 & 0xfffffffe] f+ v1.d
                uint32_t temp0_4 = vcvts_s32_f32(v1.d)
                uint32_t temp0_5 = vcvts_s32_f32(v0.d)
                arg3[4] = v1.d
                arg3[5] = v0.d
                
                if (x10_8 == 0)
                    uint16_t* x10_19 = *(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe
                    x10_19[6].b = 2
                    *x10_19 = temp0_4.w
                    x10_19[1] = temp0_5.w
                    *(x10_19 + 4) = 0
                    *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 8) = 0
                    *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 0xa) = 0
                else
                    if (arg3[7] s< temp0_4 || arg3[1] == 0)
                        arg3[7] = temp0_4
                    
                    if (arg3[9] s< temp0_5 || arg3[1] == 0)
                        arg3[9] = temp0_5
                    
                    if (arg3[6] s> temp0_4 || arg3[1] == 0)
                        arg3[6] = temp0_4
                    
                    if (arg3[8] s> temp0_5 || arg3[1] == 0)
                        arg3[8] = temp0_5
                    
                    arg3[1] = 1
                
                i_1 = 0
                arg3[0xc] += 1
            case 0x18
                if (i_1 s< 8)
                    break
                
                int32_t* x8_24 = &var_160
                int64_t x11_15 = 5
                int64_t x12_13
                bool cond:31_1
                
                do
                    v0.q = *x8_24
                    v1.q = *(arg3 + 0x10)
                    int32_t x14_4 = *arg3
                    v0 = vadd_f32(v0, v1)
                    *(arg3 + 0x10) = v0.q
                    uint32_t temp0_6 = vcvts_s32_f32(v0.d)
                    v0.d = v0:4.d
                    uint32_t temp0_7 = vcvts_s32_f32(v0.d)
                    
                    if (x14_4 == 0)
                        uint16_t* x14_3 = *(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe
                        x14_3[6].b = 2
                        *x14_3 = temp0_6.w
                        x14_3[1] = temp0_7.w
                        *(x14_3 + 4) = 0
                        *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 8) = 0
                        *(*(arg3 + 0x28) + sx.q(arg3[0xc]) * 0xe + 0xa) = 0
                    else
                        if (arg3[7] s>= temp0_6 && arg3[1] != 0)
                            if (arg3[9] s>= temp0_7 && arg3[1] != 0)
                                goto label_100c444
                            
                            goto label_100c450
                        
                        arg3[7] = temp0_6
                        
                        if (arg3[9] s>= temp0_7 && arg3[1] != 0)
                        label_100c444:
                            
                            if (arg3[6] s> temp0_6 || arg3[1] == 0)
                                goto label_100c478
                            
                            goto label_100c46c
                        
                    label_100c450:
                        arg3[9] = temp0_7
                        
                        if (arg3[6] s> temp0_6 || arg3[1] == 0)
                        label_100c478:
                            arg3[6] = temp0_6
                            
                            if (arg3[8] s> temp0_7 || arg3[1] == 0)
                                arg3[8] = temp0_7
                        else
                        label_100c46c:
                            
                            if (arg3[8] s> temp0_7 || arg3[1] == 0)
                                arg3[8] = temp0_7
                        
                        arg3[1] = 1
                    
                    x12_13 = x11_15 + 2
                    cond:31_1 = x11_15 - 2 s>= sx.q(i_1 - 6)
                    arg3[0xc] += 1
                    x8_24 = &x8_24[2]
                    x11_15 = x12_13
                while (not(cond:31_1))
                
                if (x12_13.d s>= i_1)
                    break
                
                v0.d = *x8_24
                v2_1 = x8_24[2]
                v3_1 = x8_24[3]
                v1.d = (&var_160)[zx.q(((i_1 - 8) & 0xfffffffe) + 3)]
                v4_1 = x8_24[4]
                v5_1 = x8_24[5]
                x0_8 = arg3
                goto label_100c7f4
            case 0x19, 0x1a
                if (i_1 s< 4)
                    break
                
                v0.d = var_160
                int32_t temp2_1 = i_1 & 1
                int32_t x8_4
                
                x8_4 = temp2_1 != 0 ? 4 : 3
                
                if (temp2_1 == 0)
                    v1.d = v14.d
                else
                    v1.d = v0.d
                
                if (x8_4 s>= i_1)
                label_100c070:
                    i_1 = 0
                else
                    int32_t x9_6 = i_1 & 1
                    v7_1 = (&var_160)[zx.q(x9_6)]
                    int64_t x9_7
                    
                    x9_7 = x9_6 == 0 ? 4 : 8
                    
                    int64_t x10_2
                    
                    x10_2 = x9_6 == 0 ? 8 : 0xc
                    
                    v2_1 = *(&var_160 + x9_7)
                    v3_1 = *(&var_160 + x10_2)
                    float v6_1 = (&var_160)[zx.q(x8_4)]
                    int32_t x25_2
                    int32_t x26_2
                    
                    if (x26_1 != 0x1b)
                        v0, v1 = sub_100d2e4(arg3, v1.d, v7_1, v2_1, v3_1, 0f, v6_1)
                        int32_t temp4_1 = i_1 & 1
                        int32_t x9_26
                        
                        x9_26 = temp4_1 != 0 ? 8 : 7
                        
                        int64_t x10_17
                        
                        x10_17 = temp4_1 != 0 ? 5 : 4
                        
                        if (x9_26 s>= i_1)
                            i_1 = 0
                        else
                            x26_2 = x25_1
                            x25_2 = x23_1
                            int32_t x8_29 = x10_17.d + 7
                            float* x23_5 = &(&var_158)[x10_17]
                            int32_t x22_4
                            
                            do
                                v1.d = x23_5[-2]
                                v2_1 = x23_5[-1]
                                v3_1 = *x23_5
                                x23_5 = &x23_5[4]
                                v0.d = 0f
                                x22_4 = x8_29
                                v0, v1 = sub_100d2e4(arg3, v0.d, v1.d, v2_1, v3_1, 0f, 
                                    (&var_160)[zx.q(x9_26)])
                                x8_29 = x22_4 + 4
                                x9_26 = x22_4
                            while (x22_4 s< i_1)
                        label_100c608:
                            i_1 = 0
                            x23_1 = x25_2
                            x25_1 = x26_2
                    else
                        v0, v1 = sub_100d2e4(arg3, v7_1, v1.d, v2_1, v3_1, v6_1, 0f)
                        int32_t temp5_1 = i_1 & 1
                        int32_t x9_8
                        
                        x9_8 = temp5_1 != 0 ? 8 : 7
                        
                        int64_t x10_3
                        
                        x10_3 = temp5_1 != 0 ? 5 : 4
                        
                        if (x9_8 s< i_1)
                            x26_2 = x25_1
                            x25_2 = x23_1
                            int32_t x8_5 = x10_3.d + 7
                            void* x23_2 = &(&var_15c)[x10_3]
                            int32_t x22_1
                            
                            do
                                v0.d = *(x23_2 - 4)
                                v1.d = 0f
                                x22_1 = x8_5
                                v0, v1 = sub_100d2e4(arg3, v0.d, v1.d, *x23_2, *(x23_2 + 4), 
                                    (&var_160)[zx.q(x9_8)], 0f)
                                x8_5 = x22_1 + 4
                                x23_2 += 0x10
                                x9_8 = x22_1
                            while (x22_1 s< i_1)
                            goto label_100c608
                        
                        i_1 = 0
            case 0x1b
            label_100beb0:
                
                if ((x9_1 & 0x80000000) != 0 || x8_3 s< x9_1)
                    x0_23, x1_8, x2_4 = __assert2(
                        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                        0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
                    return sub_100cec0(x0_23, x1_8, x2_4) __tailcall
                
                var_218.d = x9_1
                int16_t x0_5
                x0_5, v0, v1, arg4, arg5, arg6, v11, v12 = sub_100d500(&var_220)
                v0.d = float.s(sx.d(x0_5))
                
                if (i_1 s> 0x2f)
                    break
                
                goto label_100c57c
            case 0x1c
                goto label_100c998
            case 0x1d
                result = 0
                
                if (i_1 s< 4)
                    goto label_100cd8c
                
                x9_19 = 0
                x8_25 = 3
                
                if (3 s< i_1)
                    goto label_100cad0
                
                goto label_100caa8
            case 0x1e
                result = 0
                
                if (i_1 s< 4)
                    goto label_100cd8c
                
                int64_t x9_20 = 0
                int64_t x8_26 = 3
                
                if (3 s< i_1)
                    do
                        v4_1 = 0f
                        
                        if (i_1 - x9_20.d == 5)
                            v4_1 = (&var_160)[x9_20 + 4]
                        
                        void* x9_33 = &(&var_160)[x9_20]
                        v0.d = *x9_33
                        v1.d = 0f
                        v0, v1 = sub_100d2e4(arg3, v0.d, v1.d, *(x9_33 + 4), *(x9_33 + 8), v4_1, 
                            (&var_160)[x8_26])
                        x9_19 = sx.q((x9_20 + 4).d)
                        x8_25 = x9_19 + 3
                        
                        if (x8_25.d s>= i_1)
                            break
                        
                    label_100cad0:
                        v5_1 = 0f
                        
                        if (i_1 - x9_19.d == 5)
                            v5_1 = (&var_160)[x9_19 + 4]
                        
                        void* x9_32 = &(&var_160)[x9_19]
                        v1.d = *x9_32
                        v0.d = 0f
                        v0, v1 = sub_100d2e4(arg3, v0.d, v1.d, *(x9_32 + 4), *(x9_32 + 8), 
                            (&var_160)[x8_25], v5_1)
                        x9_20 = sx.q((x9_19 + 4).d)
                        x8_26 = x9_20 + 3
                    while (x8_26.d s< i_1)
                
                goto label_100caa8
            case 0xfe
            label_100beec:
                char x11_6
                
                if (x10_1.d s< x8_3)
                    x11_6 = *(x0_1 + x10_1)
                    x10_1 = zx.q(x9_1 + 2)
                    
                    if (x10_1.d s< x8_3)
                        goto label_100c51c
                    
                    goto label_100bf04
                
                x11_6 = 0
                uint32_t x9_10
                
                if (x10_1.d s< x8_3)
                label_100c51c:
                    x9_10 = zx.d(*(x0_1 + sx.q(x10_1.d)))
                    x10_1 = zx.q(x10_1.d + 1)
                    
                    if (x10_1.d s>= x8_3)
                        goto label_100bf10
                    
                    goto label_100c52c
                
            label_100bf04:
                x9_10 = 0
                uint32_t x8_7
                uint32_t x12_2
                
                if (x10_1.d s< x8_3)
                label_100c52c:
                    x12_2 = zx.d(*(x0_1 + sx.q(x10_1.d)))
                    x10_1 = zx.q(x10_1.d + 1)
                    
                    if (x10_1.d s>= x8_3)
                        x8_7 = 0
                    else
                        x8_7 = zx.d(*(x0_1 + sx.q(x10_1.d)))
                        x10_1 = zx.q(x10_1.d + 1)
                else
                label_100bf10:
                    x12_2 = 0
                    
                    if (x10_1.d s< x8_3)
                        x8_7 = zx.d(*(x0_1 + sx.q(x10_1.d)))
                        x10_1 = zx.q(x10_1.d + 1)
                    else
                        x8_7 = 0
                
                v0.d =
                    float.s(((0xff00ffff & x9_10 << 8) | zx.d(x11_6) << 0x10 | x12_2) << 8 | x8_7)
                v1.d = float.s(0x37800000)
                var_218.d = x10_1.d
                v0.d = v0.d f* v1.d
                
                if (i_1 s> 0x2f)
                    break
                
            label_100c57c:
                (&var_160)[sx.q(i_1)] = v0.d
                i_1 += 1
        
        x9_1 = var_218.d
        x8_3 = var_218:4.d
        
        if (x9_1 s>= x8_3)
            break
        
        x0_1 = var_220

result = 0
label_100cd8c:
arg5.q = var_70
arg4.q = var_68
arg6.q = var_78
return result
