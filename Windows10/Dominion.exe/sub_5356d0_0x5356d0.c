// 函数: sub_5356d0
// 地址: 0x5356d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 2, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_2 = *(eax_1 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *(eax_1 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_2 + 0x17558) |= 8
int32_t var_18 = 0
uint32_t eax_4 = sub_568960(sub_561af0(eax_2, 0, 7, 0), 0, 0x3ea, 0)

if (eax_4 != 0 && *(*(sub_573400() + 4) + 0xd48) s>= 0x16)
    void* eax_6 = sub_573400()
    sub_589f70(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), 7)

return sub_561c60(eax_4)
