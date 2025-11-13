// 函数: sub_723fc0
// 地址: 0x723fc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t* esi = *arg1
int32_t var_14 = 1
int32_t var_18 = 1
uint32_t eax_1 = sub_7202a0(esi)
uint32_t var_10 = eax_1

if (eax_1 s>= 0xb)
    void* ecx_1 = esi[0x2a]
    
    if (ecx_1 u< esi[0x2b])
    label_724049:
        eax_1.b = *ecx_1
        esi[0x2a] = ecx_1 + 1
        
        if (eax_1.b == 8)
            uint32_t eax_6 = sub_7202a0(esi)
            esi[1] = eax_6
            
            if (eax_6 != 0)
                uint32_t eax_7 = sub_7202a0(esi)
                *esi = eax_7
                
                if (eax_7 != 0)
                    char* eax_8 = esi[0x2a]
                    char i_4
                    
                    if (eax_8 u< esi[0x2b])
                        i_4 = *eax_8
                        esi[0x2a] = &eax_8[1]
                    else if (esi[8] == 0)
                        i_4 = 0
                    else
                        void* eax_12 = esi[4](esi[7], &esi[0xa], esi[9])
                        esi[0x2a] = &esi[0xa]
                        
                        if (eax_12 != 0)
                            esi[0x2b] = eax_12 + 0x28 + esi
                            i_4 = esi[0xa].b
                            esi[0x2a] = esi + 0x29
                        else
                            esi[8] = eax_12
                            esi[0x2b] = esi + 0x29
                            esi[0xa].b = 0
                            i_4 = esi[0xa].b
                            esi[0x2a] = esi + 0x29
                    
                    uint32_t i_2 = zx.d(i_4)
                    int32_t* edx_1
                    
                    if (i_2 == 3 || i_2 == 1)
                        esi[2] = i_2
                        
                        if (i_4 != 0)
                            goto label_7240fd
                        
                        edx_1 = arg1
                    label_724121:
                        
                        if (var_10 == esi[2] * 3 + 8)
                            edx_1[0x11fb] = 0
                            void* ecx_6 = esi[2]
                            int32_t var_10_1 = 0
                            
                            if (ecx_6 s> 0)
                                void* edx_2 = &edx_1[0x11a8]
                                void* var_c_1 = edx_2
                                int32_t eax_65
                                
                                do
                                    char* eax_22 = esi[0x2a]
                                    
                                    if (eax_22 u< esi[0x2b])
                                        ecx_6.b = *eax_22
                                        esi[0x2a] = &eax_22[1]
                                    else if (esi[8] == 0)
                                        ecx_6.b = 0
                                    else
                                        void* eax_26 = esi[4](esi[7], &esi[0xa], esi[9])
                                        esi[0x2a] = &esi[0xa]
                                        
                                        if (eax_26 != 0)
                                            edx_2 = var_c_1
                                            esi[0x2b] = eax_26 + 0x28 + esi
                                            char* eax_32 = esi[0x2a]
                                            ecx_6.b = *eax_32
                                            esi[0x2a] = &eax_32[1]
                                        else
                                            edx_2 = var_c_1
                                            esi[8] = eax_26
                                            esi[0x2b] = esi + 0x29
                                            esi[0xa].b = 0
                                            char* eax_28 = esi[0x2a]
                                            ecx_6.b = *eax_28
                                            esi[0x2a] = &eax_28[1]
                                    
                                    uint32_t ecx_7 = zx.d(ecx_6.b)
                                    *(edx_2 - 4) = ecx_7
                                    
                                    if (esi[2] == 3 && ecx_7 == zx.d(*(var_10_1 + &data_88de90)))
                                        arg1[0x11fb] += 1
                                    
                                    char* eax_37 = esi[0x2a]
                                    
                                    if (eax_37 u< esi[0x2b])
                                        ecx_7.b = *eax_37
                                        esi[0x2a] = &eax_37[1]
                                    else if (esi[8] == 0)
                                        ecx_7.b = 0
                                    else
                                        void* eax_41 = esi[4](esi[7], &esi[0xa], esi[9])
                                        esi[0x2a] = &esi[0xa]
                                        
                                        if (eax_41 != 0)
                                            edx_2 = var_c_1
                                            esi[0x2b] = eax_41 + 0x28 + esi
                                            char* eax_47 = esi[0x2a]
                                            ecx_7.b = *eax_47
                                            esi[0x2a] = &eax_47[1]
                                        else
                                            edx_2 = var_c_1
                                            esi[8] = eax_41
                                            esi[0x2b] = esi + 0x29
                                            esi[0xa].b = 0
                                            char* eax_43 = esi[0x2a]
                                            ecx_7.b = *eax_43
                                            esi[0x2a] = &eax_43[1]
                                    
                                    uint32_t eax_49 = zx.d(ecx_7.b)
                                    uint32_t ecx_9 = eax_49 u>> 4
                                    *edx_2 = ecx_9
                                    
                                    if (ecx_9 == 0)
                                        return 0
                                    
                                    if (ecx_9 u> 4)
                                        return 0
                                    
                                    int32_t eax_50 = eax_49 & 0xf
                                    *(edx_2 + 4) = eax_50
                                    
                                    if (eax_50 == 0)
                                        return 0
                                    
                                    if (eax_50 u> 4)
                                        return 0
                                    
                                    char* eax_51 = esi[0x2a]
                                    
                                    if (eax_51 u< esi[0x2b])
                                        ecx_9.b = *eax_51
                                        esi[0x2a] = &eax_51[1]
                                    else if (esi[8] == 0)
                                        ecx_9.b = 0
                                    else
                                        void* eax_55 = esi[4](esi[7], &esi[0xa], esi[9])
                                        esi[0x2a] = &esi[0xa]
                                        
                                        if (eax_55 != 0)
                                            edx_2 = var_c_1
                                            esi[0x2b] = eax_55 + 0x28 + esi
                                            char* eax_61 = esi[0x2a]
                                            ecx_9.b = *eax_61
                                            esi[0x2a] = &eax_61[1]
                                        else
                                            edx_2 = var_c_1
                                            esi[8] = eax_55
                                            esi[0x2b] = esi + 0x29
                                            esi[0xa].b = 0
                                            char* eax_57 = esi[0x2a]
                                            ecx_9.b = *eax_57
                                            esi[0x2a] = &eax_57[1]
                                    
                                    uint32_t eax_63 = zx.d(ecx_9.b)
                                    *(edx_2 + 8) = eax_63
                                    
                                    if (eax_63 u> 3)
                                        return 0
                                    
                                    edx_2 += 0x48
                                    ecx_6 = esi[2]
                                    eax_65 = var_10_1 + 1
                                    var_10_1 = eax_65
                                    var_c_1 = edx_2
                                while (eax_65 s< ecx_6)
                            
                            if (arg2 != 0)
                                return 1
                            
                            uint32_t edi_2 = *esi
                            int32_t ebx_1 = esi[1]
                            
                            if (edi_2 s>= 0 && ebx_1 s>= 0)
                                int32_t eax_66
                                int32_t edx_3
                                
                                if (ebx_1 != 0)
                                    edx_3:eax_66 = 0x7fffffff
                                
                                if (ebx_1 == 0 || edi_2 s<= divs.dp.d(edx_3:eax_66, ebx_1))
                                    int32_t edi_3 = edi_2 * ebx_1
                                    
                                    if (edi_3 s>= 0 && ecx_6 s>= 0)
                                        int32_t eax_68
                                        int32_t edx_5
                                        
                                        if (ecx_6 != 0)
                                            edx_5:eax_68 = 0x7fffffff
                                        
                                        if (ecx_6 == 0 || edi_3 s<= divs.dp.d(edx_5:eax_68, ecx_6))
                                            int32_t i_3 = esi[2]
                                            int32_t eax_70 = 1
                                            
                                            if (i_3 s> 0)
                                                int32_t ebx_2 = 1
                                                void* edx_8 = &arg1[0x11a9]
                                                int32_t i
                                                
                                                do
                                                    int32_t ecx_10 = eax_70
                                                    edx_8 += 0x48
                                                    int32_t eax_71 = *(edx_8 - 0x4c)
                                                    
                                                    if (eax_71 s<= ebx_2)
                                                        eax_71 = ebx_2
                                                    
                                                    ebx_2 = eax_71
                                                    eax_70 = *(edx_8 - 0x48)
                                                    
                                                    if (eax_70 s<= ecx_10)
                                                        eax_70 = ecx_10
                                                    
                                                    i = i_3
                                                    i_3 -= 1
                                                while (i != 1)
                                                var_14 = ebx_2
                                                var_18 = eax_70
                                            
                                            int32_t edi_4 = eax_70 << 3
                                            arg1[0x11a2] = eax_70
                                            arg1[0x11a1] = var_14
                                            int32_t ecx_12 = var_14 << 3
                                            arg1[0x11a5] = ecx_12
                                            arg1[0x11a6] = edi_4
                                            arg1[0x11a3] = divu.dp.d(0:(*esi - 1 + ecx_12), ecx_12)
                                            arg1[0x11a4] = divu.dp.d(0:(esi[1] - 1 + edi_4), edi_4)
                                            int32_t var_c_2 = 0
                                            
                                            if (esi[2] s> 0)
                                                void* ebx_4 = &arg1[0x11ae]
                                                
                                                while (true)
                                                    *ebx_4 = divu.dp.d(
                                                        0:(*esi * *(ebx_4 - 0x18) - 1 + var_14), 
                                                        var_14)
                                                    *(ebx_4 + 4) = divu.dp.d(
                                                        0:(esi[1] * *(ebx_4 - 0x14) + var_18 - 1), 
                                                        var_18)
                                                    int32_t eax_91 =
                                                        (arg1[0x11a3] * *(ebx_4 - 0x18)) << 3
                                                    *(ebx_4 + 8) = eax_91
                                                    int32_t ecx_14 = arg1[0x11a4] * *(ebx_4 - 0x14)
                                                    int32_t var_10_2 = eax_91
                                                    *(ebx_4 + 0x20) = 0
                                                    *(ebx_4 + 0x18) = 0
                                                    *(ebx_4 + 0x1c) = 0
                                                    int32_t ecx_15 = ecx_14 << 3
                                                    *(ebx_4 + 0xc) = ecx_15
                                                    
                                                    if (eax_91 s< 0 || ecx_15 s< 0)
                                                        *(ebx_4 + 0x14) = 0
                                                    else
                                                        if (ecx_15 == 0)
                                                            goto label_72448e
                                                        
                                                        eax_91 = divs.dp.d(0x7fffffff, ecx_15)
                                                        
                                                        if (var_10_2 s> eax_91)
                                                            *(ebx_4 + 0x14) = 0
                                                        else
                                                            eax_91 = var_10_2
                                                        label_72448e:
                                                            eax_91 = malloc(eax_91 * ecx_15 + 0xf)
                                                            *(ebx_4 + 0x14) = eax_91
                                                            
                                                            if (eax_91 != 0)
                                                                *(ebx_4 + 0x10) =
                                                                    (eax_91 + 0xf) & 0xfffffff0
                                                                
                                                                if (arg1[0x11f3] == 0)
                                                                    goto label_72452c
                                                                
                                                                int32_t ecx_16 = *(ebx_4 + 8)
                                                                int32_t edi_5 = *(ebx_4 + 0xc)
                                                                int32_t eax_99
                                                                int32_t edx_18
                                                                edx_18:eax_99 = sx.q(ecx_16)
                                                                *(ebx_4 + 0x24) =
                                                                    (eax_99 + (edx_18 & 7)) s>> 3
                                                                int32_t eax_103
                                                                int32_t edx_20
                                                                edx_20:eax_103 = sx.q(edi_5)
                                                                eax_91 = (eax_103 + (edx_20 & 7)) s>> 3
                                                                *(ebx_4 + 0x28) = eax_91
                                                                
                                                                if (ecx_16 s< 0 || edi_5 s< 0)
                                                                    *(ebx_4 + 0x18) = 0
                                                                else
                                                                    if (edi_5 != 0)
                                                                        eax_91 = divs.dp.d(0x7fffffff, edi_5)
                                                                    
                                                                    if (edi_5 != 0 && ecx_16 s> eax_91)
                                                                        *(ebx_4 + 0x18) = 0
                                                                    else
                                                                        int32_t ecx_17 = ecx_16 * edi_5
                                                                        
                                                                        if (ecx_17 s< 0 || ecx_17 s> 0x3fffffff)
                                                                            *(ebx_4 + 0x18) = 0
                                                                        else
                                                                            eax_91 = ecx_17 * 2
                                                                            
                                                                            if (eax_91 s> 0x7ffffff0)
                                                                                *(ebx_4 + 0x18) = 0
                                                                            else
                                                                                eax_91 = malloc((ecx_17 << 1) + 0xf)
                                                                                *(ebx_4 + 0x18) = eax_91
                                                                                
                                                                                if (eax_91 != 0)
                                                                                    *(ebx_4 + 0x20) =
                                                                                        (eax_91 + 0xf) & 0xfffffff0
                                                                                label_72452c:
                                                                                    ebx_4 += 0x48
                                                                                    int32_t eax_110 = var_c_2 + 1
                                                                                    var_c_2 = eax_110
                                                                                    
                                                                                    if (eax_110 s>= esi[2])
                                                                                        break
                                                                                    
                                                                                    continue
                                                    
                                                    return sub_723f50(eax_91, var_c_2 + 1, arg1, 0)
                                            
                                            return 1
                    else if (i_2 == 4)
                        esi[2] = i_2
                    label_7240fd:
                        edx_1 = arg1
                        void* eax_18 = &edx_1[0x11b5]
                        uint32_t i_1
                        
                        do
                            *(eax_18 - 0xc) = 0
                            eax_18 += 0x48
                            *(eax_18 - 0x48) = 0
                            i_1 = i_2
                            i_2 -= 1
                        while (i_1 != 1)
                        goto label_724121
    else if (esi[8] != 0)
        int32_t eax_4 = esi[4](esi[7], &esi[0xa], esi[9])
        ecx_1 = &esi[0xa]
        esi[0x2a] = ecx_1
        
        if (eax_4 != 0)
            esi[0x2b] = eax_4 + 0x28 + esi
        else
            esi[8] = eax_4
            esi[0x2b] = esi + 0x29
            *ecx_1 = 0
        
        goto label_724049

return 0
