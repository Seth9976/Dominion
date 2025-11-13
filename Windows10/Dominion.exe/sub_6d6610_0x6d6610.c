// 函数: sub_6d6610
// 地址: 0x6d6610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = arg2
int32_t i_1 = arg2
void* ebx = arg1

while (i s> 0xc)
    int32_t xmm1_1 = *(ebx + 4)
    void* var_10_1 = ebx
    int32_t i_3 = i_1 - 1
    uint32_t edi = (i u>> 1) * 5
    int32_t xmm0_1 = *(ebx + (edi << 2) + 4)
    int32_t xmm2_1 = *(ebx + i_1 * 0x14 - 0x10)
    int32_t edx
    edx.b = xmm2_1 f> xmm0_1
    int32_t eax_4
    eax_4.b = xmm0_1 f> xmm1_1
    
    if (eax_4 != edx)
        int32_t eax_5
        eax_5.b = xmm2_1 f> xmm1_1
        int32_t i_4 = 0
        
        if (eax_5 != edx)
            i_4 = i_3
        
        int32_t ecx_1 = i_4 * 5
        int128_t xmm1_2 = *(ebx + (ecx_1 << 2))
        int32_t edx_1 = *(ebx + (ecx_1 << 2) + 0x10)
        *(ebx + (ecx_1 << 2)) = *(ebx + (edi << 2))
        *(ebx + (ecx_1 << 2) + 0x10) = *(ebx + (edi << 2) + 0x10)
        *(ebx + (edi << 2)) = xmm1_2
        *(ebx + (edi << 2) + 0x10) = edx_1
    
    int32_t ecx_2 = *(ebx + 0x10)
    int128_t xmm1_3 = *ebx
    *ebx = *(ebx + (edi << 2))
    *(ebx + 0x10) = *(ebx + (edi << 2) + 0x10)
    *(ebx + (edi << 2)) = xmm1_3
    *(ebx + (edi << 2) + 0x10) = ecx_2
    int32_t edi_1 = 1
    void* eax_15
    
    while (true)
        float j = *(ebx + 4)
        void* eax_10 = ebx + ((edi_1 * 5 + 1) << 2)
        
        if (not(j f<= *(ebx + ((edi_1 * 5 + 1) << 2))))
            do
                eax_10 += 0x14
                edi_1 += 1
            while (j f> *eax_10)
        
        void* eax_13 = ebx + ((i_3 * 5 + 1) << 2)
        
        if (not(*(ebx + ((i_3 * 5 + 1) << 2)) f<= j))
            int32_t xmm0_5
            
            do
                xmm0_5 = *(eax_13 - 0x14)
                eax_13 -= 0x14
                i_3 -= 1
            while (xmm0_5 f> j)
        
        eax_15 = ebx + edi_1 * 0x14
        
        if (edi_1 s>= i_3)
            break
        
        int128_t xmm1_4 = *eax_15
        int32_t edx_2 = *(eax_15 + 0x10)
        int32_t ecx_3 = i_3 * 5
        edi_1 += 1
        *eax_15 = *(ebx + (ecx_3 << 2))
        *(eax_15 + 0x10) = *(ebx + (ecx_3 << 2) + 0x10)
        int32_t ecx_5 = i_3 * 5
        *(ebx + (ecx_5 << 2)) = xmm1_4
        *(ebx + (ecx_5 << 2) + 0x10) = edx_2
        i_3 -= 1
    
    int32_t i_2 = i_1 - edi_1
    i = i_2
    
    if (i_3 s>= i_2)
        i = i_3
    
    if (i_3 s< i_2)
        ebx = eax_15
    
    i_1 = i
    sub_6d6610()
