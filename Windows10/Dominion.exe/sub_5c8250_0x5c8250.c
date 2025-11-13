// 函数: sub_5c8250
// 地址: 0x5c8250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg4
int32_t result = arg2
int32_t edi_1 = ebx - result
int32_t i = result

if (result s< ebx)
    if (edi_1 u< 4)
    label_5c82e4:
        int32_t* ecx_6 = arg3[1]
        int32_t edx_3 = **arg3
        
        if (ebx - i s< 4)
        label_5c8328:
            
            do
                result = *ecx_6
                *(edx_3 + (i << 2)) = result
                i += 1
            while (i s< ebx)
        else
            do
                *(edx_3 + (i << 2)) = *ecx_6
                *(edx_3 + (i << 2) + 4) = *ecx_6
                *(edx_3 + (i << 2) + 8) = *ecx_6
                result = *ecx_6
                *(edx_3 + (i << 2) + 0xc) = result
                i += 4
            while (i s< ebx - 3)
            
            if (i s< ebx)
                goto label_5c8328
    else
        int32_t i_1 = i
        int32_t eax_1 = **arg3
        int32_t esi = eax_1 + (i_1 << 2)
        int32_t eax_4 = arg3[1]
        i = i_1
        
        if (esi u<= eax_4 && eax_1 + (ebx << 2) - 4 u>= eax_4)
            goto label_5c82e4
        
        int32_t edi_2 = edi_1 & 0x80000003
        
        if (edi_2 s< 0)
            edi_2 = ((edi_2 - 1) | 0xfffffffc) + 1
        
        int32_t eax_6 = ebx - edi_2
        
        do
            i += 4
        while (i s< eax_6)
        
        arg4 = i
        int32_t eax_9
        int32_t edx_1
        edx_1:eax_9 = sx.q(eax_6 - i_1 + 3)
        result = *arg3[1]
        int32_t ecx_5
        int32_t edi_6
        edi_6, ecx_5 = __memfill_u32(esi, result, ((edx_1 & 3) + eax_9) s>> 2 << 4 u>> 2)
        
        if (i s< ebx)
            goto label_5c82e4

return result
