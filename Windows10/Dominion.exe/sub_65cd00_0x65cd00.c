// 函数: sub_65cd00
// 地址: 0x65cd00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = *(arg1 + 0x1490)
void* ecx = *(arg1 + 0x13a8)

if (result == 0)
    if (ecx != 0)
        result = sub_6e5c50(ecx)
        *(arg1 + 0x13a8) = 0
else if (ecx == 0)
    int32_t* eax_2 = sub_6e5ab0(result)
    *(arg1 + 0x13a8) = eax_2
    result = sub_6e68f0(eax_2, "idle", eax_2, 1f, 0)

if (*(arg1 + 0x13a8) != 0)
    int32_t* eax_3 = data_147abe8
    int32_t* ecx_3 = *(arg1 + 0x1490)
    float xmm0_1 = eax_3[0xb]
    float var_1a8
    int32_t* ecx_5
    int32_t ebx
    float xmm0_3
    float xmm0_4
    int32_t xmm0_5
    int32_t xmm0_6
    float xmm3_4
    
    if (ecx_3[1] == 0x18)
        void* eax_4 = sub_5af880(ecx_3)
        float xmm0_2 = *(eax_4 + 0x4c)
        xmm0_3 = *(eax_4 + 0x50)
        sub_64c550(arg1 + 0x14, xmm0_1, &var_1a8)
        xmm0_4 = *(arg1 + 0x1620)
        eax_3 = *(arg1 + 0x13a8)
        float xmm1_2 = *(arg1 + 0x1680)
        float var_1a0
        xmm3_4 = (var_1a0 - var_1a8) / (xmm0_2 - 0f) * xmm0_4
        xmm0_5 = *(arg1 + 0x1634)
        xmm0_6 = *(arg1 + 0x1638)
        
        if (not(xmm1_2 <= 0.999000013f))
            ebx.b = 0xff
        else if (0.00100000005f <= xmm1_2)
            ebx = int.d(xmm1_2 * 255f + 0.5f)
        else
            ebx.b = 0
        
        ecx_5 = *eax_3
    
    if (ecx_3[1] != 0x18 || ecx_5[1] != 0x18)
        sub_63b870(eax_3, &data_801800, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
            "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2ed, "FlanimGetDef")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_5 = sub_5af880(ecx_5)
    int32_t i = 0
    
    if (*(eax_5 + 0x28) s> 0)
        int32_t ecx_6 = 0
        
        do
            ecx_6 += 0x68
            i += 1
            *(ecx_6 + eax_3[0x1a] - 5) = ebx.b
        while (i s< *(eax_5 + 0x28))
    
    void* eax_7 = *(arg1 + 0x13a8)
    *(eax_7 + 0x2c) = xmm0_5
    *(eax_7 + 0x3c) = xmm0_6
    void* eax_8 = *(arg1 + 0x13a8)
    *(eax_8 + 0x20) = xmm3_4
    float var_1a4
    float var_19c
    *(eax_8 + 0x34) = (var_19c - var_1a4) / (xmm0_3 - 0f) * xmm0_4
    int32_t var_1c8_2 = sub_6e5cc0(*(arg1 + 0x13a8), eax_5.w, arg1, arg2)
    void* var_14c
    result = sub_6e8b30(*(arg1 + 0x13a8), &var_14c)
    uint32_t ebx_1 = result
    
    if (ebx_1 s> 0)
        void var_140
        void* esi_2 = &var_140
        uint32_t i_1
        
        do
            void* ecx_15 = *(esi_2 - 0xc)
            result = *(ecx_15 + 0x10) - 2
            
            switch (result)
                case 0
                    int32_t var_17c[0x5]
                    sub_6883d0(*(ecx_15 + 0x18), &var_17c)
                    char var_168_1 = 1
                    result = sub_688660(&var_17c, esi_2, arg1)
                    *(arg1 + 0x13b8) = result
                case 1
                    result = *(arg1 + 0x13b8)
                    void* ecx_12 = data_147abf0
                    
                    if (result != 0)
                        uint32_t edx_3 = zx.d(result.w)
                        
                        if (edx_3 u< *(ecx_12 + 4))
                            uint32_t result_1 = edx_3 * 0x64 + *ecx_12
                            
                            if (*(result_1 + 0x60) == result && result_1 != 0)
                                (*(*data_147abec + 0x28))(result_1)
                                result = result_1
                                *(result + 0x5a) = 0
                case 3
                    void* eax_11 = *(arg1 + 0x13ac)
                    
                    if (eax_11 != 0)
                        sub_6b8440(eax_11)
                        ecx_15 = *(esi_2 - 0xc)
                    
                    int32_t* ecx_16 = *(ecx_15 + 0x18)
                    int128_t var_1b8 = data_bf21e8
                    var_1a8.o = data_bf21f8
                    int32_t var_19c_1 = 0
                    float xmm0_13 = *esi_2
                    var_1b8.d = xmm0_13 + xmm0_13
                    int32_t var_1a4_1 = *(esi_2 - 8)
                    int32_t var_1a0_1 = *(esi_2 - 4)
                    result = sub_6b80f0(ecx_16, &var_1b8)
                    *(arg1 + 0x13ac) = result
                case 4
                    void* ecx_17 = *(arg1 + 0x13ac)
                    
                    if (ecx_17 != 0)
                        result = sub_6b8440(ecx_17)
                    
                    *(arg1 + 0x13ac) = 0
            
            esi_2 += 0x14
            i_1 = ebx_1
            ebx_1 -= 1
        while (i_1 != 1)

CookieCheckFunction(result)
return result
