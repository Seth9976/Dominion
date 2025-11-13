// 函数: sub_4f9ce0
// 地址: 0x4f9ce0
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
int32_t var_14 = 0x7f
int32_t var_10 = 0x80
int32_t var_c = 0x81
*(ecx_2 + eax_2 + 0x17558) |= 2
uint32_t eax_3
int32_t ecx_4

for (int32_t i = 0; i s< 3; i += 1)
    (&var_14)[i]
    eax_3, ecx_4 = sub_567dd0(arg1)
    
    if (eax_3 == 0)
        break

int32_t var_1c = ecx_4
sub_561e00(eax_3, 0, 1, 0)
sub_56eb20(4)
void* eax_4 = sub_573400()
sub_589f70(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 6)
void* eax_5 = sub_573400()
int32_t esi = *(*(eax_5 + 0xc) * 0x5a30 + *(eax_5 + 4) + 0x174f4)
int32_t eax_7
int32_t ecx_8
eax_7, ecx_8 = sub_561cf0(esi)
int32_t var_1c_1 = ecx_8
return sub_561e00(eax_7, 0, esi, 0)
