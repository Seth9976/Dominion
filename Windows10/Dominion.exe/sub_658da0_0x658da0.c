// 函数: sub_658da0
// 地址: 0x658da0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void var_e8
__builtin_memcpy(&var_e8, arg3 + 0x1620, 0xd0)
int32_t var_58 = 0
uint32_t eax_2 = *(arg3 + 0x14e8)

if (eax_2 != 2)
    int32_t var_1e8_2
    char const* const var_1e4_2
    char* ecx_9
    char const* const edx_1
    
    if (eax_2 != 1)
        var_1e4_2 = "UI2UpdateScrollbar"
        var_1e8_2 = 0x1fd9
        ecx_9 = "Halt"
    label_659ae7:
        edx_1 = &data_801800
    label_659af1:
        sub_63b870(eax_2, edx_1, ecx_9, "C:\x\ax2017\Engine\UI2.cpp", var_1e8_2, var_1e4_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm2_1 = *(arg5 + 4)
    xmm2_1 f- 0
    eax_2:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
        | (xmm2_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        if (not(*(arg2 + 4) f<= xmm2_1))
            *(arg3 + 0x138c) = 0
            int32_t i_2 = 5
            *(arg3 + 0x1390) = 0
            void* edi_1 = arg3 + 0x18a4
            int32_t i
            
            do
                if (*edi_1 != 0)
                    eax_2 = sub_64e810(edi_1)
                    *edi_1 = 0
                
                edi_1 += 4
                i = i_2
                i_2 -= 1
            while (i != 1)
            CookieCheckFunction(eax_2)
            return eax_2
        
        eax_2 = *(arg3 + 0x14f0)
        float var_1bc_1 = *(arg3 + 0x16cc)
        float xmm0_3 = *(arg3 + 0x16d0)
        uint32_t var_1b8 = eax_2
        
        if (eax_2 == 0)
            var_1e4_2 = "UI2DefGet"
            var_1e8_2 = 0xc16
            edx_1 = "UI2DefGet on null pointer"
            ecx_9 = &data_874470
            goto label_659af1
        
        if (*(eax_2 + 4) != 0x22)
            var_1e4_2 = "UI2DefGet"
            var_1e8_2 = 0xc17
            ecx_9 = "ptr->assetType == ASSET_TYPE_UI2"
            goto label_659ae7
        
        int32_t** eax_8 = sub_5af880(eax_2)
        int128_t var_150
        int128_t xmm0_4
        
        if (eax_8[2] != 0)
            xmm0_4 = *sub_64f140(eax_8, nullptr, *eax_8, &var_150, 0)
        else
            xmm0_4 = data_7ff520
        
        var_150 = xmm0_4
        float xmm5_1 = var_150:8.d f- var_150.d
        float xmm2_2 = *(arg5 + 4)
        float xmm0_6 = var_1bc_1 - xmm5_1
        float var_1c4 = xmm5_1
        float xmm1_1 = xmm5_1 + 0f
        float xmm0_8 = xmm0_3 - xmm5_1
        float var_178 = xmm0_8
        float xmm3_2 = xmm0_8 - xmm1_1
        float xmm2_4 = (xmm2_2 f- *(arg2 + 4)) ^ (data_8937c0.o).d
        float xmm6_2 = _mm_max_ss(xmm5_1, *(arg2 + 4) / xmm2_2 * xmm3_2) * 0.5f
        float xmm0_14 = (*(arg3 + 0x1390) - 0f) / (xmm2_4 - 0f)
        float xmm7_1 = xmm6_2 + 0f
        float xmm3_3 = xmm3_2 - xmm6_2
        
        if (not(0f >= xmm0_14))
            if (xmm0_14 < 1f)
                xmm5_1 = var_1c4
                xmm7_1 = sub_4ae110(1, xmm0_14, xmm7_1, xmm3_3)
            else
                xmm7_1 = xmm3_3
        
        float xmm7_2 = xmm7_1 + xmm1_1
        float xmm0_17 = xmm5_1 * 0.5f
        float xmm0_18 = xmm0_17 + xmm0_6
        float eax_11
        float edx_2
        eax_11, edx_2 = sub_6b7590(2)
        float xmm1_4 = var_1bc_1 - xmm0_6
        float xmm2_8 = var_1c4 - 0f
        float xmm5_5 = xmm1_4 * eax_11 + xmm0_6 - (xmm2_8 * eax_11 + 0f)
        float xmm0_23 = xmm0_3 - 0f
        float xmm1_8 = xmm0_23 * edx_2 + 0f - (edx_2 * xmm2_8 + 0f)
        float xmm0_28 = xmm5_5 + var_1c4
        float xmm0_30 = xmm1_8 + var_1c4
        float eax_12
        float edx_3
        eax_12, edx_3 = sub_6b7590(8)
        float xmm5_9 = xmm1_4 * eax_12 + xmm0_6 - (xmm2_8 * eax_12 + 0f)
        float xmm1_10 = xmm5_9 + var_1c4
        float xmm5_11 = xmm0_17 + xmm0_18
        float xmm6_4 = xmm0_18 - xmm0_17
        float xmm4_4 = xmm0_23 * edx_3 + 0f - (edx_3 * xmm2_8 + 0f)
        float xmm1_12 = xmm4_4 + var_1c4
        float xmm4_6 = xmm6_2 + xmm7_2
        float xmm2_10 = xmm7_2 - xmm6_2
        var_150:4.d = xmm2_10
        var_150.d = xmm6_4
        var_150:8.d = xmm5_11
        var_150:0xc.d = xmm4_6
        float xmm2_12 = (xmm2_10 + xmm4_6) * 0.5f
        float var_1c8_1 = xmm2_12
        float var_1c0_2
        float var_188_1
        
        if (var_1bc_1 <= xmm0_6)
            var_188_1 = var_1bc_1
            var_1c0_2 = xmm0_6
        else
            var_188_1 = xmm0_6
            var_1c0_2 = var_1bc_1
        
        float var_1d4_3
        
        if (var_178 <= xmm2_12)
            var_1d4_3 = var_178
            var_178 = xmm2_12
        else
            var_1d4_3 = xmm2_12
        
        float var_1c4_1
        
        if (var_1bc_1 <= xmm0_6)
            var_1c4_1 = var_1bc_1
            var_1bc_1 = xmm0_6
        else
            var_1c4_1 = xmm0_6
        
        float var_1b4_1
        
        if (xmm2_12 <= xmm1_1)
            var_1b4_1 = xmm2_12
            var_1c8_1 = xmm1_1
        else
            var_1b4_1 = xmm1_1
        
        int32_t ecx_12 = *(arg3 + 0x18a4)
        
        if (ecx_12 == 0)
            void* eax_13 = sub_64e660(arg3)
            ecx_12 = *(eax_13 + 0x18c8)
            *(eax_13 + 0x18b8) = 1
            *(arg3 + 0x18a4) = ecx_12
        
        uint32_t eax_14 = sub_64e7a0(ecx_12)
        int32_t var_1e4_3 = 0
        *(eax_14 + 0x1600) = var_1b8
        *(eax_14 + 0x1604) = 0
        sub_65d0f0(&var_e8, arg3, eax_14, arg4, &var_e8)
        float var_1b0
        sub_67d460(eax_14 + 0x554, *(data_147abe8 + 0x2c), &var_1b0)
        int32_t var_194 = 0
        float var_1a8
        float xmm4_9 = var_1a8 * xmm5_5 - var_1b0 * xmm0_28
        float xmm0_42 = var_1a8 - var_1b0
        var_1b0 = 1f
        float xmm4_10 = xmm4_9 / xmm0_42
        float var_19c = xmm4_10
        float var_1ac
        float var_1a4
        float xmm3_9 = (var_1a4 * xmm1_8 - var_1ac * xmm0_30) / (var_1a4 - var_1ac)
        *(eax_14 + 0x16cc) = (xmm0_28 - xmm4_10) / var_1a8 + xmm4_10 - xmm4_10
        float var_198 = xmm3_9
        *(eax_14 + 0x16d0) = (xmm0_30 - xmm3_9) / var_1a4 + xmm3_9 - xmm3_9
        var_1ac.o = data_800248
        int128_t var_130 = var_1b0.o
        int128_t var_110
        sub_4eb600(&var_e8, &var_130, &var_110, &var_e8)
        *(eax_14 + 0x1620) = var_110
        int128_t var_100
        *(eax_14 + 0x1630) = var_100
        int32_t ecx_17 = *(arg3 + 0x18a8)
        
        if (ecx_17 == 0)
            void* eax_19 = sub_64e660(arg3)
            ecx_17 = *(eax_19 + 0x18c8)
            *(eax_19 + 0x18b8) = 1
            *(arg3 + 0x18a8) = ecx_17
        
        uint32_t eax_20 = sub_64e7a0(ecx_17)
        int32_t var_1e4_6 = 0
        *(eax_20 + 0x1600) = var_1b8
        *(eax_20 + 0x1604) = 1
        sub_65d0f0(&var_e8, arg3, eax_20, arg4, &var_e8)
        sub_67d460(eax_20 + 0x554, *(data_147abe8 + 0x2c), &var_1b0)
        int32_t var_194_1 = 0
        float xmm4_13 = var_1a8 * xmm5_9 - var_1b0 * xmm1_10
        float xmm0_55 = var_1a8 - var_1b0
        var_1b0 = 1f
        float xmm4_14 = xmm4_13 / xmm0_55
        float var_19c_1 = xmm4_14
        float xmm3_14 = (var_1a4 * xmm4_4 - var_1ac * xmm1_12) / (var_1a4 - var_1ac)
        *(eax_20 + 0x16cc) = (xmm1_10 - xmm4_14) / var_1a8 + xmm4_14 - xmm4_14
        float var_198_1 = xmm3_14
        *(eax_20 + 0x16d0) = (xmm1_12 - xmm3_14) / var_1a4 + xmm3_14 - xmm3_14
        var_1ac.o = data_800248
        var_110 = var_1b0.o
        int128_t var_1a0
        int128_t var_100_1 = var_1a0
        sub_4eb600(&var_e8, &var_110, &var_130, &var_e8)
        *(eax_20 + 0x1620) = var_130
        *(eax_20 + 0x1630) = var_1a0
        int32_t ecx_22 = *(arg3 + 0x18ac)
        
        if (ecx_22 == 0)
            void* eax_25 = sub_64e660(arg3)
            ecx_22 = *(eax_25 + 0x18c8)
            *(eax_25 + 0x18b8) = 1
            *(arg3 + 0x18ac) = ecx_22
        
        uint32_t eax_26 = sub_64e7a0(ecx_22)
        int32_t var_1e4_9 = 0
        *(eax_26 + 0x1600) = var_1b8
        *(eax_26 + 0x1604) = 2
        sub_65d0f0(&var_e8, arg3, eax_26, arg4, &var_e8)
        sub_67d460(eax_26 + 0x554, *(data_147abe8 + 0x2c), &var_1b0)
        int32_t var_194_2 = 0
        float xmm4_17 = var_1a8 * var_1c4_1 - var_1b0 * var_1bc_1
        float xmm0_68 = var_1a8 - var_1b0
        var_1b0 = 1f
        float xmm4_18 = xmm4_17 / xmm0_68
        float var_19c_2 = xmm4_18
        float xmm3_19 = (var_1a4 * var_1b4_1 - var_1ac * var_1c8_1) / (var_1a4 - var_1ac)
        *(eax_26 + 0x16cc) = (var_1bc_1 - xmm4_18) / var_1a8 + xmm4_18 - xmm4_18
        float var_198_2 = xmm3_19
        *(eax_26 + 0x16d0) = (var_1c8_1 - xmm3_19) / var_1a4 + xmm3_19 - xmm3_19
        var_1ac.o = data_800248
        var_110 = var_1b0.o
        int128_t var_100_2 = var_1a0
        sub_4eb600(&var_e8, &var_110, &var_130, &var_e8)
        *(eax_26 + 0x1620) = var_130
        *(eax_26 + 0x1630) = var_1a0
        int32_t ecx_27 = *(arg3 + 0x18b0)
        
        if (ecx_27 == 0)
            void* eax_31 = sub_64e660(arg3)
            ecx_27 = *(eax_31 + 0x18c8)
            *(eax_31 + 0x18b8) = 1
            *(arg3 + 0x18b0) = ecx_27
        
        int32_t* esi_6 = sub_64e7a0(ecx_27)
        int32_t var_1e4_12 = 0
        esi_6[0x580] = var_1b8
        esi_6[0x581] = 3
        sub_65d0f0(&var_e8, arg3, esi_6, arg4, &var_e8)
        sub_67d460(&esi_6[0x155], *(data_147abe8 + 0x2c), &var_1b0)
        int32_t var_194_3 = 0
        float xmm4_21 = var_1a8 * var_188_1 - var_1b0 * var_1c0_2
        float xmm0_81 = var_1a8 - var_1b0
        var_1b0 = 1f
        float xmm4_22 = xmm4_21 / xmm0_81
        float var_19c_3 = xmm4_22
        float xmm3_24 = (var_1a4 * var_1d4_3 - var_1ac * var_178) / (var_1a4 - var_1ac)
        esi_6[0x5b3] = (var_1c0_2 - xmm4_22) / var_1a8 + xmm4_22 - xmm4_22
        float var_198_3 = xmm3_24
        esi_6[0x5b4] = (var_178 - xmm3_24) / var_1a4 + xmm3_24 - xmm3_24
        var_1ac.o = data_800248
        var_110 = var_1b0.o
        int128_t var_100_3 = var_1a0
        sub_4eb600(&var_e8, &var_110, &var_130, &var_e8)
        int128_t* edx_12 = &var_150
        int32_t ecx_32 = 0
        *(esi_6 + 0x1620) = var_130
        *(esi_6 + 0x1630) = var_1a0
        int32_t i_3 = 0x10
        int32_t i_1
        
        do
            char eax_37 = *edx_12
            edx_12 += 1
            ecx_32 = ecx_32 u>> 8 ^ *(((zx.d(eax_37) ^ zx.d(ecx_32.b)) << 2) + &data_7ffd70)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        int32_t var_24 = ecx_32
        int32_t ecx_34 = *(arg3 + 0x18b4)
        
        if (ecx_34 == 0)
            void* eax_40 = sub_64e660(arg3)
            ecx_34 = *(eax_40 + 0x18c8)
            *(eax_40 + 0x18b8) = 1
            *(arg3 + 0x18b4) = ecx_34
        
        int32_t* eax_41 = sub_64e7a0(ecx_34)
        int32_t var_1e4_15 = 0
        eax_41[0x580] = var_1b8
        eax_41[0x581] = 4
        sub_65d0f0(&var_e8, arg3, eax_41, arg4, &var_e8)
        sub_67d460(&eax_41[0x155], *(data_147abe8 + 0x2c), &var_150)
        float xmm2_26 = var_150:8.d
        int32_t var_134 = 0
        var_150.d = 0x3f800000
        float xmm4_26 = (xmm2_26 * xmm6_4 - var_150.d * xmm5_11) / (xmm2_26 f- var_150.d)
        float var_13c = xmm4_26
        float xmm2_27 = var_150:0xc.d
        float xmm3_29 = (xmm2_27 * xmm2_10 - var_150:4.d * xmm4_6) / (xmm2_27 f- var_150:4.d)
        eax_41[0x5b3] = (xmm5_11 - xmm4_26) / xmm2_26 + xmm4_26 - xmm4_26
        float var_138 = xmm3_29
        eax_41[0x5b4] = (xmm4_6 - xmm3_29) / xmm2_27 + xmm3_29 - xmm3_29
        var_150 = data_800248
        var_110 = var_150
        int128_t var_140
        int128_t var_100_4 = var_140
        float* eax_46 = sub_4eb600(&var_e8, &var_110, &var_130, &var_e8)
        *(eax_41 + 0x1620) = var_130
        *(eax_41 + 0x1630) = var_1a0
        CookieCheckFunction(eax_46)
        return eax_46
else
    int32_t ecx = *(arg3 + 0x18a4)
    int32_t eax_3 = *(arg3 + 0x14f0)
    
    if (ecx == 0)
        void* eax_4 = sub_64e660(arg3)
        ecx = *(eax_4 + 0x18c8)
        *(eax_4 + 0x18b8) = 1
        *(arg3 + 0x18a4) = ecx
    
    uint32_t eax_5 = sub_64e7a0(ecx)
    int32_t var_1e4_1 = 0
    *(eax_5 + 0x1600) = eax_3
    *(eax_5 + 0x1604) = 0
    sub_65d0f0(&var_e8, arg3, eax_5, arg4, &var_e8)
    eax_2 = *(arg3 + 0x16cc)
    int32_t ecx_3 = *(arg3 + 0x16d0)
    *(eax_5 + 0x16cc) = eax_2
    *(eax_5 + 0x16d0) = ecx_3

CookieCheckFunction(eax_2)
return eax_2
