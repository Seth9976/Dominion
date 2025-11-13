// 函数: sub_69ca80
// 地址: 0x69ca80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg1
uint32_t count = *(arg2 + 0xc)

if (count == 0)
    sub_63b870(count, &data_801800, "pDefMap->definitionSize != 0", 
        "C:\x\ax2017\Engine\Definition.cpp", 0x6d, "DefinitionGetSize")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax = memset(arg1, 0, count)

if (*(arg2 + 8) == 0)
    return eax

int32_t i_1 = 0
int32_t eax_3
int32_t i

do
    int32_t eax_1 = *(arg2 + 4)
    int32_t ecx_2 = i_1 * 0xf
    i = i_1 + 1
    void* edx = *(eax_1 + (ecx_2 << 2) + 0xc)
    int32_t* eax_2 = eax_1 + (ecx_2 << 2)
    
    if (i s>= *(arg2 + 8))
        return sub_69c840(eax_2, edx, arg1, eax_2)
    
    eax_3 = sub_69c840(eax_2, edx, arg1, eax_2)
    i_1 = i
while (i != 0xffffffff)
return eax_3
