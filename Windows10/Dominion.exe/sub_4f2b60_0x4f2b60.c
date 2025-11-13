// 函数: sub_4f2b60
// 地址: 0x4f2b60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
void* ecx
int16_t* edx
ecx, edx = __chkstk(0xa2c8)
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
void* var_a2b0 = ecx
int32_t edx_1 = *(ecx + 0xd38)
int32_t i_4 = 0
uint32_t result_1 = arg2
int32_t i_5 = 0
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void var_57a8
char* var_24
int32_t var_18

if (edx_1 s> 0)
    __builtin_memset(&var_24, 0, edx_1 << 2)
    int32_t var_14_1 = edx_1 * 0xc80
    var_18 = 0
    void* var_1c_1 = &var_57a8
    memset()

int16_t eax_4 = *edx
int32_t edi = 0
int32_t i_2
char const* const ecx_6

if (0 s>= eax_4)
label_4f2c8b:
    void* ecx_3 = var_a2b0
    int32_t i = 0
    float var_a2c8
    int32_t var_a2b4
    float var_a2ac
    
    if (*(ecx_3 + 0xd38) s> 0)
        int32_t esi_2 = 0
        var_a2ac = 0f
        var_a2b4 = 0
        
        do
            int32_t j = 0
            
            if (i_4 s> 0)
                if (i_4 u>= 0x10)
                    uint32_t xmm0_2[0x4] = _mm_shuffle_epi32(zx.o((&var_24)[i]), 0)
                    int32_t eax_10 = i_4 & 0x8000000f
                    
                    if (eax_10 s< 0)
                        eax_10 = ((eax_10 - 1) | 0xfffffff0) + 1
                    
                    int32_t eax_13 = esi_2
                    float xmm1_1[0x4] = _mm_cvtepi32_ps(xmm0_2)
                    
                    do
                        int32_t xmm0_3[0x4] = *(&var_57a8 + eax_13)
                        j += 0x10
                        eax_13 += 0x40
                        void var_a2e8
                        *(&var_a2e8 + eax_13) = _mm_div_ps(_mm_cvtepi32_ps(xmm0_3), xmm1_1)
                        void var_a2d8
                        void var_57d8
                        *(&var_a2d8 + eax_13) =
                            _mm_div_ps(_mm_cvtepi32_ps(*(&var_57d8 + eax_13)), xmm1_1)
                        void var_57c8
                        *(&var_a2c8 + eax_13) =
                            _mm_div_ps(_mm_cvtepi32_ps(*(&var_57c8 + eax_13)), xmm1_1)
                        void var_57b8
                        *(&result_1 + eax_13) =
                            _mm_div_ps(_mm_cvtepi32_ps(*(&var_57b8 + eax_13)), xmm1_1)
                    while (j s< i_4 - eax_10)
                
                if (i_4 u< 0x10 || j s< i_4)
                    int32_t esi_3 = (&var_24)[i]
                    
                    if (i_4 - j s< 4)
                    label_4f2e0e:
                        int32_t eax_21 = (var_a2ac i+ j) << 2
                        int32_t j_4 = i_4 - j
                        float xmm1_5 = _mm_cvtepi32_ps(zx.o(esi_3))
                        int32_t j_1
                        
                        do
                            uint128_t xmm0_27 = zx.o(*(&var_57a8 + eax_21))
                            eax_21 += 4
                            *(&var_a2ac + eax_21) = _mm_cvtepi32_ps(xmm0_27) / xmm1_5
                            j_1 = j_4
                            j_4 -= 1
                        while (j_1 != 1)
                    else
                        int32_t eax_18 = (var_a2ac i+ j) << 2
                        int32_t j_3 = ((i_4 - j - 4) u>> 2) + 1
                        float xmm1_3 = _mm_cvtepi32_ps(zx.o(esi_3))
                        j += j_3 << 2
                        int32_t j_2
                        
                        do
                            uint128_t xmm0_15 = zx.o(*(&var_57a8 + eax_18))
                            eax_18 += 0x10
                            *(&result_1 + eax_18) = _mm_cvtepi32_ps(xmm0_15) / xmm1_3
                            void var_57b4
                            *(&var_a2b4 + eax_18) =
                                _mm_cvtepi32_ps(zx.o(*(&var_57b4 + eax_18))) / xmm1_3
                            void var_57b0
                            *(&var_a2b0 + eax_18) =
                                _mm_cvtepi32_ps(zx.o(*(&var_57b0 + eax_18))) / xmm1_3
                            void var_57ac
                            *(&var_a2ac + eax_18) =
                                _mm_cvtepi32_ps(zx.o(*(&var_57ac + eax_18))) / xmm1_3
                            j_2 = j_3
                            j_3 -= 1
                        while (j_2 != 1)
                        
                        if (j s< i_4)
                            goto label_4f2e0e
                    
                    esi_2 = var_a2b4
            
            ecx_3 = var_a2b0
            i += 1
            var_a2ac += 0x320
            esi_2 += 0xc80
            var_a2b4 = esi_2
        while (i s< *(ecx_3 + 0xd38))
    
    int32_t esi_4 = 0
    var_a2b4 = 0
    
    if (*(ecx_3 + 0xd38) s<= 0)
    label_4f3048:
        uint32_t result = result_1
        *(result + 0x78) =
            _mm_max_ss(0, 1f - _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x19dc) - 1)) * 0.100000001f) f*
            *(result + 0x78)
        CookieCheckFunction(result)
        return result
    
    uint32_t result_3 = result_1
    void var_a2a8
    void* edi_1 = &var_a2a8
    void* eax_22 = var_a2b0
    void* var_a2bc_1 = &var_a2a8
    
    while (true)
        if ((&var_24)[esi_4] != 0)
            int32_t eax_23 = *(result_3 + 0xb4)
            
            if ((&var_24)[eax_23] != 0 && esi_4 != eax_23)
                var_a2ac = 0f
                
                if (i_4 s> 0)
                    float* eax_26 = &(&__saved_ebp)[eax_23 * 0x320 - 0x28a9] - edi_1
                    void* esi_5 = edi_1
                    int32_t i_3 = i_4
                    float* var_a2c0_1 = eax_26
                    float* ebx = eax_26
                    int32_t i_1
                    
                    do
                        float xmm2_1 = *(ebx + esi_5)
                        xmm2_1 f- 0
                        eax_26:1.b = (xmm2_1 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2 | (xmm2_1 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        bool p_4
                        
                        if (not(p_2))
                            float xmm0_30 = *esi_5
                            xmm0_30 f- 0
                            eax_26:1.b = (xmm0_30 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_30, 0f) ? 1 : 0) << 2
                                | (xmm0_30 < 0f ? 1 : 0)
                            p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_2 || p_4)
                            float xmm0_31 = *esi_5
                            var_a2c8 = xmm0_31
                            float xmm1_8 = (xmm2_1 + xmm0_31) * 0.5f
                            
                            if (not(xmm2_1 <= 0f))
                                float xmm0_34
                                eax_26, result_3, xmm0_34 = sub_4ea070(ebp, xmm2_1 / xmm1_8)
                                xmm0_31 = var_a2c8
                                var_a2ac = xmm0_34 f* *(ebx + esi_5) + var_a2ac
                            
                            if (not(xmm0_31 f<= 0))
                                float xmm0_38
                                eax_26, result_3, xmm0_38 = sub_4ea070(ebp, xmm0_31 / xmm1_8)
                                var_a2ac = xmm0_38 f* *esi_5 + var_a2ac
                        
                        esi_5 += 4
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    i_4 = i_5
                    esi_4 = var_a2b4
                    edi_1 = var_a2bc_1
                
                uint32_t result_4 = result_3
                int16_t eax_27 = _fdclass(fconvert.s(fconvert.t(var_a2ac)))
                float xmm0_41 = var_a2ac
                
                if (eax_27 != 0xffff)
                    xmm0_41 f- 0
                    eax_27:1.b = (xmm0_41 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_41, 0f) ? 1 : 0) << 2 | (xmm0_41 < 0f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        i_2 = sub_4f7f30("Abnormal divergence:\n")
                        int32_t esi_7 = 0
                        
                        if (i_4 s> 0)
                            do
                                var_18.q = _mm_cvtps_pd(*(edi_1 + (esi_7 << 2)))
                                int64_t var_20_1 =
                                    _mm_cvtps_pd((&__saved_ebp)[eax_23 * 0x320 - 0x28a9 + esi_7])
                                var_24 = "%f\t%f\n"
                                i_2 = sub_4f7f30(var_24)
                                esi_7 += 1
                            while (esi_7 s< i_4)
                        
                        char const* const var_14_5 = "CalcDivergence"
                        int32_t var_18_2 = 0x12cc
                        ecx_6 = "Halt"
                        break
                
                uint32_t result_2 = result_1
                result_3 = result_2
                *(result_2 + 0x78) = xmm0_41 f+ *(result_2 + 0x78)
            
            eax_22 = var_a2b0
        
        esi_4 += 1
        edi_1 += 0xc80
        var_a2b4 = esi_4
        var_a2bc_1 = edi_1
        
        if (esi_4 s>= *(eax_22 + 0xd38))
            ecx_3 = var_a2b0
            goto label_4f3048
else
    void* edx_3 = &edx[0xe]
    
    while (true)
        i_2 = *edx_3
        
        if (i_2 != 0 && i_2 != 0x100 && i_2 != 0x102 && i_2 != 0x103 && i_2 != 0x601)
            int32_t i_6 = i_4 - 1
            int32_t var_ca8[0x321]
            
            if (i_6 s< 0)
            label_4f2c29:
                i_6 = i_4
                var_ca8[i_4] = i_2
                i_4 += 1
                i_5 = i_4
                
                if (i_4 s>= 0x320)
                    char const* const var_14_3 = "EvaluateDivergence"
                    int32_t var_18_1 = 0x12fb
                    ecx_6 = "numExist < MAX_CARDS"
                    break
            else
                while (var_ca8[i_6] != i_2)
                    int32_t i_7 = i_6
                    i_6 -= 1
                    
                    if (i_7 - 1 s< 0)
                        goto label_4f2c29
                
                if (i_6 s< 0)
                    goto label_4f2c29
            int32_t esi_1 = *(var_a2b0 + 0xd38)
            int32_t eax_6 = 0
            
            if (esi_1 s> 0)
                void* ecx_2 = &(&__saved_ebp)[i_6 - 0x15e9]
                
                do
                    if (*(eax_6 + edx_3 + 0x10) != 0)
                        *ecx_2 += 1
                        (&var_24)[eax_6] = &(&var_24)[eax_6][1]
                    
                    eax_6 += 1
                    ecx_2 += 0xc80
                while (eax_6 s< esi_1)
        
        edi += 1
        edx_3 += 0x68
        
        if (edi s>= sx.d(eax_4))
            goto label_4f2c8b

char const* const var_1c_2 = "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp"
sub_63b870(i_2, &data_801800, ecx_6)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
