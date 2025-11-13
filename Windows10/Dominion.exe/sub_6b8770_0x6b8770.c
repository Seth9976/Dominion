// 函数: sub_6b8770
// 地址: 0x6b8770
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = *(arg3 + 0x2e0)

if (esi != 0)
    arg1 = sub_5af880(**(esi + 0x2e4))
    int32_t* edx_1 = *(esi + 0x2dc) * 0x168 + *arg1
    
    if (*(edx_1 + arg2 + 0x14) != 0)
        int32_t* eax_1 = sub_6dd1e0(arg1, edx_1, &data_8cc5f8, data_1777598, arg2)
        int32_t eax_2 = sub_63eb70()
        int32_t edx_2 = eax_1[2]
        float xmm3_1 = ((eax_2 & 0x7fffff) | 0x3f800000) - 1f
        float i = *(*(arg3 + 0x2e0) + 0x2e8)
        int32_t eax_6 = 0
        
        if (edx_2 s> 0)
            int32_t* ecx_2 = *eax_1 + 8
            
            while (not(*ecx_2 f>= i))
                eax_6 += 1
                ecx_2 = &ecx_2[4]
                
                if (eax_6 s>= edx_2)
                    break
        
        int32_t* ecx_3 = *eax_1
        
        if (eax_6 != 0)
            if (eax_6 != edx_2)
                int32_t eax_8 = eax_6 * 2
                int32_t* esi_1 = &ecx_3[eax_8 * 2]
                float xmm2_1 = (i f- esi_1[-2]) / (ecx_3[eax_8 * 2 + 2] f- esi_1[-2])
                float xmm0_5 = sub_706af0(&esi_1[-4], eax_1[3], xmm3_1)
                float xmm0_6 = sub_706af0(esi_1, eax_1[3], xmm3_1)
                *arg4 = sub_4ae110(esi_1[3], xmm2_1, xmm0_5, xmm0_6)
                int32_t* eax_9
                eax_9.b = 1
                return eax_9
            
            ecx_3 += (edx_2 << 4) - 0x10
        
        *arg4 = sub_706af0(ecx_3, eax_1[3], xmm3_1)
        int32_t* eax_7
        eax_7.b = 1
        return eax_7

arg1.b = 0
return arg1
