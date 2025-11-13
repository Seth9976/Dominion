// 函数: sub_5ad850
// 地址: 0x5ad850
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg4
int32_t* var_28 = arg5
int32_t* i = &arg2[((esi - arg2) s>> 4) * 2]
int32_t* eax_3 = esi - 8
sub_5aeaf0(eax_3, i, arg2, eax_3)
int32_t* ecx_1 = &i[2]
arg5 = ecx_1

for (; arg2 u< i; i = &i[-2])
    int32_t xmm0_1 = i[-1]
    int32_t xmm1_1 = i[1]
    
    if (xmm1_1 f> xmm0_1)
        break
    
    if (xmm0_1 f> xmm1_1)
        break
    
    if (i[-2] s< *i)
        break
    
    if (xmm0_1 f> xmm1_1)
        break
    
    if (not(xmm1_1 f> xmm0_1) && *i s< i[-2])
        break

if (ecx_1 u< esi)
    int32_t xmm1_2 = i[1]
    
    do
        int32_t xmm0_2 = ecx_1[1]
        
        if (xmm1_2 f> xmm0_2)
            break
        
        if (xmm0_2 f> xmm1_2)
            break
        
        if (*ecx_1 s< *i)
            break
        
        if (xmm0_2 f> xmm1_2)
            break
        
        if (not(xmm1_2 f> xmm0_2) && *i s< *ecx_1)
            break
        
        ecx_1 = &ecx_1[2]
    while (ecx_1 u< esi)
    
    arg5 = ecx_1

int32_t* ebx_1 = ecx_1
int32_t* i_1 = i

while (true)
    int32_t* var_c_1 = ebx_1
    
    while (true)
        while (ebx_1 u< esi)
            int32_t xmm0_3 = i[1]
            int32_t xmm1_3 = ebx_1[1]
            
            if (not(xmm1_3 f> xmm0_3))
                if (xmm0_3 f> xmm1_3)
                    break
                
                if (*i s>= *ebx_1)
                    if (xmm0_3 f> xmm1_3)
                        break
                    
                    if (not(xmm1_3 f> xmm0_3) && *ebx_1 s< *i)
                        break
                    
                    if (ecx_1 == ebx_1)
                        ecx_1 = &ecx_1[2]
                    else
                        int32_t esi_1 = ecx_1[1]
                        int32_t edx_1 = *ecx_1
                        int32_t ecx_2 = ebx_1[1]
                        *arg5 = *ebx_1
                        ebx_1 = var_c_1
                        arg5[1] = ecx_2
                        ecx_1 = &ecx_1[2]
                        ebx_1[1] = esi_1
                        esi = arg4
                        *ebx_1 = edx_1
                    
                    arg5 = ecx_1
            
            ebx_1 = &ebx_1[2]
            var_c_1 = ebx_1
        
        int32_t* i_2 = i_1
        int32_t* edx_2 = arg2
        bool cond:0_1 = i_2 != edx_2
        
        if (i_2 u> edx_2)
            void* ebx_3 = &i_2[-2]
            
            do
                int32_t xmm0_4 = *(ebx_3 + 4)
                int32_t xmm1_4 = i[1]
                
                if (not(xmm1_4 f> xmm0_4))
                    if (xmm0_4 f> xmm1_4)
                        break
                    
                    if (*ebx_3 s>= *i)
                        if (xmm0_4 f> xmm1_4)
                            break
                        
                        if (not(xmm1_4 f> xmm0_4) && *i s< *ebx_3)
                            break
                        
                        i -= 8
                        
                        if (i != ebx_3)
                            int32_t edx_3 = *i
                            int32_t esi_2 = i[1]
                            int32_t eax_15 = *ebx_3
                            i[1] = *(ebx_3 + 4)
                            i_2 = i_1
                            *i = eax_15
                            *ebx_3 = edx_3
                            edx_2 = arg2
                            *(ebx_3 + 4) = esi_2
                
                i_2 -= 8
                ebx_3 -= 8
                i_1 = i_2
            while (edx_2 u< i_2)
            
            ebx_1 = var_c_1
            cond:0_1 = i_2 != edx_2
            esi = arg4
        
        if (not(cond:0_1))
            if (ebx_1 == esi)
                *arg3 = i
                arg3[1] = arg5
                return arg3
            
            int32_t* ecx_4 = arg5
            
            if (ecx_4 != ebx_1)
                int32_t eax_16 = *ecx_4
                int32_t esi_3 = i[1]
                int32_t edx_4 = *i
                i[1] = ecx_4[1]
                ecx_4 = arg5
                *i = eax_16
                *ecx_4 = edx_4
                ecx_4[1] = esi_3
            
            int32_t esi_4 = i[1]
            int32_t edx_5 = *i
            int32_t eax_17 = *ebx_1
            arg5 = &ecx_4[2]
            i[1] = ebx_1[1]
            ecx_1 = arg5
            *i = eax_17
            i = &i[2]
            ebx_1[1] = esi_4
            esi = arg4
            *ebx_1 = edx_5
            ebx_1 = &ebx_1[2]
            break
        
        i_1 = &i_2[-2]
        
        if (ebx_1 != esi)
            int32_t edx_8 = *ebx_1
            int32_t esi_7 = ebx_1[1]
            i_1 = &i_2[-2]
            int32_t ecx_13 = i_2[-1]
            *ebx_1 = i_2[-2]
            ebx_1[1] = ecx_13
            ebx_1 = &ebx_1[2]
            ecx_1 = arg5
            i_1[1] = esi_7
            esi = arg4
            *i_1 = edx_8
            break
        
        i -= 8
        
        if (&i_2[-2] != i)
            int32_t edx_6 = i_2[-2]
            int32_t esi_5 = i_2[-1]
            int32_t ecx_9 = i[1]
            *i_1 = *i
            ebx_1 = var_c_1
            i_1[1] = ecx_9
            *i = edx_6
            i[1] = esi_5
        
        int32_t esi_6 = i[1]
        void* ecx_11 = arg5 - 8
        int32_t edx_7 = *i
        arg5 = ecx_11
        int32_t eax_20 = *ecx_11
        i[1] = *(ecx_11 + 4)
        ecx_1 = arg5
        *i = eax_20
        ecx_1[1] = esi_6
        esi = arg4
        *ecx_1 = edx_7
