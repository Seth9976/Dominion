// 函数: sub_553280
// 地址: 0x553280
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t eax_1 = *eax
uint32_t esi_2

if (eax_1 != 3)
    if (eax_1 != 1)
        sub_591930()
    
    esi_2 = *(eax + 0x10)
else
    if (((*(eax + 0x10)).b & 0x30) != 0x30)
        sub_591930()
    
    int32_t esi_1 = *(eax + 0x10)
    int32_t eax_3 = esi_1 & 0x30
    
    if (eax_3.b != 0x30)
        sub_63b870(eax_3, &data_801800, "type() == ABILITY_TOKEN", 
            "C:\x\ax2017\Jams\Dominion\code\DomGame.h", 0x12a, "AbilityID::static_ability_token_id")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    esi_2 = esi_1 u>> 0x12

void* eax_4 = sub_573400()
return sub_584790(eax_4, esi_2, *(eax_4 + 4), 6)
