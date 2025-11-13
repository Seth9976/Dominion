// 函数: sub_638c00
// 地址: 0x638c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi_2 = &arg2[(((arg4 - arg2) s/ 0x18) s>> 1) * 6]
int32_t* ebx_1 = arg2
int32_t eax_4 = (arg4 - 0x18 - ebx_1) s/ 0x18

if (eax_4 s<= 0x28)
    int32_t* var_28_1 = arg5
    sub_6397d0(eax_4, esi_2, ebx_1, arg4 - 0x18)
else
    int32_t eax_6 = (eax_4 + 1) s>> 3
    int32_t edi_3 = eax_6 * 0x18
    int32_t* eax_8 = &arg2[eax_6 * 0xc]
    int32_t* var_28 = arg5
    sub_6397d0(eax_8, &ebx_1[eax_6 * 6], arg2, eax_8)
    int32_t* eax_9 = &esi_2[eax_6 * 6]
    int32_t* var_30_1 = arg5
    sub_6397d0(eax_9, esi_2, esi_2 - edi_3, eax_9)
    int32_t* var_38_1 = arg5
    void* eax_12 = arg4 - 0x18 - eax_6 * 0x30
    int32_t* edx_7 = arg4 - 0x18 - edi_3
    int32_t* var_40_1 = arg5
    ebx_1 = arg2
    sub_6397d0(sub_6397d0(eax_12, edx_7, eax_12, arg4 - 0x18), esi_2, &ebx_1[eax_6 * 6], edx_7)

int32_t* edi_5 = &esi_2[6]
arg5 = edi_5

if (ebx_1 u< esi_2)
    int32_t* ecx_15 = &esi_2[-2]
    
    do
        int32_t edx_10 = ecx_15[-4]
        int32_t ebx_3 = *esi_2
        
        if (edx_10 s< ebx_3)
            break
        
        if (edx_10 s<= ebx_3)
            int32_t edi_4 = ecx_15[-1]
            int32_t eax_14 = ecx_15[4]
            int32_t temp0_1 = ecx_15[5]
            
            if (edi_4 u< temp0_1)
                break
            
            if (edi_4 u<= temp0_1)
                if (ecx_15[-2] u< eax_14)
                    break
                
                int32_t temp5_1 = ecx_15[5]
                
                if (edi_4 u<= temp5_1 && (edi_4 u< temp5_1 || ecx_15[-2] u<= eax_14)
                        && *ecx_15 u< ecx_15[6])
                    break
        
        if (ebx_3 s< edx_10)
            break
        
        int32_t ebx_4 = ecx_15[-1]
        int32_t edx_11 = ecx_15[4]
        int32_t eax_16 = ecx_15[-2]
        int32_t temp2_1 = ecx_15[5]
        
        if (temp2_1 u< ebx_4)
            break
        
        if (temp2_1 u<= ebx_4)
            if (edx_11 u< eax_16)
                break
            
            int32_t temp8_1 = ecx_15[5]
            
            if (temp8_1 u<= ebx_4 && (temp8_1 u< ebx_4 || edx_11 u<= eax_16)
                    && ecx_15[6] u< *ecx_15)
                break
        
        esi_2 -= 0x18
        ecx_15 -= 0x18
    while (arg2 u< esi_2)
    
    edi_5 = arg5

void* eax_22 = arg4

if (edi_5 u< eax_22)
    int32_t edx_12 = *esi_2
    
    do
        int32_t ecx_17 = *edi_5
        
        if (ecx_17 s< edx_12)
            break
        
        if (ecx_17 s<= edx_12)
            int32_t edx_13 = edi_5[3]
            int32_t temp1_1 = esi_2[3]
            int32_t ebx_5 = edi_5[2]
            int32_t eax_18 = esi_2[2]
            edx_12 = *esi_2
            
            if (edx_13 u< temp1_1)
                break
            
            if (edx_13 u<= temp1_1 && ebx_5 u< eax_18)
                break
            
            int32_t ecx_16 = edi_5[3]
            int32_t temp4_1 = esi_2[3]
            ecx_17 = *edi_5
            
            if (ecx_16 u<= temp4_1 && (ecx_16 u< temp4_1 || ebx_5 u<= eax_18)
                    && edi_5[4] u< esi_2[4])
                break
        
        if (edx_12 s< ecx_17)
            break
        
        int32_t ebx_6 = edi_5[3]
        int32_t ecx_18 = esi_2[2]
        int32_t eax_20 = edi_5[2]
        int32_t temp3_1 = esi_2[3]
        
        if (temp3_1 u< ebx_6)
            break
        
        if (temp3_1 u<= ebx_6)
            if (ecx_18 u< eax_20)
                break
            
            int32_t temp10_1 = esi_2[3]
            
            if (temp10_1 u<= ebx_6 && (temp10_1 u< ebx_6 || ecx_18 u<= eax_20)
                    && esi_2[4] u< edi_5[4])
                break
        
        edi_5 = &edi_5[6]
    while (edi_5 u< arg4)
    
    eax_22 = arg4
    arg5 = edi_5

