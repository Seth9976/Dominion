// 函数: sub_653a70
// 地址: 0x653a70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char* result
int32_t* ecx
float xmm3

if (arg2 != *(arg3 + 0x1364) || *(arg3 + 0x1600) != *(arg3 + 0x1360))
    char var_ad_1 = 1
    float xmm0_1 = *(data_147abe8 + 0x2c)
    int32_t eax_5 = *(arg3 + 0x1600)
    bool cond:0_1 = eax_5 != *(arg3 + 0x1360)
    *(arg3 + 0x1360) = eax_5
    int32_t ecx_1 = *(arg3 + 0x135c)
    int32_t eax_6 = *(arg3 + 0x1354)
    *(arg3 + 0x1364) = arg2
    *(arg3 + 0x135c) = eax_6
    *(arg3 + 0x1354) = ecx_1
    sub_6533c0(arg3 + 0x13f8, ecx_1 * 0x88 + 0x1124 + arg3, arg3, arg3 + 0x13f8, cond:0_1)
    int32_t* eax_8 = sub_64cc90(arg3)
    void* eax_11 = *(arg3 + 0x1354) * 0x88 + 0x1124 + arg3
    int32_t eax_12 = sub_6dcff0(eax_11, eax_8, &data_8cae70, 0x68)
    char var_ac_2 = eax_12.b
    float eax_13 = sub_6dcf50(eax_12, eax_8, &data_8cae70, 0x66)
    *(arg3 + 0x15f8) = eax_13
    int32_t var_c8_2
    char const* const var_c4_2
    char* ecx_4
    char* const edx_7
    
    if (eax_13 s>= 0x3e8)
        var_c4_2 = "UI2MergeStyles"
        var_c8_2 = 0x1137
        ecx_4 = "(int)el.type < 1000"
    label_6545a6:
        edx_7 = &data_801800
    label_6545b0:
        sub_63b870(eax_13, edx_7, ecx_4, "C:\x\ax2017\Engine\UI2.cpp", var_c8_2, var_c4_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (data_c23bf0 != 0)
        char* eax_14 = sub_6dd140(eax_13, eax_8, &data_8cae70, 0x67)
        sub_63d8d0(arg3 + 0x15fc, eax_14)
        char* eax_15 = nullptr
        
        if (*eax_14 != 0)
            eax_15 = eax_14
        
        var_ac_2.d = sub_64f4b0(eax_15, eax_11, arg3, eax_15, arg4, eax_8, var_ac_2.d, 0)
    else
        var_ac_2.d = 0
    
    int32_t eax_17 = *(arg3 + 0x1354) * 0x88
    int32_t* ecx_7 = *(arg3 + 0x1600)
    int32_t esi_3 = *(arg3 + 0x1604)
    *(arg3 + 0x1600) = ecx_7
    *(arg3 + 0x1604) = esi_3
    eax_13 = eax_17 + 0x1124 + arg3
    float var_a0_2 = eax_13
    
    if (ecx_7 == 0)
        var_c4_2 = "UI2DefGet"
        var_c8_2 = 0xc16
        edx_7 = "UI2DefGet on null pointer"
        ecx_4 = &data_874470
        goto label_6545b0
    
    if (ecx_7[1] != 0x22)
        var_c4_2 = "UI2DefGet"
        var_c8_2 = 0xc17
        ecx_4 = "ptr->assetType == ASSET_TYPE_UI2"
        goto label_6545a6
    
    int32_t ecx_8
    eax_13, ecx_8 = sub_5af880(ecx_7)
    
    if (esi_3 s>= *(eax_13 i+ 8))
        var_c4_2 = "UI2MergeAttribs"
        var_c8_2 = 0x17cd
        ecx_4 = "sourceIndex < def.el.numItems"
        goto label_6545a6
    
    if (esi_3 s< 0)
        var_c4_2 = "UI2MergeAttribs"
        var_c8_2 = 0x17ce
        ecx_4 = "sourceIndex >= 0"
        goto label_6545a6
    
    int32_t var_d0_2 = ecx_8
    sub_6530a0(arg3 + 0x13f8, var_ac_2.d, arg3, var_a0_2, arg3 + 0x13f8, sub_64cc90(arg3), arg4, 
        nullptr, 0)
    bool cond:2_1 = *(arg3 + 0x1608) == 0
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x18)
    int64_t var_60
    __builtin_memset(&var_60, 0, 0x24)
    int64_t var_7c
    __builtin_memset(&var_7c, 0, 0x18)
    float xmm1_1 = xmm0_1
    char var_a3_1 = var_ad_1
    float var_a8_1 = xmm1_1
    int64_t var_8c
    int64_t var_70
    int64_t var_54
    
    if (not(cond:2_1))
        eax_13 = *(arg3 + 0x15c8)
        
        if (eax_13 != 0)
        label_653d7b:
            int32_t i_1 = *(eax_13 i+ 0x10)
            xmm1_1 = xmm0_1
            var_a3_1 = var_ad_1
            var_a8_1 = xmm1_1
            
            if (i_1 s> 0)
                void* ecx_13 = *(eax_13 i+ 8)
                eax_13.b = var_ad_1
                var_a3_1 = eax_13.b
                var_a8_1 = xmm0_1
                int32_t i
                
                do
                    switch (*ecx_13 - 0x6d)
                        case 0
                            var_7c:4.d = *(ecx_13 + 8)
                            float var_74_1 = *(ecx_13 + 0xc)
                            var_7c.d = *(ecx_13 + 4)
                        case 9
                            var_98:4.d = *(ecx_13 + 8)
                            float var_90_1 = *(ecx_13 + 0xc)
                            var_98.d = *(ecx_13 + 4)
                        case 0x11
                            var_54:4.d = *(ecx_13 + 8)
                            float var_4c_1 = *(ecx_13 + 0xc)
                            var_54.d = *(ecx_13 + 4)
                        case 0x18
                            var_70:4.d = *(ecx_13 + 8)
                            float var_68_1 = *(ecx_13 + 0xc)
                            var_70.d = *(ecx_13 + 4)
                        case 0x21
                            var_8c:4.d = *(ecx_13 + 8)
                            float var_84_1 = *(ecx_13 + 0xc)
                            var_8c.d = *(ecx_13 + 4)
                        case 0x71
                            var_60:4.d = *(ecx_13 + 8)
                            float var_58_1 = *(ecx_13 + 0xc)
                            var_60.d = *(ecx_13 + 4)
                    
                    ecx_13 += 0x10
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        else
            void* ecx_12 = *(arg3 + 0x1718)
            
            if (ecx_12 != 0)
                eax_13 = sub_653a40(ecx_12)
                var_a3_1 = var_ad_1
                var_a8_1 = xmm1_1
                
                if (eax_13 != 0)
                    goto label_653d7b
            else
                var_a3_1 = var_ad_1
                var_a8_1 = xmm1_1
    
    float xmm0_15 = *(arg3 + 0xd48)
    xmm0_15 - 0f
    eax_13:1.b = (xmm0_15 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_15, 0f) ? 1 : 0) << 2
        | (xmm0_15 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        var_c4_2 = "UI2UpdateAnims"
        var_c8_2 = 0x174a
        ecx_4 = "el.propsNew.cropUVs.keys[0].range[0].x1 != 0.0f"
        goto label_6545a6
    
    var_ac_2.d = _mm_max_ss(0, sub_67dc70(&var_98, arg3 + 0xd40, arg3 + 0x554, xmm1_1, &var_98))
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67de10(&var_60, arg3 + 0xe3c, arg3 + 0x2e4, var_a8_1, &var_60))
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67de10(&var_54, arg3 + 0xc14, arg3 + 0x254, var_a8_1, &var_54))
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67de10(&var_98, arg3 + 0xc50, arg3 + 0x14, var_a8_1, &var_98))
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67de10(&var_98, arg3 + 0xc8c, arg3 + 0xa4, var_a8_1, &var_98))
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67de10(&var_98, arg3 + 0xcc8, arg3 + 0x134, var_a8_1, &var_98))
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67de10(&var_98, arg3 + 0xd04, arg3 + 0x1c4, var_a8_1, &var_98))
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67e040(&var_98, arg3 + 0xef0, arg3 + 0x494, var_a8_1, &var_98))
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67de10(&var_7c, arg3 + 0xdc4, arg3 + 0x374, var_a8_1, &var_7c))
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67de10(&var_7c, arg3 + 0xe00, arg3 + 0x404, var_a8_1, &var_7c))
    int64_t var_48
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67e2e0(&var_48, arg3 + 0xf44, arg3 + 0x9d4, var_a8_1, &var_48))
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67e2e0(&var_48, arg3 + 0xf80, arg3 + 0xa64, var_a8_1, &var_48))
    int32_t xmm0_28 = sub_67e2e0(&var_8c, arg3 + 0xfbc, arg3 + 0x674, var_a8_1, &var_8c)
    bool cond:3_1 = *(arg3 + 0x1440) == 0
    var_ac_2.d = _mm_max_ss(var_ac_2.d, xmm0_28)
    
    if (not(cond:3_1))
        var_ac_2.d = _mm_max_ss(var_ac_2.d, 
            sub_67e2e0(&var_8c, arg3 + 0xff8, arg3 + 0x704, var_a8_1, &var_8c))
        var_ac_2.d = _mm_max_ss(var_ac_2.d, 
            sub_67e2e0(&var_8c, arg3 + 0x1034, arg3 + 0x794, var_a8_1, &var_8c))
        var_ac_2.d = _mm_max_ss(var_ac_2.d, 
            sub_67e2e0(&var_8c, arg3 + 0x1070, arg3 + 0x824, var_a8_1, &var_8c))
        var_ac_2.d = _mm_max_ss(var_ac_2.d, 
            sub_67e2e0(&var_8c, arg3 + 0x10ac, arg3 + 0x8b4, var_a8_1, &var_8c))
    
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67e2e0(&var_8c, arg3 + 0x10e8, arg3 + 0x944, var_a8_1, &var_8c))
    var_ac_2.d =
        _mm_max_ss(var_ac_2.d, sub_67e490(&var_70, arg3 + 0xe78, arg3 + 0xaf4, var_a8_1, &var_70))
    int32_t xmm0_35 = sub_67e490(&var_70, arg3 + 0xeb4, arg3 + 0xb84, var_a8_1, &var_70)
    bool cond:4_1 = *(arg3 + 0x14b8) == 0
    float xmm2_2 = _mm_max_ss(var_ac_2.d, xmm0_35)
    xmm3 = var_a8_1
    *(arg3 + 0x134c) = xmm3
    
    if (not(cond:4_1))
        *(arg3 + 0x1344) = *(data_147abe8 + 0x2c)
    
    void* esi_4 = *(arg3 + 0x15c8)
    void* eax_44
    
    if (esi_4 == 0)
        void* ecx_34 = *(arg3 + 0x1718)
        
        if (ecx_34 != 0)
            eax_44 = sub_653a40(ecx_34)
        else
            eax_44 = nullptr
    else
        eax_44 = esi_4
    
    void* eax_45
    int32_t xmm0_36
    eax_45, xmm0_36 = sub_665200(eax_44)
    
    if (not(xmm2_2 f> xmm0_36))
        if (esi_4 == 0)
            void* ecx_36 = *(arg3 + 0x1718)
            
            if (ecx_36 != 0)
                esi_4 = sub_653a40(ecx_36)
        
        float xmm0_37
        eax_45, xmm0_37 = sub_665200(esi_4)
        xmm2_2 = xmm0_37
    
    xmm2_2 f- 0
    eax_45:1.b = (xmm2_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_2, 0f) ? 1 : 0) << 2
        | (xmm2_2 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    float xmm2_3
    
    if (p_4)
        xmm2_3 = xmm2_2 + xmm3
    else
        xmm2_3 = (zx.o(0)).d
    
    *(arg3 + 0x1348) = xmm2_3
    int32_t esi_8
    int32_t edi_3
    edi_3, esi_8 = __builtin_memcpy(arg3 + 0x1124 + *(arg3 + 0x1350) * 0x88, 
        *(arg3 + 0x1354) * 0x88 + 0x1124 + arg3, 0x88)
    int32_t* ecx_38 = *(arg3 + 0x15c0)
    
    if (ecx_38 != *(arg3 + 0x1370))
        *(arg3 + 0x1370) = ecx_38
        
        if (ecx_38 != 0 && *(arg3 + 0x15f8) == 5)
            int32_t var_3c[0xc]
            sub_6883d0(ecx_38, &var_3c)
            sub_688660(&var_3c, esi_8, edi_3)
            xmm3 = var_a8_1
    
    char* ecx_40 = *(arg3 + 0x1498)
    char var_ad_2
    
    if (ecx_40 == 0 || *ecx_40 == 0)
        var_ad_2 = 1
    else
        var_ad_2 = 0
    
    char* edx_31 = *(arg3 + 0x1374)
    char* esi_9 = &data_801800
    char* const eax_48 = &data_801800
    
    if (edx_31 != 0)
        eax_48 = edx_31
    
    eax_48:1.b = *eax_48
    eax_48.b = var_ad_2
    char var_a2_1 = eax_48:1.b
    char var_a1_1
    
    if (eax_48.b != 0)
    label_6543c6:
        eax_48.b = var_ad_2
        
        if (*(arg3 + 0x137c) == *(arg3 + 0x1480) || eax_48.b != 0)
            var_a1_1 = 0
        else
            var_a1_1 = 1
    else if (eax_48:1.b == 0)
        var_a1_1 = 1
    else
        char* const eax_49 = &data_801800
        
        if (edx_31 != 0)
            eax_49 = edx_31
        
        while (true)
            edx_31.b = *ecx_40
            char temp3_1 = *eax_49
            bool c_3 = edx_31.b u< temp3_1
            
            if (edx_31.b == temp3_1)
                if (edx_31.b == 0)
                    eax_48 = nullptr
                    break
                
                edx_31.b = ecx_40[1]
                char temp4_1 = eax_49[1]
                c_3 = edx_31.b u< temp4_1
                
                if (edx_31.b == temp4_1)
                    ecx_40 = &ecx_40[2]
                    eax_49 = &eax_49[2]
                    
                    if (edx_31.b != 0)
                        continue
                    
                    eax_48 = nullptr
                    break
            
            eax_48 = sbb.d(eax_49, eax_49, c_3) | 1
            break
        
        if (eax_48 == 0)
            goto label_6543c6
        
        eax_48.b = var_ad_2
        var_a1_1 = 1
    
    char var_a2_2
    
    if (eax_48.b == 0 || var_a2_1 == 0)
        var_a2_2 = 0
    
    if ((eax_48.b != 0 && var_a2_1 != 0) || *(arg3 + 0x137c) != *(arg3 + 0x1480))
        var_a2_2 = 1
    
    void* ecx_41 = *(arg3 + 0x1488)
    char var_ad_3
    
    if (ecx_41 != 0)
        var_ad_3 = 0
    
    if (ecx_41 == 0 || *ecx_41 == 0)
        var_ad_3 = 1
    
    char* result_1 = *(arg3 + 0x1378)
    result = &data_801800
    
    if (result_1 != 0)
        result = result_1
    
    result.b = *result
    char var_ad_4
    bool cond:11_1
    
    if (var_ad_3 == 0)
        if (result.b != 0)
            char* const result_2 = &data_801800
            
            if (result_1 != 0)
                result_2 = result_1
            
            while (true)
                result_1.b = *ecx_41
                char temp5_1 = *result_2
                bool c_4 = result_1.b u< temp5_1
                
                if (result_1.b == temp5_1)
                    if (result_1.b == 0)
                        result = nullptr
                        break
                    
                    result_1.b = *(ecx_41 + 1)
                    char temp6_1 = result_2[1]
                    c_4 = result_1.b u< temp6_1
                    
                    if (result_1.b == temp6_1)
                        ecx_41 += 2
                        result_2 = &result_2[2]
                        
                        if (result_1.b != 0)
                            continue
                        
                        result = nullptr
                        break
                
                result = sbb.d(result_2, result_2, c_4) | 1
                break
            
            cond:11_1 = result == 0
            goto label_654468
        
        var_ad_4 = 1
    else
        cond:11_1 = result.b == 0
    label_654468:
        var_ad_4 = 0
        
        if (not(cond:11_1))
            var_ad_4 = 1
    ecx = *(arg3 + 0x13a4)
    
    if (ecx != 0)
        if (var_a2_2 != 0)
            result = sub_712620(*(sub_6a82e0(ecx) + 8))
        
        if (var_a1_1 != 0)
            int32_t var_c4_24 = *(arg3 + 0x1480)
            sub_6a8520(result, *(arg3 + 0x1498), *(arg3 + 0x13a4))
        
        if (var_ad_4 != 0)
            char* eax_54 = *(arg3 + 0x1488)
            int32_t* edi_4 = *(sub_6a82e0(*(arg3 + 0x13a4)) + 4)
            
            if (eax_54 != 0)
                int32_t* eax_57 = sub_7100d0(*edi_4, eax_54)
                
                if (eax_57 != 0)
                    sub_714780(edi_4, eax_57)
            else if (edi_4[0xd] != eax_54)
                edi_4[0xd] = eax_54
                sub_714370(edi_4)
        
        char* eax_58 = *(arg3 + 0x1498)
        char* const ecx_48 = &data_801800
        
        if (eax_58 != 0)
            ecx_48 = eax_58
        
        sub_63d8d0(arg3 + 0x1374, ecx_48)
        *(arg3 + 0x137c) = *(arg3 + 0x1480)
        char* eax_60 = *(arg3 + 0x1488)
        
        if (eax_60 != 0)
            esi_9 = eax_60
        
        result, ecx = sub_63d8d0(arg3 + 0x1378, esi_9)
        xmm3 = var_a8_1
    
    ecx.b = var_a3_1
else
    ecx.b = 0
    xmm3 = *(data_147abe8 + 0x2c)

float xmm0_38 = *(arg3 + 0x1348)
xmm0_38 - 0f
result:1.b = (xmm0_38 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_38, 0f) ? 1 : 0) << 2
    | (xmm0_38 < 0f ? 1 : 0)
bool p_6 = unimplemented  {test ah, 0x44}

if (p_6)
    *arg5 = 1

if (not(xmm3 f< *(arg3 + 0x1348)))
    *(arg3 + 0x1348) = 0

*(arg3 + 0x1608) += 1
result.b = ecx.b
CookieCheckFunction(result)
return result
