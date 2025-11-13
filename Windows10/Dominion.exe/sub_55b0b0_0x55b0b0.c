// 函数: sub_55b0b0
// 地址: 0x55b0b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1910)
void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 2, 1, 0, 0)
void* eax_1
int32_t edx_1
eax_1, edx_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_2 = *(eax_1 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + eax_2 + 0x17558) |= 8
    void var_8
    void arg_c80
    __builtin_memcpy(&var_8, sub_568780(&arg_c80, edx_1, 0x3e9, &arg_c80), 0xc84)
    int32_t eax_5 = sub_5649c0(&var_8)
    return sub_561af0(eax_5, 0, eax_5, 0)

sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
