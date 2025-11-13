// 函数: sub_5c72f0
// 地址: 0x5c72f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg4)
int32_t esi = 0
int32_t var_14 = 0
int32_t edi_1 = ((edx & 3) + eax_1) & 0xfffffffc
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = sx.q(arg3)
int32_t var_30 = edi_1
void* result_2 = nullptr
void* result = (eax_3 + (edx_2 & 3)) & 0xfffffffc
void* result_1 = result

if (edi_1 s> 0)
    int32_t ecx_1 = 8
    int32_t var_1c_1 = 8
    
    do
        int32_t edi_2 = arg2[1]
        int32_t edx_4 = *arg2
        int32_t esi_1 = edx_4 + ((edi_2 * result_2) << 2)
        void* eax_10 = (ecx_1 - 4) * edi_2 + edx_4
        int32_t ecx_4 = edi_2 * var_1c_1 + edx_4
        void* var_20_1 = eax_10
        int32_t edx_8 = (var_1c_1 + 4) * edi_2 + *arg2
        int32_t edi_4 = 0
        int32_t var_24_1 = 0
        
        if (result_1 s> 0)
            void* edi_7 = esi_1 - var_20_1
            void* ecx_5 = ecx_4 - var_20_1
            void* eax_15 = arg1 + (var_14 << 2) + 0x20
            void* edx_10 = edi_7
            void* var_40_1 = ecx_5
            var_14 += (((result_1 - 1) u>> 2) + 1) << 4
            int32_t i_5 = ((result_1 - 1) u>> 2) + 1
            var_24_1 = i_5 << 2
            void* esi_3 = eax_10
            int32_t i
            
            do
                eax_15 += 0x40
                esi_3 += 0x10
                float xmm5_1[0x4] = *(edx_10 + esi_3 - 0x10)
                float xmm0_1[0x4] = *(esi_3 - 0x10)
                float xmm3_2[0x4] = _mm_shuffle_ps(xmm5_1, xmm0_1, 0x44)
                float xmm5_2[0x4] = _mm_shuffle_ps(xmm5_1, xmm0_1, 0xee)
                float xmm4_1[0x4] = *(ecx_5 + esi_3 - 0x10)
                float xmm2_1[0x4] = *(esi_3 + edx_8 - var_20_1 - 0x10)
                edx_10 = edi_7
                float xmm1_2[0x4] = _mm_shuffle_ps(xmm4_1, xmm2_1, 0x44)
                float xmm0_3[0x4] = _mm_shuffle_ps(xmm3_2, xmm1_2, 0x88)
                float xmm4_2[0x4] = _mm_shuffle_ps(xmm4_1, xmm2_1, 0xee)
                float xmm3_3[0x4] = _mm_shuffle_ps(xmm3_2, xmm1_2, 0xdd)
                *(eax_15 - 0x60) = xmm0_3
                float xmm5_3[0x4] = _mm_shuffle_ps(xmm5_2, xmm4_2, 0xdd)
                float xmm0_5[0x4] = _mm_shuffle_ps(xmm5_2, xmm4_2, 0x88)
                *(eax_15 - 0x50) = xmm3_3
                *(eax_15 - 0x40) = xmm0_5
                *(eax_15 - 0x30) = xmm5_3
                i = i_5
                i_5 -= 1
            while (i != 1)
            eax_10 = var_20_1
            edi_4 = var_24_1
        
        if (edi_4 s< arg3)
            void* edi_13 = eax_10 + (edi_4 << 2)
            int32_t* var_28_2 = arg1 + 8 + (var_14 << 2)
            int32_t* var_18_2 = esi_1 - var_20_1
            int32_t i_3 = arg3 - var_24_1
            int32_t* esi_7 = var_18_2
            var_14 += i_3 << 2
            int32_t i_1
            
            do
                int32_t eax_23 = *(esi_7 + edi_13)
                edi_13 += 4
                int32_t* esi_8 = var_28_2
                var_28_2 = &var_28_2[4]
                i_1 = i_3
                i_3 -= 1
                esi_8[-2] = eax_23
                esi_8[-1] = *(edi_13 - 4)
                *esi_8 = *(edi_13 + ecx_4 - var_20_1 - 4)
                esi_8[1] = *(edx_8 - var_20_1 + edi_13 - 4)
                esi_7 = var_18_2
            while (i_1 != 1)
        
        result = result_2 + 4
        edi_1 = var_30
        ecx_1 = var_1c_1 + 0x10
        result_2 = result
        var_1c_1 = ecx_1
    while (result s< edi_1)
    
    esi = var_14

if (edi_1 s< arg4)
    int32_t edx_13 = arg3
    
    do
        int32_t edi_14 = 0
        result = *arg2 + ((arg2[1] * edi_1) << 2)
        
        if (edx_13 s>= 4)
            void* edx_14 = arg1 + 8 + (esi << 2)
            void* esi_9 = result + 8
            int32_t i_4 = ((arg3 - 4) u>> 2) + 1
            edi_14 = (((arg3 - 4) u>> 2) + 1) << 2
            var_14 += edi_14
            int32_t i_2
            
            do
                edx_14 += 0x10
                *(edx_14 - 0x18) = *(esi_9 - 8)
                esi_9 += 0x10
                *(edx_14 - 0x14) = *(esi_9 - 0x14)
                *(edx_14 - 0x10) = *(esi_9 - 0x10)
                *(edx_14 - 0xc) = *(esi_9 - 0xc)
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
            edx_13 = arg3
        
        esi = var_14
        
        if (edi_14 s< edx_13)
            do
                int32_t ecx_20 = *(result + (edi_14 << 2))
                edi_14 += 1
                *(arg1 + (esi << 2)) = ecx_20
                esi += 1
                edx_13 = arg3
            while (edi_14 s< edx_13)
            
            var_14 = esi
        
        edi_1 = var_30 + 1
        var_30 = edi_1
    while (edi_1 s< arg4)

return result
