// 函数: sub_6aa120
// 地址: 0x6aa120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
__security_cookie
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t edx = arg2[4]

if (edx != 1 && edx != 4)
    int32_t var_64_1 = arg3
    char const* const var_68_1 = "unsupported format for sanding %s"
    uint32_t eax_2 = sub_63b5f0("unsupported format for sanding %s")
    CookieCheckFunction(eax_2)
    return eax_2

int32_t eax_3 = sub_6a9570(arg2[1], edx)

if (arg2[3] != eax_3)
    char const* const var_64_2 = "SandImageBuffer"
    int32_t var_68_2 = 0x66
    char const* const var_6c_1 = "C:\x\ax2017\Engine\TextureImport.cpp"
    sub_63b870(eax_3, &data_801800, 
        "sourceImage->pitch == TextureFormatPitch(sourceImage->width, sourceImage->format)")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx_3 = arg2[2]
int32_t edx_1 = 0
int32_t* eax_4 = *arg2
int32_t esi = arg2[1]
int32_t* var_54 = eax_4
int32_t var_58 = esi
int32_t var_50 = ecx_3
int32_t var_44 = 0

if (ecx_3 s> 0)
    int96_t xmm1_1 = (data_7ff010).12
    
    do
        if (esi s> 0)
            int32_t edi_1 = 1
            eax_4 = &var_54[edx_1 * esi]
            int32_t ecx_5 = 0xffffffff
            int32_t edx_3 = 0
            int32_t* var_48_1 = eax_4
            int32_t var_38_1 = 0xffffffff
            int32_t var_40_1 = 0
            int32_t var_18_1
            
            do
                var_18_1 = edi_1
                float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(eax_4 + 3))) / 255f
                xmm0_3 f- 0
                uint32_t eax_5
                eax_5:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
                    | (xmm0_3 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                int32_t* eax_87
                
                if (p_2)
                    eax_87 = var_48_1
                else
                    int32_t edx_4 = 0
                    float xmm1_5
                    float xmm2_4
                    float xmm3_4
                    
                    if (ecx_5 s< 0 || edi_1 - 2 s>= esi || var_44 - 1 s< 0 || var_44 - 1 s>= var_50)
                    label_6aa29d:
                        xmm3_4 = xmm1_1:8.d
                        xmm2_4 = xmm1_1:4.d
                        xmm1_5 = xmm1_1.d
                    else
                        int32_t ecx_8 = var_54[(var_44 - 1) * esi + edi_1 - 2]
                        float xmm1_3 = _mm_cvtepi32_ps(zx.o((ecx_8 u>> 0x10).b))
                        float xmm2_2 = _mm_cvtepi32_ps(zx.o((ecx_8 u>> 8).b))
                        float xmm0_6 = _mm_cvtepi32_ps(zx.o(ecx_8 u>> 0x18)) / 255f
                        float xmm3_3 = _mm_cvtepi32_ps(zx.o(ecx_8.b)) / 255f
                        
                        if (0.00392156886f >= xmm0_6)
                            goto label_6aa29d
                        
                        xmm1_5 = xmm1_3 / 255f f+ xmm1_1.d
                        xmm2_4 = xmm2_2 / 255f f+ xmm1_1:4.d
                        xmm3_4 = xmm3_3 f+ xmm1_1:8.d
                        edx_4 = 1
                    
                    int32_t eax_24 = edi_1 - 2
                    
                    if (eax_24 s< 0 || eax_24 s>= esi)
                        goto label_6aa337
                    
                    int32_t ecx_11 = var_48_1[-1]
                    float xmm4_2 = _mm_cvtepi32_ps(zx.o((ecx_11 u>> 0x10).b))
                    float xmm6_2 = _mm_cvtepi32_ps(zx.o((ecx_11 u>> 8).b))
                    float xmm0_9 = _mm_cvtepi32_ps(zx.o(ecx_11 u>> 0x18)) / 255f
                    float xmm7_3 = _mm_cvtepi32_ps(zx.o(ecx_11.b)) / 255f
                    int32_t esi_2
                    int32_t var_4c_1
                    
                    if (0.00392156886f >= xmm0_9)
                        eax_24 = edi_1 - 2
                    label_6aa337:
                        esi_2 = var_44 + 1
                        var_4c_1 = esi_2
                        
                        if (eax_24 s>= 0 && eax_24 s< var_58)
                            goto label_6aa34e
                    else
                        xmm1_5 = xmm1_5 + xmm4_2 / 255f
                        edx_4 += 1
                        xmm2_4 = xmm2_4 + xmm6_2 / 255f
                        esi_2 = var_44 + 1
                        xmm3_4 = xmm3_4 + xmm7_3
                        var_4c_1 = esi_2
                    label_6aa34e:
                        
                        if (var_4c_1 s>= 0 && var_4c_1 s< var_50)
                            int32_t ecx_17 = var_54[var_4c_1 * var_58 + edi_1 - 2]
                            float xmm4_5 = _mm_cvtepi32_ps(zx.o((ecx_17 u>> 0x10).b))
                            float xmm6_5 = _mm_cvtepi32_ps(zx.o((ecx_17 u>> 8).b))
                            float xmm0_12 = _mm_cvtepi32_ps(zx.o(ecx_17 u>> 0x18)) / 255f
                            float xmm7_6 = _mm_cvtepi32_ps(zx.o(ecx_17.b)) / 255f
                            
                            if (not(0.00392156886f >= xmm0_12))
                                xmm1_5 = xmm1_5 + xmm4_5 / 255f
                                edx_4 += 1
                                xmm2_4 = xmm2_4 + xmm6_5 / 255f
                                xmm3_4 = xmm3_4 + xmm7_6
                    int32_t ecx_19 = var_58
                    
                    if (var_40_1 s>= 0 && edi_1 - 1 s< ecx_19 && var_44 - 1 s>= 0
                            && var_44 - 1 s< var_50)
                        int32_t ecx_22 = var_54[(var_44 - 1) * ecx_19 + edi_1 - 1]
                        float xmm4_8 = _mm_cvtepi32_ps(zx.o((ecx_22 u>> 0x10).b))
                        float xmm6_8 = _mm_cvtepi32_ps(zx.o((ecx_22 u>> 8).b))
                        float xmm0_14 = _mm_cvtepi32_ps(zx.o(ecx_22 u>> 0x18))
                        ecx_19 = var_58
                        float xmm7_9 = _mm_cvtepi32_ps(zx.o(ecx_22.b)) / 255f
                        
                        if (not(0.00392156886f >= xmm0_14 / 255f))
                            xmm1_5 = xmm1_5 + xmm4_8 / 255f
                            edx_4 += 1
                            xmm2_4 = xmm2_4 + xmm6_8 / 255f
                            xmm3_4 = xmm3_4 + xmm7_9
                    
                    if (edi_1 - 1 s>= 0 && edi_1 - 1 s< ecx_19 && esi_2 s>= 0 && esi_2 s< var_50)
                        int32_t ecx_26 = var_54[esi_2 * ecx_19 + edi_1 - 1]
                        float xmm4_11 = _mm_cvtepi32_ps(zx.o((ecx_26 u>> 0x10).b))
                        float xmm6_11 = _mm_cvtepi32_ps(zx.o((ecx_26 u>> 8).b))
                        float xmm0_18 = _mm_cvtepi32_ps(zx.o(ecx_26 u>> 0x18)) / 255f
                        float xmm7_12 = _mm_cvtepi32_ps(zx.o(ecx_26.b)) / 255f
                        
                        if (not(0.00392156886f >= xmm0_18))
                            xmm1_5 = xmm1_5 + xmm4_11 / 255f
                            edx_4 += 1
                            xmm2_4 = xmm2_4 + xmm6_11 / 255f
                            xmm3_4 = xmm3_4 + xmm7_12
                    
                    if (edi_1 s>= 0)
                        int32_t ecx_28 = var_58
                        
                        if (edi_1 s< ecx_28)
                            if (var_44 - 1 s>= 0 && var_44 - 1 s< var_50)
                                int32_t ecx_30 = var_54[(var_44 - 1) * ecx_28 + edi_1]
                                float xmm4_14 = _mm_cvtepi32_ps(zx.o((ecx_30 u>> 0x10).b))
                                float xmm6_14 = _mm_cvtepi32_ps(zx.o((ecx_30 u>> 8).b))
                                float xmm0_21 = _mm_cvtepi32_ps(zx.o(ecx_30 u>> 0x18)) / 255f
                                float xmm7_15 = _mm_cvtepi32_ps(zx.o(ecx_30.b)) / 255f
                                
                                if (not(0.00392156886f >= xmm0_21))
                                    xmm1_5 = xmm1_5 + xmm4_14 / 255f
                                    edx_4 += 1
                                    xmm2_4 = xmm2_4 + xmm6_14 / 255f
                                    xmm3_4 = xmm3_4 + xmm7_15
                            
                            int32_t ecx_32 = var_48_1[1]
                            float xmm4_17 = _mm_cvtepi32_ps(zx.o((ecx_32 u>> 0x10).b))
                            float xmm6_17 = _mm_cvtepi32_ps(zx.o((ecx_32 u>> 8).b))
                            float xmm0_24 = _mm_cvtepi32_ps(zx.o(ecx_32 u>> 0x18)) / 255f
                            float xmm7_18 = _mm_cvtepi32_ps(zx.o(ecx_32.b)) / 255f
                            int32_t eax_76
                            
                            if (not(0.00392156886f >= xmm0_24))
                                eax_76 = var_58
                                xmm1_5 = xmm1_5 + xmm4_17 / 255f
                                xmm2_4 = xmm2_4 + xmm6_17 / 255f
                                edx_4 += 1
                                xmm3_4 = xmm3_4 + xmm7_18
                            label_6aa626:
                                
                                if (esi_2 s>= 0 && esi_2 s< var_50)
                                    int32_t ecx_34 = var_54[esi_2 * eax_76 + edi_1]
                                    float xmm4_20 = _mm_cvtepi32_ps(zx.o((ecx_34 u>> 0x10).b))
                                    float xmm6_20 = _mm_cvtepi32_ps(zx.o((ecx_34 u>> 8).b))
                                    float xmm0_27 = _mm_cvtepi32_ps(zx.o(ecx_34 u>> 0x18)) / 255f
                                    float xmm7_21 = _mm_cvtepi32_ps(zx.o(ecx_34.b)) / 255f
                                    
                                    if (not(0.00392156886f >= xmm0_27))
                                        xmm1_5 = xmm1_5 + xmm4_20 / 255f
                                        edx_4 += 1
                                        xmm2_4 = xmm2_4 + xmm6_20 / 255f
                                        xmm3_4 = xmm3_4 + xmm7_21
                            else if (edi_1 s>= 0)
                                eax_76 = var_58
                                
                                if (edi_1 s< eax_76)
                                    goto label_6aa626
                    
                    if (edx_4 != 0)
                        float xmm0_29 = _mm_cvtepi32_ps(zx.o(edx_4))
                        int96_t var_30_1
                        var_30_1:0xc.d = 0x3b808081
                        var_30_1.d = xmm1_5 / xmm0_29
                        var_30_1:4.d = xmm2_4 / xmm0_29
                        var_30_1:8.d = xmm3_4 / xmm0_29
                        float var_6c
                        float var_68
                        float var_64
                        int32_t eax_88 = sub_64b360(var_30_1.d, var_6c, var_68, var_64)
                        eax_87 = var_48_1
                        *eax_87 = (((((eax_88 u>> 0x18 << 8) + zx.d(eax_88.b)) << 8)
                            + zx.d((eax_88 u>> 8).b)) << 8) + zx.d((eax_88 u>> 0x10).b)
                    else
                        void* edx_5 = data_cf65b8
                        eax_87 = var_48_1
                        *eax_87 = ((((zx.d(*(edx_5 + 0x2d)) + 0x100) << 8) + zx.d(*(edx_5 + 0x2e)))
                            << 8) + zx.d(*(edx_5 + 0x2f))
                    
                    xmm1_1 = (data_7ff010).12
                    esi = var_58
                    ecx_5 = var_38_1
                    edx_3 = var_40_1
                
                eax_4 = &eax_87[1]
                ecx_5 += 1
                edx_3 += 1
                var_48_1 = eax_4
                edi_1 += 1
                var_38_1 = ecx_5
                var_40_1 = edx_3
            while (var_18_1 s< esi)
            ecx_3 = var_50
            edx_1 = var_44
        
        edx_1 += 1
        var_44 = edx_1
    while (edx_1 s< ecx_3)

CookieCheckFunction(eax_4)
return eax_4
