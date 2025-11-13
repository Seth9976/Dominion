// 函数: sub_4facd0
// 地址: 0x4facd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_56d1f0()
void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 2, 1, 0, 0)
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
*(ecx_2 + eax_2 + 0x17558) |= 8
void* eax_3 = sub_573400()
int32_t result = sub_571ee0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0xb08)
int32_t result_1 = result

if (result_1 != 0xffffffff)
    void* eax_4 = sub_573400()
    
    if (result_1 s< 0)
        sub_591930()
    
    if (result_1 s>= *(*(eax_4 + 4) + 0x19a4))
        sub_591930()
    
    result = *(eax_4 + 4)
    
    if (*((result_1 << 5) + result + 0x152d0) == 0x3eb)
        return result

sub_561af0(result, 0, 1, 0)
return sub_56ce60(0xb08) __tailcall
