// 函数: sub_5c0030
// 地址: 0x5c0030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
void* esi = arg4[2]
void* edi = esi
int32_t eax_1 = *arg4
void* var_18 = esi

if ((eax_1.b & 3) == 0)
    void* eax_4 = neg.d(eax_1 u>> 2) & 3
    
    if (eax_4 s< esi)
        edi = eax_4

void* ecx_1 = esi - edi
int32_t eax_6
int32_t edx
edx:eax_6 = sx.q(ecx_1)
int32_t eax_10
int32_t edx_2
edx_2:eax_10 = sx.q(ecx_1)
int32_t* edx_5 = *arg3
void* eax_13 = edi + ((eax_10 + (edx_2 & 7)) s>> 3 << 3)
void* eax_14 = (eax_6 + (edx & 3)) & 0xfffffffc
void* ecx_2 = edi + eax_14

if (eax_14 == 0)
    float xmm0_8 = *edx_5
    void* edi_1 = 1
    
    if (esi s> 1)
        if (esi - 1 s>= 4)
            eax_14 = &edx_5[3]
            int32_t i_5 = ((esi - 5) u>> 2) + 1
            edi_1 = (i_5 << 2) + 1
            int32_t i
            
            do
                xmm0_8 = xmm0_8 f+ *(eax_14 - 8) f+ *(eax_14 - 4) f+ *eax_14 f+ *(eax_14 + 4)
                eax_14 += 0x10
                i = i_5
                i_5 -= 1
            while (i != 1)
        
        if (esi - 1 s< 4 || edi_1 s< esi)
            eax_14 = &edx_5[edi_1]
            void* i_6 = esi - edi_1
            void* i_1
            
            do
                xmm0_8 = xmm0_8 f+ *eax_14
                eax_14 += 4
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
    
    return eax_14

float xmm2[0x4] = *(edx_5 + (edi << 2))

if (eax_14 s> 4)
    float xmm1_1[0x4] = *(edx_5 + (edi << 2) + 0x10)
    
    if (edi + 8 s< eax_13)
        int128_t* esi_1 = &edx_5[edi + 8]
        int128_t* ecx_4 = &edx_5[edi + 0xc]
        int32_t i_4 = ((eax_13 - (edi + 8) - 1) u>> 3) + 1
        int32_t i_2
        
        do
            float xmm0_1[0x4] = *esi_1
            esi_1 = &esi_1[2]
            xmm2 = _mm_add_ps(xmm2, xmm0_1)
            float xmm0_2[0x4] = *ecx_4
            ecx_4 = &ecx_4[2]
            xmm1_1 = _mm_add_ps(xmm1_1, xmm0_2)
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        esi = var_18
    
    xmm2 = _mm_add_ps(xmm2, xmm1_1)
    
    if (ecx_2 s> eax_13)
        xmm2 = _mm_add_ps(xmm2, *(edx_5 + (eax_13 << 2)))

void* i_3 = nullptr
float xmm1_3[0x4] = _mm_add_ps(xmm2 u>> 0x40, xmm2)
int128_t xmm1_4 = xmm1_3 f+ _mm_shuffle_ps(xmm1_3, xmm1_3, 1)

if (edi s>= 4)
    esi = var_18
    
    do
        xmm1_4 = xmm1_4 f+ edx_5[i_3] f+ edx_5[i_3 + 1] f+ edx_5[i_3 + 2] f+ edx_5[i_3 + 3]
        i_3 += 4
    while (i_3 s< edi - 3)
    
    goto label_5c015d

if (edi s> 0)
    do
        xmm1_4 = xmm1_4 f+ edx_5[i_3]
        i_3 += 1
    label_5c015d:
    while (i_3 s< edi)

if (ecx_2 s< esi)
    i_3 = esi - ecx_2
    
    if (i_3 s>= 4)
        i_3 = esi - 3
        
        do
            xmm1_4 =
                xmm1_4 f+ edx_5[ecx_2] f+ edx_5[ecx_2 + 1] f+ edx_5[ecx_2 + 2] f+ edx_5[ecx_2 + 3]
            ecx_2 += 4
        while (ecx_2 s< i_3)
        
        if (ecx_2 s>= esi)
            return i_3
    
    do
        xmm1_4 = xmm1_4 f+ edx_5[ecx_2]
        ecx_2 += 1
    while (ecx_2 s< esi)

return i_3
