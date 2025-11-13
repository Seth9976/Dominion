// 函数: sub_5adae0
// 地址: 0x5adae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg3
int64_t* var_10 = arg3

if (arg4 s> 0x20)
    int32_t i_1 = ((arg4 - 0x21) u>> 5) + 1
    int32_t i
    
    do
        eax = sub_5acff0(eax, &eax[0x60], eax, arg6)
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result = sub_5acff0(eax, arg2, eax, arg6)

if (arg4 s> 0x20)
    int32_t ecx_2 = arg4
    int32_t* edx_2 = arg3
    int64_t* edi_1 = arg5
    void* eax_3
    
    while (true)
        void* esi_3 = &edx_2[0x60]
        int32_t eax_1 = 0x20
        int32_t* ebx_1 = esi_3
        
        if (ecx_2 - 0x20 s< 0x20)
            eax_1 = ecx_2 - 0x20
        
        int32_t ecx_4 = ecx_2 - 0x20 - eax_1
        eax_3 = esi_3 + eax_1 * 0xc
        int32_t* var_28_1
        uint32_t count
        uint32_t count_1
        
        while (true)
            int32_t ecx_5 = edx_2[1]
            
            if (ebx_1[1] != 0xa)
                if (ecx_5 != 0xa)
                label_5adc57:
                    int32_t ecx_15
                    ecx_15.b =
                        *(arg6 + *ebx_1 * 0xc + 0x14) + 0f > *(arg6 + *edx_2 * 0xc + 0x14) + 0f
                    
                    if (ecx_15.b != 0)
                        goto label_5adba0
                    
                    goto label_5adc87
                
            label_5adba0:
                *edi_1 = *ebx_1
                int32_t ecx_7 = ebx_1[2]
                ebx_1 = &ebx_1[3]
                edi_1[1].d = ecx_7
                edi_1 += 0xc
                
                if (ebx_1 == eax_3)
                    count_1 = esi_3 - edx_2
                    count = count_1
                    var_28_1 = edx_2
                    break
            else
                if (ecx_5 == 0xa)
                    int32_t ecx_6 = edx_2[2]
                    
                    if (ebx_1[2] s< 6)
                        if (ecx_6 s>= 6)
                            goto label_5adc87
                        
                        goto label_5adc57
                    
                    if (ecx_6 s>= 6)
                        goto label_5adc57
                    
                    goto label_5adba0
                
            label_5adc87:
                *edi_1 = *edx_2
                int32_t ecx_16 = edx_2[2]
                edx_2 = &edx_2[3]
                edi_1[1].d = ecx_16
                edi_1 += 0xc
                
                if (edx_2 == esi_3)
                    count_1 = eax_3 - ebx_1
                    count = count_1
                    var_28_1 = ebx_1
                    break
        
        memmove(edi_1, var_28_1, count)
        edi_1 += count_1
        edx_2 = eax_3
        
        if (ecx_4 s<= 0x20)
            break
        
        ecx_2 = ecx_4
    
    memmove(edi_1, eax_3, arg2 - eax_3)
    int32_t eax_7 = arg4 * 3
    void* edi_2 = arg5 + (eax_7 << 2)
    result = sub_5aeef0(eax_7, edi_2, arg5, var_10, 0x40, arg4, arg6)
    int32_t esi_4 = 0x80
    
    if (arg4 s> 0x80)
        do
            int32_t esi_5 = esi_4 * 2
            result = sub_5aeef0(sub_5aeef0(result, arg2, var_10, arg5, esi_4, arg4, arg6), edi_2, 
                arg5, var_10, esi_5, arg4, arg6)
            esi_4 = esi_5 * 2
        while (arg4 s> esi_4)

return result
