// 函数: sub_6d6770
// 地址: 0x6d6770
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
float xmm0_1 = arg7 ^ (data_8937c0.o).d
int32_t eax_2 = arg5
int32_t edi = 0
int32_t i = 0
int32_t var_30 = 0

if (eax_2 s> 0 && eax_2 u>= 8)
    int32_t xmm2_1[0x4] = zx.o(0)
    int32_t xmm1_1[0x4] = zx.o(0)
    
    do
        xmm2_1 = _mm_add_epi32(xmm2_1, *(arg4 + (i << 2)))
        int32_t xmm0_3[0x4] = *(arg4 + (i << 2) + 0x10)
        i += 8
        xmm1_1 = _mm_add_epi32(xmm1_1, xmm0_3)
    while (i s< (eax_2 & 0xfffffff8))
    
    eax_2 = arg5
    int32_t xmm1_2[0x4] = _mm_add_epi32(xmm1_1, xmm2_1)
    int32_t xmm1_3[0x4] = _mm_add_epi32(xmm1_2, _mm_bsrli_si128(xmm1_2, 8))
    edi = _mm_add_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 4))
    var_30 = edi

int32_t edx_1 = 0
int32_t esi = 0

if (i s< eax_2)
    if (eax_2 - i s< 2)
        edi += *(arg4 + (i << 2))
    else
        do
            edx_1 += *(arg4 + (i << 2))
            esi += *(arg4 + (i << 2) + 4)
            i += 2
        while (i s< arg5 - 1)
        
        edi = var_30
        
        if (i s< arg5)
            edi += *(arg4 + (i << 2))
    
    edi += esi + edx_1

void* result = malloc((edi + 1) * 0x14)
void* result_1 = result
void* result_2 = result_1

if (result_1 != 0)
    int32_t eax_12 = 0
    int32_t esi_1 = 0
    int32_t edx_2 = 0
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    
    if (arg5 s> 0)
        do
            int32_t edi_3 = arg2 + (edx_2 << 3)
            int32_t var_48_1 = edi_3
            int32_t eax_13 = *(arg4 + (eax_12 << 2))
            int32_t i_1 = 0
            int32_t i_4 = eax_13 - 1
            int32_t eax_14
            
            if (eax_13 s<= 0)
                eax_14 = var_30_1
            else
                int32_t* esi_4 = result_2 + esi_1 * 0x14 + 0x10
                
                do
                    float xmm1_5 = *(edi_3 + (i_4 << 3) + 4)
                    float xmm0_8 = *(edi_3 + (i_1 << 3) + 4)
                    xmm1_5 - xmm0_8
                    eax_14:1.b = (xmm1_5 == xmm0_8 ? 1 : 0) << 6
                        | (is_unordered.d(xmm1_5, xmm0_8) ? 1 : 0) << 2 | (xmm1_5 < xmm0_8 ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        *esi_4 = 0
                        int32_t eax_15
                        eax_15.b = xmm1_5 > xmm0_8
                        int32_t i_3
                        
                        if (eax_15 == 0)
                            i_3 = i_1
                        else
                            i_3 = i_4
                            *esi_4 = 1
                            i_4 = i_1
                        
                        var_34_1 += 1
                        esi_4[-4] = arg6 f* *(edi_3 + (i_3 << 3)) + arg8
                        esi_4[-3] = xmm0_1 f* *(edi_3 + (i_3 << 3) + 4) + arg9
                        esi_4[-2] = arg6 f* *(edi_3 + (i_4 << 3)) + arg8
                        esi_4[-1] = xmm0_1 f* *(edi_3 + (i_4 << 3) + 4) + arg9
                        esi_4 = &esi_4[5]
                    
                    i_4 = i_1
                    eax_14 = var_30_1
                    i_1 += 1
                    edi_3 = var_48_1
                while (i_1 s< *(arg4 + (eax_14 << 2)))
                
                esi_1 = var_34_1
            
            edx_2 += eax_13
            eax_12 = eax_14 + 1
            var_30_1 = eax_12
        while (eax_12 s< arg5)
        
        result_1 = result_2
    
    void* ecx_3 = sub_6d6610(result_1, esi_1)
    int32_t eax_16 = var_34_1
    int32_t i_5 = 1
    
    if (eax_16 s> 1)
        void* edi_5 = result_1 + 0x14
        
        do
            int128_t xmm2_3 = *edi_5
            void* eax_17 = *(edi_5 + 0x10)
            ecx_3 = edi_5 - 0x14
            int32_t i_2 = i_5
            
            do
                int32_t eax_18
                eax_18.b = *(ecx_3 + 4) f> xmm2_3.q:4.d
                
                if (eax_18 == 0)
                    break
                
                int32_t eax_19 = *(ecx_3 + 0x10)
                i_2 -= 1
                *(ecx_3 + 0x14) = *ecx_3
                *(ecx_3 + 0x24) = eax_19
                ecx_3 -= 0x14
            while (i_2 s> 0)
            
            if (i_5 != i_2)
                ecx_3 = eax_17
                int32_t eax_20 = i_2 * 5
                *(result_2 + (eax_20 << 2)) = xmm2_3
                *(result_2 + (eax_20 << 2) + 0x10) = ecx_3
            
            eax_16 = var_34_1
            i_5 += 1
            edi_5 += 0x14
        while (i_5 s< eax_16)
        
        result_1 = result_2
    
    void* var_5c_1 = ecx_3
    int32_t var_60_1 = arg11
    sub_6d6190(eax_16, result_1, arg3, eax_16, ecx_3, arg10)
    result = free(result_1)

CookieCheckFunction(result)
return result
