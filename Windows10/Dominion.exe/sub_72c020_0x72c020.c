// 函数: sub_72c020
// 地址: 0x72c020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = *(arg1 + 0xa8)
void* eax = *(arg1 + 0xac)

if (ecx u< eax)
label_72c089:
    char edx = *ecx
    void* ecx_1 = ecx + 1
    *(arg1 + 0xa8) = ecx_1
    
    if (edx == 0x47)
        if (ecx_1 u< eax)
        label_72c0e8:
            edx = *ecx_1
            void* ecx_2 = ecx_1 + 1
            void** var_10_2 = arg1 + 0xa8
            *(arg1 + 0xa8) = ecx_2
            
            if (edx == 0x49)
                if (ecx_2 u< eax)
                label_72c144:
                    edx = *ecx_2
                    void* ecx_3 = ecx_2 + 1
                    void** var_10_3 = arg1 + 0xa8
                    *(arg1 + 0xa8) = ecx_3
                    
                    if (edx == 0x46)
                        if (ecx_3 u< eax)
                        label_72c1a0:
                            edx = *ecx_3
                            void* ecx_4 = ecx_3 + 1
                            void** var_10_4 = arg1 + 0xa8
                            *(arg1 + 0xa8) = ecx_4
                            
                            if (edx == 0x38)
                                if (ecx_4 u< eax)
                                label_72c1fc:
                                    edx = *ecx_4
                                    void* ecx_5 = ecx_4 + 1
                                    *(arg1 + 0xa8) = ecx_5
                                    
                                    if (edx == 0x39 || edx == 0x37)
                                        if (ecx_5 u< eax)
                                        label_72c258:
                                            eax.b = *ecx_5
                                            *(arg1 + 0xa8) = ecx_5 + 1
                                            
                                            if (eax.b == 0x61)
                                                return 1
                                        else if (*(arg1 + 0x20) != 0)
                                            void* eax_23 = (*(arg1 + 0x10))(*(arg1 + 0x1c), 
                                                arg1 + 0x28, *(arg1 + 0x24))
                                            ecx_5 = arg1 + 0x28
                                            *(arg1 + 0xa8) = ecx_5
                                            
                                            if (eax_23 != 0)
                                                *(arg1 + 0xac) = eax_23 + 0x28 + arg1
                                            else
                                                *(arg1 + 0x20) = eax_23
                                                *(arg1 + 0xac) = arg1 + 0x29
                                                *ecx_5 = 0
                                            
                                            goto label_72c258
                                else if (*(arg1 + 0x20) != 0)
                                    void* eax_19 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, 
                                        *(arg1 + 0x24))
                                    ecx_4 = arg1 + 0x28
                                    *(arg1 + 0xa8) = ecx_4
                                    
                                    if (eax_19 != 0)
                                        eax = eax_19 + 0x28 + arg1
                                        *(arg1 + 0xac) = eax
                                    else
                                        *(arg1 + 0x20) = eax_19
                                        eax = arg1 + 0x29
                                        *(arg1 + 0xac) = eax
                                        *ecx_4 = 0
                                    
                                    goto label_72c1fc
                        else if (*(arg1 + 0x20) != 0)
                            void* eax_15 =
                                (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                            ecx_3 = arg1 + 0x28
                            *(arg1 + 0xa8) = ecx_3
                            
                            if (eax_15 != 0)
                                eax = eax_15 + 0x28 + arg1
                                *(arg1 + 0xac) = eax
                            else
                                *(arg1 + 0x20) = eax_15
                                eax = arg1 + 0x29
                                *(arg1 + 0xac) = eax
                                *ecx_3 = 0
                            
                            goto label_72c1a0
                else if (*(arg1 + 0x20) != 0)
                    void* eax_11 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                    ecx_2 = arg1 + 0x28
                    *(arg1 + 0xa8) = ecx_2
                    
                    if (eax_11 != 0)
                        eax = eax_11 + 0x28 + arg1
                        *(arg1 + 0xac) = eax
                    else
                        *(arg1 + 0x20) = eax_11
                        eax = arg1 + 0x29
                        *(arg1 + 0xac) = eax
                        *ecx_2 = 0
                    
                    goto label_72c144
        else if (*(arg1 + 0x20) != 0)
            void* eax_7 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
            ecx_1 = arg1 + 0x28
            *(arg1 + 0xa8) = ecx_1
            
            if (eax_7 != 0)
                eax = eax_7 + 0x28 + arg1
                *(arg1 + 0xac) = eax
            else
                *(arg1 + 0x20) = eax_7
                eax = arg1 + 0x29
                *(arg1 + 0xac) = eax
                *ecx_1 = 0
            
            goto label_72c0e8
else if (*(arg1 + 0x20) != 0)
    void* eax_3 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
    ecx = arg1 + 0x28
    *(arg1 + 0xa8) = ecx
    
    if (eax_3 != 0)
        eax = eax_3 + 0x28 + arg1
        *(arg1 + 0xac) = eax
    else
        *(arg1 + 0x20) = eax_3
        eax = arg1 + 0x29
        *(arg1 + 0xac) = eax
        *ecx = 0
    
    goto label_72c089

return 0
