// 函数: sub_634c80
// 地址: 0x634c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
int32_t esi = 0
int32_t ecx = *(arg3 + 0x2a0)
void* eax

if (ecx s> 0)
    eax = arg3
    
    while (*eax != arg4)
        esi += 1
        eax += 0x38
        
        if (esi s>= ecx)
            goto label_634cb2

if (ecx s<= 0 || eax == 0)
label_634cb2:
    int32_t edx = *(arg3 + 0x544)
    eax = arg3 + 0x2a4
    int32_t ecx_1 = 0
    
    if (edx s> 0)
        while (*eax != arg4)
            ecx_1 += 1
            eax += 0x38
            
            if (ecx_1 s>= edx)
                goto label_634cd6
    
    if (edx s<= 0 || eax == 0)
    label_634cd6:
        int32_t edx_1 = *(arg3 + 0xb52c)
        eax = arg3 + 0x62c
        int32_t esi_1 = 0
        int32_t ecx_3
        
        if (edx_1 s> 0)
            void* ecx_2 = eax
            
            while (true)
                if (*ecx_2 == arg4)
                    if (ecx_2 != 0)
                        return ecx_2
                    
                    break
                
                esi_1 += 1
                ecx_2 += 0x38
                
                if (esi_1 s>= edx_1)
                    ecx_3 = 0
                    goto label_634d18
        
        ecx_3 = 0
        
        if (edx_1 s<= 0)
            return nullptr
        
    label_634d18:
        
        while (true)
            if (*eax == arg2)
                return eax
            
            ecx_3 += 1
            eax += 0x38
            
            if (ecx_3 s>= edx_1)
                return nullptr

return eax
