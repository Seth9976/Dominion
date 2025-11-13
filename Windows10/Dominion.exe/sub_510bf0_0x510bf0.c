// 函数: sub_510bf0
// 地址: 0x510bf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t var_c = 2
int32_t var_10 = 0xffffffff
int32_t var_1c
uint32_t var_18
sub_571fa0(eax, *(eax + 0xc), *(eax + 4), 0x1000, 0xa, 0x476, nullptr, var_1c, var_18, 0)
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
*(ecx_2 + eax_3 + 0x17558) |= 0x80
void* result = sub_573400()
int32_t* ecx_3 = *(result + 4)
int32_t edx_1 = ecx_3[0x541]

if (edx_1 == 3 || edx_1 == 5 || edx_1 == 4 || edx_1 == 6 || ecx_3[0x540].b != 0)
    return result

int32_t edx_2 = *(result + 0xc)
int32_t eax_4 = edx_2

if (edx_2 == ecx_3[0x673])
    eax_4 = ecx_3[0x674]

return sub_59f9b0(eax_4, edx_2, ecx_3, eax_4, 0x4e, 0, nullptr, 0, 0x1000, 0xa, 0, 0)
