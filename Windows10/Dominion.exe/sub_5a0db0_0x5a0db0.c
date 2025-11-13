// 函数: sub_5a0db0
// 地址: 0x5a0db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* result = arg1
result = arg1
arg1.b = *arg1

if (arg1.b u>= 0x80)
    int32_t eax
    eax.b = arg1.b
    eax.b &= 0xe0
    
    if (eax.b != 0xc0)
        eax.b = arg1.b
        eax.b &= 0xf0
        
        if (eax.b != 0xe0)
            arg1.b &= 0xf8
            
            if (arg1.b != 0xf0)
                sub_63b870(eax, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
                    "C:\x\ax2017\Engine\Xutf8.cpp", 0x222, "Xutf8_next")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn

sub_5a0d00(&result)
return result
