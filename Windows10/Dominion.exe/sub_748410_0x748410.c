// 函数: sub_748410
// 地址: 0x748410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_151345c s<= 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "gUI.s.activeSetCount > 0", 
        "C:\x\ax2017\Engine\Editor\UIEditor.cpp", 0x53c, "HighestSelectedItem")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t i = 1
int32_t result = sub_744e90(data_151245c)

if (data_151345c s> 1)
    do
        int32_t result_1 = sub_744e90((&data_151245c)[i])
        
        if (result_1 s> result)
            result = result_1
        
        i += 1
    while (i s< data_151345c)

return result
