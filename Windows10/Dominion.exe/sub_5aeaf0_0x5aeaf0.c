// 函数: sub_5aeaf0
// 地址: 0x5aeaf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg2
float xmm0 = arg3[1]
int32_t* var_14 = ebx
int32_t eax_2 = (arg4 - arg3) s>> 3
void* var_c = &arg3[1]
int32_t eax_4

if (eax_2 s<= 0x28)
    int32_t xmm1_12 = ebx[1]
    void* edx_12 = &ebx[1]
    void* esi_6
    void* var_8_2
    
    if (not(xmm0 f<= xmm1_12))
        var_8_2 = edx_12
    label_5aee47:
        int32_t edx_13 = *ebx
        int32_t esi_7 = ebx[1]
        int32_t ecx_23 = arg3[1]
        *ebx = *arg3
        eax_4 = var_8_2
        ebx[1] = ecx_23
        *arg3 = edx_13
        edx_12 = &ebx[1]
        arg3[1] = esi_7
        esi_6 = var_c
    else if (xmm1_12 f<= xmm0)
        if (*ebx s< *arg3)
            var_8_2 = &ebx[1]
            var_c = &arg3[1]
            goto label_5aee47
        
        esi_6 = &arg3[1]
        eax_4 = edx_12
    else
        esi_6 = &arg3[1]
        eax_4 = edx_12
    int32_t xmm0_12 = *edx_12
    int32_t xmm1_13 = arg4[1]
    
    if (xmm0_12 f> xmm1_13)
    label_5aee88:
        int32_t eax_34 = *arg4
        int32_t eax_35 = arg4[1]
        int32_t ecx_25 = ebx[1]
        *arg4 = *ebx
        arg4[1] = ecx_25
        eax_4 = eax_34
        var_14[1] = eax_35
        int32_t xmm1_14 = *edx_12
        *var_14 = eax_4
        int32_t xmm0_13 = *esi_6
        
        if (xmm0_13 f> xmm1_14)
        label_5aeec8:
            int32_t ecx_27 = arg3[1]
            *var_14 = *arg3
            var_14[1] = ecx_27
            *arg3 = eax_34
            eax_4 = eax_35
            arg3[1] = eax_4
        else if (not(xmm1_14 f> xmm0_13) && eax_4 s< *arg3)
            goto label_5aeec8
    else if (not(xmm1_13 f> xmm0_12))
        edx_12 = eax_4
        eax_4 = *arg4
        
        if (eax_4 s< *ebx)
            goto label_5aee88
