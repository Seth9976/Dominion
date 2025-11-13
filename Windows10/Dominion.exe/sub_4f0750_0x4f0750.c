// 函数: sub_4f0750
// 地址: 0x4f0750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg4
int32_t edx = *(arg2 + 0xb4)
void* result_2 = edx * 0x84
void* result_1 = result_2

if (*(esi + 0x40) == 2 && *(esi + 0x5c) s> 2 && *(arg3 + 0x19dc) s> 2)
    int32_t eax_1 = *(esi + 0x50)
    
    if (eax_1 == *(esi + 0x4c) && eax_1 == edx)
        int32_t edi_1 = data_177793c
        int32_t ebx_1 = data_1777938
        int32_t eax_2
        int32_t edx_1
        eax_2, edx_1 = __allmul(ebx_1, edi_1, 0x4c957f2d, 0x5851f42d)
        bool c_1 = eax_2 + data_1777940 u< eax_2
        data_1777938 = eax_2 + data_1777940
        data_177793c = adc.d(edx_1, data_1777944, c_1)
        result_2 = result_1
        esi = arg4
        
        if (ror.d(edi_1 u>> 0xd ^ (ebx_1 u>> 0x1b | edi_1 << 5), (edi_1 u>> 0x1b).b) u% 0x64
                s< *(result_2 + 0x1777644))
            int32_t i = 0
            
            if (*(arg2 + 0xd4) s> 0)
                int32_t ecx_2 = 0
                
                do
                    int32_t edx_5 = *(arg2 + 0xd0)
                    
                    if (*(ecx_2 + edx_5 + 0x10) == *(esi + 0x5c))
                        *(ecx_2 + edx_5 + 0x3c) = *(ecx_2 + edx_5 + 0x3c) - 999f
                    
                    i += 1
                    ecx_2 += 0x54
                while (i s< *(arg2 + 0xd4))
                
                result_2 = result_1

int32_t eax_7 = *(esi + 0x40)

if (eax_7 == 3 || eax_7 == 0xc)
    int32_t eax_8 = *(esi + 0x50)
    
    if (eax_8 == *(esi + 0x4c) && eax_8 == *(arg2 + 0xb4) && *(result_2 + 0x1777648) s> 0)
        int32_t i_1 = 0
        
        if (*(arg2 + 0xd4) s> 0)
            int32_t ecx_3 = 0
            
            do
                int32_t edx_6 = *(arg2 + 0xd0)
                
                if (*(ecx_3 + edx_6 + 0x10) != 0 && **(ecx_3 + edx_6 + 0xc) == 0x100)
                    *(ecx_3 + edx_6 + 0x3c) = *(ecx_3 + edx_6 + 0x3c) - 999f
                
                i_1 += 1
                ecx_3 += 0x54
            while (i_1 s< *(arg2 + 0xd4))

int32_t eax_10 = *(esi + 0x40)
void* result_3

if (eax_10 == 3 || eax_10 == 0xc)
    int32_t eax_11 = *(esi + 0x50)
    
    if (eax_11 != *(esi + 0x4c))
        result_3 = result_1
    else
        result_3 = result_1
        
        if (eax_11 == *(arg2 + 0xb4) && *(arg3 + 0x19dc) s<= *(result_3 + 0x177769c))
            int32_t i_2 = 0
            
            if (*(arg2 + 0xd4) s> 0)
                int32_t ecx_4 = 0
                
                do
                    int32_t edx_7 = *(arg2 + 0xd0)
                    
                    if (*(ecx_4 + edx_7 + 0x10) != 0)
                        int32_t eax_15 = **(ecx_4 + edx_7 + 0xc)
                        
                        if (eax_15 == 0x101 || eax_15 == 0x102 || eax_15 == 0x103
                                || eax_15 == 0x601)
                            *(ecx_4 + edx_7 + 0x3c) = *(ecx_4 + edx_7 + 0x3c) - 10f
                    
                    i_2 += 1
                    ecx_4 += 0x54
                while (i_2 s< *(arg2 + 0xd4))
                
                result_3 = result_1
else
    result_3 = result_1

int32_t eax_16 = *(esi + 0x40)

if (eax_16 == 3 || eax_16 == 0xc)
    int32_t eax_17 = *(esi + 0x50)
    
    if (eax_17 == *(esi + 0x4c) && eax_17 == *(arg2 + 0xb4) && *(result_3 + 0x17776a0) != 0)
        int32_t i_5 = 0
        
        if (*(arg2 + 0xd4) s> 0)
            int32_t edi_2 = 0
            int32_t i_3
            
            do
                int32_t eax_18 = *(arg2 + 0xd0)
                
                if (*(edi_2 + eax_18 + 0x10) != 0)
                    int32_t j = **(edi_2 + eax_18 + 0xc)
                    int32_t* eax_25 = *(((j s% 0x2717) << 2) + &data_1938e70)
                    
                    if (eax_25 == 0)
                    label_4f0a0e:
                        int32_t j_1 = j
                        sub_4f7f30("Couldn't lookup %d\n")
                        eax_25 = nullptr
                    else
                        while (*eax_25 != j)
                            eax_25 = eax_25[0x6e]
                            
                            if (eax_25 == 0)
                                goto label_4f0a0e
                    
                    if ((eax_25[2] & 2) != 0)
                        int32_t eax_29 = *(arg2 + 0xd0)
                        *(edi_2 + eax_29 + 0x3c) = *(edi_2 + eax_29 + 0x3c) - 4f
                
                edi_2 += 0x54
                i_3 = i_5 + 1
                i_5 = i_3
            while (i_3 s< *(arg2 + 0xd4))
            esi = arg4

void* result = *(esi + 0x40)

if (result == 3 || result == 0xc)
    result = *(esi + 0x50)
    
    if (result == *(esi + 0x4c) && result == *(arg2 + 0xb4))
        result = result_1
        
        if (*(result + 0x17776a1) != 0)
            int32_t i_4 = 0
            
            if (*(arg2 + 0xd4) s> 0)
                int32_t ecx_7 = 0
                
                do
                    int32_t edx_10 = *(arg2 + 0xd0)
                    
                    if (*(ecx_7 + edx_10 + 0x10) != 0)
                        result = **(ecx_7 + edx_10 + 0xc)
                        
                        if (result == 0x101 || result == 0x102 || result == 0x103 || result == 0x104
                                || result == 0x105 || result == 0x106 || result == 0x100)
                            *(ecx_7 + edx_10 + 0x3c) = *(ecx_7 + edx_10 + 0x3c) - 5f
                    
                    i_4 += 1
                    ecx_7 += 0x54
                while (i_4 s< *(arg2 + 0xd4))

return result
