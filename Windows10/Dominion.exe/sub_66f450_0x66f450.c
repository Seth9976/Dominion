// 函数: sub_66f450
// 地址: 0x66f450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
int32_t result

if (*(arg1 + 0x15f8) != 6)
    result = *(arg1 + 0x189c)
    
    if (result s< 0)
        sub_63b870(result, &data_801800, "numChildren >= 0", "C:\x\ax2017\Engine\UI2.cpp", 0xba8, 
            "UI2::countChildren")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (result s<= 0)
        result.b = 0
        return result

result.b = *(arg1 + 0x13) == 0
return result
