// 函数: sub_6a1470
// 地址: 0x6a1470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg3

if (esi[1] == 3)
    arg1 = sub_5af880(arg3)
    int32_t* edi_1 = *arg1
    
    if (edi_1 == 0)
        arg1.b = 0
        return arg1
    
    int32_t* ecx = edi_1[0xa]
    
    if (ecx == 0)
        arg1.b = 0
        return arg1
    
    char const* const var_20_1
    
    if (edi_1[0xc] == 1)
        char* eax = esi[8]
        char* const ecx_1 = &data_801800
        
        if (eax != 0)
            ecx_1 = eax
        
        char* const var_1c_1 = ecx_1
        var_20_1 = "reimporting atlased font texture %s"
    label_6a14b3:
        sub_63b5f0(var_20_1)
        sub_69f4a0(sub_69ec60(esi), 1, esi, 0)
        arg1.b = 0
        return arg1
    
    if (ecx[1] == 3)
        int32_t* ebx_1 = *sub_5af880(ecx)
        
        if (edi_1[0xc] != ebx_1[0xc])
            char* eax_4 = esi[8]
            char* const ecx_4 = &data_801800
            
            if (eax_4 != 0)
                ecx_4 = eax_4
            
            char* const var_1c_2 = ecx_4
            var_20_1 = "didn't find asset in atlas forcing a reimport %s"
            goto label_6a14b3
        
        int32_t eax_5 = *ebx_1
        int32_t ecx_5 = edi_1[0xd]
        int32_t edx_1 = edi_1[0xe]
        int32_t eax_7 = ebx_1[1]
        float xmm1 = 1f / _mm_cvtpd_ps(float.d(eax_5) f+ *((eax_5 u>> 0x1f << 3) + &data_893660))
        float xmm5_1 = float.s(ecx_5) * xmm1
        int32_t eax_9 = *edi_1
        float xmm2 = 1f / _mm_cvtpd_ps(float.d(eax_7) f+ *((eax_7 u>> 0x1f << 3) + &data_893660))
        float xmm3_1 = float.s(edx_1) * xmm2
        int32_t eax_11 = edi_1[1]
        float xmm4_3 = (_mm_cvtpd_ps(float.d(eax_9) f+ *((eax_9 u>> 0x1f << 3) + &data_893660))
            + float.s(ecx_5)) * xmm1 - xmm5_1
        float xmm1_4 = (_mm_cvtpd_ps(float.d(eax_11) f+ *((eax_11 u>> 0x1f << 3) + &data_893660))
            + float.s(edx_1)) * xmm2 - xmm3_1
        *arg4 = xmm4_3 * *arg2 + xmm5_1
        arg4[1] = xmm1_4 * arg2[1] + xmm3_1
        arg4[2] = xmm4_3 * arg2[2] + xmm5_1
        arg4[3] = xmm1_4 * arg2[3] + xmm3_1
        arg4[4] = xmm4_3 * arg2[4] + xmm5_1
        arg4[5] = xmm1_4 * arg2[5] + xmm3_1
        arg4[6] = xmm4_3 * arg2[6] + xmm5_1
        arg4[7] = xmm1_4 * arg2[7] + xmm3_1
        float* eax_13
        eax_13.b = 1
        return eax_13

sub_63b870(arg1, &data_801800, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
    "C:\x\ax2017\Engine\Texture.h", 0x89, "TextureGetDef")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
