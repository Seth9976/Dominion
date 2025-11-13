// 函数: sub_713e20
// 地址: 0x713e20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = arg2[3]
void* ecx_1 = ecx[1]
void* var_8 = ecx_1
int32_t ebx = **ecx
void* eax_6

if (*(ecx_1 + 0x6c) == 0)
label_713e80:
    eax_6 = arg2
    *(eax_6 + 0x70) = 0
else
    int32_t* eax_2 = arg2
    void* esi_1 = *eax_2
    
    if (*(esi_1 + 8) != 0)
        void* eax_3 = arg1[0xd]
        
        if (eax_3 == 0)
            goto label_713e80
        
        int32_t* eax_4 = *(eax_3 + 0x10)
        int32_t eax_5 = *eax_4
        int32_t edx_1 = 0
        
        if (eax_5 s<= 0)
            goto label_713e80
        
        while (true)
            ecx_1 = var_8
            
            if (*(eax_4[2] + (edx_1 << 2)) == esi_1)
                eax_2 = arg2
                break
            
            edx_1 += 1
            
            if (edx_1 s>= eax_5)
                goto label_713e80
    
    void* edx_3 = &arg1[0xd]
    eax_2[0x1c] = 1
    void* esi_2 = *edx_3
    
    if (esi_2 != 0)
        int32_t* i = *(esi_2 + 0x14)
        
        if (i != 0)
            do
                if (*i == ebx)
                    eax_2 = sub_713a90(eax_2, i[2], arg1, ecx_1)
                    ecx_1 = var_8
                
                i = i[3]
            while (i != 0)
            
            edx_3 = &arg1[0xd]
    
    void* eax_7 = *arg1
    void* esi_3 = *(eax_7 + 0x38)
    
    if (esi_3 != 0 && esi_3 != *edx_3)
        int32_t* i_1 = *(esi_3 + 0x14)
        
        while (i_1 != 0)
            if (*i_1 == ebx)
                eax_7 = sub_713a90(eax_7, i_1[2], arg1, ecx_1)
            
            i_1 = i_1[3]
            ecx_1 = var_8
    
    int32_t ecx_5 = 0
    int32_t var_10_2 = 0
    void* eax_9 = *(*arg1 + 0x30)
    void* var_14_1 = eax_9
    
    if (eax_9 s> 0)
        do
            eax_9 = *(*(*arg1 + 0x34) + (ecx_5 << 2))
            int32_t* i_2 = *(eax_9 + 0x14)
            
            if (i_2 != 0)
                do
                    if (*i_2 == ebx)
                        eax_9 = sub_713a90(eax_9, i_2[2], arg1, var_8)
                    
                    i_2 = i_2[3]
                while (i_2 != 0)
                
                ecx_5 = var_10_2
            
            ecx_5 += 1
            var_10_2 = ecx_5
        while (ecx_5 s< var_14_1)
    
    void* edx_7 = ecx[7]
    
    if (edx_7 != 0 && *(edx_7 + 4) == 4)
        sub_713a90(eax_9, edx_7, arg1, var_8)
    
    int32_t ebx_1 = 0
    int32_t esi_4 = arg2[1]
    int32_t eax_12 = arg2[2]
    int32_t var_8_1 = eax_12
    int32_t var_10_3 = esi_4
    
    if (esi_4 s> 0)
        do
            void* esi_5 = *(eax_12 + (ebx_1 << 2))
            
            if (*(esi_5 + 0x68) == 0)
                void* edx_8 = *(esi_5 + 8)
                
                if (edx_8 != 0)
                    sub_713a30(arg1, edx_8)
                
                *(esi_5 + 0x68) = 1
                int32_t eax_13 = arg1[0x18]
                
                if (arg1[0x17] == eax_13)
                    int32_t eax_14 = eax_13 * 2
                    arg1[0x18] = eax_14
                    arg1[0x19] = realloc(arg1[0x19], eax_14 << 3)
                
                int32_t ecx_10 = arg1[0x17]
                int32_t eax_17 = arg1[0x19]
                *(eax_17 + (ecx_10 << 3)) = 0
                *(eax_17 + (ecx_10 << 3) + 4) = esi_5
                arg1[0x17] += 1
                eax_12 = var_8_1
            
            esi_4 = var_10_3
            ebx_1 += 1
        while (ebx_1 s< esi_4)
    
    int32_t eax_18 = arg1[0x18]
    
    if (arg1[0x17] == eax_18)
        int32_t eax_19 = eax_18 * 2
        arg1[0x18] = eax_19
        arg1[0x19] = realloc(arg1[0x19], eax_19 << 3)
    
    int32_t ecx_11 = arg1[0x17]
    int32_t eax_22 = arg1[0x19]
    *(eax_22 + (ecx_11 << 3)) = 2
    *(eax_22 + (ecx_11 << 3) + 4) = arg2
    eax_6 = nullptr
    arg1[0x17] += 1
    void* var_c_1 = nullptr
    
    if (esi_4 s> 0)
        int32_t edx_10 = var_8_1
        
        do
            void* eax_23 = *(edx_10 + (eax_6 << 2))
            int32_t edi_1 = 0
            int32_t ebx_2 = *(eax_23 + 0xc)
            int32_t eax_24 = *(eax_23 + 0x10)
            int32_t var_18_1 = eax_24
            
            if (ebx_2 s> 0)
                do
                    void* esi_6 = *(eax_24 + (edi_1 << 2))
                    
                    if (*(esi_6 + 0x6c) != 0)
                        if (*(esi_6 + 0x68) != 0)
                            sub_713ba0(*(esi_6 + 0x10), *(esi_6 + 0xc))
                            eax_24 = var_18_1
                        
                        *(esi_6 + 0x68) = 0
                    
                    edi_1 += 1
                while (edi_1 s< ebx_2)
                
                esi_4 = var_10_3
                edx_10 = var_8_1
            
            eax_6 = var_c_1 + 1
            var_c_1 = eax_6
        while (eax_6 s< esi_4)
        
        int32_t ecx_13 = 0
        void* eax_26
        
        do
            eax_26 = *(edx_10 + (ecx_13 << 2))
            ecx_13 += 1
            *(eax_26 + 0x68) = 1
        while (ecx_13 s< esi_4)
        
        return eax_26

return eax_6
