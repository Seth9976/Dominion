// 函数: sub_5ad660
// 地址: 0x5ad660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = arg4
int32_t* esi = &arg2[(edi - arg2) s>> 3]
int32_t* eax_3 = edi - 4
sub_5ae750(eax_3, esi, arg2, eax_3, arg5)
int32_t eax_4 = arg5
int32_t* ebx_1 = &esi[1]
int32_t* var_c = ebx_1

if (arg2 u< esi)
    int32_t edx_1 = *esi
    
    do
        void* ecx_1 = &esi[-1]
        int32_t xmm0_1 = *(eax_4 + *ecx_1 * 0xc + 8)
        int32_t xmm1_1 = *(eax_4 + edx_1 * 0xc + 8)
        
        if (xmm0_1 f> xmm1_1)
            break
        
        if (xmm1_1 f> xmm0_1)
            break
        
        esi = ecx_1
        edx_1 = *ecx_1
    while (arg2 u< esi)
    
    edi = arg4

if (ebx_1 u< edi)
    int32_t xmm1_2 = *(eax_4 + *esi * 0xc + 8)
    
    do
        int32_t xmm0_2 = *(eax_4 + *ebx_1 * 0xc + 8)
        
        if (xmm0_2 f> xmm1_2)
            break
        
        if (xmm1_2 f> xmm0_2)
            break
        
        ebx_1 = &ebx_1[1]
    while (ebx_1 u< edi)
    
    var_c = ebx_1

int32_t* edx_3 = esi
int32_t* edi_2 = ebx_1
int32_t* var_8 = edx_3

while (true)
    int32_t* var_14_2 = edi_2
    
    while (true)
        if (edi_2 u< arg4)
            do
                int32_t xmm0_3 = *(eax_4 + *esi * 0xc + 8)
                int32_t xmm1_3 = *(eax_4 + *edi_2 * 0xc + 8)
                
                if (not(xmm0_3 f> xmm1_3))
                    if (xmm1_3 f> xmm0_3)
                        break
                    
                    if (ebx_1 == edi_2)
                        ebx_1 = &ebx_1[1]
                    else
                        int32_t ecx_14 = *ebx_1
                        *ebx_1 = *edi_2
                        ebx_1 = &ebx_1[1]
                        *edi_2 = ecx_14
                
                edi_2 = &edi_2[1]
            while (edi_2 u< arg4)
            
            edx_3 = var_8
            var_c = ebx_1
            var_14_2 = edi_2
        
        bool cond:0_1 = edx_3 != arg2
        
        if (edx_3 u> arg2)
            void* edi_3 = &edx_3[-1]
            int32_t* ecx_21
            
            do
                int32_t xmm0_4 = *(eax_4 + *edi_3 * 0xc + 8)
                int32_t xmm1_4 = *(eax_4 + *esi * 0xc + 8)
                
                if (not(xmm0_4 f> xmm1_4))
                    if (xmm1_4 f> xmm0_4)
                        ecx_21 = arg2
                        break
                    
                    esi -= 4
                    
                    if (esi != edi_3)
                        int32_t ecx_20 = *esi
                        *esi = *edi_3
                        *edi_3 = ecx_20
                
                ecx_21 = arg2
                edx_3 -= 4
                edi_3 -= 4
            while (ecx_21 u< edx_3)
            
            edi_2 = var_14_2
            cond:0_1 = edx_3 != ecx_21
            ebx_1 = var_c
            var_8 = edx_3
        
        if (not(cond:0_1))
            if (edi_2 == arg4)
                *arg3 = esi
                arg3[1] = ebx_1
                return arg3
            
            if (ebx_1 != edi_2)
                int32_t edx_5 = *esi
                *esi = *ebx_1
                *ebx_1 = edx_5
            
            int32_t edx_6 = *esi
            ebx_1 = &ebx_1[1]
            *esi = *edi_2
            esi = &esi[1]
            *edi_2 = edx_6
            edi_2 = &edi_2[1]
            edx_3 = var_8
            var_c = ebx_1
            break
        
        var_8 = &edx_3[-1]
        
        if (edi_2 != arg4)
            var_8 = &edx_3[-1]
            int32_t edx_10 = *edi_2
            *edi_2 = *var_8
            edi_2 = &edi_2[1]
            *var_8 = edx_10
            edx_3 = var_8
            break
        
        esi -= 4
        
        if (&edx_3[-1] != esi)
            int32_t edx_8 = edx_3[-1]
            *var_8 = *esi
            eax_4 = arg5
            *esi = edx_8
        
        int32_t edx_9 = *esi
        ebx_1 -= 4
        var_c = ebx_1
        *esi = *ebx_1
        *ebx_1 = edx_9
        edx_3 = var_8
