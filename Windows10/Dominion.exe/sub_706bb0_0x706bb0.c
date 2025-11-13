// 函数: sub_706bb0
// 地址: 0x706bb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx_2

if (*(arg1 + 0x15) == 0 || arg2 s<= 0)
    int32_t edx_3 = arg1[2]
    int32_t eax_2 = 0
    
    if (edx_3 s> 0)
        int32_t* ecx_4 = *arg1 + 8
        
        while (not(*ecx_4 f>= arg3))
            eax_2 += 1
            ecx_4 = &ecx_4[4]
            
            if (eax_2 s>= edx_3)
                break
    
    ecx_2 = *arg1
    
    if (eax_2 != 0)
        if (eax_2 == edx_3)
            return sub_706af0(&ecx_2[-4 + edx_3 * 4], arg1[3], arg4)
        
        int32_t eax_4 = eax_2 * 2
        void* esi = &ecx_2[eax_4 * 2]
        float xmm2_2 = (arg3 f- *(esi - 8)) / (ecx_2[eax_4 * 2 + 2] f- *(esi - 8))
        float xmm0_4 = sub_706af0(esi - 0x10, arg1[3], arg4)
        float xmm0_5 = sub_706af0(esi, arg1[3], arg4)
        return sub_4ae110(*(esi + 0xc), xmm2_2, xmm0_4, xmm0_5)
else
    ecx_2 = *arg1 - 0x10 + (arg1[2] << 4)

return sub_706af0(ecx_2, arg1[3], arg4)
