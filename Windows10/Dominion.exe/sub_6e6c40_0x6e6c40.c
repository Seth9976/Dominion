// 函数: sub_6e6c40
// 地址: 0x6e6c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_30
char const* const ecx_6

if (arg2 s< 0 || arg2 s>= *(arg3 + 0x28))
    char const* const var_2c_13 = "FlanimGetShapeTransformAtFrame"
    var_30 = 0x33b
    ecx_6 = "layerIndex >= 0 && layerIndex < pFlanimDef->mLayerCount"
else
    int32_t ecx = *(arg3 + 0x20)
    arg1 = arg2 * 3
    void* var_c_1 = arg1
    int32_t edi = *(ecx + (arg1 << 3) + 8)
    
    if (edi s< 0 || edi s>= *(arg3 + 0x38))
        char const* const var_2c_12 = "FlanimGetShapeTransformAtFrame"
        var_30 = 0x340
        ecx_6 = "vertexIndexImage >= 0 && vertexIndexImage < pFlanimDef->mVertexCount"
    else
        int32_t edi_2 = (edi << 7) + *(arg3 + 0x30)
        int32_t eax = sub_6e6a80(arg1, 4, edi_2, arg6)
        arg7[8] = eax
        int32_t eax_1 = sub_6e6a80(eax, 5, edi_2, arg6)
        arg7[9] = eax_1
        arg1 = sub_6e6a80(eax_1, 6, edi_2, arg6)
        
        if (arg1 s< 0 || arg1 s>= *(arg3 + 0x48))
            char const* const var_2c_11 = "FlanimGetShapeTransformAtFrame"
            var_30 = 0x347
            ecx_6 = "imageIndex >=0 && imageIndex < pFlanimDef->mImageCount"
        else
            int32_t eax_2 = *(*(arg3 + 0x40) + (arg1 << 3))
            arg7[0xa] = eax_2
            arg7[0xb] = sub_6e6a80(eax_2, 7, edi_2, arg6)
            arg1 = var_c_1
            int32_t edi_3 = *(ecx + (arg1 << 3) + 8)
            
            if (edi_3 != *(ecx + (arg1 << 3) + 0xc))
                char const* const var_2c_4 = "FlanimGetShapeTransformAtFrame"
                var_30 = 0x34d
                ecx_6 = "pLayerDef->mQuad.x == pLayerDef->mQuad.y"
            else if (edi_3 s< 0 || edi_3 s>= *(arg3 + 0x38))
                char const* const var_2c_10 = "FlanimGetShapeTransformAtFrame"
                var_30 = 0x351
                ecx_6 = "vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount"
            else
                int32_t edi_5 = (edi_3 << 7) + *(arg3 + 0x30)
                int32_t eax_4
                int32_t edx_1
                eax_4, edx_1 = sub_6e6b50(arg1, 0, edi_5, arg6)
                arg7[1] = edx_1
                *arg7 = eax_4
                int32_t eax_5
                int32_t edx_2
                eax_5, edx_2 = sub_6e6b50(eax_4, 2, edi_5, arg6)
                arg7[2] = eax_5
                arg7[3] = edx_2
                int32_t edx_3
                arg1, edx_3 = sub_6e6b50(&arg7[2], 3, edi_5, arg6)
                float xmm2_1 = 1f
                int32_t* ecx_10 = arg7[0xa]
                arg7[4] = arg1
                arg7[5] = edx_3
                float xmm0_5 = 1f
                
                if (ecx_10 != 0)
                    int32_t* ecx_11 = *sub_5af880(ecx_10)
                    int32_t eax_8 = *ecx_11
                    float xmm1_2 = ecx_11[3] f* ecx_11[2]
                    int32_t eax_10 = ecx_11[1]
                    arg1 = eax_10 u>> 0x1f
                    xmm2_1 = _mm_cvtpd_ps(float.d(eax_8) f+ *((eax_8 u>> 0x1f << 3) + &data_893660))
                        * xmm1_2
                    xmm0_5 = _mm_cvtpd_ps(float.d(eax_10) f+ *((arg1 << 3) + &data_893660)) * xmm1_2
                
                arg7[6] = xmm2_1
                arg7[7] = xmm0_5
                
                if (*(arg3 + 0x5c) == 0)
                    if (*(arg3 + 0x5d) == 0)
                        float xmm0_11 = xmm0_5 f* arg7[3]
                        float xmm2_5 = xmm2_1 f* arg7[2]
                        double xmm0_12 = _mm_cvtps_pd(arg7[4])
                        int32_t entry_ebx
                        _libm_sse2_cos_precise(arg5, arg4, entry_ebx)
                        double xmm0_17 = _mm_cvtps_pd(arg7[5])
                        _libm_sse2_sin_precise()
                        float xmm0_20 = fconvert.s(xmm0_12) * xmm2_5 * 0.5f
                            - fconvert.s(xmm0_17) * xmm0_11 * 0.5f f+ *arg7
                        double xmm0_22 = _mm_cvtps_pd(arg7[5])
                        _libm_sse2_cos_precise()
                        double xmm0_27 = _mm_cvtps_pd(arg7[4])
                        double* result = _libm_sse2_sin_precise()
                        float xmm1_10 = fconvert.s(xmm0_22) * xmm0_11 * 0.5f
                            + fconvert.s(xmm0_27) * xmm2_5 * 0.5f f+ arg7[1]
                        *arg7 = xmm0_20
                        arg7[1] = xmm1_10
                        return result
                    
                    char const* const var_2c_9 = "FlanimGetShapeTransformAtFrame"
                    var_30 = 0x370
                    ecx_6 = "Halt"
                else
                    arg1 = &arg7[2]
                    *arg1 = xmm2_1 / xmm0_5 f* *arg1
                    sub_6e8f00(arg1, xmm0_5)
                    char const* const var_2c_8 = "FlanimGetShapeTransformAtFrame"
                    var_30 = 0x369
                    ecx_6 = "Halt"

sub_63b870(arg1, &data_801800, ecx_6, "C:\x\ax2017\Engine\Flanim.cpp", var_30, 
    "FlanimGetShapeTransformAtFrame")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
