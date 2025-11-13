// 函数: sub_69c590
// 地址: 0x69c590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = *(arg1 + 0x10)
uint32_t result = ecx - 1

if (result u> 0x2a)
label_69c5ac:
    
    if (ecx s<= 0)
        result.b = 0
        return result
    
    if (ecx s>= 0x12)
        result.b = 0
        return result
    
    sub_63b870(result, &data_801800, "!DefTypeIsBuiltIn(pDefMap)", 
        "C:\x\ax2017\Engine\Definition.cpp", 0x65, "DefTypeCanBeInArray")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

result = zx.d(lookup_table_69c5f4[result])

switch (result)
    case 0
        result.b = 1
        return result
    case 1
        result.b = 0
        return result
    case 2
        goto label_69c5ac
