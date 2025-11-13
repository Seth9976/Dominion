// 函数: sub_72cd60
// 地址: 0x72cd60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg2
int32_t var_1c = 0
void* esi = arg3
void* var_10 = esi
void* edi_1

if (ebx[2] != 0)
    edi_1 = &ebx[1]
    int32_t ecx_2 = *ebx * *edi_1
    char edx = (ebx[9]).b
    int32_t var_18_1 = ecx_2
    
    if ((edx & 0x1c) == 0xc)
        goto label_72ce3b
    
    if ((edx & 0x1c) == 8)
        edi_1 = &ebx[1]
    label_72ce3b:
        char* edx_1 = nullptr
        
        if (ecx_2 s> 0)
            do
                if (edx_1[ebx[4]] != 0)
                    *(ebx[2] + (edx_1 << 2)) = *(ebx[3] + (edx_1 << 2))
                    ecx_2 = var_18_1
                
                edx_1 = &edx_1[1]
            while (edx_1 s< ecx_2)
            
            edi_1 = &ebx[1]
    
    memcpy(ebx[3], ebx[2], (*ebx * ebx[1]) << 2)
    goto label_72ce84

void* var_30 = arg3

if (sub_72c440(arg1, arg2, arg3, arg4) != 0)
    ebx[2] = malloc((*ebx * ebx[1]) << 2)
    ebx[3] = malloc((*ebx * ebx[1]) << 2)
    int32_t eax_11 = malloc(*ebx * ebx[1])
    int32_t ecx = ebx[2]
    ebx[4] = eax_11
    
    if (ecx != 0)
        edi_1 = &ebx[1]
        memset(ecx, 0, (*ebx * *edi_1) << 2)
        memset(ebx[3], 0, (*ebx * *edi_1) << 2)
        memset(ebx[4], 0, *ebx * *edi_1)
        var_1c = 1
    label_72ce84:
        memset(ebx[4], 0, *edi_1 * *ebx)
        int32_t* edi_2 = esi + 0xa8
        
        while (true)
            void* ecx_4 = *(esi + 0xac)
            void* ebx_1 = esi + 0x20
            char* eax_30 = *edi_2
            void* eax_31
            void* edx_2
            
            if (eax_30 u>= ecx_4)
                if (*ebx_1 == 0)
                    break
                
                int32_t eax_34
                eax_34, edx_2 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                
                if (eax_34 != 0)
                    ecx_4 = esi + 0x28 + eax_34
                    *(esi + 0xac) = ecx_4
                else
                    ecx_4 = esi + 0x29
                    *ebx_1 = eax_34
                    *(esi + 0xac) = ecx_4
                    *(esi + 0x28) = eax_34.b
                
                edx_2.b = *(esi + 0x28)
                eax_31 = esi + 0x29
            else
                edx_2.b = *eax_30
                eax_31 = &eax_30[1]
            
            void* var_c_1 = eax_31
            void* var_14_1 = esi + 0xa8
            *(esi + 0xa8) = eax_31
            esi = var_10
            edi_2 = esi + 0xa8
            
            if (edx_2.b != 0x21)
                if (edx_2.b == 0x2c)
                    uint32_t eax_84 = sub_7203e0(esi)
                    uint32_t eax_85 = sub_7203e0(esi)
                    uint32_t eax_86 = sub_7203e0(esi)
                    uint32_t eax_87 = sub_7203e0(esi)
                    
                    if (eax_84 + eax_86 s<= *ebx && eax_87 + eax_85 s<= ebx[1])
                        int32_t edi_5 = *ebx << 2
                        ebx[0x2214] = edi_5
                        uint32_t edx_10 = eax_84 << 2
                        int32_t ecx_22 = edi_5 * eax_85
                        ebx[0x220e] = edx_10
                        ebx[0x220f] = ecx_22
                        ebx[0x2210] = edx_10 + (eax_86 << 2)
                        ebx[0x2211] = edi_5 * eax_87 + ecx_22
                        ebx[0x2212] = edx_10
                        ebx[0x2213] = ecx_22
                        char* eax_92 = *(var_10 + 0xa8)
                        
                        if (eax_92 u< *(var_10 + 0xac))
                            ecx_22.b = *eax_92
                            *(var_10 + 0xa8) = &eax_92[1]
                        else if (*ebx_1 == 0)
                            ecx_22.b = 0
                        else
                            void* eax_95
                            eax_95, ecx_22 = (*(var_10 + 0x10))(*(var_10 + 0x1c), var_10 + 0x28, 
                                *(var_10 + 0x24))
                            
                            if (eax_95 != 0)
                                *(var_10 + 0xac) = eax_95 + 0x28 + var_10
                                ecx_22.b = *(var_10 + 0x28)
                                *(var_10 + 0xa8) = var_10 + 0x29
                            else
                                *(var_10 + 0x20) = eax_95
                                *(var_10 + 0xac) = var_10 + 0x29
                                *(var_10 + 0x28) = 0
                                ecx_22.b = *(var_10 + 0x28)
                                *(var_10 + 0xa8) = var_10 + 0x29
                        
                        int32_t eax_101 = ebx[0x2214]
                        uint32_t ebx_7 = zx.d(ecx_22.b)
                        ebx[0x220d] = ebx_7
                        int32_t edx_12 = ebx_7 & 0x40
                        int32_t ecx_23 = eax_101 << 3
                        
                        if (edx_12 == 0)
                            ecx_23 = eax_101
                        
                        int32_t edx_13 = neg.d(edx_12)
                        ebx[0x220c] = ecx_23
                        ebx[0x220b] = sbb.d(edx_13, edx_13, edx_12 != 0) & 3
                        void* eax_104
                        
                        if (ebx_7.b s< 0)
                            int32_t eax_102
                            
                            if ((ebx[9].b & 1) == 0)
                                eax_102 = 0xffffffff
                            else
                                eax_102 = ebx[8]
                            
                            char* eax_103 = 2 << (ebx_7.b & 7)
                            sub_72c280(eax_103, &ebx[0x10a], var_10, eax_103, eax_102)
                            eax_104 = &ebx[0x10a]
                            goto label_72d386
                        
                        if ((ebx[5].b & 0x80) != 0)
                            eax_104 = &ebx[0xa]
                        label_72d386:
                            ebx[0x220a] = eax_104
                            int32_t eax_105 = sub_72c960(var_10, ebx)
                            
                            if (eax_105 != 0)
                                int32_t esi_6 = ebx[1] * *ebx
                                
                                if (var_1c != 0 && ebx[6] s> 0)
                                    char* edx_18 = nullptr
                                    
                                    if (esi_6 s> 0)
                                        do
                                            if (edx_18[ebx[4]] == 0)
                                                *(&ebx[ebx[6]] + 0x2b) = 0xff
                                                *(ebx[2] + (edx_18 << 2)) = ebx[ebx[6] + 0xa]
                                            
                                            edx_18 = &edx_18[1]
                                        while (edx_18 s< esi_6)
                                
                                return eax_105
                else if (edx_2.b == 0x3b)
                    return esi
                
                break
            
            if (eax_31 u< ecx_4)
            label_72cf4f:
                edx_2.b = *eax_31
                void* eax_38 = eax_31 + 1
                *edi_2 = eax_38
                
                if (edx_2.b == 0xf9)
                    if (eax_38 u< ecx_4)
                        edx_2.b = *eax_38
                        eax_38 += 1
                        *edi_2 = eax_38
                    else if (*ebx_1 == 0)
                        edx_2.b = 0
                    else
                        int32_t eax_41 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                        *edi_2 = esi + 0x28
                        
                        if (eax_41 != 0)
                            ecx_4 = esi + 0x28 + eax_41
                            ebx_1 = esi + 0x20
                            char* eax_43 = *edi_2
                            *(esi + 0xac) = ecx_4
                            edx_2.b = *eax_43
                            eax_38 = &eax_43[1]
                            *edi_2 = eax_38
                        else
                            *ebx_1 = eax_41
                            ecx_4 = esi + 0x29
                            *(esi + 0xac) = ecx_4
                            ebx_1 = esi + 0x20
                            *(esi + 0x28) = eax_41.b
                            char* eax_42 = *edi_2
                            edx_2.b = *eax_42
                            eax_38 = &eax_42[1]
                            *edi_2 = eax_38
                    
                    edx_2 = zx.d(edx_2.b)
                    
                    if (edx_2 != 4)
                        if (*(esi + 0x10) != 0)
                            int32_t ebx_5 = ecx_4 - eax_38
                            
                            if (ebx_5 s< edx_2)
                                int32_t eax_74 = *(esi + 0x14)
                                int32_t var_34_9 = *(esi + 0x1c)
                                *edi_2 = ecx_4
                                eax_74(var_34_9, edx_2 - ebx_5)
                                continue
                        
                        *edi_2 = eax_38 + edx_2
                        continue
                    else
                        if (eax_38 u< ecx_4)
                            ecx_4.b = *eax_38
                            *edi_2 = eax_38 + 1
                        else if (*ebx_1 == 0)
                            ecx_4.b = 0
                        else
                            void* eax_47 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                            *edi_2 = esi + 0x28
                            
                            if (eax_47 != 0)
                                *(esi + 0xac) = eax_47 + 0x28 + esi
                                char* eax_53 = *edi_2
                                ecx_4.b = *eax_53
                                *edi_2 = &eax_53[1]
                            else
                                *ebx_1 = eax_47
                                *(esi + 0xac) = esi + 0x29
                                *(esi + 0x28) = 0
                                char* eax_49 = *edi_2
                                ecx_4.b = *eax_49
                                *edi_2 = &eax_49[1]
                        
                        ebx[9] = zx.d(ecx_4.b)
                        void* ecx_9 = &ebx[8]
                        ebx[0x2215] = sub_7203e0(esi) * 0xa
                        int32_t eax_59 = *ecx_9
                        
                        if (eax_59 s>= 0)
                            *(&ebx[eax_59] + 0x2b) = 0xff
                        
                        if ((ebx[9].b & 1) == 0)
                            int32_t eax_71
                            int32_t edx_6
                            
                            if (*(esi + 0x10) != 0)
                                eax_71 = *(esi + 0xac)
                                edx_6 = eax_71 - *edi_2
                            
                            if (*(esi + 0x10) == 0 || edx_6 s>= 1)
                                *edi_2 += 1
                                *ecx_9 = 0xffffffff
                            else
                                *edi_2 = eax_71
                                (*(esi + 0x14))(*(esi + 0x1c), 1 - edx_6)
                                *ecx_9 = 0xffffffff
                        else
                            char* eax_60 = *edi_2
                            char edx_3
                            
                            if (eax_60 u< *(esi + 0xac))
                                edx_3 = *eax_60
                                *edi_2 = &eax_60[1]
                            else if (*(esi + 0x20) == 0)
                                edx_3 = 0
                            else
                                void* eax_64 =
                                    (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                                
                                if (eax_64 != 0)
                                    ecx_9 = &ebx[8]
                                    *(esi + 0xac) = eax_64 + 0x28 + esi
                                    edx_3 = *(esi + 0x28)
                                    *edi_2 = esi + 0x29
                                else
                                    *(esi + 0x20) = eax_64
                                    ecx_9 = &ebx[8]
                                    *(esi + 0xac) = esi + 0x29
                                    *(esi + 0x28) = 0
                                    edx_3 = *(esi + 0x28)
                                    *edi_2 = esi + 0x29
                            
                            uint32_t eax_70 = zx.d(edx_3)
                            *ecx_9 = eax_70
                            *(&ebx[eax_70] + 0x2b) = 0
            else if (*ebx_1 != 0)
                int32_t eax_37 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                *edi_2 = esi + 0x28
                
                if (eax_37 != 0)
                    ecx_4 = esi + 0x28 + eax_37
                    *(esi + 0xac) = ecx_4
                else
                    ecx_4 = esi + 0x29
                    *ebx_1 = eax_37
                    *(esi + 0xac) = ecx_4
                    *(esi + 0x28) = eax_37.b
                
                eax_31 = *edi_2
                ebx_1 = esi + 0x20
                goto label_72cf4f
            
            void* ebx_3 = esi + 0x1c
            void* edx_4 = esi + 0x10
            
            while (true)
                void* eax_79 = *(esi + 0xac)
                char* ecx_10 = *edi_2
                void* var_14_2 = edx_4
                
                if (ecx_10 u< eax_79)
                    edx_4.b = *ecx_10
                    ecx_10 = &ecx_10[1]
                    *edi_2 = ecx_10
                else if (*(esi + 0x20) == 0)
                    edx_4.b = 0
                else
                    void* eax_78
                    eax_78, edx_4 = (*edx_4)(*ebx_3, esi + 0x28, *(esi + 0x24))
                    
                    if (eax_78 != 0)
                        ecx_10 = esi + 0x29
                        eax_79 = eax_78 + 0x28 + esi
                        ebx_3 = esi + 0x1c
                        *(esi + 0xac) = eax_79
                        edx_4.b = *(esi + 0x28)
                        *edi_2 = ecx_10
                    else
                        *(esi + 0x20) = eax_78
                        ecx_10 = esi + 0x29
                        eax_79 = esi + 0x29
                        *(esi + 0xac) = eax_79
                        ebx_3 = esi + 0x1c
                        *(esi + 0x28) = 0
                        edx_4.b = *(esi + 0x28)
                        *edi_2 = ecx_10
                
                edx_2 = zx.d(edx_4.b)
                
                if (edx_2 == 0)
                    break
                
                esi = var_10
                
                if (*var_14_2 != 0)
                    void* var_c_3 = eax_79 - ecx_10
                    
                    if (var_c_3 s< edx_2)
                        int32_t var_34_11 = *ebx_3
                        *edi_2 = eax_79
                        (*(esi + 0x14))(var_34_11, edx_2 - var_c_3)
                        edx_4 = var_14_2
                        continue
                
                edx_4 = var_14_2
                *edi_2 = ecx_10 + edx_2
                ebx_3 = esi + 0x1c

return 0
