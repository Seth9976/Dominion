// 函数: sub_4ad900
// 地址: 0x4ad900
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_88
uint32_t var_14 = __security_cookie ^ &var_88
uint32_t result
void* eax_1

if (*(arg1 + 0x258) != 0)
    eax_1 = arg1
label_4ad9c4:
    int32_t var_30_1 = 0xffffffff
    int128_t xmm0_7 = *(0xbc4 + eax_1)
    int128_t var_40 = xmm0_7
    void var_58
    int32_t edx
    int128_t* eax_3 = sub_682560(&var_58, edx, &var_40, &var_58)
    bool cond:1_1 = *(arg1 + 0x258) != 0
    int32_t eax_4 = eax_3[1].d
    result = data_147abe4
    var_40 = *eax_3
    
    if (not(cond:1_1))
        *(result + 0x28) = xmm0_7
        *(result + 0x38) = 0xffffffff
    
    int32_t i = 0
    
    if (*(arg1 + 0xbbc) s> 0)
        do
            if (*(arg1 + 0xbd4) != i)
                bool p_10
                
                if (*(arg1 + 0xbe4) == i)
                    float xmm0_10 = *(arg1 + 0xbe8)
                    xmm0_10 - 0f
                    result:1.b = (xmm0_10 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2 | (xmm0_10 < 0f ? 1 : 0)
                    p_10 = unimplemented  {test ah, 0x44}
                
                if (*(arg1 + 0xbe4) != i || not(p_10))
                    int32_t ecx_1 = *(arg1 + (i << 2))
                    
                    if (ecx_1 != 0)
                        sub_664d00(sub_64e7a0(ecx_1))
            
            i += 1
        while (i s< *(arg1 + 0xbbc))
        
        result = data_147abe4
    
    *(result + 0x28) = var_40
    *(result + 0x38) = eax_4
    int32_t ecx_4 = *(arg1 + 0xbd4)
    
    if (ecx_4 != 0xffffffff)
        int32_t ecx_5 = *(arg1 + (ecx_4 << 2))
        
        if (ecx_5 != 0)
            result = sub_664d00(sub_64e7a0(ecx_5))
    
    int32_t ecx_7 = *(arg1 + 0xbe4)
    
    if (ecx_7 != 0xffffffff)
        float xmm0_12 = *(arg1 + 0xbe8)
        xmm0_12 - 0f
        result:1.b = (xmm0_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2
            | (xmm0_12 < 0f ? 1 : 0)
        bool p_12 = unimplemented  {test ah, 0x44}
        
        if (p_12)
            int32_t ecx_8 = *(arg1 + (ecx_7 << 2))
            
            if (ecx_8 != 0)
                result = sub_664d00(sub_64e7a0(ecx_8))
else
    float xmm2_1 = *(arg1 + 0xbc4)
    xmm2_1 f- 0
    result:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
        | (xmm2_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
    label_4ad970:
        bool cond:0_1 = 0f f> *(arg1 + 0xbcc)
        result = data_cf65b8
        uint128_t xmm3_1 = zx.o(*(result + 0x18))
        int32_t xmm0_5 = _mm_cvtepi32_ps(zx.o(*(result + 0x14)))
        int32_t xmm3_2 = _mm_cvtepi32_ps(xmm3_1)
        
        if (not(cond:0_1) && not(xmm2_1 f> xmm0_5) && not(0 f> *(arg1 + 0xbd0))
                && not(*(arg1 + 0xbc8) f> xmm3_2))
            eax_1 = arg1
            goto label_4ad9c4
    else
        float xmm0_1 = *(arg1 + 0xbc8)
        xmm0_1 f- 0
        result:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            goto label_4ad970
        
        float xmm0_2 = *(arg1 + 0xbcc)
        xmm0_2 f- 0
        result:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
            | (xmm0_2 < 0f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6)
            goto label_4ad970
        
        float xmm0_3 = *(arg1 + 0xbd0)
        xmm0_3 f- 0
        result:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
            | (xmm0_3 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            goto label_4ad970
CookieCheckFunction(result)
return result
