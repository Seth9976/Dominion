// 函数: sub_69cb20
// 地址: 0x69cb20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t* var_8 = arg3
uint32_t eax = sub_69c520(*(arg2 + 0x18))

if (eax.b != 0)
    void* edx = *(arg2 + 0x18)
    eax = *(edx + 0x10)
    int32_t var_18
    char const* const var_14_1
    char* ecx_1
    
    if (eax != 8)
        if (eax s<= 0 || eax s>= 0x12)
            return sub_69ce80(eax, edx, arg3, arg4)
        
        var_14_1 = "DefinitionDeleteVariableArrayField"
        var_18 = 0x191
        ecx_1 = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
        goto label_69cba6
    
    eax = *arg3
    
    if (eax == 0)
        var_14_1 = "DefinitionDeleteString"
        var_18 = 0x17c
        ecx_1 = "*pString"
    label_69cba6:
        sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\Definition.cpp", var_18, var_14_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (eax != *(arg2 + 0x24))
        int32_t eax_1 = _aligned_free(eax)
        *arg3 = 0
        return eax_1

return eax
