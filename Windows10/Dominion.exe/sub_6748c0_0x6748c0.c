// 函数: sub_6748c0
// 地址: 0x6748c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
void* edx
ecx, edx = __chkstk(0x10c8)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t var_1058 = 0
int32_t var_1074 = ecx
int32_t var_1010[0x3f8]
sub_6674e0(&var_1058, &var_1010, data_c27c24, &var_1058, &data_c27c58, data_c28c58)
int32_t eax_5 = var_1058 << 2 s>> 2
void* eax_6 = sub_4d4e30(eax_5, &var_1010[var_1058], &var_1010, eax_5, sub_667620)
int32_t* edi = data_c27c20
int32_t var_18_2
char const* const var_14_2
char* ecx_4
char const* const edx_3

if (edi != 0)
    if (edi[1] == 0x22)
        eax_6 = sub_5af880(edi)
        void* var_1084_1 = eax_6
        uint32_t eax_7
        int96_t xmm0_1
        
        if (ecx != 0)
            if (edx == 0 || *(edx + 0x1600) == edi)
                if (ecx != 1)
                    if (ecx != 2)
                        goto label_6749ed
                    
                    eax_7 = *(edx + 0x1718)
                    goto label_6749f9
                
                int128_t var_1030 = *(edx + 0x1620)
                xmm0_1 = (*(edx + 0x1630)).12
            label_674a10:
                int32_t esi_1
                
                if (edx != 0)
                    esi_1 = *(edx + 0x1604)
                else
                    esi_1 = 0xffffffff
                
                int32_t var_1060 = esi_1
                float xmm0_3 = *(data_147abe8 + 0x2c)
                int32_t eax_9 = 0
                int32_t var_1078 = 0
                
                if (var_1058 s> 0)
                    do
                        uint32_t eax_10 = sub_64e7a0(var_1010[eax_9])
                        float var_10a4
                        sub_64c550(eax_10 + 0x14, xmm0_3, &var_10a4)
                        float xmm1_1 = *arg2
                        xmm1_1 f- 0
                        float var_1064_1 = xmm1_1
                        float* eax_11
                        eax_11:1.b = (xmm1_1 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2 | (xmm1_1 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        bool p_4
                        
                        if (not(p_2))
                            float xmm0_4 = arg2[1]
                            xmm0_4 f- 0
                            eax_11:1.b = (xmm0_4 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
                            p_4 = unimplemented  {test ah, 0x44}
                        
                        float xmm2_4
                        
                        if (p_2 || p_4)
                            xmm2_4 = arg2[1]
                        else
                            float xmm0_5 = 1f f/ data_c27c48
                            void* eax_12 = *(eax_10 + 0x1718)
                            xmm1_1 = (*(eax_12 + 0x1634) f- xmm0_1:4.d) * xmm0_5
                            xmm2_4 = (*(eax_12 + 0x1638) f- xmm0_1:8.d) * xmm0_5
                            var_1064_1 = xmm1_1
                        
                        float xmm4_2 = xmm1_1 + var_10a4
                        float var_10a0
                        float xmm3_2 = xmm2_4 + var_10a0
                        float xmm2_6
                        
                        if (0f <= xmm4_2)
                            xmm2_6 = xmm4_2 + 0.5f
                        else
                            xmm2_6 = xmm4_2 - 0.5f
                        
                        float xmm7_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_6)))
                        float xmm2_8
                        
                        if (0f <= xmm3_2)
                            xmm2_8 = xmm3_2 + 0.5f
                        else
                            xmm2_8 = xmm3_2 - 0.5f
                        
                        float var_109c
                        float xmm0_8 = xmm1_1 + var_109c - xmm4_2
                        float var_1098
                        float xmm1_6 = xmm2_4 + var_1098 - xmm3_2
                        float xmm5_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_8)))
                        float xmm0_9
                        
                        if (0f <= xmm0_8)
                            xmm0_9 = xmm0_8 + 0.5f
                        else
                            xmm0_9 = xmm0_8 - 0.5f
                        
                        float xmm2_10 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_9)))
                        float xmm1_7
                        
                        if (0f <= xmm1_6)
                            xmm1_7 = xmm1_6 + 0.5f
                        else
                            xmm1_7 = xmm1_6 - 0.5f
                        
                        *(eax_10 + 0x1364) = 0
                        *(eax_10 + 0x1608) = 0
                        float var_10b4_1 = xmm5_2
                        float var_10b0_1 = xmm2_10 + xmm7_2
                        float var_10ac_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_7))) + xmm5_2
                        int128_t var_1040 = xmm7_2.o
                        void* eax_17 = sub_667ae0(eax_10, 0x76)
                        
                        if (eax_17 == 0)
                            sub_63b870(eax_17, &data_801800, "&attribMap", 
                                "C:\x\ax2017\Engine\UI2.cpp", 0x3a49, "AssignPropertyRect")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        sub_667a60(eax_17, 0x76, eax_17, &var_1040)
                        int32_t* eax_18 = sub_64cc90(eax_10)
                        int32_t var_14_5 = 0x69
                        int32_t var_18_3 = data_1724a80
                        int32_t* eax_19 = sub_64cc90(eax_10)
                        int32_t* eax_20 =
                            sub_6dd1e0(eax_19, eax_19, &data_8cae70, var_18_3, var_14_5)
                        
                        if (eax_20 != 0)
                            int32_t i = 0
                            
                            if (eax_20[2] s> 0)
                                int32_t esi_2 = 0
                                
                                do
                                    int32_t eax_21 = *eax_20
                                    int32_t ecx_14 = 0
                                    int32_t edx_5 = *(eax_21 + esi_2 + 0x18)
                                    
                                    if (edx_5 s> 0)
                                        int32_t* eax_22 = *(eax_21 + esi_2 + 0x20)
                                        
                                        do
                                            if (*eax_22 == 0x76)
                                                float* eax_23 = sub_6dd1e0(eax_22, eax_18, 
                                                    &data_8cae70, data_1777578, 0x76)
                                                float xmm4_4 = var_1064_1 + *eax_23
                                                float xmm3_4 = xmm2_4 + eax_23[1]
                                                float xmm0_15 = var_1064_1 + eax_23[2]
                                                float xmm1_9 = xmm2_4 + eax_23[3]
                                                float xmm2_13
                                                
                                                if (0f <= xmm4_4)
                                                    xmm2_13 = xmm4_4 + 0.5f
                                                else
                                                    xmm2_13 = xmm4_4 - 0.5f
                                                
                                                float xmm7_4 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_13)))
                                                float xmm2_15
                                                
                                                if (0f <= xmm3_4)
                                                    xmm2_15 = xmm3_4 + 0.5f
                                                else
                                                    xmm2_15 = xmm3_4 - 0.5f
                                                
                                                float xmm0_16 = xmm0_15 - xmm4_4
                                                float xmm1_10 = xmm1_9 - xmm3_4
                                                float xmm6_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_15)))
                                                float xmm0_17
                                                
                                                if (0f <= xmm0_16)
                                                    xmm0_17 = xmm0_16 + 0.5f
                                                else
                                                    xmm0_17 = xmm0_16 - 0.5f
                                                
                                                float xmm2_17 =
                                                    _mm_cvtepi32_ps(zx.o(int.d(xmm0_17)))
                                                float xmm1_11
                                                
                                                if (0f <= xmm1_10)
                                                    xmm1_11 = xmm1_10 + 0.5f
                                                else
                                                    xmm1_11 = xmm1_10 - 0.5f
                                                
                                                float var_10c4_1 = xmm6_2
                                                int128_t var_1050
                                                int32_t* var_14_7 = &var_1050
                                                float var_10c0_1 = xmm2_17 + xmm7_4
                                                float var_10bc_1 =
                                                    _mm_cvtepi32_ps(zx.o(int.d(xmm1_11))) + xmm6_2
                                                var_1050 = xmm7_4.o
                                                sub_667a60(&var_1050, 0x76, eax_18, var_14_7)
                                                break
                                            
                                            ecx_14 += 1
                                            eax_22 = &eax_22[4]
                                        while (ecx_14 s< edx_5)
                                    
                                    i += 1
                                    esi_2 += 0x30
                                while (i s< eax_20[2])
                                
                                esi_1 = var_1060
                        
                        *(eax_10 + 0x1604)
                        int32_t var_1090
                        int32_t var_108c
                        int32_t var_1088
                        int32_t var_1070
                        int32_t var_106c
                        int32_t var_105c
                        
                        if (sub_674500(esi_1, var_1074, &var_1088, &var_1070, &var_105c, &var_1090, 
                                &var_108c, &var_106c) != 0)
                            int32_t esi_3 = var_1090
                            int32_t eax_31 = var_108c - esi_3
                            int32_t edi_1 = var_1088
                            int32_t ebx_4 = var_1070 - edi_1
                            void* ecx_17 = nullptr
                            
                            while (true)
                                if (ecx_17 != 0)
                                    ecx_17 += 0x18d0
                                else
                                    ecx_17 = data_c23ba8
                                
                                int32_t eax_33 = data_c23bac * 0x18d0 + data_c23ba8
                                
                                if (ecx_17 u>= eax_33)
                                    break
                                
                                while (true)
                                    if ((*(ecx_17 + 0x18c8) & 0xffff0000) != 0)
                                        if (*(ecx_17 + 0x1600) != edi)
                                            break
                                        
                                        int32_t edx_9 = *(ecx_17 + 0x1604)
                                        
                                        if (edx_9 u>= edi_1 && edx_9 u< var_105c + edi_1)
                                            *(ecx_17 + 0x1604) = edx_9 + ebx_4
                                            break
                                        
                                        if (edx_9 u< esi_3)
                                            break
                                        
                                        if (edx_9 u>= var_106c + esi_3)
                                            break
                                        
                                        *(ecx_17 + 0x1604) = eax_31 + edx_9
                                        break
                                    
                                    ecx_17 += 0x18d0
                                    
                                    if (ecx_17 u>= eax_33)
                                        goto label_674e66
                            
                        label_674e66:
                            int32_t i_1 = 0
                            
                            if (data_c28c58 s> 0)
                                do
                                    int32_t ecx_18 = (&data_c27c58)[i_1]
                                    
                                    if (ecx_18 u>= edi_1 && ecx_18 u< var_105c + edi_1)
                                        (&data_c27c58)[i_1] = ecx_18 + ebx_4
                                    else if (ecx_18 u>= esi_3 && ecx_18 u< var_106c + esi_3)
                                        (&data_c27c58)[i_1] = eax_31 + ecx_18
                                    
                                    i_1 += 1
                                while (i_1 s< data_c28c58)
                            
                            var_1074 = 2
                            esi_1 = var_105c - 1 + var_1070
                            var_1060 = esi_1
                        
                        eax_9 = var_1078 + 1
                        var_1078 = eax_9
                    while (eax_9 s< var_1058)
                
                int32_t* result = sub_64e810(&data_c27c24)
                CookieCheckFunction(result)
                return result
            
            var_14_2 = "UI2Move"
            var_18_2 = 0x4da8
            ecx_4 = "itemInsert->sourceAsset == sourceAsset"
        else
            if (edx == 0)
            label_6749ed:
                eax_7 = sub_64e7a0(data_c27c24)
            label_6749f9:
                int128_t var_1030_1 = *(eax_7 + 0x1620)
                xmm0_1 = (*(eax_7 + 0x1630)).12
                goto label_674a10
            
            var_14_2 = "UI2Move"
            var_18_2 = 0x4da4
            ecx_4 = "itemInsert == NULL"
    else
        var_14_2 = "UI2DefGet"
        var_18_2 = 0xc17
        ecx_4 = "ptr->assetType == ASSET_TYPE_UI2"
    
    edx_3 = &data_801800
else
    var_14_2 = "UI2DefGet"
    var_18_2 = 0xc16
    edx_3 = "UI2DefGet on null pointer"
    ecx_4 = &data_874470

sub_63b870(eax_6, edx_3, ecx_4, "C:\x\ax2017\Engine\UI2.cpp", var_18_2, var_14_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
