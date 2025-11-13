// 函数: sub_669c00
// 地址: 0x669c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (data_c28c58 == 0)
label_66a331:
    CookieCheckFunction(0xffffffff)
    return 0xffffffff

char const* const var_120
int32_t var_11c
char const* const var_118_1
int128_t* eax_2
char* ecx_1
float var_64
float var_54_1
float var_50_1
int128_t var_4c
int128_t var_3c
float var_1c
float var_18
float var_14
float var_10
float xmm1_1
float xmm2_1
float xmm6_1
float xmm7_1

if (data_c28c62 == 0)
label_669f18:
    void* eax_11 = sub_665600(data_c27c58)
    sub_67d460(eax_11 + 0x554, *(data_147abe8 + 0x2c), &var_1c)
    float xmm1_12 = *(eax_11 + 0x16cc) - 0f
    float xmm0_26 = var_1c * xmm1_12 + 0f
    float xmm1_14 = *(eax_11 + 0x16d0) - 0f
    var_64 = var_14 * xmm1_12 + 0f
    float var_68_2 = var_18 * xmm1_14 + 0f
    float var_60_2 = var_10 * xmm1_14 + 0f
    var_1c.o = xmm0_26.o
    float* eax_13 = sub_655430(&var_4c, &var_1c, eax_11 + 0x1620, &var_4c)
    int32_t edi_1 = 1
    var_1c.o = *eax_13
    var_1c.o = *eax_13
    
    if (data_c28c58 s<= 1)
        goto label_669d1e
    
    var_54_1 = var_10
    var_50_1 = var_14
    float var_5c_2 = var_18
    float var_58_2 = var_1c
    
    while (true)
        void* eax_14 = sub_665600((&data_c27c58)[edi_1])
        sub_67d460(eax_14 + 0x554, *(data_147abe8 + 0x2c), &var_1c)
        float xmm1_16 = *(eax_14 + 0x16cc) - 0f
        float xmm0_45 = var_1c * xmm1_16 + 0f
        float xmm1_18 = *(eax_14 + 0x16d0) - 0f
        var_64 = var_14 * xmm1_16 + 0f
        float var_68_3 = var_18 * xmm1_18 + 0f
        float var_60_3 = var_10 * xmm1_18 + 0f
        var_3c = xmm0_45.o
        eax_2 = sub_655430(&var_4c, &var_3c, eax_14 + 0x1620, &var_4c)
        xmm7_1 = var_58_2
        xmm2_1 = var_50_1
        var_3c = *eax_2
        var_3c = *eax_2
        
        if (not(xmm2_1 < xmm7_1))
            xmm6_1 = var_5c_2
            xmm1_1 = var_54_1
            
            if (not(xmm1_1 < xmm6_1))
                float xmm0_58 = var_3c.d
                
                if (not(xmm0_58 > xmm7_1))
                    xmm7_1 = xmm0_58
                
                float xmm0_59 = var_3c:8.d
                var_58_2 = xmm7_1
                
                if (not(xmm2_1 > xmm0_59))
                    xmm2_1 = xmm0_59
                
                float xmm0_60 = var_3c:4.d
                var_50_1 = xmm2_1
                
                if (not(xmm0_60 > xmm6_1))
                    xmm6_1 = xmm0_60
                
                float xmm0_61 = var_3c:0xc.d
                var_5c_2 = xmm6_1
                
                if (not(xmm1_1 > xmm0_61))
                    xmm1_1 = xmm0_61
                
                edi_1 += 1
                var_54_1 = xmm1_1
                
                if (edi_1 s>= data_c28c58)
                    goto label_669d43
                
                continue
        
    label_66a12e:
        var_118_1 = "RectUnion"
        var_11c = 0xdb
        ecx_1 = "RectIsNormalized(r0)"
        break
    
    var_120 = "C:\x\ax2017\Engine\Rect.cpp"
