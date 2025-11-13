// 函数: sub_63e960
// 地址: 0x63e960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_8 = arg1
uint32_t eax
eax.b = *arg1
int32_t result = 0

if (eax.b != 0)
    while (true)
        var_8 = arg1
        
        if (eax.b u>= 0x80)
            arg1.b = eax.b
            arg1.b &= 0xe0
            
            if (arg1.b != 0xc0)
                arg1.b = eax.b
                arg1.b &= 0xf0
                
                if (arg1.b != 0xe0)
                    eax.b &= 0xf8
                    
                    if (eax.b != 0xf0)
                        sub_63b870(eax, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
                            "C:\x\ax2017\Engine\Xutf8.cpp", 0x222, "Xutf8_next")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
        
        sub_5a0d00(&var_8)
        arg1 = var_8
        result += 1
        
        if (*arg1 == 0)
            break
        
        eax.b = *arg1

return result
