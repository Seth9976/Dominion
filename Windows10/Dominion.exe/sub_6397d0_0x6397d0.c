// 函数: sub_6397d0
// 地址: 0x6397d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t eax = *arg2
int32_t temp0 = *arg3

if (eax s< temp0)
label_63980b:
    int128_t xmm1_1 = *arg2
    int64_t xmm2_1 = *(arg2 + 0x10)
    *arg2 = *arg3
    *(arg2 + 0x10) = *(arg3 + 0x10)
    *arg3 = xmm1_1
    *(arg3 + 0x10) = xmm2_1
else if (eax s<= temp0)
    int32_t ebx_1 = arg3[3]
    int32_t edi_1 = arg2[2]
    int32_t eax_1 = arg3[2]
    int32_t temp2_1 = arg2[3]
    
    if (temp2_1 u<= ebx_1)
        if (temp2_1 u< ebx_1 || edi_1 u< eax_1)
            goto label_63980b
        
        int32_t temp5_1 = arg2[3]
        
        if (temp5_1 u< ebx_1)
        label_639803:
            
            if (arg2[4] u< arg3[4])
                goto label_63980b
        else if (temp5_1 u<= ebx_1 && edi_1 u<= eax_1)
            goto label_639803

int32_t* edi_3 = arg4
int32_t result = *edi_3
int32_t temp1 = *arg2

if (result s< temp1)
label_63986e:
    int128_t xmm1_2 = *edi_3
    int64_t xmm2_2 = *(edi_3 + 0x10)
    *edi_3 = *arg2
    *(edi_3 + 0x10) = *(arg2 + 0x10)
    *arg2 = xmm1_2
    *(arg2 + 0x10) = xmm2_2
    result = *arg2
    int32_t temp3_1 = *arg3
    
    if (result s< temp3_1)
    label_6398bd:
        *arg2 = *arg3
        *(arg2 + 0x10) = *(arg3 + 0x10)
        *arg3 = xmm1_2
        *(arg3 + 0x10) = xmm2_2
    else if (result s<= temp3_1)
        int32_t ebx_3 = arg2[3]
        int32_t edi_5 = arg2[2]
        int32_t esi_1 = arg3[3]
        result = arg3[2]
        
        if (ebx_3 u< esi_1)
            goto label_6398bd
        
        if (ebx_3 u<= esi_1)
            if (edi_5 u< result)
                goto label_6398bd
            
            if (ebx_3 u<= esi_1 && (ebx_3 u< esi_1 || edi_5 u<= result))
                result = arg2[4]
                
                if (result u< arg3[4])
                    goto label_6398bd
else if (result s<= temp1)
    int32_t eax_3 = edi_3[3]
    int32_t ebx_2 = edi_3[2]
    int32_t temp4_1 = arg2[3]
    result = arg2[2]
    edi_3 = arg4
    
    if (eax_3 u< temp4_1 || (eax_3 u<= temp4_1 && ebx_2 u< result))
        goto label_63986e
    
    int32_t temp6_1 = arg2[3]
    edi_3 = arg4
    
    if (eax_3 u<= temp6_1 && (eax_3 u< temp6_1 || ebx_2 u<= result))
        result = edi_3[4]
        
        if (result u< arg2[4])
            goto label_63986e

return result
