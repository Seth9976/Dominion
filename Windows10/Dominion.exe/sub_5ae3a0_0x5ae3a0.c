// 函数: sub_5ae3a0
// 地址: 0x5ae3a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = arg4
int32_t xmm0 = *arg2
void* esi = &arg2[(ecx - arg2) s>> 3]
int32_t* edi = ecx - 4
int32_t eax_5 = (edi - arg2) s>> 2

if (eax_5 s<= 0x28)
    int32_t xmm1_12 = *esi
    
    if (not(xmm0 f<= xmm1_12))
        *esi = xmm0
        *arg2 = xmm1_12
    
    int32_t xmm0_8 = *edi
    int32_t xmm1_13 = *esi
    
    if (not(xmm1_13 f<= xmm0_8))
        *edi = xmm1_13
        *esi = xmm0_8
        int32_t xmm1_14 = *arg2
        
        if (not(xmm1_14 f<= xmm0_8))
            *esi = xmm1_14
            *arg2 = xmm0_8
else
    int32_t eax_7 = (eax_5 + 1) s>> 3
    int32_t* eax_8 = eax_7 << 2
    int32_t xmm1 = *(eax_8 + arg2)
    
    if (not(xmm0 f<= xmm1))
        *(eax_8 + arg2) = xmm0
        *arg2 = xmm1
    
    int32_t xmm0_1 = arg2[eax_7 * 2]
    int32_t xmm1_1 = *(eax_8 + arg2)
    
    if (not(xmm1_1 f<= xmm0_1))
        arg2[eax_7 * 2] = xmm1_1
        *(eax_8 + arg2) = xmm0_1
        int32_t xmm1_2 = *arg2
        
        if (not(xmm1_2 f<= xmm0_1))
            *(eax_8 + arg2) = xmm1_2
            *arg2 = xmm0_1
    
    int32_t xmm1_3 = *esi
    int32_t* edx_2 = esi - eax_8
    int32_t xmm0_2 = *edx_2
    
    if (not(xmm0_2 f<= xmm1_3))
        *esi = xmm0_2
        *edx_2 = xmm1_3
    
    int32_t xmm0_3 = *(eax_8 + esi)
    int32_t xmm1_4 = *esi
    
    if (not(xmm1_4 f<= xmm0_3))
        *(eax_8 + esi) = xmm1_4
        *esi = xmm0_3
        int32_t xmm1_5 = *edx_2
        
        if (not(xmm1_5 f<= xmm0_3))
            *esi = xmm1_5
            *edx_2 = xmm0_3
    
    int32_t* ecx_2 = edi - (eax_7 << 3)
    void* edx_4 = edi - eax_8
    float xmm0_4 = *ecx_2
    float xmm1_6 = *edx_4
    ecx = arg4
    
    if (not(xmm0_4 <= xmm1_6))
        *edx_4 = xmm0_4
        *ecx_2 = xmm1_6
        ecx = arg4
    
    int32_t xmm0_5 = *edi
    int32_t xmm1_7 = *edx_4
    
    if (not(xmm1_7 f<= xmm0_5))
        *edi = xmm1_7
        *edx_4 = xmm0_5
        int32_t xmm1_8 = *ecx_2
        
        if (not(xmm1_8 f<= xmm0_5))
            *edx_4 = xmm1_8
            *ecx_2 = xmm0_5
    
    int32_t xmm1_9 = *esi
    int32_t xmm0_6 = *(eax_8 + arg2)
    
    if (not(xmm0_6 f<= xmm1_9))
        *esi = xmm0_6
        *(eax_8 + arg2) = xmm1_9
    
    int32_t xmm0_7 = *edx_4
    int32_t xmm1_10 = *esi
    
    if (not(xmm1_10 f<= xmm0_7))
        *edx_4 = xmm1_10
        *esi = xmm0_7
        int32_t xmm1_11 = *(eax_8 + arg2)
        
        if (not(xmm1_11 f<= xmm0_7))
            *esi = xmm1_11
            *(eax_8 + arg2) = xmm0_7

void* i_1 = esi + 4

if (arg2 u< esi)
    int32_t xmm1_15 = *esi
    
    do
        int32_t xmm0_9 = *(esi - 4)
        
        if (xmm1_15 f> xmm0_9)
            break
        
        if (xmm0_9 f> *esi)
            break
        
        esi -= 4
        xmm1_15 = xmm0_9
    while (arg2 u< esi)

if (i_1 u< ecx)
    int32_t xmm1_16 = *esi
    
    do
        int32_t xmm0_10 = *i_1
        
        if (xmm1_16 f> xmm0_10)
            break
        
        if (xmm0_10 f> xmm1_16)
            break
        
        i_1 += 4
    while (i_1 u< ecx)

void* i = i_1
void* edi_2 = esi

while (true)
    void* eax_9
    
    for (eax_9 = arg4; i u< eax_9; i += 4)
        int32_t xmm0_11 = *esi
        int32_t xmm1_17 = *i
        
        if (not(xmm1_17 f> xmm0_11))
            if (xmm0_11 f> xmm1_17)
                break
            
            eax_9 = arg4
            
            if (i_1 != i)
                int32_t xmm0_12 = *i_1
                *i_1 = xmm1_17
                *i = xmm0_12
            
            i_1 += 4
    
    bool cond:1_1 = edi_2 != arg2
    
    if (edi_2 u> arg2)
        void* eax_10 = edi_2 - 4
        
        do
            int32_t xmm1_18 = *eax_10
            int32_t xmm0_13 = *esi
            
            if (not(xmm0_13 f> xmm1_18))
                if (xmm1_18 f> xmm0_13)
                    break
                
                esi -= 4
                
                if (esi != eax_10)
                    int32_t xmm0_14 = *esi
                    *esi = xmm1_18
                    *eax_10 = xmm0_14
            
            edi_2 -= 4
            eax_10 -= 4
        while (arg2 u< edi_2)
        
        eax_9 = arg4
        cond:1_1 = edi_2 != arg2
    
    if (cond:1_1)
        edi_2 -= 4
        
        if (i != eax_9)
            int32_t xmm0_19 = *i
            *i = *edi_2
            i += 4
            *edi_2 = xmm0_19
        else
            esi -= 4
            
            if (edi_2 != esi)
                int32_t xmm0_17 = *edi_2
                *edi_2 = *esi
                *esi = xmm0_17
            
            int32_t xmm0_18 = *esi
            i_1 -= 4
            *esi = *i_1
            *i_1 = xmm0_18
    else
        if (i == eax_9)
            break
        
        if (i_1 != i)
            int32_t xmm0_15 = *esi
            *esi = *i_1
            *i_1 = xmm0_15
        
        int32_t xmm0_16 = *esi
        i_1 += 4
        *esi = *i
        esi += 4
        *i = xmm0_16
        i += 4

*arg3 = esi
arg3[1] = i_1
return arg3
