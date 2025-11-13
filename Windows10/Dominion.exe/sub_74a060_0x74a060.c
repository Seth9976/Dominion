// 函数: sub_74a060
// 地址: 0x74a060
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
void* eax_1 = __security_cookie ^ &__saved_ebp
void* var_14 = eax_1
int32_t* ecx = data_1512450
char var_31 = 0
char const* const var_cc
int32_t var_c8
char const* const var_c4_3
char* ecx_1

if (ecx[1] == 0x1e)
    int32_t* result = sub_5af880(ecx)
    int32_t edi_1 = 0
    int32_t* result_1 = result
    
    if (data_151345c s<= 0)
    label_74a5bf:
        CookieCheckFunction(result)
        return result
    
    while (true)
        void* eax_2
        int32_t* ecx_3
        eax_2, ecx_3 = sub_744f10((&data_151245c)[edi_1], nullptr)
        eax_1 = *(eax_2 + 4)
        float var_60
        int128_t var_50
        float var_48
        float var_44
        
        if (eax_1 == 1 || eax_1 == 4 || eax_1 == 5)
            int32_t* ecx_5 = *(eax_2 + 0x88)
            
            if (ecx_5 == 0)
                var_c4_3 = "SizeToSource"
                var_c8 = 0x7fe
                var_cc = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
                ecx_1 = "el.image"
                break
            
            sub_69ec60(ecx_5)
            *(eax_2 + 0x88)
            float eax_10
            int32_t edx_2
            eax_10, edx_2 = sub_5a0e40()
            float xmm1_16 = *(eax_2 + 0x18) f+ *(eax_2 + 0x10)
            float xmm0_23 = *(eax_2 + 0x1c) f+ *(eax_2 + 0x14)
            float var_58 = eax_10
            int32_t var_54_1 = edx_2
            var_48 = xmm1_16 * 0.5f
            var_44 = xmm0_23 * 0.5f
            float var_b0[0x4]
            int128_t xmm1_18 = *sub_5af7f0(&var_b0, &var_58, &var_50:8, &var_b0)
            float xmm0_25 = xmm1_18.d
            float xmm0_26
            
            if (0f f<= xmm1_18)
                xmm0_26 = xmm0_25 + 0.5f
            else
                xmm0_26 = xmm0_25 - 0.5f
            
            float xmm3_7 = xmm1_18:4.d
            float xmm5_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_26)))
            float xmm0_28
            
            if (0f <= xmm3_7)
                xmm0_28 = xmm3_7 + 0.5f
            else
                xmm0_28 = xmm3_7 - 0.5f
            
            float xmm0_30 = xmm1_18:8.d f- xmm1_18
            float xmm1_20 = xmm1_18:0xc.d - xmm3_7
            float xmm4_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_28)))
            float xmm0_31
            
            if (0 f<= xmm0_30)
                xmm0_31 = xmm0_30 + 0.5f
            else
                xmm0_31 = xmm0_30 - 0.5f
            
            float xmm3_9 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_31)))
            float xmm1_21
            
            if (0f <= xmm1_20)
                xmm1_21 = xmm1_20 + 0.5f
            else
                xmm1_21 = xmm1_20 - 0.5f
            
            float var_8c_1 = xmm4_6
            float var_88_1 = xmm3_9 + xmm5_6
            float var_84_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_21))) + xmm4_6
            *(eax_2 + 0x10) = xmm5_6.o
            ecx_3.b = var_31
        else if (eax_1 == 2)
            int32_t* ecx_4 = *(eax_2 + 0xc8)
            
            if (ecx_4[1] != 0x1e)
                goto label_74a098
            
            void* eax_3 = sub_5af880(ecx_4)
            uint128_t xmm5_1 = zx.o(*(eax_2 + 0xb0))
            float xmm3_1 = *(eax_2 + 0xb4)
            float xmm4_1[0x4] = *(eax_3 + 0xc)
            float xmm2_1 = *(eax_2 + 0xb8)
            float xmm6_2 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0xac)))
            float xmm5_2 = _mm_cvtepi32_ps(xmm5_1)
            float xmm1_4 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xaa)
            float xmm0_7 = (_mm_shuffle_ps(xmm4_1, xmm4_1, 0xff)
                - _mm_shuffle_ps(xmm4_1, xmm4_1, 0x55)) * xmm6_2 + xmm3_1 * (xmm6_2 - 1f)
            float var_6c = (xmm1_4 f- xmm4_1) * xmm5_2 + xmm2_1 * (xmm5_2 - 1f)
            float var_68_1 = xmm0_7
            float xmm0_10 = (*(eax_2 + 0x1c) f+ *(eax_2 + 0x14)) * 0.5f
            float var_64 = (*(eax_2 + 0x18) f+ *(eax_2 + 0x10)) * 0.5f
            var_60 = xmm0_10
            float var_a0[0x4]
            int128_t xmm1_11 = *sub_5af7f0(&var_a0, &var_6c, &var_64, &var_a0)
            float xmm0_11 = xmm1_11.d
            float xmm0_12
            
            if (0f f<= xmm1_11)
                xmm0_12 = xmm0_11 + 0.5f
            else
                xmm0_12 = xmm0_11 - 0.5f
            
            float xmm3_3 = xmm1_11:4.d
            float xmm5_4 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_12)))
            float xmm0_14
            
            if (0f <= xmm3_3)
                xmm0_14 = xmm3_3 + 0.5f
            else
                xmm0_14 = xmm3_3 - 0.5f
            
            float xmm0_16 = xmm1_11:8.d f- xmm1_11
            float xmm1_13 = xmm1_11:0xc.d - xmm3_3
            float xmm4_4 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_14)))
            float xmm0_17
            
            if (0 f<= xmm0_16)
                xmm0_17 = xmm0_16 + 0.5f
            else
                xmm0_17 = xmm0_16 - 0.5f
            
            float xmm3_5 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_17)))
            float xmm1_14
            
            if (0f <= xmm1_13)
                xmm1_14 = xmm1_13 + 0.5f
            else
                xmm1_14 = xmm1_13 - 0.5f
            
            float var_7c_1 = xmm4_4
            float var_78_1 = xmm3_5 + xmm5_4
            float var_74_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_14))) + xmm4_4
            *(eax_2 + 0x10) = xmm5_4.o
            ecx_3.b = var_31
        else if (eax_1 != 6)
            ecx_3.b = var_31
        else
            ecx_3.b = 1
            var_31 = 1
        
        result = data_151345c
        edi_1 += 1
        
        if (edi_1 s>= result)
            if (ecx_3.b == 0)
                goto label_74a5bf
            
            int32_t edi_2 = 0
            
            if (result s<= 0)
                goto label_74a5bf
            
            while (true)
                result = sub_744f10((&data_151245c)[edi_2], &var_60)
                
                if (result[1] == 6)
                    float edx_5 = var_60
                    int32_t eax_17 = result[0x1a]
                    int32_t esi_2 = *result_1
                    int32_t ecx_10 = edx_5 i+ 2
                    var_50 = *(edx_5 i* 0x178 + esi_2 + 0x188)
                    
                    if (eax_17 != 0xffffffff)
                        int32_t edx_7 = edx_5 i+ eax_17
                        
                        if (ecx_10 s<= edx_7)
                            float xmm4_8 = var_44
                            int128_t xmm1_23 = var_48
                            int32_t xmm3_12 = var_50:4.d
                            int128_t xmm0_37 = var_50.d
                            eax_1 = ecx_10 * 0x178 + 0x14 + esi_2
                            
                            while (not(xmm1_23 f< xmm0_37))
                                if (xmm4_8 f< xmm3_12)
                                    break
                                
                                int128_t xmm2_6 = *(eax_1 - 4)
                                
                                if (not(xmm2_6 f> xmm0_37))
                                    xmm0_37 = xmm2_6
                                
                                int128_t xmm5_9 = *(eax_1 + 4)
                                int128_t xmm2_7 = xmm0_37
                                int32_t var_54_3
                                int128_t xmm6_4
                                
                                if (xmm1_23 f<= xmm5_9)
                                    xmm1_23 = xmm5_9
                                    var_54_3 = xmm2_7
                                    xmm0_37 = xmm2_7
                                    xmm6_4 = xmm2_7
                                else
                                    var_54_3 = xmm0_37
                                    xmm6_4 = xmm0_37
                                
                                int32_t xmm7_2 = *eax_1
                                
                                if (not(xmm7_2 f> xmm3_12))
                                    xmm0_37 = var_54_3
                                    xmm3_12 = xmm7_2
                                    xmm6_4 = xmm2_7
                                
                                float xmm2_8 = *(eax_1 + 8)
                                
                                if (not(xmm4_8 > xmm2_8))
                                    xmm4_8 = xmm2_8
                                    xmm0_37 = xmm6_4
                                
                                ecx_10 += 1
                                var_50.d = xmm0_37
                                eax_1 += 0x178
                                var_50:4.d = xmm3_12
                                var_48 = xmm1_23
                                var_44 = xmm4_8
                                
                                if (ecx_10 s> edx_7)
                                    goto label_74a5a7
                            
                        label_74a5cb:
                            var_c4_3 = "RectUnion"
                            var_c8 = 0xdb
                            var_cc = "C:\x\ax2017\Engine\Rect.cpp"
                            ecx_1 = "RectIsNormalized(r0)"
                            break
                    else
                        int32_t edx_6 = result_1[2]
                        
                        if (ecx_10 s< edx_6)
                            float xmm4_7 = var_44
                            int128_t xmm1_22 = var_48
                            int32_t xmm3_11 = var_50:4.d
                            int128_t xmm0_36 = var_50.d
                            eax_1 = ecx_10 * 0x178 + 0x14 + esi_2
                            
                            while (not(xmm1_22 f< xmm0_36))
                                if (xmm4_7 f< xmm3_11)
                                    break
                                
                                int128_t xmm2_3 = *(eax_1 - 4)
                                
                                if (not(xmm2_3 f> xmm0_36))
                                    xmm0_36 = xmm2_3
                                
                                int128_t xmm5_7 = *(eax_1 + 4)
                                int128_t xmm2_4 = xmm0_36
                                int32_t var_54_2
                                int128_t xmm6_3
                                
                                if (xmm1_22 f<= xmm5_7)
                                    xmm1_22 = xmm5_7
                                    var_54_2 = xmm2_4
                                    xmm0_36 = xmm2_4
                                    xmm6_3 = xmm2_4
                                else
                                    var_54_2 = xmm0_36
                                    xmm6_3 = xmm0_36
                                
                                int32_t xmm7_1 = *eax_1
                                
                                if (not(xmm7_1 f> xmm3_11))
                                    xmm0_36 = var_54_2
                                    xmm3_11 = xmm7_1
                                    xmm6_3 = xmm2_4
                                
                                float xmm2_5 = *(eax_1 + 8)
                                
                                if (not(xmm4_7 > xmm2_5))
                                    xmm4_7 = xmm2_5
                                    xmm0_36 = xmm6_3
                                
                                ecx_10 += 1
                                var_50.d = xmm0_36
                                eax_1 += 0x178
                                var_50:4.d = xmm3_11
                                var_48 = xmm1_22
                                var_44 = xmm4_7
                                
                                if (ecx_10 s>= edx_6)
                                    goto label_74a5a7
                            
                            goto label_74a5cb
                    
                label_74a5a7:
                    *(result + 0x10) = var_50
                
                edi_2 += 1
                
                if (edi_2 s>= data_151345c)
                    goto label_74a5bf
            
            break
else
label_74a098:
    var_c4_3 = "UIDefGet"
    var_c8 = 0x127
    var_cc = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI"

sub_63b870(eax_1, &data_801800, ecx_1, var_cc, var_c8, var_c4_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
