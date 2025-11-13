// 函数: sub_738db0
// 地址: 0x738db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edx = arg3
char* var_18 = edx
arg1.b = *edx

if (arg1.b == 0x2d)
    int32_t* i = *arg4
    
    if (i != 0)
        char eax_1
        
        do
            void* eax = *i
            void* ecx = &i[1]
            int32_t* i_3 = i
            i = *ecx
            eax_1 = sub_735490(&edx[1], eax)
            
            if (eax_1 != 0)
                int32_t* eax_2 = sub_64bfd0(0xc)
                eax_2[3] += 1
                
                if (*eax_2 == 0)
                    sub_64be70(eax_2)
                
                void** ecx_3 = *eax_2
                *eax_2 = *ecx_3
                ecx_3[2] = 0
                *ecx_3 = eax
                ecx_3[1] = 0
                ecx_3[2] = arg2[1]
                void* eax_6 = arg2[1]
                
                if (eax_6 == 0)
                    *arg2 = ecx_3
                else
                    *(eax_6 + 4) = ecx_3
                
                arg2[2] += 1
                arg2[1] = ecx_3
                int32_t esi_2 = *ecx
                void* eax_7 = i_3[2]
                int32_t* eax_8
                
                if (eax_7 == 0)
                    eax_8 = arg4
                    *eax_8 = esi_2
                else
                    *(eax_7 + 4) = esi_2
                    eax_8 = arg4
                
                void* esi_3 = *ecx
                int32_t edx_3 = i_3[2]
                
                if (esi_3 == 0)
                    eax_8[1] = edx_3
                else
                    *(esi_3 + 8) = edx_3
                
                eax_8[2] -= 1
                eax_1 = sub_64c080(i_3, 0xc)
            
            edx = var_18
        while (i != 0)
        
        return eax_1
else if (arg1.b != 0x21)
    int32_t* i_5
    
    for (int32_t* i_1 = *arg2; i_1 != 0; i_1 = i_5)
        void* esi_8 = *i_1
        i_5 = i_1[1]
        arg1 = sub_735490(var_18, esi_8)
        
        if (arg1.b != 0)
            if (*(esi_8 + 4) == 3)
                int32_t* eax_22 = data_147ac2c
                int32_t ecx_13 = 0
                int32_t* eax_23 = *eax_22
                
                while (true)
                    int32_t j_1 = *eax_23
                    int32_t j
                    
                    if (j_1 != 0)
                        j = j_1
                        
                        do
                            int32_t* ecx_14 = sub_6a01a0(&j)[1]
                            
                            if (ecx_14[1] == 0x12)
                                void* eax_25 = sub_5af880(ecx_14)
                                int32_t ecx_15 = 0
                                int32_t edx_7 = *(eax_25 + 0x1c)
                                
                                if (edx_7 s> 0)
                                    int32_t* eax_26 = *(eax_25 + 0x20)
                                    
                                    do
                                        if (*eax_26 == esi_8)
                                            goto label_7390dd
                                        
                                        ecx_15 += 1
                                        eax_26 = &eax_26[0xc]
                                    while (ecx_15 s< edx_7)
                        while (j != 0)
                        
                        break
                    
                    ecx_13 += 1
                    eax_23 = &eax_23[1]
                    
                    if (ecx_13 u> eax_22[1])
                        j = j_1
                        break
            
            int32_t* eax_27 = sub_64bfd0(0xc)
            eax_27[3] += 1
            
            if (*eax_27 == 0)
                sub_64be70(eax_27)
            
            int32_t* ecx_17 = *eax_27
            *eax_27 = *ecx_17
            ecx_17[2] = 0
            *ecx_17 = esi_8
            ecx_17[1] = 0
            ecx_17[2] = arg4[1]
            void* eax_30 = arg4[1]
            
            if (eax_30 == 0)
                *arg4 = ecx_17
            else
                *(eax_30 + 4) = ecx_17
            
            arg4[2] += 1
            arg4[1] = ecx_17
        label_7390dd:
            void* ecx_18 = i_1[2]
            int32_t eax_31 = i_1[1]
            
            if (ecx_18 == 0)
                *arg2 = eax_31
            else
                *(ecx_18 + 4) = eax_31
            
            void* ecx_19 = i_1[1]
            int32_t eax_32 = i_1[2]
            
            if (ecx_19 == 0)
                arg2[1] = eax_32
            else
                *(ecx_19 + 8) = eax_32
            
            arg2[2] -= 1
            arg1 = sub_64c080(i_1, 0xc)
else
    arg1 = atoi(&edx[1])
    int32_t esi_4 = arg1
    int32_t var_18_1 = esi_4
    
    if (esi_4 s> 0)
        int32_t* i_2 = *arg4
        
        if (i_2 != 0)
            int32_t* eax_14
            
            do
                eax_14 = *i_2
                void* ecx_5 = &i_2[1]
                int32_t* i_4 = i_2
                i_2 = *ecx_5
                int32_t* var_c_2 = eax_14
                
                if (eax_14[1] == 3)
                    int32_t* ecx_7 = *sub_5af880(eax_14)
                    int32_t eax_11 = *ecx_7
                    float xmm2_2 = ecx_7[3] f* ecx_7[2]
                    int32_t eax_13 = ecx_7[1]
                    eax_14 = eax_13 u>> 0x1f
                    float xmm2_3 = float.s(esi_4)
                    
                    if (_mm_cvtpd_ps(float.d(eax_11) f+ *((eax_11 u>> 0x1f << 3) + &data_893660))
                            * xmm2_2 > xmm2_3 || not(
                            _mm_cvtpd_ps(float.d(eax_13) f+ *((eax_14 << 3) + &data_893660))
                            * xmm2_2 <= xmm2_3))
                        int32_t* eax_15 = sub_64bfd0(0xc)
                        eax_15[3] += 1
                        
                        if (*eax_15 == 0)
                            sub_64be70(eax_15)
                        
                        int32_t** ecx_9 = *eax_15
                        *eax_15 = *ecx_9
                        ecx_9[2] = 0
                        *ecx_9 = var_c_2
                        ecx_9[1] = 0
                        ecx_9[2] = arg2[1]
                        void* eax_19 = arg2[1]
                        
                        if (eax_19 == 0)
                            *arg2 = ecx_9
                        else
                            *(eax_19 + 4) = ecx_9
                        
                        arg2[2] += 1
                        arg2[1] = ecx_9
                        int32_t esi_6 = *ecx_5
                        void* eax_20 = i_4[2]
                        int32_t* eax_21
                        
                        if (eax_20 == 0)
                            eax_21 = arg4
                            *eax_21 = esi_6
                        else
                            *(eax_20 + 4) = esi_6
                            eax_21 = arg4
                        
                        void* esi_7 = *ecx_5
                        int32_t edx_5 = i_4[2]
                        
                        if (esi_7 == 0)
                            eax_21[1] = edx_5
                        else
                            *(esi_7 + 8) = edx_5
                        
                        eax_21[2] -= 1
                        eax_14 = sub_64c080(i_4, 0xc)
                        esi_4 = var_18_1
            while (i_2 != 0)
            
            return eax_14

return arg1
