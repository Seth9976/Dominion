// 函数: sub_69dd70
// 地址: 0x69dd70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_c = arg2
char* var_8 = arg1

if (*arg2 == 0)
    return arg1

if (*arg1 != 0)
    char* ebx_2 = arg1 - arg2
    
    while (true)
        char* esi_1 = arg2
        char* eax
        
        while (true)
            eax.b = *esi_1
            
            if (eax.b != 0)
                int32_t eax_2 = tolower(eax.b)
                
                if (tolower(*(ebx_2 + esi_1)) == eax_2)
                    esi_1 = &esi_1[1]
                    
                    if (*(ebx_2 + esi_1) != 0)
                        continue
                
                if (*esi_1 != 0)
                    break
            
            return var_8
        
        ebx_2 = &ebx_2[1]
        arg2 = var_c
        eax = &var_8[1]
        var_8 = eax
        
        if (*eax == 0)
            break

return nullptr
