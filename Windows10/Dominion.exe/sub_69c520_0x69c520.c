// 函数: sub_69c520
// 地址: 0x69c520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result = *(arg1 + 0x10) - 1

if (result u<= 0x10)
    result = zx.d(lookup_table_69c578[result])
    
    switch (result)
        case 0
            result.b = 0
            return result
        case 2
            sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Engine\Definition.cpp", 0x38, 
                "DefTypeIsDeepStructure")
            
            if (sub_63bc30() == 0)
                noreturn sub_63bb00() __tailcall
            
            breakpoint

result.b = 1
return result
