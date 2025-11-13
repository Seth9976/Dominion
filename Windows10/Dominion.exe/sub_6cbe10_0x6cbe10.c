// 函数: sub_6cbe10
// 地址: 0x6cbe10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
void* esi = data_147d19c
void* eax

if (esi != 0)
    eax = *arg1
    int32_t eax_2
    
    if (eax == 1)
        eax = arg1[1]
        void* edi_1 = data_147abe8
        
        if (eax == 0x50 && (arg1[2].b & 0xa) != 0 && *(edi_1 + 0x20) != 0)
            int32_t ecx = *(edi_1 + 0x1c)
            int32_t ecx_1 = ecx | 0x80
            uint8_t edx_2 = (ecx u>> 7).b & 1
            
            if (edx_2 != 0)
                ecx_1 = ecx & 0xffffff7f
            
            *(edi_1 + 0x1c) = ecx_1
            bool cond:0_1 = *(esi + 0xbbaa8c) != 0
            *(esi + 0xbbaa94) = edx_2 ^ 1
            
            if (cond:0_1)
                eax_2.b = 1
                return eax_2
            
            *(esi + 0xbbaa8e) = 1
            eax_2.b = 1
            return eax_2
        
        if (*(esi + 0xbbaa94) != 0 && *(edi_1 + 0x20) != 0)
            switch (eax)
                case 0x1b
                    *(esi + 0xbbaab0) = 0
                    eax.b = 1
                    *(esi + 0xbbaa9c) = 0
                    *(esi + 0xbbaaa8) = 0
                    return eax
                case 0x24
                    eax_2 = *(esi + 0xbbaa9c)
                    
                    if (eax_2 s< 0)
                        eax_2.b = 1
                        return eax_2
                    
                    *(esi + 0xbbaab4) = *(esi + (eax_2 << 2) + 0xbb6c04)
                    int32_t eax_12
                    eax_12.b = 1
                    *(esi + 0xbbaab0) = 2
                    *(esi + 0xbbaa9c) = 0
                    *(esi + 0xbbaaa8) = 0
                    return eax_12
                case 0x25
                    int32_t edi_2 = *(esi + 0xbbaab4)
                    int32_t i = 0
                    
                    if (*(esi + 0xbbaa84) s> 0)
                        char* eax_10 = esi + &data_b9b69c
                        
                        do
                            *eax_10 = 0
                            eax_10 = &eax_10[0x1c]
                            i += 1
                        while (i s< *(esi + 0xbbaa84))
                    
                    *(esi + 0xbbaab0) = 2
                    *(esi + 0xbbaab4) = edi_2
                    sub_6caab0(0)
                    void* edx_5 = data_147d19c
                    int32_t eax_11 = 0
                    int32_t esi_1 = *(edx_5 + 0xbbaa84)
                    
                    if (esi_1 s> 0)
                        char* ecx_9 = edx_5 + &data_b9b69c
                        
                        do
                            if (*ecx_9 != 0 && eax_11 != edi_2)
                                *(edx_5 + 0xbbaab4) = eax_11
                                eax_11.b = 1
                                *(edx_5 + 0xbbaab0) = 1
                                return eax_11
                            
                            eax_11 += 1
                            ecx_9 = &ecx_9[0x1c]
                        while (eax_11 s< esi_1)
                    
                    *(edx_5 + 0xbbaab0) = 0
                    eax_11.b = 1
                    return eax_11
                case 0x26
                    eax_2 = *(esi + 0xbbaa9c)
                    
                    if (eax_2 s>= 0)
                        *(esi + 0xbbaa9c) = eax_2 - 1
                        
                        if (eax_2 - 1 s>= 0 && eax_2 - 1 s< *(esi + 0xbbaaa8))
                            *(esi + 0xbbaaa8) = eax_2 - 1
                            eax_2.b = 1
                            return eax_2
                    
                    eax_2.b = 1
                    return eax_2
                case 0x27
                    eax_2 = *(esi + 0xbbaa9c)
                    
                    if (eax_2 s< 0)
                        eax_2.b = 1
                        return eax_2
                    
                    *(esi + 0xbbaab4) = *(esi + (eax_2 << 2) + 0xbb6c04)
                    int32_t eax_13
                    eax_13.b = 1
                    *(esi + 0xbbaab0) = 1
                    *(esi + 0xbbaa9c) = 0
                    *(esi + 0xbbaaa8) = 0
                    return eax_13
                case 0x28
                    int32_t ecx_7 = *(esi + 0xbbaa9c)
                    
                    if (ecx_7 s< *(esi + 0xbbaaac) - 1)
                        *(esi + 0xbbaa9c) = ecx_7 + 1
                        eax_2 = ecx_7 + 1 - *(esi + 0xbbaaa4) + 1
                        
                        if (eax_2 s> *(esi + 0xbbaaa8))
                            *(esi + 0xbbaaa8) = eax_2
                            eax_2.b = 1
                            return eax_2
                    
                    eax_2.b = 1
                    return eax_2
                case 0x43
                    *(esi + 0xbbaa8e) = 1
                    eax.b = 1
                    return eax
                case 0x48
                    eax.b = *(esi + 0xbbaa8d) == 0
                    *(esi + 0xbbaa8d) = eax.b
                    eax.b = 1
                    return eax
                case 0x53
                    int32_t eax_6
                    eax_6.b = 1
                    *(esi + 0xbbaa90) = mods.dp.d(sx.q(*(esi + 0xbbaa90) + 1), 5)
                    return eax_6
    else if (eax == 0 && *(esi + 0xbbaa94) != eax.b && *(data_147abe8 + 0x20) != 0)
        eax = arg1[1]
        
        if (eax == 0x5b)
            eax_2 = *(esi + 0xbbaa98)
            
            if (eax_2 s<= 0)
                eax_2.b = 1
                return eax_2
            
            *(esi + 0xbbaa98) = eax_2 - 1
            int32_t eax_14
            eax_14.b = 1
            return eax_14
        
        if (eax == 0x5d)
            eax_2 = *(esi + 0xbbaa98)
            
            if (eax_2 s< 0x28)
                *(esi + 0xbbaa98) = eax_2 + 1
            
            eax_2.b = 1
            return eax_2

eax.b = 0
return eax
