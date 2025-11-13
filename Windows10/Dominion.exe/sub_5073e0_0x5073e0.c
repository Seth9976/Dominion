// 函数: sub_5073e0
// 地址: 0x5073e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c94 = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_3 + 0x17558) |= 2
void* eax_4 = sub_573400()
char result = sub_593b10(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x105)

if (result != 0)
    return result

bool cond:0_1 = sub_561d80(sub_56b800()) != 0
int32_t var_c90 = 0
uint32_t (* edx_2)() = sub_4fa160

if (not(cond:0_1))
    edx_2 = &data_5074d0

return sub_56c010(&var_c90, edx_2, 0xa, sub_5073a0, 2, &var_c90, 1, 0, 0xffffffff)
