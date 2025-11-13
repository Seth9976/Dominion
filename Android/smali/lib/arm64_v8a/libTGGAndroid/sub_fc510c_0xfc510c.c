// 函数: sub_fc510c
// 地址: 0xfc510c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_80 = v10
int64_t var_68 = arg5.q
int64_t* x0
int128_t v0
x0, v0 = _spCalloc(1, 0x10, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0xf9)
v0.q = 0x1200000000
*x0 = 0x1200000000
x0[1] = _spCalloc(0x12, 8, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0xf9, v0)
char* x9 = *arg3
void* x8 = &x9[1]
*arg3 = x8
uint32_t x10 = zx.d(*x9)
uint32_t x11 = x10 & 0x7f

if ((x10 & 0x80) != 0)
    x8 = &x9[2]
    *arg3 = x8
    uint32_t x10_1 = zx.d(x9[1])
    x11 = (0xffffc07f & x11) | (0x7f & x10_1) << 7
    
    if ((x10_1 & 0x80) != 0)
        x8 = &x9[3]
        *arg3 = x8
        uint32_t x10_2 = zx.d(x9[2])
        x11 = (0xffe03fff & x11) | (0x7f & x10_2) << 0xe
        
        if ((x10_2 & 0x80) != 0)
            x8 = &x9[4]
            *arg3 = x8
            uint32_t x10_3 = zx.d(x9[3])
            x11 = (0xf01fffff & x11) | (0x7f & x10_3) << 0x15
            
            if ((x10_3 & 0x80) != 0)
                x8 = &x9[5]
                *arg3 = x8
                x11 = (0xfffffff & x11) | (0xf & zx.d(x9[4])) << 0x1c

void* const result
uint32_t var_78
int64_t v9

if (x11 s< 1)
    v9.d = 0f
