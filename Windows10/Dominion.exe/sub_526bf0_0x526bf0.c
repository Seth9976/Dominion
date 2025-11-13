// 函数: sub_526bf0
// 地址: 0x526bf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax
int32_t __saved_esi_2
eax, __saved_esi_2 = __chkstk(0x1908)
int32_t __saved_esi = __saved_esi_2
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_1 = *(eax_2 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_3 = *(eax_2 + 4)
    int32_t edx_1 = ecx_1 * 0x5a30
    char var_10_1 = 0
    *(edx_1 + eax_3 + 0x17558) |= 2
    void var_190c
    int32_t eax_5 = sub_568780(&var_190c, sub_561af0(eax_3, 0, 1, var_10_1), 0x3ea, &var_190c)
    void var_c88
    __builtin_memcpy(&var_c88, eax_5, 0xc84)
    return sub_56ab80(eax_5, 0x3ea, &var_c88, 0x12, 7)

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
