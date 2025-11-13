// 函数: sub_4fc090
// 地址: 0x4fc090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8
void arg_c80
__builtin_memcpy(&var_8, sub_568780(&arg_c80, __chkstk(0x1910), 0x454, &arg_c80), 0xc84)
uint32_t result = arg1

if (result == 0)
    return result

int32_t var_18
char const* const var_14_1
char* ecx_1

if (result == 1)
    result = sub_56b800()
    int32_t ecx_2 = var_8
    
    if (ecx_2 != result)
        return sub_566bb0(ecx_2, 0)
    
    var_14_1 = "EstateInheritance"
    var_18 = 0x446
    ecx_1 = "cards.cards[0] != thisCard"
else
    var_14_1 = "EstateInheritance"
    var_18 = 0x444
    ecx_1 = "cards.numCards == 1"

sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCards_Adventures.cpp", 
    var_18, var_14_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
