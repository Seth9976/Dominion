// 函数: sub_6812c0
// 地址: 0x6812c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int64_t* ecx = arg4
int32_t eax_3 = (ecx - arg3) s/ 0xc
int32_t eax_25

if (eax_3 s<= 0x28)
    int32_t eax_27 = arg2[1].d
    
    if (eax_27 s< arg3[1].d)
        int64_t xmm1_9 = *arg2
        *arg2 = *arg3
        arg2[1].d = arg3[1].d
        *arg3 = xmm1_9
        arg3[1].d = eax_27
        ecx = arg4
    
    eax_25 = ecx[1].d
    
    if (eax_25 s< arg2[1].d)
        int32_t edx_8 = eax_25
        int64_t xmm1_10 = *ecx
        *ecx = *arg2
        eax_25 = arg2[1].d
        ecx[1].d = eax_25
        *arg2 = xmm1_10
        arg2[1].d = edx_8
        
        if (edx_8 s< arg3[1].d)
            *arg2 = *arg3
            eax_25 = arg3[1].d
            arg2[1].d = eax_25
            *arg3 = xmm1_10
            arg3[1].d = edx_8
else
    int32_t eax_5 = (eax_3 + 1) s>> 3
    int32_t esi_3 = eax_5 * 0xc
    int32_t eax_6 = *(esi_3 + arg3 + 8)
    
    if (eax_6 s< arg3[1].d)
        int64_t xmm1_1 = *(esi_3 + arg3)
        *(esi_3 + arg3) = *arg3
        *(esi_3 + arg3 + 8) = arg3[1].d
        *arg3 = xmm1_1
        arg3[1].d = eax_6
    
    int32_t eax_8 = arg3[eax_5 * 3 + 1].d
    
    if (eax_8 s< *(esi_3 + arg3 + 8))
        int64_t xmm1_2 = arg3[eax_5 * 3]
        arg3[eax_5 * 3] = *(esi_3 + arg3)
        arg3[eax_5 * 3 + 1].d = *(esi_3 + arg3 + 8)
        *(esi_3 + arg3) = xmm1_2
        *(esi_3 + arg3 + 8) = eax_8
        
        if (eax_8 s< arg3[1].d)
            *(esi_3 + arg3) = *arg3
            *(esi_3 + arg3 + 8) = arg3[1].d
            *arg3 = xmm1_2
            arg3[1].d = eax_8
    
    int32_t eax_11 = arg2[1].d
    void* edx_5 = arg2 - esi_3
    
    if (eax_11 s< *(edx_5 + 8))
        int64_t xmm1_3 = *arg2
        *arg2 = *edx_5
        arg2[1].d = *(edx_5 + 8)
        *edx_5 = xmm1_3
        *(edx_5 + 8) = eax_11
    
    int32_t eax_13 = *(esi_3 + arg2 + 8)
    
    if (eax_13 s< arg2[1].d)
        int64_t xmm1_4 = *(esi_3 + arg2)
        *(esi_3 + arg2) = *arg2
        *(esi_3 + arg2 + 8) = arg2[1].d
        *arg2 = xmm1_4
        arg2[1].d = eax_13
        
        if (eax_13 s< *(edx_5 + 8))
            *arg2 = *edx_5
            arg2[1].d = *(edx_5 + 8)
            *edx_5 = xmm1_4
            *(edx_5 + 8) = eax_13
    
    int64_t* edx_7 = arg4 - esi_3
    int64_t* ecx_6 = arg4 - eax_5 * 0x18
    int32_t eax_16 = edx_7[1].d
    
    if (eax_16 s< ecx_6[1].d)
        int64_t xmm1_5 = *edx_7
        *edx_7 = *ecx_6
        edx_7[1].d = ecx_6[1].d
        *ecx_6 = xmm1_5
        ecx_6[1].d = eax_16
    
    int64_t* eax_20 = arg4[1].d
    
    if (eax_20 s< edx_7[1].d)
        int64_t xmm1_6 = *arg4
        *arg4 = *edx_7
        arg4[1].d = edx_7[1].d
        *edx_7 = xmm1_6
        edx_7[1].d = eax_20
        
        if (eax_20 s< ecx_6[1].d)
            *edx_7 = *ecx_6
            edx_7[1].d = ecx_6[1].d
            *ecx_6 = xmm1_6
            ecx_6[1].d = eax_20
    
    int32_t eax_23 = arg2[1].d
    
    if (eax_23 s< *(esi_3 + arg3 + 8))
        int64_t xmm1_7 = *arg2
        *arg2 = *(esi_3 + arg3)
        arg2[1].d = *(esi_3 + arg3 + 8)
        *(esi_3 + arg3) = xmm1_7
        *(esi_3 + arg3 + 8) = eax_23
    
    eax_25 = edx_7[1].d
    
    if (eax_25 s< arg2[1].d)
        int32_t ecx_9 = eax_25
        int64_t xmm1_8 = *edx_7
        *edx_7 = *arg2
        eax_25 = arg2[1].d
        edx_7[1].d = eax_25
        *arg2 = xmm1_8
        arg2[1].d = ecx_9
        
        if (ecx_9 s< *(esi_3 + arg3 + 8))
            *arg2 = *(esi_3 + arg3)
            int32_t eax_26 = *(esi_3 + arg3 + 8)
            arg2[1].d = eax_26
            *(esi_3 + arg3) = xmm1_8
            *(esi_3 + arg3 + 8) = ecx_9
            return eax_26

return eax_25
