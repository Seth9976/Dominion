// 函数: sub_64b5d0
// 地址: 0x64b5d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 - 1 u> 0xb)
    int32_t eax
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\xTime.cpp", 0xb1, "DaysInMonth")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (arg2 + &jump_table_64b67c[2]:3)
    case &lookup_table_64b688, &lookup_table_64b688[2], &lookup_table_64b688[4], 
            &lookup_table_64b688[6], &lookup_table_64b688[7], &lookup_table_64b688[9], 
            &lookup_table_64b688[0xb]
        return 0x1f
    case &lookup_table_64b688[1]
        if (arg1 != arg1 s/ 0x190 * 0x190)
            bool cond:0_1
            
            if (arg1 != arg1 s/ 0x64 * 0x64)
                int32_t esi_1 = arg1 & 0x80000003
                cond:0_1 = esi_1 == 0
                
                if (esi_1 s< 0)
                    cond:0_1 = ((esi_1 - 1) | 0xfffffffc) == 0xffffffff
            
            if (arg1 == arg1 s/ 0x64 * 0x64 || not(cond:0_1))
                return 0x1c
        
        return 0x1d
    case &lookup_table_64b688[3], &lookup_table_64b688[5], &lookup_table_64b688[8], 
            &lookup_table_64b688[0xa]
        return 0x1e
