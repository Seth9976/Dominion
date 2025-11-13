// 函数: sub_593ef0
// 地址: 0x593ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t result = 0
int32_t i = 0
int32_t* eax = arg2

do
    int32_t ecx = *(arg1 - arg2 + eax)
    
    if (ecx == 0)
        sub_63b870(eax, &data_801800, "setup.kingdom.piles[i] != CARD_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x5337, "KingdomSupplyPiles")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *eax = ecx
    i += 1
    result += 1
    eax = &eax[1]
while (i s< 0xa)

int32_t eax_1 = *(arg1 + 0x118)

if (eax_1 != 0)
    arg2[result] = eax_1
    result += 1

int32_t eax_2 = *(arg1 + 0x170)

if (eax_2 != 0)
    arg2[result] = eax_2
    result += 1

int32_t edi = 0

if (result s<= 0)
    return result

do
    if ((*(sub_571b30(arg2[edi], data_cce9b0) + 0x98) & 0x1000) != 0)
        arg2[result] = 0x923
        return result + 1
    
    edi += 1
while (edi s< result)

return result
