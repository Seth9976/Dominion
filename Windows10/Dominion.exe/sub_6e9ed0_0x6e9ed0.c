// 函数: sub_6e9ed0
// 地址: 0x6e9ed0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg1

if (arg2 == 0x2e)
    int32_t eax_1 = esi[1]
    
    if (eax_1 == esi[3])
        int32_t var_10_1 = eax_1
        sub_6e9890(arg1)
    else
        sub_6e9790(arg1)
else if (arg2 != 8)
    if (arg2 == 0x24)
        if (arg3 != 1)
            esi[3] = 0
        
        esi[1] = 0
        esi[2] = 0
        sub_6e9a30(arg1)
        uint32_t eax_4
        eax_4.b = 1
        return eax_4
    
    if (arg2 == 0x23)
        char* eax_5 = *esi
        int32_t eax_7
        
        if (arg3 != 1)
            if (eax_5 == 0 || *eax_5 == 0)
                eax_7 = 0
            else
                eax_7 = *(sub_63d4e0(arg1) + 8)
            
            esi[3] = eax_7
        else if (eax_5 == 0 || *eax_5 == 0)
            eax_7 = 0
        else
            eax_7 = *(sub_63d4e0(arg1) + 8)
        
        esi[1] = eax_7
        esi[2] = 0
        sub_6e9a30(esi)
        uint32_t eax_9
        eax_9.b = 1
        return eax_9
    
    void* eax_12
    
    if (arg2 != 0x25)
        if (arg2 != 0x27)
            if (arg2 != 0x41 || arg3 != 2)
                int32_t eax
                eax.b = 0
                return eax
            
            esi[3] = 0
            char* eax_21 = *esi
            
            if (eax_21 != 0 && *eax_21 != 0)
                esi[1] = *(sub_63d4e0(arg1) + 8)
                sub_6e9a30(esi)
                uint32_t eax_24
                eax_24.b = 1
                return eax_24
            
            esi[1] = 0
            sub_6e9a30(esi)
            uint32_t eax_25
            eax_25.b = 1
            return eax_25
        
        if ((arg3.b & 1) == 0)
            void* ecx_4 = esi[1]
            eax_12 = esi[3]
            
            if (ecx_4 == eax_12)
                char* eax_17 = *esi
                int32_t eax_19
                
                if (eax_17 == 0 || *eax_17 == 0)
                    eax_19 = 0
                else
                    eax_19 = *(sub_63d4e0(esi) + 8)
                
                void* ecx_6 = esi[1]
                
                if (ecx_6 s< eax_19)
                    eax_12 = sub_6e9d30(esi, ecx_6)
                    esi[3] = eax_12
                    esi[1] = eax_12
            else
                if (ecx_4 s>= eax_12)
                    eax_12 = ecx_4
                
                esi[3] = eax_12
                esi[1] = eax_12
        else
            char* eax_14 = *esi
            int32_t eax_16
            
            if (eax_14 == 0 || *eax_14 == 0)
                eax_16 = 0
            else
                eax_16 = *(sub_63d4e0(arg1) + 8)
            
            void* ecx_2 = esi[1]
            
            if (ecx_2 != eax_16)
                esi[1] = sub_6e9d30(esi, ecx_2)
    else
        void* edi_1 = esi[1]
        char* eax_10
        void* i
        
        if ((arg3.b & 1) == 0)
            eax_12 = esi[3]
            
            if (edi_1 != eax_12)
                if (edi_1 s<= eax_12)
                    eax_12 = edi_1
                
                esi[3] = eax_12
                esi[1] = eax_12
            else if (edi_1 s> 0)
                eax_10 = *esi
                
                if (eax_10 == 0 || *eax_10 == 0)
                    goto label_6ea1ad
                
                eax_10 = sub_63d4e0(arg1)
                
                if (edi_1 s> *(eax_10 + 8))
                    goto label_6ea1ad
                
                i = edi_1 - 1
                
                if (i s> 0)
                    char* edi_3 = *esi
                    
                    do
                        char* eax_13 = &data_801800
                        
                        if (edi_3 != 0)
                            eax_13 = edi_3
                        
                        arg1.b = *(eax_13 + i)
                        
                        if (arg1.b u< 0x80)
                            break
                        
                        eax_13.b = arg1.b
                        eax_13.b &= 0xe0
                        
                        if (eax_13.b == 0xc0)
                            break
                        
                        eax_13.b = arg1.b
                        eax_13.b &= 0xf0
                        
                        if (eax_13.b == 0xe0)
                            break
                        
                        arg1.b &= 0xf8
                        
                        if (arg1.b == 0xf0)
                            break
                        
                        i -= 1
                    while (i s> 0)
                
                esi[3] = i
            label_6ea0b2:
                esi[1] = i
        else if (edi_1 s> 0)
            eax_10 = *esi
            
            if (eax_10 == 0 || *eax_10 == 0)
            label_6ea1ad:
                sub_63b870(eax_10, &data_801800, "index > 0 && index <= mText.Length()", 
                    "C:\x\ax2017\Engine\UITextBox.cpp", 0xec, "UITextBox::Utf8StringLeftOneIndex")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            eax_10 = sub_63d4e0(arg1)
            
            if (edi_1 s> *(eax_10 + 8))
                goto label_6ea1ad
            
            i = edi_1 - 1
            
            if (i s<= 0)
            label_6ea0b2_1:
                esi[1] = i
            else
                char* edi_2 = *esi
                
                do
                    char* eax_11 = &data_801800
                    
                    if (edi_2 != 0)
                        eax_11 = edi_2
                    
                    arg1.b = *(eax_11 + i)
                    
                    if (arg1.b u< 0x80)
                        goto label_6ea0b2_1
                    
                    eax_11.b = arg1.b
                    eax_11.b &= 0xe0
                    
                    if (eax_11.b == 0xc0)
                        goto label_6ea0b2_1
                    
                    eax_11.b = arg1.b
                    eax_11.b &= 0xf0
                    
                    if (eax_11.b == 0xe0)
                        goto label_6ea0b2_1
                    
                    arg1.b &= 0xf8
                    
                    if (arg1.b == 0xf0)
                        goto label_6ea0b2_1
                    
                    i -= 1
                while (i s> 0)
                
                esi[1] = i
else
    int32_t eax_2 = esi[1]
    
    if (eax_2 != esi[3])
        sub_6e9790(arg1)
    else if (eax_2 s> 0)
        int32_t eax_3 = sub_6e9e30(arg1, eax_2)
        int32_t var_10_3 = eax_3
        esi[1] = eax_3
        esi[3] = eax_3
        sub_6e9890(esi)

esi[2] = 0
sub_6e9a30(esi)
uint32_t eax_20
eax_20.b = 1
return eax_20
