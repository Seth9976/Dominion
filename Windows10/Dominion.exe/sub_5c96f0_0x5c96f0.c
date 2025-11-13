// 函数: sub_5c96f0
// 地址: 0x5c96f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = &arg2[(arg4 - arg2) s>> 3]
int32_t eax_5 = (arg4 - 4 - arg2) s>> 2

if (eax_5 s<= 0x28)
    sub_5c9ba0(eax_5, edi, arg2, arg4 - 4, arg5)
else
    int32_t eax_7 = (eax_5 + 1) s>> 3
    int32_t ebx_1 = eax_7 << 2
    int32_t* edx = &arg2[eax_7]
    int32_t* eax_9 = &arg2[eax_7 * 2]
    sub_5c9ba0(eax_9, edx, arg2, eax_9, arg5)
    int32_t* eax_10 = &edi[eax_7]
    sub_5c9ba0(eax_10, edi, edi - ebx_1, eax_10, arg5)
    int32_t* ebx_3 = arg4 - 4 - ebx_1
    void* eax_12 = arg4 - 4 - (eax_7 << 3)
    sub_5c9ba0(sub_5c9ba0(eax_12, ebx_3, eax_12, arg4 - 4, arg5), edi, edx, ebx_3, arg5)

int32_t* ebx_4 = &edi[1]
int32_t eax_14

