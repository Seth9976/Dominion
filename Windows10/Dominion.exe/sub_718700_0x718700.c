// 函数: sub_718700
// 地址: 0x718700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg4

if (arg5 == 1 && result == 0)
    return memcpy(*(arg2 + 0x18), *(arg2 + 0x14), *(arg1 + 0x14) << 2)

void* edi = arg1
int32_t* esi = *(edi + 0xc)

if (*esi f<= arg3)
    int32_t edx_1 = *(edi + 8)
    int32_t ecx_1
    
    if (arg3 f< esi[edx_1 - 1])
        int32_t ebx_1 = 0
        int32_t edx_2 = edx_1 - 2
        
        if (edx_1 != 2)
            int32_t eax_14 = edx_2
            
            while (true)
                int32_t eax_15 = eax_14 s>> 1
                float temp1_1 = esi[eax_15 + 1]
                arg3 - temp1_1
                ecx_1 = eax_15 + 1
                
                if (arg3 < temp1_1)
                    ecx_1 = ebx_1
                
                if (arg3 < temp1_1)
                    edx_2 = eax_15
                
                ebx_1 = ecx_1
                
                if (ecx_1 == edx_2)
                    break
                
                eax_14 = ecx_1 + edx_2
        else
            ecx_1 = 0
    else
        ecx_1 = edx_1 - 1
    
    result = *(*(edi + 0x10) + (ecx_1 << 2))
    arg1 = result
    
    if (result == 0)
        return memcpy(*(arg2 + 0x18), *(arg2 + 0x14), *(edi + 0x14) << 2)
    
    int32_t i = 0
    
    if (*(edi + 0x14) s> 0)
        do
            *(*(arg2 + 0x18) + (i << 2)) = *(*(arg2 + 0x14) + (*(result + (i << 2)) << 2))
            i += 1
            result = arg1
        while (i s< *(edi + 0x14))
else if (result == 0 || result == 1)
    return memcpy(*(arg2 + 0x18), *(arg2 + 0x14), *(edi + 0x14) << 2)

return result
