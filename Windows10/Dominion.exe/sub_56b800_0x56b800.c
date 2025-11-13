// 函数: sub_56b800
// 地址: 0x56b800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t eax_1 = *eax

if (eax_1 == 2 || eax_1 == 6)
    return *(eax + 0x10)

char const* const var_10
int32_t var_c
char const* const var_8_1
char* ecx_5

if (eax_1 != 3)
    var_8_1 = "ThisCard"
    var_c = 0x1094
    var_10 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_5 = "Halt"
else
    int32_t edx_1 = *(eax + 0x10)
    uint32_t eax_3 = edx_1 & 0x30
    
    if (eax_3 == 0)
        return *(sub_576940(eax_3, edx_1, *(eax + 4), edx_1) + 0x1c)
    
    if (eax_3 == 0x30)
        return 0
    
    if (eax_3 == 0x20)
        void* ecx_2 = *(eax + 4)
        int32_t result = 0
        int32_t esi_1 = *(ecx_2 + 0x1520)
        
        if (esi_1 s> 0)
            int32_t* ecx_3 = ecx_2 + 0x1a4c
            
            do
                if (*ecx_3 == edx_1 u>> 0x12)
                    return result
                
                result += 1
                ecx_3 = &ecx_3[0x19]
            while (result s< esi_1)
        
        return 0
    
    if (eax_3 != 0x10)
        sub_591930()
    
    int32_t ecx_4 = *(eax + 0x10)
    eax_1.b = ecx_4.b & 0x30
    
    if (eax_1.b == 0x10)
        return ecx_4 u>> 0x12
    
    var_8_1 = "AbilityID::static_ability_card_id"
    var_c = 0x11e
    var_10 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
    ecx_5 = "type() == ABILITY_CARD_STATIC"

sub_63b870(eax_1, &data_801800, ecx_5, var_10, var_c, var_8_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
