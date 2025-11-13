// 函数: sub_5ac9f0
// 地址: 0x5ac9f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg2
int32_t* edi = arg3
void* var_8 = ebx
void* i = (ebx - edi) & 0xfffffff8

if (i s> 0x100)
    int32_t esi_1 = arg4
    
    do
        void* var_18
        
        if (esi_1 s<= 0)
            int32_t edx_6 = (ebx - edi) s>> 3
            int32_t var_c_1 = edx_6
            int32_t j = edx_6 s>> 1
            
            if (j s> 0)
                void* ebx_1 = &edi[j * 2]
                
                do
                    void* eax_10 = *(ebx_1 - 8)
                    ebx_1 -= 8
                    int32_t* var_28_3 = arg5
                    int32_t ecx_7 = *(ebx_1 + 4)
                    j -= 1
                    var_18 = eax_10
                    int32_t var_14_2 = ecx_7
                    i = sub_5ade70(&var_18, j, edi, edx_6, &var_18)
                    edx_6 = var_c_1
                while (j s> 0)
                
                ebx = var_8
            
            if (edx_6 s< 2)
                goto label_5acbf8
            
            void* ebx_2 = ebx - 8
            int32_t eax_17
            void* j_1
            
            do
                int32_t ecx_9 = *(ebx_2 + 4)
                var_18 = *ebx_2
                int32_t var_14_3 = ecx_9
                int32_t ecx_10 = edi[1]
                *ebx_2 = *edi
                *(ebx_2 + 4) = ecx_10
                int32_t* var_28_4 = arg5
                int32_t eax_16 = (ebx_2 - edi) s>> 3
                eax_17 = sub_5ade70(eax_16, 0, edi, eax_16, &var_18)
                j_1 = (ebx_2 - edi) & 0xfffffff8
                ebx_2 -= 8
            while (j_1 s>= 0x10)
            return eax_17
        
        sub_5ad200(i, edi, &var_18, ebx, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        int32_t* var_14
        
        if (((var_18 - edi) & 0xfffffff8) s>= ((ebx - var_14) & 0xfffffff8))
            sub_5ac9f0(esi_1, arg5)
            ebx = var_18
            var_8 = ebx
        else
            sub_5ac9f0(esi_1, arg5)
            edi = var_14
        
        i = (ebx - edi) & 0xfffffff8
    while (i s> 0x100)

if (edi != ebx)
    i = &edi[2]
    void* i_1 = i
    
    if (i != ebx)
        int32_t* count = 8
        void* edx_3 = &edi[1]
        int32_t* count_1 = 8
        
        do
            float xmm1_1 = *(count + edx_3 - 4)
            void* i_3 = i
            float xmm0_1 = *edi
            int32_t xmm2_1 = *(count + edx_3)
            
            if (xmm0_1 > xmm1_1 || (not(xmm1_1 > xmm0_1) && edi[1] f> xmm2_1))
                memmove(i - count + 8, edi, count)
                *edi = xmm1_1
                edi[1] = xmm2_1
            else
                void* i_2 = i
                
                while (true)
                    int32_t xmm0_3 = *(i_2 - 8)
                    i_2 -= 8
                    
                    if (not(xmm0_3 f> xmm1_1))
                        if (xmm1_1 f> xmm0_3)
                            break
                        
                        if (*(i_2 + 4) f<= xmm2_1)
                            break
                    
                    int32_t ecx_6 = *(i_2 + 4)
                    *i_3 = *i_2
                    *(i_3 + 4) = ecx_6
                    i_3 = i_2
                
                *i_3 = xmm1_1
                *(i_3 + 4) = xmm2_1
            
            edx_3 = &edi[1]
            i = i_1 + 8
            count = &count_1[2]
            i_1 = i
            count_1 = count
        while (i != ebx)

label_5acbf8:
return i
