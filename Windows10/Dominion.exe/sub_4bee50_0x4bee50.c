// 函数: sub_4bee50
// 地址: 0x4bee50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* result = data_8db778

if (result u> 4)
    sub_63b870(result, &data_801800, "Halt", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0xedb, "InputBoxValidate")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (result)
    case nullptr
        result.b = 1
        return result
    case 1
        result.b = *arg1 != 0
        return result
    case 2
        result = sub_69dd70(arg1, U"@.")
        
        if (result != 0 && result != arg1)
            char* ecx_1 = sub_69dd70(result, U".")
            
            if (ecx_1 != 0)
                do
                    result.b = *ecx_1
                    ecx_1 = &ecx_1[1]
                while (result.b != 0)
                
                result.b = ecx_1 - &ecx_1[1] u>= 3
                return result
        
        result.b = 0
        return result
    case 3
        return sub_4c0160(arg1) __tailcall
    case 4
        char* eax_1 = sub_69dd70(arg1, U"@.")
        
        if (eax_1 != 0 && eax_1 != arg1)
            char* ecx_5 = sub_69dd70(eax_1, U".")
            
            if (ecx_5 != 0)
                do
                    result.b = *ecx_5
                    ecx_5 = &ecx_5[1]
                while (result.b != 0)
                
                if (ecx_5 - &ecx_5[1] u>= 3)
                    result.b = 1
                    return result
        
        if (sub_4c0160(arg1).b != 0)
            result.b = 1
            return result
        
        result.b = 0
        return result
