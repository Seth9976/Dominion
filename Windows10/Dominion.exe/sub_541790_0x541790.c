// 函数: sub_541790
// 地址: 0x541790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t var_c = arg1
int32_t esi
int32_t var_10 = esi
uint32_t var_14 = arg1
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_1 = *(eax_2 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_3 + 0x17558) |= 2
void* eax_4 = sub_573400()
*(eax_4 + 4)
uint32_t eax_5 = sub_589750(esi, *(eax_4 + 0xc), 0x3ee, *(eax_4 + 0x28), *(eax_4 + 0x2c), 
    *(eax_4 + 0x30), 0, 0, 0xffffffff, nullptr)
void* result = sub_563e90()

if (eax_5 == 0)
    return result

void* eax_6
int32_t ecx_5
int32_t edx_2

if (result.b == 0)
    var_c = eax_5
    eax_6, ecx_5, edx_2 = sub_573400()
    int32_t var_14_2 = 0x17
else
    sub_56e370(result, 2, eax_5, 0)
    var_c = eax_5
    eax_6, ecx_5, edx_2 = sub_573400()
    int32_t var_14_1 = 8

return sub_589e00(eax_6, edx_2, *(eax_6 + 4), &var_c, ecx_5, 0x3ee)
