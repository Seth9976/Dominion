// 函数: sub_5ce940
// 地址: 0x5ce940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 == arg4)
    *(*(arg8 + 0x810) * 0x408 + arg8 + 0x404) = arg7
    void* ecx_2 = *(arg8 + 0x810) * 0x408 + arg8
    sub_5ce8e0(ecx_2 + 0x400, arg5, arg3, arg6, ecx_2, ecx_2 + 0x400)
    *(arg8 + 0x810) += 1

void* eax_2 = nullptr

if (arg6 s> 0)
    while (*(arg5 + (eax_2 << 2)) != arg2)
        eax_2 += 1
        
        if (eax_2 s>= arg6)
            return eax_2
    
    eax_2 = arg3
    int32_t ecx_5 = 0
    int32_t edx_1 = *(eax_2 + 0x1520)
    
    if (edx_1 s> 0)
        void* eax_3 = eax_2 + 0x1a4c
        
        while (*eax_3 != arg4)
            ecx_5 += 1
            eax_3 += 0x64
            
            if (ecx_5 s>= edx_1)
                return eax_3
        
        *(*(arg8 + 0x810) * 0x408 + arg8 + 0x404) = 0
        int32_t ecx_6 = *(arg8 + 0x810)
        int32_t edx_2 = ecx_6 * 0x408
        eax_2 = ecx_6 * 0x102 + *(edx_2 + arg8 + 0x400)
        *(arg8 + (eax_2 << 2)) = arg4
        *(edx_2 + arg8 + 0x400) += 1
        *(arg8 + 0x810) += 1

return eax_2
