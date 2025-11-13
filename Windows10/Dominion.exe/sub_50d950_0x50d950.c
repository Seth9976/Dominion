// 函数: sub_50d950
// 地址: 0x50d950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t result = 0
int32_t i = 0
int32_t* esi = arg2

do
    int32_t ecx = *(arg1 - arg2 + esi)
    
    if (ecx == 0)
        sub_63b870(result, &data_801800, "kingdom.piles[i] != CARD_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x93e, "TraitTargetPiles")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *esi = ecx
    i += 1
    result += 1
    esi = &esi[1]
while (i s< 0xa)

int32_t ecx_1 = *(arg1 + 0x118)

if (ecx_1 != 0)
    arg2[result] = ecx_1
    result += 1

int32_t ecx_2 = *(arg1 + 0x170)

if (ecx_2 == 0)
    return result

arg2[result] = ecx_2
return result + 1
