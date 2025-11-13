// 函数: sub_500cf0
// 地址: 0x500cf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_1 = *(eax_2 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_3 = *(eax_2 + 4)
    int32_t edx_1 = ecx_1 * 0x5a30
    *(edx_1 + eax_3 + 0x17558) |= 2
    void* eax_5 = sub_56c1b0(sub_561af0(eax_3, 0, 1, 0), sub_500db0, 6, sub_500e40, 0, 1)
    int32_t result = sub_56edd0(eax_5 + 0x88)
    *(eax_5 + 0xa0) = result
    return result

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
