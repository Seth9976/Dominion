// 函数: sub_4ad380
// 地址: 0x4ad380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm0 = data_8c4634
int128_t* result
result.b = arg5
arg3[0x2ff].b = result.b

if (result.b != 0)
    int32_t eax_2 = arg3[0x2ef]
    int32_t ecx = 1
    arg3[0x2f0] = 0x32c9
    int32_t __saved_esi_1 = 0xffffffff
    
    if (eax_2 s> 1)
        ecx = eax_2
    
    sub_666120(eax_2, &data_8db538, arg2, ecx)
    float xmm3_2 = xmm0 * 4f
    float xmm4_2 = xmm3_2 f+ arg3[0x2f6]
    int32_t xmm2_1
    
    if (0 f<= xmm4_2)
        xmm2_1 = _mm_min_ss(0x3f800000, xmm4_2)
    else
        xmm2_1 = (zx.o(0)).d
    
    arg3[0x2f6] = xmm2_1
    float xmm2_3 = arg3[0x2fa] f- xmm3_2
    int32_t xmm0_1
    
    if (0 f<= xmm2_3)
        xmm0_1 = _mm_min_ss(0x3f800000, xmm2_3)
    else
        xmm0_1 = (zx.o(0)).d
    
    arg3[0x2fa] = xmm0_1
    int32_t eax_3 = sub_67bd70(arg2, "tblCards")
    int32_t ecx_3 = arg3[0x2ef]
    arg3[0x2fb] = eax_3
    void* eax_4 = nullptr
    void* var_74_1 = nullptr
    int128_t var_dc = 0x3f800000
    int128_t var_84
    
    if (ecx_3 s> 0)
        int32_t* esi_1 = arg3
        void* ebx_1 = &arg3[0x97]
        
        do
            if (*ebx_1 != 0)
                void var_fc
                int128_t* eax_5 = sub_67bf00(&var_fc, eax_4, ecx_3)
                int128_t xmm0_2 = *eax_5
                var_dc = xmm0_2
                int128_t var_28 = xmm0_2
                int128_t var_18_1 = eax_5[1]
                int128_t* edx_5
                int128_t var_ec
                float var_6c_1
                
                if (arg3[0x2f5] != var_74_1)
                    if (arg3[0x2f9] == var_74_1)
                        float xmm0_5 = arg3[0x2fa]
                        xmm0_5 - 0f
                        var_6c_1 = xmm0_5
                        eax_5:1.b = (xmm0_5 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2 | (xmm0_5 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2))
                            goto label_4ad69c
                        
                        goto label_4ad526
                    
                label_4ad69c:
                    void* eax_15 = data_cf65b8
                    uint128_t xmm1_4 = zx.o(*(eax_15 + 0x18))
                    int32_t xmm2_8 = _mm_cvtepi32_ps(zx.o(*(eax_15 + 0x14)))
                    int32_t var_bc_1 = 0
                    int32_t var_b8_1 = 0
                    int32_t var_cc_1 = 0
                    int32_t xmm1_5 = _mm_cvtepi32_ps(xmm1_4)
                    int32_t var_c8_1 = 0
                    int32_t* var_120_2 = *(ebx_1 + 4)
                    int32_t var_b4_1 = xmm2_8
                    int32_t var_b0_1 = xmm1_5
                    int32_t var_c4_1 = xmm2_8
                    var_ec = var_bc_1.o
                    int32_t var_c0_1 = xmm1_5
                    var_84 = var_cc_1.o
                    sub_654ce0(&var_84, esi_1, "cardset card", var_120_2, &var_84, &var_ec, 0x32c9, 
                        var_74_1, 0)
                    edx_5 = &var_28
                else
                    var_6c_1 = arg3[0x2f6]
                label_4ad526:
                    int32_t eax_6 = *(ebx_1 + 8)
                    
                    if (eax_6 != 0)
                        uint32_t eax_7 = sub_64e7a0(arg4)
                        sub_665db0(eax_7, eax_6, eax_7, 0x3f800000, 0xffffffff, 0)
                    
                    float xmm0_7 = var_6c_1 - 0f
                    float var_6c_2
                    
                    if (not(0 f< xmm0_7))
                        var_6c_2 = 0f
                    else if (xmm0_7 < 1f)
                        var_6c_2 = sub_4ae110(4, xmm0_7, (zx.o(0)).d, 1f)
                    else
                        var_6c_2 = 1f
                    
                    int128_t* eax_8 = sub_67bf00(&var_fc, 0, 1)
                    int128_t var_48 = *eax_8
                    int128_t var_38_1 = eax_8[1]
                    float* eax_10 = sub_4adec0(&var_fc, &var_48, &var_28, var_6c_2, &var_fc)
                    int32_t var_9c_1 = 0
                    int32_t var_98_1 = 0
                    int32_t var_ac_1 = 0
                    int32_t var_a8_1 = 0
                    int128_t var_68 = *eax_10
                    void* eax_11 = data_cf65b8
                    int128_t var_58_1 = *(eax_10 + 0x10)
                    uint128_t xmm1_2 = zx.o(*(eax_11 + 0x18))
                    int32_t xmm2_6 = _mm_cvtepi32_ps(zx.o(*(eax_11 + 0x14)))
                    int32_t xmm1_3 = _mm_cvtepi32_ps(xmm1_2)
                    int32_t var_94_1 = xmm2_6
                    int32_t var_90_1 = xmm1_3
                    int32_t var_a4_1 = xmm2_6
                    var_84 = var_9c_1.o
                    int32_t var_a0_1 = xmm1_3
                    var_ec = var_ac_1.o
                    int32_t eax_12
                    eax_12.b = var_6c_2 > 0.5f
                    sub_654ce0(&var_ec, esi_1, "cardset card", *(ebx_1 + 4), &var_ec, &var_84, 
                        eax_12 + 0x36ba, var_74_1, 0)
                    edx_5 = &var_68
                sub_666060(*esi_1, edx_5)
                void* eax_17 = data_cc8dc0
                
                if (eax_17 == 0)
                    sub_63b870(eax_17, &data_801800, "gGameSettings.localSettings", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x5fb, 
                        "GetLocalSettings")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                if (*(eax_17 + 0x28) == 2)
                    uint32_t eax_18 = sub_64e7a0(*esi_1)
                    sub_665db0(eax_18, &data_8db55c, eax_18, 0x3f800000, 0xffffffff, 0)
                
                int32_t eax_19 = *ebx_1
                uint32_t eax_20 = sub_64e7a0(*esi_1)
                sub_665db0(eax_20, eax_19, eax_20, 0x3f800000, 0xffffffff, 0)
                sub_65d6e0(*esi_1, data_8c4634)
                eax_4 = var_74_1
            else if (*esi_1 != 0)
                sub_64e810(esi_1)
                *esi_1 = 0
                eax_4 = var_74_1
            
            ecx_3 = arg3[0x2ef]
            eax_4 += 1
            esi_1 = &esi_1[1]
            var_74_1 = eax_4
            ebx_1 += 0x10
        while (eax_4 s< ecx_3)
    
    if (arg3[0x2fc].b != 0)
        uint32_t eax_21 = sub_64e7a0(arg3[0x2fb])
        int32_t var_7c_1 = *(eax_21 + 0x138c)
        int32_t var_78_2 = *(eax_21 + 0x1390)
        char var_6d
        float eax_23
        float edx_9
        eax_23, edx_9 = sub_4ad2b0(&var_6d, &arg3[0x2fd], &var_84:8, var_dc.d f* 6000f, &var_6d)
        float xmm0_20 = *(eax_21 + 0x138c)
        float var_7c_2 = eax_23
        xmm0_20 - var_7c_2
        eax_23:1.b = (xmm0_20 == var_7c_2 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_20, var_7c_2) ? 1 : 0) << 2 | (xmm0_20 < var_7c_2 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        bool p_6
        
        if (not(p_4))
            float xmm0_21 = *(eax_21 + 0x1390)
            xmm0_21 - edx_9
            eax_23:1.b = (xmm0_21 == edx_9 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_21, edx_9) ? 1 : 0) << 2 | (xmm0_21 < edx_9 ? 1 : 0)
            p_6 = unimplemented  {test ah, 0x44}
        
        if (p_4 || p_6)
            uint32_t eax_24 = sub_64e7a0(arg3[0x2fb])
            *(eax_24 + 0x138c) = var_7c_2
            *(eax_24 + 0x1390) = edx_9
            sub_67a770(eax_24, nullptr)
            sub_65bf00(eax_24)
        
        if (var_6d != 0)
            arg3[0x2fc].b = 0
    
    result = sub_67bd70(arg2, "tblCards")
    
    if (result != 0)
        result = sub_67be80(&var_dc)
        *(arg3 + 0xbc4) = *result

CookieCheckFunction(result)
return result
