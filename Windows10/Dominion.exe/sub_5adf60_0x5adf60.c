// 函数: sub_5adf60
// 地址: 0x5adf60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg4
int32_t* ebx = arg3
int32_t* var_1c = ebx
float xmm0 = *ebx
int32_t eax_2 = (esi - ebx) s>> 3

if (eax_2 s<= 0x28)
    float xmm1_11 = *arg2
    void* edx_1
    
    if (xmm0 > xmm1_11)
    label_5ae30f:
        int32_t edx_2 = *arg2
        int32_t esi_8 = arg2[1]
        eax_2 = *ebx
        int32_t ecx_23 = ebx[1]
        *arg2 = eax_2
        arg2[1] = ecx_23
        *ebx = edx_2
        edx_1 = &arg2[1]
        ebx[1] = esi_8
        esi = arg4
    else
        edx_1 = &arg2[1]
        
        if (not(xmm1_11 > xmm0) && not(ebx[1] f<= *edx_1))
            goto label_5ae30f
    
    int32_t xmm1_12 = *esi
    int32_t xmm0_31 = *arg2
    
    if (xmm0_31 f> xmm1_12)
    label_5ae345:
        int32_t eax_39 = *esi
        int32_t ecx_24 = arg2[1]
        int32_t* eax_40 = esi[1]
        *esi = *arg2
        eax_2 = eax_40
        esi[1] = ecx_24
        *arg2 = eax_39
        int32_t xmm1_13 = *arg2
        arg2[1] = eax_2
        int32_t xmm0_33 = *ebx
        
        if (xmm0_33 f> xmm1_13)
        label_5ae383:
            int32_t ecx_25 = ebx[1]
            *arg2 = *ebx
            eax_2 = eax_40
            arg2[1] = ecx_25
            *ebx = eax_39
            ebx[1] = eax_2
        else if (not(xmm1_13 f> xmm0_33) && not(ebx[1] f<= *edx_1))
            goto label_5ae383
    else if (not(xmm1_12 f> xmm0_31) && not(*edx_1 f<= esi[1]))
        goto label_5ae345
