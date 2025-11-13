// 函数: sub_5915b0
// 地址: 0x5915b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax_2 = arg4 u>> 4 & 3
int32_t var_18
char const* const var_14_1
int32_t eax_7
char* ecx

switch (eax_2)
    case 0
        void* eax_3 = sub_576940(eax_2, arg2, arg3, arg4)
        int32_t result = *(eax_3 + 0x28)
        
        if (result == 0)
            uint32_t esi_2 = zx.d((*(eax_3 + 0x1c)).w)
            
            if (esi_2 u>= 0x320)
                sub_591930()
            
            result = *(esi_2 * 0x64 + arg3 + 0x1a4c)
            
            if (result == 0)
                return *(eax_3 + 0x24)
        
        return result
    case 1
        uint32_t esi_3 = arg4 u>> 0x12
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        return *(esi_3 * 0x64 + arg3 + 0x1a4c)
    case 2
        eax_7.b = arg4.b & 0x30
        
        if (eax_7.b == 0x20)
            return arg4 u>> 0x12
        
        var_14_1 = "AbilityID::static_ability_card_enum"
        var_18 = 0x111
        char const* const var_1c = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
        ecx = "type() == ABILITY_CARD_ENUM"
    label_591681:
        sub_63b870(eax_7, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.h", var_18, 
            var_14_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    case 3
        eax_7 = arg4 & 0x30
        
        if (eax_7.b == 0x30)
            return sub_591420(arg3, arg4 u>> 0x12) __tailcall
        
        var_14_1 = "AbilityID::static_ability_token_id"
        var_18 = 0x12a
        char const* const var_1c_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
        ecx = "type() == ABILITY_TOKEN"
        goto label_591681
