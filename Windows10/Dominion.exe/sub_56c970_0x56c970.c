// 函数: sub_56c970
// 地址: 0x56c970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result

if (*(*(sub_573400() + 4) + 0x19cc) == *(sub_573400() + 0xc))
    int32_t* eax_3 = *(sub_573400() + 0x64)
    int32_t var_c
    char const* const ecx
    
    if (eax_3 == 0)
        char const* const var_8 = "IsYourBuyPhaseWhenGained"
        var_c = 0x1461
        ecx = "c.triggerInfo"
    label_56c9d9:
        sub_63b870(eax_3, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
            var_c, "IsYourBuyPhaseWhenGained")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*eax_3 != 0)
        char const* const var_8_1 = "IsYourBuyPhaseWhenGained"
        var_c = 0x1462
        ecx = "c.triggerInfo->type == TRIGGERINFO_GAIN"
        goto label_56c9d9
    
    result = eax_3[2]
    
    if (result == 3 || result == 2)
        result.b = 1
        return result

result.b = 0
return result
