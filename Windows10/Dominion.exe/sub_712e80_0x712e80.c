// 函数: sub_712e80
// 地址: 0x712e80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = *arg1
int32_t* edi = arg1[0x1b]
int32_t* ebx = arg1[3]
int32_t ecx = *(eax + 0xc)
int32_t i_3 = *(eax + 8)
int32_t i_2 = i_3
*edi = i_3
float xmm0_1 = _mm_cvtepi32_ps(zx.o(i_3))

if (edi[1] s< i_3)
    int32_t eax_1 = int.d(xmm0_1 * 1.75f)
    
    if (eax_1 s< 8)
        eax_1 = 8
    
    edi[1] = eax_1
    i_3 = i_2
    edi[2] = realloc(edi[2], eax_1 << 2)

int32_t* edi_1 = edi[2]
int32_t* var_28 = edi_1
*arg1[0x1c] = 0
int32_t* esi_1 = arg1[0x1c]
*esi_1 = i_3

if (esi_1[1] s< i_3)
    int32_t eax_5 = int.d(xmm0_1 * 1.75f)
    
    if (eax_5 s< 8)
        eax_5 = 8
    
    esi_1[1] = eax_5
    i_3 = i_2
    esi_1[2] = realloc(esi_1[2], eax_5 << 2)

void* result = esi_1[2]
void* result_1 = result

if (ebx == 0 || ebx[7] == 0)
    result = nullptr
    void* edx_2 = ecx - edi_1
    void* var_8_1 = edx_2
    
    while (true)
        int32_t* edi_2 = &edi_1[result]
        
        while (true)
        label_712fa9:
            
            if (result s>= i_3)
                break
            
            int32_t* esi_2 = *(edi_2 + edx_2)
            int32_t eax_14 = (*(esi_2[1] + 4))(esi_2)
            int32_t eax_15 = sub_712da0(arg2, eax_14)
            
            if (eax_15 != 0)
                if (ebx != 0)
                    int32_t eax_17 = *esi_2
                    
                    if (eax_17 != 4 && eax_17 != 8 && eax_17 != 7)
                        void* eax_18 = *ebx
                        int32_t esi_3 = 0
                        int32_t edi_3 = *(eax_18 + 8)
                        int32_t ecx_5 = *(eax_18 + 0xc)
                        int32_t var_20_1 = ecx_5
                        
                        if (edi_3 s> 0)
                            while (true)
                                void* eax_19 = *(ecx_5 + (esi_3 << 2))
                                
                                if ((*(*(eax_19 + 4) + 4))(eax_19) == eax_14)
                                    break
                                
                                ecx_5 = var_20_1
                                esi_3 += 1
                                
                                if (esi_3 s>= edi_3)
                                    goto label_713031
                            
                            int32_t* ebx_4 = ebx[3]
                            
                            if (ebx_4 != 0)
                            label_713050:
                                void* eax_23 = *ebx_4
                                int32_t esi_4 = 0
                                int32_t edi_4 = *(eax_23 + 8)
                                int32_t ecx_7 = *(eax_23 + 0xc)
                                int32_t var_20_2 = ecx_7
                                
                                if (edi_4 s> 0)
                                    while (true)
                                        void* eax_24 = *(ecx_7 + (esi_4 << 2))
                                        
                                        if ((*(*(eax_24 + 4) + 4))(eax_24) == eax_14)
                                            ebx_4 = ebx_4[3]
                                            
                                            if (ebx_4 != 0)
                                                goto label_713050
                                            
                                            i_3 = i_2
                                            result += 1
                                            edx_2 = var_8_1
                                            *edi_2 = 2
                                            edi_2 = &edi_2[1]
                                            goto label_712fa9
                                        
                                        esi_4 += 1
                                        
                                        if (esi_4 s>= edi_4)
                                            break
                                        
                                        ecx_7 = var_20_2
                                
                                if (ebx_4[0x17] f> 0)
                                    edi_1 = var_28
                                    edx_2 = var_8_1
                                    edi_1[result] = 3
                                    *(result_1 + (result << 2)) = ebx_4
                                    result += 1
                                    i_3 = i_2
                                    continue
                            
                            i_3 = i_2
                            result += 1
                            edx_2 = var_8_1
                            *edi_2 = 2
                            edi_2 = &edi_2[1]
                            continue
                
            label_713031:
                i_3 = i_2
                result += 1
                edx_2 = var_8_1
                *edi_2 = 1
                edi_2 = &edi_2[1]
            else
                i_3 = i_2
                edx_2 = var_8_1
                *edi_2 = eax_15
                result += 1
                edi_2 = &edi_2[1]
else if (i_3 s> 0)
    int32_t i_1 = i_2
    result = ecx - edi_1
    void* result_2 = result
    int32_t i
    
    do
        void* eax_9 = *(edi_1 + result)
        sub_712da0(arg2, (*(*(eax_9 + 4) + 4))(eax_9))
        result = result_2
        edi_1 = &edi_1[1]
        edi_1[-1] = 2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
