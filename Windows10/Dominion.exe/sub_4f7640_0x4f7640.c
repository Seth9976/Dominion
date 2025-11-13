// 函数: sub_4f7640
// 地址: 0x4f7640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = arg4
int32_t eax_3 = (ecx - arg3) s/ 0xc
int32_t eax_28

if (eax_3 s<= 0x28)
    if (*arg2 s< *arg3)
        int32_t ecx_10 = arg2[2]
        int64_t xmm1_9 = *arg2
        *arg2 = *arg3
        arg2[2] = arg3[2]
        *arg3 = xmm1_9
        arg3[2] = ecx_10
        ecx = arg4
    
    eax_28 = *ecx
    
    if (eax_28 s< *arg2)
        int64_t xmm1_10 = *ecx
        int32_t edx_8 = ecx[2]
        *ecx = *arg2
        ecx[2] = arg2[2]
        *arg2 = xmm1_10
        arg2[2] = edx_8
        eax_28 = *arg2
        
        if (eax_28 s< *arg3)
            *arg2 = *arg3
            eax_28 = arg3[2]
            arg2[2] = eax_28
            *arg3 = xmm1_10
            arg3[2] = edx_8
else
    int32_t eax_5 = (eax_3 + 1) s>> 3
    int32_t esi_3 = eax_5 * 0xc
    int32_t edx_3 = eax_5 * 0x18
    
    if (arg3[eax_5 * 3] s< *arg3)
        int64_t xmm1_1 = *(esi_3 + arg3)
        int32_t ecx_1 = arg3[eax_5 * 3 + 2]
        *(esi_3 + arg3) = *arg3
        arg3[eax_5 * 3 + 2] = arg3[2]
        *arg3 = xmm1_1
        arg3[2] = ecx_1
    
    if (arg3[eax_5 * 6] s< arg3[eax_5 * 3])
        int64_t xmm1_2 = *(edx_3 + arg3)
        int32_t ecx_2 = arg3[eax_5 * 6 + 2]
        *(edx_3 + arg3) = *(esi_3 + arg3)
        arg3[eax_5 * 6 + 2] = arg3[eax_5 * 3 + 2]
        *(esi_3 + arg3) = xmm1_2
        arg3[eax_5 * 3 + 2] = ecx_2
        
        if (arg3[eax_5 * 3] s< *arg3)
            *(esi_3 + arg3) = *arg3
            arg3[eax_5 * 3 + 2] = arg3[2]
            *arg3 = xmm1_2
            arg3[2] = ecx_2
    
    void* edx_5 = arg2 - esi_3
    
    if (*arg2 s< *edx_5)
        int64_t xmm1_3 = *arg2
        int32_t ecx_3 = arg2[2]
        *arg2 = *edx_5
        arg2[2] = *(edx_5 + 8)
        *edx_5 = xmm1_3
        *(edx_5 + 8) = ecx_3
    
    if (arg2[eax_5 * 3] s< *arg2)
        int64_t xmm1_4 = *(esi_3 + arg2)
        int32_t ecx_4 = arg2[eax_5 * 3 + 2]
        *(esi_3 + arg2) = *arg2
        arg2[eax_5 * 3 + 2] = arg2[2]
        *arg2 = xmm1_4
        arg2[2] = ecx_4
        
        if (*arg2 s< *edx_5)
            *arg2 = *edx_5
            arg2[2] = *(edx_5 + 8)
            *edx_5 = xmm1_4
            *(edx_5 + 8) = ecx_4
    
    int32_t* ecx_6 = arg4
    int32_t* edx_7 = ecx_6 - esi_3
    int32_t* esi_5 = ecx_6 - edx_3
    
    if (*edx_7 s< *esi_5)
        int32_t ecx_5 = edx_7[2]
        int64_t xmm1_5 = *edx_7
        *edx_7 = *esi_5
        edx_7[2] = esi_5[2]
        *esi_5 = xmm1_5
        esi_5[2] = ecx_5
        ecx_6 = arg4
    
    if (*ecx_6 s< *edx_7)
        int32_t* eax_21 = ecx_6[2]
        int64_t xmm1_6 = *ecx_6
        *ecx_6 = *edx_7
        ecx_6[2] = edx_7[2]
        *edx_7 = xmm1_6
        edx_7[2] = eax_21
        
        if (*edx_7 s< *esi_5)
            *edx_7 = *esi_5
            edx_7[2] = esi_5[2]
            *esi_5 = xmm1_6
            esi_5[2] = eax_21
    
    if (*arg2 s< arg3[eax_5 * 3])
        int64_t xmm1_7 = *arg2
        int32_t ecx_8 = arg2[2]
        *arg2 = *(esi_3 + arg3)
        arg2[2] = arg3[eax_5 * 3 + 2]
        *(esi_3 + arg3) = xmm1_7
        arg3[eax_5 * 3 + 2] = ecx_8
    
    eax_28 = *edx_7
    
    if (eax_28 s< *arg2)
        int64_t xmm1_8 = *edx_7
        int32_t ecx_9 = edx_7[2]
        *edx_7 = *arg2
        edx_7[2] = arg2[2]
        *arg2 = xmm1_8
        arg2[2] = ecx_9
        eax_28 = *arg2
        
        if (eax_28 s< arg3[eax_5 * 3])
            *arg2 = *(esi_3 + arg3)
            int32_t eax_29 = arg3[eax_5 * 3 + 2]
            arg2[2] = eax_29
            *(esi_3 + arg3) = xmm1_8
            arg3[eax_5 * 3 + 2] = ecx_9
            return eax_29

return eax_28