if (arg2 u>= edi)
label_5c980a:
    void* ecx_13 = arg4
    
    if (ebx_4 u>= ecx_13)
    label_5c9874:
        int32_t* eax_21 = edi
        int32_t* esi_3 = ebx_4
        int32_t* var_8_2 = eax_21
        
        while (true)
            if (esi_3 u< ecx_13)
                while (true)
                    int32_t edx_7 = data_ccea08
                    eax_14 = *esi_3
                    int32_t ecx_14 = *edi
                    
                    if (edx_7 == 0)
                        goto label_5c9a4e
                    
                    int32_t eax_22 = edx_7(ecx_14, eax_14, arg5)
                    
                    if (eax_22 s>= 0 && (eax_22 s> 0 || ecx_14 s< eax_14))
                        goto label_5c98f3
                    
                    int32_t edx_8 = data_ccea08
                    eax_14 = *edi
                    int32_t ecx_15 = *esi_3
                    
                    if (edx_8 == 0)
                        goto label_5c9a4e
                    
                    int32_t eax_24 = edx_8(ecx_15, eax_14, arg5)
                    
                    if (eax_24 s< 0)
                    label_5c98e6:
                        
                        if (ebx_4 != esi_3)
                            int32_t ecx_16 = *ebx_4
                            *ebx_4 = *esi_3
                            *esi_3 = ecx_16
                        
                        ebx_4 = &ebx_4[1]
                    label_5c98f3:
                        esi_3 = &esi_3[1]
                        
                        if (esi_3 u< arg4)
                            continue
                    else if (eax_24 s<= 0 && ecx_15 s>= eax_14)
                        goto label_5c98e6
                    
                    eax_21 = var_8_2
                    break
            
            bool cond:1_1 = eax_21 != arg2
            
            if (eax_21 u> arg2)
                void* edx_9 = &eax_21[-1]
                void* var_10_1 = edx_9
                
                while (true)
                    int32_t ecx_18 = *edx_9
                    int32_t edx_10 = data_ccea08
                    eax_14 = *edi
                    
                    if (edx_10 == 0)
                        goto label_5c9a4e
                    
                    int32_t eax_27 = edx_10(ecx_18, eax_14, arg5)
                    int32_t* ecx_21
                    void* edx_12
                    
                    if (eax_27 s< 0 || (eax_27 s<= 0 && ecx_18 s>= eax_14))
                        int32_t edx_11 = data_ccea08
                        int32_t ecx_19 = *edi
                        eax_14 = *var_10_1
                        
                        if (edx_11 == 0)
                            goto label_5c9a4e
                        
                        int32_t eax_30 = edx_11(ecx_19, eax_14, arg5)
                        
                        if (eax_30 s< 0 || (eax_30 s<= 0 && ecx_19 s>= eax_14))
                            edx_12 = var_10_1
                            edi -= 4
                            
                            if (edi != edx_12)
                                int32_t ecx_20 = *edi
                                *edi = *edx_12
                                *edx_12 = ecx_20
                            
                            goto label_5c998d
                        
                        ecx_21 = arg2
                        eax_21 = var_8_2
                    else
                        edx_12 = var_10_1
                    label_5c998d:
                        edx_9 = edx_12 - 4
                        ecx_21 = arg2
                        eax_21 = var_8_2 - 4
                        var_8_2 = eax_21
                        var_10_1 = edx_9
                        
                        if (ecx_21 u< eax_21)
                            continue
                    cond:1_1 = eax_21 != ecx_21
                    break
            
            if (cond:1_1)
                var_8_2 = &eax_21[-1]
                
                if (esi_3 != arg4)
                    int32_t ecx_26 = *esi_3
                    var_8_2 = &eax_21[-1]
                    *esi_3 = eax_21[-1]
                    esi_3 = &esi_3[1]
                    eax_21 = var_8_2
                    *eax_21 = ecx_26
                    ecx_13 = arg4
                else
                    edi -= 4
                    
                    if (&eax_21[-1] != edi)
                        int32_t ecx_24 = eax_21[-1]
                        *var_8_2 = *edi
                        *edi = ecx_24
                    
                    int32_t ecx_25 = *edi
                    ebx_4 -= 4
                    *edi = *ebx_4
                    eax_21 = var_8_2
                    *ebx_4 = ecx_25
                    ecx_13 = arg4
            else
                if (esi_3 == arg4)
                    break
                
                if (ebx_4 != esi_3)
                    int32_t ecx_22 = *edi
                    *edi = *ebx_4
                    *ebx_4 = ecx_22
                
                int32_t ecx_23 = *edi
                ebx_4 = &ebx_4[1]
                *edi = *esi_3
                edi = &edi[1]
                eax_21 = var_8_2
                *esi_3 = ecx_23
                esi_3 = &esi_3[1]
                ecx_13 = arg4
        
        *arg3 = edi
        arg3[1] = ebx_4
        return arg3
    
    while (true)
        int32_t ecx_11 = data_ccea08
        eax_14 = *ebx_4
        int32_t esi_1 = *edi
        
        if (ecx_11 == 0)
            break
        
        int32_t eax_19 = ecx_11(eax_14, esi_1, arg5)
        
        if (eax_19 s< 0)
        label_5c983b:
            int32_t ecx_12 = data_ccea08
            eax_14 = *edi
            int32_t esi_2 = *ebx_4
            
            if (ecx_12 == 0)
                break
            
            int32_t eax_20 = ecx_12(eax_14, esi_2, arg5)
            
            if (eax_20 s< 0)
            label_5c9865:
                ecx_13 = arg4
                ebx_4 = &ebx_4[1]
                
                if (ebx_4 u>= ecx_13)
                    goto label_5c9874
                
                continue
            else if (eax_20 s<= 0 && eax_14 s>= esi_2)
                goto label_5c9865
        else if (eax_19 s<= 0 && eax_14 s>= esi_1)
            goto label_5c983b
        
        ecx_13 = arg4
        goto label_5c9874
else
    while (true)
        int32_t edx_5 = data_ccea08
        eax_14 = *edi
        int32_t ecx_9 = edi[-1]
        
        if (edx_5 == 0)
            break
        
        int32_t eax_15 = edx_5(ecx_9, eax_14, arg5)
        
        if (eax_15 s>= 0)
            if (eax_15 s> 0)
                goto label_5c980a
            
            if (ecx_9 s< eax_14)
                goto label_5c980a
        
        int32_t edx_6 = data_ccea08
        eax_14 = edi[-1]
        int32_t ecx_10 = *edi
        
        if (edx_6 == 0)
            break
        
        int32_t eax_17 = edx_6(ecx_10, eax_14, arg5)
        
        if (eax_17 s>= 0)
            if (eax_17 s> 0)
                goto label_5c980a
            
            if (ecx_10 s< eax_14)
                goto label_5c980a
        
        edi = &edi[-1]
        
        if (arg2 u>= edi)
            goto label_5c980a

label_5c9a4e:
sub_63b870(eax_14, &data_801800, "gPile.fnItemCompare", 
    "C:\x\ax2017\Jams\Dominion\code\PileLayout.cpp", 0x16, "ItemCompare")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
