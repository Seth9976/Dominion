// 函数: sub_575f10
// 地址: 0x575f10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = 0
void* result = *(arg5 * 0x64 + arg3 + 0x1a48)
void* result_1 = result

while (*(result + 0xa8) != 0)
    char ecx = (*(result + 0x148)).b
    
    if ((ecx & 1) != 0 || arg4 == arg2)
        char const* const var_24
        int32_t var_20
        char const* const var_1c
        char* ecx_1
        
        if ((ecx & 2) == 0 || (*(arg3 + 0x19d8) != 0 && *(arg3 + 0x19cc) == arg4))
            if (((*(result + 0x154) & 4) == 0
                    || (*(arg3 + 0x19d8) != 0 && *(arg3 + 0x19cc) == arg2)) && *(result + 0xa8) == 7
                    && *(result + 0xbc) == arg6)
                result = edi & 0xf
                
                if (result == edi)
                    result |= arg5 << 0x12 | 0x10
                    
                    if (result u>> 0x12 == arg5)
                        return result
                    
                    var_1c = "AbilityID::set_payload"
                    var_20 = 0x14d
                    ecx_1 = "payload() == arg_payload"
                else
                    var_1c = "AbilityID::set_idx"
                    var_20 = 0xf0
                    ecx_1 = "idx() == x"
                
                var_24 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
                goto label_57601c
        else if (arg4 == 0xffffffff)
            var_1c = "CardHasOngoing"
            var_20 = 0xe2e
            var_24 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
            ecx_1 = "owner != PLAYER_NONE"
        label_57601c:
            sub_63b870(result, &data_801800, ecx_1, var_24, var_20, var_1c)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    edi += 1
    result = edi * 0xb4 + result_1

return 0xffffffff
