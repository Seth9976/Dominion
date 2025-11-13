// 函数: sub_713bf0
// 地址: 0x713bf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg2
void* ebx = eax[3]
int32_t* var_8 = eax

if (*(ebx + 0x6c) != 0)
    void* i_1 = *eax
    
    if (*(i_1 + 8) == 0)
    label_713c4e:
        eax[9] = 1
        void* ebx_1
        void* edi_2
        
        if (*(ebx + 0x68) != 0)
            ebx_1 = arg1 + 0x60
            edi_2 = arg1 + 0x64
        else
            void* edx = *(ebx + 8)
            
            if (edx != 0)
                sub_713a30(arg1, edx)
            
            *(ebx + 0x68) = 1
            edi_2 = arg1 + 0x64
            int32_t eax_3 = *(arg1 + 0x60)
            ebx_1 = arg1 + 0x60
            
            if (*(arg1 + 0x5c) == eax_3)
                int32_t eax_4 = eax_3 * 2
                *ebx_1 = eax_4
                *edi_2 = realloc(*edi_2, eax_4 << 3)
            
            int32_t ecx_3 = *(arg1 + 0x5c)
            int32_t eax_7 = *edi_2
            *(eax_7 + (ecx_3 << 3)) = 0
            *(eax_7 + (ecx_3 << 3) + 4) = ebx
            *(arg1 + 0x5c) += 1
        
        int32_t* ecx_6 = var_8
        int32_t eax_8 = *(arg1 + 0x5c)
        int32_t* edx_2 = ecx_6[2]
        void* edx_3 = *edx_2
        
        if (*(edx_3 + 0x68) == 0)
            void* edx_4 = *(edx_3 + 8)
            
            if (edx_4 != 0)
                sub_713a30(arg1, edx_4)
                ebx_1 = arg1 + 0x60
            
            void* edx_5 = edx_3
            *(edx_5 + 0x68) = 1
            int32_t eax_9 = *ebx_1
            
            if (*(arg1 + 0x5c) == eax_9)
                int32_t eax_10 = eax_9 * 2
                *ebx_1 = eax_10
                edx_5 = edx_3
                *edi_2 = realloc(*edi_2, eax_10 << 3)
            
            int32_t ecx_5 = *(arg1 + 0x5c)
            int32_t eax_13 = *edi_2
            edi_2 = arg1 + 0x64
            *(eax_13 + (ecx_5 << 3)) = 0
            *(eax_13 + (ecx_5 << 3) + 4) = edx_5
            *(arg1 + 0x5c) += 1
            eax_8 = *(arg1 + 0x5c)
            ecx_6 = var_8
        
        int32_t ecx_7 = ecx_6[1]
        
        if (ecx_7 s> 1)
            int32_t ecx_8 = edx_2[ecx_7 - 1]
            int32_t i = 0
            
            if (eax_8 s> 0)
                void* ecx_9 = *edi_2
                
                do
                    if (*(ecx_9 + 4) == ecx_8)
                        ebx_1 = arg1 + 0x60
                        edi_2 = arg1 + 0x64
                        goto label_713d89
                    
                    i += 1
                    ecx_9 += 8
                while (i s< *(arg1 + 0x5c))
                
                ebx_1 = arg1 + 0x60
                edi_2 = arg1 + 0x64
            
            int32_t eax_15 = *(arg1 + 0x6c)
            
            if (*(arg1 + 0x68) == eax_15)
                int32_t eax_16 = eax_15 * 2
                *(arg1 + 0x6c) = eax_16
                *(arg1 + 0x70) = realloc(*(arg1 + 0x70), eax_16 << 2)
            
            *(*(arg1 + 0x70) + (*(arg1 + 0x68) << 2)) = ecx_8
            *(arg1 + 0x68) += 1
        
    label_713d89:
        int32_t eax_20 = *ebx_1
        
        if (*(arg1 + 0x5c) == eax_20)
            int32_t eax_21 = eax_20 * 2
            *ebx_1 = eax_21
            *edi_2 = realloc(*edi_2, eax_21 << 3)
        
        int32_t eax_24 = *edi_2
        int32_t edi_4 = 0
        int32_t ecx_11 = *(arg1 + 0x5c)
        *(eax_24 + (ecx_11 << 3)) = 1
        *(eax_24 + (ecx_11 << 3) + 4) = var_8
        *(arg1 + 0x5c) += 1
        int32_t ebx_2 = *(edx_3 + 0xc)
        int32_t eax_26 = *(edx_3 + 0x10)
        int32_t var_10_2 = eax_26
        
        if (ebx_2 s> 0)
            do
                void* esi_1 = *(eax_26 + (edi_4 << 2))
                
                if (*(esi_1 + 0x6c) != 0)
                    if (*(esi_1 + 0x68) != 0)
                        sub_713ba0(*(esi_1 + 0x10), *(esi_1 + 0xc))
                        eax_26 = var_10_2
                    
                    *(esi_1 + 0x68) = 0
                
                edi_4 += 1
            while (edi_4 s< ebx_2)
        
        void* eax_29 = edx_2[var_8[1] - 1]
        *(eax_29 + 0x68) = 1
        return eax_29
    
    void* ecx = *(arg1 + 0x34)
    
    if (ecx != 0)
        int32_t* eax_1 = *(ecx + 8)
        int32_t ecx_1 = 0
        int32_t eax_2 = *eax_1
        
        if (eax_2 s> 0)
            while (*(eax_1[2] + (ecx_1 << 2)) != i_1)
                ecx_1 += 1
                
                if (ecx_1 s>= eax_2)
                    goto label_713c3a
            
            eax = var_8
            goto label_713c4e
        
    label_713c3a:
        eax = var_8

eax[9] = 0
return eax
