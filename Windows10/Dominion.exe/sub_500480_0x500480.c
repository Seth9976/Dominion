// 函数: sub_500480
// 地址: 0x500480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
uint32_t eax_1 = sub_56b780()
int32_t var_14 = 1
int32_t var_18 = 0xffffffff
uint32_t var_1c = eax_1
sub_571fa0(eax_1, *(eax + 0xc), *(eax + 4), 0x1000, 1, 0x476, nullptr)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 != 0xffffffff)
    int32_t result = *(eax_2 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(ecx_3 + result + 0x17558) |= 0x80
    return result

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