int32_t* ecx_19 = edi_5
int32_t* ebx_7 = esi_2
label_638db4:
int32_t* var_c_1 = ebx_7

while (true)
    int32_t* var_10_1 = ecx_19
    
    while (true)
        if (ecx_19 u< eax_22)
            do
                int32_t edx_15 = *esi_2
                int32_t eax_23 = *ecx_19
                
                if (edx_15 s>= eax_23)
                    if (edx_15 s> eax_23)
                        goto label_638e05
                    
                    int32_t edx_14 = esi_2[3]
                    int32_t temp7_1 = ecx_19[3]
                    int32_t ebx_8 = esi_2[2]
                    edx_15 = *esi_2
                    
                    if (edx_14 u>= temp7_1 && (edx_14 u> temp7_1 || ebx_8 u>= ecx_19[2]))
                        int32_t eax_24 = esi_2[3]
                        int32_t temp12_1 = ecx_19[3]
                        eax_23 = *ecx_19
                        
                        if (eax_24 u> temp12_1 || (eax_24 u>= temp12_1 && ebx_8 u> ecx_19[2]))
                            goto label_638e05
                        
                        if (esi_2[4] u>= ecx_19[4])
                            eax_23 = *ecx_19
                        label_638e05:
                            
                            if (eax_23 s< edx_15)
                                break
                            
                            int32_t ebx_9 = esi_2[3]
                            int32_t edx_16 = ecx_19[2]
                            int32_t eax_26 = esi_2[2]
                            int32_t temp9_1 = ecx_19[3]
                            
                            if (temp9_1 u< ebx_9)
                                break
                            
                            if (temp9_1 u<= ebx_9)
                                if (edx_16 u< eax_26)
                                    break
                                
                                int32_t temp14_1 = ecx_19[3]
                                
                                if (temp14_1 u<= ebx_9 && (temp14_1 u< ebx_9 || edx_16 u<= eax_26)
                                        && ecx_19[4] u< esi_2[4])
                                    break
                            
                            if (edi_5 != ecx_19)
                                int128_t xmm1_1 = *edi_5
                                int64_t xmm2_1 = *(edi_5 + 0x10)
                                *edi_5 = *ecx_19
                                *(edi_5 + 0x10) = *(ecx_19 + 0x10)
                                *ecx_19 = xmm1_1
                                *(ecx_19 + 0x10) = xmm2_1
                            
                            edi_5 = &edi_5[6]
                
                ecx_19 = &ecx_19[6]
            while (ecx_19 u< arg4)
            
            ebx_7 = var_c_1
            arg5 = edi_5
            var_10_1 = ecx_19
        
        bool cond:2_1 = ebx_7 != arg2
        
        if (ebx_7 u> arg2)
            void* edx_17 = &ebx_7[-6]
            int32_t* eax_33
            
            do
                int32_t eax_30 = *edx_17
                int32_t temp6_1 = *esi_2
                
                if (eax_30 s>= temp6_1)
                    if (eax_30 s> temp6_1)
                        goto label_638eb0
                    
                    int32_t edi_6 = *(edx_17 + 0xc)
                    int32_t ecx_20 = esi_2[2]
                    int32_t temp11_1 = esi_2[3]
                    
                    if (edi_6 u>= temp11_1)
                        if (edi_6 u> temp11_1)
                            goto label_638eb0
                        
                        if (*(edx_17 + 8) u>= ecx_20)
                            int32_t temp15_1 = esi_2[3]
                            
                            if (edi_6 u> temp15_1
                                    || (edi_6 u>= temp15_1 && *(edx_17 + 8) u> ecx_20))
                                goto label_638eb0
                            
                            if (*(edx_17 + 0x10) u>= esi_2[4])
                                eax_30 = *edx_17
                            label_638eb0:
                                
                                if (*esi_2 s< eax_30)
                                    eax_33 = arg2
                                    break
                                
                                int32_t ecx_21 = esi_2[3]
                                int32_t eax_31 = *(edx_17 + 8)
                                int32_t temp13_1 = *(edx_17 + 0xc)
                                
                                if (ecx_21 u< temp13_1)
                                    eax_33 = arg2
                                    break
                                
                                if (ecx_21 u<= temp13_1)
                                    if (esi_2[2] u< eax_31)
                                        eax_33 = arg2
                                        break
                                        break
                                    
                                    int32_t temp16_1 = *(edx_17 + 0xc)
                                    
                                    if (ecx_21 u<= temp16_1
                                            && (ecx_21 u< temp16_1 || esi_2[2] u<= eax_31)
                                            && esi_2[4] u< *(edx_17 + 0x10))
                                        eax_33 = arg2
                                        break
                                        break
                                
                                esi_2 -= 0x18
                                
                                if (esi_2 != edx_17)
                                    int128_t xmm1_2 = *esi_2
                                    int64_t xmm2_2 = *(esi_2 + 0x10)
                                    *esi_2 = *edx_17
                                    *(esi_2 + 0x10) = *(edx_17 + 0x10)
                                    *edx_17 = xmm1_2
                                    *(edx_17 + 0x10) = xmm2_2
                
                eax_33 = arg2
                ebx_7 -= 0x18
                edx_17 -= 0x18
            while (eax_33 u< ebx_7)
            
            ecx_19 = var_10_1
            cond:2_1 = ebx_7 != eax_33
            edi_5 = arg5
            var_c_1 = ebx_7
        
        eax_22 = arg4
        
        if (not(cond:2_1))
            if (ecx_19 == eax_22)
                arg3[1] = edi_5
                *arg3 = esi_2
                return arg3
            
            if (edi_5 != ecx_19)
                int128_t xmm1_3 = *esi_2
                int64_t xmm2_3 = *(esi_2 + 0x10)
                *esi_2 = *edi_5
                *(esi_2 + 0x10) = *(edi_5 + 0x10)
                *edi_5 = xmm1_3
                *(edi_5 + 0x10) = xmm2_3
            
            edi_5 = &edi_5[6]
            int128_t xmm1_4 = *esi_2
            arg5 = edi_5
            int64_t xmm2_4 = *(esi_2 + 0x10)
            *esi_2 = *ecx_19
            *(esi_2 + 0x10) = *(ecx_19 + 0x10)
            esi_2 = &esi_2[6]
            *ecx_19 = xmm1_4
            *(ecx_19 + 0x10) = xmm2_4
            ecx_19 = &ecx_19[6]
            break
        
        ebx_7 = &ebx_7[-6]
        var_c_1 = ebx_7
        
        if (ecx_19 != eax_22)
            int128_t xmm1_7 = *ecx_19
            int64_t xmm2_7 = *(ecx_19 + 0x10)
            *ecx_19 = *ebx_7
            *(ecx_19 + 0x10) = *(ebx_7 + 0x10)
            ecx_19 = &ecx_19[6]
            *ebx_7 = xmm1_7
            *(ebx_7 + 0x10) = xmm2_7
            goto label_638db4
        
        esi_2 -= 0x18
        
        if (ebx_7 != esi_2)
            int128_t xmm1_5 = *ebx_7
            int64_t xmm2_5 = *(ebx_7 + 0x10)
            *ebx_7 = *esi_2
            *(ebx_7 + 0x10) = *(esi_2 + 0x10)
            *esi_2 = xmm1_5
            *(esi_2 + 0x10) = xmm2_5
        
        int128_t xmm0_11 = *(edi_5 - 0x18)
        edi_5 -= 0x18
        int128_t xmm1_6 = *esi_2
        arg5 = edi_5
        int64_t xmm2_6 = *(esi_2 + 0x10)
        *esi_2 = xmm0_11
        *(esi_2 + 0x10) = *(edi_5 + 0x10)
        *edi_5 = xmm1_6
        *(edi_5 + 0x10) = xmm2_6
