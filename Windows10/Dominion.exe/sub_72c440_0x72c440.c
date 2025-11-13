// 函数: sub_72c440
// 地址: 0x72c440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t* var_c = arg2
void* ecx = *(arg3 + 0xa8)
void* eax = *(arg3 + 0xac)

if (ecx u< eax)
label_72c4ac:
    arg2.b = *ecx
    void* ecx_1 = ecx + 1
    void* var_14_1 = arg3 + 0xa8
    *(arg3 + 0xa8) = ecx_1
    
    if (arg2.b == 0x47)
        if (ecx_1 u< eax)
        label_72c508:
            arg2.b = *ecx_1
            void* ecx_2 = ecx_1 + 1
            void* var_14_2 = ecx_2
            *(arg3 + 0xa8) = ecx_2
            
            if (arg2.b == 0x49)
                if (ecx_2 u< eax)
                label_72c573:
                    arg2.b = *ecx_2
                    void* ecx_3 = ecx_2 + 1
                    void** var_18_2 = arg3 + 0xa8
                    *(arg3 + 0xa8) = ecx_3
                    
                    if (arg2.b == 0x46)
                        if (ecx_3 u< eax)
                        label_72c5cf:
                            arg2.b = *ecx_3
                            void* ecx_4 = ecx_3 + 1
                            void* var_18_3 = arg3 + 0xa8
                            *(arg3 + 0xa8) = ecx_4
                            
                            if (arg2.b == 0x38)
                                if (ecx_4 u< eax)
                                label_72c62b:
                                    arg2.b = *ecx_4
                                    void* ecx_5 = ecx_4 + 1
                                    *(arg3 + 0xa8) = ecx_5
                                    
                                    if (arg2.b == 0x37 || arg2.b == 0x39)
                                        if (ecx_5 u< eax)
                                        label_72c68f:
                                            eax.b = *ecx_5
                                            *(arg3 + 0xa8) = ecx_5 + 1
                                            
                                            if (eax.b == 0x61)
                                                *var_c = sub_7203e0(arg3)
                                                uint32_t eax_26
                                                void* ecx_10
                                                eax_26, ecx_10 = sub_7203e0(arg3)
                                                uint32_t* edx_1 = var_c
                                                edx_1[1] = eax_26
                                                char* eax_27 = *(arg3 + 0xa8)
                                                
                                                if (eax_27 u< *(arg3 + 0xac))
                                                    ecx_10.b = *eax_27
                                                    *(arg3 + 0xa8) = &eax_27[1]
                                                else if (*(arg3 + 0x20) == 0)
                                                    ecx_10.b = 0
                                                else
                                                    void* eax_31 = (*(arg3 + 0x10))(*(arg3 + 0x1c), 
                                                        arg3 + 0x28, *(arg3 + 0x24))
                                                    
                                                    if (eax_31 != 0)
                                                        edx_1 = var_c
                                                        *(arg3 + 0xa8) = arg3 + 0x28
                                                        *(arg3 + 0xac) = arg3 + 0x28 + eax_31
                                                        char* eax_38 = *(arg3 + 0xa8)
                                                        ecx_10.b = *eax_38
                                                        *(arg3 + 0xa8) = &eax_38[1]
                                                    else
                                                        edx_1 = var_c
                                                        *(arg3 + 0x20) = eax_31
                                                        *(arg3 + 0xa8) = arg3 + 0x28
                                                        *(arg3 + 0xac) = arg3 + 0x29
                                                        *(arg3 + 0x28) = 0
                                                        char* eax_33 = *(arg3 + 0xa8)
                                                        ecx_10.b = *eax_33
                                                        *(arg3 + 0xa8) = &eax_33[1]
                                                
                                                edx_1[5] = zx.d(ecx_10.b)
                                                char* eax_41 = *(arg3 + 0xa8)
                                                
                                                if (eax_41 u< *(arg3 + 0xac))
                                                    ecx_10.b = *eax_41
                                                    *(arg3 + 0xa8) = &eax_41[1]
                                                else if (*(arg3 + 0x20) == 0)
                                                    ecx_10.b = 0
                                                else
                                                    void* eax_45 = (*(arg3 + 0x10))(*(arg3 + 0x1c), 
                                                        arg3 + 0x28, *(arg3 + 0x24))
                                                    
                                                    if (eax_45 != 0)
                                                        edx_1 = var_c
                                                        *(arg3 + 0xa8) = arg3 + 0x28
                                                        *(arg3 + 0xac) = arg3 + 0x28 + eax_45
                                                        char* eax_52 = *(arg3 + 0xa8)
                                                        ecx_10.b = *eax_52
                                                        *(arg3 + 0xa8) = &eax_52[1]
                                                    else
                                                        edx_1 = var_c
                                                        *(arg3 + 0x20) = eax_45
                                                        *(arg3 + 0xa8) = arg3 + 0x28
                                                        *(arg3 + 0xac) = arg3 + 0x29
                                                        *(arg3 + 0x28) = 0
                                                        char* eax_47 = *(arg3 + 0xa8)
                                                        ecx_10.b = *eax_47
                                                        *(arg3 + 0xa8) = &eax_47[1]
                                                
                                                edx_1[6] = zx.d(ecx_10.b)
                                                char* eax_55 = *(arg3 + 0xa8)
                                                
                                                if (eax_55 u< *(arg3 + 0xac))
                                                    ecx_10.b = *eax_55
                                                    *(arg3 + 0xa8) = &eax_55[1]
                                                else if (*(arg3 + 0x20) == 0)
                                                    ecx_10.b = 0
                                                else
                                                    void* eax_59 = (*(arg3 + 0x10))(*(arg3 + 0x1c), 
                                                        arg3 + 0x28, *(arg3 + 0x24))
                                                    
                                                    if (eax_59 != 0)
                                                        edx_1 = var_c
                                                        *(arg3 + 0xa8) = arg3 + 0x28
                                                        *(arg3 + 0xac) = arg3 + 0x28 + eax_59
                                                        char* eax_66 = *(arg3 + 0xa8)
                                                        ecx_10.b = *eax_66
                                                        *(arg3 + 0xa8) = &eax_66[1]
                                                    else
                                                        edx_1 = var_c
                                                        *(arg3 + 0x20) = eax_59
                                                        *(arg3 + 0xa8) = arg3 + 0x28
                                                        *(arg3 + 0xac) = arg3 + 0x29
                                                        *(arg3 + 0x28) = 0
                                                        char* eax_61 = *(arg3 + 0xa8)
                                                        ecx_10.b = *eax_61
                                                        *(arg3 + 0xa8) = &eax_61[1]
                                                
                                                edx_1[7] = zx.d(ecx_10.b)
                                                edx_1[8] = 0xffffffff
                                                
                                                if (arg4 != 0)
                                                    *arg4 = 4
                                                
                                                char ecx_11 = (edx_1[5]).b
                                                
                                                if (ecx_11 s< 0)
                                                    char* eax_70 = 2 << (ecx_11 & 7)
                                                    sub_72c280(eax_70, &edx_1[0xa], arg3, eax_70, 
                                                        0xffffffff)
                                                
                                                return 1
                                        else if (*(arg3 + 0x20) != 0)
                                            void* eax_23 = (*(arg3 + 0x10))(*(arg3 + 0x1c), 
                                                arg3 + 0x28, *(arg3 + 0x24))
                                            ecx_5 = arg3 + 0x28
                                            *(arg3 + 0xa8) = ecx_5
                                            
                                            if (eax_23 != 0)
                                                *(arg3 + 0xac) = eax_23 + 0x28 + arg3
                                            else
                                                *(arg3 + 0x20) = eax_23
                                                *(arg3 + 0xac) = arg3 + 0x29
                                                *ecx_5 = 0
                                            
                                            goto label_72c68f
                                else if (*(arg3 + 0x20) != 0)
                                    void* eax_19
                                    eax_19, arg2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, 
                                        *(arg3 + 0x24))
                                    ecx_4 = arg3 + 0x28
                                    *(arg3 + 0xa8) = ecx_4
                                    
                                    if (eax_19 != 0)
                                        eax = eax_19 + 0x28 + arg3
                                        *(arg3 + 0xac) = eax
                                    else
                                        *(arg3 + 0x20) = eax_19
                                        eax = arg3 + 0x29
                                        *(arg3 + 0xac) = eax
                                        *ecx_4 = 0
                                    
                                    goto label_72c62b
                        else if (*(arg3 + 0x20) != 0)
                            void* eax_15
                            eax_15, arg2 =
                                (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                            ecx_3 = arg3 + 0x28
                            *(arg3 + 0xa8) = ecx_3
                            
                            if (eax_15 != 0)
                                eax = eax_15 + 0x28 + arg3
                                *(arg3 + 0xac) = eax
                            else
                                *(arg3 + 0x20) = eax_15
                                eax = arg3 + 0x29
                                *(arg3 + 0xac) = eax
                                *ecx_3 = 0
                            
                            goto label_72c5cf
                else if (*(arg3 + 0x20) != 0)
                    void* eax_11
                    eax_11, arg2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                    ecx_2 = arg3 + 0x28
                    *(arg3 + 0xa8) = ecx_2
                    
                    if (eax_11 != 0)
                        eax = eax_11 + 0x28 + arg3
                        *(arg3 + 0xac) = eax
                    else
                        *(arg3 + 0x20) = eax_11
                        eax = arg3 + 0x29
                        *(arg3 + 0xac) = eax
                        *ecx_2 = 0
                    
                    goto label_72c573
        else if (*(arg3 + 0x20) != 0)
            void* eax_7
            eax_7, arg2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
            ecx_1 = arg3 + 0x28
            *(arg3 + 0xa8) = ecx_1
            
            if (eax_7 != 0)
                eax = eax_7 + 0x28 + arg3
                *(arg3 + 0xac) = eax
            else
                *(arg3 + 0x20) = eax_7
                eax = arg3 + 0x29
                *(arg3 + 0xac) = eax
                *ecx_1 = 0
            
            goto label_72c508
else if (*(arg3 + 0x20) != 0)
    void* eax_3
    eax_3, arg2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
    ecx = arg3 + 0x28
    *(arg3 + 0xa8) = ecx
    
    if (eax_3 != 0)
        eax = eax_3 + 0x28 + arg3
        *(arg3 + 0xac) = eax
    else
        *(arg3 + 0x20) = eax_3
        eax = arg3 + 0x29
        *(arg3 + 0xac) = eax
        *ecx = 0
    
    goto label_72c4ac

return 0