else
    eax_2 = GetKeyState(0x11)
    float* eax_7
    
    if (eax_2.w s>= 0)
    label_669e3d:
        
        if (data_c28c58 == 1)
            void* eax_9 = sub_665600(data_c27c58)
            sub_67d460(eax_9 + 0x554, *(data_147abe8 + 0x2c), &var_1c)
            float xmm1_8 = *(eax_9 + 0x16cc) - 0f
            float xmm0_12 = var_1c * xmm1_8 + 0f
            float xmm1_10 = *(eax_9 + 0x16d0) - 0f
            var_64 = var_14 * xmm1_8 + 0f
            float var_68_1 = var_18 * xmm1_10 + 0f
            float var_60_1 = var_10 * xmm1_10 + 0f
            var_1c.o = xmm0_12.o
            eax_7 = sub_655430(&var_4c, &var_1c, eax_9 + 0x1620, &var_4c)
            var_1c.o = *eax_7
        label_669d1a:
            var_1c.o = *eax_7
        label_669d1e:
            xmm1_1 = var_10
            xmm2_1 = var_14
            xmm6_1 = var_18
            xmm7_1 = var_1c
            var_54_1 = xmm1_1
            var_50_1 = xmm2_1
        label_669d43:
            float xmm2_2 = xmm2_1 - xmm7_1
            int128_t var_b4
            __builtin_memcpy(&var_b4, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x
                    3f", 
                0x40)
            uint32_t esi_1 = 0
            float xmm3_2 = xmm1_1 - xmm6_1
            float var_5c_1 = xmm2_2
            float var_58_1 = xmm3_2
            float var_24_1 = 16f
            int32_t var_20_1 = 0x41800000
            
            while (true)
                float xmm0_7 = xmm3_2 f* *(&var_b4:4 + (esi_1 << 3)) + xmm6_1
                float var_74 = xmm2_2 f* *(&var_b4 + (esi_1 << 3)) + xmm7_1
                float var_70_1 = xmm0_7
                int128_t var_2c
                eax_2 = sub_5af7f0(&var_4c, &var_2c:8, &var_74, &var_4c)
                float xmm0_8[0x4] = *eax_2
                float xmm1_6 = _mm_shuffle_ps(xmm0_8, xmm0_8, 0xaa)
                var_1c.o = xmm0_8
                
                if (xmm1_6 f< xmm0_8)
                    break
                
                if (var_10 < var_18)
                    break
                
                if (not(arg1 f< xmm0_8) && not(arg2 f< var_18) && not(xmm1_6 f< arg1)
                        && var_10 f>= arg2)
                    CookieCheckFunction(esi_1)
                    return esi_1
                
                esi_1 += 1
                
                if (esi_1 s>= 8)
                    int128_t var_e4
                    void* ebx_1 = &var_e4:4
                    __builtin_memcpy(&var_e4, 
                        "\x00\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x"
                    "00\x03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00"
                    "00\x07\x00\x00\x00\x06\x00\x00\x00", 
                        0x30)
                    int32_t edi_2 = 0
                    float var_20_2 = 2.80259693e-45f
                    var_74 = 16f
                    int32_t var_70_2 = 0x41800000
                    var_64 = 16f
                    int32_t var_60_4 = 0x41800000
                    
                    while (true)
                        int32_t eax_17 = *(ebx_1 - 4)
                        var_3c:8.d = var_5c_1 f* *(&var_b4 + (eax_17 << 3)) + xmm7_1
                        var_3c:0xc.d = var_58_1 f* *(&var_b4:4 + (eax_17 << 3)) + xmm6_1
                        float var_f4[0x4]
                        float* eax_19 = sub_5af7f0(&var_f4, &var_74, &var_3c:8, &var_f4)
                        float xmm1_23 = var_5c_1 f* *(&var_b4 + (var_20_2 << 3))
                        var_4c = *eax_19
                        float xmm0_68 = var_58_1 f* *(&var_b4:4 + (var_20_2 << 3)) + xmm6_1
                        var_14 = xmm1_23 + xmm7_1
                        float var_10_1 = xmm0_68
                        float var_104[0x4]
                        eax_2 = sub_5af7f0(&var_104, &var_64, &var_14, &var_104)
                        float xmm4_2[0x4] = *eax_19
                        int128_t xmm0_69 = *eax_2
                        float xmm5_2 = _mm_shuffle_ps(xmm4_2, xmm4_2, 0xaa)
                        var_2c = xmm0_69
                        
                        if (xmm5_2 f< xmm4_2)
                            goto label_66a12e
                        
                        float xmm1_25 = var_4c:0xc.d
                        float xmm0_70 = var_4c:4.d
                        
                        if (xmm1_25 < xmm0_70)
                            goto label_66a12e
                        
                        float xmm2_7[0x4] = var_2c.d
                        
                        if (not(xmm2_7 f> xmm4_2))
                            xmm4_2 = xmm2_7
                        
                        if (not(xmm5_2 > var_24_1))
                            xmm5_2 = var_24_1
                        
                        float xmm2_9 = var_2c:4.d
                        
                        if (not(xmm2_9 > xmm0_70))
                            xmm0_70 = xmm2_9
                        
                        if (not(xmm1_25 > var_20_2))
                            xmm1_25 = var_20_2
                        
                        float xmm3_4[0x4] = var_50_1
                        
                        if (not(xmm7_1 f> xmm4_2))
                            xmm4_2 = xmm3_4
                        
                        if (not(xmm6_1 > xmm0_70))
                            xmm0_70 = var_54_1
                        
                        if (not(xmm5_2 f> xmm3_4))
                            xmm5_2 = xmm7_1
                        
                        if (not(xmm1_25 > var_54_1))
                            xmm1_25 = xmm6_1
                        
                        if (xmm5_2 f< xmm4_2)
                            break
                        
                        if (xmm1_25 < xmm0_70)
                            break
                        
                        if (not(arg1 f< xmm4_2) && not(arg2 f< xmm0_70) && not(xmm5_2 f< arg1)
                                && xmm1_25 f>= arg2)
                            void var_dc
                            uint32_t eax_24 = *(&var_dc + edi_2 * 0xc)
                            CookieCheckFunction(eax_24)
                            return eax_24
                        
                        edi_2 += 1
                        ebx_1 += 0xc
                        
                        if (edi_2 s>= 4)
                            goto label_66a331
                        
                        var_20_2 = *ebx_1
                    
                    break
                
                xmm2_2 = var_5c_1
                xmm3_2 = var_58_1
            
            var_118_1 = "RectContains"
            ecx_1 = "RectIsNormalized(r)"
            var_11c = 0xa4
            var_120 = "C:\x\ax2017\Engine\Rect.cpp"
        else
            var_118_1 = "UI2TransformCorner"
            var_11c = 0x3c50
            var_120 = "C:\x\ax2017\Engine\UI2.cpp"
            ecx_1 = "gUI2Editor.s.activeSetCount == 1"
    else
        eax_2 = data_cf65b4
        
        if (*(eax_2 + 0x18) == 0)
            goto label_669e3d
        
        eax_2 = GetFocus()
        
        if (eax_2 != data_147b084 && eax_2 != 0)
            goto label_669e3d
        
        if (data_c28c62 == 0)
            goto label_669f18
        
        if (GetKeyState(0x11) s>= 0 || *(data_cf65b4 + 0x18) == 0)
            goto label_669f18
        
        eax_2 = GetFocus()
        
        if (eax_2 != data_147b084 && eax_2 != 0)
            goto label_669f18
        
        if (data_c28c58 == 1)
            void* eax_5 = sub_665600(data_c27c58)
            var_1c = 0f
            var_18 = 0f
            var_14 = *(eax_5 + 0x16cc)
            var_10 = *(eax_5 + 0x16d0)
            var_4c = var_1c.o
            eax_7 = sub_655430(&var_1c, &var_4c, eax_5 + 0x1620, &var_1c)
            goto label_669d1a
        
        var_118_1 = "UI2TransformCorner"
        var_11c = 0x3c57
        var_120 = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_1 = "gUI2Editor.s.activeSetCount == 1"
sub_63b870(eax_2, &data_801800, ecx_1, var_120, var_11c, var_118_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
