// 函数: sub_5769e0
// 地址: 0x5769e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax_2 = arg4 u>> 4 & 3
char const* const var_14
int32_t var_10
char const* const var_c
char* ecx

if (eax_2 != 0)
    switch (eax_2)
        case 0
            goto label_5769f8
        case 1
            eax_2.b = arg4.b & 0x30
            
            if (eax_2.b == 0x10)
                return *((arg4 u>> 0x12) * 0x64 + arg3 + 0x1a48) + (arg4 & 0xf) * 0xb4 + 0xa8
            
            var_c = "AbilityID::static_ability_card_id"
            var_10 = 0x11e
            var_14 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
            ecx = "type() == ABILITY_CARD_STATIC"
        case 2
            eax_2.b = arg4.b & 0x30
            
            if (eax_2.b == 0x20)
                return sub_571b30(arg4 u>> 0x12, *(arg3 + 0xd48)) + (arg4 & 0xf) * 0xb4 + 0xa8
            
            var_c = "AbilityID::static_ability_card_enum"
            var_10 = 0x111
            var_14 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
            ecx = "type() == ABILITY_CARD_ENUM"
        case 3
            eax_2 = arg4 & 0x30
            
            if (eax_2.b == 0x30)
                void* esi_5 =
                    (arg4 & 0xf) * 0xb4 + sub_571910(*((arg4 u>> 0x12 << 5) + arg3 + 0x152c8))
                
                if (*(esi_5 + 0x1c) != 6)
                    sub_591930()
                
                if (*(esi_5 + 0x20) != 7)
                    sub_591930()
                
                return esi_5 + 0x1c
            
            var_c = "AbilityID::static_ability_token_id"
            var_10 = 0x12a
            var_14 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
            ecx = "type() == ABILITY_TOKEN"
else
    eax_2 = sub_591930()
label_5769f8:
    var_c = "AbilityGetStatic"
    var_10 = 0xf40
    var_14 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
    ecx = "Halt"

sub_63b870(eax_2, &data_801800, ecx, var_14, var_10, var_c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
