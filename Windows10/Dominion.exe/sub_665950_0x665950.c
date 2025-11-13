// 函数: sub_665950
// 地址: 0x665950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg3 + 0x1600) != 0 && *(arg3 + 0x1604) == arg4 && *(arg3 + 0x1718) != 0)
    return arg3

int32_t ebx = *(arg3 + 0x189c)
void* eax_2 = arg3 + 0x179c
int32_t esi = 0
void* var_8 = eax_2

if (ebx != 0)
    while (true)
        int32_t edx = *(eax_2 + (esi << 2))
        int32_t var_20
        char* ecx_2
        
        if (edx == 0)
            char const* const var_1c_3 = "DataArray<struct UI2>::DataArrayGet"
            var_20 = 0x6c
            ecx_2 = "id != DATAID_NULL"
        else
            eax_2 = zx.d(edx.w)
            
            if (eax_2 u< data_c23bac)
                void* ecx_1 = eax_2 * 0x18d0 + data_c23ba8
                
                if (*(ecx_1 + 0x18c8) == edx)
                    if (*(ecx_1 + 0x1600) == arg2)
                        int32_t eax_3 = sub_665950(arg4)
                        
                        if (eax_3 != 0)
                            return eax_3
                    
                    esi += 1
                    
                    if (esi == ebx)
                        break
                    
                    eax_2 = var_8
                    continue
            
            char const* const var_1c_2 = "DataArray<struct UI2>::DataArrayGet"
            var_20 = 0x6d
            ecx_2 = "DataArrayTryToGet(id) != NULL"
        
        sub_63b870(eax_2, &data_801800, ecx_2, "C:\x\ax2017\Engine\DataArray.h", var_20, 
            "DataArray<struct UI2>::DataArrayGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

return 0
