// 函数: sub_52b1a0
// 地址: 0x52b1a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
int32_t var_c9c = 0xc
void var_c98
sub_588db0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 0x3ea, 0, 0, 0, nullptr, &var_c98, 0)
void* eax_3 = sub_573400()
sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 1, 0, 0)
void* eax_4 = sub_573400()
int32_t ecx_2 = *(eax_4 + 0xc)

if (ecx_2 != 0xffffffff)
    uint32_t result = *(eax_4 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(ecx_3 + result + 0x17558) |= 2
    CookieCheckFunction(result)
    return result

sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
