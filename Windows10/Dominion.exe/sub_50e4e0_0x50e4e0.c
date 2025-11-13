// 函数: sub_50e4e0
// 地址: 0x50e4e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = data_cca788
int32_t* eax_6

if (esi == 0)
    void* ebx_3 = &data_cca780[data_cca784 * 0x200]
    
    if (*(ebx_3 + 0x34) == 0)
    label_50e5f9:
        eax_6.b = 0
        return eax_6
    
    int32_t edi_1 = 0
    
    while (true)
        int32_t esi_1 = *(ebx_3 + 0x34)
        
        if ((*(sub_571b30(esi_1, 0x17) + 0x98) & 0x8000000) == 0)
            break
        
        int32_t edx_1 = 0
        int32_t* eax_13 = data_cca780 + 0x590 + (data_cca784 << 0xb)
        
        while (true)
            if (*eax_13 == esi_1)
                edi_1 += 1
                
                if (edi_1 s< 4)
                    break
                
                eax_13.b = 0
                return eax_13
            
            edx_1 += 1
            eax_13 = &eax_13[5]
            
            if (edx_1 s>= 0x20)
                goto label_50e535
else if ((*(sub_571b30(esi, 0x17) + 0x98) & 0x8000000) != 0)
    int32_t i = 0
    eax_6 = data_cca780 + 0x590 + (data_cca784 << 0xb)
    
    do
        if (*eax_6 == esi)
            goto label_50e5f9
        
        i += 1
        eax_6 = &eax_6[5]
    while (i s< 0x20)

label_50e535:
eax_6 = &data_cc97b8

while (true)
    int32_t ecx_4 = *eax_6
    
    if (ecx_4 != 0)
        if (ecx_4 == 0xb)
            break
        
        eax_6 = &eax_6[4]
        
        if (eax_6 s< 0xcc99b8)
            continue
    
    eax_6 = &data_cc97b8
    
    while (true)
        int32_t ecx_5 = *eax_6
        
        if (ecx_5 != 0)
            if (ecx_5 == 0xc)
                break
            
            eax_6 = &eax_6[4]
            
            if (eax_6 s< 0xcc99b8)
                continue
        
        eax_6 = &data_cc97b8
        
        while (true)
            int32_t ecx_6 = *eax_6
            
            if (ecx_6 != 0)
                if (ecx_6 == 0xe)
                    break
                
                eax_6 = &eax_6[4]
                
                if (eax_6 s< 0xcc99b8)
                    continue
            
            eax_6 = &data_cc97b8
            
            while (true)
                int32_t ecx_7 = *eax_6
                
                if (ecx_7 != 0)
                    if (ecx_7 == 0xf)
                        break
                    
                    eax_6 = &eax_6[4]
                    
                    if (eax_6 s< 0xcc99b8)
                        continue
                
                eax_6 = &data_cc97b8
                
                while (true)
                    int32_t ecx_8 = *eax_6
                    
                    if (ecx_8 != 0)
                        if (ecx_8 == 0x11)
                            break
                        
                        eax_6 = &eax_6[4]
                        
                        if (eax_6 s< 0xcc99b8)
                            continue
                    
                    eax_6 = &data_cc97b8
                    
                    while (true)
                        int32_t ecx_9 = *eax_6
                        
                        if (ecx_9 == 0)
                            goto label_50e5f9
                        
                        if (ecx_9 == 0x12)
                            break
                        
                        eax_6 = &eax_6[4]
                        
                        if (eax_6 s>= 0xcc99b8)
                            goto label_50e5f9
                    
                    break
                
                break
            
            break
        
        break
    
    break

eax_6.b = 1
return eax_6
