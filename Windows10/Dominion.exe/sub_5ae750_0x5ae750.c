// 函数: sub_5ae750
// 地址: 0x5ae750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_2 = (arg4 - arg3) s>> 2
int32_t edx_1 = *arg3 * 3
int32_t eax_6

if (eax_2 s<= 0x28)
    int32_t eax_11 = *arg2
    eax_6 = arg5
    
    if (not(*(eax_6 + eax_11 * 0xc + 8) f<= *(eax_6 + (edx_1 << 2) + 8)))
        *arg2 = *arg3
        *arg3 = eax_11
    
    int32_t edx_29 = *arg4
    
    if (not(*(eax_6 + edx_29 * 0xc + 8) f<= *(eax_6 + *arg2 * 0xc + 8)))
        *arg4 = *arg2
        *arg2 = edx_29
        int32_t ebx_4 = *arg3
        
        if (not(*(eax_6 + edx_29 * 0xc + 8) f<= *(eax_6 + ebx_4 * 0xc + 8)))
            *arg2 = ebx_4
            *arg3 = edx_29
else
    int32_t eax_4 = (eax_2 + 1) s>> 3
    int32_t* ebx_1 = eax_4 << 2
    int32_t eax_5 = *(ebx_1 + arg3)
    eax_6 = arg5
    
    if (not(*(eax_6 + eax_5 * 0xc + 8) f<= *(eax_6 + (edx_1 << 2) + 8)))
        *(ebx_1 + arg3) = *arg3
        *arg3 = eax_5
    
    int32_t edx_2 = arg3[eax_4 * 2]
    int32_t* edi_2 = arg2
    
    if (not(*(eax_6 + edx_2 * 0xc + 8) f<= *(eax_6 + *(ebx_1 + arg3) * 0xc + 8)))
        arg3[eax_4 * 2] = *(ebx_1 + arg3)
        *(ebx_1 + arg3) = edx_2
        edi_2 = arg2
        
        if (not(*(eax_6 + edx_2 * 0xc + 8) f<= *(eax_6 + *arg3 * 0xc + 8)))
            *(ebx_1 + arg3) = *arg3
            *arg3 = edx_2
    
    int32_t edx_3 = *edi_2
    int32_t* ecx_12 = edi_2 - ebx_1
    int32_t ecx_13 = *ecx_12
    
    if (not(*(eax_6 + edx_3 * 0xc + 8) f<= *(eax_6 + ecx_13 * 0xc + 8)))
        *edi_2 = ecx_13
        *ecx_12 = edx_3
    
    int32_t ecx_17 = *(ebx_1 + edi_2)
    int32_t ecx_18 = ecx_17 * 3
    
    if (not(*(eax_6 + (ecx_18 << 2) + 8) f<= *(eax_6 + *edi_2 * 0xc + 8)))
        *(ebx_1 + edi_2) = *edi_2
        *edi_2 = ecx_17
        int32_t ecx_23 = *ecx_12
        
        if (not(*(eax_6 + (ecx_18 << 2) + 8) f<= *(eax_6 + ecx_23 * 0xc + 8)))
            *edi_2 = ecx_23
            *ecx_12 = ecx_17
    
    int32_t* edx_12 = arg4 - (eax_4 << 3)
    void* ecx_28 = arg4 - ebx_1
    int32_t ecx_29 = *ecx_28
    int32_t edx_13 = *edx_12
    
    if (not(*(eax_6 + ecx_29 * 0xc + 8) f<= *(eax_6 + edx_13 * 0xc + 8)))
        *ecx_28 = edx_13
        *edx_12 = ecx_29
        eax_6 = arg5
    
    int32_t ecx_33 = *arg4
    int32_t ecx_34 = ecx_33 * 3
    int32_t ecx_35 = *ecx_28
    
    if (not(*(eax_6 + (ecx_34 << 2) + 8) f<= *(eax_6 + ecx_35 * 0xc + 8)))
        *arg4 = ecx_35
        eax_6 = arg5
        *ecx_28 = ecx_33
        int32_t* ecx_40 = *edx_12
        
        if (not(*(eax_6 + (ecx_34 << 2) + 8) f<= *(eax_6 + ecx_40 * 0xc + 8)))
            *ecx_28 = ecx_40
            *edx_12 = ecx_33
    
    int32_t ecx_44 = *edi_2
    
    if (not(*(eax_6 + ecx_44 * 0xc + 8) f<= *(eax_6 + *(ebx_1 + arg3) * 0xc + 8)))
        *edi_2 = *(ebx_1 + arg3)
        *(ebx_1 + arg3) = ecx_44
    
    int32_t ecx_48 = *ecx_28
    int32_t* ecx_49 = ecx_48 * 3
    
    if (not(*(eax_6 + (ecx_49 << 2) + 8) f<= *(eax_6 + *edi_2 * 0xc + 8)))
        *ecx_28 = *edi_2
        *edi_2 = ecx_48
        
        if (not(*(eax_6 + (ecx_49 << 2) + 8) f<= *(eax_6 + *(ebx_1 + arg3) * 0xc + 8)))
            int32_t eax_10 = *(ebx_1 + arg3)
            *edi_2 = eax_10
            *(ebx_1 + arg3) = ecx_48
            return eax_10

return eax_6
