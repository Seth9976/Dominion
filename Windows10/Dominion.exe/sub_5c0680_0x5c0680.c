// 函数: sub_5c0680
// 地址: 0x5c0680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t esi_1 = *(arg4 + 8) * *(arg4 + 4)
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(esi_1)
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q(esi_1)
int32_t eax_6 = (eax_4 + (edx_2 & 7)) s>> 3
int32_t var_14 = eax_6
int128_t* edx_5 = *arg3
int32_t ecx = eax_6 << 3
int32_t edi_1 = ((edx & 3) + eax_2) & 0xfffffffc
int128_t xmm1_2

if (edi_1 == 0)
    xmm1_2 = *edx_5
    var_14 = xmm1_2
    
    if (esi_1 s> 1)
        void* ecx_5 = edx_5 + 4
        int32_t i_5 = esi_1 - 1
        int32_t i
        
        do
            eax_6 = &var_14
            
            if (*ecx_5 f> xmm1_2)
                eax_6 = ecx_5
            
            ecx_5 += 4
            xmm1_2 = *eax_6
            var_14 = xmm1_2
            i = i_5
            i_5 -= 1
        while (i != 1)
else
    float xmm1[0x4] = *edx_5
    float var_30[0x4] = xmm1
    
    if (edi_1 s> 4)
        float xmm2_1[0x4] = edx_5[1]
        
        if (ecx s> 8)
            void* eax_7 = &edx_5[2]
            float xmm0_1[0x4] = xmm1
            int32_t i_3 = ((ecx - 9) u>> 3) + 1
            int32_t i_1
            
            do
                float xmm1_1[0x4] = *eax_7
                eax_7 += 0x20
                xmm1 = _mm_max_ps(xmm1_1, xmm0_1)
                xmm2_1 = _mm_max_ps(*(eax_7 - 0x10), xmm2_1)
                xmm0_1 = xmm1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            eax_6 = var_14
        
        float xmm2_2[0x4] = _mm_max_ps(xmm2_1, xmm1)
        var_30 = xmm2_2
        
        if (edi_1 s> ecx)
            var_30 = _mm_max_ps(edx_5[eax_6 * 2], xmm2_2)
    
    int128_t xmm0_6
    eax_6, xmm0_6 = sub_5c49c0(&var_30)
    xmm1_2 = xmm0_6
    var_14 = xmm1_2
    
    if (edi_1 s< esi_1)
        int32_t i_4 = esi_1 - edi_1
        int32_t* ecx_4 = *arg3 + (edi_1 << 2)
        int32_t* eax_11
        int32_t i_2
        
        do
            eax_11 = &var_14
            
            if (*ecx_4 f> xmm1_2)
                eax_11 = ecx_4
            
            ecx_4 = &ecx_4[1]
            xmm1_2 = *eax_11
            var_14 = xmm1_2
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        return eax_11
return eax_6
