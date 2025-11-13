// 函数: sub_5cd010
// 地址: 0x5cd010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1

if (arg1 == 0xffffffff)
    return 0

int32_t result = 0
int32_t ecx_1 = *(sub_5cc5e0(arg1) + 0x4084)

if (ecx_1 != 0)
    int32_t edi_1 = data_b809e0
    
    while (true)
        uint32_t eax_2 = zx.d(ecx_1.w)
        
        if (eax_2 u< data_b809e4)
            eax_2 *= 0x1c30
            
            if (*(eax_2 + edi_1 + 0x1c28) == ecx_1)
                ecx_1 = *(eax_2 + edi_1 + 0x1b94)
                result += 1
                
                if (ecx_1 == 0)
                    break
                
                continue
        
        sub_63b870(eax_2, &data_801800, "DataArrayTryToGet(id) != NULL", 
            "C:\x\ax2017\Engine\DataArray.h", 0x6d, "DataArray<struct DomGfx>::DataArrayGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

return result
