// 函数: sub_56cc00
// 地址: 0x56cc00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* esi = *(eax + 4)
uint32_t eax_1 = *(eax + 0xc)
uint32_t var_c = eax_1

if (*(esi + 0x19a4) s>= 0x100)
    sub_591930()
    eax_1 = var_c

int32_t eax_2 = sub_571ee0(eax_1, eax_1, esi, arg1)

if (eax_2 == 0xffffffff)
    eax_2 = sub_571da0(eax_2, var_c, esi, arg1, arg2, nullptr, 1)

int32_t* esi_1 = *(eax + 4)
int32_t ecx_2 = esi_1[eax_2 * 8 + 0x54b4]

if (ecx_2 != arg2 && arg2 != 0x476)
    return sub_584790(eax_2, eax_2, esi_1, arg2)

if (ecx_2 - 7 u> 0x40)
    sub_63b870(ecx_2 - 7, &data_801800, 
        "where >= CW_BOARD_STANDARD_START && where < END_BOARD_PILES", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x1118, "BoardPileWhat")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t result = esi_1[0x541]

if (result == 3 || result == 5 || result == 4 || result == 6 || esi_1[0x540].b != 0)
    return result

int32_t edx_5 = esi_1[eax_2 * 8 + 0x54b3]
int32_t eax_4 = edx_5

if (edx_5 == esi_1[0x673])
    eax_4 = esi_1[0x674]

return sub_59f9b0(eax_4, edx_5, esi_1, eax_4, 0xc, 0, nullptr, 0, arg1, 1, 
    esi_1[ecx_2 * 4 + 0x549], 0)