else
    int32_t eax_4 = (eax_2 + 1) s>> 3
    int32_t ecx_1 = eax_4 << 4
    int32_t var_18_1 = ecx_1
    int32_t* edx = eax_4 << 3
    float xmm1 = *(edx + ebx)
    int32_t* esi_2 = &ebx[1] + edx
    int32_t* var_14_1
    
    if (xmm0 > xmm1)
    label_5adfc1:
        int32_t xmm0_2 = *esi_2
        int32_t eax_5 = *ebx
        *(edx + ebx + 4) = ebx[1]
        ecx_1 = var_18_1
        *(edx + ebx) = eax_5
        *ebx = xmm1
        ebx[1] = xmm0_2
        var_14_1 = esi_2
    else
        var_14_1 = esi_2
        
        if (not(xmm1 > xmm0))
            if (not(ebx[1] f<= *esi_2))
                goto label_5adfc1
            
            var_14_1 = esi_2
    
    int32_t xmm1_1 = *(ecx_1 + ebx)
    int32_t xmm0_3 = *(edx + ebx)
    
    if (xmm0_3 f> xmm1_1)
    label_5adfff:
        int32_t xmm2_1 = *(ecx_1 + ebx + 4)
        int32_t ecx_3 = *(edx + ebx + 4)
        *(var_18_1 + ebx) = *(edx + ebx)
        *(var_18_1 + ebx + 4) = ecx_3
        *(edx + ebx) = xmm1_1
        *esi_2 = xmm2_1
        int32_t xmm0_5 = *ebx
        
        if (xmm0_5 f> xmm1_1)
        label_5ae03b:
            int32_t ecx_4 = ebx[1]
            *(edx + ebx) = *ebx
            *(edx + ebx + 4) = ecx_4
            *ebx = xmm1_1
            ebx[1] = xmm2_1
        else if (not(xmm1_1 f> xmm0_5) && not(ebx[1] f<= xmm2_1))
            goto label_5ae03b
    else if (not(xmm1_1 f> xmm0_3) && not(*esi_2 f<= *(ecx_1 + ebx + 4)))
        goto label_5adfff
    
    int32_t xmm1_2 = *arg2
    void* eax_9 = &arg2[1]
    void* var_c_1 = eax_9
    int32_t* ecx_6 = arg2 - edx
    int32_t xmm0_7 = *ecx_6
    
    if (xmm0_7 f> xmm1_2)
    label_5ae07f:
        int32_t xmm0_9 = *arg2
        int32_t ecx_7 = ecx_6[1]
        int32_t xmm1_4 = arg2[1]
        *arg2 = *ecx_6
        arg2[1] = ecx_7
        ecx_6[1] = xmm1_4
        *ecx_6 = xmm0_9
        eax_9 = &arg2[1]
    else if (not(xmm1_2 f> xmm0_7))
        if (not(ecx_6[1] f<= *eax_9))
            goto label_5ae07f
        
        var_c_1 = eax_9
    
    int32_t xmm1_5 = *(edx + arg2)
    int32_t xmm0_10 = *arg2
    
    if (xmm0_10 f> xmm1_5)
    label_5ae0c7:
        int32_t xmm3_1 = *(edx + arg2 + 4)
        int32_t eax_12 = *arg2
        *(edx + arg2 + 4) = arg2[1]
        *(edx + arg2) = eax_12
        *arg2 = xmm1_5
        arg2[1] = xmm3_1
        int32_t xmm0_12 = *ecx_6
        
        if (xmm0_12 f> xmm1_5)
        label_5ae0fe:
            int32_t ecx_10 = ecx_6[1]
            *arg2 = *ecx_6
            arg2[1] = ecx_10
            ecx_6[1] = xmm3_1
            *ecx_6 = xmm1_5
        else if (not(xmm1_5 f> xmm0_12) && not(ecx_6[1] f<= *var_c_1))
            goto label_5ae0fe
    else if (not(xmm1_5 f> xmm0_10) && not(*eax_9 f<= *(edx + arg2 + 4)))
        goto label_5ae0c7
    
    int32_t* ecx_13 = arg4
    int32_t* esi_5 = ecx_13 - var_18_1
    void* eax_17 = ecx_13 - edx
    float xmm0_14 = *esi_5
    float xmm2_3 = *eax_17
    void* eax_19 = &esi_5[1]
    void* var_10_2 = eax_19
    
    if (xmm0_14 > xmm2_3)
    label_5ae157:
        int32_t xmm0_16 = *(eax_17 + 4)
        int32_t ecx_12 = esi_5[1]
        *eax_17 = *esi_5
        ebx = var_1c
        *(eax_17 + 4) = ecx_12
        ecx_13 = arg4
        *esi_5 = xmm2_3
        *var_10_2 = xmm0_16
        var_10_2 = var_10_2
    else
        var_10_2 = eax_19
        
        if (not(xmm2_3 > xmm0_14))
            if (not(*eax_19 f<= *(eax_17 + 4)))
                goto label_5ae157
            
            var_10_2 = eax_19
    
    int32_t xmm1_7 = *ecx_13
    int32_t xmm0_17 = *eax_17
    
    if (xmm0_17 f> xmm1_7)
    label_5ae1a5:
        int32_t xmm2_4 = ecx_13[1]
        int32_t ecx_16 = *(eax_17 + 4)
        *arg4 = *eax_17
        ebx = var_1c
        arg4[1] = ecx_16
        *(eax_17 + 4) = xmm2_4
        *eax_17 = xmm1_7
        int32_t xmm0_19 = *esi_5
        
        if (xmm0_19 f> xmm1_7)
        label_5ae202:
            int32_t ecx_18 = esi_5[1]
            *eax_17 = *esi_5
            ebx = var_1c
            *(eax_17 + 4) = ecx_18
            *esi_5 = xmm1_7
            *var_10_2 = xmm2_4
        else if (not(xmm1_7 f> xmm0_19) && not(*var_10_2 f<= xmm2_4))
            goto label_5ae202
    else if (not(xmm1_7 f> xmm0_17) && not(*(eax_17 + 4) f<= ecx_13[1]))
        goto label_5ae1a5
    
    int32_t xmm1_8 = *arg2
    int32_t xmm0_23 = *(edx + ebx)
    
    if (xmm0_23 f> xmm1_8)
    label_5ae24f:
        int32_t ecx_19 = *(edx + ebx + 4)
        int32_t xmm1_9 = arg2[1]
        *arg2 = *(edx + ebx)
        arg2[1] = ecx_19
        *(edx + ebx) = xmm1_8
        *var_14_1 = xmm1_9
        eax_2 = var_c_1
    else if (xmm1_8 f> xmm0_23)
        eax_2 = var_c_1
    else
        eax_2 = var_c_1
        
        if (not(*var_14_1 f<= *eax_2))
            goto label_5ae24f
    
    int32_t xmm0_26 = *arg2
    int32_t xmm1_10 = *eax_17
    
    if (xmm0_26 f> xmm1_10)
    label_5ae292:
        int32_t xmm3_2 = *(eax_17 + 4)
        int32_t* esi_7 = eax_17
        eax_2 = *arg2
        int32_t ecx_21 = arg2[1]
        *esi_7 = eax_2
        esi_7[1] = ecx_21
        *arg2 = xmm1_10
        arg2[1] = xmm3_2
        int32_t xmm0_28 = *(edx + ebx)
        
        if (xmm0_28 f> xmm1_10)
        label_5ae2d8:
            int32_t ecx_22 = *(edx + ebx + 4)
            *arg2 = *(edx + ebx)
            arg2[1] = ecx_22
            *(edx + ebx) = xmm1_10
            *var_14_1 = xmm3_2
            return var_14_1
        
        if (not(xmm1_10 f> xmm0_28))
            eax_2 = var_c_1
            
            if (not(*var_14_1 f<= *eax_2))
                goto label_5ae2d8
    else if (not(xmm1_10 f> xmm0_26) && not(*eax_2 f<= *(eax_17 + 4)))
        goto label_5ae292

return eax_2
