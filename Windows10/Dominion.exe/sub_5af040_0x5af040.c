// 函数: sub_5af040
// 地址: 0x5af040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr

if (arg5 s> arg6 || arg5 s> arg8)
    if (arg6 s> arg8)
        return sub_5af3b0(arg8, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
    
    uint32_t count_3 = arg4 - arg2
    memmove(arg7, arg2, count_3)
    int64_t* esi_8 = &arg4[-3]
    *esi_8 = *(arg2 - 0xc)
    esi_8[1].d = *(arg2 - 4)
    void* edi_3 = count_3 + arg7 - 0xc
    void* edx_2 = arg2 - 0x18
    
    while (true)
        if (*(edi_3 + 4) != 0xa)
            if (*(edx_2 + 4) != 0xa)
            label_5af279:
                int32_t ecx_16
                ecx_16.b = *(arg9 + *edi_3 * 0xc + 0x14) + 0f > *(arg9 + *edx_2 * 0xc + 0x14) + 0f
                esi_8 -= 0xc
                
                if (ecx_16.b != 0)
                    goto label_5af2ac
            else
                esi_8 -= 0xc
            label_5af2ac:
                *esi_8 = *edx_2
                esi_8[1].d = *(edx_2 + 8)
                
                if (arg3 != edx_2)
                    edx_2 -= 0xc
                    continue
                
                *(esi_8 - 0xc) = *edi_3
                *(esi_8 - 4) = *(edi_3 + 8)
                uint32_t count_4 = edi_3 - arg7
                return memmove(esi_8 - 0xc - count_4, arg7, count_4)
        else if (*(edx_2 + 4) != 0xa)
            esi_8 -= 0xc
        else
            int32_t ecx_11 = *(edx_2 + 8)
            
            if (*(edi_3 + 8) s>= 6)
                if (ecx_11 s>= 6)
                    goto label_5af279
                
                esi_8 -= 0xc
                goto label_5af2ac
            
            if (ecx_11 s< 6)
                goto label_5af279
            
            esi_8 -= 0xc
        
        *esi_8 = *edi_3
        int32_t ecx_12 = *(edi_3 + 8)
        edi_3 -= 0xc
        esi_8[1].d = ecx_12
        
        if (arg7 == edi_3)
            break
    
    *(esi_8 - 0xc) = *edx_2
    uint32_t count_1 = edx_2 - arg3
    *(esi_8 - 4) = *(edx_2 + 8)
    memmove(esi_8 - 0xc - count_1, arg3, count_1)
    *arg3 = *arg7
    int32_t eax_15 = *(arg7 + 8)
    arg3[1].d = eax_15
    return eax_15

uint32_t count_2 = arg2 - arg3
memmove(arg7, arg3, count_2)
void* edx = arg7
void* eax_1 = count_2 + edx
*arg3 = *arg2
arg3[1].d = arg2[1].d
void* edi_1 = arg3 + 0xc
void* ecx_2 = arg2 + 0xc
void* var_14_1 = ecx_2

while (true)
    void* esi_3
    
    if (*(ecx_2 + 4) != 0xa)
        if (*(edx + 4) != 0xa)
        label_5af10a:
            esi_3 = edi_1 + 0xc
            int32_t ecx_7
            ecx_7.b = *(arg9 + *ecx_2 * 0xc + 0x14) + 0f > *(arg9 + *edx * 0xc + 0x14) + 0f
            
            if (ecx_7.b == 0)
                goto label_5af0e1
            
            ecx_2 = var_14_1
            goto label_5af13c
        
        esi_3 = edi_1 + 0xc
    label_5af13c:
        *edi_1 = *ecx_2
        *(edi_1 + 8) = *(ecx_2 + 8)
        edi_1 = esi_3
        ecx_2 = var_14_1 + 0xc
        var_14_1 = ecx_2
        
        if (ecx_2 == arg4)
            return memmove(edi_1, edx, eax_1 - edx)
    else
        if (*(edx + 4) == 0xa)
            int32_t esi_2 = *(edx + 8)
            
            if (*(ecx_2 + 8) s< 6)
                if (esi_2 s< 6)
                    goto label_5af10a
                
                goto label_5af0da
            
            if (esi_2 s>= 6)
                goto label_5af10a
            
            esi_3 = edi_1 + 0xc
            goto label_5af13c
        
    label_5af0da:
        esi_3 = edi_1 + 0xc
    label_5af0e1:
        *edi_1 = *edx
        int32_t ecx_3 = *(edx + 8)
        edx += 0xc
        *(edi_1 + 8) = ecx_3
        edi_1 = esi_3
        
        if (edx == eax_1 - 0xc)
            break
        
        ecx_2 = var_14_1

int64_t xmm0_5 = *(eax_1 - 0xc)
uint32_t count = arg4 - var_14_1
int32_t esi_6 = *(eax_1 - 4)
memmove(edi_1, var_14_1, count)
*(count + edi_1) = xmm0_5
*(count + edi_1 + 8) = esi_6
return count
