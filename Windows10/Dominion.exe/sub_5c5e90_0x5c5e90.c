// 函数: sub_5c5e90
// 地址: 0x5c5e90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t edi = *(arg4 + 0x24)
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(edi)
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q(edi)
int32_t i_3 = ((edx & 3) + eax_2) & 0xfffffffc
int128_t* edx_4 = *(arg3 + 0x10)
int128_t* result = (eax_4 + (edx_2 & 7)) & 0xfffffff8
int128_t xmm2_5

if (i_3 == 0)
    float* esi_2 = *(arg3 + 4)
    void* ecx_6 = 1
    xmm2_5 = *edx_4 * *esi_2
    
    if (edi s> 1)
        if (edi - 1 s>= 4)
            result = &esi_2[2]
            void* ecx_7 = &edx_4[1]
            int32_t i_5 = ((edi - 5) u>> 2) + 1
            void* edi_6 = (i_5 << 2) + 1
            int32_t i
            
            do
                float xmm2_12 = xmm2_5 f+ *(result - 4) f* *(ecx_7 - 0xc)
                    + *(edx_4 - esi_2 + result) f* *result + *(result + 4) f* *(ecx_7 - 4)
                float xmm0_22 = *(result + 8) f* *ecx_7
                result = &result[1]
                ecx_7 += 0x10
                xmm2_5 = xmm2_12 + xmm0_22
                i = i_5
                i_5 -= 1
            while (i != 1)
            ecx_6 = edi_6
        
        if (edi - 1 s< 4 || ecx_6 s< edi)
            result = &esi_2[ecx_6]
            void* i_6 = edi - ecx_6
            void* i_1
            
            do
                float xmm0_24 = *(edx_4 - esi_2 + result) f* *result
                result += 4
                xmm2_5 = xmm2_5 f+ xmm0_24
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
else
    int128_t* ecx = *(arg3 + 4)
    int128_t* var_14_1 = ecx
    float xmm3_2[0x4] = _mm_mul_ps(*edx_4, *ecx)
    
    if (i_3 s> 4)
        float xmm2_2[0x4] = _mm_mul_ps(edx_4[1], ecx[1])
        
        if (result s> 8)
            void* eax_6 = &ecx[3]
            int128_t* edi_2 = edx_4 - ecx
            void* edi_3 = &edx_4[2]
            int32_t i_4 = ((result - 9) u>> 3) + 1
            ecx = var_14_1
            int32_t i_2
            
            do
                float xmm0_3[0x4] = *edi_3
                edi_3 += 0x20
                float xmm1_2[0x4] = _mm_mul_ps(*(eax_6 - 0x10), xmm0_3)
                float xmm0_4[0x4] = *eax_6
                xmm3_2 = _mm_add_ps(xmm3_2, xmm1_2)
                float xmm1_3[0x4] = *(edi_2 + eax_6)
                eax_6 += 0x20
                i_2 = i_4
                i_4 -= 1
                xmm2_2 = _mm_add_ps(xmm2_2, _mm_mul_ps(xmm1_3, xmm0_4))
            while (i_2 != 1)
        
        xmm3_2 = _mm_add_ps(xmm3_2, xmm2_2)
        
        if (i_3 s> result)
            int32_t ecx_5 = result << 2
            result = *(arg3 + 0x10)
            ecx = var_14_1
            xmm3_2 = _mm_add_ps(xmm3_2, _mm_mul_ps(*(var_14_1 + ecx_5), *(result + ecx_5)))
    
    float xmm2_4[0x4] = _mm_add_ps(xmm3_2 u>> 0x40, xmm3_2)
    xmm2_5 = xmm2_4 f+ _mm_shuffle_ps(xmm2_4, xmm2_4, 1)
    
    if (i_3 s< edi)
        result = edi - i_3
        
        if (result s< 4)
        label_5c6022:
            
            do
                float xmm0_15 = *(ecx + (i_3 << 2)) f* *(edx_4 + (i_3 << 2))
                i_3 += 1
                xmm2_5 = xmm2_5 f+ xmm0_15
            while (i_3 s< edi)
            
            return result
        
        result = i_3 << 2
        
        do
            float xmm0_11 = *(result + edx_4 + 8) f* *(ecx + (i_3 << 2) + 8)
            result = &result[1]
            float xmm2_7 = xmm2_5 f+ *(ecx + (i_3 << 2)) f* *(edx_4 + (i_3 << 2))
                + *(ecx + (i_3 << 2) + 4) f* *(edx_4 + (i_3 << 2) + 4)
            float xmm0_13 = *(ecx + (i_3 << 2) + 0xc) f* *(edx_4 + (i_3 << 2) + 0xc)
            i_3 += 4
            xmm2_5 = xmm2_7 + xmm0_11 + xmm0_13
        while (i_3 s< edi - 3)
        
        if (i_3 s< edi)
            goto label_5c6022
return result
