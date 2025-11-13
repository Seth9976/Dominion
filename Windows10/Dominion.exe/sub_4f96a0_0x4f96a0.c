// 函数: sub_4f96a0
// 地址: 0x4f96a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_4 = sub_573400()
sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 2, 1, 0, 0)
void* eax = sub_573400()
int32_t ecx_1 = *(eax + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

int32_t eax_2 = *(eax + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_2 + 0x17558) |= 8
sub_56b270(ecx_2, 0)
char result = sub_56b3a0()

if (result == 0)
    return result

uint32_t eax_3
int32_t ecx_3
eax_3, ecx_3 = sub_56e9c0(1)
int32_t var_4_1 = ecx_3
return sub_561e00(eax_3, 0, 5, 0)
