// 函数: sub_7076e0
// 地址: 0x7076e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_7072d0(arg1)
int32_t result = *(arg1 + 4)

if (result != 0 && result != 3)
    if (result != 4)
        if (result == 1)
            int32_t* eax_2 = sub_64bfd0(result + 0xf)
            eax_2[3] += 1
            
            if (*eax_2 == 0)
                sub_64be70(eax_2)
            
            int32_t* edx_1 = *eax_2
            *eax_2 = *edx_1
            *edx_1 = zx.o(0)
            int32_t ecx_4 = *(arg1 + 0x10)
            *edx_1 = *(arg1 + 0xc)
            edx_1[1] = ecx_4
            edx_1[3] = *(arg1 + 0x120)
            void* eax_6 = *(arg1 + 0x120)
            
            if (eax_6 == 0)
                *(arg1 + 0x11c) = edx_1
            else
                *(eax_6 + 8) = edx_1
            
            *(arg1 + 0x124) += 1
            *(arg1 + 0x120) = edx_1
        else if (result != 2)
            result.b = 0
            return result
        
        return sub_7075e0(arg1)
    
    int32_t* ecx = *(arg1 + 0x120)
    void* eax = ecx[3]
    *(arg1 + 0x120) = eax
    
    if (eax == 0)
        *(arg1 + 0x11c) = 0
    else
        *(eax + 8) = 0
    
    *(arg1 + 0x124) -= 1
    
    if (ecx != 0)
        sub_64c080(ecx, 0x10)

return sub_7074e0(arg1)
