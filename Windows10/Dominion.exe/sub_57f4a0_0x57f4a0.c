// 函数: sub_57f4a0
// 地址: 0x57f4a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t edi_2 = arg4 u>> 4 & 3
int32_t eax_2 = arg5 u>> 4 & 3

if (edi_2 != eax_2 || edi_2 == 0 || eax_2 == 0 || ((arg4 ^ arg5).b & 0xf) != 0
        || ((arg4 ^ arg5) & 0x3ffc0) != 0)
    eax_2.b = 0
    return eax_2

int32_t eax_6 = arg4 & 0x30
int32_t var_1c
char const* const var_18
char* ecx

if (eax_6 != 0x20)
    if (eax_6 == 0x10)
        eax_6.b = arg5.b & 0x30
        
        if (eax_6.b == 0x10)
            uint32_t edi_3 = zx.d((arg4 u>> 0x12).w)
            
            if (edi_3 u>= 0x320)
                sub_591930()
            
            uint32_t esi_3 = zx.d((arg5 u>> 0x12).w)
            
            if (esi_3 u>= 0x320)
                sub_591930()
            
            int32_t eax_7
            eax_7.b = *(edi_3 * 0x64 + arg3 + 0x1a4c) == *(esi_3 * 0x64 + arg3 + 0x1a4c)
            return eax_7
    
    var_18 = "AbilityID::static_ability_card_id"
    ecx = "type() == ABILITY_CARD_STATIC"
    var_1c = 0x11e
else
    eax_6.b = arg5.b & 0x30
    
    if (eax_6.b == 0x20)
        eax_6.b = arg4 u>> 0x12 == arg5 u>> 0x12
        return eax_6
    
    var_18 = "AbilityID::static_ability_card_enum"
    var_1c = 0x111
    ecx = "type() == ABILITY_CARD_ENUM"

sub_63b870(eax_6, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.h", var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
