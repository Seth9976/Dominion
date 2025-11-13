// 函数: sub_527cf0
// 地址: 0x527cf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 2, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

int32_t eax_3 = *(eax_1 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_3 + 0x17558) |= 2
uint32_t eax_4 = sub_56b800()
uint32_t result
int32_t ecx_4
result, ecx_4 = sub_5690c0(eax_4, 0x3e9, eax_4, 0x15)

if (result.b == 0)
    return result

int32_t var_c_1 = ecx_4
int32_t var_10_1 = 0
uint32_t eax_5 = sub_568960(result, 0, 0x3ea, 0)
return sub_561e00(eax_5, 0, eax_5, 0)
