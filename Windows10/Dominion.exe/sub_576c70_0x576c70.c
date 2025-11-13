// 函数: sub_576c70
// 地址: 0x576c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_6 = arg2[1]
int32_t esi = *arg2
*arg1 = esi

if (eax_6 != 0)
    if (eax_6 != 1)
        sub_63b870(eax_6, &data_801800, "cost.potions == 1", 
            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0xfb1, "CardCostMerge")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    esi |= 0x10000

int32_t eax_2 = arg2[2] << 0x18 | esi
bool cond:0 = arg2[4].b == 0
*arg1 = eax_2

if (not(cond:0))
    *arg1 = eax_2 | 0x40000

return arg1