label_fc5ab0:
    void* x9_44 = x8 + 1
    *arg3 = x9_44
    uint32_t x10_46 = zx.d(*x8)
    uint32_t x11_22 = x10_46 & 0x7f
    int64_t* x24_2
    
    if ((x10_46 & 0x80) != 0)
        x9_44 = x8 + 2
        *arg3 = x9_44
        uint32_t x10_47 = zx.d(*(x8 + 1))
        x24_2 = x0
        x11_22 = (0xffffc07f & x11_22) | (0x7f & x10_47) << 7
        
        if ((x10_47 & 0x80) != 0)
            x9_44 = x8 + 3
            *arg3 = x9_44
            uint32_t x10_48 = zx.d(*(x8 + 2))
            x11_22 = (0xffe03fff & x11_22) | (0x7f & x10_48) << 0xe
            
            if ((x10_48 & 0x80) != 0)
                x9_44 = x8 + 4
                *arg3 = x9_44
                uint32_t x10_49 = zx.d(*(x8 + 3))
                x11_22 = (0xf01fffff & x11_22) | (0x7f & x10_49) << 0x15
                
                if ((x10_49 & 0x80) != 0)
                    x9_44 = x8 + 5
                    *arg3 = x9_44
                    x11_22 = (0xfffffff & x11_22) | (0xf & zx.d(*(x8 + 4))) << 0x1c
    else
        x24_2 = x0
    
    if (x11_22 s>= 1)
        int32_t x20_2 = 0
        arg5.d = fconvert.s(1.75f)
        var_78 = x11_22
        
        do
            void* x10_50 = x9_44 + 1
            *arg3 = x10_50
            uint32_t x8_32 = zx.d(*x9_44)
            int32_t fp_1 = x8_32 & 0x7f
            
            if ((x8_32 & 0x80) != 0)
                x10_50 = x9_44 + 2
                *arg3 = x10_50
                uint32_t x8_33 = zx.d(*(x9_44 + 1))
                fp_1 = (0xffffc07f & fp_1) | (0x7f & x8_33) << 7
                
                if ((x8_33 & 0x80) != 0)
                    x10_50 = x9_44 + 3
                    *arg3 = x10_50
                    uint32_t x8_34 = zx.d(*(x9_44 + 2))
                    fp_1 = (0xffe03fff & fp_1) | (0x7f & x8_34) << 0xe
                    
                    if ((x8_34 & 0x80) != 0)
                        x10_50 = x9_44 + 4
                        *arg3 = x10_50
                        uint32_t x8_35 = zx.d(*(x9_44 + 3))
                        fp_1 = (0xf01fffff & fp_1) | (0x7f & x8_35) << 0x15
                        
                        if ((x8_35 & 0x80) != 0)
                            x10_50 = x9_44 + 5
                            *arg3 = x10_50
                            fp_1 = (0xfffffff & fp_1) | (0xf & zx.d(*(x9_44 + 4))) << 0x1c
            
            void* x8_37 = x10_50 + 1
            *arg3 = x8_37
            uint32_t x9_45 = zx.d(*x10_50)
            int32_t x24_3 = x9_45 & 0x7f
            
            if ((x9_45 & 0x80) != 0)
                x8_37 = x10_50 + 2
                *arg3 = x8_37
                uint32_t x9_46 = zx.d(*(x10_50 + 1))
                x24_3 = (0xffffc07f & x24_3) | (0x7f & x9_46) << 7
                
                if ((x9_46 & 0x80) != 0)
                    x8_37 = x10_50 + 3
                    *arg3 = x8_37
                    uint32_t x9_47 = zx.d(*(x10_50 + 2))
                    x24_3 = (0xffe03fff & x24_3) | (0x7f & x9_47) << 0xe
                    
                    if ((x9_47 & 0x80) != 0)
                        x8_37 = x10_50 + 4
                        *arg3 = x8_37
                        uint32_t x9_48 = zx.d(*(x10_50 + 3))
                        x24_3 = (0xf01fffff & x24_3) | (0x7f & x9_48) << 0x15
                        
                        if ((x9_48 & 0x80) != 0)
                            x8_37 = x10_50 + 5
                            *arg3 = x8_37
                            x24_3 = (0xfffffff & x24_3) | (0xf & zx.d(*(x10_50 + 4))) << 0x1c
            
            if (x24_3 s< 1)
                x24_2 = x0
            else
                int32_t x26_2 = 0
                int32_t x21_8 = 1
                
                while (true)
                    *arg3 = x8_37 + 1
                    uint32_t x9_51 = zx.d(*x8_37)
                    *arg3 = x8_37 + 2
                    uint32_t x10_52 = zx.d(*(x8_37 + 1))
                    int32_t x19_5 = x10_52 & 0x7f
                    
                    if ((x10_52 & 0x80) != 0)
                        *arg3 = x8_37 + 3
                        uint32_t x10_54 = zx.d(*(x8_37 + 2))
                        x19_5 = (0xffffc07f & x19_5) | (0x7f & x10_54) << 7
                        
                        if ((x10_54 & 0x80) != 0)
                            *arg3 = x8_37 + 4
                            uint32_t x10_56 = zx.d(*(x8_37 + 3))
                            x19_5 = (0xffe03fff & x19_5) | (0x7f & x10_56) << 0xe
                            
                            if ((x10_56 & 0x80) != 0)
                                *arg3 = x8_37 + 5
                                uint32_t x10_58 = zx.d(*(x8_37 + 4))
                                x19_5 = (0xf01fffff & x19_5) | (0x7f & x10_58) << 0x15
                                
                                if ((x10_58 & 0x80) != 0)
                                    *arg3 = x8_37 + 6
                                    x19_5 = (0xfffffff & x19_5) | (0xf & zx.d(*(x8_37 + 5))) << 0x1c
                    
                    if (x9_51 u> 3)
                        x24_2 = x0
                        
                        if (*x24_2 s>= 1)
                            int64_t i = 0
                            
                            do
                                spTimeline_dispose(*(x24_2[1] + (i << 3)))
                                i += 1
                            while (i s< sx.q(*x24_2))
                        
                        _spFree(x24_2[1])
                        _spFree(x24_2)
                        _spSkeletonBinary_setError(arg1, "Invalid timeline type for a bone: ", 
                            *(*(*(arg4 + 0x38) + (sx.q(fp_1) << 3)) + 8))
                        x11_22 = var_78
                        
                        if ((x21_8 & 1) == 0)
                            goto label_fc5b48
                        
                        goto label_fc62ac
                    
                    void* x0_33
                    int32_t x8_56
                    void* x21_9
                    int32_t x23_5
                    
                    switch (x9_51)
                        case 0
                            void* x0_26
                            int128_t v1_3
                            x0_26, v1_3 = spRotateTimeline_create(zx.q(x19_5))
                            x21_9 = x0_26
                            *(x0_26 + 0x28) = fp_1
                            
                            if (x19_5 s>= 1)
                                int32_t x25_2 = 0
                                
                                do
                                    char* x8_42 = *arg3
                                    *arg3 = &x8_42[1]
                                    uint32_t x9_61 = zx.d(*x8_42)
                                    *arg3 = &x8_42[2]
                                    char x10_68 = x8_42[1]
                                    *arg3 = &x8_42[3]
                                    uint32_t x11_30 = zx.d(x8_42[2])
                                    *arg3 = &x8_42[4]
                                    char x12_21 = x8_42[3]
                                    *arg3 = &x8_42[5]
                                    uint32_t x13_33 = zx.d(x8_42[4])
                                    *arg3 = &x8_42[6]
                                    char x10_69 = x8_42[5]
                                    *arg3 = &x8_42[7]
                                    uint32_t x11_31 = zx.d(x8_42[6])
                                    *arg3 = &x8_42[8]
                                    v1_3.d = float.s(zx.d(x8_42[7]) | (0xffffff & ((0xffff00ff
                                        & x13_33 << 0x10) | zx.d(x10_69) << 8 | x11_31)) << 8)
                                    int128_t v2_3
                                    int128_t v3_3
                                    v1_3, v2_3, v3_3 = spRotateTimeline_setFrame(x21_9, 
                                        zx.q(x25_2), 
                                        float.s(zx.d(x12_21) | (0xffffff & ((0xffff00ff
                                            & x9_61 << 0x10) | zx.d(x10_68) << 8 | x11_30)) << 8), 
                                        v1_3)
                                    
                                    if (x25_2 s< x19_5 - 1)
                                        char* x8_45 = *arg3
                                        *arg3 = &x8_45[1]
                                        uint32_t x9_69 = zx.d(*x8_45)
                                        
                                        if (x9_69 == 2)
                                            *arg3 = &x8_45[2]
                                            uint32_t x9_54 = zx.d(x8_45[1])
                                            *arg3 = &x8_45[3]
                                            char x10_62 = x8_45[2]
                                            *arg3 = &x8_45[4]
                                            uint32_t x11_24 = zx.d(x8_45[3])
                                            *arg3 = &x8_45[5]
                                            char x12_18 = x8_45[4]
                                            *arg3 = &x8_45[6]
                                            uint32_t x13_25 = zx.d(x8_45[5])
                                            *arg3 = &x8_45[7]
                                            char x10_63 = x8_45[6]
                                            *arg3 = &x8_45[8]
                                            uint32_t x11_25 = zx.d(x8_45[7])
                                            *arg3 = &x8_45[9]
                                            char x9_58 = x8_45[8]
                                            *arg3 = &x8_45[0xa]
                                            uint32_t x14_24 = zx.d(x8_45[9])
                                            *arg3 = &x8_45[0xb]
                                            char x10_64 = x8_45[0xa]
                                            *arg3 = &x8_45[0xc]
                                            uint32_t x13_28 = zx.d(x8_45[0xb])
                                            *arg3 = &x8_45[0xd]
                                            char x11_27 = x8_45[0xc]
                                            *arg3 = &x8_45[0xe]
                                            uint32_t x16_12 = zx.d(x8_45[0xd])
                                            *arg3 = &x8_45[0xf]
                                            char x10_65 = x8_45[0xe]
                                            *arg3 = &x8_45[0x10]
                                            uint32_t x14_27 = zx.d(x8_45[0xf])
                                            *arg3 = &x8_45[0x11]
                                            v1_3.d = float.s(zx.d(x9_58) | (0xffffff & ((0xffff00ff
                                                & x13_25 << 0x10) | zx.d(x10_63) << 8 | x11_25)) << 8)
                                            v2_3.d = float.s(zx.d(x11_27) | (0xffffff & ((0xffff00ff
                                                & x14_24 << 0x10) | zx.d(x10_64) << 8 | x13_28)) << 8)
                                            v3_3.d = float.s(zx.d(x8_45[0x10]) | (0xffffff & ((
                                                0xffff00ff & x16_12 << 0x10) | zx.d(x10_65) << 8
                                                | x14_27)) << 8)
                                            spCurveTimeline_setCurve(x21_9, zx.q(x25_2), 
                                                float.s(zx.d(x12_18) | (0xffffff & ((0xffff00ff
                                                    & x9_54 << 0x10) | zx.d(x10_62) << 8 | x11_24))
                                                    << 8), 
                                                v1_3, v2_3, v3_3)
                                        else if (x9_69 == 1)
                                            spCurveTimeline_setStepped(x21_9, zx.q(x25_2))
                                    
                                    x25_2 += 1
                                while (x19_5 != x25_2)
                            
                            int32_t* x23_7 = x0
                            int32_t x8_57 = *x23_7
                            int64_t x0_41
                            
                            if (x8_57 != x23_7[1])
                                x0_41 = *(x23_7 + 8)
                            else
                                int64_t x0_40 = *(x23_7 + 8)
                                uint32_t temp0_5 = vcvts_s32_f32(float.s(x8_57) f* arg5.d)
                                uint64_t x8_59
                                
                                if (temp0_5 s> 8)
                                    x8_59 = zx.q(temp0_5)
                                else
                                    x8_59 = 8
                                
                                x23_7[1] = x8_59.d
                                x0_41 = _spRealloc(x0_40, x8_59 << 3)
                                x8_57 = *x23_7
                                *(x23_7 + 8) = x0_41
                            
                            *x23_7 = x8_57 + 1
                            *(x0_41 + (sx.q(x8_57) << 3)) = x21_9
                            x8_56 = (x19_5 << 1) - 2
                        case 1
                            x21_9 = spTranslateTimeline_create(zx.q(x19_5))
                            v10.d = *arg1
                            x23_5 = x19_5 - 1
                            *(x21_9 + 0x28) = fp_1
                            
                            if (x19_5 s>= 1)
                            label_fc5f14:
                                int32_t x25_3 = 0
                                
                                do
                                    char* x8_49 = *arg3
                                    *arg3 = &x8_49[1]
                                    uint32_t x9_78 = zx.d(*x8_49)
                                    *arg3 = &x8_49[2]
                                    char x10_77 = x8_49[1]
                                    *arg3 = &x8_49[3]
                                    uint32_t x11_39 = zx.d(x8_49[2])
                                    *arg3 = &x8_49[4]
                                    char x12_27 = x8_49[3]
                                    *arg3 = &x8_49[5]
                                    uint32_t x13_43 = zx.d(x8_49[4])
                                    *arg3 = &x8_49[6]
                                    char x10_78 = x8_49[5]
                                    *arg3 = &x8_49[7]
                                    uint32_t x11_40 = zx.d(x8_49[6])
                                    *arg3 = &x8_49[8]
                                    char x9_82 = x8_49[7]
                                    *arg3 = &x8_49[9]
                                    uint32_t x12_29 = zx.d(x8_49[8])
                                    *arg3 = &x8_49[0xa]
                                    char x10_79 = x8_49[9]
                                    *arg3 = &x8_49[0xb]
                                    uint32_t x11_42 = zx.d(x8_49[0xa])
                                    *arg3 = &x8_49[0xc]
                                    spTranslateTimeline_setFrame(x21_9, zx.q(x25_3), 
                                        float.s(zx.d(x12_27) | (0xffffff & ((0xffff00ff
                                            & x9_78 << 0x10) | zx.d(x10_77) << 8 | x11_39)) << 8), 
                                        v10.d f* float.s(zx.d(x9_82) | (0xffffff & ((0xffff00ff
                                        & x13_43 << 0x10) | zx.d(x10_78) << 8 | x11_40)) << 8), 
                                        v10.d f* float.s(zx.d(x8_49[0xb]) | (0xffffff & ((0xffff00ff
                                            & x12_29 << 0x10) | zx.d(x10_79) << 8 | x11_42)) << 8))
                                    
                                    if (x25_3 s< x23_5)
                                        char* x8_52 = *arg3
                                        *arg3 = &x8_52[1]
                                        uint32_t x9_88 = zx.d(*x8_52)
                                        
                                        if (x9_88 == 2)
                                            *arg3 = &x8_52[2]
                                            uint32_t x9_71 = zx.d(x8_52[1])
                                            *arg3 = &x8_52[3]
                                            char x10_71 = x8_52[2]
                                            *arg3 = &x8_52[4]
                                            uint32_t x11_33 = zx.d(x8_52[3])
                                            *arg3 = &x8_52[5]
                                            char x12_24 = x8_52[4]
                                            *arg3 = &x8_52[6]
                                            uint32_t x13_35 = zx.d(x8_52[5])
                                            *arg3 = &x8_52[7]
                                            char x10_72 = x8_52[6]
                                            *arg3 = &x8_52[8]
                                            uint32_t x11_34 = zx.d(x8_52[7])
                                            *arg3 = &x8_52[9]
                                            char x9_75 = x8_52[8]
                                            *arg3 = &x8_52[0xa]
                                            uint32_t x14_33 = zx.d(x8_52[9])
                                            *arg3 = &x8_52[0xb]
                                            char x10_73 = x8_52[0xa]
                                            *arg3 = &x8_52[0xc]
                                            uint32_t x13_38 = zx.d(x8_52[0xb])
                                            *arg3 = &x8_52[0xd]
                                            char x11_36 = x8_52[0xc]
                                            *arg3 = &x8_52[0xe]
                                            uint32_t x16_16 = zx.d(x8_52[0xd])
                                            *arg3 = &x8_52[0xf]
                                            char x10_74 = x8_52[0xe]
                                            *arg3 = &x8_52[0x10]
                                            uint32_t x14_36 = zx.d(x8_52[0xf])
                                            *arg3 = &x8_52[0x11]
                                            int128_t v3_4
                                            v3_4.d = float.s(zx.d(x8_52[0x10]) | (0xffffff & ((
                                                0xffff00ff & x16_16 << 0x10) | zx.d(x10_74) << 8
                                                | x14_36)) << 8)
                                            spCurveTimeline_setCurve(x21_9, zx.q(x25_3), 
                                                float.s(zx.d(x12_24) | (0xffffff & ((0xffff00ff
                                                    & x9_71 << 0x10) | zx.d(x10_71) << 8 | x11_33))
                                                    << 8), 
                                                float.s(zx.d(x9_75) | (0xffffff & ((0xffff00ff
                                                & x13_35 << 0x10) | zx.d(x10_72) << 8 | x11_34))
                                                << 8), 
                                                float.s(zx.d(x11_36) | (0xffffff & ((0xffff00ff
                                                    & x14_33 << 0x10) | zx.d(x10_73) << 8 | x13_38))
                                                    << 8), 
                                                v3_4)
                                        else if (x9_88 == 1)
                                            spCurveTimeline_setStepped(x21_9, zx.q(x25_3))
                                    
                                    x25_3 += 1
                                while (x19_5 != x25_3)
                                
                                goto label_fc6164
                            
                        label_fc6164:
                            int32_t x8_53 = *x0
                            int64_t x0_39
                            
                            if (x8_53 != *(x0 + 4))
                                x0_39 = x0[1]
                            else
                                int64_t x0_38 = x0[1]
                                uint32_t temp0_4 = vcvts_s32_f32(float.s(x8_53) f* arg5.d)
                                uint64_t x8_55
                                
                                if (temp0_4 s> 8)
                                    x8_55 = zx.q(temp0_4)
                                else
                                    x8_55 = 8
                                
                                *(x0 + 4) = x8_55.d
                                x0_39 = _spRealloc(x0_38, x8_55 << 3)
                                x8_53 = *x0
                                x0[1] = x0_39
                            
                            *x0 = x8_53 + 1
                            *(x0_39 + (sx.q(x8_53) << 3)) = x21_9
                            x8_56 = x19_5 * 3 - 3
                        case 2
                            x0_33 = spScaleTimeline_create(zx.q(x19_5))
                        label_fc5f00:
                            x21_9 = x0_33
                            v10.d = fconvert.s(1f)
                            x23_5 = x19_5 - 1
                            *(x21_9 + 0x28) = fp_1
                            
                            if (x19_5 s< 1)
                                goto label_fc6164
                            
                            goto label_fc5f14
                        case 3
                            x0_33 = spShearTimeline_create(zx.q(x19_5))
                            goto label_fc5f00
                    
                    x26_2 += 1
                    float v0_2 = *(*(x21_9 + 0x20) + (sx.q(x8_56) << 2))
                    
                    if (v9.d f> v0_2)
                        v9.d = v9.d
                    else
                        v9.d = v0_2
                    
                    if (x26_2 == x24_3)
                        x24_2 = x0
                        x11_22 = var_78
                        break
                    
                    x8_37 = *arg3
                    x21_8 = x26_2 s< x24_3 ? 1 : 0
            
        label_fc5b48:
            x9_44 = *arg3
            x20_2 += 1
        while (x20_2 != x11_22)
    
    void* x8_66 = x9_44 + 1
    *arg3 = x8_66
    uint32_t x10_82 = zx.d(*x9_44)
    int32_t x20_3 = x10_82 & 0x7f
    
    if ((x10_82 & 0x80) != 0)
        x8_66 = x9_44 + 2
        *arg3 = x8_66
        uint32_t x10_83 = zx.d(*(x9_44 + 1))
        x20_3 = (0xffffc07f & x20_3) | (0x7f & x10_83) << 7
        
        if ((x10_83 & 0x80) != 0)
            x8_66 = x9_44 + 3
            *arg3 = x8_66
            uint32_t x10_84 = zx.d(*(x9_44 + 2))
            x20_3 = (0xffe03fff & x20_3) | (0x7f & x10_84) << 0xe
            
            if ((x10_84 & 0x80) != 0)
                x8_66 = x9_44 + 4
                *arg3 = x8_66
                uint32_t x10_85 = zx.d(*(x9_44 + 3))
                x20_3 = (0xf01fffff & x20_3) | (0x7f & x10_85) << 0x15
                
                if ((x10_85 & 0x80) != 0)
                    x8_66 = x9_44 + 5
                    *arg3 = x8_66
                    x20_3 = (0xfffffff & x20_3) | (0xf & zx.d(*(x9_44 + 4))) << 0x1c
    
    if (x20_3 s>= 1)
        int32_t x25_4 = 0
        arg5.d = fconvert.s(1.75f)
        
        do
            void* x9_98 = x8_66 + 1
            *arg3 = x9_98
            uint32_t x10_86 = zx.d(*x8_66)
            int32_t x24_4 = x10_86 & 0x7f
            
            if ((x10_86 & 0x80) != 0)
                x9_98 = x8_66 + 2
                *arg3 = x9_98
                uint32_t x10_87 = zx.d(*(x8_66 + 1))
                x24_4 = (0xffffc07f & x24_4) | (0x7f & x10_87) << 7
                
                if ((x10_87 & 0x80) != 0)
                    x9_98 = x8_66 + 3
                    *arg3 = x9_98
                    uint32_t x10_88 = zx.d(*(x8_66 + 2))
                    x24_4 = (0xffe03fff & x24_4) | (0x7f & x10_88) << 0xe
                    
                    if ((x10_88 & 0x80) != 0)
                        x9_98 = x8_66 + 4
                        *arg3 = x9_98
                        uint32_t x10_89 = zx.d(*(x8_66 + 3))
                        x24_4 = (0xf01fffff & x24_4) | (0x7f & x10_89) << 0x15
                        
                        if ((x10_89 & 0x80) != 0)
                            x9_98 = x8_66 + 5
                            *arg3 = x9_98
                            x24_4 = (0xfffffff & x24_4) | (0xf & zx.d(*(x8_66 + 4))) << 0x1c
            
            *arg3 = x9_98 + 1
            uint32_t x8_73 = zx.d(*x9_98)
            int32_t x19_6 = x8_73 & 0x7f
            
            if ((x8_73 & 0x80) != 0)
                *arg3 = x9_98 + 2
                uint32_t x8_75 = zx.d(*(x9_98 + 1))
                x19_6 = (0xffffc07f & x19_6) | (0x7f & x8_75) << 7
                
                if ((x8_75 & 0x80) != 0)
                    *arg3 = x9_98 + 3
                    uint32_t x8_77 = zx.d(*(x9_98 + 2))
                    x19_6 = (0xffe03fff & x19_6) | (0x7f & x8_77) << 0xe
                    
                    if ((x8_77 & 0x80) != 0)
                        *arg3 = x9_98 + 4
                        uint32_t x8_79 = zx.d(*(x9_98 + 3))
                        x19_6 = (0xf01fffff & x19_6) | (0x7f & x8_79) << 0x15
                        
                        if ((x8_79 & 0x80) != 0)
                            *arg3 = x9_98 + 5
                            x19_6 = (0xfffffff & x19_6) | (0xf & zx.d(*(x9_98 + 4))) << 0x1c
            
            void* x0_49
            int128_t v1_5
            int128_t v2_5
            x0_49, v1_5, v2_5 = spIkConstraintTimeline_create(zx.q(x19_6))
            *(x0_49 + 0x28) = x24_4
            
            if (x19_6 s>= 1)
                int32_t x24_5 = 0
                
                do
                    char* x8_84 = *arg3
                    *arg3 = &x8_84[1]
                    uint32_t x9_107 = zx.d(*x8_84)
                    *arg3 = &x8_84[2]
                    char x10_97 = x8_84[1]
                    *arg3 = &x8_84[3]
                    uint32_t x11_50 = zx.d(x8_84[2])
                    *arg3 = &x8_84[4]
                    char x12_34 = x8_84[3]
                    *arg3 = &x8_84[5]
                    uint32_t x13_56 = zx.d(x8_84[4])
                    *arg3 = &x8_84[6]
                    char x10_98 = x8_84[5]
                    *arg3 = &x8_84[7]
                    uint32_t x11_51 = zx.d(x8_84[6])
                    *arg3 = &x8_84[8]
                    char x9_111 = x8_84[7]
                    *arg3 = &x8_84[9]
                    uint32_t x14_51 = zx.d(x8_84[8])
                    *arg3 = &x8_84[0xa]
                    char x10_99 = x8_84[9]
                    *arg3 = &x8_84[0xb]
                    uint32_t x13_59 = zx.d(x8_84[0xa])
                    *arg3 = &x8_84[0xc]
                    char x11_53 = x8_84[0xb]
                    *arg3 = &x8_84[0xd]
                    uint64_t x2_3 = zx.q(sx.d(x8_84[0xc]))
                    *arg3 = &x8_84[0xe]
                    uint32_t x10_100 = zx.d(x8_84[0xd])
                    *arg3 = &x8_84[0xf]
                    v1_5.d = float.s(zx.d(x9_111)
                        | (0xffffff & ((0xffff00ff & x13_56 << 0x10) | zx.d(x10_98) << 8 | x11_51))
                        << 8)
                    v2_5.d = float.s(zx.d(x11_53)
                        | (0xffffff & ((0xffff00ff & x14_51 << 0x10) | zx.d(x10_99) << 8 | x13_59))
                        << 8)
                    int128_t v3_5
                    v1_5, v2_5, v3_5 = spIkConstraintTimeline_setFrame(x0_49, zx.q(x24_5), x2_3, 
                        zx.q(x10_100 != 0 ? 1 : 0), zx.q(zx.d(x8_84[0xe]) != 0 ? 1 : 0), 
                        float.s(zx.d(x12_34) | (0xffffff
                            & ((0xffff00ff & x9_107 << 0x10) | zx.d(x10_97) << 8 | x11_50)) << 8), 
                        v1_5, v2_5)
                    
                    if (x24_5 s< x19_6 - 1)
                        char* x8_86 = *arg3
                        *arg3 = &x8_86[1]
                        uint32_t x9_114 = zx.d(*x8_86)
                        
                        if (x9_114 == 2)
                            *arg3 = &x8_86[2]
                            uint32_t x9_100 = zx.d(x8_86[1])
                            *arg3 = &x8_86[3]
                            char x10_91 = x8_86[2]
                            *arg3 = &x8_86[4]
                            uint32_t x11_44 = zx.d(x8_86[3])
                            *arg3 = &x8_86[5]
                            char x12_31 = x8_86[4]
                            *arg3 = &x8_86[6]
                            uint32_t x13_48 = zx.d(x8_86[5])
                            *arg3 = &x8_86[7]
                            char x10_92 = x8_86[6]
                            *arg3 = &x8_86[8]
                            uint32_t x11_45 = zx.d(x8_86[7])
                            *arg3 = &x8_86[9]
                            char x9_104 = x8_86[8]
                            *arg3 = &x8_86[0xa]
                            uint32_t x14_45 = zx.d(x8_86[9])
                            *arg3 = &x8_86[0xb]
                            char x10_93 = x8_86[0xa]
                            *arg3 = &x8_86[0xc]
                            uint32_t x13_51 = zx.d(x8_86[0xb])
                            *arg3 = &x8_86[0xd]
                            char x11_47 = x8_86[0xc]
                            *arg3 = &x8_86[0xe]
                            uint32_t x16_20 = zx.d(x8_86[0xd])
                            *arg3 = &x8_86[0xf]
                            char x10_94 = x8_86[0xe]
                            *arg3 = &x8_86[0x10]
                            uint32_t x14_48 = zx.d(x8_86[0xf])
                            *arg3 = &x8_86[0x11]
                            v1_5.d = float.s(zx.d(x9_104) | (0xffffff
                                & ((0xffff00ff & x13_48 << 0x10) | zx.d(x10_92) << 8 | x11_45)) << 8)
                            v2_5.d = float.s(zx.d(x11_47) | (0xffffff
                                & ((0xffff00ff & x14_45 << 0x10) | zx.d(x10_93) << 8 | x13_51)) << 8)
                            v3_5.d = float.s(zx.d(x8_86[0x10]) | (0xffffff
                                & ((0xffff00ff & x16_20 << 0x10) | zx.d(x10_94) << 8 | x14_48)) << 8)
                            v1_5, v2_5 = spCurveTimeline_setCurve(x0_49, zx.q(x24_5), 
                                float.s(zx.d(x12_31) | (0xffffff
                                    & ((0xffff00ff & x9_100 << 0x10) | zx.d(x10_91) << 8 | x11_44))
                                    << 8), 
                                v1_5, v2_5, v3_5)
                        else if (x9_114 == 1)
                            v1_5, v2_5 = spCurveTimeline_setStepped(x0_49, zx.q(x24_5))
                    
                    x24_5 += 1
                while (x19_6 != x24_5)
            
            x24_2 = x0
            int32_t x8_69 = *x24_2
            int64_t x0_47
            
            if (x8_69 == *(x24_2 + 4))
                int64_t x0_46 = x24_2[1]
                uint32_t temp0_6 = vcvts_s32_f32(float.s(x8_69) f* arg5.d)
                uint64_t x8_68
                
                if (temp0_6 s> 8)
                    x8_68 = zx.q(temp0_6)
                else
                    x8_68 = 8
                
                *(x24_2 + 4) = x8_68.d
                x0_47 = _spRealloc(x0_46, x8_68 << 3)
                x8_69 = *x24_2
                x24_2[1] = x0_47
            else
                x0_47 = x24_2[1]
            
            *x24_2 = x8_69 + 1
            *(x0_47 + (sx.q(x8_69) << 3)) = x0_49
            x25_4 += 1
            float v0_3 = *(*(x0_49 + 0x20) + (sx.q(x19_6 * 6 - 6) << 2))
            x8_66 = *arg3
            
            if (v9.d f> v0_3)
                v9.d = v9.d
            else
                v9.d = v0_3
        while (x25_4 != x20_3)
    
    void* x9_116 = x8_66 + 1
    *arg3 = x9_116
    uint32_t x10_101 = zx.d(*x8_66)
    int32_t x20_4 = x10_101 & 0x7f
    
    if ((x10_101 & 0x80) != 0)
        x9_116 = x8_66 + 2
        *arg3 = x9_116
        uint32_t x10_102 = zx.d(*(x8_66 + 1))
        x20_4 = (0xffffc07f & x20_4) | (0x7f & x10_102) << 7
        
        if ((x10_102 & 0x80) != 0)
            x9_116 = x8_66 + 3
            *arg3 = x9_116
            uint32_t x10_103 = zx.d(*(x8_66 + 2))
            x20_4 = (0xffe03fff & x20_4) | (0x7f & x10_103) << 0xe
            
            if ((x10_103 & 0x80) != 0)
                x9_116 = x8_66 + 4
                *arg3 = x9_116
                uint32_t x10_104 = zx.d(*(x8_66 + 3))
                x20_4 = (0xf01fffff & x20_4) | (0x7f & x10_104) << 0x15
                
                if ((x10_104 & 0x80) != 0)
                    x9_116 = x8_66 + 5
                    *arg3 = x9_116
                    x20_4 = (0xfffffff & x20_4) | (0xf & zx.d(*(x8_66 + 4))) << 0x1c
    
    if (x20_4 s>= 1)
        int32_t x25_5 = 0
        arg5.d = fconvert.s(1.75f)
        
        do
            void* x8_92 = x9_116 + 1
            *arg3 = x8_92
            uint32_t x10_105 = zx.d(*x9_116)
            int32_t x24_6 = x10_105 & 0x7f
            
            if ((x10_105 & 0x80) != 0)
                x8_92 = x9_116 + 2
                *arg3 = x8_92
                uint32_t x10_106 = zx.d(*(x9_116 + 1))
                x24_6 = (0xffffc07f & x24_6) | (0x7f & x10_106) << 7
                
                if ((x10_106 & 0x80) != 0)
                    x8_92 = x9_116 + 3
                    *arg3 = x8_92
                    uint32_t x10_107 = zx.d(*(x9_116 + 2))
                    x24_6 = (0xffe03fff & x24_6) | (0x7f & x10_107) << 0xe
                    
                    if ((x10_107 & 0x80) != 0)
                        x8_92 = x9_116 + 4
                        *arg3 = x8_92
                        uint32_t x10_108 = zx.d(*(x9_116 + 3))
                        x24_6 = (0xf01fffff & x24_6) | (0x7f & x10_108) << 0x15
                        
                        if ((x10_108 & 0x80) != 0)
                            x8_92 = x9_116 + 5
                            *arg3 = x8_92
                            x24_6 = (0xfffffff & x24_6) | (0xf & zx.d(*(x9_116 + 4))) << 0x1c
            
            *arg3 = x8_92 + 1
            uint32_t x9_122 = zx.d(*x8_92)
            int32_t x19_7 = x9_122 & 0x7f
            
            if ((x9_122 & 0x80) != 0)
                *arg3 = x8_92 + 2
                uint32_t x9_124 = zx.d(*(x8_92 + 1))
                x19_7 = (0xffffc07f & x19_7) | (0x7f & x9_124) << 7
                
                if ((x9_124 & 0x80) != 0)
                    *arg3 = x8_92 + 3
                    uint32_t x9_126 = zx.d(*(x8_92 + 2))
                    x19_7 = (0xffe03fff & x19_7) | (0x7f & x9_126) << 0xe
                    
                    if ((x9_126 & 0x80) != 0)
                        *arg3 = x8_92 + 4
                        uint32_t x9_128 = zx.d(*(x8_92 + 3))
                        x19_7 = (0xf01fffff & x19_7) | (0x7f & x9_128) << 0x15
                        
                        if ((x9_128 & 0x80) != 0)
                            *arg3 = x8_92 + 5
                            x19_7 = (0xfffffff & x19_7) | (0xf & zx.d(*(x8_92 + 4))) << 0x1c
            
            void* x0_56
            int128_t v1_6
            int128_t v2_6
            int128_t v3_6
            int128_t v4_3
            x0_56, v1_6, v2_6, v3_6, v4_3 = spTransformConstraintTimeline_create(zx.q(x19_7))
            *(x0_56 + 0x28) = x24_6
            
            if (x19_7 s>= 1)
                int32_t x24_7 = 0
                
                do
                    char* x8_96 = *arg3
                    *arg3 = &x8_96[1]
                    uint32_t x9_138 = zx.d(*x8_96)
                    *arg3 = &x8_96[2]
                    char x10_116 = x8_96[1]
                    *arg3 = &x8_96[3]
                    uint32_t x11_62 = zx.d(x8_96[2])
                    *arg3 = &x8_96[4]
                    char x12_40 = x8_96[3]
                    *arg3 = &x8_96[5]
                    uint32_t x13_70 = zx.d(x8_96[4])
                    *arg3 = &x8_96[6]
                    char x10_117 = x8_96[5]
                    *arg3 = &x8_96[7]
                    uint32_t x11_63 = zx.d(x8_96[6])
                    *arg3 = &x8_96[8]
                    char x9_142 = x8_96[7]
                    *arg3 = &x8_96[9]
                    uint32_t x17_2 = zx.d(x8_96[8])
                    *arg3 = &x8_96[0xa]
                    char x10_118 = x8_96[9]
                    *arg3 = &x8_96[0xb]
                    uint32_t x13_73 = zx.d(x8_96[0xa])
                    *arg3 = &x8_96[0xc]
                    char x11_65 = x8_96[0xb]
                    *arg3 = &x8_96[0xd]
                    uint32_t x14_63 = zx.d(x8_96[0xc])
                    *arg3 = &x8_96[0xe]
                    char x10_119 = x8_96[0xd]
                    *arg3 = &x8_96[0xf]
                    uint32_t x17_5 = zx.d(x8_96[0xe])
                    *arg3 = &x8_96[0x10]
                    char x13_75 = x8_96[0xf]
                    *arg3 = &x8_96[0x11]
                    uint32_t x16_32 = zx.d(x8_96[0x10])
                    *arg3 = &x8_96[0x12]
                    char x10_120 = x8_96[0x11]
                    *arg3 = &x8_96[0x13]
                    uint32_t x17_6 = zx.d(x8_96[0x12])
                    *arg3 = &x8_96[0x14]
                    v1_6.d = float.s(zx.d(x9_142) | (0xffffff
                        & ((0xffff00ff & x13_70 << 0x10) | zx.d(x10_117) << 8 | x11_63)) << 8)
                    v2_6.d = float.s(zx.d(x11_65)
                        | (0xffffff & ((0xffff00ff & x17_2 << 0x10) | zx.d(x10_118) << 8 | x13_73))
                        << 8)
                    v3_6.d = float.s(zx.d(x13_75)
                        | (0xffffff & ((0xffff00ff & x14_63 << 0x10) | zx.d(x10_119) << 8 | x17_5))
                        << 8)
                    v4_3.d = float.s(zx.d(x8_96[0x13])
                        | (0xffffff & ((0xffff00ff & x16_32 << 0x10) | zx.d(x10_120) << 8 | x17_6))
                        << 8)
                    v1_6, v2_6, v3_6, v4_3 = spTransformConstraintTimeline_setFrame(x0_56, 
                        zx.q(x24_7), 
                        float.s(zx.d(x12_40) | (0xffffff
                            & ((0xffff00ff & x9_138 << 0x10) | zx.d(x10_116) << 8 | x11_62)) << 8), 
                        v1_6, v2_6, v3_6, v4_3)
                    
                    if (x24_7 s< x19_7 - 1)
                        char* x8_99 = *arg3
                        *arg3 = &x8_99[1]
                        uint32_t x9_145 = zx.d(*x8_99)
                        
                        if (x9_145 == 2)
                            *arg3 = &x8_99[2]
                            uint32_t x9_131 = zx.d(x8_99[1])
                            *arg3 = &x8_99[3]
                            char x10_110 = x8_99[2]
                            *arg3 = &x8_99[4]
                            uint32_t x11_56 = zx.d(x8_99[3])
                            *arg3 = &x8_99[5]
                            char x12_37 = x8_99[4]
                            *arg3 = &x8_99[6]
                            uint32_t x13_62 = zx.d(x8_99[5])
                            *arg3 = &x8_99[7]
                            char x10_111 = x8_99[6]
                            *arg3 = &x8_99[8]
                            uint32_t x11_57 = zx.d(x8_99[7])
                            *arg3 = &x8_99[9]
                            char x9_135 = x8_99[8]
                            *arg3 = &x8_99[0xa]
                            uint32_t x14_56 = zx.d(x8_99[9])
                            *arg3 = &x8_99[0xb]
                            char x10_112 = x8_99[0xa]
                            *arg3 = &x8_99[0xc]
                            uint32_t x13_65 = zx.d(x8_99[0xb])
                            *arg3 = &x8_99[0xd]
                            char x11_59 = x8_99[0xc]
                            *arg3 = &x8_99[0xe]
                            uint32_t x16_27 = zx.d(x8_99[0xd])
                            *arg3 = &x8_99[0xf]
                            char x10_113 = x8_99[0xe]
                            *arg3 = &x8_99[0x10]
                            uint32_t x14_59 = zx.d(x8_99[0xf])
                            *arg3 = &x8_99[0x11]
                            v1_6.d = float.s(zx.d(x9_135) | (0xffffff
                                & ((0xffff00ff & x13_62 << 0x10) | zx.d(x10_111) << 8 | x11_57)) << 8)
                            v2_6.d = float.s(zx.d(x11_59) | (0xffffff
                                & ((0xffff00ff & x14_56 << 0x10) | zx.d(x10_112) << 8 | x13_65)) << 8)
                            v3_6.d = float.s(zx.d(x8_99[0x10]) | (0xffffff
                                & ((0xffff00ff & x16_27 << 0x10) | zx.d(x10_113) << 8 | x14_59)) << 8)
                            v1_6, v2_6, v3_6, v4_3 = spCurveTimeline_setCurve(x0_56, zx.q(x24_7), 
                                float.s(zx.d(x12_37) | (0xffffff &
                                    ((0xffff00ff & x9_131 << 0x10) | zx.d(x10_110) << 8 | x11_56))
                                    << 8), 
                                v1_6, v2_6, v3_6)
                        else if (x9_145 == 1)
                            v1_6, v2_6, v3_6, v4_3 = spCurveTimeline_setStepped(x0_56, zx.q(x24_7))
                    
                    x24_7 += 1
                while (x19_7 != x24_7)
            
            x24_2 = x0
            int32_t x8_90 = *x24_2
            int64_t x0_54
            
            if (x8_90 == *(x24_2 + 4))
                int64_t x0_53 = x24_2[1]
                uint32_t temp0_7 = vcvts_s32_f32(float.s(x8_90) f* arg5.d)
                uint64_t x8_89
                
                if (temp0_7 s> 8)
                    x8_89 = zx.q(temp0_7)
                else
                    x8_89 = 8
                
                *(x24_2 + 4) = x8_89.d
                x0_54 = _spRealloc(x0_53, x8_89 << 3)
                x8_90 = *x24_2
                x24_2[1] = x0_54
            else
                x0_54 = x24_2[1]
            
            *x24_2 = x8_90 + 1
            *(x0_54 + (sx.q(x8_90) << 3)) = x0_56
            x25_5 += 1
            float v0_4 = *(*(x0_56 + 0x20) + (sx.q(x19_7 * 5 - 5) << 2))
            x9_116 = *arg3
            
            if (v9.d f> v0_4)
                v9.d = v9.d
            else
                v9.d = v0_4
        while (x25_5 != x20_4)
    
    void* x10_122 = x9_116 + 1
    *arg3 = x10_122
    uint32_t x8_100 = zx.d(*x9_116)
    uint32_t x11_67 = x8_100 & 0x7f
    
    if ((x8_100 & 0x80) != 0)
        x10_122 = x9_116 + 2
        *arg3 = x10_122
        uint32_t x8_101 = zx.d(*(x9_116 + 1))
        x11_67 = (0xffffc07f & x11_67) | (0x7f & x8_101) << 7
        
        if ((x8_101 & 0x80) != 0)
            x10_122 = x9_116 + 3
            *arg3 = x10_122
            uint32_t x8_102 = zx.d(*(x9_116 + 2))
            x11_67 = (0xffe03fff & x11_67) | (0x7f & x8_102) << 0xe
            
            if ((x8_102 & 0x80) != 0)
                x10_122 = x9_116 + 4
                *arg3 = x10_122
                uint32_t x8_103 = zx.d(*(x9_116 + 3))
                x11_67 = (0xf01fffff & x11_67) | (0x7f & x8_103) << 0x15
                
                if ((x8_103 & 0x80) != 0)
                    x10_122 = x9_116 + 5
                    *arg3 = x10_122
                    x11_67 = (0xfffffff & x11_67) | (0xf & zx.d(*(x9_116 + 4))) << 0x1c
    
    if (x11_67 s>= 1)
        int32_t x20_5 = 0
        arg5.d = fconvert.s(1.75f)
        var_78 = x11_67
        
        do
            void* x9_147 = x10_122 + 1
            *arg3 = x9_147
            uint32_t x8_105 = zx.d(*x10_122)
            int32_t x27_2 = x8_105 & 0x7f
            
            if ((x8_105 & 0x80) != 0)
                x9_147 = x10_122 + 2
                *arg3 = x9_147
                uint32_t x8_106 = zx.d(*(x10_122 + 1))
                x27_2 = (0xffffc07f & x27_2) | (0x7f & x8_106) << 7
                
                if ((x8_106 & 0x80) != 0)
                    x9_147 = x10_122 + 3
                    *arg3 = x9_147
                    uint32_t x8_107 = zx.d(*(x10_122 + 2))
                    x27_2 = (0xffe03fff & x27_2) | (0x7f & x8_107) << 0xe
                    
                    if ((x8_107 & 0x80) != 0)
                        x9_147 = x10_122 + 4
                        *arg3 = x9_147
                        uint32_t x8_108 = zx.d(*(x10_122 + 3))
                        x27_2 = (0xf01fffff & x27_2) | (0x7f & x8_108) << 0x15
                        
                        if ((x8_108 & 0x80) != 0)
                            x9_147 = x10_122 + 5
                            *arg3 = x9_147
                            x27_2 = (0xfffffff & x27_2) | (0xf & zx.d(*(x10_122 + 4))) << 0x1c
            
            void* x8_111 = x9_147 + 1
            void* x28_1 = *(*(arg4 + 0xb0) + (sx.q(x27_2) << 3))
            *arg3 = x8_111
            uint32_t x10_124 = zx.d(*x9_147)
            int32_t fp_2 = x10_124 & 0x7f
            
            if ((x10_124 & 0x80) != 0)
                x8_111 = x9_147 + 2
                *arg3 = x8_111
                uint32_t x10_125 = zx.d(*(x9_147 + 1))
                fp_2 = (0xffffc07f & fp_2) | (0x7f & x10_125) << 7
                
                if ((x10_125 & 0x80) != 0)
                    x8_111 = x9_147 + 3
                    *arg3 = x8_111
                    uint32_t x10_126 = zx.d(*(x9_147 + 2))
                    fp_2 = (0xffe03fff & fp_2) | (0x7f & x10_126) << 0xe
                    
                    if ((x10_126 & 0x80) != 0)
                        x8_111 = x9_147 + 4
                        *arg3 = x8_111
                        uint32_t x10_127 = zx.d(*(x9_147 + 3))
                        fp_2 = (0xf01fffff & fp_2) | (0x7f & x10_127) << 0x15
                        
                        if ((x10_127 & 0x80) != 0)
                            x8_111 = x9_147 + 5
                            *arg3 = x8_111
                            fp_2 = (0xfffffff & fp_2) | (0xf & zx.d(*(x9_147 + 4))) << 0x1c
            
            if (fp_2 s>= 1)
                int32_t x25_6 = 0
                
                while (true)
                    *arg3 = x8_111 + 1
                    uint32_t x9_150 = zx.d(*x8_111)
                    *arg3 = x8_111 + 2
                    uint32_t x10_129 = zx.d(*(x8_111 + 1))
                    int32_t x19_8 = x10_129 & 0x7f
                    
                    if ((x10_129 & 0x80) != 0)
                        *arg3 = x8_111 + 3
                        uint32_t x10_131 = zx.d(*(x8_111 + 2))
                        x19_8 = (0xffffc07f & x19_8) | (0x7f & x10_131) << 7
                        
                        if ((x10_131 & 0x80) != 0)
                            *arg3 = x8_111 + 4
                            uint32_t x10_133 = zx.d(*(x8_111 + 3))
                            x19_8 = (0xffe03fff & x19_8) | (0x7f & x10_133) << 0xe
                            
                            if ((x10_133 & 0x80) != 0)
                                *arg3 = x8_111 + 5
                                uint32_t x10_135 = zx.d(*(x8_111 + 4))
                                x19_8 = (0xf01fffff & x19_8) | (0x7f & x10_135) << 0x15
                                
                                if ((x10_135 & 0x80) != 0)
                                    *arg3 = x8_111 + 6
                                    x19_8 =
                                        (0xfffffff & x19_8) | (0xf & zx.d(*(x8_111 + 5))) << 0x1c
                    
                    int64_t x8_131
                    int32_t x9_187
                    void* x21_12
                    
                    if (x9_150 == 0)
                        x21_12 = spPathConstraintPositionTimeline_create(zx.q(x19_8))
                        v10.d = fconvert.s(1f)
                        
                        if (*(x28_1 + 0x28) != 0)
                            goto label_fc6db8
                        
                    label_fc6db0:
                        v10.d = *arg1
                    label_fc6db8:
                        *(x21_12 + 0x28) = x27_2
                        
                        if (x19_8 s>= 1)
                            int32_t x24_8 = 0
                            
                            do
                                char* x8_118 = *arg3
                                *arg3 = &x8_118[1]
                                uint32_t x9_159 = zx.d(*x8_118)
                                *arg3 = &x8_118[2]
                                char x10_144 = x8_118[1]
                                *arg3 = &x8_118[3]
                                uint32_t x11_75 = zx.d(x8_118[2])
                                *arg3 = &x8_118[4]
                                char x12_46 = x8_118[3]
                                *arg3 = &x8_118[5]
                                uint32_t x13_86 = zx.d(x8_118[4])
                                *arg3 = &x8_118[6]
                                char x10_145 = x8_118[5]
                                *arg3 = &x8_118[7]
                                uint32_t x11_76 = zx.d(x8_118[6])
                                *arg3 = &x8_118[8]
                                int128_t v2_7
                                int128_t v3_7
                                v2_7, v3_7 = spPathConstraintPositionTimeline_setFrame(x21_12, 
                                    zx.q(x24_8), 
                                    float.s(zx.d(x12_46) | (0xffffff & ((0xffff00ff
                                        & x9_159 << 0x10) | zx.d(x10_144) << 8 | x11_75)) << 8), 
                                    v10.d f* float.s(zx.d(x8_118[7]) | (0xffffff &
                                    ((0xffff00ff & x13_86 << 0x10) | zx.d(x10_145) << 8 | x11_76))
                                    << 8))
                                
                                if (x24_8 s< x19_8 - 1)
                                    char* x8_121 = *arg3
                                    *arg3 = &x8_121[1]
                                    uint32_t x9_167 = zx.d(*x8_121)
                                    
                                    if (x9_167 == 2)
                                        *arg3 = &x8_121[2]
                                        uint32_t x9_152 = zx.d(x8_121[1])
                                        *arg3 = &x8_121[3]
                                        char x10_138 = x8_121[2]
                                        *arg3 = &x8_121[4]
                                        uint32_t x11_69 = zx.d(x8_121[3])
                                        *arg3 = &x8_121[5]
                                        char x12_43 = x8_121[4]
                                        *arg3 = &x8_121[6]
                                        uint32_t x13_78 = zx.d(x8_121[5])
                                        *arg3 = &x8_121[7]
                                        char x10_139 = x8_121[6]
                                        *arg3 = &x8_121[8]
                                        uint32_t x11_70 = zx.d(x8_121[7])
                                        *arg3 = &x8_121[9]
                                        char x9_156 = x8_121[8]
                                        *arg3 = &x8_121[0xa]
                                        uint32_t x14_71 = zx.d(x8_121[9])
                                        *arg3 = &x8_121[0xb]
                                        char x10_140 = x8_121[0xa]
                                        *arg3 = &x8_121[0xc]
                                        uint32_t x13_81 = zx.d(x8_121[0xb])
                                        *arg3 = &x8_121[0xd]
                                        char x11_72 = x8_121[0xc]
                                        *arg3 = &x8_121[0xe]
                                        uint32_t x16_36 = zx.d(x8_121[0xd])
                                        *arg3 = &x8_121[0xf]
                                        char x10_141 = x8_121[0xe]
                                        *arg3 = &x8_121[0x10]
                                        uint32_t x14_74 = zx.d(x8_121[0xf])
                                        *arg3 = &x8_121[0x11]
                                        v2_7.d = float.s(zx.d(x11_72) | (0xffffff & ((0xffff00ff
                                            & x14_71 << 0x10) | zx.d(x10_140) << 8 | x13_81)) << 8)
                                        v3_7.d = float.s(zx.d(x8_121[0x10]) | (0xffffff & ((
                                            0xffff00ff & x16_36 << 0x10) | zx.d(x10_141) << 8 | x14_74))
                                            << 8)
                                        spCurveTimeline_setCurve(x21_12, zx.q(x24_8), 
                                            float.s(zx.d(x12_43) | (0xffffff & ((0xffff00ff
                                                & x9_152 << 0x10) | zx.d(x10_138) << 8 | x11_69))
                                                << 8), 
                                            float.s(zx.d(x9_156) | (0xffffff & ((0xffff00ff
                                            & x13_78 << 0x10) | zx.d(x10_139) << 8 | x11_70))
                                            << 8), v2_7, v3_7)
                                    else if (x9_167 == 1)
                                        spCurveTimeline_setStepped(x21_12, zx.q(x24_8))
                                
                                x24_8 += 1
                            while (x19_8 != x24_8)
                        
                        x24_2 = x0
                        int32_t x8_122 = *x24_2
                        int64_t x0_68
                        
                        if (x8_122 != *(x24_2 + 4))
                            x0_68 = x24_2[1]
                        else
                            int64_t x0_67 = x24_2[1]
                            uint32_t temp0_8 = vcvts_s32_f32(float.s(x8_122) f* arg5.d)
                            uint64_t x8_124
                            
                            if (temp0_8 s> 8)
                                x8_124 = zx.q(temp0_8)
                            else
                                x8_124 = 8
                            
                            *(x24_2 + 4) = x8_124.d
                            x0_68 = _spRealloc(x0_67, x8_124 << 3)
                            x8_122 = *x24_2
                            x24_2[1] = x0_68
                        
                        *x24_2 = x8_122 + 1
                        *(x0_68 + (sx.q(x8_122) << 3)) = x21_12
                        x8_131 = *(x21_12 + 0x20)
                        x9_187 = (x19_8 << 1) - 2
                    label_fc72dc:
                        float v0_5 = *(x8_131 + (sx.q(x9_187) << 2))
                        
                        if (v9.d f> v0_5)
                            v9.d = v9.d
                        else
                            v9.d = v0_5
                    else
                        if (x9_150 == 2)
                            void* x0_70
                            int128_t v1_8
                            int128_t v2_8
                            x0_70, v1_8, v2_8 = spPathConstraintMixTimeline_create(zx.q(x19_8))
                            *(x0_70 + 0x28) = x27_2
                            
                            if (x19_8 s>= 1)
                                int32_t x24_9 = 0
                                
                                do
                                    char* x8_127 = *arg3
                                    *arg3 = &x8_127[1]
                                    uint32_t x9_177 = zx.d(*x8_127)
                                    *arg3 = &x8_127[2]
                                    char x10_153 = x8_127[1]
                                    *arg3 = &x8_127[3]
                                    uint32_t x11_84 = zx.d(x8_127[2])
                                    *arg3 = &x8_127[4]
                                    char x12_52 = x8_127[3]
                                    *arg3 = &x8_127[5]
                                    uint32_t x13_96 = zx.d(x8_127[4])
                                    *arg3 = &x8_127[6]
                                    char x10_154 = x8_127[5]
                                    *arg3 = &x8_127[7]
                                    uint32_t x11_85 = zx.d(x8_127[6])
                                    *arg3 = &x8_127[8]
                                    char x9_181 = x8_127[7]
                                    *arg3 = &x8_127[9]
                                    uint32_t x15_63 = zx.d(x8_127[8])
                                    *arg3 = &x8_127[0xa]
                                    char x10_155 = x8_127[9]
                                    *arg3 = &x8_127[0xb]
                                    uint32_t x13_99 = zx.d(x8_127[0xa])
                                    *arg3 = &x8_127[0xc]
                                    v1_8.d = float.s(zx.d(x9_181) | (0xffffff & ((0xffff00ff
                                        & x13_96 << 0x10) | zx.d(x10_154) << 8 | x11_85)) << 8)
                                    v2_8.d = float.s(zx.d(x8_127[0xb]) | (0xffffff & ((0xffff00ff
                                        & x15_63 << 0x10) | zx.d(x10_155) << 8 | x13_99)) << 8)
                                    int128_t v3_8
                                    v1_8, v2_8, v3_8 = spPathConstraintMixTimeline_setFrame(x0_70, 
                                        zx.q(x24_9), 
                                        float.s(zx.d(x12_52) | (0xffffff & ((0xffff00ff
                                            & x9_177 << 0x10) | zx.d(x10_153) << 8 | x11_84)) << 8), 
                                        v1_8, v2_8)
                                    
                                    if (x24_9 s< x19_8 - 1)
                                        char* x8_130 = *arg3
                                        *arg3 = &x8_130[1]
                                        uint32_t x9_184 = zx.d(*x8_130)
                                        
                                        if (x9_184 == 2)
                                            *arg3 = &x8_130[2]
                                            uint32_t x9_170 = zx.d(x8_130[1])
                                            *arg3 = &x8_130[3]
                                            char x10_147 = x8_130[2]
                                            *arg3 = &x8_130[4]
                                            uint32_t x11_78 = zx.d(x8_130[3])
                                            *arg3 = &x8_130[5]
                                            char x12_49 = x8_130[4]
                                            *arg3 = &x8_130[6]
                                            uint32_t x13_88 = zx.d(x8_130[5])
                                            *arg3 = &x8_130[7]
                                            char x10_148 = x8_130[6]
                                            *arg3 = &x8_130[8]
                                            uint32_t x11_79 = zx.d(x8_130[7])
                                            *arg3 = &x8_130[9]
                                            char x9_174 = x8_130[8]
                                            *arg3 = &x8_130[0xa]
                                            uint32_t x14_80 = zx.d(x8_130[9])
                                            *arg3 = &x8_130[0xb]
                                            char x10_149 = x8_130[0xa]
                                            *arg3 = &x8_130[0xc]
                                            uint32_t x13_91 = zx.d(x8_130[0xb])
                                            *arg3 = &x8_130[0xd]
                                            char x11_81 = x8_130[0xc]
                                            *arg3 = &x8_130[0xe]
                                            uint32_t x16_40 = zx.d(x8_130[0xd])
                                            *arg3 = &x8_130[0xf]
                                            char x10_150 = x8_130[0xe]
                                            *arg3 = &x8_130[0x10]
                                            uint32_t x14_83 = zx.d(x8_130[0xf])
                                            *arg3 = &x8_130[0x11]
                                            v1_8.d = float.s(zx.d(x9_174) | (0xffffff & ((0xffff00ff
                                                & x13_88 << 0x10) | zx.d(x10_148) << 8 | x11_79)) << 8)
                                            v2_8.d = float.s(zx.d(x11_81) | (0xffffff & ((0xffff00ff
                                                & x14_80 << 0x10) | zx.d(x10_149) << 8 | x13_91)) << 8)
                                            v3_8.d = float.s(zx.d(x8_130[0x10]) | (0xffffff & ((
                                                0xffff00ff & x16_40 << 0x10) | zx.d(x10_150) << 8
                                                | x14_83)) << 8)
                                            v1_8, v2_8 = spCurveTimeline_setCurve(x0_70, 
                                                zx.q(x24_9), 
                                                float.s(zx.d(x12_49) | (0xffffff & ((0xffff00ff
                                                    & x9_170 << 0x10) | zx.d(x10_147) << 8 | x11_78))
                                                    << 8), 
                                                v1_8, v2_8, v3_8)
                                        else if (x9_184 == 1)
                                            v1_8, v2_8 =
                                                spCurveTimeline_setStepped(x0_70, zx.q(x24_9))
                                    
                                    x24_9 += 1
                                while (x19_8 != x24_9)
                            
                            x24_2 = x0
                            int32_t x8_132 = *x24_2
                            int64_t x0_75
                            
                            if (x8_132 != *(x24_2 + 4))
                                x0_75 = x24_2[1]
                            else
                                int64_t x0_74 = x24_2[1]
                                uint32_t temp0_9 = vcvts_s32_f32(float.s(x8_132) f* arg5.d)
                                uint64_t x8_134
                                
                                if (temp0_9 s> 8)
                                    x8_134 = zx.q(temp0_9)
                                else
                                    x8_134 = 8
                                
                                *(x24_2 + 4) = x8_134.d
                                x0_75 = _spRealloc(x0_74, x8_134 << 3)
                                x8_132 = *x24_2
                                x24_2[1] = x0_75
                            
                            *x24_2 = x8_132 + 1
                            *(x0_75 + (sx.q(x8_132) << 3)) = x0_70
                            x8_131 = *(x0_70 + 0x20)
                            x9_187 = x19_8 * 3 - 3
                            goto label_fc72dc
                        
                        if (x9_150 == 1)
                            x21_12 = spPathConstraintSpacingTimeline_create(zx.q(x19_8))
                            
                            if (*(x28_1 + 0x2c) u<= 1)
                                goto label_fc6db0
                            
                            v10.d = fconvert.s(1f)
                            goto label_fc6db8
                    x25_6 += 1
                    
                    if (x25_6 == fp_2)
                        break
                    
                    x8_111 = *arg3
                
                x11_67 = var_78
            
            x10_122 = *arg3
            x20_5 += 1
        while (x20_5 != x11_67)
    
    void* x8_135 = x10_122 + 1
    *arg3 = x8_135
    uint32_t x9_191 = zx.d(*x10_122)
    int32_t x11_89 = x9_191 & 0x7f
    
    if ((x9_191 & 0x80) != 0)
        x8_135 = x10_122 + 2
        *arg3 = x8_135
        uint32_t x9_192 = zx.d(*(x10_122 + 1))
        x11_89 = (0xffffc07f & x11_89) | (0x7f & x9_192) << 7
        
        if ((x9_192 & 0x80) != 0)
            x8_135 = x10_122 + 3
            *arg3 = x8_135
            uint32_t x9_193 = zx.d(*(x10_122 + 2))
            x11_89 = (0xffe03fff & x11_89) | (0x7f & x9_193) << 0xe
            
            if ((x9_193 & 0x80) != 0)
                x8_135 = x10_122 + 4
                *arg3 = x8_135
                uint32_t x9_194 = zx.d(*(x10_122 + 3))
                x11_89 = (0xf01fffff & x11_89) | (0x7f & x9_194) << 0x15
                
                if ((x9_194 & 0x80) != 0)
                    x8_135 = x10_122 + 5
                    *arg3 = x8_135
                    x11_89 = (0xfffffff & x11_89) | (0xf & zx.d(*(x10_122 + 4))) << 0x1c
    
    if (x11_89 s>= 1)
        int32_t x13_100 = 0
        arg5.d = fconvert.s(1f)
        v10.d = fconvert.s(1.75f)
        
        do
            int32_t var_118_1 = x13_100
            int64_t x10_157 = *(arg4 + 0x58)
            void* x9_198 = x8_135 + 1
            *arg3 = x9_198
            uint32_t x12_54 = zx.d(*x8_135)
            int32_t x11_90 = x12_54 & 0x7f
            
            if ((x12_54 & 0x80) != 0)
                x9_198 = x8_135 + 2
                *arg3 = x9_198
                uint32_t x12_55 = zx.d(*(x8_135 + 1))
                x11_90 = (0xffffc07f & x11_90) | (0x7f & x12_55) << 7
                
                if ((x12_55 & 0x80) != 0)
                    x9_198 = x8_135 + 3
                    *arg3 = x9_198
                    uint32_t x12_56 = zx.d(*(x8_135 + 2))
                    x11_90 = (0xffe03fff & x11_90) | (0x7f & x12_56) << 0xe
                    
                    if ((x12_56 & 0x80) != 0)
                        x9_198 = x8_135 + 4
                        *arg3 = x9_198
                        uint32_t x12_57 = zx.d(*(x8_135 + 3))
                        x11_90 = (0xf01fffff & x11_90) | (0x7f & x12_57) << 0x15
                        
                        if ((x12_57 & 0x80) != 0)
                            x9_198 = x8_135 + 5
                            *arg3 = x9_198
                            x11_90 = (0xfffffff & x11_90) | (0xf & zx.d(*(x8_135 + 4))) << 0x1c
            
            int64_t x8_138 = *(x10_157 + (sx.q(x11_90) << 3))
            void* x8_139 = x9_198 + 1
            *arg3 = x8_139
            uint32_t x10_158 = zx.d(*x9_198)
            int32_t x20_6 = x10_158 & 0x7f
            
            if ((x10_158 & 0x80) != 0)
                x8_139 = x9_198 + 2
                *arg3 = x8_139
                uint32_t x10_159 = zx.d(*(x9_198 + 1))
                x20_6 = (0xffffc07f & x20_6) | (0x7f & x10_159) << 7
                
                if ((x10_159 & 0x80) != 0)
                    x8_139 = x9_198 + 3
                    *arg3 = x8_139
                    uint32_t x10_160 = zx.d(*(x9_198 + 2))
                    x20_6 = (0xffe03fff & x20_6) | (0x7f & x10_160) << 0xe
                    
                    if ((x10_160 & 0x80) != 0)
                        x8_139 = x9_198 + 4
                        *arg3 = x8_139
                        uint32_t x10_161 = zx.d(*(x9_198 + 3))
                        x20_6 = (0xf01fffff & x20_6) | (0x7f & x10_161) << 0x15
                        
                        if ((x10_161 & 0x80) != 0)
                            x8_139 = x9_198 + 5
                            *arg3 = x8_139
                            x20_6 = (0xfffffff & x20_6) | (0xf & zx.d(*(x9_198 + 4))) << 0x1c
            
            if (x20_6 s>= 1)
                int32_t var_120_1 = 1
                int32_t var_11c_1 = 0
                int32_t var_10c_1 = x20_6
                
                while (true)
                    void* x9_200 = x8_139 + 1
                    *arg3 = x9_200
                    uint32_t x10_162 = zx.d(*x8_139)
                    int32_t x21_14 = x10_162 & 0x7f
                    
                    if ((x10_162 & 0x80) != 0)
                        x9_200 = x8_139 + 2
                        *arg3 = x9_200
                        uint32_t x10_163 = zx.d(*(x8_139 + 1))
                        x21_14 = (0xffffc07f & x21_14) | (0x7f & x10_163) << 7
                        
                        if ((x10_163 & 0x80) != 0)
                            x9_200 = x8_139 + 3
                            *arg3 = x9_200
                            uint32_t x10_164 = zx.d(*(x8_139 + 2))
                            x21_14 = (0xffe03fff & x21_14) | (0x7f & x10_164) << 0xe
                            
                            if ((x10_164 & 0x80) != 0)
                                x9_200 = x8_139 + 4
                                *arg3 = x9_200
                                uint32_t x10_165 = zx.d(*(x8_139 + 3))
                                x21_14 = (0xf01fffff & x21_14) | (0x7f & x10_165) << 0x15
                                
                                if ((x10_165 & 0x80) != 0)
                                    x9_200 = x8_139 + 5
                                    *arg3 = x9_200
                                    x21_14 =
                                        (0xfffffff & x21_14) | (0xf & zx.d(*(x8_139 + 4))) << 0x1c
                    
                    void* x8_141 = x9_200 + 1
                    *arg3 = x8_141
                    uint32_t x10_166 = zx.d(*x9_200)
                    int32_t x23_12 = x10_166 & 0x7f
                    
                    if ((x10_166 & 0x80) != 0)
                        x8_141 = x9_200 + 2
                        *arg3 = x8_141
                        uint32_t x10_167 = zx.d(*(x9_200 + 1))
                        x23_12 = (0xffffc07f & x23_12) | (0x7f & x10_167) << 7
                        
                        if ((x10_167 & 0x80) != 0)
                            x8_141 = x9_200 + 3
                            *arg3 = x8_141
                            uint32_t x10_168 = zx.d(*(x9_200 + 2))
                            x23_12 = (0xffe03fff & x23_12) | (0x7f & x10_168) << 0xe
                            
                            if ((x10_168 & 0x80) != 0)
                                x8_141 = x9_200 + 4
                                *arg3 = x8_141
                                uint32_t x10_169 = zx.d(*(x9_200 + 3))
                                x23_12 = (0xf01fffff & x23_12) | (0x7f & x10_169) << 0x15
                                
                                if ((x10_169 & 0x80) != 0)
                                    x8_141 = x9_200 + 5
                                    *arg3 = x8_141
                                    x23_12 =
                                        (0xfffffff & x23_12) | (0xf & zx.d(*(x9_200 + 4))) << 0x1c
                    
                    if (x23_12 s>= 1)
                        int32_t x25_7 = 0
                        int32_t var_e4_1 = 1
                        int32_t var_108_1 = x23_12
                        int32_t var_104_1 = x21_14
                        
                        while (true)
                            *arg3 = x8_141 + 1
                            uint32_t x10_170 = zx.d(*x8_141)
                            int32_t x9_203 = x10_170 & 0x7f
                            
                            if ((x10_170 & 0x80) != 0)
                                *arg3 = x8_141 + 2
                                uint32_t x10_172 = zx.d(*(x8_141 + 1))
                                x9_203 = (0xffffc07f & x9_203) | (0x7f & x10_172) << 7
                                
                                if ((x10_172 & 0x80) != 0)
                                    *arg3 = x8_141 + 3
                                    uint32_t x10_174 = zx.d(*(x8_141 + 2))
                                    x9_203 = (0xffe03fff & x9_203) | (0x7f & x10_174) << 0xe
                                    
                                    if ((x10_174 & 0x80) != 0)
                                        *arg3 = x8_141 + 4
                                        uint32_t x10_176 = zx.d(*(x8_141 + 3))
                                        x9_203 = (0xf01fffff & x9_203) | (0x7f & x10_176) << 0x15
                                        
                                        if ((x10_176 & 0x80) != 0)
                                            *arg3 = x8_141 + 5
                                            x9_203 = (0xfffffff & x9_203)
                                                | (0xf & zx.d(*(x8_141 + 4))) << 0x1c
                            
                            int64_t x19_9
                            
                            if (x9_203 == 0)
                                x19_9 = 0
                            else
                                x19_9 = *(*(arg4 + 0x28) + (sx.q(x9_203 - 1) << 3))
                            
                            void* x0_77 = spSkin_getAttachment(x8_138, zx.q(x21_14), x19_9)
                            
                            if (x0_77 == 0)
                                if (*x24_2 s< 1)
                                    var_118_1 = 0
                                else
                                    int64_t i_1 = 0
                                    
                                    do
                                        spTimeline_dispose(*(x24_2[1] + (i_1 << 3)))
                                        i_1 += 1
                                    while (i_1 s< sx.q(*x24_2))
                                    
                                    var_118_1 = i_1.d
                                
                                _spFree(x24_2[1])
                                _spFree(x24_2)
                                _spSkeletonBinary_setError(arg1, "Attachment not found: ", x19_9)
                                
                                if (x0_77 == 0)
                                    break
                            else
                                int64_t x8_145 = *(x0_77 + 0x30)
                                uint64_t x9_205 = zx.q(*(x0_77 + 0x38))
                                uint64_t x25_8
                                
                                if (x8_145 == 0)
                                    x25_8 = x9_205
                                else
                                    x25_8 = zx.q((x9_205.d s/ 3) << 1)
                                
                                int64_t x0_79 = (x25_8 & 0xffffffff) << 0x20 s>> 0x1e
                                void* x0_80 = _spMalloc(x0_79, 
                                    "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x1f0)
                                char* x8_152 = *arg3
                                *arg3 = &x8_152[1]
                                uint32_t x9_208 = zx.d(*x8_152)
                                int32_t x27_3 = x9_208 & 0x7f
                                
                                if ((x9_208 & 0x80) != 0)
                                    *arg3 = &x8_152[2]
                                    uint32_t x9_210 = zx.d(x8_152[1])
                                    x27_3 = (0xffffc07f & x27_3) | (0x7f & x9_210) << 7
                                    
                                    if ((x9_210 & 0x80) != 0)
                                        *arg3 = &x8_152[3]
                                        uint32_t x9_212 = zx.d(x8_152[2])
                                        x27_3 = (0xffe03fff & x27_3) | (0x7f & x9_212) << 0xe
                                        
                                        if ((x9_212 & 0x80) != 0)
                                            *arg3 = &x8_152[4]
                                            uint32_t x9_214 = zx.d(x8_152[3])
                                            x27_3 = (0xf01fffff & x27_3) | (0x7f & x9_214) << 0x15
                                            
                                            if ((x9_214 & 0x80) != 0)
                                                *arg3 = &x8_152[5]
                                                x27_3 = (0xfffffff & x27_3)
                                                    | (0xf & zx.d(x8_152[4])) << 0x1c
                                
                                void* x0_82
                                float128 v0_6
                                x0_82, v0_6 = spDeformTimeline_create(zx.q(x27_3), zx.q(x25_8.d))
                                int32_t x8_154 = x27_3 - 1
                                *(x0_82 + 0x38) = x21_14
                                *(x0_82 + 0x40) = x0_77
                                
                                if (x27_3 s>= 1)
                                    uint64_t x8_155 = zx.q(x25_8.d)
                                    int64_t i_11 = x8_155 & 0xfffffff8
                                    int32_t x26_4 = 0
                                    
                                    do
                                        char* x9_224 = *arg3
                                        *arg3 = &x9_224[1]
                                        uint32_t x23_13 = zx.d(*x9_224)
                                        *arg3 = &x9_224[2]
                                        uint32_t x21_15 = zx.d(x9_224[1])
                                        *arg3 = &x9_224[3]
                                        void* x8_159 = &x9_224[5]
                                        uint32_t x20_7 = zx.d(x9_224[2])
                                        *arg3 = &x9_224[4]
                                        char x28_2 = x9_224[3]
                                        *arg3 = x8_159
                                        uint32_t x10_185 = zx.d(x9_224[4])
                                        int32_t fp_3 = x10_185 & 0x7f
                                        
                                        if ((x10_185 & 0x80) != 0)
                                            x8_159 = &x9_224[6]
                                            *arg3 = x8_159
                                            uint32_t x10_186 = zx.d(x9_224[5])
                                            fp_3 = (0xffffc07f & fp_3) | (0x7f & x10_186) << 7
                                            
                                            if ((x10_186 & 0x80) != 0)
                                                x8_159 = &x9_224[7]
                                                *arg3 = x8_159
                                                uint32_t x10_187 = zx.d(x9_224[6])
                                                fp_3 = (0xffe03fff & fp_3) | (0x7f & x10_187) << 0xe
                                                
                                                if ((x10_187 & 0x80) != 0)
                                                    x8_159 = &x9_224[8]
                                                    *arg3 = x8_159
                                                    uint32_t x10_188 = zx.d(x9_224[7])
                                                    fp_3 = (0xf01fffff & fp_3)
                                                        | (0x7f & x10_188) << 0x15
                                                    
                                                    if ((x10_188 & 0x80) != 0)
                                                        x8_159 = &x9_224[9]
                                                        *arg3 = x8_159
                                                        fp_3 = (0xfffffff & fp_3)
                                                            | (0xf & zx.d(x9_224[8])) << 0x1c
                                        
                                        void* x2_8
                                        
                                        if (fp_3 != 0)
                                            *arg3 = x8_159 + 1
                                            uint32_t x9_227 = zx.d(*x8_159)
                                            int32_t i_10 = x9_227 & 0x7f
                                            
                                            if ((x9_227 & 0x80) != 0)
                                                *arg3 = x8_159 + 2
                                                uint32_t x9_229 = zx.d(*(x8_159 + 1))
                                                i_10 = (0xffffc07f & i_10) | (0x7f & x9_229) << 7
                                                
                                                if ((x9_229 & 0x80) != 0)
                                                    *arg3 = x8_159 + 3
                                                    uint32_t x9_231 = zx.d(*(x8_159 + 2))
                                                    i_10 =
                                                        (0xffe03fff & i_10) | (0x7f & x9_231) << 0xe
                                                    
                                                    if ((x9_231 & 0x80) != 0)
                                                        *arg3 = x8_159 + 4
                                                        uint32_t x9_233 = zx.d(*(x8_159 + 3))
                                                        i_10 = (0xf01fffff & i_10)
                                                            | (0x7f & x9_233) << 0x15
                                                        
                                                        if ((x9_233 & 0x80) != 0)
                                                            *arg3 = x8_159 + 5
                                                            i_10 = (0xfffffff & i_10)
                                                                | (0xf & zx.d(*(x8_159 + 4))) << 0x1c
                                            
                                            int64_t i_2 = sx.q(i_10)
                                            memset(x0_80, 0, zx.q(i_10) << 0x20 s>> 0x1e)
                                            int32_t x8_161 = i_10 + fp_3
                                            
                                            if (*arg1 f!= arg5.d)
                                                if (fp_3 s>= 1)
                                                    do
                                                        char* x9_238 = *arg3
                                                        *arg3 = &x9_238[1]
                                                        uint32_t x10_195 = zx.d(*x9_238)
                                                        *arg3 = &x9_238[2]
                                                        char x11_101 = x9_238[1]
                                                        *arg3 = &x9_238[3]
                                                        uint32_t x12_65 = zx.d(x9_238[2])
                                                        *arg3 = &x9_238[4]
                                                        *(x0_80 + (i_2 << 2)) = *arg1 * float.s(
                                                            zx.d(x9_238[3]) | (0xffffff & ((
                                                            0xffff00ff & x10_195 << 0x10)
                                                            | zx.d(x11_101) << 8 | x12_65)) << 8)
                                                        i_2 += 1
                                                    while (i_2 s< sx.q(x8_161))
                                                    
                                                    i_10 = i_2.d
                                            else if (fp_3 s>= 1)
                                                do
                                                    char* x9_235 = *arg3
                                                    *arg3 = &x9_235[1]
                                                    uint32_t x10_190 = zx.d(*x9_235)
                                                    *arg3 = &x9_235[2]
                                                    char x11_99 = x9_235[1]
                                                    *arg3 = &x9_235[3]
                                                    uint32_t x12_63 = zx.d(x9_235[2])
                                                    *arg3 = &x9_235[4]
                                                    *(x0_80 + (i_2 << 2)) = zx.d(x9_235[3]) | (
                                                        0xffffff & ((0xffff00ff & x10_190 << 0x10)
                                                        | zx.d(x11_99) << 8 | x12_63)) << 8
                                                    i_2 += 1
                                                while (i_2 s< sx.q(x8_161))
                                                
                                                i_10 = i_2.d
                                            
                                            float128 v1_11
                                            float128 v2_10
                                            float128 v3_10
                                            v0_6, v1_11, v2_10, v3_10 = memset(
                                                x0_80 + (sx.q(i_10) << 2), 0, 
                                                zx.q(x25_8.d - i_10) << 0x20 s>> 0x1e)
                                            x2_8 = x0_80
                                            
                                            if (x8_145 == 0)
                                                if (x25_8.d s< 1)
                                                    x2_8 = x0_80
                                                else
                                                    void* x8_168 = *(x0_77 + 0x40)
                                                    int64_t i_13
                                                    
                                                    if (x25_8.d u< 8 || (
                                                            x0_80 u< x8_168 + (x8_155 << 2)
                                                            && x0_80 + (zx.q(x25_8.d) << 2)
                                                            u> x8_168))
                                                        i_13 = 0
                                                    label_fc7ae8:
                                                        int64_t x11_102 = i_13 << 2
                                                        int32_t* x9_244 = x0_80 + x11_102
                                                        int32_t* x8_169 = x8_168 + x11_102
                                                        int64_t i_7 = x8_155 - i_13
                                                        int64_t i_3
                                                        
                                                        do
                                                            v0_6.d = *x8_169
                                                            x8_169 = &x8_169[1]
                                                            v1_11.d = *x9_244
                                                            i_3 = i_7
                                                            i_7 -= 1
                                                            v0_6.d = v0_6.d f+ v1_11.d
                                                            *x9_244 = v0_6.d
                                                            x9_244 = &x9_244[1]
                                                        while (i_3 != 1)
                                                        x2_8 = x0_80
                                                    else
                                                        int64_t i_8 = i_11
                                                        void* x11_104 = x0_80 + 0x10
                                                        void* x9_247 = x8_168 + 0x10
                                                        int64_t i_4
                                                        
                                                        do
                                                            v0_6 = *(x9_247 - 0x10)
                                                            v1_11 = *x9_247
                                                            v3_10 = *x11_104
                                                            x9_247 += 0x20
                                                            i_4 = i_8
                                                            i_8 -= 8
                                                            v0_6 =
                                                                vaddq_f32(v0_6, *(x11_104 - 0x10))
                                                            v1_11 = vaddq_f32(v1_11, v3_10)
                                                            *(x11_104 - 0x10) = v0_6
                                                            *x11_104 = v1_11
                                                            x11_104 += 0x20
                                                        while (i_4 != 8)
                                                        i_13 = i_11
                                                        x2_8 = x0_80
                                                        
                                                        if (i_13 != x8_155)
                                                            goto label_fc7ae8
                                        else if (x8_145 == 0)
                                            x2_8 = *(x0_77 + 0x40)
                                        else
                                            memset(x0_80, 0, x0_79)
                                            x2_8 = x0_80
                                        
                                        v0_6.d = float.s(zx.d(x28_2) | (0xffffff & ((0xffff00ff
                                            & x23_13 << 0x10) | (0xff & x21_15) << 8 | x20_7)) << 8)
                                        int128_t v1_9
                                        int128_t v2_9
                                        int128_t v3_9
                                        v0_6, v1_9, v2_9, v3_9 = spDeformTimeline_setFrame(x0_82, 
                                            zx.q(x26_4), x2_8, v0_6)
                                        
                                        if (x26_4 s< x8_154)
                                            char* x8_175 = *arg3
                                            *arg3 = &x8_175[1]
                                            uint32_t x9_246 = zx.d(*x8_175)
                                            
                                            if (x9_246 == 2)
                                                *arg3 = &x8_175[2]
                                                uint32_t x9_218 = zx.d(x8_175[1])
                                                *arg3 = &x8_175[3]
                                                char x10_179 = x8_175[2]
                                                *arg3 = &x8_175[4]
                                                uint32_t x11_92 = zx.d(x8_175[3])
                                                *arg3 = &x8_175[5]
                                                char x12_59 = x8_175[4]
                                                *arg3 = &x8_175[6]
                                                uint32_t x13_103 = zx.d(x8_175[5])
                                                *arg3 = &x8_175[7]
                                                char x10_180 = x8_175[6]
                                                *arg3 = &x8_175[8]
                                                uint32_t x11_93 = zx.d(x8_175[7])
                                                *arg3 = &x8_175[9]
                                                char x9_222 = x8_175[8]
                                                *arg3 = &x8_175[0xa]
                                                uint32_t x14_91 = zx.d(x8_175[9])
                                                *arg3 = &x8_175[0xb]
                                                char x10_181 = x8_175[0xa]
                                                *arg3 = &x8_175[0xc]
                                                uint32_t x13_106 = zx.d(x8_175[0xb])
                                                *arg3 = &x8_175[0xd]
                                                char x11_95 = x8_175[0xc]
                                                *arg3 = &x8_175[0xe]
                                                uint32_t x16_44 = zx.d(x8_175[0xd])
                                                *arg3 = &x8_175[0xf]
                                                char x10_182 = x8_175[0xe]
                                                *arg3 = &x8_175[0x10]
                                                uint32_t x14_94 = zx.d(x8_175[0xf])
                                                *arg3 = &x8_175[0x11]
                                                v0_6.d = float.s(zx.d(x12_59) | (0xffffff & ((
                                                    0xffff00ff & x9_218 << 0x10) | zx.d(x10_179) << 8
                                                    | x11_92)) << 8)
                                                v1_9.d = float.s(zx.d(x9_222) | (0xffffff & ((
                                                    0xffff00ff & x13_103 << 0x10) | zx.d(x10_180) << 8
                                                    | x11_93)) << 8)
                                                v2_9.d = float.s(zx.d(x11_95) | (0xffffff & ((
                                                    0xffff00ff & x14_91 << 0x10) | zx.d(x10_181) << 8
                                                    | x13_106)) << 8)
                                                v3_9.d = float.s(zx.d(x8_175[0x10]) | (0xffffff & ((
                                                    0xffff00ff & x16_44 << 0x10) | zx.d(x10_182) << 8
                                                    | x14_94)) << 8)
                                                spCurveTimeline_setCurve(x0_82, zx.q(x26_4), v0_6, 
                                                    v1_9, v2_9, v3_9)
                                            else if (x9_246 == 1)
                                                spCurveTimeline_setStepped(x0_82, zx.q(x26_4))
                                        
                                        x26_4 += 1
                                    while (x26_4 != x27_3)
                                
                                _spFree(x0_80)
                                x24_2 = x0
                                int32_t x8_176 = *x24_2
                                int64_t x0_91
                                
                                if (x8_176 != *(x24_2 + 4))
                                    x0_91 = x24_2[1]
                                else
                                    int64_t x0_90 = x24_2[1]
                                    uint32_t temp0_10 = vcvts_s32_f32(float.s(x8_176) f* v10.d)
                                    uint64_t x8_178
                                    
                                    if (temp0_10 s> 8)
                                        x8_178 = zx.q(temp0_10)
                                    else
                                        x8_178 = 8
                                    
                                    *(x24_2 + 4) = x8_178.d
                                    x0_91 = _spRealloc(x0_90, x8_178 << 3)
                                    x8_176 = *x24_2
                                    x24_2[1] = x0_91
                                
                                *x24_2 = x8_176 + 1
                                *(x0_91 + (sx.q(x8_176) << 3)) = x0_82
                                x20_6 = var_10c_1
                                x23_12 = var_108_1
                                x21_14 = var_104_1
                                float v0_8 = *(*(x0_82 + 0x20) + (sx.q(x8_154) << 2))
                                
                                if (v9.d f> v0_8)
                                    v9.d = v9.d
                                else
                                    v9.d = v0_8
                                
                                if (x0_77 == 0)
                                    break
                            
                            x25_7 += 1
                            
                            if (x25_7 == x23_12)
                                goto label_fc7ca4
                            
                            x8_141 = *arg3
                            var_e4_1 = x25_7 s< x23_12 ? 1 : 0
                        
                        if ((var_e4_1 & 1) != 0)
                            break
                    
                label_fc7ca4:
                    bool cond:17_1 = var_11c_1 + 1 == x20_6
                    bool cond:18_1 = var_11c_1 + 1 s< x20_6
                    var_11c_1 += 1
                    
                    if (cond:17_1)
                        goto label_fc7388
                    
                    x8_139 = *arg3
                    var_120_1 = cond:18_1 ? 1 : 0
                
                if ((var_120_1 & 1) != 0)
                    goto label_fc62ac
            
        label_fc7388:
            x8_135 = *arg3
            x13_100 = var_118_1 + 1
        while (x13_100 s< x11_89)
    
    void* x9_254 = x8_135 + 1
    *arg3 = x9_254
    uint32_t x10_199 = zx.d(*x8_135)
    int32_t x19_12 = x10_199 & 0x7f
    
    if ((x10_199 & 0x80) != 0)
        x9_254 = x8_135 + 2
        *arg3 = x9_254
        uint32_t x10_200 = zx.d(*(x8_135 + 1))
        x19_12 = (0xffffc07f & x19_12) | (0x7f & x10_200) << 7
        
        if ((x10_200 & 0x80) != 0)
            x9_254 = x8_135 + 3
            *arg3 = x9_254
            uint32_t x10_201 = zx.d(*(x8_135 + 2))
            x19_12 = (0xffe03fff & x19_12) | (0x7f & x10_201) << 0xe
            
            if ((x10_201 & 0x80) != 0)
                x9_254 = x8_135 + 4
                *arg3 = x9_254
                uint32_t x10_202 = zx.d(*(x8_135 + 3))
                x19_12 = (0xf01fffff & x19_12) | (0x7f & x10_202) << 0x15
                
                if ((x10_202 & 0x80) != 0)
                    x9_254 = x8_135 + 5
                    *arg3 = x9_254
                    x19_12 = (0xfffffff & x19_12) | (0xf & zx.d(*(x8_135 + 4))) << 0x1c
    
    if (x19_12 != 0)
        int64_t x0_96
        int128_t v0_9
        x0_96, v0_9 = spDrawOrderTimeline_create(zx.q(x19_12), zx.q(*(arg4 + 0x40)))
        var_78.q = x0_96
        
        if (x19_12 s>= 1)
            int32_t x23_15 = 0
            int128_t var_90_1 = data_71c940
            
            do
                char* x8_189 = *arg3
                *arg3 = &x8_189[1]
                uint32_t x20_9 = zx.d(*x8_189)
                *arg3 = &x8_189[2]
                char x28_4 = x8_189[1]
                *arg3 = &x8_189[3]
                uint32_t fp_4 = zx.d(x8_189[2])
                *arg3 = &x8_189[4]
                char x27_6 = x8_189[3]
                *arg3 = &x8_189[5]
                uint32_t x9_256 = zx.d(x8_189[4])
                int32_t x24_11 = x9_256 & 0x7f
                
                if ((x9_256 & 0x80) != 0)
                    *arg3 = &x8_189[6]
                    uint32_t x9_258 = zx.d(x8_189[5])
                    x24_11 = (0xffffc07f & x24_11) | (0x7f & x9_258) << 7
                    
                    if ((x9_258 & 0x80) != 0)
                        *arg3 = &x8_189[7]
                        uint32_t x9_260 = zx.d(x8_189[6])
                        x24_11 = (0xffe03fff & x24_11) | (0x7f & x9_260) << 0xe
                        
                        if ((x9_260 & 0x80) != 0)
                            *arg3 = &x8_189[8]
                            uint32_t x9_262 = zx.d(x8_189[7])
                            x24_11 = (0xf01fffff & x24_11) | (0x7f & x9_262) << 0x15
                            
                            if ((x9_262 & 0x80) != 0)
                                *arg3 = &x8_189[9]
                                x24_11 = (0xfffffff & x24_11) | (0xf & zx.d(x8_189[8])) << 0x1c
                
                int64_t x0_101 = _spMalloc(sx.q(*(arg4 + 0x40)) << 2, 
                    "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x226)
                int64_t x0_103 = _spMalloc(zx.q(*(arg4 + 0x40) - x24_11) << 0x20 s>> 0x1e, 
                    "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x227)
                int128_t v0_11
                int128_t v2_11
                int128_t v3_11
                int128_t v4_4
                v0_11, v2_11, v3_11, v4_4 = memset(x0_101, 0xff, sx.q(*(arg4 + 0x40)) << 2)
                uint64_t x8_195
                int32_t x12_67
                
                if (x24_11 s< 1)
                    x12_67 = 0
                    x8_195 = 0
                else
                    int32_t x9_264 = 0
                    x8_195 = 0
                    x12_67 = 0
                    v3_11.d = 4
                    v3_11:4.d = 4
                    v3_11:8.d = 4
                    v3_11:0xc.d = 4
                    v4_4.d = 8
                    v4_4:4.d = 8
                    v4_4:8.d = 8
                    v4_4:0xc.d = 8
                    
                    do
                        char* x14_96 = *arg3
                        void* x13_114 = &x14_96[1]
                        *arg3 = x13_114
                        uint32_t x15_70 = zx.d(*x14_96)
                        int32_t x11_106 = x15_70 & 0x7f
                        
                        if ((x15_70 & 0x80) != 0)
                            x13_114 = &x14_96[2]
                            *arg3 = x13_114
                            uint32_t x15_71 = zx.d(x14_96[1])
                            x11_106 = (0xffffc07f & x11_106) | (0x7f & x15_71) << 7
                            
                            if ((x15_71 & 0x80) != 0)
                                x13_114 = &x14_96[3]
                                *arg3 = x13_114
                                uint32_t x15_72 = zx.d(x14_96[2])
                                x11_106 = (0xffe03fff & x11_106) | (0x7f & x15_72) << 0xe
                                
                                if ((x15_72 & 0x80) != 0)
                                    x13_114 = &x14_96[4]
                                    *arg3 = x13_114
                                    uint32_t x15_73 = zx.d(x14_96[3])
                                    x11_106 = (0xf01fffff & x11_106) | (0x7f & x15_73) << 0x15
                                    
                                    if ((x15_73 & 0x80) != 0)
                                        x13_114 = &x14_96[5]
                                        *arg3 = x13_114
                                        x11_106 =
                                            (0xfffffff & x11_106) | (0xf & zx.d(x14_96[4])) << 0x1c
                        
                        if (x12_67 != x11_106)
                            uint64_t x13_116 = zx.q(x11_106 + not.d(x12_67))
                            int64_t x15_74 = sx.q(x8_195.d)
                            
                            if (x13_116.d u>= 7)
                                v0_11.d = x12_67
                                v0_11:4.d = x12_67
                                v0_11:8.d = x12_67
                                v0_11:0xc.d = x12_67
                                int64_t i_12 = (x13_116 + 1) & 0x1fffffff8
                                v0_11 += var_90_1
                                x8_195 = i_12 + x15_74
                                x12_67 += i_12.d
                                int128_t* x15_75 = x0_103 + 0x10 + (x15_74 << 2)
                                int64_t i_9 = i_12
                                int32_t i_5
                                
                                do
                                    x15_75[-1] = v0_11
                                    *x15_75 = v0_11 + v3_11
                                    v0_11 += v4_4
                                    i_5 = i_9
                                    i_9 -= 8
                                    x15_75 = &x15_75[2]
                                while (i_5 != 8)
                                
                                if (x13_116 + 1 != i_12)
                                    goto label_fc7f94
                            else
                                x8_195 = x15_74
                            label_fc7f94:
                                uint64_t x13_118 = x8_195
                                bool cond:24_1
                                
                                do
                                    x8_195 = x13_118 + 1
                                    cond:24_1 = x11_106 != x12_67 + 1
                                    *(x0_103 + (x13_118 << 2)) = x12_67
                                    x13_118 = x8_195
                                    x12_67 += 1
                                while (cond:24_1)
                            
                            x13_114 = *arg3
                        else
                            x11_106 = x12_67
                        
                        *arg3 = x13_114 + 1
                        uint32_t x14_99 = zx.d(*x13_114)
                        int32_t x12_70 = x14_99 & 0x7f
                        
                        if ((x14_99 & 0x80) != 0)
                            *arg3 = x13_114 + 2
                            uint32_t x14_101 = zx.d(*(x13_114 + 1))
                            x12_70 = (0xffffc07f & x12_70) | (0x7f & x14_101) << 7
                            
                            if ((x14_101 & 0x80) != 0)
                                *arg3 = x13_114 + 3
                                uint32_t x14_103 = zx.d(*(x13_114 + 2))
                                x12_70 = (0xffe03fff & x12_70) | (0x7f & x14_103) << 0xe
                                
                                if ((x14_103 & 0x80) != 0)
                                    *arg3 = x13_114 + 4
                                    uint32_t x14_105 = zx.d(*(x13_114 + 3))
                                    x12_70 = (0xf01fffff & x12_70) | (0x7f & x14_105) << 0x15
                                    
                                    if ((x14_105 & 0x80) != 0)
                                        *arg3 = x13_114 + 5
                                        x12_70 = (0xfffffff & x12_70)
                                            | (0xf & zx.d(*(x13_114 + 4))) << 0x1c
                        
                        x9_264 += 1
                        *(x0_101 + (sx.q(x12_70 + x11_106) << 2)) = x11_106
                        x12_67 = x11_106 + 1
                    while (x9_264 != x24_11)
                
                int32_t x9_265 = *(arg4 + 0x40)
                
                if (x12_67 s< x9_265)
                    int32_t* x10_205 = x0_103 + (sx.q(x8_195.d) << 2)
                    
                    do
                        *x10_205 = x12_67
                        x10_205 = &x10_205[1]
                        x9_265 = *(arg4 + 0x40)
                        x12_67 += 1
                        x8_195 = zx.q(x8_195.d + 1)
                    while (x12_67 s< x9_265)
                
                x24_2 = x0
                
                if (x9_265 s>= 1)
                    uint64_t x10_206 = zx.q(x9_265)
                    bool cond:21_1
                    
                    do
                        if (*(x0_101 - 4 + (x10_206 << 2)) == 0xffffffff)
                            x8_195 = zx.q(x8_195.d - 1)
                            *(x0_101 - 4 + (x10_206 << 2)) = *(x0_103 + (sx.q(x8_195.d) << 2))
                        
                        cond:21_1 = x10_206 s<= 1
                        x10_206 -= 1
                    while (not(cond:21_1))
                
                arg5.d = float.s(zx.d(x27_6)
                    | (0xffffff & ((0xffff00ff & x20_9 << 0x10) | zx.d(x28_4) << 8 | fp_4)) << 8)
                _spFree(x0_103)
                spDrawOrderTimeline_setFrame(var_78.q, zx.q(x23_15), x0_101, arg5)
                _spFree(x0_101)
                x23_15 += 1
            while (x23_15 != x19_12)
        
        int32_t x8_197 = *x24_2
        int64_t x0_106
        
        if (x8_197 != *(x24_2 + 4))
            x0_106 = x24_2[1]
        else
            v0_9.d = float.s(x8_197)
            v0_9.d = v0_9.d f* fconvert.s(1.75f)
            int64_t x0_105 = x24_2[1]
            uint32_t temp0_11 = vcvts_s32_f32(v0_9.d)
            uint64_t x8_196
            
            if (temp0_11 s> 8)
                x8_196 = zx.q(temp0_11)
            else
                x8_196 = 8
            
            *(x24_2 + 4) = x8_196.d
            x0_106, v0_9 = _spRealloc(x0_105, x8_196 << 3)
            x8_197 = *x24_2
            x24_2[1] = x0_106
        
        *x24_2 = x8_197 + 1
        void* x9_270 = var_78.q
        *(x0_106 + (sx.q(x8_197) << 3)) = x9_270
        x9_254 = *arg3
        v0_9.d = *(*(x9_270 + 0x18) + (sx.q(x19_12 - 1) << 2))
        
        if (v9.d f> v0_9.d)
            v9.d = v9.d
        else
            v9.d = v0_9.d
    
    *arg3 = x9_254 + 1
    uint32_t x8_200 = zx.d(*x9_254)
    int32_t x19_13 = x8_200 & 0x7f
    
    if ((x8_200 & 0x80) != 0)
        *arg3 = x9_254 + 2
        uint32_t x8_202 = zx.d(*(x9_254 + 1))
        x19_13 = (0xffffc07f & x19_13) | (0x7f & x8_202) << 7
        
        if ((x8_202 & 0x80) != 0)
            *arg3 = x9_254 + 3
            uint32_t x8_204 = zx.d(*(x9_254 + 2))
            x19_13 = (0xffe03fff & x19_13) | (0x7f & x8_204) << 0xe
            
            if ((x8_204 & 0x80) != 0)
                *arg3 = x9_254 + 4
                uint32_t x8_206 = zx.d(*(x9_254 + 3))
                x19_13 = (0xf01fffff & x19_13) | (0x7f & x8_206) << 0x15
                
                if ((x8_206 & 0x80) != 0)
                    *arg3 = x9_254 + 5
                    x19_13 = (0xfffffff & x19_13) | (0xf & zx.d(*(x9_254 + 4))) << 0x1c
    
    int64_t x10_234
    
    if (x19_13 == 0)
        x10_234 = arg2
    else
        void* x0_108 = spEventTimeline_create(zx.q(x19_13))
        
        if (x19_13 s>= 1)
            int32_t x23_16 = 0
            
            do
                char* x8_216 = *arg3
                *arg3 = &x8_216[1]
                uint32_t x14_107 = zx.d(*x8_216)
                *arg3 = &x8_216[2]
                char x13_120 = x8_216[1]
                *arg3 = &x8_216[3]
                uint32_t x9_282 = zx.d(x8_216[2])
                *arg3 = &x8_216[4]
                char x10_214 = x8_216[3]
                int64_t x11_116 = *(arg4 + 0x70)
                *arg3 = &x8_216[5]
                uint32_t x15_77 = zx.d(x8_216[4])
                int32_t x12_75 = x15_77 & 0x7f
                
                if ((x15_77 & 0x80) != 0)
                    *arg3 = &x8_216[6]
                    uint32_t x15_79 = zx.d(x8_216[5])
                    x12_75 = (0xffffc07f & x12_75) | (0x7f & x15_79) << 7
                    
                    if ((x15_79 & 0x80) != 0)
                        *arg3 = &x8_216[7]
                        uint32_t x15_81 = zx.d(x8_216[6])
                        x12_75 = (0xffe03fff & x12_75) | (0x7f & x15_81) << 0xe
                        
                        if ((x15_81 & 0x80) != 0)
                            *arg3 = &x8_216[8]
                            uint32_t x15_83 = zx.d(x8_216[7])
                            x12_75 = (0xf01fffff & x12_75) | (0x7f & x15_83) << 0x15
                            
                            if ((x15_83 & 0x80) != 0)
                                *arg3 = &x8_216[9]
                                x12_75 = (0xfffffff & x12_75) | (0xf & zx.d(x8_216[8])) << 0x1c
                
                void* x26_7 = *(x11_116 + (sx.q(x12_75) << 3))
                void* x0_115 = spEvent_create(x26_7, 
                    float.s(zx.d(x10_214) | (0xffffff
                        & ((0xffff00ff & x14_107 << 0x10) | zx.d(x13_120) << 8 | x9_282)) << 8))
                char* x9_283 = *arg3
                *arg3 = &x9_283[1]
                uint32_t x10_216 = zx.d(*x9_283)
                int32_t x8_222 = x10_216 & 0x7f
                
                if ((x10_216 & 0x80) != 0)
                    *arg3 = &x9_283[2]
                    uint32_t x10_218 = zx.d(x9_283[1])
                    x8_222 = (0xffffc07f & x8_222) | (0x7f & x10_218) << 7
                    
                    if ((x10_218 & 0x80) != 0)
                        *arg3 = &x9_283[3]
                        uint32_t x10_220 = zx.d(x9_283[2])
                        x8_222 = (0xffe03fff & x8_222) | (0x7f & x10_220) << 0xe
                        
                        if ((x10_220 & 0x80) != 0)
                            *arg3 = &x9_283[4]
                            uint32_t x10_222 = zx.d(x9_283[3])
                            x8_222 = (0xf01fffff & x8_222) | (0x7f & x10_222) << 0x15
                            
                            if ((x10_222 & 0x80) != 0)
                                *arg3 = &x9_283[5]
                                x8_222 = (0xfffffff & x8_222) | (0xf & zx.d(x9_283[4])) << 0x1c
                
                *(x0_115 + 0xc) = neg.d(x8_222 & 1) ^ x8_222 u>> 1
                char* x8_224 = *arg3
                *arg3 = &x8_224[1]
                uint32_t x9_288 = zx.d(*x8_224)
                *arg3 = &x8_224[2]
                char x10_225 = x8_224[1]
                *arg3 = &x8_224[3]
                uint32_t x11_118 = zx.d(x8_224[2])
                *arg3 = &x8_224[4]
                *(x0_115 + 0x10) = zx.d(x8_224[3])
                    | (0xffffff & ((0xffff00ff & x9_288 << 0x10) | zx.d(x10_225) << 8 | x11_118))
                    << 8
                char* x8_227 = *arg3
                *arg3 = &x8_227[1]
                
                if (zx.d(*x8_227) == 0)
                    int64_t x0_112 = _spMalloc(strlen(*(x26_7 + 0x10)) + 1, 
                        "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x24f)
                    *(x0_115 + 0x18) = x0_112
                    strcpy(x0_112, *(x26_7 + 0x10))
                    
                    if (*(x26_7 + 0x18) != 0)
                    label_fc81bc:
                        char* x8_210 = *arg3
                        *arg3 = &x8_210[1]
                        uint32_t x9_272 = zx.d(*x8_210)
                        *arg3 = &x8_210[2]
                        char x10_210 = x8_210[1]
                        *arg3 = &x8_210[3]
                        uint32_t x11_111 = zx.d(x8_210[2])
                        *arg3 = &x8_210[4]
                        *(x0_115 + 0x20) = zx.d(x8_210[3]) | (0xffffff
                            & ((0xffff00ff & x9_272 << 0x10) | zx.d(x10_210) << 8 | x11_111)) << 8
                        char* x8_213 = *arg3
                        *arg3 = &x8_213[1]
                        uint32_t x9_277 = zx.d(*x8_213)
                        *arg3 = &x8_213[2]
                        char x10_212 = x8_213[1]
                        *arg3 = &x8_213[3]
                        uint32_t x11_113 = zx.d(x8_213[2])
                        *arg3 = &x8_213[4]
                        *(x0_115 + 0x24) = zx.d(x8_213[3]) | (0xffffff
                            & ((0xffff00ff & x9_277 << 0x10) | zx.d(x10_212) << 8 | x11_113)) << 8
                else
                    *arg3 = &x8_227[2]
                    uint32_t x10_226 = zx.d(x8_227[1])
                    int32_t x9_295 = x10_226 & 0x7f
                    
                    if ((x10_226 & 0x80) != 0)
                        *arg3 = &x8_227[3]
                        uint32_t x10_228 = zx.d(x8_227[2])
                        x9_295 = (0xffffc07f & x9_295) | (0x7f & x10_228) << 7
                        
                        if ((x10_228 & 0x80) != 0)
                            *arg3 = &x8_227[4]
                            uint32_t x10_230 = zx.d(x8_227[3])
                            x9_295 = (0xffe03fff & x9_295) | (0x7f & x10_230) << 0xe
                            
                            if ((x10_230 & 0x80) != 0)
                                *arg3 = &x8_227[5]
                                uint32_t x10_232 = zx.d(x8_227[4])
                                x9_295 = (0xf01fffff & x9_295) | (0x7f & x10_232) << 0x15
                                
                                if ((x10_232 & 0x80) != 0)
                                    *arg3 = &x8_227[6]
                                    x9_295 = (0xfffffff & x9_295) | (0xf & zx.d(x8_227[5])) << 0x1c
                    
                    if (x9_295 == 0)
                        *(x0_115 + 0x18) = 0
                        
                        if (*(x26_7 + 0x18) != 0)
                            goto label_fc81bc
                    else
                        int64_t x28_5 = sx.q(x9_295)
                        int64_t x0_117 = _spMalloc(x28_5, 
                            "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
                        memcpy(x0_117, *arg3, x28_5 - 1)
                        *arg3 += x28_5 - 1
                        *(x0_117 + x28_5 - 1) = 0
                        *(x0_115 + 0x18) = x0_117
                        
                        if (*(x26_7 + 0x18) != 0)
                            goto label_fc81bc
                
                spEventTimeline_setFrame(x0_108, zx.q(x23_16), x0_115)
                x23_16 += 1
            while (x19_13 != x23_16)
        
        x24_2 = x0
        int32_t x8_233 = *x24_2
        int64_t x0_119
        
        if (x8_233 != *(x24_2 + 4))
            x0_119 = x24_2[1]
        else
            int64_t x0_118 = x24_2[1]
            uint32_t temp0_12 = vcvts_s32_f32(float.s(x8_233) * fconvert.s(1.75f))
            uint64_t x8_234
            
            if (temp0_12 s> 8)
                x8_234 = zx.q(temp0_12)
            else
                x8_234 = 8
            
            *(x24_2 + 4) = x8_234.d
            x0_119 = _spRealloc(x0_118, x8_234 << 3)
            x8_233 = *x24_2
            x24_2[1] = x0_119
        
        *x24_2 = x8_233 + 1
        *(x0_119 + (sx.q(x8_233) << 3)) = x0_108
        x10_234 = arg2
        float v0_12 = *(*(x0_108 + 0x18) + (sx.q(x19_13 - 1) << 2))
        
        if (v9.d f> v0_12)
            v9.d = v9.d
        else
            v9.d = v0_12
    
    void* result_1 = spAnimation_create(x10_234, 0)
    result = result_1
    _spFree(*(result_1 + 0x10))
    *(result + 8) = v9.d
    *(result + 0xc) = *x24_2
    *(result + 0x10) = x24_2[1]
    _spFree(x24_2)
else
    int32_t x27_1 = 0
    v9.d = 0f
    arg5.d = fconvert.s(1.75f)
    var_78 = x11
    
    while (true)
        void* x9_2 = x8 + 1
        *arg3 = x9_2
        uint32_t x10_4 = zx.d(*x8)
        int32_t x24_1 = x10_4 & 0x7f
        
        if ((x10_4 & 0x80) != 0)
            x9_2 = x8 + 2
            *arg3 = x9_2
            uint32_t x10_5 = zx.d(*(x8 + 1))
            x24_1 = (0xffffc07f & x24_1) | (0x7f & x10_5) << 7
            
            if ((x10_5 & 0x80) != 0)
                x9_2 = x8 + 3
                *arg3 = x9_2
                uint32_t x10_6 = zx.d(*(x8 + 2))
                x24_1 = (0xffe03fff & x24_1) | (0x7f & x10_6) << 0xe
                
                if ((x10_6 & 0x80) != 0)
                    x9_2 = x8 + 4
                    *arg3 = x9_2
                    uint32_t x10_7 = zx.d(*(x8 + 3))
                    x24_1 = (0xf01fffff & x24_1) | (0x7f & x10_7) << 0x15
                    
                    if ((x10_7 & 0x80) != 0)
                        x9_2 = x8 + 5
                        *arg3 = x9_2
                        x24_1 = (0xfffffff & x24_1) | (0xf & zx.d(*(x8 + 4))) << 0x1c
        
        void* x8_2 = x9_2 + 1
        *arg3 = x8_2
        uint32_t x10_8 = zx.d(*x9_2)
        int32_t x26_1 = x10_8 & 0x7f
        
        if ((x10_8 & 0x80) != 0)
            x8_2 = x9_2 + 2
            *arg3 = x8_2
            uint32_t x10_9 = zx.d(*(x9_2 + 1))
            x26_1 = (0xffffc07f & x26_1) | (0x7f & x10_9) << 7
            
            if ((x10_9 & 0x80) != 0)
                x8_2 = x9_2 + 3
                *arg3 = x8_2
                uint32_t x10_10 = zx.d(*(x9_2 + 2))
                x26_1 = (0xffe03fff & x26_1) | (0x7f & x10_10) << 0xe
                
                if ((x10_10 & 0x80) != 0)
                    x8_2 = x9_2 + 4
                    *arg3 = x8_2
                    uint32_t x10_11 = zx.d(*(x9_2 + 3))
                    x26_1 = (0xf01fffff & x26_1) | (0x7f & x10_11) << 0x15
                    
                    if ((x10_11 & 0x80) != 0)
                        x8_2 = x9_2 + 5
                        *arg3 = x8_2
                        x26_1 = (0xfffffff & x26_1) | (0xf & zx.d(*(x9_2 + 4))) << 0x1c
        
        if (x26_1 s>= 1)
            int32_t x20_1 = 0
            int32_t x19_1 = 1
            
            while (true)
                *arg3 = x8_2 + 1
                uint32_t x9_5 = zx.d(*x8_2)
                *arg3 = x8_2 + 2
                uint32_t x10_13 = zx.d(*(x8_2 + 1))
                int32_t x25_1 = x10_13 & 0x7f
                
                if ((x10_13 & 0x80) != 0)
                    *arg3 = x8_2 + 3
                    uint32_t x10_15 = zx.d(*(x8_2 + 2))
                    x25_1 = (0xffffc07f & x25_1) | (0x7f & x10_15) << 7
                    
                    if ((x10_15 & 0x80) != 0)
                        *arg3 = x8_2 + 4
                        uint32_t x10_17 = zx.d(*(x8_2 + 3))
                        x25_1 = (0xffe03fff & x25_1) | (0x7f & x10_17) << 0xe
                        
                        if ((x10_17 & 0x80) != 0)
                            *arg3 = x8_2 + 5
                            uint32_t x10_19 = zx.d(*(x8_2 + 4))
                            x25_1 = (0xf01fffff & x25_1) | (0x7f & x10_19) << 0x15
                            
                            if ((x10_19 & 0x80) != 0)
                                *arg3 = x8_2 + 6
                                x25_1 = (0xfffffff & x25_1) | (0xf & zx.d(*(x8_2 + 5))) << 0x1c
                
                void* x9_42
                int32_t x23_2
                
                if (x9_5 == 0)
                    void* x0_8 = spAttachmentTimeline_create(zx.q(x25_1))
                    x23_2 = x25_1 - 1
                    *(x0_8 + 0x20) = x24_1
                    
                    if (x25_1 s>= 1)
                        int32_t x21_2 = 0
                        
                        do
                            char* x12_9 = *arg3
                            *arg3 = &x12_9[1]
                            uint32_t x11_11 = zx.d(*x12_9)
                            *arg3 = &x12_9[2]
                            char x9_24 = x12_9[1]
                            *arg3 = &x12_9[3]
                            uint32_t x10_33 = zx.d(x12_9[2])
                            *arg3 = &x12_9[4]
                            char x8_10 = x12_9[3]
                            *arg3 = &x12_9[5]
                            uint32_t x14_8 = zx.d(x12_9[4])
                            int32_t x13_11 = x14_8 & 0x7f
                            
                            if ((x14_8 & 0x80) != 0)
                                *arg3 = &x12_9[6]
                                uint32_t x14_10 = zx.d(x12_9[5])
                                x13_11 = (0xffffc07f & x13_11) | (0x7f & x14_10) << 7
                                
                                if ((x14_10 & 0x80) != 0)
                                    *arg3 = &x12_9[7]
                                    uint32_t x14_12 = zx.d(x12_9[6])
                                    x13_11 = (0xffe03fff & x13_11) | (0x7f & x14_12) << 0xe
                                    
                                    if ((x14_12 & 0x80) != 0)
                                        *arg3 = &x12_9[8]
                                        uint32_t x14_14 = zx.d(x12_9[7])
                                        x13_11 = (0xf01fffff & x13_11) | (0x7f & x14_14) << 0x15
                                        
                                        if ((x14_14 & 0x80) != 0)
                                            *arg3 = &x12_9[9]
                                            x13_11 = (0xfffffff & x13_11)
                                                | (0xf & zx.d(x12_9[8])) << 0x1c
                            
                            int64_t x2
                            
                            if (x13_11 == 0)
                                x2 = 0
                            else
                                x2 = *(*(arg4 + 0x28) + (sx.q(x13_11 - 1) << 3))
                            
                            spAttachmentTimeline_setFrame(x0_8, zx.q(x21_2), x2, 
                                float.s(zx.d(x8_10) | (0xffffff
                                    & ((0xffff00ff & x11_11 << 0x10) | zx.d(x9_24) << 8 | x10_33))
                                    << 8))
                            x21_2 += 1
                        while (x25_1 != x21_2)
                    
                    int32_t* x21_5 = x0
                    int32_t x8_18 = *x21_5
                    int64_t x0_18
                    
                    if (x8_18 != x21_5[1])
                        x0_18 = *(x21_5 + 8)
                    else
                        int64_t x0_17 = *(x21_5 + 8)
                        uint32_t temp0_2 = vcvts_s32_f32(float.s(x8_18) f* arg5.d)
                        uint64_t x8_20
                        
                        if (temp0_2 s> 8)
                            x8_20 = zx.q(temp0_2)
                        else
                            x8_20 = 8
                        
                        x21_5[1] = x8_20.d
                        x0_18 = _spRealloc(x0_17, x8_20 << 3)
                        x8_18 = *x21_5
                        *(x21_5 + 8) = x0_18
                    
                    *x21_5 = x8_18 + 1
                    *(x0_18 + (sx.q(x8_18) << 3)) = x0_8
                    x9_42 = x0_8 + 0x18
                else if (x9_5 == 1)
                    void* x0_11
                    float v1_2
                    float v2_2
                    float v3_2
                    float v5_2
                    x0_11, v1_2, v2_2, v3_2, v5_2 = spColorTimeline_create(zx.q(x25_1))
                    *(x0_11 + 0x28) = x24_1
                    
                    if (x25_1 s>= 1)
                        int32_t x21_3 = 0
                        
                        do
                            char* x8_13 = *arg3
                            float v4_2 = float.s(0x437f0000)
                            *arg3 = &x8_13[1]
                            uint32_t x9_33 = zx.d(*x8_13)
                            *arg3 = &x8_13[2]
                            char x10_41 = x8_13[1]
                            *arg3 = &x8_13[3]
                            uint32_t x11_19 = zx.d(x8_13[2])
                            *arg3 = &x8_13[4]
                            char x12_15 = x8_13[3]
                            *arg3 = &x8_13[5]
                            v1_2.b = x8_13[4]
                            *arg3 = &x8_13[6]
                            v2_2.b = x8_13[5]
                            *arg3 = &x8_13[7]
                            v3_2.b = x8_13[6]
                            *arg3 = &x8_13[8]
                            v5_2.b = x8_13[7]
                            v5_2 = float.s(v5_2)
                            v1_2, v2_2, v3_2, v5_2 = spColorTimeline_setFrame(x0_11, zx.q(x21_3), 
                                float.s(zx.d(x12_15) | (0xffffff
                                    & ((0xffff00ff & x9_33 << 0x10) | zx.d(x10_41) << 8 | x11_19))
                                    << 8), 
                                float.s(v1_2) / v4_2, float.s(v2_2) / v4_2, float.s(v3_2) / v4_2, 
                                v5_2 / v4_2, v5_2)
                            
                            if (x21_3 s< x25_1 - 1)
                                char* x8_14 = *arg3
                                *arg3 = &x8_14[1]
                                uint32_t x9_38 = zx.d(*x8_14)
                                
                                if (x9_38 == 2)
                                    *arg3 = &x8_14[2]
                                    uint32_t x9_26 = zx.d(x8_14[1])
                                    *arg3 = &x8_14[3]
                                    char x10_35 = x8_14[2]
                                    *arg3 = &x8_14[4]
                                    uint32_t x11_13 = zx.d(x8_14[3])
                                    *arg3 = &x8_14[5]
                                    char x12_12 = x8_14[4]
                                    *arg3 = &x8_14[6]
                                    uint32_t x13_15 = zx.d(x8_14[5])
                                    *arg3 = &x8_14[7]
                                    char x10_36 = x8_14[6]
                                    *arg3 = &x8_14[8]
                                    uint32_t x11_14 = zx.d(x8_14[7])
                                    *arg3 = &x8_14[9]
                                    char x9_30 = x8_14[8]
                                    *arg3 = &x8_14[0xa]
                                    uint32_t x14_18 = zx.d(x8_14[9])
                                    *arg3 = &x8_14[0xb]
                                    char x10_37 = x8_14[0xa]
                                    *arg3 = &x8_14[0xc]
                                    uint32_t x13_18 = zx.d(x8_14[0xb])
                                    *arg3 = &x8_14[0xd]
                                    char x11_16 = x8_14[0xc]
                                    *arg3 = &x8_14[0xe]
                                    uint32_t x16_8 = zx.d(x8_14[0xd])
                                    *arg3 = &x8_14[0xf]
                                    char x10_38 = x8_14[0xe]
                                    *arg3 = &x8_14[0x10]
                                    uint32_t x14_21 = zx.d(x8_14[0xf])
                                    *arg3 = &x8_14[0x11]
                                    v1_2, v2_2, v3_2, v5_2 = spCurveTimeline_setCurve(x0_11, 
                                        zx.q(x21_3), 
                                        float.s(zx.d(x12_12) | (0xffffff & ((0xffff00ff
                                            & x9_26 << 0x10) | zx.d(x10_35) << 8 | x11_13)) << 8), 
                                        float.s(zx.d(x9_30) | (0xffffff & ((0xffff00ff
                                        & x13_15 << 0x10) | zx.d(x10_36) << 8 | x11_14)) << 8), 
                                        float.s(zx.d(x11_16) | (0xffffff & ((0xffff00ff
                                            & x14_18 << 0x10) | zx.d(x10_37) << 8 | x13_18)) << 8), 
                                        float.s(zx.d(x8_14[0x10]) | (0xffffff &
                                        ((0xffff00ff & x16_8 << 0x10) | zx.d(x10_38) << 8 | x14_21))
                                        << 8))
                                else if (x9_38 == 1)
                                    v1_2, v2_2, v3_2, v5_2 =
                                        spCurveTimeline_setStepped(x0_11, zx.q(x21_3))
                            
                            x21_3 += 1
                        while (x25_1 != x21_3)
                    
                    int32_t* x21_6 = x0
                    int32_t x8_21 = *x21_6
                    int64_t x0_20
                    
                    if (x8_21 != x21_6[1])
                        x0_20 = *(x21_6 + 8)
                    else
                        int64_t x0_19 = *(x21_6 + 8)
                        uint32_t temp0_3 = vcvts_s32_f32(float.s(x8_21) f* arg5.d)
                        uint64_t x8_23
                        
                        if (temp0_3 s> 8)
                            x8_23 = zx.q(temp0_3)
                        else
                            x8_23 = 8
                        
                        x21_6[1] = x8_23.d
                        x0_20 = _spRealloc(x0_19, x8_23 << 3)
                        x8_21 = *x21_6
                        *(x21_6 + 8) = x0_20
                    
                    x9_42 = x0_11 + 0x20
                    *x21_6 = x8_21 + 1
                    *(x0_20 + (sx.q(x8_21) << 3)) = x0_11
                    x23_2 = x25_1 * 5 - 5
                else
                    if (x9_5 != 2)
                        break
                    
                    void* x0_3
                    float v1_1
                    float v2_1
                    float v3_1
                    float v4_1
                    float v5_1
                    float v6_1
                    float v16_1
                    x0_3, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v16_1 =
                        spTwoColorTimeline_create(zx.q(x25_1))
                    *(x0_3 + 0x28) = x24_1
                    
                    if (x25_1 s>= 1)
                        int32_t x21_1 = 0
                        
                        do
                            char* x8_6 = *arg3
                            float v7_1 = float.s(0x437f0000)
                            *arg3 = &x8_6[1]
                            uint32_t x9_14 = zx.d(*x8_6)
                            *arg3 = &x8_6[2]
                            char x10_28 = x8_6[1]
                            *arg3 = &x8_6[3]
                            uint32_t x11_8 = zx.d(x8_6[2])
                            *arg3 = &x8_6[4]
                            char x12_5 = x8_6[3]
                            *arg3 = &x8_6[5]
                            v1_1.b = x8_6[4]
                            *arg3 = &x8_6[6]
                            v2_1.b = x8_6[5]
                            *arg3 = &x8_6[7]
                            v3_1.b = x8_6[6]
                            *arg3 = &x8_6[8]
                            v4_1.b = x8_6[7]
                            *arg3 = &x8_6[0xa]
                            v5_1.b = x8_6[9]
                            *arg3 = &x8_6[0xb]
                            v6_1.b = x8_6[0xa]
                            *arg3 = &x8_6[0xc]
                            v16_1.b = x8_6[0xb]
                            v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v16_1 = spTwoColorTimeline_setFrame(
                                x0_3, zx.q(x21_1), 
                                float.s(zx.d(x12_5) | (0xffffff
                                    & ((0xffff00ff & x9_14 << 0x10) | zx.d(x10_28) << 8 | x11_8))
                                    << 8), 
                                float.s(v1_1) / v7_1, float.s(v2_1) / v7_1, float.s(v3_1) / v7_1, 
                                float.s(v4_1) / v7_1, float.s(v5_1) / v7_1, float.s(v6_1) / v7_1, 
                                float.s(v16_1) / v7_1)
                            
                            if (x21_1 s< x25_1 - 1)
                                char* x8_7 = *arg3
                                *arg3 = &x8_7[1]
                                uint32_t x9_21 = zx.d(*x8_7)
                                
                                if (x9_21 == 2)
                                    *arg3 = &x8_7[2]
                                    uint32_t x9_7 = zx.d(x8_7[1])
                                    *arg3 = &x8_7[3]
                                    char x10_22 = x8_7[2]
                                    *arg3 = &x8_7[4]
                                    uint32_t x11_2 = zx.d(x8_7[3])
                                    *arg3 = &x8_7[5]
                                    char x12_2 = x8_7[4]
                                    *arg3 = &x8_7[6]
                                    uint32_t x13_2 = zx.d(x8_7[5])
                                    *arg3 = &x8_7[7]
                                    char x10_23 = x8_7[6]
                                    *arg3 = &x8_7[8]
                                    uint32_t x11_3 = zx.d(x8_7[7])
                                    *arg3 = &x8_7[9]
                                    char x9_11 = x8_7[8]
                                    *arg3 = &x8_7[0xa]
                                    uint32_t x14_3 = zx.d(x8_7[9])
                                    *arg3 = &x8_7[0xb]
                                    char x10_24 = x8_7[0xa]
                                    *arg3 = &x8_7[0xc]
                                    uint32_t x13_5 = zx.d(x8_7[0xb])
                                    *arg3 = &x8_7[0xd]
                                    char x11_5 = x8_7[0xc]
                                    *arg3 = &x8_7[0xe]
                                    uint32_t x16_4 = zx.d(x8_7[0xd])
                                    *arg3 = &x8_7[0xf]
                                    char x10_25 = x8_7[0xe]
                                    *arg3 = &x8_7[0x10]
                                    uint32_t x14_6 = zx.d(x8_7[0xf])
                                    *arg3 = &x8_7[0x11]
                                    v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v16_1 =
                                        spCurveTimeline_setCurve(x0_3, zx.q(x21_1), 
                                        float.s(zx.d(x12_2) | (0xffffff & ((0xffff00ff
                                            & x9_7 << 0x10) | zx.d(x10_22) << 8 | x11_2)) << 8), 
                                        float.s(zx.d(x9_11) | (0xffffff &
                                        ((0xffff00ff & x13_2 << 0x10) | zx.d(x10_23) << 8 | x11_3))
                                        << 8), 
                                        float.s(zx.d(x11_5) | (0xffffff & ((0xffff00ff
                                            & x14_3 << 0x10) | zx.d(x10_24) << 8 | x13_5)) << 8), 
                                        float.s(zx.d(x8_7[0x10]) | (0xffffff &
                                        ((0xffff00ff & x16_4 << 0x10) | zx.d(x10_25) << 8 | x14_6))
                                        << 8))
                                else if (x9_21 == 1)
                                    v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v16_1 =
                                        spCurveTimeline_setStepped(x0_3, zx.q(x21_1))
                            
                            x21_1 += 1
                        while (x25_1 != x21_1)
                    
                    int32_t x8_15 = *x0
                    int64_t x0_16
                    
                    if (x8_15 != *(x0 + 4))
                        x0_16 = x0[1]
                    else
                        int64_t x0_15 = x0[1]
                        uint32_t temp0_1 = vcvts_s32_f32(float.s(x8_15) f* arg5.d)
                        uint64_t x8_17
                        
                        if (temp0_1 s> 8)
                            x8_17 = zx.q(temp0_1)
                        else
                            x8_17 = 8
                        
                        *(x0 + 4) = x8_17.d
                        x0_16 = _spRealloc(x0_15, x8_17 << 3)
                        x8_15 = *x0
                        x0[1] = x0_16
                    
                    x9_42 = x0_3 + 0x20
                    x23_2 = (x25_1 << 3) - 8
                    *x0 = x8_15 + 1
                    *(x0_16 + (sx.q(x8_15) << 3)) = x0_3
                
                x20_1 += 1
                float v0_1 = *(*x9_42 + (sx.q(x23_2) << 2))
                
                if (v9.d f> v0_1)
                    v9.d = v9.d
                else
                    v9.d = v0_1
                
                if (x20_1 == x26_1)
                    x11 = var_78
                    goto label_fc5218
                
                x8_2 = *arg3
                x19_1 = x20_1 s< x26_1 ? 1 : 0
            
            if (*x0 s>= 1)
                int64_t i_6 = 0
                
                do
                    spTimeline_dispose(*(x0[1] + (i_6 << 3)))
                    i_6 += 1
                while (i_6 s< sx.q(*x0))
            
            _spFree(x0[1])
            _spFree(x0)
            _spSkeletonBinary_setError(arg1, "Invalid timeline type for a slot: ", 
                *(*(*(arg4 + 0x48) + (sx.q(x24_1) << 3)) + 8))
            x11 = var_78
            
            if ((x19_1 & 1) != 0)
            label_fc62ac:
                result = nullptr
                break
        
    label_fc5218:
        x8 = *arg3
        x27_1 += 1
        
        if (x27_1 == x11)
            goto label_fc5ab0
arg5.q = var_68
return result
