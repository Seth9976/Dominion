// 函数: sub_4ff350
// 地址: 0x4ff350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 != 0xffffffff)
    int32_t eax_3 = *(eax_2 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(ecx_3 + eax_3 + 0x17558) |= 2
    void* eax_4 = sub_573400()
    int32_t var_c_1 = 0
    int32_t var_10_1 = 0xffffffff
    int32_t var_14_1 = 0
    sub_571fa0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x1000, 1, 0x476, nullptr)
    eax_2 = sub_573400()
    int32_t ecx_5 = *(eax_2 + 0xc)
    
    if (ecx_5 != 0xffffffff)
        int32_t result = *(eax_2 + 4)
        int32_t ecx_6 = ecx_5 * 0x5a30
        *(ecx_6 + result + 0x17558) |= 0x80
        return result

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