else
    eax_4 = (eax_2 + 1) s>> 3
    int32_t edx_1 = eax_4 << 4
    int32_t var_18_1 = edx_1
    int32_t* esi = eax_4 << 3
    float xmm1 = *(esi + arg3 + 4)
    int32_t* var_8_1 = esi
    
    if (xmm0 > xmm1)
    label_5aeb4c:
        int32_t edx_2 = *(esi + arg3)
        int32_t ecx_1 = arg3[1]
        int32_t esi_1 = *(esi + arg3 + 4)
        *(var_8_1 + arg3) = *arg3
        eax_4 = var_8_1
        ebx = var_14
        *(eax_4 + arg3 + 4) = ecx_1
        *arg3 = edx_2
        edx_1 = var_18_1
        arg3[1] = esi_1
        esi = eax_4
    else if (not(xmm1 > xmm0))
        eax_4 = *(esi + arg3)
        
        if (eax_4 s< *arg3)
            goto label_5aeb4c
    
    int32_t xmm1_1 = *(edx_1 + arg3 + 4)
    int32_t xmm0_1 = *(esi + arg3 + 4)
    
    if (xmm0_1 f> xmm1_1)
    label_5aeb8c:
        int32_t eax_6 = *(edx_1 + arg3)
        int32_t ecx_2 = *(esi + arg3 + 4)
        int32_t eax_7 = *(edx_1 + arg3 + 4)
        *(edx_1 + arg3) = *(esi + arg3)
        eax_4 = eax_7
        *(edx_1 + arg3 + 4) = ecx_2
        *(esi + arg3 + 4) = eax_4
        int32_t xmm1_2 = *(esi + arg3 + 4)
        *(esi + arg3) = eax_6
        int32_t xmm0_2 = arg3[1]
        
        if (xmm0_2 f> xmm1_2)
        label_5aebcf:
            int32_t ecx_3 = arg3[1]
            *(esi + arg3) = *arg3
            eax_4 = eax_7
            *(esi + arg3 + 4) = ecx_3
            *arg3 = eax_6
            arg3[1] = eax_4
        else if (not(xmm1_2 f> xmm0_2) && eax_6 s< *arg3)
            goto label_5aebcf
    else if (not(xmm1_1 f> xmm0_1))
        eax_4 = *(edx_1 + arg3)
        
        if (eax_4 s< *(esi + arg3))
            goto label_5aeb8c
    
    int32_t xmm1_3 = ebx[1]
    int32_t* edx_5 = ebx - esi
    int32_t xmm0_3 = edx_5[1]
    
    if (xmm0_3 f> xmm1_3)
    label_5aec05:
        int32_t edx_6 = *ebx
        int32_t esi_2 = ebx[1]
        int32_t ecx_5 = edx_5[1]
        *ebx = *edx_5
        eax_4 = edx_5
        ebx[1] = ecx_5
        *eax_4 = edx_6
        edx_5 = eax_4
        edx_5[1] = esi_2
        esi = var_8_1
    else if (not(xmm1_3 f> xmm0_3))
        eax_4 = *ebx
        
        if (eax_4 s< *edx_5)
            goto label_5aec05
    
    int32_t xmm1_4 = *(esi + ebx + 4)
    int32_t xmm0_4 = ebx[1]
    
    if (xmm0_4 f> xmm1_4)
    label_5aec3d:
        int32_t eax_11 = *(esi + ebx)
        int32_t ecx_6 = ebx[1]
        int32_t eax_12 = *(esi + ebx + 4)
        *(esi + ebx) = *ebx
        eax_4 = eax_11
        *(esi + ebx + 4) = ecx_6
        ebx[1] = eax_12
        int32_t xmm1_5 = ebx[1]
        *ebx = eax_4
        int32_t xmm0_5 = edx_5[1]
        
        if (xmm0_5 f> xmm1_5)
        label_5aec7b:
            int32_t ecx_8 = edx_5[1]
            *ebx = *edx_5
            ebx[1] = ecx_8
            *edx_5 = eax_11
            eax_4 = eax_12
            edx_5[1] = eax_4
        else if (not(xmm1_5 f> xmm0_5) && eax_4 s< *edx_5)
            goto label_5aec7b
    else if (not(xmm1_4 f> xmm0_4))
        eax_4 = *(esi + ebx)
        
        if (eax_4 s< *ebx)
            goto label_5aec3d
    
    void* edx_8 = arg4 - esi
    int32_t* ecx_10 = arg4 - var_18_1
    void* var_c_4 = edx_8
    int32_t xmm1_6 = *(edx_8 + 4)
    int32_t xmm0_6 = ecx_10[1]
    
    if (xmm0_6 f> xmm1_6)
    label_5aecbf:
        int32_t edx_9 = *edx_8
        int32_t esi_3 = *(var_c_4 + 4)
        int32_t ecx_11 = ecx_10[1]
        *var_c_4 = *ecx_10
        ebx = var_14
        *(var_c_4 + 4) = ecx_11
        eax_4 = ecx_10
        *eax_4 = edx_9
        edx_8 = var_c_4
        *(eax_4 + 4) = esi_3
        esi = var_8_1
    else if (not(xmm1_6 f> xmm0_6))
        eax_4 = *edx_8
        
        if (eax_4 s< *ecx_10)
            goto label_5aecbf
    
    int32_t* ecx_12 = arg4
    int32_t xmm0_7 = *(edx_8 + 4)
    int32_t xmm1_7 = ecx_12[1]
    
    if (xmm0_7 f> xmm1_7)
    label_5aecfe:
        int32_t eax_19 = *ecx_12
        int32_t eax_20 = ecx_12[1]
        int32_t ecx_13 = *(edx_8 + 4)
        *arg4 = *edx_8
        esi = var_8_1
        arg4[1] = ecx_13
        eax_4 = eax_19
        *(edx_8 + 4) = eax_20
        int32_t xmm1_8 = *(edx_8 + 4)
        *edx_8 = eax_4
        int32_t xmm0_8 = ecx_10[1]
        
        if (xmm0_8 f> xmm1_8)
        label_5aed43:
            int32_t ecx_16 = ecx_10[1]
            *edx_8 = *ecx_10
            eax_4 = ecx_10
            *(edx_8 + 4) = ecx_16
            *eax_4 = eax_19
            *(eax_4 + 4) = eax_20
        else if (not(xmm1_8 f> xmm0_8) && eax_4 s< *ecx_10)
            goto label_5aed43
    else if (not(xmm1_7 f> xmm0_7))
        eax_4 = *ecx_12
        
        if (eax_4 s< *edx_8)
            goto label_5aecfe
    
    int32_t xmm1_9 = ebx[1]
    int32_t xmm0_9 = *(esi + arg3 + 4)
    
    if (xmm0_9 f> xmm1_9)
    label_5aed78:
        int32_t edx_10 = *ebx
        int32_t esi_5 = ebx[1]
        int32_t ecx_20 = *(var_8_1 + arg3 + 4)
        *ebx = *(var_8_1 + arg3)
        eax_4 = var_8_1
        ebx[1] = ecx_20
        *(eax_4 + arg3) = edx_10
        edx_8 = var_c_4
        *(eax_4 + arg3 + 4) = esi_5
        esi = eax_4
    else if (not(xmm1_9 f> xmm0_9))
        eax_4 = *ebx
        
        if (eax_4 s< *(esi + arg3))
            goto label_5aed78
    
    int32_t xmm1_10 = *(edx_8 + 4)
    int32_t xmm0_10 = ebx[1]
    
    if (xmm0_10 f> xmm1_10)
    label_5aedba:
        int32_t eax_25 = *edx_8
        int32_t ecx_21 = ebx[1]
        int32_t* eax_26 = *(edx_8 + 4)
        *edx_8 = *ebx
        eax_4 = eax_26
        *(edx_8 + 4) = ecx_21
        ebx[1] = eax_4
        int32_t xmm1_11 = ebx[1]
        *ebx = eax_25
        int32_t xmm0_11 = *(esi + arg3 + 4)
        
        if (xmm0_11 f> xmm1_11)
        label_5aedff:
            int32_t ecx_22 = *(esi + arg3 + 4)
            *ebx = *(esi + arg3)
            ebx[1] = ecx_22
            *(esi + arg3) = eax_25
            *(esi + arg3 + 4) = eax_26
            return eax_26
        
        if (not(xmm1_11 f> xmm0_11) && eax_25 s< *(esi + arg3))
            goto label_5aedff
    else if (not(xmm1_10 f> xmm0_10))
        eax_4 = *edx_8
        
        if (eax_4 s< *ebx)
            goto label_5aedba

return eax_4
