// 函数: sub_5db430
// 地址: 0x5db430
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = sub_5cb070()
void* var_c = ecx
void* i

if (ecx != 0 && *(ecx + 0x1c) != 0)
    void* edx_1 = ecx + 0x20
    void* i_1 = nullptr
    void* var_8_1 = edx_1
    
    do
        int32_t edi_1 = *edx_1
        
        if (edi_1 == 0)
            break
        
        int32_t eax_1 = *(ecx + 0x1c) - 1
        
        if (eax_1 u> 0xa)
            sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
                0x3646, "TutorialGlow")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        bool cond:0_1
        
        switch (eax_1)
            case 0
                if (*(arg1 + 0x2c) == 0)
                    uint32_t ebx_6 = zx.d((*(arg1 + 0x98)).w)
                    
                    if (ebx_6 u>= 0x320)
                        sub_591930()
                        ecx = var_c
                        edx_1 = var_8_1
                    
                    if (*(ebx_6 * 0x64 + &data_b82524) == edi_1)
                        cond:0_1 = *(arg1 + 0xa4) == 0x3eb
                        goto label_5db6c4
            case 1
                if (*(arg1 + 0x2c) == 0)
                    uint32_t ebx_8 = zx.d((*(arg1 + 0x98)).w)
                    
                    if (ebx_8 u>= 0x320)
                        sub_591930()
                        ecx = var_c
                        edx_1 = var_8_1
                    
                    if (*(ebx_8 * 0x64 + &data_b82524) == edi_1)
                        cond:0_1 = *(arg1 + 0xa4) == 0x3ea
                        goto label_5db6c4
            case 2
                if (*(arg1 + 0x2c) == 3)
                    cond:0_1 = *(arg1 + 0x30) == edi_1
                label_5db6c4:
                    
                    if (cond:0_1)
                        eax_1.b = 1
                        return eax_1
            case 3
                if (*(arg1 + 0x2c) == 0)
                    uint32_t ebx_12 = zx.d((*(arg1 + 0x98)).w)
                    
                    if (ebx_12 u>= 0x320)
                        sub_591930()
                        ecx = var_c
                        edx_1 = var_8_1
                    
                    if (*(ebx_12 * 0x64 + &data_b82524) == edi_1)
                        cond:0_1 = *(arg1 + 0xa4) == 0x3e9
                        goto label_5db6c4
            case 4
                if (*(arg1 + 0x2c) == 0)
                    uint32_t ebx_10 = zx.d((*(arg1 + 0x98)).w)
                    
                    if (ebx_10 u>= 0x320)
                        sub_591930()
                        ecx = var_c
                        edx_1 = var_8_1
                    
                    if (*(ebx_10 * 0x64 + &data_b82524) == edi_1)
                        eax_1 = data_b604e0
                        
                        if (eax_1 == 0xffffffff)
                            eax_1 = 0
                        
                        if (*(arg1 + 0xa0) == eax_1)
                            cond:0_1 = *(arg1 + 0xa4) == 0x3ec
                            goto label_5db6c4
            case 5
                int32_t eax_2 = *(arg1 + 0x2c)
                
                if (eax_2 == 0)
                    uint32_t ebx_4 = zx.d((*(arg1 + 0x98)).w)
                    
                    if (ebx_4 u>= 0x320)
                        sub_591930()
                        ecx = var_c
                        edx_1 = var_8_1
                    
                    if (*(ebx_4 * 0x64 + &data_b82524) == edi_1)
                        cond:0_1 = *(arg1 + 0xa4) == 0x3ea
                        goto label_5db6c4
                else if (eax_2 == 3)
                    cond:0_1 = *(arg1 + 0x30) == *(ecx + 0x18)
                    goto label_5db6c4
            case 6
                eax_1 = *(arg1 + 0x2c)
                
                if (eax_1 == 0)
                    uint32_t ebx_2 = zx.d((*(arg1 + 0x98)).w)
                    
                    if (ebx_2 u>= 0x320)
                        sub_591930()
                        ecx = var_c
                        edx_1 = var_8_1
                    
                    if (*(ebx_2 * 0x64 + &data_b82524) == edi_1)
                        cond:0_1 = *(arg1 + 0xa4) == 0x3ea
                        goto label_5db6c4
                else if (eax_1 == 3)
                    cond:0_1 = *(arg1 + 0x30) == edi_1
                    goto label_5db6c4
            case 7
                if (*(arg1 + 0x2c) == 5)
                    cond:0_1 = *(arg1 + 0x204) == edi_1
                    goto label_5db6c4
            case 8
                eax_1 = *(arg1 + 0x2c)
                
                if (eax_1 != 4)
                    cond:0_1 = eax_1 == 6
                else
                    cond:0_1 = *(arg1 + 0x1b4) == edi_1
                
                goto label_5db6c4
            case 9
                if (*(arg1 + 0x2c) == 3)
                    cond:0_1 = *(arg1 + 0x5c) == edi_1
                    goto label_5db6c4
            case 0xa
                if (*(arg1 + 0x2c) == 0)
                    uint32_t ebx_14 = zx.d((*(arg1 + 0x98)).w)
                    
                    if (ebx_14 u>= 0x320)
                        sub_591930()
                        ecx = var_c
                        edx_1 = var_8_1
                    
                    cond:0_1 = *(ebx_14 * 0x64 + &data_b82524) == edi_1
                    goto label_5db6c4
        
        edx_1 += 4
        i = i_1 + 1
        var_8_1 = edx_1
        i_1 = i
    while (i s< 0x20)

i.b = 0
return i
