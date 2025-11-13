// 函数: sub_68b0d0
// 地址: 0x68b0d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = *(arg1 + 0x24)

if (result == 1 || result == 2 || result == 3 || result == 4)
    if (*(arg1 + 0x38) == 4)
        return sub_68af60(arg1)
else if (result == 5)
    result = arg1[2].d
    void* ecx = data_147abf4
    
    if (result != 0)
        uint32_t edx_1 = zx.d(result.w)
        
        if (edx_1 u< *(ecx + 4))
            void* edi_2 = edx_1 * 0x64 + *ecx
            
            if (*(edi_2 + 0x60) == result && edi_2 != 0 && *(arg1 + 0x58) != 0)
                while (true)
                    int32_t* ecx_1 = arg1[5].d
                    
                    if (ecx_1 == 0)
                        break
                    
                    void* eax = ecx_1[1]
                    arg1[5].d = eax
                    
                    if (eax == 0)
                        *(arg1 + 0x54) = 0
                    else
                        *(eax + 8) = 0
                    
                    int32_t eax_1 = *ecx_1
                    *(arg1 + 0x58) -= 1
                    sub_64c080(ecx_1, 0xc)
                    int32_t* eax_2 = sub_64bfd0(0xc)
                    eax_2[3] += 1
                    
                    if (*eax_2 == 0)
                        sub_64be70(eax_2)
                    
                    int32_t* ecx_3 = *eax_2
                    *eax_2 = *ecx_3
                    ecx_3[2] = 0
                    *ecx_3 = eax_1
                    ecx_3[1] = 0
                    ecx_3[2] = *(edi_2 + 0x48)
                    result = *(edi_2 + 0x48)
                    
                    if (result == 0)
                        *(edi_2 + 0x44) = ecx_3
                    else
                        *(result + 4) = ecx_3
                    
                    *(edi_2 + 0x4c) += 1
                    *(edi_2 + 0x48) = ecx_3
                    
                    if (*(arg1 + 0x58) == 0)
                        return result
                
            label_68b2a7:
                sub_63b870(result, &data_801800, "mpHead != NULL", "C:\x\ax2017\Engine\xList.h", 
                    0x53, "XList<struct NetBuffer *>::GetHead")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
else if (result == 0 && *(arg1 + 0x58) != result)
    while (true)
        int32_t* edx_2 = arg1[5].d
        
        if (edx_2 == 0)
            break
        
        void* edx_3 = *edx_2
        (*(*data_147abf8 + 0x10))(arg1[2].d, edx_3 + 0xfdfc, *(edx_3 + 0xfde8) + edx_3, 
            *(edx_3 + 0xfdec))
        int32_t* ecx_5 = arg1[5].d
        void* eax_9 = ecx_5[1]
        arg1[5].d = eax_9
        
        if (eax_9 == 0)
            *(arg1 + 0x54) = 0
        else
            *(eax_9 + 8) = 0
        
        int32_t edi_4 = *ecx_5
        *(arg1 + 0x58) -= 1
        sub_64c080(ecx_5, 0xc)
        void* ecx_6 = data_147abf4
        int32_t var_c = edi_4
        result = sub_68b830(ecx_6 + 0x44, &var_c)
        
        if (*(arg1 + 0x58) == 0)
            return result
    
    goto label_68b2a7

return result
