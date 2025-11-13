// 函数: sub_575e70
// 地址: 0x575e70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax_1 = arg2 & 0xf
int32_t var_10
char const* const var_c
char* ecx

if (eax_1 != arg2)
    var_c = "AbilityID::set_idx"
    var_10 = 0xf0
    ecx = "idx() == x"
else if (arg4 s>= 0)
    int32_t result = ((arg4 & 0xfff) | arg3 << 0xc) << 6 | eax_1 | 0x20
    eax_1 = result u>> 0x12
    
    if (eax_1 == arg3)
        return result
    
    var_c = "AbilityID::set_payload"
    var_10 = 0x14d
    ecx = "payload() == arg_payload"
else
    var_c = "AbilityID::set_trigger_card_id"
    var_10 = 0xff
    ecx = "x >= 0"

sub_63b870(eax_1, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.h", var_10, var_c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
