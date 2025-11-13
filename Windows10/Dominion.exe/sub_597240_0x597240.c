// 函数: sub_597240
// 地址: 0x597240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg4
uint32_t ecx = *arg3
int32_t eax_2 = (esi - arg3) s>> 2
uint32_t eax_46

if (eax_2 s<= 0x28)
    int32_t var_2c_12 = *arg2
    arg4 = arg5
    
    if (sub_593b90(&arg4, var_2c_12, ecx) != 0)
        int32_t ecx_28 = *arg2
        *arg2 = *arg3
        *arg3 = ecx_28
    
    eax_46 = sub_593b90(&arg4, *esi, *arg2)
    
    if (eax_46.b != 0)
        int32_t ecx_30 = *esi
        *esi = *arg2
        *arg2 = ecx_30
        eax_46 = sub_593b90(&arg4, ecx_30, *arg3)
        
        if (eax_46.b != 0)
            int32_t ecx_32 = *arg2
            eax_46 = *arg3
            *arg2 = eax_46
            *arg3 = ecx_32
else
    int32_t* esi_1 = arg5
    int32_t* var_10 = esi_1
    int32_t eax_4 = (eax_2 + 1) s>> 3
    int32_t eax_5 = eax_4 << 2
    
    if (sub_593b90(&var_10, arg3[eax_4], ecx) != 0)
        int32_t ecx_2 = arg3[eax_4]
        arg3[eax_4] = *arg3
        *arg3 = ecx_2
    
    int32_t edx_2
    
    if (sub_593b90(&var_10, arg3[eax_4 * 2], arg3[eax_4]) == 0)
        edx_2 = eax_5
    else
        int32_t ecx_4 = arg3[eax_4 * 2]
        arg3[eax_4 * 2] = arg3[eax_4]
        arg3[eax_4] = ecx_4
        edx_2 = eax_5
        
        if (sub_593b90(&var_10, ecx_4, *arg3) != 0)
            int32_t ecx_6 = *(edx_2 + arg3)
            *(edx_2 + arg3) = *arg3
            *arg3 = ecx_6
    
    var_10 = esi_1
    uint32_t* eax_17 = arg2 - edx_2
    int32_t* var_14 = eax_17
    
    if (sub_593b90(&var_10, *arg2, *eax_17) != 0)
        int32_t* edx_3 = var_14
        int32_t ecx_8 = *arg2
        *arg2 = *edx_3
        *edx_3 = ecx_8
    
    if (sub_593b90(&var_10, arg2[eax_4], *arg2) != 0)
        int32_t ecx_10 = arg2[eax_4]
        arg2[eax_4] = *arg2
        int32_t* eax_23 = var_14
        *arg2 = ecx_10
        
        if (sub_593b90(&var_10, ecx_10, *eax_23) != 0)
            int32_t* edx_5 = var_14
            int32_t ecx_12 = *arg2
            *arg2 = *edx_5
            *edx_5 = ecx_12
    
    int32_t* edx_6 = arg4
    int32_t* ecx_14 = edx_6 - (eax_4 << 2)
    var_14 = esi_1
    uint32_t* edx_7 = edx_6 - (eax_4 << 3)
    var_10 = ecx_14
    char eax_30 = sub_593b90(&var_14, *ecx_14, *edx_7)
    int32_t* edx_8 = var_10
    
    if (eax_30 != 0)
        uint32_t ecx_16 = *edx_8
        *edx_8 = *edx_7
        *edx_7 = ecx_16
    
    if (sub_593b90(&var_14, *arg4, *edx_8) != 0)
        int32_t* edx_9 = var_10
        int32_t ecx_18 = *arg4
        *arg4 = *edx_9
        *edx_9 = ecx_18
        esi_1 = arg5
        
        if (sub_593b90(&var_14, ecx_18, *edx_7) != 0)
            uint32_t* edx_10 = var_10
            uint32_t ecx_20 = *edx_10
            *edx_10 = *edx_7
            *edx_7 = ecx_20
    
    uint32_t var_28_9 = arg3[eax_4]
    arg4 = esi_1
    void* esi_3 = &arg3[eax_4]
    
    if (sub_593b90(&arg4, *arg2, var_28_9) != 0)
        int32_t ecx_22 = *arg2
        *arg2 = *esi_3
        *esi_3 = ecx_22
    
    int32_t* ebx_1 = var_10
    eax_46 = sub_593b90(&arg4, *ebx_1, *arg2)
    
    if (eax_46.b != 0)
        int32_t ecx_24 = *ebx_1
        *ebx_1 = *arg2
        *arg2 = ecx_24
        eax_46 = sub_593b90(&arg4, ecx_24, *esi_3)
        
        if (eax_46.b != 0)
            int32_t ecx_26 = *arg2
            int32_t eax_48 = *esi_3
            *arg2 = eax_48
            *esi_3 = ecx_26
            return eax_48

return eax_46
