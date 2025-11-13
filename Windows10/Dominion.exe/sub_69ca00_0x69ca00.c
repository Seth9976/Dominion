// 函数: sub_69ca00
// 地址: 0x69ca00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_4 = arg1
uint32_t eax = sub_69c520(*(arg2 + 0x18))
void* ecx_1 = *(arg2 + 0x18)

if (eax.b == 0)
    return sub_69c620(eax, arg1, ecx_1, arg2)

int32_t eax_2 = *(ecx_1 + 0x10)

if (eax_2 == 8)
    int32_t result = *(arg2 + 0x24)
    *arg1 = result
    return result

if (eax_2 - 1 u> 0x10)
    return sub_69ca80(arg1, ecx_1)

sub_63b870(eax_2 - 1, &data_801800, "!DefTypeIsBuiltIn(pField->pSubDefMap)", 
    "C:\x\ax2017\Engine\Definition.cpp", 0x15e, "DefinitionFillArrayItemWithDefaults")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
