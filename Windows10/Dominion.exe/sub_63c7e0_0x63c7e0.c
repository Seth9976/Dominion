// 函数: sub_63c7e0
// 地址: 0x63c7e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edx = arg4
int32_t* eax = arg5
int32_t* ebx = arg7
char* esi = arg2
*edx = esi
*ebx = eax
char* ecx = *edx

if (ecx != arg3)
    char* edi_1 = ecx
    
    if (eax != arg6)
        int16_t* esi_1 = arg1
        
        while (true)
            uint32_t ecx_1 = zx.d(*edi_1)
            
            if (*esi_1 u> 1)
                if (ecx_1 - 0x80 u> 0x3f)
                    return 2
                
                *edx = &edi_1[1]
                **ebx = (ecx_1.w & 0x3f) | *esi_1
                *ebx += 2
                *esi_1 = 1
            label_63c9b8:
                ecx = *edx
                
                if (ecx != arg3)
                    eax = arg6
                    edi_1 = ecx
                    
                    if (*ebx != eax)
                        continue
                
                esi = arg2
                break
            
            uint32_t eax_4
            int32_t eax_18
            void* esi_2
            
            if (ecx_1 u>= 0x80)
                if (ecx_1 u< 0xc0)
                    *edx = &edi_1[1]
                    return 2
                
                int32_t var_10_1
                int32_t var_8_1
                int32_t* eax_5
                uint32_t edx_1
                int32_t esi_3
                
                if (ecx_1 u>= 0xe0)
                    if (ecx_1 u< 0xf0)
                        edx_1 = ecx_1 & 0xf
                        eax_5 = 2
                        goto label_63c883
                    
                    var_10_1 = 1
                    esi_3 = 1
                    
                    if (ecx_1 u>= 0xf8)
                        edx_1 = ecx_1 & 3
                        var_8_1 = 1
                        eax_5 = sbb.d(eax, eax, ecx_1 u< 0xfc) + 5
                    else
                        edx_1 = ecx_1 & 7
                        var_8_1 = 1
                        eax_5 = 3
                else
                    eax_5 = 1
                    edx_1 = ecx_1 & 0x1f
                label_63c883:
                    var_8_1 = 0
                    esi_3 = 0
                    var_10_1 = 0
                
                arg5 = eax_5
                arg7 = eax_5
                arg2 = edi_1
                
                if (arg3 - edi_1 s< eax_5 - esi_3 + 1)
                    eax_18.b = arg2 == edi_1
                    return eax_18
                
                esi_2 = &edi_1[1]
                *arg4 = esi_2
                
                if (var_8_1 u< arg5)
                    void* eax_13
                    
                    do
                        uint32_t ecx_7 = zx.d(*esi_2)
                        
                        if (ecx_7 - 0x80 u> 0x3f)
                            return 2
                        
                        eax_13 = arg5 - 1
                        edx_1 = edx_1 << 6 | (ecx_7 & 0x3f)
                        arg5 = eax_13
                        esi_2 += 1
                        *arg4 = esi_2
                    while (esi_3 s< eax_13)
                
                eax_4 = edx_1 << 6
                
                if (var_10_1 u<= 0)
                    eax_4 = edx_1
                
                if (eax_4 u> 0x10ffff)
                    return 2
                
                edx = arg4
            else
                esi_2 = &edi_1[1]
                arg2 = edi_1
                *edx = esi_2
                eax_4 = ecx_1
                arg7 = nullptr
            
            if (eax_4 u<= 0xffff)
                if (arg7 u>= 3)
                    if (esi_2 == arg3)
                        *edx = edi_1
                        eax_18.b = arg2 == edi_1
                        return eax_18
                    
                    uint32_t edi_2 = zx.d(*esi_2)
                    *arg4 = esi_2 + 1
                    
                    if (edi_2 - 0x80 u> 0x3f)
                        return 2
                    
                    eax_4 |= edi_2 & 0x3f
                
                esi_1 = arg1
                
                if (*esi_1 == 0)
                    *esi_1 = 1
                
                **ebx = eax_4.w
                *ebx += 2
            else
                esi_1 = arg1
                **ebx = ((eax_4 u>> 0xa).w - 0x40) | 0xd800
                *ebx += 2
                *esi_1 = (eax_4.w & 0x3ff) | 0xdc00
            
            edx = arg4
            goto label_63c9b8

int32_t eax_17
eax_17.b = esi == ecx
return eax_17
