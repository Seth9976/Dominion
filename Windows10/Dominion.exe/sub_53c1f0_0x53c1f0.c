// 函数: sub_53c1f0
// 地址: 0x53c1f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t eax
sub_561e00(eax, 0, 2, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 2, 1, 0, 0)
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
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_3 + 0x17558) |= 8
int32_t esi = *(*(sub_573400() + 4) + 0x19cc)
void* result = sub_573400()

if (esi == *(result + 0xc))
    result = *(*(sub_573400() + 4) + 0x19ec)
    
    if (result == 3 || result == 2)
        return sub_56d320() __tailcall

return result
