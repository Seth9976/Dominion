// 函数: sub_4ff050
// 地址: 0x4ff050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t var_c = 0
int32_t var_10 = 0xffffffff
int32_t var_14 = 0
sub_571fa0(eax, *(eax + 0xc), *(eax + 4), 0x1000, 2, 0x476, nullptr)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t result = *(eax_1 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + result + 0x17558) |= 0x80
    return result

sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
