// 函数: sub_724680
// 地址: 0x724680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

arg1[0x11b3] = 0
arg1[0x11b4] = 0
arg1[0x11c5] = 0
arg1[0x11c6] = 0
arg1[0x11d7] = 0
arg1[0x11d8] = 0
arg1[0x11e9] = 0
arg1[0x11ea] = 0
arg1[0x1201] = 0

if (sub_724580(arg1, 0) == 0)
    return 0

uint32_t eax_2 = zx.d(sub_722720(arg1))

if (eax_2 != 0xd9)
    void* ecx_1 = &arg1[0x11f1]
    
    while (true)
        void* eax_4
        void* ecx_4
        
        if (eax_2 != 0xda)
            if (eax_2 != 0xdc)
                if (sub_7232b0(arg1, eax_2) == 0)
                    return 0
            else
                uint32_t eax_23 = sub_7202a0(*arg1)
                eax_4 = sub_7202a0(*arg1)
                
                if (eax_23 != 4)
                    return 0
                
                if (eax_4 != *(*arg1 + 4))
                    return 0
            
            ecx_4 = ecx_1
        else
            if (sub_723b50(arg1) == 0)
                return 0
            
            if (sub_722830(arg1) == 0)
                return 0
            
            ecx_4 = ecx_1
            
            if (*ecx_4 == 0xff)
                while (true)
                    void* esi_1 = *arg1
                    
                    if (*(esi_1 + 0x10) == 0)
                    label_72476f:
                        
                        if (*(esi_1 + 0xa8) u>= *(esi_1 + 0xac))
                            break
                    else
                        eax_4, ecx_4 = (*(esi_1 + 0x18))(*(esi_1 + 0x1c))
                        
                        if (eax_4 != 0)
                            if (*(esi_1 + 0x20) == 0)
                                break
                            
                            goto label_72476f
                    
                    void* esi_2 = *arg1
                    void* eax_6 = *(esi_2 + 0xa8)
                    
                    if (eax_6 u>= *(esi_2 + 0xac))
                        if (*(esi_2 + 0x20) == 0)
                            continue
                        else
                            void* eax_9
                            eax_9, ecx_4 =
                                (*(esi_2 + 0x10))(*(esi_2 + 0x1c), esi_2 + 0x28, *(esi_2 + 0x24))
                            
                            if (eax_9 != 0)
                                *(esi_2 + 0xac) = eax_9 + 0x28 + esi_2
                                eax_6 = esi_2 + 0x28
                            else
                                *(esi_2 + 0x20) = eax_9
                                *(esi_2 + 0xac) = esi_2 + 0x29
                                eax_6 = esi_2 + 0x28
                                *eax_6 = 0
                    
                    ecx_4.b = *eax_6
                    *(esi_2 + 0xa8) = eax_6 + 1
                    
                    if (ecx_4.b == 0xff)
                        void* esi_3 = *arg1
                        char* eax_14 = *(esi_3 + 0xa8)
                        
                        if (eax_14 u< *(esi_3 + 0xac))
                            ecx_4.b = *eax_14
                            *(esi_3 + 0xa8) = &eax_14[1]
                            *ecx_1 = ecx_4.b
                        else if (*(esi_3 + 0x20) == 0)
                            *ecx_1 = 0
                        else
                            void* eax_17 =
                                (*(esi_3 + 0x10))(*(esi_3 + 0x1c), esi_3 + 0x28, *(esi_3 + 0x24))
                            char ecx_5
                            
                            if (eax_17 != 0)
                                *(esi_3 + 0xac) = eax_17 + 0x28 + esi_3
                                ecx_5 = *(esi_3 + 0x28)
                                *(esi_3 + 0xa8) = esi_3 + 0x29
                                *ecx_1 = ecx_5
                            else
                                *(esi_3 + 0x20) = eax_17
                                *(esi_3 + 0xac) = esi_3 + 0x29
                                *(esi_3 + 0x28) = 0
                                ecx_5 = *(esi_3 + 0x28)
                                *(esi_3 + 0xa8) = esi_3 + 0x29
                                *ecx_1 = ecx_5
                        
                        break
                
                ecx_4 = ecx_1
        
        eax_4.b = *ecx_4
        
        if (eax_4.b == 0xff)
            void* esi_5 = *arg1
            eax_4 = *(esi_5 + 0xa8)
            
            if (eax_4 u< *(esi_5 + 0xac))
            label_724903:
                ecx_4.b = *eax_4
                *(esi_5 + 0xa8) = eax_4 + 1
                
                if (ecx_4.b != 0xff)
                    eax_4.b = 0xff
                else
                    do
                        void* esi_6 = *arg1
                        void* ecx_10 = *(esi_6 + 0xa8)
                        
                        if (ecx_10 u>= *(esi_6 + 0xac))
                            if (*(esi_6 + 0x20) == 0)
                                eax_4.b = 0
                                break
                            
                            void* eax_33 =
                                (*(esi_6 + 0x10))(*(esi_6 + 0x1c), esi_6 + 0x28, *(esi_6 + 0x24))
                            
                            if (eax_33 != 0)
                                ecx_10 = esi_6 + 0x28
                                *(esi_6 + 0xac) = eax_33 + 0x28 + esi_6
                            else
                                *(esi_6 + 0x20) = eax_33
                                ecx_10 = esi_6 + 0x28
                                *(esi_6 + 0xac) = esi_6 + 0x29
                                *ecx_10 = 0
                        
                        eax_4.b = *ecx_10
                        *(esi_6 + 0xa8) = ecx_10 + 1
                    while (eax_4.b == 0xff)
            else
                if (*(esi_5 + 0x20) != 0)
                    void* eax_27
                    eax_27, ecx_4 =
                        (*(esi_5 + 0x10))(*(esi_5 + 0x1c), esi_5 + 0x28, *(esi_5 + 0x24))
                    
                    if (eax_27 != 0)
                        *(esi_5 + 0xac) = eax_27 + 0x28 + esi_5
                        eax_4 = esi_5 + 0x28
                    else
                        *(esi_5 + 0x20) = eax_27
                        *(esi_5 + 0xac) = esi_5 + 0x29
                        eax_4 = esi_5 + 0x28
                        *eax_4 = 0
                    
                    goto label_724903
                
                eax_4.b = 0xff
        else
            *ecx_4 = 0xff
        
        eax_2 = zx.d(eax_4.b)
        
        if (eax_2 == 0xd9)
            break

if (arg1[0x11f3] != 0)
    sub_723130(arg1)

return 1
