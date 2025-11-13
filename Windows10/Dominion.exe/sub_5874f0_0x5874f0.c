// 函数: sub_5874f0
// 地址: 0x5874f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t var_18 = arg2
int32_t result_1 = 0

if (arg4 s> 0)
    int32_t ebx_2 = arg5 & 0x20000
    arg5 = ebx_2
    
    do
        int32_t* ecx = arg2 + (result << 3)
        int32_t edx
        
        if ((*(arg2 + (result << 3) + 4) & 1) == 0)
            int32_t edx_2 = neg.d(ebx_2)
            edx = sbb.d(edx_2, edx_2, ebx_2 != 0) & 0x20000
        else
            edx = 0x40000
            
            if (ebx_2 == 0)
                edx = 0x10000
        
        int32_t ebx_3 = *(arg3 + 0xc80)
        int32_t eax = 0
        
        if (ebx_3 s<= 0)
        label_587576:
            int32_t esi_3 = *ecx | edx
            
            if (ebx_3 s>= 0x320)
                sub_591930()
            
            *(arg3 + (*(arg3 + 0xc80) << 2)) = esi_3
            *(arg3 + 0xc80) += 1
        else
            while (true)
                int32_t esi_1 = *(arg3 + (eax << 2))
                
                if ((esi_1 & 0xffff0000) == *ecx)
                    *(arg3 + (eax << 2)) = esi_1 | edx
                    break
                
                eax += 1
                
                if (eax s>= ebx_3)
                    goto label_587576
        
        ebx_2 = arg5
        result = result_1 + 1
        arg2 = var_18
        result_1 = result
    while (result s< arg4)

return result
