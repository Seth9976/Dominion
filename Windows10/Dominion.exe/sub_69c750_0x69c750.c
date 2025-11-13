// 函数: sub_69c750
// 地址: 0x69c750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = *(arg2 + 0x10)
uint32_t count = ecx - 1

if (count u<= 0xf)
    count = zx.d(lookup_table_69c824[count])
    
    switch (count)
        case 0
            return sub_69c620(count, arg3, arg2, arg4)
        case 1
            int32_t result = *(arg4 + 0x24)
            *arg3 = result
            return result

int32_t var_18
char const* const var_14_1
char* ecx_2

if (ecx s<= 0 || ecx s>= 0x12)
    int32_t* ebx_1 = *(arg4 + 0x24)
    
    if (ebx_1 == 0)
        return sub_69ca80(arg3, arg2) __tailcall
    
    count = *(arg2 + 0xc)
    
    if (count != 0)
        return sub_69d380(memcpy(arg3, ebx_1, count), arg2, arg3, nullptr, ebx_1)
    
    var_14_1 = "DefinitionGetSize"
    var_18 = 0x6d
    ecx_2 = "pDefMap->definitionSize != 0"
else
    var_14_1 = "DefinitionFillArrayableFieldWithDefaults"
    var_18 = 0xdd
    ecx_2 = "!DefTypeIsBuiltIn(pDefMap)"

sub_63b870(count, &data_801800, ecx_2, "C:\x\ax2017\Engine\Definition.cpp", var_18, var_14_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
