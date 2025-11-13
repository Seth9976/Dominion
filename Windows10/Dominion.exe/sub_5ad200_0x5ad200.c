// 函数: sub_5ad200
// 地址: 0x5ad200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_20 = arg5
int32_t* esi = &arg2[((arg4 - arg2) s>> 4) * 2]
int32_t* edi_1 = arg2
sub_5adf60(arg4 - 8, esi, edi_1, arg4 - 8)
int32_t* ebx = &esi[2]

if (edi_1 u< esi)
    int32_t xmm1_1 = *esi
    
    do
        int32_t xmm2_1 = xmm1_1
        xmm1_1 = esi[-2]
        
        if (xmm2_1 f> xmm1_1)
            break
        
        if (xmm1_1 f> xmm2_1)
            break
        
        if (esi[1] f> esi[-1])
            break
        
        if (xmm1_1 f> xmm2_1)
            break
        
        if (not(xmm2_1 f> xmm1_1) && esi[-1] f> esi[1])
            break
        
        esi -= 8
    while (edi_1 u< esi)

void* eax_4 = arg4

if (ebx u< eax_4)
    int32_t xmm2_2 = *esi
    
    do
        int32_t xmm1_2 = *ebx
        
        if (xmm2_2 f> xmm1_2)
            break
        
        if (xmm1_2 f> xmm2_2)
            break
        
        if (esi[1] f> ebx[1])
            break
        
        if (xmm1_2 f> xmm2_2)
            break
        
        if (not(xmm2_2 f> xmm1_2) && ebx[1] f> esi[1])
            break
        
        ebx = &ebx[2]
    while (ebx u< eax_4)

int32_t* ecx_1 = esi
int32_t* edx_1 = ebx
arg5 = ecx_1

while (true)
    if (edx_1 u< eax_4)
        do
            int32_t xmm1_3 = *esi
            int32_t xmm2_3 = *edx_1
            
            if (not(xmm2_3 f> xmm1_3))
                if (xmm1_3 f> xmm2_3)
                    break
                
                if (not(edx_1[1] f> esi[1]))
                    if (xmm1_3 f> xmm2_3)
                        break
                    
                    if (not(xmm2_3 f> xmm1_3) && esi[1] f> edx_1[1])
                        break
                    
                    if (ebx != edx_1)
                        int32_t xmm0_7 = *ebx
                        int32_t xmm1_4 = ebx[1]
                        int32_t ecx_2 = edx_1[1]
                        *ebx = *edx_1
                        eax_4 = arg4
                        ebx[1] = ecx_2
                        *edx_1 = xmm0_7
                        edx_1[1] = xmm1_4
                    
                    ebx = &ebx[2]
            
            edx_1 = &edx_1[2]
        while (edx_1 u< eax_4)
        
        ecx_1 = arg5
        edi_1 = arg2
    
    bool cond:0_1 = ecx_1 != edi_1
    
    if (ecx_1 u> edi_1)
        int32_t* eax_6 = arg2
        void* edi_2 = &ecx_1[-2]
        
        do
            int32_t xmm1_5 = *edi_2
            int32_t xmm2_4 = *esi
            
            if (not(xmm2_4 f> xmm1_5))
                if (xmm1_5 f> xmm2_4)
                    break
                
                if (not(esi[1] f> *(edi_2 + 4)))
                    if (xmm1_5 f> xmm2_4)
                        break
                    
                    if (not(xmm2_4 f> xmm1_5) && *(edi_2 + 4) f> esi[1])
                        break
                    
                    esi -= 8
                    
                    if (esi != edi_2)
                        int32_t xmm1_6 = *esi
                        int32_t xmm0_10 = esi[1]
                        int32_t eax_7 = *edi_2
                        esi[1] = *(edi_2 + 4)
                        ecx_1 = arg5
                        *esi = eax_7
                        *edi_2 = xmm1_6
                        *(edi_2 + 4) = xmm0_10
                
                eax_6 = arg2
            
            ecx_1 -= 8
            edi_2 -= 8
            arg5 = ecx_1
        while (eax_6 u< ecx_1)
        
        edi_1 = arg2
        cond:0_1 = ecx_1 != edi_1
        eax_4 = arg4
    
    if (cond:0_1)
        int32_t* ecx_6 = &ecx_1[-2]
        arg5 = ecx_6
        
        if (edx_1 != eax_4)
            int32_t eax_13 = *ecx_6
            int32_t xmm1_11 = edx_1[1]
            int32_t xmm0_15 = *edx_1
            arg5 = ecx_6
            edx_1[1] = ecx_6[1]
            ecx_1 = arg5
            *edx_1 = eax_13
            edx_1 = &edx_1[2]
            eax_4 = arg4
            *ecx_6 = xmm0_15
            edi_1 = arg2
            ecx_1[1] = xmm1_11
        else
            esi -= 8
            void* eax_10 = &esi[1]
            
            if (ecx_6 != esi)
                int32_t xmm1_9 = ecx_6[1]
                int32_t xmm0_13 = *ecx_6
                int32_t ecx_7 = esi[1]
                *ecx_6 = *esi
                ecx_6[1] = ecx_7
                *esi = xmm0_13
                *eax_10 = xmm1_9
            
            int32_t xmm1_10 = *eax_10
            ebx -= 8
            int32_t xmm0_14 = *esi
            edi_1 = arg2
            int32_t ecx_8 = ebx[1]
            *esi = *ebx
            eax_4 = arg4
            esi[1] = ecx_8
            ecx_1 = arg5
            *ebx = xmm0_14
            ebx[1] = xmm1_10
    else
        if (edx_1 == eax_4)
            break
        
        if (ebx != edx_1)
            int32_t xmm1_7 = *esi
            int32_t xmm0_11 = esi[1]
            int32_t ecx_4 = ebx[1]
            *esi = *ebx
            esi[1] = ecx_4
            *ebx = xmm1_7
            ebx[1] = xmm0_11
        
        ebx = &ebx[2]
        int32_t ecx_5 = edx_1[1]
        int32_t xmm1_8 = *esi
        int32_t xmm0_12 = esi[1]
        *esi = *edx_1
        eax_4 = arg4
        esi[1] = ecx_5
        esi = &esi[2]
        ecx_1 = arg5
        *edx_1 = xmm1_8
        edx_1[1] = xmm0_12
        edx_1 = &edx_1[2]

*arg3 = esi
arg3[1] = ebx
return arg3
