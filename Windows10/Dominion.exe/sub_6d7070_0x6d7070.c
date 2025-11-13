// 函数: sub_6d7070
// 地址: 0x6d7070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t j_2 = arg2
float xmm0_1 = arg4 * arg4
int32_t esi = 0
int32_t edi = 0
int32_t result = 0
int32_t var_14 = 0

if (arg2 s> 0)
    void* ecx = arg3 + 0xc
    int32_t i
    
    do
        bool cond:0_1 = *ecx != 1
        int32_t eax = edi + 1
        ecx += 0xe
        
        if (cond:0_1)
            eax = edi
        
        edi = eax
        i = arg2
        arg2 -= 1
    while (i != 1)

*arg6 = edi

if (edi != 0)
    int32_t eax_3 = malloc(edi << 2)
    int32_t* ebx_1 = arg5
    *ebx_1 = eax_3
    
    if (eax_3 != 0)
        int32_t i_1 = 0
        int32_t i_2 = 0
        
        do
            float xmm2 = (zx.o(0)).d
            float xmm3_1 = (zx.o(0)).d
            int32_t var_28_1 = 0
            int32_t result_1
            
            if (i_1 != 1)
                result_1 = result
            else
                result_1 = malloc(esi << 3)
                result = result_1
                
                if (result_1 == 0)
                    free(nullptr)
                    free(*ebx_1)
                    *ebx_1 = 0
                    *arg6 = 0
                    return 0
                
                xmm2 = 0f
                xmm3_1 = (zx.o(0)).d
            
            esi = 0
            int32_t edi_1 = 0xffffffff
            int32_t var_c_1 = 0
            int32_t var_8 = 0
            int32_t var_28_2 = 0xffffffff
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                void* ebx_3 = arg3 + 0xa
                int32_t j_3 = j_2
                int32_t j
                
                do
                    int32_t eax_15
                    uint128_t xmm2_1
                    uint128_t xmm3_2
                    
                    switch (zx.d(*(ebx_3 + 2)) - 1)
                        case 0
                            if (edi_1 s>= 0)
                                *(*arg5 + (edi_1 << 2)) = esi - var_14
                                result_1 = result
                            
                            edi_1 += 1
                            var_28_2 = edi_1
                            var_14 = esi
                            xmm2_1 = zx.o(sx.d(*(ebx_3 - 0xa)))
                            xmm3_2 = zx.o(sx.d(*(ebx_3 - 8)))
                            eax_15 = esi
                            goto label_6d7192
                        case 1
                            xmm2_1 = zx.o(sx.d(*(ebx_3 - 0xa)))
                            xmm3_2 = zx.o(sx.d(*(ebx_3 - 8)))
                            eax_15 = esi
                        label_6d7192:
                            esi = eax_15 + 1
                            var_c_1 = esi
                            var_8 = esi
                            xmm3_1 = _mm_cvtepi32_ps(xmm3_2)
                            xmm2 = _mm_cvtepi32_ps(xmm2_1)
                            
                            if (result_1 != 0)
                                *(result_1 + (eax_15 << 3)) = xmm2
                                *(result_1 + (eax_15 << 3) + 4) = xmm3_1
                        case 2
                            int32_t esi_1 = sx.d(*(ebx_3 - 0xa))
                            int32_t edi_2 = sx.d(*(ebx_3 - 8))
                            float xmm0_2 = float.s(sx.d(*(ebx_3 - 6)))
                            int32_t eax_19 = sx.d(*(ebx_3 - 4))
                            float xmm1_1 = float.s(eax_19)
                            float xmm6_1 = float.s(esi_1)
                            float xmm7_1 = float.s(edi_2)
                            float xmm4_5 = (xmm0_2 + xmm0_2 + xmm2 + xmm6_1) * 0.25f
                            float xmm5_5 = (xmm1_1 + xmm1_1 + xmm3_1 + xmm7_1) * 0.25f
                            float xmm1_5 = (xmm6_1 + xmm2) * 0.5f - xmm4_5
                            float xmm0_6 = (xmm7_1 + xmm3_1) * 0.5f - xmm5_5
                            
                            if (xmm0_6 * xmm0_6 + xmm1_5 * xmm1_5 <= xmm0_1)
                                if (result_1 != 0)
                                    *(result_1 + (var_c_1 << 3)) = xmm6_1
                                    *(result_1 + (var_c_1 << 3) + 4) = xmm7_1
                                
                                edi_1 = var_28_2
                                esi = var_c_1 + 1
                                var_8 = esi
                            else
                                sub_6d6a40(eax_19, &var_8, result_1, xmm2, xmm3_1, 
                                    (xmm0_2 + xmm2) * 0.5f, (xmm1_1 + xmm3_1) * 0.5f, xmm4_5, 
                                    xmm5_5, xmm0_1, 1)
                                float xmm1_9 = _mm_cvtepi32_ps(zx.o(edi_2))
                                float xmm0_17 = _mm_cvtepi32_ps(zx.o(esi_1))
                                sub_6d6a40(1, &var_8, result, xmm4_5, xmm5_5, 
                                    (xmm0_2 + xmm0_17) * 0.5f, (xmm1_1 + xmm1_9) * 0.5f, xmm0_17, 
                                    xmm1_9, xmm0_1, 1)
                                esi = var_8
                                result_1 = result
                                j_1 = j_3
                                edi_1 = var_28_2
                            
                            goto label_6d73f4
                        case 3
                            int32_t eax_21 = sx.d(*(ebx_3 - 0xa))
                            float xmm0_20 = _mm_cvtepi32_ps(zx.o(sx.d(*(ebx_3 - 8))))
                            int32_t eax_22 = sx.d(*ebx_3)
                            float xmm0_22 = _mm_cvtepi32_ps(zx.o(eax_21))
                            int32_t eax_23 = sx.d(*(ebx_3 - 2))
                            float xmm0_24 = _mm_cvtepi32_ps(zx.o(eax_22))
                            int32_t eax_24 = sx.d(*(ebx_3 - 4))
                            float xmm0_26 = _mm_cvtepi32_ps(zx.o(eax_23))
                            int32_t eax_25 = sx.d(*(ebx_3 - 6))
                            float xmm0_28 = _mm_cvtepi32_ps(zx.o(eax_24))
                            sub_6d6bf0(eax_25, &var_8, result_1, esi, edi_1, xmm2, xmm3_1, 
                                _mm_cvtepi32_ps(zx.o(eax_25)), xmm0_28, xmm0_26, xmm0_24, xmm0_22, 
                                xmm0_20, xmm0_1, 0)
                            esi = var_8
                            result_1 = result
                            j_1 = j_3
                        label_6d73f4:
                            var_c_1 = esi
                            int32_t eax_27 = sx.d(*(ebx_3 - 8))
                            xmm2 = _mm_cvtepi32_ps(zx.o(sx.d(*(ebx_3 - 0xa))))
                            xmm3_1 = _mm_cvtepi32_ps(zx.o(eax_27))
                    
                    ebx_3 += 0xe
                    j = j_1
                    j_1 -= 1
                    j_3 = j_1
                while (j != 1)
                ebx_1 = arg5
            
            *(*ebx_1 + (edi_1 << 2)) = esi - var_14
            i_1 = i_2 + 1
            i_2 = i_1
        while (i_1 s< 2)
        
        return result
    
    *arg6 = 0

return 0
