// 函数: sub_5cebe0
// 地址: 0x5cebe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t var_c = arg2
int32_t ecx = arg4

if (ecx s> 0)
    while (*(arg2 + (result << 2)) != arg3)
        result += 1
        
        if (result s>= ecx)
            return result
    
    result = arg3
    int32_t esi_1 = 0
    
    do
        int32_t edi_1 = *(arg2 + (esi_1 << 2))
        
        if (edi_1 != result)
            *(*(arg6 + 0x810) * 0x408 + arg6 + 0x404) = arg5
            int32_t ecx_2 = *(arg6 + 0x810)
            int32_t edx = ecx_2 * 0x408
            ecx = arg4
            *(arg6 + ((ecx_2 * 0x102 + *(edx + arg6 + 0x400)) << 2)) = edi_1
            *(edx + arg6 + 0x400) += 1
            arg2 = var_c
            result = arg3
        
        esi_1 += 1
    while (esi_1 s< ecx)
    
    *(arg6 + 0x810) += 1

return result
