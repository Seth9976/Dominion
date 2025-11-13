// 函数: sub_4f6060
// 地址: 0x4f6060
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float ebx = arg2
float* edi = arg3
void* i = (ebx i- edi) & 0xfffffffc
void* i_1
float var_10

if (i s> 0x80)
    int32_t ecx = arg5
    int32_t esi_1 = arg4
    
    do
        if (esi_1 s<= 0)
            float ebx_1 = ebx i- edi
            var_10 = ebx_1
            i = ebx_1 s>> 2
            int32_t j = i s>> 1
            
            if (j s> 0)
                do
                    void* i_2 = edi[j - 1]
                    j -= 1
                    i_1 = i_2
                    int32_t var_2c_4 = ecx
                    sub_4f7a40(&i_1, j, edi, i, &i_1)
                    ecx = arg5
                while (j s> 0)
                
                ebx_1 = var_10
            
            if (i s< 2)
                goto label_4f621c
            
            int32_t j_1
            
            do
                float xmm0_2 = *(edi i+ ebx_1 - 4)
                *(edi i+ ebx_1 - 4) = *edi
                int32_t var_2c_5 = ecx
                var_10 = xmm0_2
                int32_t eax_17 = (ebx_1 - 4) s>> 2
                sub_4f7a40(eax_17, 0, edi, eax_17, &var_10)
                ecx = arg5
                ebx_1 -= 4
                j_1 = ebx_1 & 0xfffffffc
            while (j_1 s>= 8)
            
            return j_1
        
        int32_t var_2c_1 = ecx
        sub_4f6dd0(i, edi, &var_10, ebx)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        float* var_c
        
        if (((var_10 i- edi) & 0xfffffffc) s>= ((ebx i- var_c) & 0xfffffffc))
            sub_4f6060(esi_1, arg5)
            ebx = var_10
        else
            sub_4f6060(esi_1, arg5)
            edi = var_c
        
        ecx = arg5
        i = (ebx i- edi) & 0xfffffffc
    while (i s> 0x80)

if (edi != ebx)
    int32_t* esi_3 = &edi[1]
    
    if (esi_3 != ebx)
        i = 4 - edi
        i_1 = i
        
        do
            float xmm1_1 = *esi_3
            int32_t* ecx_7 = esi_3
            bool cond:1_1 = xmm1_1 <= *edi
            var_10 = xmm1_1
            
            if (cond:1_1)
                int32_t xmm0_3 = esi_3[-1]
                void* eax_19 = &esi_3[-1]
                
                if (not(xmm1_1 f<= xmm0_3))
                    do
                        *ecx_7 = xmm0_3
                        ecx_7 = eax_19
                        xmm0_3 = *(eax_19 - 4)
                        eax_19 -= 4
                    while (xmm1_1 f> xmm0_3)
                
                *ecx_7 = xmm1_1
            else
                void* count = i - 4 + esi_3
                memmove(esi_3 - count + 4, edi, count)
                *edi = var_10
            
            i = i_1
            esi_3 = &esi_3[1]
        while (esi_3 != ebx)

label_4f621c:
return i
