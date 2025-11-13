// 函数: sub_502820
// 地址: 0x502820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 1, 0, 0)
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
*(ecx_3 + eax_2 + 0x17558) |= 2

if (*(*(sub_573400() + 4) + 0xd48) s>= 0x12)
    return sub_56b700(6)

int32_t esi_1 = *(*(sub_573400() + 4) + 0x19c4)
void* result = sub_573400()

if (esi_1 == *(result + 0xc))
    return result

return sub_56b700(2)
