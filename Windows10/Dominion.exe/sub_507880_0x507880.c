// 函数: sub_507880
// 地址: 0x507880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_1 = *(eax_2 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t edx_1 = ecx_1 * 0x5a30
*(edx_1 + eax_3 + 0x17558) |= 2
sub_561af0(eax_3, 0, 1, 0)
int32_t esi = 0
int32_t i = 7
int32_t* result = *(sub_573400() + 4) + 0x1594

do
    if (*result != 0 && result[2] == 0)
        esi += 1
    
    i += 1
    result = &result[4]
while (i s< 0x21)

if (esi == 0)
    return result

void var_c88
return sub_567110(&var_c88, 7, 0, 5)
