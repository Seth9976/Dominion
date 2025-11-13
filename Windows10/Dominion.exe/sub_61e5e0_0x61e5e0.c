// 函数: sub_61e5e0
// 地址: 0x61e5e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x502c)
__security_cookie

if (data_171efcc == 0)
    data_171efc8 = 0

void* eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
void* eax_3 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
sub_4e6680(eax_3, eax_3 + 0x350c, &var_4, eax_2 + 0x3510)
int32_t eax_4 = var_4

if (eax_4 == 0)
    uint32_t eax_8 = sub_61e070(__return_addr)
    CookieCheckFunction(eax_8)
    return eax_8

if (eax_4 == 1)
    uint32_t eax_7 = sub_61e070(0)
    CookieCheckFunction(eax_7)
    return eax_7

sub_63b870(eax_4 - 1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xe052, 
    "CampaignReroll")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
