// 函数: sub_6cadd0
// 地址: 0x6cadd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* edx = data_147d19c
int32_t i = 0
int32_t ebx
int32_t var_c = ebx

if (*(edx + 0xbbaa84) s> 0)
    void* esi_1 = nullptr
    
    do
        void* eax_1 = esi_1 + edx
        *(eax_1 + 0xb9b694) = 0
        *(eax_1 + 0xb9b68c) = 0
        *(eax_1 + 0xb9b690) = 0
        *(eax_1 + 0xb9b698) = 0
        
        if (*(edx + 0xbbaab0) == 0 || *(edx + 0xbbaab4) == i)
            ebx.b = 1
        else
            ebx.b = 0
        
        i += 1
        esi_1 += 0x1c
        *(&data_b9b69c + eax_1) = ebx.b
    while (i s< *(edx + 0xbbaa84))

int32_t ebx_1 = 0
*(edx + 0xbbaa88) = 0
void* i_1 = nullptr
void* i_4 = nullptr

do
    if (*(edx + 0xbbaa8c) == 0 || *(edx + 0xb9b680) != ebx_1)
        sub_6ca700(ebx_1)
        edx = data_147d19c
        int32_t j = 0
        
        if (*(edx + 0xbbaa84) s> 0)
            void* ecx_2 = edx + 0xb9b690
            void* esi_3 = i_1 + 0x3aa90 + edx
            
            do
                j += 1
                *(ecx_2 + 4) += *(esi_3 + 4)
                *(ecx_2 - 4) = *(esi_3 - 4) f+ *(ecx_2 - 4)
                *ecx_2 = *ecx_2 f+ *esi_3
                float xmm0_5 = *(esi_3 + 8)
                esi_3 += 0x10
                *(ecx_2 + 8) = xmm0_5 f+ *(ecx_2 + 8)
                ecx_2 += 0x1c
            while (j s< *(edx + 0xbbaa84))
            
            i_1 = i_4
        
        *(edx + 0xbbaa88) += 1
    
    i_1 += 0x4a490
    ebx_1 += 1
    i_4 = i_1
while (i_1 s< 0xb9b680)

if (*(edx + 0xbbaab0) != 0)
    for (int32_t i_2 = 0; i_2 s< 0x28; i_2 += 1)
        sub_6caab0(i_2)
    
    edx = data_147d19c

int32_t i_3 = 0
void* edi_1 = nullptr

if (*(edx + 0xbbaa84) s> 0)
    void* esi_4 = edx + 0xbb6c04
    char* eax_3 = edx + &data_b9b69c
    
    do
        if (*(eax_3 - 8) != 0 && *eax_3 != 0)
            *esi_4 = i_3
            edi_1 += 1
            esi_4 += 4
        
        i_3 += 1
        eax_3 = &eax_3[0x1c]
    while (i_3 s< *(edx + 0xbbaa84))

int32_t eax_6 = (edx + (edi_1 << 2) + 0xbb6c04 - (edx + 0xbb6c04)) s>> 2
void* result = sub_4d4e30(eax_6, edx + (edi_1 << 2) + 0xbb6c04, edx + 0xbb6c04, eax_6, sub_6cac40)
void* ecx_5 = data_147d19c
*(ecx_5 + 0xbbaaac) = edi_1

if (*(ecx_5 + 0xbbaa9c) s>= edi_1)
    result = edi_1 - 1
    *(ecx_5 + 0xbbaa9c) = result

return result
