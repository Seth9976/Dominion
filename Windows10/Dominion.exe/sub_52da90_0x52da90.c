// 函数: sub_52da90
// 地址: 0x52da90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_4 = sub_573400()
sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 2, 1, 0, 0)
void* eax = sub_573400()
int32_t ecx_1 = *(eax + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_1 = *(eax + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_1 + 0x17558) |= 8
int32_t result = sub_563590(0x105)

if (result == 0)
    return result

void* eax_2 = sub_573400()
return sub_583720(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), result, 0x476, nullptr, 0x476, 0, 0, 4)
