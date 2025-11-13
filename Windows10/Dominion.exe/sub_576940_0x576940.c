// 函数: sub_576940
// 地址: 0x576940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_14
int32_t var_10
char const* const var_c
char* ecx

if ((arg4.b & 0x30) == 0)
    uint32_t edx_1 = arg4 u>> 0x12
    uint32_t ecx_2 = *(arg3 + 0x19b8) - 1
    
    if (edx_1 s< ecx_2)
        ecx_2 = edx_1
    
    if (ecx_2 s>= 0)
        arg1 = ecx_2 * 0xa8 + arg3
        uint32_t temp0_1
        
        do
            if (*(arg1 + 0x3b594) == edx_1)
                return arg1 + 0x3b568
            
            arg1 -= 0xa8
            temp0_1 = ecx_2
            ecx_2 -= 1
        while (temp0_1 - 1 s>= 0)
    
    var_c = "AbilityGetRegistered"
    var_10 = 0xf20
    var_14 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
    ecx = "Halt"
else
    arg1 = sub_591930()
    var_c = "AbilityID::registered_ability_counter"
    var_10 = 0x105
    var_14 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
    ecx = "type() == ABILITY_REGISTERED"

sub_63b870(arg1, &data_801800, ecx, var_14, var_10, var_c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
