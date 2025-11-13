// 函数: sub_6750c0
// 地址: 0x6750c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
void* ecx = data_c23ba8
void* eax_1 = nullptr
void* esi_1 = data_c23bac * 0x18d0 + ecx

while (true)
    if (eax_1 != 0)
        eax_1 += 0x18d0
    else
        eax_1 = ecx
    
    if (eax_1 u>= esi_1)
        break
    
    while ((*(eax_1 + 0x18c8) & 0xffff0000) == 0)
        eax_1 += 0x18d0
        
        if (eax_1 u>= esi_1)
            return 0
    
    int32_t ebx_1 = *(eax_1 + 0x189c)
    int32_t edi_1 = 0
    int32_t ecx_1 = 0
    
    if (ebx_1 != 0)
        while (true)
            int32_t edx_1 = *(eax_1 + (ecx_1 << 2) + 0x179c)
            
            if (edx_1 == *(arg1 + 0x18c8))
                if (edi_1 == 0)
                    break
                
                uint32_t result = zx.d(edi_1.w)
                
                if (result u< data_c23bac)
                    result = result * 0x18d0 + data_c23ba8
                    
                    if (*(result + 0x18c8) == edi_1)
                        return result
                
                sub_63b870(result, &data_801800, "DataArrayTryToGet(id) != NULL", 
                    "C:\x\ax2017\Engine\DataArray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            ecx_1 += 1
            edi_1 = edx_1
            
            if (ecx_1 == ebx_1)
                goto label_6750e6
        
        break
    
label_6750e6:
    ecx = data_c23ba8

return 0
