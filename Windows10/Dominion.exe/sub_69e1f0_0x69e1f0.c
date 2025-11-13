// 函数: sub_69e1f0
// 地址: 0x69e1f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = data_147abe8

if (edx != 0)
    void* edi_1 = edx
    
    if (*arg1 == 1)
        int32_t ebx_1 = arg1[2]
        int32_t eax_1 = arg1[1]
        int32_t ecx_1 = ebx_1 & 7
        int32_t var_8_1 = ecx_1
        
        if (eax_1 != 0xd)
            if (eax_1 != 0x71)
                if (eax_1 != 0x73)
                    if (eax_1 == 0x43)
                        int32_t eax_9 = ebx_1 & 0xa
                        int32_t var_c_1 = eax_9
                        ecx_1.b = eax_9 != 0
                        eax_9.b = (ebx_1.b & 1) != 0
                        void* eax_10 = data_cf65b8
                        
                        if ((eax_9.b & ecx_1.b) != 0 && *(eax_10 + 0x28) != 0)
                            sub_6cce80()
                            edx = data_147abe8
                        else if (var_c_1 != 0 && *(eax_10 + 0x28) != 0)
                            int32_t* ecx_6 = data_147d1b0
                            
                            if (ecx_6 != 0)
                                (*(*ecx_6 + 0x24))(1)
                                data_147d2b4 = data_800248
                                edx = data_147abe8
                else if (ebx_1 == 4)
                    PostMessageA(data_147b084, 0x10, 0, 0)
                    BOOL eax_7
                    eax_7.b = 1
                    return eax_7
            else if (ecx_1 == 0 && *(data_cf65b8 + 0x28) != ecx_1.b)
                int32_t edx_1 = *(edi_1 + 0x1c)
                int32_t edx_2 = edx_1 | 0x200
                
                if (((edx_1 u>> 9).b & 1) != 0)
                    edx_2 = edx_1 & 0xfffffdff
                
                int32_t eax_6
                eax_6.b = 1
                *(edi_1 + 0x1c) = edx_2
                return eax_6
        else if (ebx_1 == 4)
            void* ecx_2 = data_cf65b8
            
            if (*(ecx_2 + 0x25) == 0)
                eax_1.b = *(ecx_2 + 0x22) == 0
                *(ecx_2 + 0x22) = eax_1.b
                (*(*data_147b070 + 0xb4))()
                return 1
        
        int32_t ecx_7 = arg1[1]
        
        if (ecx_7 == 0x44)
            if (((arg1[2]).b & 6) != 6)
                goto label_69e3d0
            
            *(edx + 0x20) = *(edx + 0x20) == 0
            return true
        
        if (ecx_7 == 0xbe)
            if (((arg1[2]).b & 6) != 6)
                goto label_69e3d0
            
            int32_t* eax_16 = data_147b06c
            *eax_16 += 1
            eax_16.b = 1
            return eax_16
        
        if (ecx_7 != 0xbc)
        label_69e3d0:
            
            if (ecx_7 != 0x73)
                if (ecx_7 != 0x72)
                    if (ecx_7 == 0x46 && (arg1[2].b & 0xa) != 0)
                        goto label_69e40e
                else if (var_8_1 == 0)
                label_69e40e:
                    
                    if (*(edx + 0x20) != 0)
                        int32_t edx_5 = *(edi_1 + 0x1c)
                        int32_t edx_6 = edx_5 | 0x20
                        
                        if (((edx_5 u>> 5).b & 1) != 0)
                            edx_6 = edx_5 & 0xffffffdf
                        
                        int32_t eax_25
                        eax_25.b = 1
                        *(edi_1 + 0x1c) = edx_6
                        return eax_25
            else if (var_8_1 == 0 && *(edx + 0x20) != 0)
                int32_t edx_3 = *(edi_1 + 0x1c)
                int32_t edx_4 = edx_3 | 0x40
                
                if (((edx_3 u>> 6).b & 1) != 0)
                    edx_4 = edx_3 & 0xffffffbf
                
                int32_t eax_23
                eax_23.b = 1
                *(edi_1 + 0x1c) = edx_4
                return eax_23
        else
            char ecx_8 = (arg1[2]).b
            
            if ((ecx_8 & 6) == 6)
                if ((ecx_8 & 1) != 0)
                    *data_147b06c = 0
                    int32_t* eax_19
                    eax_19.b = 1
                    return eax_19
                
                int32_t* ecx_9 = data_147b06c
                int32_t temp0 = *ecx_9
                *ecx_9 -= 1
                int32_t eax_20 = *ecx_9
                
                if (temp0 - 1 s< 0)
                    *ecx_9 = 0
                    int32_t eax_21
                    eax_21.b = 1
                    return 1
                
                if (eax_20 s> 0x2710)
                    eax_20 = 0x2710
                
                *ecx_9 = eax_20
                eax_20.b = 1
                return eax_20
    
    if (sub_6cbe10(arg1) != 0)
        return 1
    
    char eax = (*(*data_cf65b8 + 0x28))(arg1)
    
    if (eax != 0)
        return eax
    
    sub_6939d0(&data_1777480, arg1)

return 0
