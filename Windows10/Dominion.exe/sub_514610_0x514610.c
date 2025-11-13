// 函数: sub_514610
// 地址: 0x514610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
sub_513d60(0x1c)
void* eax_2 = sub_573400()

if (*eax_2 != 4)
    sub_63b870(eax_2, &data_801800, "c.contextType == CONTEXT_SETUP", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0xc59, "StampGetPileSetup")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* esi = *(eax_2 + 0x10)
void* eax_3 = sub_573400()
sub_5911e0(eax_3, 0xffffffff, *(eax_3 + 4), 0x24, esi, 0, 0, 0, 1, 0xffffffff, 0, 0)
int32_t var_c98 = 2
int32_t* var_c94 = esi
int32_t var_14 = 1
sub_56c680(&var_c98, sub_514760, 6, sub_514780, 0x10007, &var_c98, 0x55)
var_c98 = 2
int32_t* var_c94_1 = esi
int32_t var_14_1 = 1
sub_56c680(&var_c98, sub_514760, 0x1b, sub_514810, 0x10007, &var_c98, 0x55)
var_c98 = 2
int32_t* var_c94_2 = esi
int32_t var_14_2 = 1
uint32_t result = sub_56c680(&var_c98, sub_514760, 0xb, sub_5148b0, 0x10007, &var_c98, 0x55)
CookieCheckFunction(result)
return result
