// 函数: sub_54a420
// 地址: 0x54a420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_c9c = arg1
void* eax_2
int32_t edx
eax_2, edx = sub_573400()

if (*eax_2 == 3 && (*(eax_2 + 0x10) & 0x30) == 0)
    void* eax_3 = sub_576940(eax_2, edx, *(eax_2 + 4), *(eax_2 + 0x10))
    int32_t esi_1 = *(arg1 + 0xc80)
    int32_t var_c98 = 4
    void var_c94
    memcpy(&var_c94, var_c9c, esi_1 << 2)
    int32_t var_14 = esi_1
    uint32_t result =
        sub_56b8e0(eax_3 + 0x74, eax_3 + 0x70, *(eax_2 + 4), eax_3 + 0x74, eax_3 + 0x78, &var_c98)
    CookieCheckFunction(result)
    return result

sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Plunder.cpp", 
    0x407, "Trigger_AssociatedSetCardsList")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
