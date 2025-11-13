// 函数: sub_53bc60
// 地址: 0x53bc60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_c9c
sub_561af0(__security_cookie ^ &var_c9c, 0, 3, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 2, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_4 + 0x17558) |= 8
uint32_t eax_5 = sub_56b800()
void* eax_6 = sub_573400()
char var_c99
void* result =
    sub_565ff0(eax_6, 0x3e9, eax_5, *(eax_6 + 0xc), 0x462, nullptr, &var_c99, 0xb, nullptr, nullptr)

if (var_c99 != 0)
    int32_t var_18_1 = 0
    uint32_t var_c98
    
    if (eax_5 != 0)
        var_c98 = eax_5
        int32_t var_18_2 = 1
    
    result = sub_56f1a0(result, &var_c98, 0x13, 0)

CookieCheckFunction(result)
return result
