// 函数: sub_6b4b00
// 地址: 0x6b4b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = *arg1
int32_t ebx
int32_t var_14 = ebx
char* edi_1 = arg1[2] + eax
char* esi = edi_1
int32_t ecx_1 = arg1[1] + eax

if (edi_1 u< ecx_1)
    while (true)
        ebx.b = *esi
        int32_t var_24
        char const* const var_20
        
        if (ebx.b u< 0x80)
        label_6b4b43:
            char* var_8 = esi
            
            if (sub_5a0d00(&var_8) != 0x20)
                while (true)
                    if (ebx.b u>= 0x80)
                        eax.b = ebx.b
                        eax.b &= 0xe0
                        
                        if (eax.b != 0xc0)
                            eax.b = ebx.b
                            eax.b &= 0xf0
                            
                            if (eax.b != 0xe0)
                                ebx.b &= 0xf8
                                
                                if (ebx.b != 0xf0)
                                    goto label_6b4b92
                    
                    var_8 = esi
                    eax = sub_5a0d00(&var_8)
                    
                    if (arg1[0x2b] != 4)
                        if (sub_6b48d0(eax).b != 0)
                        label_6b4be7:
                            
                            if (esi != edi_1)
                                return esi - *arg1
                    else if (eax == 0x7b)
                        goto label_6b4be7
                    
                    int32_t* ecx_5
                    ecx_5.b = *esi
                    var_8 = esi
                    
                    if (ecx_5.b u>= 0x80)
                        eax.b = ecx_5.b
                        eax.b &= 0xe0
                        
                        if (eax.b != 0xc0)
                            eax.b = ecx_5.b
                            eax.b &= 0xf0
                            
                            if (eax.b != 0xe0)
                                ecx_5.b &= 0xf8
                                
                                if (ecx_5.b != 0xf0)
                                    break
                    
                    sub_5a0d00(&var_8)
                    esi = var_8
                    
                    if (esi u>= ecx_1)
                        return esi - *arg1
                    
                    ebx.b = *esi
            else
                var_8 = esi
                
                if (ebx.b u< 0x80)
                label_6b4b77:
                    sub_5a0d00(&var_8)
                    esi = var_8
                    
                    if (esi u>= ecx_1)
                        break
                    
                    continue
                else
                    eax.b = ebx.b
                    eax.b &= 0xe0
                    
                    if (eax.b == 0xc0)
                        goto label_6b4b77
                    
                    eax.b = ebx.b
                    eax.b &= 0xf0
                    
                    if (eax.b == 0xe0)
                        goto label_6b4b77
                    
                    ebx.b &= 0xf8
                    
                    if (ebx.b == 0xf0)
                        goto label_6b4b77
            
            var_20 = "Xutf8_next"
            var_24 = 0x222
        else
            eax.b = ebx.b
            eax.b &= 0xe0
            
            if (eax.b == 0xc0)
                goto label_6b4b43
            
            eax.b = ebx.b
            eax.b &= 0xf0
            
            if (eax.b == 0xe0)
                goto label_6b4b43
            
            eax.b = ebx.b
            eax.b &= 0xf8
            
            if (eax.b == 0xf0)
                goto label_6b4b43
            
        label_6b4b92:
            var_20 = "Xutf8_peek_next"
            var_24 = 0x21c
        
        sub_63b870(eax, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
            "C:\x\ax2017\Engine\Xutf8.cpp", var_24, var_20)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

return esi - *arg1
