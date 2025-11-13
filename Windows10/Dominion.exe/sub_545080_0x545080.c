// 函数: sub_545080
// 地址: 0x545080
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_2 = *(eax_1 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + eax_2 + 0x17558) |= 2
    sub_561af0(eax_2, 0, 1, 0)
    uint32_t eax_3 = sub_56b800()
    void* eax_4 = sub_573400()
    return sub_565ff0(eax_4, 0x3ee, eax_3, *(eax_4 + 0xc), 0x463, nullptr, nullptr, 0xb, nullptr, 
        nullptr)

sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
