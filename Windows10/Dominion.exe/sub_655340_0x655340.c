// 函数: sub_655340
// 地址: 0x655340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_2 = *(arg1 + 0x1598)

if (eax_2 u> 6)
    sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x19dc, 
        "UI2AcceptsClicks")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

switch (eax_2)
    case 0
        int32_t eax = *(arg1 + 0x15f8)
        
        if (eax == 2)
            int32_t eax_1
            eax_1.b = *(arg1 + 0x14e8) != 0
            return eax_1
        
        if (eax == 3)
            if (*(arg1 + 0x1568) == 0)
                eax_2.b = 0
                return eax_2
            
            eax_2.b = 1
            return eax_2
        
        if (eax == 5)
            eax_2.b = 1
            return eax_2
        
        eax_2.b = 0
        return eax_2
    case 1, 3, 4, 5
        eax_2.b = 0
        return eax_2
    case 2, 6
        eax_2.b = 1
        return eax_2
