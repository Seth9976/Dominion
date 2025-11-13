// 函数: sub_6d6190
// 地址: 0x6d6190
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
void** i_4 = nullptr
int32_t* edx = arg3
float* var_254 = arg2
int32_t* var_224 = edx
int32_t eax_2 = *edx
void** j_5 = nullptr
int32_t var_250 = 0
void** j_3 = nullptr
void** j_4 = nullptr
int32_t i_2 = 0
void var_220
float* result_1

if (eax_2 s<= 0x40)
    result_1 = &var_220
else
    result_1 = malloc((eax_2 << 3) + 4)
    edx = var_224

void* eax_5 = &result_1[*edx]
int32_t var_230_1 = arg6
void** j = nullptr
arg2[arg4 * 5 + 1] = _mm_cvtepi32_ps(zx.o(edx[1] + arg6)) + 1f

if (edx[1] s> 0)
    int32_t i
    
    do
        void** edi_1 = &j_4
        int32_t eax_9 = *edx
        float xmm1_2 = _mm_cvtepi32_ps(zx.o(var_230_1))
        float xmm1_3 = xmm1_2 + 1f
        float xmm0_4 = xmm1_2 + 0f
        memset(result_1, 0, eax_9 << 2)
        void** i_5
        void** j_6
        i_5, j_6 = memset(eax_5, 0, (*var_224 << 2) + 4)
        float xmm3_1 = xmm0_4
        
        if (j != 0)
            do
                if (xmm3_1 f< j[6])
                    edi_1 = *edi_1
                else
                    *edi_1 = *j
                    j[4] = 0
                    *j = j_5
                    j_5 = j
                
                j = *edi_1
            while (j != 0)
            
            j = j_4
            j_3 = j
        
        float* edi_2 = var_254
        float xmm1_4 = xmm1_3
        float xmm0_5 = edi_2[1]
        
        if (not(xmm1_4 < xmm0_5))
            do
                float temp0_1 = edi_2[3]
                xmm0_5 - temp0_1
                i_5:1.b = (xmm0_5 == temp0_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_5, temp0_1) ? 1 : 0) << 2 | (xmm0_5 < temp0_1 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    if (j_5 == 0)
                        int32_t ecx_1 = var_250
                        
                        if (ecx_1 != 0)
                            var_250 = ecx_1 - 1
                            j_6 = &i_4[(ecx_1 - 1) * 7 + 1]
                        else
                            i_5 = malloc(0xdac4)
                            
                            if (i_5 != 0)
                                *i_5 = i_4
                                ecx_1 = 0x7d0
                                i_4 = i_5
                                var_250 = ecx_1 - 1
                                j_6 = &i_4[(ecx_1 - 1) * 7 + 1]
                            else
                                j_6 = nullptr
                    else
                        j_6 = j_5
                        j_5 = *j_5
                    
                    float xmm2_3 = (edi_2[2] - *edi_2) / (edi_2[3] - edi_2[1])
                    
                    if (j_6 == 0)
                        xmm3_1 = xmm0_4
                    else
                        float xmm0_8 = (zx.o(0)).d
                        xmm2_3 f- 0
                        j_6[2] = xmm2_3
                        i_5:1.b = (xmm2_3 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm2_3, 0f) ? 1 : 0) << 2 | (xmm2_3 < 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            xmm0_8 = 1f / xmm2_3
                        
                        xmm3_1 = xmm0_4
                        j_6[3] = xmm0_8
                        float xmm1_6 = xmm3_1 - edi_2[1]
                        float xmm0_10 = _mm_cvtepi32_ps(zx.o(arg5))
                        j_6[1] = xmm1_6 * xmm2_3 + *edi_2 - xmm0_10
                        int32_t xmm0_11
                        
                        if (edi_2[4] == 0)
                            xmm0_11 = 0xbf800000
                        else
                            xmm0_11 = 0x3f800000
                        
                        j_6[4] = xmm0_11
                        j_6[5] = edi_2[1]
                        j_6[6] = edi_2[3]
                        *j_6 = nullptr
                        
                        if (i_2 == 0 && arg6 != 0 && not(xmm3_1 f<= j_6[6]))
                            j_6[6] = xmm3_1
                        
                        *j_6 = j
                        j = j_6
                        j_4 = j
                    
                    xmm1_4 = xmm1_3
                
                xmm0_5 = edi_2[6]
                edi_2 = &edi_2[5]
            while (xmm1_4 >= xmm0_5)
            
            var_254 = edi_2
            j_3 = j
        
        if (j != 0)
            void** j_7 = j_6
            sub_6d4a60(var_224, eax_5 + 4, result_1, *var_224, j, xmm3_1)
        
        int32_t* eax_19 = var_224
        int32_t j_1 = 0
        int32_t xmm1_10 = (zx.o(0)).d
        
        if (*eax_19 s> 0)
            float* result_2 = result_1
            void* esi_3 = eax_5 - result_2
            void* var_22c_2 = esi_3
            
            do
                xmm1_10 = xmm1_10 f+ *(result_2 + esi_3)
                int32_t eax_20 = eax_19[2]
                int32_t ecx_7 = int.d(_mm_and_ps(xmm1_10 f+ *result_2, 0x7fffffff) * 255f + 0.5f)
                
                if (ecx_7 s> 0xff)
                    ecx_7 = 0xff
                
                result_2 = &result_2[1]
                (eax_20 * i_2 + var_224[3])[j_1] = ecx_7.b
                eax_19 = var_224
                esi_3 = var_22c_2
                j_1 += 1
            while (j_1 s< *eax_19)
            
            j = j_3
        
        void** ecx_8 = &j_4
        
        if (j != 0)
            void** j_2 = j
            
            do
                j_2[1] = j_2[2] f+ j_2[1]
                ecx_8 = *ecx_8
                j_2 = *ecx_8
            while (j_2 != 0)
        
        edx = var_224
        i = i_2 + 1
        var_230_1 += 1
        i_2 = i
    while (i s< edx[1])

void** i_3 = i_4

if (i_3 != 0)
    void** i_1
    
    do
        i_1 = *i_3
        free(i_3)
        i_3 = i_1
    while (i_1 != 0)

float* result = result_1

if (result != &var_220)
    result = free(result)

CookieCheckFunction(result)
return result
