// 函数: sub_576040
// 地址: 0x576040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0
void* result = *(arg6 * 0x64 + arg2 + 0x1a48)
void* result_1 = result

while (*(result + 0xa8) != 0)
    char ecx = (*(result + 0x148)).b
    
    if ((ecx & 1) != 0 || arg5 == arg4)
        char const* const var_24
        int32_t var_20
        char const* const var_1c
        char* ecx_1
        
        if ((ecx & 2) == 0 || (*(arg2 + 0x19d8) != 0 && *(arg2 + 0x19cc) == arg5))
            if (((*(result + 0x154) & 4) == 0
                    || (*(arg2 + 0x19d8) != 0 && *(arg2 + 0x19cc) == arg4)) && *(result + 0xa8) == 7)
                result = esi & 0xf
                
                if (result != esi)
                    var_1c = "AbilityID::set_idx"
                    var_20 = 0xf0
                    ecx_1 = "idx() == x"
                label_576149:
                    var_24 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
                    goto label_576153
                
                result |= arg6 << 0x12 | 0x10
                
                if (result u>> 0x12 != arg6)
                    var_1c = "AbilityID::set_payload"
                    var_20 = 0x14d
                    ecx_1 = "payload() == arg_payload"
                    goto label_576149
                
                *(arg3 + (*(arg3 + 0x400) << 2)) = result
                *(arg3 + 0x400) += 1
        else if (arg5 == 0xffffffff)
            var_1c = "CardHasAllOngoing"
            var_20 = 0xe4b
            var_24 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
            ecx_1 = "owner != PLAYER_NONE"
        label_576153:
            sub_63b870(result, &data_801800, ecx_1, var_24, var_20, var_1c)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    esi += 1
    result = esi * 0xb4 + result_1

return result
