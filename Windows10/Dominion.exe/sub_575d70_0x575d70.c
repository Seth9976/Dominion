// 函数: sub_575d70
// 地址: 0x575d70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t var_c
char const* const var_8
uint32_t eax
char* ecx

if (arg2 s>= 0)
    int32_t result = (arg2 & 0xfff) << 6 | arg1 << 0x12
    eax = result u>> 0x12
    
    if (eax == arg1)
        return result
    
    var_8 = "AbilityID::set_payload"
    var_c = 0x14d
    ecx = "payload() == arg_payload"
else
    var_8 = "AbilityID::set_trigger_card_id"
    var_c = 0xff
    ecx = "x >= 0"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.h", var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
