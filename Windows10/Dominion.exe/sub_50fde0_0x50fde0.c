// 函数: sub_50fde0
// 地址: 0x50fde0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
uint32_t ecx = *(eax + 0xc)
void* esi = *(eax + 4)

if (arg2 == 0)
    sub_63b870(eax, &data_801800, "whatTo != CARD_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0xf3f, "ReplaceAddStartingCard")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t var_24 = ecx
uint32_t result = sub_50f8d0(eax, ecx, esi, arg1)
uint32_t result_1 = result

if (result_1 != 0)
    uint32_t eax_1 = zx.d(result_1.w)
    
    if (eax_1 u>= 0x320)
        sub_591930()
    
    void* esi_1 = esi + eax_1 * 0x64
    *(esi_1 + 0x1a4c) = arg2
    *(esi_1 + 0x1a48) = sub_571b30(arg2, *(esi + 0xd48))
    result = *(esi + 0x1504)
    
    if (result != 3 && result != 5 && result != 4 && result != 6)
        return sub_61b1b0(result, 0x2d, result == 2, ecx, result_1, arg2, nullptr, nullptr, 
            nullptr, 0, 0, 0, 0, 0)

return result
