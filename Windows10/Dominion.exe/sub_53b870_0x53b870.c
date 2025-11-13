// 函数: sub_53b870
// 地址: 0x53b870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *(eax_1 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_2 + 0x17558) |= 2
void* eax_3 = sub_573400()
int32_t ecx_4 = *(*(eax_3 + 4) + 0xd38)
int32_t esi_1 =
    *(mods.dp.d(sx.q(*(eax_3 + 0xc) - 1 + ecx_4), ecx_4) * 0x5a30 + *(sub_573400() + 4) + 0x17540)

if (esi_1 s> 0)
    sub_56e9c0(1)

uint32_t eax_11
int32_t ecx_7
eax_11, ecx_7 = sub_562f10(arg3, arg1, arg2)
int32_t var_14 = ecx_7
return sub_561e00(eax_11, 0, esi_1, 0)
