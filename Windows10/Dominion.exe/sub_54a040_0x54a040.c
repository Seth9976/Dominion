// 函数: sub_54a040
// 地址: 0x54a040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_2 = *(eax_1 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + eax_2 + 0x17558) |= 2
    void* eax_3 = sub_573400()
    sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 2, 1, 0, 0)
    eax_1 = sub_573400()
    int32_t ecx_4 = *(eax_1 + 0xc)
    
    if (ecx_4 != 0xffffffff)
        int32_t eax_4 = *(eax_1 + 4)
        int32_t ecx_5 = ecx_4 * 0x5a30
        *(ecx_5 + eax_4 + 0x17558) |= 8
        sub_561af0(eax_4, 0, 2, 0)
        int32_t var_c90 = 0
        return sub_56c010(&var_c90, sub_54a130, 6, sub_54a1c0, 0x21, &var_c90, 1, 0, 0xffffffff)

sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
