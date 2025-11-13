// 函数: sub_5ace10
// 地址: 0x5ace10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg2
int32_t* edi = arg3
int32_t* var_8 = ebx
void* i = (ebx - edi) & 0xfffffff8

if (i s> 0x100)
    int32_t esi_1 = arg4
    
    do
        if (esi_1 s<= 0)
            int32_t ebx_2 = ebx - edi
            i = ebx_2 s>> 3
            int32_t j = i s>> 1
            int32_t var_1c
            
            while (j s> 0)
                int32_t eax_11 = edi[j * 2 - 2]
                j -= 1
                int32_t* var_30_3 = arg5
                var_1c = eax_11
                int32_t var_18_2 = edi[j * 2 + 1]
                sub_5aea10(&var_1c, j, edi, i, &var_1c)
            
            if (i s< 2)
                goto label_5acfec
            
            int32_t j_1
            
            do
                int32_t ecx_10 = *(edi + ebx_2 - 4)
                var_1c = *(edi + ebx_2 - 8)
                int32_t var_18_3 = ecx_10
                int32_t ecx_11 = edi[1]
                *(edi + ebx_2 - 8) = *edi
                *(edi + ebx_2 - 4) = ecx_11
                int32_t* var_30_4 = arg5
                int32_t eax_16 = (ebx_2 - 8) s>> 3
                sub_5aea10(eax_16, 0, edi, eax_16, &var_1c)
                ebx_2 -= 8
                j_1 = ebx_2 & 0xfffffff8
            while (j_1 s>= 0x10)
            
            return j_1
        
        int32_t* var_14
        sub_5ad850(i, edi, &var_14, ebx, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        int32_t* var_10
        
        if (((var_14 - edi) & 0xfffffff8) s>= ((ebx - var_10) & 0xfffffff8))
            sub_5ace10(esi_1, arg5)
            ebx = var_14
            var_8 = ebx
        else
            sub_5ace10(esi_1, arg5)
            edi = var_10
        
        i = (ebx - edi) & 0xfffffff8
    while (i s> 0x100)

if (edi != ebx)
    i = &edi[2]
    void* i_1 = i
    
    while (i != ebx)
        float edx_3 = *(i + 4)
        void* i_3 = i
        float xmm0_1 = edi[1]
        int32_t ecx_6 = *i
        
        if (xmm0_1 > edx_3 || (not(edx_3 > xmm0_1) && ecx_6 s< *edi))
            uint32_t count = i - edi
            memmove(i - count + 8, edi, count)
            *edi = ecx_6
            edi[1] = edx_3
        else
            void* i_2 = i
            
            while (true)
                int32_t xmm0_2 = *(i_2 - 4)
                i_2 -= 8
                
                if (not(xmm0_2 f> edx_3))
                    if (edx_3 f> xmm0_2)
                        break
                    
                    if (ecx_6 s>= *i_2)
                        break
                
                int32_t ecx_7 = *(i_2 + 4)
                *i_3 = *i_2
                *(i_3 + 4) = ecx_7
                i_3 = i_2
            
            *i_3 = ecx_6
            ebx = var_8
            *(i_3 + 4) = edx_3
        
        i = i_1 + 8
        i_1 = i

label_5acfec:
return i
