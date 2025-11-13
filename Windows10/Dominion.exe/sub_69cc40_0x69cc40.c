// 函数: sub_69cc40
// 地址: 0x69cc40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result = arg5
int32_t* edi_1 = *arg2 + arg3
uint32_t* esi = *edi_1

if (result != 0)
    if ((arg2[0xa] & 0x100) == 0 || esi u> 0x100000)
        result = sub_69cbc0(result, result, esi, arg2, arg4)
        
        if (esi != 0)
            result = _aligned_free(esi)
        
        *edi_1 = 0
else if (esi != 0)
    sub_63b870(result, &data_801800, "pArrayStart == NULL", "C:\x\ax2017\Engine\Definition.cpp", 
        0x1c6, "DefinitionDeleteVariableArray")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

return result
