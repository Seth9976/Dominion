// 函数: sub_63e4d0
// 地址: 0x63e4d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* const var_8 = arg1
int32_t* esi = arg1
char* const edi = &data_801800
char* eax = *esi

if (eax != 0)
    edi = eax

arg1.b = *edi

if (arg1.b u>= 0x80)
    eax.b = arg1.b
    eax.b &= 0xe0
    
    if (eax.b != 0xc0)
        eax.b = arg1.b
        eax.b &= 0xf0
        
        if (eax.b != 0xe0)
            arg1.b &= 0xf8
            
            if (arg1.b != 0xf0)
                sub_63b870(eax, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
                    "C:\x\ax2017\Engine\Xutf8.cpp", 0x21c, "Xutf8_peek_next")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn

var_8 = edi
uint32_t result = sub_5a0d00(&var_8)

if (result s<= 0x100)
    char* edi_1 = nullptr
    
    while (true)
        char* eax_1 = *esi
        
        if (eax_1 == 0 || *eax_1 == 0)
            result = 0
        else
            result = *(sub_63d4e0(esi) + 8)
        
        if (edi_1 s>= result)
            break
        
        char* eax_3 = *esi
        char* ecx_2 = &data_801800
        
        if (eax_3 != 0)
            ecx_2 = eax_3
        
        sub_63dc00(esi, edi_1, toupper(*(ecx_2 + edi_1)))
        edi_1 = &edi_1[1]

return result
