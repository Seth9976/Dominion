// 函数: sub_67c150
// 地址: 0x67c150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int32_t edi = 0
char var_91 = 0
float xmm0 = *(data_147abe8 + 0x2c)
int32_t* ecx

if (data_c28c58 s> 0)
    while (true)
        void* eax_3
        int32_t edx_1
        eax_3, ecx, edx_1 = sub_665600((&data_c27c58)[edi])
        int32_t eax_4 = *(eax_3 + 0x15f8)
        int32_t eax_23
        float var_130[0x4]
        int128_t* eax_13
        
        if (eax_4 == 1 || eax_4 == 4 || eax_4 == 5)
            ecx = *(eax_3 + 0x1420)
            
            if (ecx == 0)
                goto label_67c89f
            
            sub_69ec60(ecx)
            *(eax_3 + 0x1420)
            float eax_34
            int32_t edx_5
            eax_34, edx_5 = sub_5a0e40()
            float var_f0 = eax_34
            int32_t var_ec_1 = edx_5
            float var_140[0x4]
            float* eax_35 = sub_64c550(eax_3 + 0x14, xmm0, &var_140)
            float xmm0_38 = (eax_35[3] + eax_35[1]) * 0.5f
            float var_38 = (eax_35[2] + *eax_35) * 0.5f
            float var_34 = xmm0_38
            float var_90[0x4]
            int128_t xmm2_24 = *sub_5af7f0(&var_90, &var_f0, &var_38, &var_90)
            float xmm1_53 = xmm2_24.d
            float xmm1_54
            
            if (0f f<= xmm2_24)
                xmm1_54 = xmm1_53 + 0.5f
            else
                xmm1_54 = xmm1_53 - 0.5f
            
            float xmm3_10 = xmm2_24:4.d
            float xmm5_11 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_54)))
            float xmm1_56
            
            if (0f <= xmm3_10)
                xmm1_56 = xmm3_10 + 0.5f
            else
                xmm1_56 = xmm3_10 - 0.5f
            
            float xmm1_58 = xmm2_24:8.d f- xmm2_24
            float xmm2_26 = xmm2_24:0xc.d - xmm3_10
            float xmm4_10 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_56)))
            float xmm1_59
            
            if (0 f<= xmm1_58)
                xmm1_59 = xmm1_58 + 0.5f
            else
                xmm1_59 = xmm1_58 - 0.5f
            
            float xmm1_61 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_59)))
            float xmm2_27
            
            if (0f <= xmm2_26)
                xmm2_27 = xmm2_26 + 0.5f
            else
                xmm2_27 = xmm2_26 - 0.5f
            
            float var_dc_1 = xmm4_10
            int128_t var_50
            eax_13 = &var_50
            float var_d8_1 = xmm1_61 + xmm5_11
            float var_d4_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_27))) + xmm4_10
            var_50 = xmm5_11.o
        label_67c897:
            sub_667c30(eax_13, 0x76, eax_3, eax_13)
        label_67c89f:
            ecx.b = var_91
        label_67c8a5:
            int32_t eax_42 = data_c28c58
            edi += 1
            
            if (edi s< eax_42)
                continue
            else
                if (ecx.b == 0)
                    break
                
                ecx = nullptr
                int32_t* var_a0_2 = nullptr
                
                if (eax_42 s<= 0)
                    break
                
                while (true)
                    void* eax_43 = sub_665600((&data_c27c58)[ecx])
                    
                    if (*(eax_43 + 0x15f8) == 6)
                        eax_23 = *(eax_43 + 0x189c)
                        
                        if (eax_23 s< 0)
                            break
                        
                        if (eax_23 s> 0)
                            uint32_t eax_45 = sub_64e7a0(sub_64c870(eax_43, nullptr))
                            char const* const var_1cc
                            int32_t var_1c8_1
                            char const* const var_1c4_20
                            char* ecx_33
                            
                            if (*(eax_45 + 0x1718) != eax_43)
                                var_1c4_20 = "UI2GetChild"
                                var_1c8_1 = 0x1858
                                var_1cc = "C:\x\ax2017\Engine\UI2.cpp"
                                ecx_33 = "child.parent == &ui"
                            label_67ccfb:
                                sub_63b870(eax_45, &data_801800, ecx_33, var_1cc, var_1c8_1, 
                                    var_1c4_20)
                                
                                if (sub_63bc30() != 0)
                                    breakpoint
                                
                                sub_63bb00()
                                noreturn
                            
                            float var_40
                            sub_64c550(eax_45 + 0x14, xmm0, &var_40)
                            int32_t eax_46 = *(eax_43 + 0x189c)
                            int32_t ecx_20 = 0
                            int32_t esi_2 = 0
                            int32_t var_9c_2 = 0
                            float var_3c
                            
                            if (eax_46 != 0)
                                do
                                    eax_45 = *(eax_43 + (esi_2 << 2) + 0x179c)
                                    
                                    if (ecx_20 != 0)
                                        if (eax_45 == 0)
                                            var_1c4_20 = "DataArray<struct UI2>::DataArrayGet"
                                            var_1c8_1 = 0x6c
                                            var_1cc = "C:\x\ax2017\Engine\DataArray.h"
                                            ecx_33 = "id != DATAID_NULL"
                                            goto label_67ccfb
                                        
                                        uint32_t ecx_21 = zx.d(eax_45.w)
                                        void* ecx_22
                                        int32_t edx_7
                                        
                                        if (ecx_21 u< data_c23bac)
                                            edx_7 = data_c23ba8
                                            ecx_22 = ecx_21 * 0x18d0
                                        
                                        if (ecx_21 u>= data_c23bac
                                                || *(ecx_22 + edx_7 + 0x18c8) != eax_45)
                                            var_1c4_20 = "DataArray<struct UI2>::DataArrayGet"
                                            var_1c8_1 = 0x6d
                                            var_1cc = "C:\x\ax2017\Engine\DataArray.h"
                                            ecx_33 = "DataArrayTryToGet(id) != NULL"
                                            goto label_67ccfb
                                        
                                        float* eax_47 =
                                            sub_64c550(ecx_22 + edx_7 + 0x14, xmm0, &var_90)
                                        float xmm3_11 = var_38
                                        float xmm2_30 = var_40
                                        float xmm0_43
                                        float xmm1_63
                                        
                                        if (not(xmm3_11 < xmm2_30))
                                            xmm0_43 = var_34
                                            xmm1_63 = var_3c
                                        
                                        if (xmm3_11 < xmm2_30 || xmm0_43 < xmm1_63)
                                            sub_63b870(eax_47, &data_801800, 
                                                "RectIsNormalized(r0)", 
                                                "C:\x\ax2017\Engine\Rect.cpp", 0xdb, "RectUnion")
                                            
                                            if (sub_63bc30() != 0)
                                                breakpoint
                                            
                                            sub_63bb00()
                                            noreturn
                                        
                                        float xmm4_11 = *eax_47
                                        
                                        if (not(xmm4_11 > xmm2_30))
                                            xmm2_30 = xmm4_11
                                        
                                        float xmm4_12 = eax_47[2]
                                        
                                        if (not(xmm3_11 > xmm4_12))
                                            xmm3_11 = xmm4_12
                                        
                                        float xmm4_13 = eax_47[1]
                                        
                                        if (not(xmm4_13 > xmm1_63))
                                            xmm1_63 = xmm4_13
                                        
                                        float xmm4_14 = eax_47[3]
                                        
                                        if (not(xmm0_43 > xmm4_14))
                                            xmm0_43 = xmm4_14
                                        
                                        ecx_20 = var_9c_2
                                        var_40 = xmm2_30
                                        var_3c = xmm1_63
                                        var_38 = xmm3_11
                                        var_34 = xmm0_43
                                    else
                                        ecx_20 = 1
                                        var_9c_2 = 1
                                    
                                    esi_2 += 1
                                while (esi_2 != eax_46)
                            
                            float* eax_48 = sub_64c550(eax_43 + 0x14, xmm0, &var_140)
                            int32_t esi_3 = 0
                            float xmm0_45 = var_40 - *eax_48
                            float xmm1_65 = var_3c - eax_48[1]
                            uint32_t eax_49 = *(eax_43 + 0x189c)
                            uint32_t var_b4_2 = eax_49
                            float var_bc_2 = xmm0_45
                            float var_c4_2 = xmm1_65
                            
                            if (eax_49 != 0)
                                while (true)
                                    int32_t edx_9 = *(eax_43 + (esi_3 << 2) + 0x179c)
                                    int32_t var_1c8
                                    char const* const ecx_32
                                    
                                    if (edx_9 == 0)
                                        char const* const var_1c4_19 =
                                            "DataArray<struct UI2>::DataArrayGet"
                                        var_1c8 = 0x6c
                                        ecx_32 = "id != DATAID_NULL"
                                    else
                                        eax_49 = zx.d(edx_9.w)
                                        
                                        if (eax_49 u< data_c23bac)
                                            eax_49 = data_c23ba8 + eax_49 * 0x18d0
                                            
                                            if (*(eax_49 + 0x18c8) == edx_9)
                                                float xmm0_46 = xmm0_45 ^ (data_8937c0.o).d
                                                float xmm1_66 = xmm1_65 ^ (data_8937c0.o).d
                                                float* eax_51 =
                                                    sub_64c550(eax_49 + 0x14, xmm0, &var_130)
                                                float var_d8_2 = xmm0_46 + eax_51[2]
                                                float var_dc_2 = xmm1_66 + eax_51[1]
                                                float var_d4_2 = xmm1_66 + eax_51[3]
                                                var_50 = (xmm0_46 + *eax_51).o
                                                eax_49 = sub_667c30(&var_50, 0x76, eax_49, &var_50)
                                                xmm0_45 = var_bc_2
                                                esi_3 += 1
                                                xmm1_65 = var_c4_2
                                                
                                                if (esi_3 == var_b4_2)
                                                    break
                                                
                                                continue
                                        
                                        char const* const var_1c4_18 =
                                            "DataArray<struct UI2>::DataArrayGet"
                                        var_1c8 = 0x6d
                                        ecx_32 = "DataArrayTryToGet(id) != NULL"
                                    
                                    sub_63b870(eax_49, &data_801800, ecx_32, 
                                        "C:\x\ax2017\Engine\DataArray.h", var_1c8, 
                                        "DataArray<struct UI2>::DataArrayGet")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                            
                            sub_667c30(&var_40, 0x76, eax_43, &var_40)
                    
                    ecx = var_a0_2 + 1
                    var_a0_2 = ecx
                    
                    if (ecx s>= data_c28c58)
                        goto label_67cba7
        else
            if (eax_4 == 8)
                int32_t* ecx_2 = *(eax_3 + 0x1490)
                
                if (ecx_2[1] != 0x18)
                    sub_63b870(eax_4, &data_801800, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
                        "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2ed, "FlanimGetDef")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                void* eax_5 = sub_5af880(ecx_2)
                float xmm0_2 = *(eax_5 + 0x50) - 0f
                float var_c8 = *(eax_5 + 0x4c) - 0f
                float var_c4_1 = xmm0_2
                float var_150[0x4]
                float* eax_6 = sub_64c550(eax_3 + 0x14, xmm0, &var_150)
                float xmm0_5 = (eax_6[3] + eax_6[1]) * 0.5f
                float var_c0 = (eax_6[2] + *eax_6) * 0.5f
                float var_bc_1 = xmm0_5
                float var_160[0x4]
                int128_t xmm2_2 = *sub_5af7f0(&var_160, &var_c8, &var_c0, &var_160)
                float xmm1_6 = xmm2_2.d
                float xmm1_7
                
                if (0f f<= xmm2_2)
                    xmm1_7 = xmm1_6 + 0.5f
                else
                    xmm1_7 = xmm1_6 - 0.5f
                
                float xmm3_1 = xmm2_2:4.d
                float xmm5_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_7)))
                float xmm1_9
                
                if (0f <= xmm3_1)
                    xmm1_9 = xmm3_1 + 0.5f
                else
                    xmm1_9 = xmm3_1 - 0.5f
                
                float xmm1_11 = xmm2_2:8.d f- xmm2_2
                float xmm2_4 = xmm2_2:0xc.d - xmm3_1
                float xmm4_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_9)))
                float xmm1_12
                
                if (0 f<= xmm1_11)
                    xmm1_12 = xmm1_11 + 0.5f
                else
                    xmm1_12 = xmm1_11 - 0.5f
                
                float xmm1_14 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_12)))
                float xmm2_5
                
                if (0f <= xmm2_4)
                    xmm2_5 = xmm2_4 + 0.5f
                else
                    xmm2_5 = xmm2_4 - 0.5f
                
                float var_fc_1 = xmm4_2
                int128_t var_60
                eax_13 = &var_60
                float var_f8_1 = xmm1_14 + xmm5_2
                float var_f4_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_5))) + xmm4_2
                var_60 = xmm5_2.o
                goto label_67c897
            
            if (eax_4 == 0xa || eax_4 == 9 || eax_4 == 7)
                goto label_67c89f
            
            if (eax_4 != 2)
                if (eax_4 != 6)
                    goto label_67c89f
                
                ecx.b = 1
                var_91 = 1
                goto label_67c8a5
            
            ecx = *(eax_3 + 0x14e0)
            
            if (ecx != 0)
                void var_170
                int128_t* eax_15 = sub_64f350(&var_170, edx_1, ecx, &var_170)
                uint128_t xmm3_2 = zx.o(*(eax_3 + 0x14c0))
                float xmm2_7 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14bc)))
                float xmm4_3[0x4] = *eax_15
                float xmm3_3 = _mm_cvtepi32_ps(xmm3_2)
                float xmm1_17 = _mm_shuffle_ps(xmm4_3, xmm4_3, 0xaa)
                float xmm0_14 = (_mm_shuffle_ps(xmm4_3, xmm4_3, 0xff)
                    - _mm_shuffle_ps(xmm4_3, xmm4_3, 0x55)) * xmm3_3
                    + (xmm3_3 - 1f) f* *(eax_3 + 0x14d0)
                float var_b8 = (xmm1_17 f- xmm4_3) * xmm2_7 + (xmm2_7 - 1f) f* *(eax_3 + 0x14cc)
                float var_b4_1 = xmm0_14
                float var_180[0x4]
                float* eax_16 = sub_64c550(eax_3 + 0x14, xmm0, &var_180)
                float xmm0_17 = (eax_16[3] + eax_16[1]) * 0.5f
                float var_b0 = (eax_16[2] + *eax_16) * 0.5f
                float var_ac_1 = xmm0_17
                float var_190[0x4]
                int128_t xmm2_9 = *sub_5af7f0(&var_190, &var_b8, &var_b0, &var_190)
                float xmm1_24 = xmm2_9.d
                float xmm1_25
                
                if (0f f<= xmm2_9)
                    xmm1_25 = xmm1_24 + 0.5f
                else
                    xmm1_25 = xmm1_24 - 0.5f
                
                float xmm3_4 = xmm2_9:4.d
                float xmm5_7 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_25)))
                float xmm1_27
                
                if (0f <= xmm3_4)
                    xmm1_27 = xmm3_4 + 0.5f
                else
                    xmm1_27 = xmm3_4 - 0.5f
                
                float xmm1_29 = xmm2_9:8.d f- xmm2_9
                float xmm2_11 = xmm2_9:0xc.d - xmm3_4
                float xmm4_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_27)))
                float xmm1_30
                
                if (0 f<= xmm1_29)
                    xmm1_30 = xmm1_29 + 0.5f
                else
                    xmm1_30 = xmm1_29 - 0.5f
                
                float xmm1_32 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_30)))
                float xmm2_12
                
                if (0f <= xmm2_11)
                    xmm2_12 = xmm2_11 + 0.5f
                else
                    xmm2_12 = xmm2_11 - 0.5f
                
                float var_10c_1 = xmm4_6
                int128_t var_70
                eax_13 = &var_70
                float var_108_1 = xmm1_32 + xmm5_7
                float var_104_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_12))) + xmm4_6
                var_70 = xmm5_7.o
                goto label_67c897
            
            eax_23 = *(eax_3 + 0x189c)
            
            if (eax_23 s>= 0)
                if (eax_23 s<= 0)
                    goto label_67c89f
                
                float xmm0_23 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14bc)))
                float xmm0_25 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14c0)))
                uint32_t eax_25 = sub_64e7a0(sub_64c870(eax_3, nullptr))
                
                if (*(eax_25 + 0x1718) != eax_3)
                    sub_63b870(eax_25, &data_801800, "child.parent == &ui", 
                        "C:\x\ax2017\Engine\UI2.cpp", 0x1858, "UI2GetChild")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                float var_1a0[0x4]
                float* eax_26 = sub_64c550(eax_25 + 0x14, xmm0, &var_1a0)
                float var_a4_1 =
                    (eax_26[3] - eax_26[1]) * xmm0_25 + (xmm0_25 - 1f) f* *(eax_3 + 0x14d0)
                float var_a8 = (eax_26[2] - *eax_26) * xmm0_23 + (xmm0_23 - 1f) f* *(eax_3 + 0x14cc)
                float var_1b0[0x4]
                float* eax_27 = sub_64c550(eax_3 + 0x14, xmm0, &var_1b0)
                float xmm0_31 = (eax_27[3] + eax_27[1]) * 0.5f
                float var_e8 = (eax_27[2] + *eax_27) * 0.5f
                float var_e4_1 = xmm0_31
                int128_t xmm2_19 = *sub_5af7f0(&var_130, &var_a8, &var_e8, &var_130)
                float xmm1_40 = xmm2_19.d
                float xmm1_41
                
                if (0f f<= xmm2_19)
                    xmm1_41 = xmm1_40 + 0.5f
                else
                    xmm1_41 = xmm1_40 - 0.5f
                
                float xmm3_9 = xmm2_19:4.d
                float xmm5_9 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_41)))
                float xmm1_43
                
                if (0f <= xmm3_9)
                    xmm1_43 = xmm3_9 + 0.5f
                else
                    xmm1_43 = xmm3_9 - 0.5f
                
                float xmm1_45 = xmm2_19:8.d f- xmm2_19
                float xmm2_21 = xmm2_19:0xc.d - xmm3_9
                float xmm4_8 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_43)))
                float xmm1_46
                
                if (0 f<= xmm1_45)
                    xmm1_46 = xmm1_45 + 0.5f
                else
                    xmm1_46 = xmm1_45 - 0.5f
                
                float xmm1_48 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_46)))
                float xmm2_22
                
                if (0f <= xmm2_21)
                    xmm2_22 = xmm2_21 + 0.5f
                else
                    xmm2_22 = xmm2_21 - 0.5f
                
                float var_11c_1 = xmm4_8
                int128_t var_80
                eax_13 = &var_80
                float var_118_1 = xmm1_48 + xmm5_9
                float var_114_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_22))) + xmm4_8
                var_80 = xmm5_9.o
                goto label_67c897
        sub_63b870(eax_23, &data_801800, "numChildren >= 0", "C:\x\ax2017\Engine\UI2.cpp", 0xba8, 
            "UI2::countChildren")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

label_67cba7:
ecx.b = 1
uint32_t result = sub_665770(ecx)
CookieCheckFunction(result)
return result
