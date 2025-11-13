// 函数: sub_4ad010
// 地址: 0x4ad010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = *(arg1 + 0xbd4)

if (arg2 != result)
    int32_t xmm1_3
    
    if (arg2 != *(arg1 + 0xbe4))
        xmm1_3 = (zx.o(0)).d
    else
        xmm1_3 = *(arg1 + 0xbe8)
        *(arg1 + 0xbdc) = 0
        *(arg1 + 0xbe0) = 0
    
    int32_t xmm0_4 = *(arg1 + 0xbd8)
    *(arg1 + 0xbe4) = result
    *(arg1 + 0xbe8) = xmm0_4
    *(arg1 + 0xbd4) = arg2
    *(arg1 + 0xbd8) = xmm1_3
    
    if (*(arg1 + 0x258) == 0)
        int32_t edx
        result, edx = sub_66b600(sub_64e7a0(*(arg1 + 0xbec)), 0xffffffff)
        int32_t edi_1 = *(arg1 + 0xbd4)
        *(arg1 + 0xbf0) = 0
        
        if (edi_1 != 0xffffffff && (edi_1 s< result || edi_1 s> edx))
            if (edi_1 s>= result)
                edi_1 -= edx - result
            
            uint32_t eax_5 = sub_64e7a0(*(arg1 + 0xbec))
            int32_t var_b4_1 = 0
            uint32_t var_a8 = eax_5
            float var_a0[0x4]
            void var_60
            void var_50
            int128_t* eax_6 = sub_656980(eax_5, 0, eax_5, &var_a0, &var_50, &var_60)
            uint32_t ecx_8 = var_a8
            int32_t var_c4_1 = 0
            int128_t var_80 = *eax_6
            var_a0 = eax_6[1]
            int128_t* eax_8 = sub_656980(&var_80, 1, ecx_8, &var_80, &var_50, &var_60)
            float xmm2_2[0x4] = var_a0
            uint32_t ecx_9 = var_a8
            float xmm3_2 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0x55)
            int128_t xmm0_7 = *eax_8
            float xmm1_4[0x4] = eax_8[1]
            int32_t eax_9 = *(ecx_9 + 0x14e8)
            float xmm2_3 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa)
            int128_t var_40_1 = xmm0_7
            float xmm0_9 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0x55)
            float xmm2_4 = xmm2_3 - _mm_shuffle_ps(xmm1_4, xmm1_4, 0xaa)
            result = eax_9 - 1
            float xmm0_12
            float xmm1_6
            
            if (eax_9 == 1)
                xmm0_12 = *(ecx_9 + 0x138c)
                xmm1_6 = _mm_cvtepi32_ps(zx.o(neg.d(edi_1))) * xmm2_4
            else
                uint32_t result_1 = result
                result -= 1
                
                if (result_1 != 1)
                    sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x3f70, 
                        "UI2TableGetRangeTarget")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                xmm1_6 = *(ecx_9 + 0x1390)
                xmm0_12 = _mm_cvtepi32_ps(zx.o(neg.d(edi_1))) * (xmm3_2 - xmm0_9)
            
            *(arg1 + 0xbf4) = xmm0_12
            *(arg1 + 0xbf8) = xmm1_6
            *(arg1 + 0xbf0) = 1
else
    float xmm0 = data_8c4634
    float xmm1 = *(arg1 + 0xbe0)
    
    if (*(arg1 + 0xbdc) == 0)
        xmm1 - 1f
        result:1.b = (xmm1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 1f) ? 1 : 0) << 2
            | (xmm1 < 1f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm0_3 = xmm0 * 4f + xmm1
            int32_t xmm1_2 = (zx.o(0)).d
            
            if (not(0 f> xmm0_3))
                xmm1_2 = _mm_min_ss(0x3f800000, xmm0_3)
            
            *(arg1 + 0xbe0) = xmm1_2
            CookieCheckFunction(result)
            return result
    else
        int32_t xmm2_1 = (zx.o(0)).d
        xmm1 f- 0
        result:1.b = (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2
            | (xmm1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            float xmm1_1 = xmm1 - xmm0 * 4f
            
            if (not(0 f> xmm1_1))
                xmm2_1 = _mm_min_ss(0x3f800000, xmm1_1)
            
            *(arg1 + 0xbe0) = xmm2_1
            CookieCheckFunction(result)
            return result

CookieCheckFunction(result)
return result
