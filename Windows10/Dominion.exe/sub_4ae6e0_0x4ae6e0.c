// 函数: sub_4ae6e0
// 地址: 0x4ae6e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *(arg1 + 4)

if (eax != *(arg2 + 4))
    eax.b = 0
    return eax

if (eax u> 3)
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.h", 
        0x13e, "HitResult::Comparator")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (eax)
    case 0
        eax.b = 1
        return eax
    case 1
        int32_t eax_1
        eax_1.b = *(arg1 + 8) == *(arg2 + 8)
        return eax_1
    case 2
        int32_t eax_3 = (**(arg1 + 0xc))()
        
        if (eax_3 == (**(arg2 + 0xc))())
            return eax_3(arg1 + 0xc, arg2 + 0xc)
        
        int32_t eax_4
        eax_4.b = 0
        return eax_4
    case 3
        int32_t eax_6
        eax_6.b = *(arg1 + 0x28) == *(arg2 + 0x28)
        return eax_6
