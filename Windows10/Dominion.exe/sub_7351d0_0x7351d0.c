// 函数: sub_7351d0
// 地址: 0x7351d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = 0
int32_t result_1 = 1

if (arg4 s<= 0)
    qsort(arg2, arg4, 0x10, sub_735160)
    qsort(arg2, arg4, 0x10, sub_7351a0)
    return 1

int32_t* ecx = arg2 + 0xc

do
    *ecx = eax
    ecx = &ecx[4]
    eax += 1
while (eax s< arg4)

qsort(arg2, arg4, 0x10, sub_735160)
uint32_t i_2 = arg4
int16_t* esi_1 = arg2 + 0xa
int32_t* edi_1 = arg3
uint32_t i_3 = i_2
uint32_t i

do
    uint32_t eax_1 = zx.d(esi_1[-3])
    int16_t var_24_1 = eax_1.w
    
    if (eax_1.w == 0)
        *(esi_1 - 2) = 0
    else
        uint32_t ecx_1 = zx.d(esi_1[-2])
        int16_t var_20_1 = ecx_1.w
        
        if (ecx_1.w == 0)
            i_2 = i_3
            *(esi_1 - 2) = 0
        else
            uint32_t var_40
            uint32_t* eax_2 = sub_734f90(eax_1, eax_1, edi_1, &var_40, ecx_1)
            int16_t** edx_1 = eax_2[2]
            int64_t xmm0_1 = *eax_2
            int16_t** eax_16
            
            if (edx_1 == 0)
                eax_16 = nullptr
            else
                int32_t ecx_3 = xmm0_1:4.d
                
                if (ecx_3 + ecx_1 s> edi_1[1])
                    eax_16 = nullptr
                else
                    int16_t* ebx_2 = edi_1[7]
                    
                    if (ebx_2 == 0)
                        eax_16 = nullptr
                    else
                        int32_t eax_3
                        eax_3.w = xmm0_1.w
                        *ebx_2 = eax_3.w
                        ebx_2[1] = var_20_1 + ecx_3.w
                        edi_1[7] = *(ebx_2 + 4)
                        int16_t* edx_2 = *edx_1
                        int16_t** eax_8
                        
                        if (zx.d(*edx_2) s>= xmm0_1.d)
                            eax_8 = edx_1
                        else
                            eax_8 = &edx_2[2]
                            edx_2 = *eax_8
                        
                        *eax_8 = ebx_2
                        int16_t* ecx_4 = *(edx_2 + 4)
                        
                        if (ecx_4 != 0)
                            edi_1 = arg3
                            
                            while (zx.d(*ecx_4) s<= xmm0_1.d + eax_1)
                                *(edx_2 + 4) = edi_1[7]
                                edi_1[7] = edx_2
                                edx_2 = ecx_4
                                ecx_4 = *(edx_2 + 4)
                                
                                if (ecx_4 == 0)
                                    break
                        
                        *(ebx_2 + 4) = edx_2
                        int32_t ebx_3 = xmm0_1.d
                        
                        if (zx.d(*edx_2) s< eax_1 + ebx_3)
                            *edx_2 = var_24_1 + ebx_3.w
                        
                        eax_16 = edx_1
            
            i_2 = i_3
            
            if (eax_16 == 0)
                *(esi_1 - 2) = 0xffffffff
            else
                eax_16.w = xmm0_1.w
                esi_1[-1] = eax_16.w
                *esi_1 = xmm0_1:4.w
    
    esi_1 = &esi_1[8]
    i = i_2
    i_2 -= 1
    i_3 = i_2
while (i != 1)
uint32_t _NumOfElements = arg4
qsort(arg2, _NumOfElements, 0x10, sub_7351a0)
void* edi_2 = arg2 + 0xa
int32_t result
uint32_t i_1

do
    int32_t ecx_7
    
    if (*(edi_2 - 2) != 0xffff || *edi_2 != 0xffff)
        ecx_7 = 1
    else
        ecx_7 = 0
    
    result = 0
    *(edi_2 + 2) = ecx_7
    
    if (ecx_7 != 0)
        result = result_1
    
    edi_2 += 0x10
    result_1 = result
    i_1 = _NumOfElements
    _NumOfElements -= 1
while (i_1 != 1)
return result
