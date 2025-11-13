// 函数: sub_713a90
// 地址: 0x713a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg2 + 4) != 4)
    return 

int32_t ecx = *(arg2 + 0x18)
arg1 = *(arg2 + 0x14)
int32_t var_8_1 = ecx
int32_t var_14_1 = arg1

if (ecx != 0)
    int32_t edx_1 = *(arg3 + 8)
    int32_t edi_2 = 0
    int32_t var_c_1 = edx_1
    
    if (arg1 s> 0)
        do
            int32_t eax_5 = *(ecx + (edi_2 << 2))
            edi_2 += 1
            arg1 = eax_5 + edi_2
            int32_t var_10_1 = arg1
            
            if (edi_2 s< arg1)
                do
                    void* ebx_1 = *(edx_1 + (*(ecx + (edi_2 << 2)) << 2))
                    
                    if (*(ebx_1 + 0x68) == 0)
                        void* edx_2 = *(ebx_1 + 8)
                        
                        if (edx_2 != 0)
                            sub_713a30(arg3, edx_2)
                        
                        *(ebx_1 + 0x68) = 1
                        int32_t eax_6 = *(arg3 + 0x60)
                        
                        if (*(arg3 + 0x5c) == eax_6)
                            int32_t eax_7 = eax_6 * 2
                            *(arg3 + 0x60) = eax_7
                            *(arg3 + 0x64) = realloc(*(arg3 + 0x64), eax_7 << 3)
                        
                        int32_t ecx_4 = *(arg3 + 0x5c)
                        arg1 = *(arg3 + 0x64)
                        edx_1 = var_c_1
                        *(arg1 + (ecx_4 << 3)) = 0
                        *(arg1 + (ecx_4 << 3) + 4) = ebx_1
                        *(arg3 + 0x5c) += 1
                        ecx = var_8_1
                    
                    edi_2 += 1
                while (edi_2 s< var_10_1)
        while (edi_2 s< var_14_1)
else if (*(arg4 + 0x68) == ecx)
    void* edx = *(arg4 + 8)
    
    if (edx != 0)
        sub_713a30(arg3, edx)
    
    *(arg4 + 0x68) = 1
    int32_t eax = *(arg3 + 0x60)
    
    if (*(arg3 + 0x5c) == eax)
        int32_t eax_1 = eax * 2
        *(arg3 + 0x60) = eax_1
        *(arg3 + 0x64) = realloc(*(arg3 + 0x64), eax_1 << 3)
    
    int32_t ecx_2 = *(arg3 + 0x5c)
    int32_t eax_4 = *(arg3 + 0x64)
    *(eax_4 + (ecx_2 << 3) + 4) = arg4
    *(eax_4 + (ecx_2 << 3)) = 0
    *(arg3 + 0x5c) += 1
