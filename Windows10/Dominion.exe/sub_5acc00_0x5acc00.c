// 函数: sub_5acc00
// 地址: 0x5acc00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg2
int32_t* edi = arg3
int32_t* var_28 = ebx
int32_t* var_20 = edi
void* i = (ebx - edi) & 0xfffffffc
int32_t* i_4
int32_t* var_10

if (i s> 0x80)
    int32_t esi_1 = arg4
    
    do
        if (esi_1 s<= 0)
            int32_t ebx_1 = ebx - edi
            i = ebx_1 s>> 2
            int32_t j = i s>> 1
            
            while (j s> 0)
                int32_t* i_6 = edi[j - 1]
                j -= 1
                i_4 = i_6
                sub_5ae690(&i_4, j, edi, i, &i_4, arg5)
            
            if (i s< 2)
                goto label_5ace0d
            
            int32_t j_1
            
            do
                i_4 = *(edi + ebx_1 - 4)
                *(edi + ebx_1 - 4) = *edi
                int32_t eax_21 = (ebx_1 - 4) s>> 2
                sub_5ae690(eax_21, 0, edi, eax_21, &i_4, arg5)
                ebx_1 -= 4
                j_1 = ebx_1 & 0xfffffffc
            while (j_1 s>= 8)
            
            return j_1
        
        sub_5ad660(i, edi, &var_10, ebx, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        int32_t* var_c
        
        if (((var_10 - edi) & 0xfffffffc) s>= ((ebx - var_c) & 0xfffffffc))
            sub_5acc00(esi_1, arg5)
            ebx = var_10
            var_28 = ebx
        else
            sub_5acc00(esi_1, arg5)
            edi = var_c
            var_20 = edi
        
        i = (ebx - edi) & 0xfffffffc
    while (i s> 0x80)

if (edi != ebx)
    int32_t* i_2 = &edi[1]
    i_4 = i_2
    
    if (i_2 != ebx)
        int32_t* ecx_6 = 4 - edi
        var_10 = ecx_6
        
        do
            int32_t eax_9 = *i_2
            int32_t* i_1 = i_2
            int32_t eax_10 = eax_9 * 3
            int32_t xmm0_1 = *(arg5 + (eax_10 << 2) + 8)
            
            if (xmm0_1 f<= *(arg5 + *edi * 0xc + 8))
                int32_t ecx_11 = i_2[-1]
                void* i_5 = &i_2[-1]
                
                if (not(xmm0_1 f<= *(arg5 + ecx_11 * 0xc + 8)))
                    int32_t* i_3 = i_1
                    
                    do
                        *i_3 = ecx_11
                        i_3 = i_5
                        ecx_11 = *(i_5 - 4)
                        i_5 -= 4
                    while (*(arg5 + (eax_10 << 2) + 8) f> *(arg5 + ecx_11 * 0xc + 8))
                    
                    edi = var_20
                    i_1 = i_3
                    ebx = var_28
                
                i = i_1
                *i = eax_9
            else
                void* count = &ecx_6[-1] + i_2
                i = memmove(i_2 - count + 4, edi, count)
                *edi = eax_9
            
            ecx_6 = var_10
            i_2 = &i_4[1]
            i_4 = i_2
        while (i_2 != ebx)

label_5ace0d:
return i
