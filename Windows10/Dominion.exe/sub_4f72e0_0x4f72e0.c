// 函数: sub_4f72e0
// 地址: 0x4f72e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg4
int32_t eax_2 = (esi - arg3) s>> 2
int32_t edi = *arg3
int32_t* result

if (eax_2 s<= 0x28)
    int32_t eax_11 = *arg2
    
    if (eax_11 s< edi)
        *arg2 = edi
        *arg3 = eax_11
    
    result = *esi
    int32_t edi_9 = *arg2
    
    if (result s< edi_9)
        *esi = edi_9
        *arg2 = result
        int32_t esi_8 = *arg3
        
        if (result s< esi_8)
            *arg2 = esi_8
            *arg3 = result
else
    int32_t eax_4 = (eax_2 + 1) s>> 3
    int32_t ebx_2 = eax_4 << 2
    int32_t eax_5 = arg3[eax_4]
    
    if (eax_5 s< edi)
        arg3[eax_4] = edi
        *arg3 = eax_5
    
    int32_t edi_1 = arg3[eax_4]
    int32_t eax_7 = arg3[eax_4 * 2]
    
    if (eax_7 s< edi_1)
        arg3[eax_4 * 2] = edi_1
        esi = arg4
        arg3[eax_4] = eax_7
        int32_t edi_2 = *arg3
        
        if (eax_7 s< edi_2)
            arg3[eax_4] = edi_2
            *arg3 = eax_7
    
    int32_t edi_3 = *arg2
    void* eax_9 = arg2 - ebx_2
    int32_t ebx_3 = *eax_9
    
    if (edi_3 s< ebx_3)
        *arg2 = ebx_3
        *eax_9 = edi_3
    
    int32_t edi_4 = arg2[eax_4]
    int32_t ebx_5 = *arg2
    
    if (edi_4 s< ebx_5)
        arg2[eax_4] = ebx_5
        esi = arg4
        *arg2 = edi_4
        int32_t ebx_6 = *eax_9
        
        if (edi_4 s< ebx_6)
            *arg2 = ebx_6
            *eax_9 = edi_4
    
    result = esi - ebx_2
    int32_t* edi_6 = esi - (eax_4 << 3)
    int32_t ebx_7 = *result
    
    if (ebx_7 s< *edi_6)
        *result = *edi_6
        esi = arg4
        *edi_6 = ebx_7
    
    int32_t ebx_8 = *esi
    
    if (ebx_8 s< *result)
        *arg4 = *result
        *result = ebx_8
        int32_t esi_5 = *edi_6
        
        if (ebx_8 s< esi_5)
            *result = esi_5
            *edi_6 = ebx_8
    
    int32_t* ebx_9 = ebx_2
    int32_t esi_6 = *arg2
    int32_t edi_7 = *(ebx_9 + arg3)
    
    if (esi_6 s< edi_7)
        *arg2 = edi_7
        *(ebx_9 + arg3) = esi_6
    
    int32_t esi_7 = *result
    int32_t edi_8 = *arg2
    
    if (esi_7 s< edi_8)
        *result = edi_8
        *arg2 = esi_7
        result = *(ebx_9 + arg3)
        
        if (esi_7 s< result)
            *arg2 = result
            *(ebx_9 + arg3) = esi_7

return result
