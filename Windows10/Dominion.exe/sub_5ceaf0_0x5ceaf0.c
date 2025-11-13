// 函数: sub_5ceaf0
// 地址: 0x5ceaf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg3

if (arg2 == arg4)
    int32_t ecx = *(eax + 0x1520)
    int32_t edx = 0
    
    if (ecx s> 0)
        void* eax_1 = eax + 0x1a4c
        
        do
            if (*eax_1 == arg5)
                *(*(arg7 + 0x810) * 0x408 + arg7 + 0x404) = arg6
                int32_t ecx_2 = *(arg7 + 0x810)
                int32_t edx_1 = ecx_2 * 0x408
                *(arg7 + ((ecx_2 * 0x102 + *(edx_1 + arg7 + 0x400)) << 2)) = arg5
                *(edx_1 + arg7 + 0x400) += 1
                *(arg7 + 0x810) += 1
                break
            
            edx += 1
            eax_1 += 0x64
        while (edx s< ecx)

if (arg2 == arg5)
    int32_t edx_2 = *(eax + 0x1520)
    int32_t ecx_3 = 0
    
    if (edx_2 s> 0)
        void* eax_5 = eax + 0x1a4c
        
        while (*eax_5 != arg4)
            ecx_3 += 1
            eax_5 += 0x64
            
            if (ecx_3 s>= edx_2)
                return eax_5
        
        *(*(arg7 + 0x810) * 0x408 + arg7 + 0x404) = arg6
        int32_t ecx_5 = *(arg7 + 0x810)
        int32_t edx_3 = ecx_5 * 0x408
        eax = ecx_5 * 0x102 + *(edx_3 + arg7 + 0x400)
        *(arg7 + (eax << 2)) = arg4
        *(edx_3 + arg7 + 0x400) += 1
        *(arg7 + 0x810) += 1

return eax
