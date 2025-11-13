// 函数: sub_716100
// 地址: 0x716100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg2
int32_t edi = *(arg1 + 0x10)
int32_t eax = ebx[5]
int32_t* esi = *(eax + (edi << 2))
void* edx = esi[1]

if (*(edx + 0x6c) != 0)
    eax = arg4
    
    if (arg5 != 1 || eax != 0)
        char* ecx_4
        
        if (**(arg1 + 0xc) f<= arg3)
            int32_t edx_4 = *(arg1 + 8)
            int32_t ecx_5
            
            if (arg3 f< *(*(arg1 + 0xc) + (edx_4 << 2) - 4))
                int32_t edx_5 = edx_4 - 2
                
                if (edx_4 != 2)
                    int32_t eax_10 = edx_5 s>> 1
                    int32_t esi_1 = 0
                    
                    while (true)
                        float temp1_1 = *(*(arg1 + 0xc) + (eax_10 << 2) + 4)
                        arg3 - temp1_1
                        ecx_5 = eax_10 + 1
                        
                        if (arg3 < temp1_1)
                            ecx_5 = esi_1
                        
                        if (arg3 < temp1_1)
                            edx_5 = eax_10
                        
                        esi_1 = ecx_5
                        
                        if (ecx_5 == edx_5)
                            break
                        
                        eax_10 = (ecx_5 + edx_5) s>> 1
                    
                    ebx = arg2
                else
                    ecx_5 = 0
            else
                ecx_5 = edx_4 - 1
            
            ecx_4 = *(*(arg1 + 0x14) + (ecx_5 << 2))
            goto label_716234
        
        if (eax == 0 || eax == 1)
            ecx_4 = *(*esi + 0xc)
        label_716234:
            
            if (ecx_4 == 0 || edi == 0xffffffff)
                eax = 0
            else
                int32_t eax_14 = ebx[0xd]
                
                if (eax_14 != 0)
                    eax = sub_752840(eax_14, edi, eax_14, ecx_4)
                
                if (eax_14 == 0 || eax == 0)
                    int32_t eax_16 = *(*ebx + 0x38)
                    
                    if (eax_16 == 0)
                        eax = 0
                    else
                        eax = sub_752840(eax_16, edi, eax_16, ecx_4)
                        
                        if (eax == 0)
                            eax = 0
            
            if (eax != esi[7])
                esi[7] = eax
                eax = *(*(edx + 4) + 0x48)
                esi[9] = 0
                esi[0xb] = eax
    else
        char* ecx_1 = *(*esi + 0xc)
        
        if (ecx_1 == 0 || edi == 0xffffffff)
            eax = 0
        else
            int32_t eax_2 = ebx[0xd]
            
            if (eax_2 != 0)
                eax = sub_752840(eax_2, edi, eax_2, ecx_1)
            
            if (eax_2 == 0 || eax == 0)
                int32_t eax_4 = *(*ebx + 0x38)
                
                if (eax_4 == 0)
                    eax = 0
                else
                    eax = sub_752840(eax_4, edi, eax_4, ecx_1)
                    
                    if (eax == 0)
                        eax = 0
        
        if (eax != esi[7])
            esi[7] = eax
            int32_t eax_6 = *(*(edx + 4) + 0x48)
            esi[9] = 0
            esi[0xb] = eax_6
            return eax_6

return eax
