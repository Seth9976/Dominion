// 函数: sub_5da130
// 地址: 0x5da130
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg1 + 0x1a04) == 0)
    int32_t eax_1 = *(arg2 + 0x16f8)
    int32_t var_8
    
    if (eax_1 u> 4)
        char const* const var_4_1 = "GetLogStyleFlag"
        var_8 = 0x3368
    label_5da186:
        sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_8, "GetLogStyleFlag")
        
        if (sub_63bc30() == 0)
            noreturn sub_63bb00() __tailcall
        
        breakpoint
    
    switch (eax_1)
        case 0, 3
            return 1
        case 4
            int32_t eax_2 = *(arg2 + 0x1704)
            
            if (eax_2 == 0)
                return 1
            
            eax_1 = eax_2 - 1
            
            if (eax_2 != 1)
                char const* const var_4 = "GetLogStyleFlag"
                var_8 = 0x3359
                goto label_5da186

return 0
