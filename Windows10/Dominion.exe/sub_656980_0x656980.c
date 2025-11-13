// 函数: sub_656980
// 地址: 0x656980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76cf60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
float eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const var_54
char* eax_4 = sub_63d720(&var_54, "tbl_opponent_pods")
int32_t var_14_1 = 0

if (data_cf65bc != 0)
    eax_4 = var_54
    
    if (eax_4 != 0 && *eax_4 != 0)
        eax_4 = sub_63d4e0(&var_54)
        int32_t temp2_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp2_1 == 1)
            eax_4 = sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
            var_54 = &data_801800

int32_t var_14_2 = 0xffffffff
int32_t* ecx_3 = *(arg3 + 0x14e0)
int32_t var_14c_1
char const* const var_148_1
char* ecx_4
char* const edx_2
int128_t var_110
float var_ac
char* var_a4
int128_t var_90
int128_t xmm1_1

if (ecx_3 == 0)
    eax_4 = sub_64cc90(arg3)
    int128_t* result
    
    if (*(eax_4 + 0x10) == 0)
        *arg5 = data_7ff520
        result = arg4
        *arg6 = data_7ff520
        *result = data_bf21e8
        result[1] = data_bf21f8
    label_65787f:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    int32_t* ecx_10 = *(arg3 + 0x1600)
    
    if (ecx_10 == 0)
        var_148_1 = "UI2DefGet"
        var_14c_1 = 0xc16
        edx_2 = "UI2DefGet on null pointer"
        ecx_4 = &data_874470
    else if (ecx_10[1] == 0x22)
        int32_t* eax_10 = sub_5af880(ecx_10)
        void var_c8
        xmm1_1 = *sub_64f140(&var_c8, *(arg3 + 0x16d4), *eax_10 + (*(arg3 + 0x1604) + 1) * 0x18, 
            &var_c8, *(arg3 + 0x16d8))
        xmm1_1 f- 0
        var_90 = xmm1_1
        float xmm3_2 = var_90:0xc.d
        eax_4:1.b = (xmm1_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
            | (xmm1_1 f< 0f ? 1 : 0)
        var_110 = xmm1_1
        float xmm2_3 = var_90:8.d
        bool p_10 = unimplemented  {test ah, 0x44}
        
        if (p_10)
        label_656d20:
            float var_d0
            float* ecx_15 = &var_d0
            *(arg3 + 0x1394) = xmm1_1
            *arg5 = xmm1_1
            float eax_14 = *(arg3 + 0x14c4)
            float esi_3 = *(arg3 + 0x14bc)
            
            if (eax_14 == 0)
                ecx_15 = nullptr
            
            var_d0 = eax_14
            char* ecx_16 = *(arg3 + 0x14c0)
            
            if (esi_3 s< 1)
                esi_3 = 1.40129846e-45f
            
            if (ecx_16 s< 1)
                ecx_16 = 1
            
            float var_70 = esi_3
            int32_t eax_15 = *(arg3 + 0x1500)
            int32_t edx_7 = arg2 + eax_15
            char* var_4c_1 = ecx_16
            
            if (eax_15 == 0)
                edx_7 = arg2
            
            int32_t var_64_1 = edx_7
            int32_t var_50_1
            float ecx_18
            int32_t esi_4
            
            if (ecx_15 != 0)
                eax_4 = *(arg3 + 0x14dc)
                
                if (edx_7 s>= ecx_16 i* esi_3)
                    if (eax_4 == 0)
                        esi_4 = edx_7 - &ecx_16[0xffffffff] i* esi_3
                        var_50_1 = &ecx_16[0xffffffff]
                        ecx_18 = esi_3
                        goto label_656f04
                    
                    if (eax_4 == 1)
                        var_50_1 = 0
                        esi_4 = edx_7 - &ecx_16[0xffffffff] i* esi_3
                        ecx_18 = esi_3
                        goto label_656f04
                    
                    var_148_1 = "TableIndextToSlot"
                    var_14c_1 = 0x1caf
                    edx_2 = "unexpected table alignment"
                    ecx_4 = "HaltMsg"
                else
                    int32_t eax_42
                    eax_42, edx_7 = sub_656800(eax_4, 0, &var_70, eax_4, edx_7, 0)
                    var_4c_1 = ecx_16
                    esi_4 = eax_42
                    ecx_18 = var_70
                    var_50_1 = edx_7
                label_656f04:
                    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(ecx_18))
                    int32_t ecx_21 = *(arg3 + 0x13fc)
                    int32_t var_b4_1 = 0
                    int32_t var_b0_1 = 0
                    int32_t xmm1_3 = _mm_cvtepi32_ps(zx.o(var_4c_1))
                    float xmm0_3 = __maxss_xmmss_memss(xmm0_2, 0x3f800000)
                    float xmm1_4 = __maxss_xmmss_memss(xmm1_3, 0x3f800000)
                    var_70 = xmm0_3
                    float xmm0_4 = *(arg3 + 0x14cc)
                    float xmm0_5 = *(arg3 + 0x14d0)
                    float xmm0_6 = *(arg3 + 0x14d4)
                    float xmm0_7 = *(arg3 + 0x14d8)
                    float xmm0_9 = var_90:8.d f- var_110.d
                    float var_14c_6 = var_70
                    float xmm0_11 = var_90:0xc.d f- var_90:4.d
                    var_54 = xmm0_11
                    var_ac = *(arg3 + 0x16cc)
                    int32_t var_a8_2 = *(arg3 + 0x16d0)
                    int128_t var_174 = var_b4_1.o
                    float edx_13
                    eax_4, edx_13 = sub_6565b0(&var_174, edx_7, ecx_21, var_174, xmm0_9, xmm0_11, 
                        xmm0_4, xmm0_5, xmm0_6, xmm0_7, var_14c_6, xmm1_4, eax_2)
                    float xmm5_2 = 1f
                    float xmm0_15 = var_54
                    float xmm6_1 = *(arg3 + 0x16cc)
                    float xmm7_1 = *(arg3 + 0x16d0)
                    int32_t ecx_22 = *(arg3 + 0x13fc)
                    float var_c0_2 = eax_4
                    float xmm2_6 = (var_70 - 1f) * var_c0_2
                    float var_bc_2 = edx_13
                    float xmm3_5 = (xmm1_4 - 1f) * var_bc_2
                    float xmm2_9 = xmm0_9 * var_70 + xmm2_6
                    float xmm3_8 = xmm1_4 * xmm0_15 + xmm3_5
                    float var_48_2 = xmm2_9
                    float var_5c_1 = xmm3_8
                    float var_7c_1
                    float var_78_1
                    float xmm0_17
                    float xmm1_7
                    
                    if (ecx_22 != 0xd)
                        xmm0_17 = xmm6_1 / xmm2_9
                        xmm1_7 = xmm7_1 / xmm3_8
                        var_78_1 = xmm0_17
                        var_7c_1 = xmm1_7
                        
                        if (ecx_22 u> 0xe)
                        label_65789a:
                            var_148_1 = "TableScale"
                            var_14c_1 = 0x1c2e
                            edx_2 = &data_801800
                            ecx_4 = "Halt"
                        else
                            eax_4 = zx.d(lookup_table_657910[ecx_22])
                            float var_58_1 = xmm2_9
                            float var_58_2 = xmm3_8
                            float var_58_3 = xmm0_17
                            float var_58_4 = xmm1_7
                            
                            switch (eax_4)
                                case nullptr
                                    goto label_6570cf
                                case 1
                                    goto label_657129
                                case 2
                                    xmm5_2 = xmm1_7
                                    goto label_657129
                                case 3
                                    xmm5_2 = _mm_max_ss(xmm0_17, xmm1_7)
                                label_657129:
                                    var_7c_1 = xmm1_7
                                    var_78_1 = xmm0_17
                                    var_5c_1 = xmm3_8
                                    var_48_2 = xmm2_9
                                    goto label_657140
                                case 4
                                    xmm5_2 = xmm0_17
                                    goto label_657129
                                case 5
                                    goto label_65789a
                    else
                        var_48_2 = xmm0_9
                        xmm0_17 = xmm6_1 / xmm0_9
                        var_5c_1 = xmm0_15
                        xmm1_7 = xmm7_1 / xmm0_15
                        var_78_1 = xmm0_17
                        var_7c_1 = xmm1_7
                    label_6570cf:
                        xmm5_2 = _mm_min_ss(xmm0_17, xmm1_7)
                    label_657140:
                        float var_58_5 = xmm5_2
                        
                        if (xmm5_2 f> 0)
                            int128_t var_44 = data_bf21e8
                            int128_t var_34_1 = data_bf21f8
                            float xmm0_62
                            float xmm1_43
                            float xmm2_45
                            float xmm3_38
                            
                            if (ecx_22 == 4)
                                float xmm6_8 = (xmm6_1 - xmm2_6) / var_70
                                float xmm7_8 = (xmm7_1 - xmm3_5) / xmm1_4
                                xmm3_38 = float.s(esi_4) * (xmm5_2 * var_c0_2 + xmm6_8) + 0f
                                xmm2_45 = float.s(var_50_1) * (xmm5_2 * var_bc_2 + xmm7_8) + 0f
                                xmm1_43 = xmm3_38 + xmm6_8
                                xmm0_62 = xmm2_45 + xmm7_8
                            label_657792:
                                var_34_1:4.d = xmm3_38
                                var_34_1:8.d = xmm2_45
                                var_34_1:0xc.d = 0
                                var_44.d = xmm5_2
                                *arg6 = xmm3_38
                                arg6[1] = xmm2_45
                                arg6[2] = xmm1_43
                                arg6[3] = xmm0_62
                            else
                                float xmm0_22 = xmm5_2 * xmm0_9
                                float xmm0_24 = xmm5_2 f* var_54
                                float xmm2_11 = *(data_147abe8 + 0x2c)
                                float xmm1_10 = xmm2_11 f- *(arg3 + 0x550)
                                void* eax_50
                                float xmm2_12
                                float xmm3_9
                                
                                if (*(arg3 + 0x540) f+ *(arg3 + 0x53c) > xmm1_10
                                        || *(arg3 + 0x530) s> 1)
                                    float eax_51
                                    float edx_14
                                    eax_51, edx_14 =
                                        sub_67f440(arg3 + 0x494, xmm2_11 f- *(arg3 + 0x54c))
                                    var_ac = eax_51
                                    char* eax_52
                                    float edx_15
                                    eax_52, edx_15 = sub_67f440(arg3 + 0x4e8, xmm1_10)
                                    var_a4 = eax_52
                                    float xmm0_27
                                    eax_50, edx_13, xmm0_27 = sub_64c3c0(arg3 + 0x53c, xmm1_10)
                                    xmm5_2 = var_58_5
                                    xmm2_12 = (var_a4 - var_ac) * xmm0_27 + var_ac
                                    xmm3_9 = (edx_15 - edx_14) * xmm0_27 + edx_14
                                else
                                    xmm2_12 = *(arg3 + 0x4e8)
                                    xmm3_9 = *(arg3 + 0x4ec)
                                
                                float xmm7_6 = (*(arg3 + 0x16d0) - 0f) * xmm3_9 + 0f
                                    - ((xmm5_2 * var_5c_1 - 0f) * xmm3_9 + 0f)
                                float xmm1_19 = float.s(var_50_1)
                                float xmm6_6 = (*(arg3 + 0x16cc) - 0f) * xmm2_12 + 0f
                                    - ((xmm5_2 * var_48_2 - 0f) * xmm2_12 + 0f)
                                float xmm0_34 = xmm1_4 - 1f
                                xmm1_19 - xmm0_34
                                eax_50:1.b = (xmm1_19 == xmm0_34 ? 1 : 0) << 6
                                    | (is_unordered.d(xmm1_19, xmm0_34) ? 1 : 0) << 2
                                    | (xmm1_19 < xmm0_34 ? 1 : 0)
                                bool p_18 = unimplemented  {test ah, 0x44}
                                uint128_t xmm3_29
                                uint128_t xmm4_6
                                
                                if ((p_18 || *(arg3 + 0x14dc) != 0)
                                    && (var_50_1 != 0 || *(arg3 + 0x14dc) != 1))
                                label_6576ae:
                                    int32_t ecx_33 = *(arg3 + 0x14f8)
                                    int32_t temp1_4 =
                                        mods.dp.d(sx.q(ecx_33), int.d(fconvert.t(var_70)))
                                    
                                    if (arg2 s>= ecx_33 - temp1_4 && *(arg3 + 0x14c8) != 0)
                                        xmm4_6 = zx.o(var_50_1)
                                        xmm3_29 = zx.o(int.d(fconvert.t(var_70)) - temp1_4)
                                        goto label_657622
                                    
                                    xmm3_38 =
                                        _mm_cvtepi32_ps(zx.o(esi_4)) * (xmm5_2 * var_c0_2 + xmm0_22)
                                        + xmm6_6
                                    xmm2_45 = _mm_cvtepi32_ps(zx.o(var_50_1))
                                        * (xmm5_2 * var_bc_2 + xmm0_24) + xmm7_6
                                    xmm1_43 = xmm3_38 + xmm0_22
                                    xmm0_62 = xmm2_45 + xmm0_24
                                    goto label_657792
                                
                                if (eax_14 == 0)
                                    if (*(arg3 + 0x14c8) == 0)
                                        goto label_6576ae
                                    
                                    xmm4_6 = zx.o(var_50_1)
                                    xmm3_29 = zx.o(int.d(xmm1_4) * int.d(fconvert.t(var_70))
                                        - *(arg3 + 0x14f8))
                                label_657622:
                                    var_34_1:0xc.d = 0
                                    float xmm2_41 = xmm5_2 * var_c0_2 + xmm0_22
                                    float xmm3_31 = _mm_cvtepi32_ps(xmm3_29) * xmm2_41
                                    float xmm4_7 = _mm_cvtepi32_ps(xmm4_6)
                                    float xmm1_41 = _mm_cvtepi32_ps(zx.o(esi_4)) * xmm2_41
                                    float xmm4_9 = xmm4_7 * (xmm5_2 * var_bc_2 + xmm0_24) + xmm7_6
                                    var_44.d = xmm5_2
                                    float xmm3_34 = xmm3_31 * 0.5f + xmm6_6 + xmm1_41
                                    var_34_1:8.d = xmm4_9
                                    var_34_1:4.d = xmm3_34
                                    *arg6 = xmm3_34
                                    arg6[1] = xmm4_9
                                    arg6[2] = xmm3_34 + xmm0_22
                                    arg6[3] = xmm4_9 + xmm0_24
                                else
                                    float xmm1_21 = var_90:0xc.d f- var_90:4.d
                                    float xmm0_36 = _mm_cvtepi32_ps(zx.o(*ecx_15))
                                    int32_t ecx_28 = *(arg3 + 0x13fc)
                                    var_90.d = 0
                                    var_90:4.d = 0
                                    var_ac = xmm0_36
                                    float var_14c_7 = var_ac
                                    var_a4 = var_90:8.d f- var_110.d
                                    char* var_164_2 = var_a4
                                    var_90:8.d = *(arg3 + 0x16cc)
                                    var_90:0xc.d = *(arg3 + 0x16d0)
                                    var_174 = var_90
                                    float eax_55
                                    float edx_16
                                    eax_55, edx_16 = sub_6565b0(&var_174, edx_13, ecx_28, var_174, 
                                        var_164_2, xmm1_21, xmm0_4, xmm0_5, xmm0_6, xmm0_7, 
                                        var_14c_7, xmm1_4)
                                    char* const xmm5_5 = var_54
                                    int32_t ecx_29 = *(arg3 + 0x1404)
                                    float xmm2_18 = _mm_cvtepi32_ps(zx.o(*ecx_15))
                                    float xmm2_21 = xmm5_5 * xmm1_4 + xmm0_34 * edx_16
                                    float xmm1_24 = xmm0_9 * xmm2_18 + (xmm2_18 - 1f) * eax_55
                                    float xmm0_47 = _mm_min_ss(xmm6_1 / xmm1_24, xmm7_1 / xmm2_21)
                                    float xmm0_48 = *(arg3 + 0x16cc)
                                    float xmm0_49 = *(arg3 + 0x16d0)
                                    var_54 = xmm5_5 f* xmm0_47
                                    var_d0 = xmm2_21 * xmm0_47
                                    float eax_57
                                    float edx_17
                                    eax_57, edx_17 = sub_6b7590(ecx_29)
                                    var_ac = eax_57
                                    var_34_1:0xc.d = 0
                                    float xmm2_34 = xmm1_19 * (var_58_5 * var_bc_2 + xmm0_24)
                                        + var_7c_1 * ((xmm0_49 - 0f) * edx_17 + 0f
                                        - ((var_d0 - 0f) * edx_17 + 0f))
                                    var_44.d = xmm0_47
                                    float xmm2_38 = _mm_cvtepi32_ps(zx.o(esi_4))
                                        * (eax_55 * xmm0_47 + xmm0_9 * xmm0_47)
                                        + (var_58_5 * var_c0_2 + xmm0_22) * 0f + var_78_1 * (
                                        (xmm0_48 - 0f) * var_ac + 0f
                                        - ((xmm1_24 * xmm0_47 - 0f) * var_ac + 0f))
                                    float xmm3_28 = (edx_16 * xmm0_47 f+ var_54) * 0f + xmm2_34
                                    var_90.d = xmm2_38
                                    var_34_1:4.d = xmm2_38
                                    var_90:4.d = xmm3_28
                                    var_90:8.d = xmm2_38 + xmm0_22
                                    var_34_1:8.d = xmm3_28
                                    var_90:0xc.d = xmm3_28 + xmm0_24
                                    *arg6 = var_90
                            int128_t var_130
                            sub_4eb600(arg3 + 0x1620, &var_44, &var_130, arg3 + 0x1620)
                            float xmm2_48 = *(arg3 + 0x138c)
                            int128_t var_120
                            int128_t xmm3_41 = var_120
                            xmm2_48 f- 0
                            float* eax_68
                            eax_68:1.b = (xmm2_48 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_48, 0f) ? 1 : 0) << 2
                                | (xmm2_48 < 0f ? 1 : 0)
                            bool p_20 = unimplemented  {test ah, 0x44}
                            bool p_22
                            
                            if (not(p_20))
                                float xmm0_70 = *(arg3 + 0x1390)
                                xmm0_70 f- 0
                                eax_68:1.b = (xmm0_70 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_70, 0f) ? 1 : 0) << 2
                                    | (xmm0_70 < 0f ? 1 : 0)
                                p_22 = unimplemented  {test ah, 0x44}
                            
                            if (p_20 || p_22)
                                int128_t var_34_2
                                var_34_2:8.d = xmm3_41:8.d f+ *(arg3 + 0x1390)
                                float xmm0_74 = var_34_2:0xc.d + 0f
                                var_34_2:4.d = xmm2_48 f+ var_120:4.d
                                var_34_2:0xc.d = xmm0_74
                                xmm3_41 = var_34_2
                            
                            result = arg4
                            *result = var_130
                            result[1] = xmm3_41
                            goto label_65787f
                        
                        var_148_1 = "UI2TableTransform"
                        var_14c_1 = 0x1d19
                        edx_2 = &data_801800
                        ecx_4 = "scale > 0"
            else
                if (esi_3 == 0)
                    esi_4 = 0
                    var_50_1 = 0
                    ecx_18 = esi_3
                    goto label_656f04
                
                int32_t eax_17
                int32_t edx_8
                edx_8:eax_17 = sx.q(edx_7)
                int32_t temp0_1 = divs.dp.d(edx_8:eax_17, esi_3)
                int32_t temp1_1 = mods.dp.d(edx_8:eax_17, esi_3)
                int32_t ecx_17 = temp0_1
                var_50_1 = temp0_1
                eax_4 = var_4c_1
                esi_4 = temp1_1
                var_54 = ecx_17
                
                if (ecx_17 s< eax_4)
                    edx_7 = var_4c_1
                else
                    esi_4 = (ecx_17 - eax_4) i* esi_3 + temp1_1
                    edx_7 = eax_4
                    ecx_17 = edx_7 - 1
                    var_50_1 = ecx_17
                    var_54 = ecx_17
                
                if (*(arg3 + 0x14dc) u> 5)
                    var_148_1 = "TableIndextToSlot"
                    var_14c_1 = 0x1ca1
                    edx_2 = &data_801800
                    ecx_4 = "Halt"
                else
                    switch (*(arg3 + 0x14dc))
                        case 0
                            ecx_18 = esi_3
                            goto label_656f04
                        case 1
                            var_50_1 = edx_7 - var_54 - 1
                            ecx_18 = esi_3
                            goto label_656f04
                        case 2
                            ecx_18 = esi_3
                            esi_4 = divs.dp.d(sx.q(var_64_1), var_4c_1)
                            edx_7 = mods.dp.d(sx.q(var_64_1), var_4c_1)
                            var_50_1 = edx_7
                            
                            if (esi_4 s>= ecx_18)
                                int32_t eax_39 = edx_7 + (esi_4 i- ecx_18) * var_4c_1
                                esi_4 = ecx_18 - 1
                                var_50_1 = eax_39
                            
                            goto label_656f04
                        case 3
                            var_50_1 = ecx_17
                            esi_4 = esi_3 i- esi_4 - 1
                            ecx_18 = esi_3
                            goto label_656f04
                        case 4
                            esi_4 = esi_3 i- esi_4 - 1
                            var_50_1 = edx_7 - var_54 - 1
                            ecx_18 = esi_3
                            goto label_656f04
                        case 5
                            int32_t eax_31
                            int32_t edx_10
                            edx_10:eax_31 = sx.q(var_64_1)
                            float temp0_2 = divs.dp.d(edx_10:eax_31, var_4c_1)
                            edx_7 = mods.dp.d(edx_10:eax_31, var_4c_1)
                            ecx_18 = esi_3
                            var_50_1 = edx_7
                            var_ac = temp0_2
                            esi_4 = ecx_18 i- temp0_2 - 1
                            goto label_656f04
        else
            float xmm4_2 = var_90:4.d
            xmm4_2 f- 0
            eax_4:1.b = (xmm4_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_2, 0f) ? 1 : 0) << 2
                | (xmm4_2 < 0f ? 1 : 0)
            bool p_12 = unimplemented  {test ah, 0x44}
            
            if (p_12)
                goto label_656d20
            
            xmm2_3 f- 0
            eax_4:1.b = (xmm2_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_3, 0f) ? 1 : 0) << 2
                | (xmm2_3 < 0f ? 1 : 0)
            bool p_14 = unimplemented  {test ah, 0x44}
            
            if (p_14)
                goto label_656d20
            
            xmm3_2 f- 0
            eax_4:1.b = (xmm3_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_2, 0f) ? 1 : 0) << 2
                | (xmm3_2 < 0f ? 1 : 0)
            bool p_16 = unimplemented  {test ah, 0x44}
            
            if (p_16)
                goto label_656d20
            
            var_148_1 = "UI2TableTransform"
            var_14c_1 = 0x1cef
            edx_2 = &data_801800
            ecx_4 = "rectSub != RECT0"
    else
        var_148_1 = "UI2DefGet"
        var_14c_1 = 0xc17
        edx_2 = &data_801800
        ecx_4 = "ptr->assetType == ASSET_TYPE_UI2"
