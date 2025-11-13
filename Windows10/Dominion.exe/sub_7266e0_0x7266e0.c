// 函数: sub_7266e0
// 地址: 0x7266e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
ecx.b = arg8 == 0x10
int32_t esi_1 = (ecx + 1) * arg5
int32_t eax_2 = *(*arg3 + 8)
char* edi = arg2
char* ebx_1 = eax_2 * (ecx + 1)
int32_t edx_1 = esi_1 * arg6
char* var_c = ebx_1
uint32_t var_40 = arg6

if (arg6 s< 0)
    arg3[3] = 0
else
    int32_t eax_3 = arg7
    
    if (eax_3 s< 0)
        arg3[3] = 0
    else
        if (eax_3 == 0)
            goto label_72674c
        
        if (arg6 s> divu.dp.d(0:0x7fffffff, arg7))
            arg3[3] = 0
        else
            eax_3 = arg7
        label_72674c:
            int32_t ecx_3 = arg6 * eax_3
            
            if (ecx_3 s< 0 || esi_1 s< 0)
                arg3[3] = 0
            else
                int32_t eax_6
                int32_t edx_4
                
                if (esi_1 != 0)
                    edx_4:eax_6 = 0x7fffffff
                
                if (esi_1 != 0 && ecx_3 s> divs.dp.d(edx_4:eax_6, esi_1))
                    arg3[3] = 0
                else
                    int32_t eax_10 = malloc(edx_1 * arg7)
                    arg3[3] = eax_10
                    
                    if (eax_10 != 0 && eax_2 s>= 0
                            && (arg6 == 0 || eax_2 s<= divu.dp.d(0:0x7fffffff, arg6)))
                        int32_t ecx_6 = eax_2 * arg6
                        int32_t var_20_1 = ecx_6
                        
                        if (ecx_6 s>= 0)
                            void* esi_3 = arg8
                            
                            if (esi_3 s>= 0
                                    && (esi_3 == 0 || ecx_6 s<= divu.dp.d(0:0x7fffffff, esi_3))
                                    && ecx_6 * esi_3 s<= 0x7ffffff8)
                                uint32_t eax_20 = (ecx_6 * esi_3 + 7) u>> 3
                                
                                if (arg4 u>= (eax_20 + 1) * arg7)
                                    int32_t edx_10 = 0
                                    int32_t var_44_1 = 0
                                    int32_t ecx_35
                                    
                                    if (arg7 u<= 0)
                                        ecx_35 = arg7
                                    else
                                        var_20_1 = ecx_6
                                        
                                        do
                                            char* eax_25 = edx_10 * edx_1 + eax_10
                                            char* ecx_7 = eax_25
                                            uint32_t eax_26 = zx.d(*edi)
                                            char* var_1c_1 = ecx_7
                                            uint32_t var_24_1 = eax_26
                                            
                                            if (eax_26 u> 4)
                                                return 0
                                            
                                            if (esi_3 s< 8)
                                                ebx_1 = 1
                                                var_c = 1
                                                var_40 = eax_20
                                                ecx_7 = &ecx_7[arg5 * arg6 - eax_20]
                                                eax_26 = var_24_1
                                                var_1c_1 = ecx_7
                                            
                                            void* esi_6 = ecx_7 - edx_1
                                            
                                            if (edx_10 == 0)
                                                var_24_1 = zx.d(*(eax_26 + 0x800cc8))
                                            
                                            if (ebx_1 s> 0)
                                                void* edx_11 = &edi[1]
                                                void* eax_32 = esi_6 - &edi[1]
                                                void* ecx_8 = ecx_7 - &edi[1]
                                                void* i_19 = ebx_1
                                                void* i_26 = i_19
                                                void* i
                                                
                                                do
                                                    char* esi_7 = edx_11
                                                    
                                                    if (var_24_1 u<= 6)
                                                        uint32_t eax_33
                                                        
                                                        switch (var_24_1)
                                                            case 0
                                                                while (true)
                                                                    eax_33.b = *edx_11
                                                                    edx_11 += 1
                                                                    *(esi_7 + ecx_8) = eax_33.b
                                                                    ebx_1 = var_c
                                                                    void* i_28 = i_19
                                                                    i_19 -= 1
                                                                    
                                                                    if (i_28 == 1)
                                                                        break
                                                                    
                                                                    esi_7 = edx_11
                                                            case 1
                                                                while (true)
                                                                    eax_33.b = *edx_11
                                                                    edx_11 += 1
                                                                    *(esi_7 + ecx_8) = eax_33.b
                                                                    ebx_1 = var_c
                                                                    void* i_29 = i_19
                                                                    i_19 -= 1
                                                                    
                                                                    if (i_29 == 1)
                                                                        break
                                                                    
                                                                    esi_7 = edx_11
                                                            case 2
                                                                while (true)
                                                                    void* eax_34
                                                                    eax_34.b = *(eax_32 + esi_7)
                                                                    eax_34.b += *edx_11
                                                                    edx_11 += 1
                                                                    *(esi_7 + ecx_8) = eax_34.b
                                                                    ebx_1 = var_c
                                                                    void* i_30 = i_19
                                                                    i_19 -= 1
                                                                    
                                                                    if (i_30 == 1)
                                                                        break
                                                                    
                                                                    esi_7 = edx_11
                                                            case 3
                                                                while (true)
                                                                    void* eax_35
                                                                    eax_35.b = *(eax_32 + esi_7)
                                                                    eax_35.b u>>= 1
                                                                    eax_35.b += *edx_11
                                                                    edx_11 += 1
                                                                    *(esi_7 + ecx_8) = eax_35.b
                                                                    ebx_1 = var_c
                                                                    void* i_31 = i_19
                                                                    i_19 -= 1
                                                                    
                                                                    if (i_31 == 1)
                                                                        break
                                                                    
                                                                    esi_7 = edx_11
                                                            case 4
                                                                while (true)
                                                                    i_19.b = *(eax_32 + esi_7)
                                                                    char* eax_36
                                                                    eax_36.b = 0
                                                                    eax_36.b = sbb.b(0, 0, 0 u< i_19.b)
                                                                    eax_36.b &= i_19.b
                                                                    eax_36.b += *edx_11
                                                                    edx_11 += 1
                                                                    void* i_34 = i_26
                                                                    i_26 -= 1
                                                                    *(esi_7 + ecx_8) = eax_36.b
                                                                    
                                                                    if (i_34 == 1)
                                                                        break
                                                                    
                                                                    esi_7 = edx_11
                                                            case 5
                                                                while (true)
                                                                    eax_33.b = *edx_11
                                                                    edx_11 += 1
                                                                    *(esi_7 + ecx_8) = eax_33.b
                                                                    ebx_1 = var_c
                                                                    void* i_32 = i_19
                                                                    i_19 -= 1
                                                                    
                                                                    if (i_32 == 1)
                                                                        break
                                                                    
                                                                    esi_7 = edx_11
                                                            case 6
                                                                while (true)
                                                                    eax_33.b = *edx_11
                                                                    edx_11 += 1
                                                                    *(esi_7 + ecx_8) = eax_33.b
                                                                    void* i_33 = i_19
                                                                    i_19 -= 1
                                                                    
                                                                    if (i_33 == 1)
                                                                        break
                                                                    
                                                                    esi_7 = edx_11
                                                                
                                                                ebx_1 = var_c
                                                        
                                                        break
                                                    
                                                    edx_11 += 1
                                                    i = i_19
                                                    i_19 -= 1
                                                    i_26 = i_19
                                                while (i != 1)
                                                ecx_7 = var_1c_1
                                            
                                            void* var_18_2
                                            int128_t* var_14_2
                                            char* var_8_2
                                            void* ecx_9
                                            char* edx_13
                                            int128_t* esi_8
                                            
                                            if (arg8 == 8)
                                                if (eax_2 != arg5)
                                                    ecx_7[eax_2] = 0xff
                                                
                                                edi = &edi[1 + eax_2]
                                                esi_8 = esi_6 + arg5
                                                ecx_9 = &ecx_7[arg5]
                                                var_8_2 = edi
                                                var_14_2 = esi_8
                                                edx_13 = edi
                                                var_18_2 = ecx_9
                                                goto label_726a09
                                            
                                            if (arg8 == 0x10)
                                                if (eax_2 != arg5)
                                                    *(ecx_7 + ebx_1) = 0xffff
                                                
                                                esi_8 = esi_6 + esi_1
                                                edi = &edi[1] + ebx_1
                                                edx_13 = edi
                                                ecx_9 = &var_1c_1[esi_1]
                                                var_8_2 = edi
                                                var_14_2 = esi_8
                                                var_18_2 = ecx_9
                                                goto label_726a09
                                            
                                            edi = &edi[2]
                                            esi_8 = esi_6 + 1
                                            ecx_9 = &ecx_7[1]
                                            var_8_2 = edi
                                            var_14_2 = esi_8
                                            edx_13 = edi
                                            var_18_2 = ecx_9
                                            
                                            if (arg8 s< 8)
                                            label_726f46:
                                                uint32_t count = (var_40 - 1) * ebx_1
                                                
                                                switch (var_24_1)
                                                    case 0
                                                        memcpy(ecx_9, edi, count)
                                                    case 1
                                                        int32_t esi_26 = 0
                                                        
                                                        if (count s> 0)
                                                            int32_t eax_101 = edi - ecx_9
                                                            int32_t var_60_3 = eax_101
                                                            
                                                            do
                                                                char* edx_44 = ecx_9 + esi_26
                                                                eax_101.b = edx_44[eax_101]
                                                                eax_101.b += (ecx_9 - ebx_1)[esi_26]
                                                                esi_26 += 1
                                                                *edx_44 = eax_101.b
                                                                eax_101 = var_60_3
                                                            while (esi_26 s< count)
                                                            
                                                            edi = var_8_2
                                                            ebx_1 = var_c
                                                    case 2
                                                        int32_t i_2 = 0
                                                        
                                                        if (count s> 0)
                                                            if (count u< 8)
                                                            label_727101:
                                                                void* eax_116 = &edi[i_2]
                                                                void* var_64_6 = eax_116
                                                                int32_t i_21 = count - i_2
                                                                void* edx_45 = eax_116
                                                                int32_t i_1
                                                                
                                                                do
                                                                    eax_116.b = *(edx_45 + esi_8 - edi)
                                                                    edx_45 += 1
                                                                    eax_116.b += *(edx_45 - 1)
                                                                    *(ecx_9 - edi + edx_45 - 1) = eax_116.b
                                                                    i_1 = i_21
                                                                    i_21 -= 1
                                                                while (i_1 != 1)
                                                                ebx_1 = var_c
                                                            else
                                                                void* ebx_22 = count - 1 + ecx_9
                                                                
                                                                if ((ecx_9 u<= count - 1 + edi
                                                                        && ebx_22 u>= edi) || (
                                                                        ecx_9 u<= count - 1 + esi_8
                                                                        && ebx_22 u>= esi_8))
                                                                    goto label_727101
                                                                
                                                                uint32_t count_1 = count
                                                                
                                                                if (count_1 u< 0x40)
                                                                    goto label_72709f
                                                                
                                                                int32_t eax_106 = count_1 & 0x8000003f
                                                                
                                                                if (eax_106 s< 0)
                                                                    eax_106 =
                                                                        ((eax_106 - 1) | 0xffffffc0) + 1
                                                                
                                                                void* ebx_26 = esi_8 - edi
                                                                void* eax_110 = &edi[0x10]
                                                                void* ecx_22 = ebx_26
                                                                void* ebx_31 = ecx_9 + 0x20
                                                                
                                                                do
                                                                    int32_t xmm0_6[0x4] = *(eax_110 - 0x10)
                                                                    eax_110 += 0x40
                                                                    ebx_31 += 0x40
                                                                    *(ebx_31 - 0x60) =
                                                                        _mm_add_epi8(*(esi_8 + i_2), xmm0_6)
                                                                    *(ecx_9 - edi + eax_110 - 0x40) =
                                                                        _mm_add_epi8(
                                                                        *(ecx_22 + eax_110 - 0x40), 
                                                                        *(eax_110 - 0x40))
                                                                    *(ebx_31 - 0x40) = _mm_add_epi8(
                                                                        *(esi_8 - ecx_9 + ebx_31 - 0x40), 
                                                                        *(eax_110 - 0x30))
                                                                    int32_t xmm1_17[0x4] =
                                                                        *(esi_8 + i_2 + 0x30)
                                                                    ecx_22 = ebx_26
                                                                    i_2 += 0x40
                                                                    *(ebx_31 - 0x30) =
                                                                        _mm_add_epi8(xmm1_17, *(eax_110 - 0x20))
                                                                while (i_2 s< count - eax_106)
                                                                
                                                                ecx_9 = var_18_2
                                                                ebx_1 = var_c
                                                                edi = var_8_2
                                                                
                                                                if ((count.b & 0x3f) u>= 8)
                                                                    count_1 = count
                                                                label_72709f:
                                                                    int32_t eax_114 = count_1 & 0x80000007
                                                                    
                                                                    if (eax_114 s< 0)
                                                                        eax_114 =
                                                                            ((eax_114 - 1) | 0xfffffff8) + 1
                                                                    
                                                                    void* eax_115 = &edi[i_2]
                                                                    int32_t ecx_25 = ecx_9 - edi
                                                                    ebx_1 = var_c
                                                                    int32_t var_60_5 = ecx_25
                                                                    
                                                                    do
                                                                        uint128_t xmm1_19 =
                                                                            zx.o(*(eax_115 + esi_8 - edi))
                                                                        eax_115 += 8
                                                                        i_2 += 8
                                                                        *(ecx_25 + eax_115 - 8) = _mm_add_epi8(
                                                                            xmm1_19, zx.o(*(eax_115 - 8)))
                                                                    while (i_2 s< count - eax_114)
                                                                    
                                                                    ecx_9 = var_18_2
                                                                    esi_8 = var_14_2
                                                                
                                                                if (i_2 s< count)
                                                                    goto label_727101
                                                    case 3
                                                        int32_t var_34_9 = 0
                                                        
                                                        if (count s> 0)
                                                            char* var_64_7 = edi
                                                            void* esi_29 = esi_8 - edi
                                                            int32_t ecx_27 = ecx_9 - edi
                                                            int32_t eax_119 = 0
                                                            
                                                            do
                                                                edi = &edi[1]
                                                                uint8_t edx_48 = ((
                                                                    zx.d(*(edi + esi_29 - 1))
                                                                    + zx.d(*(ecx_9 - ebx_1 + eax_119)))
                                                                    u>> 1).b
                                                                eax_119 = var_34_9 + 1
                                                                edi[ecx_27 - 1] =
                                                                    edx_48 + edi[0xffffffff]
                                                                var_34_9 = eax_119
                                                            while (eax_119 s< count)
                                                            
                                                            edi = var_8_2
                                                            ebx_1 = var_c
                                                    case 4
                                                        if (count s> 0)
                                                            char* var_34_10 = edi
                                                            uint32_t var_24_4 = count
                                                            void* edx_52 = esi_8 - ecx_9
                                                            void* ecx_28 = var_34_10
                                                            void* esi_30 = esi_8 - edi
                                                            void* var_58_7 = edx_52
                                                            char* edi_19 = ecx_9 - ebx_1
                                                            void* var_14_3 = esi_30
                                                            uint32_t i_3
                                                            
                                                            do
                                                                uint32_t eax_122 =
                                                                    zx.d(*(edx_52 + edi_19))
                                                                uint32_t esi_31 =
                                                                    zx.d(*(esi_30 + ecx_28))
                                                                uint32_t edx_53 = zx.d(*edi_19)
                                                                uint32_t ecx_30 = edx_53 - eax_122
                                                                uint32_t esi_32 = esi_31 + ecx_30
                                                                char var_38_3 = edx_53.b
                                                                int32_t eax_125
                                                                int32_t edx_54
                                                                edx_54:eax_125 = sx.q(esi_32 - edx_53)
                                                                uint32_t eax_127 =
                                                                    (eax_125 ^ edx_54) - edx_54
                                                                int32_t eax_129
                                                                int32_t edx_55
                                                                edx_55:eax_129 = sx.q(ecx_30)
                                                                int32_t eax_131 =
                                                                    (eax_129 ^ edx_55) - edx_55
                                                                int32_t eax_133
                                                                int32_t edx_56
                                                                edx_56:eax_133 = sx.q(esi_32 - eax_122)
                                                                int32_t ecx_33 =
                                                                    (eax_133 ^ edx_56) - edx_56
                                                                uint32_t eax_134
                                                                
                                                                if (eax_127 s> eax_131
                                                                        || eax_127 s> ecx_33)
                                                                    eax_134 = eax_122
                                                                    
                                                                    if (eax_131 s<= ecx_33)
                                                                        eax_134 = esi_31
                                                                    
                                                                    var_38_3 = eax_134.b
                                                                
                                                                esi_30 = var_14_3
                                                                edx_52 = var_58_7
                                                                eax_134.b = *var_34_10
                                                                ecx_28 = &var_34_10[1]
                                                                eax_134.b += var_38_3
                                                                *(edi_19 + ebx_1) = eax_134.b
                                                                edi_19 = &edi_19[1]
                                                                i_3 = var_24_4
                                                                var_24_4 -= 1
                                                                var_34_10 = ecx_28
                                                            while (i_3 != 1)
                                                            edi = var_8_2
                                                    case 5
                                                        int32_t esi_34 = 0
                                                        
                                                        if (count s> 0)
                                                            do
                                                                int32_t eax_138
                                                                eax_138.b = (ecx_9 - ebx_1)[esi_34]
                                                                char* edx_58 = ecx_9 + esi_34
                                                                esi_34 += 1
                                                                eax_138.b u>>= 1
                                                                eax_138.b += edx_58[edi - ecx_9]
                                                                *edx_58 = eax_138.b
                                                            while (esi_34 s< count)
                                                            
                                                            edi = var_8_2
                                                            ebx_1 = var_c
                                                    case 6
                                                        if (count s> 0)
                                                            int32_t edi_21 = 0
                                                            char* eax_140 = ecx_9 - ebx_1
                                                            char* var_5c_6 = eax_140
                                                            
                                                            do
                                                                int32_t edx_60
                                                                edx_60.b = eax_140[edi_21]
                                                                char* esi_35 = ecx_9 + edi_21
                                                                edi_21 += 1
                                                                int32_t eax_141
                                                                eax_141.b = esi_35[edi - ecx_9]
                                                                eax_141.b += edx_60.b
                                                                *esi_35 = eax_141.b
                                                                eax_140 = var_5c_6
                                                            while (edi_21 s< count)
                                                            
                                                            edi = var_8_2
                                                            ebx_1 = var_c
                                                
                                                edi = &edi[count]
                                                esi_3 = arg8
                                            else
                                            label_726a09:
                                                ebx_1 = var_c
                                                
                                                if (eax_2 == arg5)
                                                    goto label_726f46
                                                
                                                switch (var_24_1)
                                                    case 0
                                                        edi = edx_13
                                                        int32_t eax_41 = esi_1
                                                        int32_t i_23 = arg6 - 1
                                                        int32_t i_27 = i_23
                                                        
                                                        if (i_23 u>= 1)
                                                            int32_t i_4
                                                            
                                                            do
                                                                if (ebx_1 s> 0)
                                                                    char* j_9 = ebx_1
                                                                    int32_t eax_43 = edi - ecx_9
                                                                    void* edx_14 = ecx_9
                                                                    int32_t var_3c_1 = eax_43
                                                                    int32_t ebx_9 = eax_43
                                                                    char* j
                                                                    
                                                                    do
                                                                        eax_43.b = *(edx_14 + ebx_9)
                                                                        edx_14 += 1
                                                                        *(edx_14 - 1) = eax_43.b
                                                                        j = j_9
                                                                        j_9 -= 1
                                                                    while (j != 1)
                                                                    ebx_1 = var_c
                                                                    eax_41 = esi_1
                                                                    i_23 = i_27
                                                                
                                                                *(ebx_1 + ecx_9) = 0xff
                                                                edi += ebx_1
                                                                ecx_9 += eax_41
                                                                i_4 = i_23
                                                                i_23 -= 1
                                                                i_27 = i_23
                                                            while (i_4 != 1)
                                                    case 1
                                                        edi = edx_13
                                                        int32_t eax_44 = esi_1
                                                        int32_t i_16 = arg6 - 1
                                                        
                                                        if (arg6 - 1 u>= 1)
                                                            char* var_8_3 = edi
                                                            void* edx_16 = ecx_9 - eax_44
                                                            void* var_34_1 = edx_16
                                                            int32_t i_5
                                                            
                                                            do
                                                                void* esi_12 = nullptr
                                                                
                                                                if (ebx_1 s> 0)
                                                                    char* var_3c_2 = edi
                                                                    
                                                                    do
                                                                        char* edx_17 = esi_12 + ecx_9
                                                                        eax_44.b = edx_17[edi - ecx_9]
                                                                        eax_44.b += *(var_34_1 + esi_12)
                                                                        esi_12 += 1
                                                                        ebx_1 = var_c
                                                                        *edx_17 = eax_44.b
                                                                    while (esi_12 s< ebx_1)
                                                                    
                                                                    edi = var_8_3
                                                                    eax_44 = esi_1
                                                                    edx_16 = var_34_1
                                                                
                                                                *(ecx_9 + ebx_1) = 0xff
                                                                edi += ebx_1
                                                                edx_16 += eax_44
                                                                var_8_3 = edi
                                                                ecx_9 += eax_44
                                                                var_34_1 = edx_16
                                                                i_5 = i_16
                                                                i_16 -= 1
                                                            while (i_5 != 1)
                                                    case 2
                                                        int32_t eax_45 = esi_1
                                                        int32_t i_18 = arg6 - 1
                                                        edi = edx_13
                                                        
                                                        if (i_18 u>= 1)
                                                            char* var_8_4 = edi
                                                            void* var_24_2 = ecx_9 + ebx_1
                                                            void* edx_19 = 0x20 - ebx_1
                                                            int32_t i_6
                                                            
                                                            do
                                                                int128_t* j_2 = nullptr
                                                                
                                                                if (ebx_1 s> 0)
                                                                    if (ebx_1 u< 8 || (
                                                                        ecx_9 u<= &edi[0xffffffff] + ebx_1
                                                                        && ecx_9 - 1 + ebx_1 u>= edi) || (
                                                                        ecx_9 u<= esi_8 - 1 + ebx_1
                                                                        && ecx_9 - 1 + ebx_1 u>= esi_8))
                                                                    label_726c5e:
                                                                        char* esi_14 = j_2 + edi
                                                                        char* var_58_3 = ebx_1
                                                                        void* eax_68 = var_14_2 - edi
                                                                        void* j_8 = ebx_1 - j_2
                                                                        void* var_54_3 = eax_68
                                                                        void* ecx_15 = eax_68
                                                                        void* j_1
                                                                        
                                                                        do
                                                                            eax_68.b = *(esi_14 + ecx_15)
                                                                            esi_14 = &esi_14[1]
                                                                            eax_68.b += esi_14[0xffffffff]
                                                                            esi_14[ecx_9 - edi - 1] = eax_68.b
                                                                            j_1 = j_8
                                                                            j_8 -= 1
                                                                        while (j_1 != 1)
                                                                        ecx_9 = var_18_2
                                                                        ebx_1 = var_c
                                                                        esi_8 = var_14_2
                                                                    else
                                                                        if (ebx_1 u< 0x40)
                                                                        label_726c0b:
                                                                            void* eax_63 = ebx_1 & 0x80000007
                                                                            
                                                                            if (eax_63 s< 0)
                                                                                eax_63 = ((eax_63 - 1) | 0xfffffff8) + 1
                                                                            
                                                                            void* var_34_5 = ebx_1 - eax_63
                                                                            void* eax_66 = j_2 + edi
                                                                            ebx_1 = var_c
                                                                            int32_t ecx_13 = ecx_9 - edi
                                                                            int32_t var_54_2 = ecx_13
                                                                            
                                                                            do
                                                                                uint128_t xmm1_9 =
                                                                                    zx.o(*(eax_66 + esi_8 - edi))
                                                                                eax_66 += 8
                                                                                j_2 += 8
                                                                                *(ecx_13 + eax_66 - 8) = _mm_add_epi8(
                                                                                    xmm1_9, zx.o(*(eax_66 - 8)))
                                                                            while (j_2 s< var_34_5)
                                                                            
                                                                            ecx_9 = var_18_2
                                                                            esi_8 = var_14_2
                                                                        else
                                                                            void* eax_55 = ebx_1 & 0x8000003f
                                                                            
                                                                            if (eax_55 s< 0)
                                                                                eax_55 = ((eax_55 - 1) | 0xffffffc0) + 1
                                                                            
                                                                            void* ebx_12 = esi_8 - edi
                                                                            void* eax_60 = &edi[0x10]
                                                                            void* ecx_11 = ebx_12
                                                                            void* ebx_17 = var_24_2 + edx_19
                                                                            
                                                                            do
                                                                                int32_t xmm0_1[0x4] = *(eax_60 - 0x10)
                                                                                eax_60 += 0x40
                                                                                ebx_17 += 0x40
                                                                                *(ebx_17 - 0x60) =
                                                                                    _mm_add_epi8(*(j_2 + esi_8), xmm0_1)
                                                                                *(ecx_9 - edi + eax_60 - 0x40) =
                                                                                    _mm_add_epi8(*(ecx_11 + eax_60 - 0x40), 
                                                                                    *(eax_60 - 0x40))
                                                                                ecx_11 = ebx_12
                                                                                *(ebx_17 - 0x40) = _mm_add_epi8(
                                                                                    *(esi_8 - ecx_9 + ebx_17 - 0x40), 
                                                                                    *(eax_60 - 0x30))
                                                                                int32_t xmm1_7[0x4] =
                                                                                    *(esi_8 + j_2 + 0x30)
                                                                                j_2 = &j_2[4]
                                                                                *(ebx_17 - 0x30) =
                                                                                    _mm_add_epi8(xmm1_7, *(eax_60 - 0x20))
                                                                            while (j_2 s< ebx_1 - eax_55)
                                                                            
                                                                            ebx_1 = var_c
                                                                            ecx_9 = var_18_2
                                                                            edi = var_8_4
                                                                            
                                                                            if ((ebx_1.b & 0x3f) u>= 8)
                                                                                goto label_726c0b
                                                                        
                                                                        if (j_2 s< ebx_1)
                                                                            goto label_726c5e
                                                                    
                                                                    eax_45 = esi_1
                                                                
                                                                edi += ebx_1
                                                                ecx_9 += eax_45
                                                                var_8_4 = edi
                                                                esi_8 += eax_45
                                                                var_18_2 = ecx_9
                                                                var_14_2 = esi_8
                                                                *var_24_2 = 0xff
                                                                i_6 = i_18
                                                                i_18 -= 1
                                                                var_24_2 += eax_45
                                                            while (i_6 != 1)
                                                    case 3
                                                        int32_t eax_69 = esi_1
                                                        int32_t i_17 = arg6 - 1
                                                        edi = edx_13
                                                        
                                                        if (i_17 u>= 1)
                                                            char* var_8_5 = edi
                                                            void* edx_24 = ecx_9 - eax_69
                                                            void* var_34_6 = edx_24
                                                            int32_t i_7
                                                            
                                                            do
                                                                if (ebx_1 s> 0)
                                                                    char* esi_15 = edi
                                                                    void* eax_71 = var_14_2 - edi
                                                                    int32_t ecx_17 = 0
                                                                    void* var_54_4 = eax_71
                                                                    
                                                                    do
                                                                        uint32_t edx_25 =
                                                                            zx.d(*(edx_24 + ecx_17))
                                                                        esi_15 = &esi_15[1]
                                                                        ecx_17 += 1
                                                                        esi_15[ecx_9 - edi - 1] = ((edx_25
                                                                            + zx.d(*(esi_15 + eax_71 - 1))) u>> 1)
                                                                            .b + esi_15[0xffffffff]
                                                                        edx_24 = var_34_6
                                                                    while (ecx_17 s< ebx_1)
                                                                    
                                                                    ecx_9 = var_18_2
                                                                    edi = var_8_5
                                                                    esi_8 = var_14_2
                                                                    eax_69 = esi_1
                                                                
                                                                *(ecx_9 + ebx_1) = 0xff
                                                                edi += ebx_1
                                                                ecx_9 += eax_69
                                                                var_8_5 = edi
                                                                edx_24 += eax_69
                                                                var_18_2 = ecx_9
                                                                esi_8 += eax_69
                                                                var_34_6 = edx_24
                                                                i_7 = i_17
                                                                i_17 -= 1
                                                                var_14_2 = esi_8
                                                            while (i_7 != 1)
                                                    case 4
                                                        int32_t eax_74 = esi_1
                                                        int32_t i_15 = arg6 - 1
                                                        edi = edx_13
                                                        
                                                        if (i_15 u>= 1)
                                                            char* var_8_6 = edi
                                                            void* edx_29 = ecx_9 - eax_74
                                                            void* var_3c_4 = edx_29
                                                            int32_t i_8
                                                            
                                                            do
                                                                if (ebx_1 s> 0)
                                                                    void* eax_76 = esi_8 - ecx_9
                                                                    char* j_7 = ebx_1
                                                                    void* ebx_20 = edx_29
                                                                    void* edx_31 = esi_8 - edi
                                                                    char* var_54_5 = edi
                                                                    void* var_5c_1 = eax_76
                                                                    char* ecx_18 = edi
                                                                    void* var_60_1 = edx_31
                                                                    char* j_3
                                                                    
                                                                    do
                                                                        uint32_t eax_77 =
                                                                            zx.d(*(ebx_20 + eax_76))
                                                                        uint32_t edi_12 =
                                                                            zx.d(*(ecx_18 + edx_31))
                                                                        uint32_t edx_32 = zx.d(*ebx_20)
                                                                        uint32_t esi_17 = edx_32 - eax_77
                                                                        uint32_t edi_13 = edi_12 + esi_17
                                                                        char var_24_3 = edx_32.b
                                                                        int32_t eax_80
                                                                        int32_t edx_33
                                                                        edx_33:eax_80 = sx.q(edi_13 - edx_32)
                                                                        uint32_t eax_82 =
                                                                            (eax_80 ^ edx_33) - edx_33
                                                                        int32_t eax_84
                                                                        int32_t edx_34
                                                                        edx_34:eax_84 = sx.q(esi_17)
                                                                        int32_t eax_86 =
                                                                            (eax_84 ^ edx_34) - edx_34
                                                                        int32_t eax_88
                                                                        int32_t edx_35
                                                                        edx_35:eax_88 = sx.q(edi_13 - eax_77)
                                                                        int32_t esi_20 =
                                                                            (eax_88 ^ edx_35) - edx_35
                                                                        uint32_t eax_89
                                                                        
                                                                        if (eax_82 s> eax_86
                                                                                || eax_82 s> esi_20)
                                                                            eax_89 = eax_77
                                                                            
                                                                            if (eax_86 s<= esi_20)
                                                                                eax_89 = edi_12
                                                                            
                                                                            var_24_3 = eax_89.b
                                                                        
                                                                        eax_89.b = *ecx_18
                                                                        ecx_18 = &ecx_18[1]
                                                                        eax_89.b += var_24_3
                                                                        *(ebx_20 + esi_1) = eax_89.b
                                                                        ebx_20 += 1
                                                                        j_3 = j_7
                                                                        j_7 -= 1
                                                                        eax_76 = var_5c_1
                                                                        edx_31 = var_60_1
                                                                    while (j_3 != 1)
                                                                    ecx_9 = var_18_2
                                                                    ebx_1 = var_c
                                                                    edi = var_8_6
                                                                    esi_8 = var_14_2
                                                                    eax_74 = esi_1
                                                                    edx_29 = var_3c_4
                                                                
                                                                *(ecx_9 + ebx_1) = 0xff
                                                                edi += ebx_1
                                                                ecx_9 += eax_74
                                                                var_8_6 = edi
                                                                edx_29 += eax_74
                                                                var_18_2 = ecx_9
                                                                esi_8 += eax_74
                                                                var_3c_4 = edx_29
                                                                i_8 = i_15
                                                                i_15 -= 1
                                                                var_14_2 = esi_8
                                                            while (i_8 != 1)
                                                    case 5
                                                        edi = edx_13
                                                        int32_t eax_90 = esi_1
                                                        int32_t i_14 = arg6 - 1
                                                        
                                                        if (arg6 - 1 u>= 1)
                                                            char* var_8_7 = edi
                                                            void* edx_39 = ecx_9 - eax_90
                                                            void* var_34_7 = edx_39
                                                            int32_t i_9
                                                            
                                                            do
                                                                void* esi_23 = nullptr
                                                                
                                                                if (ebx_1 s> 0)
                                                                    int32_t edi_15 = edi - ecx_9
                                                                    int32_t var_60_2 = edi_15
                                                                    
                                                                    do
                                                                        char* edx_40 = esi_23 + ecx_9
                                                                        void* eax_91
                                                                        eax_91.b = *(var_34_7 + esi_23)
                                                                        esi_23 += 1
                                                                        eax_91.b u>>= 1
                                                                        eax_91.b += edx_40[edi_15]
                                                                        *edx_40 = eax_91.b
                                                                    while (esi_23 s< ebx_1)
                                                                    
                                                                    edi = var_8_7
                                                                    eax_90 = esi_1
                                                                    edx_39 = var_34_7
                                                                
                                                                *(ecx_9 + ebx_1) = 0xff
                                                                edi += ebx_1
                                                                edx_39 += eax_90
                                                                var_8_7 = edi
                                                                ecx_9 += eax_90
                                                                var_34_7 = edx_39
                                                                i_9 = i_14
                                                                i_14 -= 1
                                                            while (i_9 != 1)
                                                    case 6
                                                        edi = edx_13
                                                        int32_t eax_92 = esi_1
                                                        int32_t i_24 = arg6 - 1
                                                        int32_t i_25 = i_24
                                                        
                                                        if (i_24 u>= 1)
                                                            char* var_8_8 = edi
                                                            void* edx_42 = ecx_9 - eax_92
                                                            void* var_34_8 = edx_42
                                                            int32_t i_10
                                                            
                                                            do
                                                                if (ebx_1 s> 0)
                                                                    void* edi_16 = nullptr
                                                                    int32_t eax_94 = edi - ecx_9
                                                                    int32_t var_5c_2 = eax_94
                                                                    
                                                                    do
                                                                        char* esi_25 = edi_16 + ecx_9
                                                                        eax_94.b = esi_25[eax_94]
                                                                        eax_94.b += *(edx_42 + edi_16)
                                                                        edi_16 += 1
                                                                        edx_42 = var_34_8
                                                                        *esi_25 = eax_94.b
                                                                        eax_94 = var_5c_2
                                                                    while (edi_16 s< ebx_1)
                                                                    
                                                                    edi = var_8_8
                                                                    eax_92 = esi_1
                                                                    i_24 = i_25
                                                                
                                                                *(ecx_9 + ebx_1) = 0xff
                                                                edi += ebx_1
                                                                edx_42 += eax_92
                                                                var_8_8 = edi
                                                                ecx_9 += eax_92
                                                                var_34_8 = edx_42
                                                                i_10 = i_24
                                                                i_24 -= 1
                                                                i_25 = i_24
                                                            while (i_10 != 1)
                                                
                                                esi_3 = arg8
                                                
                                                if (esi_3 == 0x10)
                                                    uint32_t i_20 = arg6
                                                    
                                                    if (i_20 != 0)
                                                        char* ecx_21 = &eax_25[1] + ebx_1
                                                        uint32_t i_11
                                                        
                                                        do
                                                            *ecx_21 = 0xff
                                                            ecx_21 = &ecx_21[esi_1]
                                                            i_11 = i_20
                                                            i_20 -= 1
                                                        while (i_11 != 1)
                                            
                                            ecx_35 = arg7
                                            edx_10 = var_44_1 + 1
                                            var_44_1 = edx_10
                                        while (edx_10 u< ecx_35)
                                    
                                    if (esi_3 s>= 8)
                                        if (esi_3 == 0x10)
                                            char* edx_66 = arg3[3]
                                            int32_t i_22 = arg5 * arg6 * ecx_35
                                            
                                            if (i_22 != 0)
                                                int32_t i_12
                                                
                                                do
                                                    uint16_t eax_183 = zx.w(*edx_66)
                                                    edx_66 = &edx_66[2]
                                                    *(edx_66 - 2) =
                                                        zx.w(edx_66[0xffffffff]) | eax_183 << 8
                                                    i_12 = i_22
                                                    i_22 -= 1
                                                while (i_12 != 1)
                                    else if (ecx_35 != 0)
                                        char* edi_22 = arg3[3]
                                        char* var_18_3 = edi_22
                                        void* eax_146 = arg5 * arg6 - eax_20 + edi_22
                                        void* var_1c_3 = eax_146
                                        int32_t i_13
                                        
                                        do
                                            char* edx_62 = edi_22
                                            char* esi_36 = eax_146
                                            
                                            if (arg9 != 0)
                                                ebx_1.b = 1
                                            else
                                                ebx_1.b = *(arg8 + 0x800cbc)
                                            
                                            int32_t ecx_37 = var_20_1
                                            var_20_1 = ecx_37
                                            
                                            if (arg8 == 4)
                                                int32_t eax_147 = ecx_37
                                                int32_t var_34_11 = eax_147
                                                
                                                if (eax_147 s>= 2)
                                                    uint32_t j_10 = eax_147 u>> 1
                                                    int32_t ecx_38 = ecx_37 + (neg.d(j_10) << 1)
                                                    var_20_1 = ecx_37
                                                    uint32_t j_4
                                                    
                                                    do
                                                        *edx_62 = (*esi_36 u>> 4) * ebx_1.b
                                                        char ecx_43 = *esi_36
                                                        esi_36 = &esi_36[1]
                                                        edx_62[1] =
                                                            ((zx.d(ecx_43) & 0xf) * zx.d(ebx_1.b)).b
                                                        edx_62 = &edx_62[2]
                                                        j_4 = j_10
                                                        j_10 -= 1
                                                    while (j_4 != 1)
                                                    edi_22 = var_18_3
                                                    eax_147 = ecx_38
                                                
                                                if (eax_147 s<= 0)
                                                    eax_146 = var_1c_3
                                                else
                                                    ecx_37.b = *esi_36
                                                    ecx_37.b u>>= 4
                                                    *edx_62 = ecx_37.b * ebx_1.b
                                                    eax_146 = var_1c_3
                                            else if (arg8 == 2)
                                                int32_t eax_152 = ecx_37
                                                int32_t var_24_5 = eax_152
                                                
                                                if (eax_152 s>= 4)
                                                    uint32_t j_11 = eax_152 u>> 2
                                                    var_24_5 = ecx_37 + (neg.d(j_11) << 2)
                                                    var_20_1 = ecx_37
                                                    uint32_t j_5
                                                    
                                                    do
                                                        *edx_62 = (*esi_36 u>> 6) * ebx_1.b
                                                        edx_62[1] = (*esi_36 u>> 4 & 3) * ebx_1.b
                                                        edx_62[2] = (*esi_36 u>> 2 & 3) * ebx_1.b
                                                        char ecx_56 = *esi_36
                                                        esi_36 = &esi_36[1]
                                                        edx_62[3] =
                                                            ((zx.d(ecx_56) & 3) * zx.d(ebx_1.b)).b
                                                        edx_62 = &edx_62[4]
                                                        j_5 = j_11
                                                        j_11 -= 1
                                                    while (j_5 != 1)
                                                    edi_22 = var_18_3
                                                    eax_152 = var_24_5
                                                
                                                if (eax_152 s> 0)
                                                    ecx_37.b = *esi_36
                                                    ecx_37.b u>>= 6
                                                    eax_152 = var_24_5
                                                    *edx_62 = (zx.d(ecx_37.b) * zx.d(ebx_1.b)).b
                                                    edx_62 = &edx_62[1]
                                                
                                                if (eax_152 s> 1)
                                                    ecx_37.b = *esi_36
                                                    ecx_37.b u>>= 4
                                                    ecx_37.b &= 3
                                                    eax_152 = var_24_5
                                                    *edx_62 = (zx.d(ecx_37.b) * zx.d(ebx_1.b)).b
                                                    edx_62 = &edx_62[1]
                                                
                                                if (eax_152 s<= 2)
                                                    eax_146 = var_1c_3
                                                else
                                                    ecx_37.b = *esi_36
                                                    ecx_37.b u>>= 2
                                                    ecx_37.b &= 3
                                                    *edx_62 = ecx_37.b * ebx_1.b
                                                    eax_146 = var_1c_3
                                            else if (arg8 == 1)
                                                int32_t edi_25 = ecx_37
                                                var_20_1 = ecx_37
                                                
                                                if (edi_25 s>= 8)
                                                    var_20_1 = ecx_37
                                                    uint32_t j_13 = edi_25 u>> 3
                                                    uint32_t j_12 = j_13
                                                    uint32_t j_6
                                                    
                                                    do
                                                        *edx_62 = (*esi_36 u>> 7) * ebx_1.b
                                                        edx_62[1] = (*esi_36 u>> 6 & 1) * ebx_1.b
                                                        edx_62[2] = (*esi_36 u>> 5 & 1) * ebx_1.b
                                                        edx_62[3] = (*esi_36 u>> 4 & 1) * ebx_1.b
                                                        edx_62[4] = (*esi_36 u>> 3 & 1) * ebx_1.b
                                                        edx_62[5] = (*esi_36 u>> 2 & 1) * ebx_1.b
                                                        edx_62[6] = (*esi_36 u>> 1 & 1) * ebx_1.b
                                                        char ecx_81 = *esi_36
                                                        esi_36 = &esi_36[1]
                                                        edx_62[7] =
                                                            ((zx.d(ecx_81) & 1) * zx.d(ebx_1.b)).b
                                                        edx_62 = &edx_62[8]
                                                        j_6 = j_12
                                                        j_12 -= 1
                                                    while (j_6 != 1)
                                                    edi_25 += neg.d(j_13) << 3
                                                
                                                if (edi_25 s> 0)
                                                    ecx_37.b = *esi_36
                                                    ecx_37.b u>>= 7
                                                    *edx_62 = (zx.d(ecx_37.b) * zx.d(ebx_1.b)).b
                                                    edx_62 = &edx_62[1]
                                                
                                                if (edi_25 s> 1)
                                                    ecx_37.b = *esi_36
                                                    ecx_37.b u>>= 6
                                                    ecx_37.b &= 1
                                                    *edx_62 = (zx.d(ecx_37.b) * zx.d(ebx_1.b)).b
                                                    edx_62 = &edx_62[1]
                                                
                                                if (edi_25 s> 2)
                                                    ecx_37.b = *esi_36
                                                    ecx_37.b u>>= 5
                                                    ecx_37.b &= 1
                                                    *edx_62 = (zx.d(ecx_37.b) * zx.d(ebx_1.b)).b
                                                    edx_62 = &edx_62[1]
                                                
                                                if (edi_25 s> 3)
                                                    ecx_37.b = *esi_36
                                                    ecx_37.b u>>= 4
                                                    ecx_37.b &= 1
                                                    *edx_62 = (zx.d(ecx_37.b) * zx.d(ebx_1.b)).b
                                                    edx_62 = &edx_62[1]
                                                
                                                if (edi_25 s> 4)
                                                    ecx_37.b = *esi_36
                                                    ecx_37.b u>>= 3
                                                    ecx_37.b &= 1
                                                    *edx_62 = (zx.d(ecx_37.b) * zx.d(ebx_1.b)).b
                                                    edx_62 = &edx_62[1]
                                                
                                                if (edi_25 s> 5)
                                                    ecx_37.b = *esi_36
                                                    ecx_37.b u>>= 2
                                                    ecx_37.b &= 1
                                                    *edx_62 = (zx.d(ecx_37.b) * zx.d(ebx_1.b)).b
                                                    edx_62 = &edx_62[1]
                                                
                                                edi_22 = var_18_3
                                                
                                                if (edi_25 s<= 6)
                                                    eax_146 = var_1c_3
                                                else
                                                    ecx_37.b = *esi_36
                                                    ecx_37.b u>>= 1
                                                    ecx_37.b &= 1
                                                    *edx_62 = ecx_37.b * ebx_1.b
                                                    eax_146 = var_1c_3
                                            
                                            if (eax_2 != arg5)
                                                char* ecx_92 = arg6 - 1
                                                
                                                if (eax_2 != 1)
                                                    if (ecx_92 s>= 0)
                                                        void* esi_39 =
                                                            (ecx_92 << 1) + 1 + edi_22 + ecx_92
                                                        void* edx_65 = (ecx_92 << 2) + 2 + edi_22
                                                        char* temp19_1
                                                        
                                                        do
                                                            temp19_1 = ecx_92
                                                            ecx_92 -= 1
                                                            *(edx_65 + 1) = 0xff
                                                            char eax_178 = *(esi_39 + 1)
                                                            esi_39 -= 3
                                                            *edx_65 = eax_178
                                                            edx_65 -= 4
                                                            *(edx_65 + 3) = *(esi_39 + 3)
                                                            *(edx_65 + 2) = *(esi_39 + 2)
                                                        while (temp19_1 - 1 s>= 0)
                                                        eax_146 = var_1c_3
                                                else if (ecx_92 s>= 0)
                                                    char* temp20_1
                                                    
                                                    do
                                                        edi_22[(ecx_92 << 1) + 1] = 0xff
                                                        eax_146.b = *(ecx_92 + edi_22)
                                                        edi_22[ecx_92 << 1] = eax_146.b
                                                        temp20_1 = ecx_92
                                                        ecx_92 -= 1
                                                    while (temp20_1 - 1 s>= 0)
                                                    eax_146 = var_1c_3
                                            
                                            eax_146 += edx_1
                                            edi_22 = &edi_22[edx_1]
                                            i_13 = arg7
                                            arg7 -= 1
                                            var_1c_3 = eax_146
                                            var_18_3 = edi_22
                                        while (i_13 != 1)
                                    
                                    return 1

return 0
