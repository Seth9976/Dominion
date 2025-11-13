// 函数: sub_680320
// 地址: 0x680320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg3
int32_t* var_74 = arg2
int32_t* var_94 = esi
void* i = arg2 - esi
int32_t* j_2
int128_t var_50

if (i s>= 0x39c)
    int32_t ecx = arg5
    int32_t edi_1 = arg4
    
    do
        if (edi_1 s<= 0)
            void* j_1 = arg2 - var_94
            j_2 = j_1
            i = j_1 s/ 0x1c
            int32_t j = i s>> 1
            
            if (j s> 0)
                void* esi_5 = &var_94[j * 7]
                
                do
                    int32_t eax_18 = *(esi_5 - 4)
                    esi_5 -= 0x1c
                    int32_t var_a4_3 = ecx
                    j -= 1
                    int32_t var_38_1 = eax_18
                    var_50 = *esi_5
                    int64_t var_40_1 = *(esi_5 + 0x10)
                    sub_681540(&var_50, j, var_94, i, &var_50)
                    ecx = arg5
                while (j s> 0)
                
                j_1 = j_2
            
            if (i s< 2)
                goto label_680618
            
            void* j_5 = &var_74[-7]
            int32_t eax_23
            
            do
                j_2 = j_5
                eax_23 = j_1 s/ 0x1c
                
                if (eax_23 s>= 2)
                    int32_t eax_24 = *(j_5 + 0x18)
                    var_50 = *j_5
                    int32_t var_38_2 = eax_24
                    int64_t var_40_2 = *(j_5 + 0x10)
                    int32_t var_a4_4 = ecx
                    *j_5 = *var_94
                    *(j_5 + 0x10) = *(var_94 + 0x10)
                    *(j_5 + 0x18) = var_94[6]
                    void* eax_29 = (j_5 - var_94) s/ 0x1c
                    eax_23 = sub_681540(eax_29, 0, var_94, eax_29, &var_50)
                
                j_5 -= 0x1c
                j_1 = j_2 - var_94
                ecx = arg5
            while (j_1 s>= 0x38)
            
            return eax_23
        
        sub_680a70(i, esi, &j_2, arg2, ecx)
        edi_1 = (edi_1 s>> 1) + (edi_1 s>> 2)
        int32_t* var_64
        
        if ((j_2 - var_94) s/ 0x1c s>= (var_74 - var_64) s/ 0x1c)
            sub_680320(edi_1, arg5)
            arg2 = j_2
            esi = var_94
            var_74 = arg2
        else
            sub_680320(edi_1, arg5)
            esi = var_64
            arg2 = var_74
            var_94 = esi
        
        ecx = arg5
        i = arg2 - esi
    while (i s>= 0x39c)

if (esi != arg2)
    i = &esi[7]
    void* i_1 = i
    
    if (i != arg2)
        uint32_t count_1 = 0x1c
        
        while (true)
            int128_t xmm0_1 = *i
            void* i_2 = i
            int64_t xmm1_1 = *(i + 0x10)
            j_2 = *(i + 0x18)
            int32_t eax_11 = *esi
            void* edx_9 = xmm0_1
            var_50 = xmm0_1
            int64_t var_30_1 = xmm0_1.q
            char* ecx_8 = *(eax_11 + 8)
            void* var_90_1 = edx_9
            void* eax_12 = *(edx_9 + 8)
            int32_t eax_31
            
            while (true)
                edx_9.b = *eax_12
                char temp0_1 = *ecx_8
                bool c_1 = edx_9.b u< temp0_1
                
                if (edx_9.b == temp0_1)
                    if (edx_9.b == 0)
                        eax_31 = 0
                        break
                    
                    edx_9.b = *(eax_12 + 1)
                    char temp2_1 = ecx_8[1]
                    c_1 = edx_9.b u< temp2_1
                    
                    if (edx_9.b == temp2_1)
                        eax_12 += 2
                        ecx_8 = &ecx_8[2]
                        
                        if (edx_9.b != 0)
                            continue
                        
                        eax_31 = 0
                        break
                
                eax_31 = sbb.d(eax_12, eax_12, c_1) | 1
                break
            
            uint32_t count
            
            if (eax_31 s< 0)
            label_6805c5:
                count = count_1
                memmove(i_1 - count + 0x1c, esi, count)
                int32_t* j_3 = j_2
                *esi = var_50
                *(esi + 0x10) = xmm1_1
                esi[6] = j_3
            else
                int32_t edx_21 = var_30_1:4.d
                void* ecx_13
                
                if (eax_31 s> 0)
                    ecx_13 = var_90_1
                else
                    int32_t temp3_1 = esi[1]
                    
                    if (edx_21 s< temp3_1)
                        goto label_6805c5
                    
                    ecx_13 = var_90_1
                    
                    if (edx_21 s<= temp3_1 && ecx_13 u< *esi)
                        goto label_6805c5
                
                void* i_3 = i_1
                
                while (true)
                    void* eax_36 = *(i_3 - 0x1c)
                    i_3 -= 0x1c
                    char* ecx_14 = *(ecx_13 + 8)
                    char* eax_37 = *(eax_36 + 8)
                    int32_t eax_39
                    
                    while (true)
                        edx_21.b = *ecx_14
                        char temp4_1 = *eax_37
                        bool c_2 = edx_21.b u< temp4_1
                        
                        if (edx_21.b == temp4_1)
                            if (edx_21.b == 0)
                                eax_39 = 0
                                break
                            
                            edx_21.b = ecx_14[1]
                            char temp6_1 = eax_37[1]
                            c_2 = edx_21.b u< temp6_1
                            
                            if (edx_21.b == temp6_1)
                                ecx_14 = &ecx_14[2]
                                eax_37 = &eax_37[2]
                                
                                if (edx_21.b != 0)
                                    continue
                                
                                eax_39 = 0
                                break
                        
                        eax_39 = sbb.d(eax_37, eax_37, c_2) | 1
                        break
                    
                    if (eax_39 s< 0)
                        ecx_13 = var_90_1
                    else
                        if (eax_39 s> 0)
                            break
                        
                        int32_t eax_40 = *(i_3 + 4)
                        int32_t temp7_1 = var_30_1:4.d
                        
                        if (temp7_1 s< eax_40)
                            ecx_13 = var_90_1
                        else
                            if (temp7_1 s> eax_40)
                                break
                            
                            ecx_13 = var_90_1
                            
                            if (ecx_13 u>= *i_3)
                                break
                    
                    *i_2 = *i_3
                    *(i_2 + 0x10) = *(i_3 + 0x10)
                    *(i_2 + 0x18) = *(i_3 + 0x18)
                    i_2 = i_3
                
                int32_t* j_4 = j_2
                esi = var_94
                *i_2 = var_50
                *(i_2 + 0x10) = xmm1_1
                *(i_2 + 0x18) = j_4
                count = count_1
            
            i = i_1 + 0x1c
            count_1 = count + 0x1c
            i_1 = i
            
            if (i == var_74)
                break

label_680618:
return i