else
    int32_t esi_1 = *(arg3 + 0x16f4)
    int32_t var_148_3
    int128_t* ecx_7
    char* edx_4
    
    if (esi_1 == 0)
        int32_t esi_2 = *(arg3 + 0x16d8)
        
        if (esi_2 != 0)
            eax_4 = *(arg3 + 0x16d4)
            char* var_68_3 = eax_4
            
            if (ecx_3[1] == 0x22)
                eax_4 = sub_5af880(ecx_3)
                
                if (*(eax_4 + 8) == 0)
                    xmm1_1 = data_7ff520
                    goto label_656bd4
                
                edx_4 = var_68_3
                void var_e8
                ecx_7 = &var_e8
                var_148_3 = esi_2
                goto label_656bc3
            
            var_148_1 = "UI2DefGet"
            var_14c_1 = 0xc17
            edx_2 = &data_801800
            ecx_4 = "ptr->assetType == ASSET_TYPE_UI2"
        else if (ecx_3[1] == 0x22)
            eax_4 = sub_5af880(ecx_3)
            
            if (*(eax_4 + 8) != 0)
                var_148_3 = 0
                void var_f8
                ecx_7 = &var_f8
                edx_4 = nullptr
            label_656bc3:
                xmm1_1 = *sub_64f140(eax_4, edx_4, *eax_4, ecx_7, var_148_3)
                goto label_656bd4
            
            xmm1_1 = data_7ff520
        label_656bd4:
            xmm1_1 f- 0
            var_90 = xmm1_1
            float xmm3_1 = var_90:0xc.d
            float xmm2_1 = var_90:8.d
            eax_4:1.b = (xmm1_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
                | (xmm1_1 f< 0f ? 1 : 0)
            var_110 = xmm1_1
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                goto label_656d20
            
            float xmm4_1 = var_90:4.d
            xmm4_1 f- 0
            eax_4:1.b = (xmm4_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_1, 0f) ? 1 : 0) << 2
                | (xmm4_1 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                goto label_656d20
            
            xmm2_1 f- 0
            eax_4:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
                | (xmm2_1 < 0f ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (p_6)
                goto label_656d20
            
            xmm3_1 f- 0
            eax_4:1.b = (xmm3_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2
                | (xmm3_1 < 0f ? 1 : 0)
            bool p_8 = unimplemented  {test ah, 0x44}
            
            if (p_8)
                goto label_656d20
            
            var_148_1 = "UI2TableTransform"
            var_14c_1 = 0x1ce5
            edx_2 = &data_801800
            ecx_4 = "rectSub != RECT0"
        else
            var_148_1 = "UI2DefGet"
            var_14c_1 = 0xc17
            edx_2 = &data_801800
            ecx_4 = "ptr->assetType == ASSET_TYPE_UI2"
    else
        char* eax_5 = *(arg3 + 0x16d8)
        var_54 = eax_5
        eax_4 = *(arg3 + 0x16f0)
        
        if (eax_5 == 0)
            char* var_68_2 = eax_4
            
            if (ecx_3[1] == 0x22)
                eax_4 = sub_5af880(ecx_3)
                
                if (*(eax_4 + 8) == 0)
                    xmm1_1 = data_7ff520
                    goto label_656bd4
                
                edx_4 = var_68_2
                ecx_7 = &var_90
                var_148_3 = esi_1
                goto label_656bc3
            
            var_148_1 = "UI2DefGet"
            var_14c_1 = 0xc17
            edx_2 = &data_801800
            ecx_4 = "ptr->assetType == ASSET_TYPE_UI2"
        else
            char* var_98_1 = eax_4
            eax_4 = *(arg3 + 0x16d4)
            char* var_68_1 = eax_4
            
            if (ecx_3[1] == 0x22)
                eax_4 = sub_5af880(ecx_3)
                
                if (*(eax_4 + 8) == 0)
                    xmm1_1 = data_7ff520
                    goto label_656bd4
                
                var_a4 = var_68_1
                char* var_a0_1 = var_98_1
                var_ac = var_54
                char* var_148_2 = eax_4
                int32_t var_a8_1 = esi_1
                xmm1_1 = *sub_64eea0(&var_110, &var_a4, *eax_4, &var_110, &var_ac)
                goto label_656bd4
            
            var_148_1 = "UI2DefGet"
            var_14c_1 = 0xc17
            edx_2 = &data_801800
            ecx_4 = "ptr->assetType == ASSET_TYPE_UI2"
sub_63b870(eax_4, edx_2, ecx_4, "C:\x\ax2017\Engine\UI2.cpp", var_14c_1, var_148_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
