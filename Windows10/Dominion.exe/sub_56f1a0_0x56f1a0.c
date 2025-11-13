// 函数: sub_56f1a0
// 地址: 0x56f1a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t var_54 = arg3
void* eax = sub_573400()
int32_t var_50
int32_t eax_1 = memset(&var_50, 0, 0x48)

if (arg3 != 6)
    int32_t var_68_1
    char const* const ecx_1
    
    if (arg3 == 8)
        char const* const var_64 = "TriggerEvent"
        var_68_1 = 0x1ae3
        ecx_1 = "event != EVENT_GAIN"
    label_56f242:
        sub_63b870(eax_1, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
            var_68_1, "TriggerEvent")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (arg3 == 9)
        char const* const var_64_1 = "TriggerEvent"
        var_68_1 = 0x1ae4
        ecx_1 = "event != EVENT_PLAY"
        goto label_56f242
else
    var_50 = 3
    int32_t var_48_1 = 1

*(eax + 0xc)
*(eax + 4)
return sub_580700(arg3, &var_54, 1, &var_50, arg4, arg2, arg2[0x320], nullptr)
