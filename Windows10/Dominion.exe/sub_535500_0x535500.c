// 函数: sub_535500
// 地址: 0x535500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
sub_561af0(eax, 0, 2, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 2, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_1 = *(eax_2 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_3 = *(eax_2 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + eax_3 + 0x17558) |= 8
    void* eax_4 = sub_56c1b0(eax_3, sub_5355b0, 6, sub_535640, 2, 1)
    int32_t result = sub_56edd0(eax_4 + 0x88)
    *(eax_4 + 0xa0) = result
    return result

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
