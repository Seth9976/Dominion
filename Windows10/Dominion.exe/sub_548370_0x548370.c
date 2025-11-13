// 函数: sub_548370
// 地址: 0x548370
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
int32_t var_c = ecx_2
int32_t var_10 = 0
*(ecx_2 + eax_3 + 0x17558) |= 2
uint32_t result
int32_t edx_1
edx_1:result = muls.dp.d(0x55555556, sub_568960(eax_3, 0, 0x3e9, 0))
uint32_t ecx_5 = edx_1 u>> 0x1f
int32_t ecx_6 = ecx_5 + edx_1

if (ecx_5 == neg.d(edx_1))
    return result

int32_t var_c_1 = ecx_6
return sub_561e00(result, 0, ecx_6, 0)
