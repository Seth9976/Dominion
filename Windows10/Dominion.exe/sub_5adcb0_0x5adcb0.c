// 函数: sub_5adcb0
// 地址: 0x5adcb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int64_t* edi = arg3

if (arg2 == arg4 || edi == arg2)
    return 

int32_t esi_1 = *(arg2 + 4)
int64_t* ecx = arg5
int32_t* ecx_2

while (true)
    if (esi_1 != 0xa)
        if (*(edi + 4) == 0xa)
            ecx_2 = arg4
            break
        
    label_5add4c:
        int32_t ecx_6
        ecx_6.b = *(arg9 + *arg2 * 0xc + 0x14) + 0f > *(arg9 + *edi * 0xc + 0x14) + 0f
        
        if (ecx_6.b != 0)
            ecx_2 = arg4
            break
        
        ecx = arg5
    else if (*(edi + 4) == esi_1)
        int32_t ecx_1 = edi[1].d
        
        if (*(arg2 + 8) s>= 6)
            if (ecx_1 s>= 6)
                goto label_5add4c
            
            ecx_2 = arg4
            break
        
        if (ecx_1 s< 6)
            goto label_5add4c
        
        ecx = arg5
    
    edi += 0xc
    ecx -= 1
    arg5 = ecx
    
    if (edi == arg2)
        return 

while (true)
    int32_t* var_14_1 = ecx_2
    ecx_2 -= 0xc
    int32_t var_10_1 = arg6
    arg6 -= 1
    
    if (arg2 == ecx_2)
        int32_t esi_7 = *(arg2 + 8)
        uint32_t count_1 = arg2 - edi
        var_10_1.q = *arg2
        memmove(ecx_2 - count_1 + 0xc, edi, count_1)
        *edi = var_10_1.q
        edi[1].d = esi_7
        break
    
    int32_t esi_4 = *(arg2 - 8)
    
    if (ecx_2[1] != 0xa)
        if (esi_4 != 0xa)
        label_5add9c:
            int32_t ecx_10
            ecx_10.b =
                *(arg9 + *ecx_2 * 0xc + 0x14) + 0f > *(arg9 + *(arg2 - 0xc) * 0xc + 0x14) + 0f
            
            if (ecx_10.b == 0)
                continue
    else if (esi_4 != 0xa)
        continue
    else
        int32_t esi_5 = *(arg2 - 4)
        
        if (ecx_2[2] s< 6)
            if (esi_5 s< 6)
                goto label_5add9c
            
            continue
        else if (esi_5 s>= 6)
            goto label_5add9c
    
    if (arg5 != 1)
        sub_5af040(arg9, arg2, edi, var_14_1, arg5, var_10_1, arg7, arg8, arg9)
        return 
    
    uint32_t count = var_14_1 - arg2
    int32_t esi_6 = edi[1].d
    var_10_1.q = *edi
    memmove(edi, arg2, count)
    *(count + edi) = var_10_1.q
    *(count + edi + 8) = esi_6
    return 
