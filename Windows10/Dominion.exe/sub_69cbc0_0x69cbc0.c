// 函数: sub_69cbc0
// 地址: 0x69cbc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t* var_8 = arg3
uint32_t ebx = arg4
uint32_t* esi = arg3
int32_t i_1 = arg2
uint32_t result = sub_69c520(*(ebx + 0x18))

if (result.b != 0)
    result = *(*(ebx + 0x18) + 0xc)
    arg4 = result
    
    if (result == 0)
        sub_63b870(result, &data_801800, "pDefMap->definitionSize != 0", 
            "C:\x\ax2017\Engine\Definition.cpp", 0x6d, "DefinitionGetSize")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (i_1 s> 0)
        int32_t i
        
        do
            result = sub_69cb20(result, ebx, esi, arg5)
            esi += arg4
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
