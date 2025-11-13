// 函数: sub_63da70
// 地址: 0x63da70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
char* i = arg2
int32_t* ebx = arg1

for (void* edi_1 = arg3 + i; i u< edi_1; i = arg2)
    char eax = *i
    
    if (eax u>= 0x80)
        arg1.b = eax
        arg1.b &= 0xe0
        
        if (arg1.b != 0xc0)
            arg1.b = eax
            arg1.b &= 0xf0
            
            if (arg1.b != 0xe0 && (eax & 0xf8) != 0xf0)
                break
    
    arg2 = i
    sub_63dcd0(ebx, sub_5a0d00(&arg2))
    char ecx_2 = *i
    arg2 = i
    
    if (ecx_2 u>= 0x80)
        int32_t* eax_2
        eax_2.b = ecx_2
        eax_2.b &= 0xe0
        
        if (eax_2.b != 0xc0)
            eax_2.b = ecx_2
            eax_2.b &= 0xf0
            
            if (eax_2.b != 0xe0 && (ecx_2 & 0xf8) != 0xf0)
                sub_63b870(eax_2, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
                    "C:\x\ax2017\Engine\Xutf8.cpp", 0x222, "Xutf8_next")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
    
    eax, arg1 = sub_5a0d00(&arg2)
