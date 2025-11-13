// 函数: sub_723130
// 地址: 0x723130
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg1

if (arg1[0x11f3] == 0)
    return 

int32_t i = 0
int32_t i_1 = 0

if (*(*arg1 + 8) s<= 0)
    return 

void* esi_1 = &arg1[0x11b6]
void* var_18_1 = esi_1

do
    int32_t eax_1 = 0
    int32_t ebx_3 = (*(esi_1 - 0x1c) + 7) s>> 3
    int32_t edx_3 = (*(esi_1 - 0x20) + 7) s>> 3
    int32_t var_1c_1 = edx_3
    int32_t var_8_1 = 0
    
    if (ebx_3 s> 0)
        do
            int32_t ebx_4 = 0
            int32_t var_10_1 = 0
            
            if (edx_3 s> 0)
                do
                    int16_t* edi_5 = ((*(esi_1 + 4) * eax_1 + ebx_4) << 7) + *esi_1
                    void* esi_3 = &arg1[0xd21 + *(esi_1 - 0x30) * 0x20]
                    
                    if (edi_5 u> esi_3 + 0x7e || &edi_5[0x3f] u< esi_3)
                        void* ecx_2 = esi_3 + 0x30
                        int32_t j_2 = 2
                        void* eax_6 = &edi_5[8]
                        int32_t j
                        
                        do
                            eax_6 += 0x40
                            ecx_2 += 0x40
                            *(eax_6 - 0x50) = _mm_mullo_epi16(*(ecx_2 - 0x70), *(eax_6 - 0x50))
                            *(eax_6 - 0x40) =
                                _mm_mullo_epi16(*(esi_3 - edi_5 + eax_6 - 0x40), *(eax_6 - 0x40))
                            *(eax_6 - 0x30) = _mm_mullo_epi16(*(ecx_2 - 0x50), *(eax_6 - 0x30))
                            *(eax_6 - 0x20) = _mm_mullo_epi16(*(ecx_2 - 0x40), *(eax_6 - 0x20))
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                    else
                        int16_t* eax_5 = edi_5
                        int32_t j_3 = 0x40
                        int32_t j_1
                        
                        do
                            int16_t ecx_1 = *eax_5
                            eax_5 = &eax_5[1]
                            eax_5[-1] = *(eax_5 + esi_3 - edi_5 - 2) * ecx_1
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                        ebx_4 = var_10_1
                    
                    esi_1 = var_18_1
                    int32_t ecx_3 = *(esi_1 - 0x18)
                    var_c[0x1203](*(esi_1 - 0x10) + ((ecx_3 * var_8_1 + ebx_4) << 3), ecx_3, edi_5)
                    edx_3 = var_1c_1
                    ebx_4 += 1
                    eax_1 = var_8_1
                    arg1 = var_c
                    var_10_1 = ebx_4
                while (ebx_4 s< edx_3)
            
            eax_1 += 1
            var_8_1 = eax_1
        while (eax_1 s< ebx_3)
        
        i = i_1
    
    i += 1
    esi_1 += 0x48
    i_1 = i
    var_18_1 = esi_1
while (i s< *(*arg1 + 8))
