// 函数: sub_6e6fb0
// 地址: 0x6e6fb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_48_2
char const* const ecx_18

if (arg2 s< 0 || arg2 s>= *(arg3 + 0x28))
    char const* const var_44_16 = "FlanimGetTransformAtFrame"
    var_48_2 = 0x382
    ecx_18 = "layerIndex >= 0 && layerIndex < pFlanimDef->mLayerCount"
else
    int32_t ecx = *(arg3 + 0x20)
    void* eax = arg2 * 3
    int32_t* eax_2 = ecx + ((eax + 1) << 3)
    int32_t* var_18_1 = eax_2
    arg1 = *eax_2
    
    if (arg1 s< 0 || arg1 s>= *(arg3 + 0x38))
        char const* const var_44_15 = "FlanimGetTransformAtFrame"
        var_48_2 = 0x387
        ecx_18 = "vertexIndexImage >= 0 && vertexIndexImage < pFlanimDef->mVertexCount"
    else
        int32_t eax_4 = (arg1 << 7) + *(arg3 + 0x30)
        int32_t eax_5 = sub_6e6a80(eax_4, 4, eax_4, arg6)
        arg7[0x10] = eax_5
        int32_t eax_6 = sub_6e6a80(eax_5, 5, eax_4, arg6)
        arg7[0x11] = eax_6
        int32_t ecx_6 = sub_6e6a80(eax_6, 6, eax_4, arg6)
        int32_t var_20_1 = ecx_6
        
        if (ecx_6 s< 0)
            int32_t var_44_3 = ecx_6
            sub_63b5f0("image index <0 (%d)")
            ecx_6 = var_20_1
        
        arg1 = *(arg3 + 0x48)
        
        if (ecx_6 s>= arg1)
            void* var_44_4 = arg1
            int32_t var_48_1 = ecx_6
            arg1 = sub_63b5f0("image index >end (%d >= %d)")
            ecx_6 = var_20_1
        
        if (ecx_6 s< 0 || ecx_6 s>= *(arg3 + 0x48))
            char const* const var_44_14 = "FlanimGetTransformAtFrame"
            var_48_2 = 0x390
            ecx_18 = "imageIndex >=0 && imageIndex < pFlanimDef->mImageCount"
        else
            int32_t eax_8 = *(arg3 + 0x40)
            int32_t eax_9 = *(eax_8 + (ecx_6 << 3) + 4)
            arg7[0x12] = *(eax_8 + (ecx_6 << 3))
            arg7[0x13] = eax_9
            arg7[0x14] = sub_6e6a80(eax_9, 7, eax_4, arg6)
            arg1 = var_18_1
            int32_t edx_1 = *arg1
            
            if (edx_1 != *(ecx + (eax << 3) + 0xc))
                int32_t var_20_4 = 0
                void* edi_1 = &arg7[1]
                
                while (true)
                    int32_t esi_5 = *arg1
                    
                    if (esi_5 s>= 0)
                        arg1 = arg3
                        
                        if (esi_5 s< *(arg1 + 0x38))
                            int32_t esi_7 = (esi_5 << 7) + *(arg1 + 0x30)
                            int32_t eax_20
                            int32_t edx_7
                            eax_20, edx_7 = sub_6e6b50(arg1, 0, esi_7, arg6)
                            *(edi_1 - 4) = eax_20
                            *edi_1 = edx_7
                            int32_t eax_21
                            int32_t edx_8
                            eax_21, edx_8 = sub_6e6b50(eax_20, 1, esi_7, arg6)
                            int32_t ecx_22 = var_20_4 + 1
                            arg1 = &var_18_1[1]
                            *(edi_1 + 4) = eax_21
                            *(edi_1 + 8) = edx_8
                            edi_1 += 0x10
                            var_20_4 = ecx_22
                            var_18_1 = arg1
                            
                            if (ecx_22 s>= 4)
                                return arg1
                            
                            continue
                    
                    char const* const var_44_13 = "FlanimGetTransformAtFrame"
                    var_48_2 = 0x3dc
                    ecx_18 = "vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount"
                    break
            else
                arg1 = eax
                
                if (*(ecx + (arg1 << 3) + 0xc) != *(ecx + (arg1 << 3) + 0x10)
                        || *(ecx + (arg1 << 3) + 0x10) != *(ecx + (arg1 << 3) + 0x14))
                    char const* const var_44_10 = "FlanimGetTransformAtFrame"
                    var_48_2 = 0x398
                    ecx_18 = "pLayerDef->mQuad.y == pLayerDef->mQuad.z && pLayerDef->mQuad.z == "
                    "pLayerDef->mQuad.w"
                else
                    if (edx_1 s>= 0 && edx_1 s< *(arg3 + 0x38))
                        int32_t edx_3 = (edx_1 << 7) + *(arg3 + 0x30)
                        float eax_11
                        float edx_4
                        eax_11, edx_4 = sub_6e6b50(arg1, 0, edx_3, arg6)
                        float eax_12
                        float edx_5
                        eax_12, edx_5 = sub_6e6b50(eax_11, 2, edx_3, arg6)
                        int32_t eax_13
                        int32_t edx_6
                        eax_13, edx_6 = sub_6e6b50(eax_12, 3, edx_3, arg6)
                        double xmm0_2 = _mm_cvtps_pd(eax_13)
                        int32_t var_38
                        _libm_sse2_cos_precise(arg5, arg4, var_38)
                        float xmm0_4 = fconvert.s(xmm0_2) * eax_12
                        double xmm0_6 = _mm_cvtps_pd(eax_13)
                        _libm_sse2_sin_precise()
                        float xmm0_8 = fconvert.s(xmm0_6) * eax_12
                        double xmm0_10 = _mm_cvtps_pd(edx_6)
                        _libm_sse2_sin_precise()
                        float xmm0_13 = (fconvert.s(xmm0_10) ^ (data_8937c0.o).d) * edx_5
                        double xmm0_15 = _mm_cvtps_pd(edx_6)
                        _libm_sse2_cos_precise()
                        int32_t* eax_14 = arg7
                        int32_t xmm3 = (zx.o(0)).d
                        int32_t* ecx_16 = eax_14[0x12]
                        float xmm0_17 = fconvert.s(xmm0_15) * edx_5
                        float xmm5_1
                        float xmm6_1
                        
                        if (ecx_16 == 0)
                            xmm5_1 = (zx.o(0)).d
                            xmm6_1 = (zx.o(0)).d
                        else
                            xmm3 = (zx.o(0)).d
                            int32_t* ecx_17 = *sub_5af880(ecx_16)
                            int32_t eax_16 = *ecx_17
                            float xmm1_2 = ecx_17[3] f* ecx_17[2]
                            double xmm0_20[0x2] = _mm_cvtepi32_pd(zx.q(eax_16)) f+
                                *((eax_16 u>> 0x1f << 3) + &data_893660)
                            int32_t eax_18 = ecx_17[1]
                            xmm5_1 = _mm_cvtpd_ps(xmm0_20) * xmm1_2
                            eax_14 = arg7
                            xmm6_1 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_18)) f+
                                *((eax_18 u>> 0x1f << 3) + &data_893660)) * xmm1_2
                        
                        float var_38_1
                        float var_20_3
                        float xmm7
                        
                        if (*(arg3 + 0x5c) != 0)
                            float xmm5_2 = xmm5_1 / xmm6_1
                            xmm7 = -0.5f
                            xmm6_1 = 0.5f
                            xmm3 = xmm5_2 * -0.5f
                            xmm5_1 = xmm5_2 * 0.5f
                            var_38_1 = -0.5f
                            var_20_3 = xmm5_1
                        else if (*(arg3 + 0x5d) == 0)
                            xmm7 = (zx.o(0)).d
                            var_38_1 = 0f
                            var_20_3 = xmm5_1
                        else
                            float xmm1_4 = xmm5_1 * 0.5f
                            xmm7 = xmm6_1 * -0.5f
                            xmm3 = xmm5_1 * -0.5f
                            xmm5_1 = xmm1_4
                            xmm6_1 = xmm6_1 * 0.5f
                            var_20_3 = xmm1_4
                            var_38_1 = xmm7
                        
                        eax_14[2] = 0
                        eax_14[3] = 0
                        eax_14[6] = 0x3f800000
                        float var_18_3 = xmm3
                        eax_14[7] = 0
                        eax_14[0xa] = 0
                        eax_14[0xb] = 0x3f800000
                        eax_14[0xe] = 0x3f800000
                        *eax_14 = xmm0_13 * xmm7 + xmm0_4 f* xmm3 + eax_11
                        eax_14[0xf] = 0x3f800000
                        eax_14[1] = xmm0_17 * xmm7 + xmm0_8 f* xmm3 + edx_4
                        eax_14[4] = xmm0_13 * var_38_1 + xmm0_4 * var_20_3 + eax_11
                        eax_14[5] = xmm0_17 * var_38_1 + xmm0_8 * var_20_3 + edx_4
                        eax_14[8] = xmm0_13 * xmm6_1 + xmm0_4 * var_18_3 + eax_11
                        eax_14[9] = xmm0_17 * xmm6_1 + xmm0_8 * var_18_3 + edx_4
                        eax_14[0xc] = xmm0_13 * xmm6_1 + xmm0_4 * xmm5_1 + eax_11
                        eax_14[0xd] = xmm0_17 * xmm6_1 + xmm0_8 * xmm5_1 + edx_4
                        return eax_14
                    
                    char const* const var_44_9 = "FlanimGetTransformAtFrame"
                    var_48_2 = 0x39c
                    ecx_18 = "vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount"

sub_63b870(arg1, &data_801800, ecx_18, "C:\x\ax2017\Engine\Flanim.cpp", var_48_2, 
    "FlanimGetTransformAtFrame")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
