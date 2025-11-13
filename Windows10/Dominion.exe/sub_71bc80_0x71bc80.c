// 函数: sub_71bc80
// 地址: 0x71bc80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int32_t xmm4 = (zx.o(0)).d
void* ecx = arg9
void* var_bc = ecx
int32_t eax_4 = *(arg3 + 0x48)
void* j_11 = arg8
void* i_11 = arg7
void* i_10 = arg2
void* var_c4

if ((eax_4.b & 1) == 0 && arg2 s> 0)
    void* var_c0_1 = nullptr
    int32_t* eax_5 = i_11 + (ecx << 2)
    var_c4 = i_11 + 8
    int32_t* var_b0_1 = eax_5
    void* i_9 = arg2
    void* i
    
    do
        float xmm0_1 = *eax_5
        xmm0_1 f- 0
        eax_5:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        float xmm1_1
        
        if (not(p_2))
            xmm1_1 = (zx.o(0)).d
        else
            xmm1_1 = 1f / xmm0_1
        
        int32_t j = 0
        
        if (j_11 s>= 4)
            void* ecx_1 = var_c4
            int32_t esi_1 = 2
            
            do
                if (j != var_bc)
                    *(ecx_1 - 8) = xmm1_1 f* *(ecx_1 - 8)
                
                if (esi_1 - 1 != var_bc)
                    *(ecx_1 - 4) = xmm1_1 f* *(ecx_1 - 4)
                
                if (esi_1 != var_bc)
                    *ecx_1 = xmm1_1 f* *ecx_1
                
                if (esi_1 + 1 != var_bc)
                    *(ecx_1 + 4) = xmm1_1 f* *(ecx_1 + 4)
                
                j += 4
                ecx_1 += 0x10
                esi_1 += 4
            while (j s< j_11 - 3)
            
            j_11 = arg8
            ecx = var_bc
        
        if (j s< j_11)
            float* eax_11 = arg7 + ((var_c0_1 + j) << 2)
            
            do
                if (j != ecx)
                    *eax_11 = xmm1_1 * *eax_11
                
                j += 1
                eax_11 = &eax_11[1]
            while (j s< j_11)
        
        var_c0_1 += j_11
        eax_5 = &var_b0_1[j_11]
        var_c4 += j_11 << 2
        i = i_9
        i_9 -= 1
        var_b0_1 = eax_5
    while (i != 1)
    i_11 = arg7

int32_t* edx_4 = arg6
int32_t esi_3 = 0
int32_t var_c0_2 = 0
int16_t var_98[0x42]

if (j_11 s> 0)
    int32_t edx_3 = 0
    
    do
        if (edx_3 != ecx || (eax_4.b & 2) != 0)
            var_98[esi_3] = edx_3.w
            esi_3 += 1
        
        edx_3 += 1
    while (edx_3 s< j_11)
    
    edx_4 = arg6
    var_c0_2 = esi_3

void var_c8
void invalid

switch (arg10)
    case 0
        if (i_10 s> 0)
            void* const esi_4 = nullptr
            void* i_14 = i_11
            void* i_12 = i_10
            void* const var_bc_1 = nullptr
            void* i_1
            
            do
                int32_t ecx_3 = 0
                
                if (j_11 s> 0)
                    void* esi_5
                    
                    if (j_11 u< 4)
                        esi_5 = arg7
                    label_71bffc:
                        void* esi_7 = esi_5 + ((var_bc_1 + ecx_3) << 2)
                        void* eax_29 = var_bc_1 + edx_4
                        void* var_9c_4 = eax_29
                        
                        do
                            int32_t xmm1_8 = *esi_7
                            int32_t xmm0_30
                            
                            if (0 f<= xmm1_8)
                                xmm0_30 = _mm_min_ss(0x3f800000, xmm1_8)
                            else
                                xmm0_30 = (zx.o(0)).d
                            
                            esi_7 += 4
                            *(eax_29 + ecx_3) = (int.d(fconvert.d(xmm0_30 f* 255f) + 0.5)).b
                            ecx_3 += 1
                        while (ecx_3 s< j_11)
                        
                        edx_4 = arg6
                    else
                        int16_t* eax_16 = esi_4 + edx_4
                        esi_5 = arg7
                        
                        if (eax_16 u<= esi_5 + ((esi_4 - 1 + j_11) << 2)
                                && j_11 - 1 + esi_4 + edx_4 u>= i_14)
                            goto label_71bffc
                        
                        void* i_18 = i_14
                        void* eax_22 = j_11 & 0xfffffffc
                        void* var_9c_3 = eax_22
                        
                        do
                            uint128_t xmm2_1 = zx.o(*i_18)
                            float xmm1_5[0x2] = _mm_mul_ps(
                                _mm_andnot_ps(_mm_cmpeq_ps(xmm2_1, zx.o(0), 1), 
                                    _mm_min_ps((data_8935b0).q, xmm2_1)), 
                                (data_8936b0).q)
                            int64_t xmm7_2 = (data_8935b0).q
                            uint32_t xmm0_18[0x4] = __andps_xmmxud_memxud(
                                _mm_cvttpd_epi32(__addpd_xmmpd_mempd(_mm_cvtps_pd(xmm1_5), 
                                    data_893620)), 
                                data_891990)
                            int16_t xmm0_19[0x8] = _mm_packus_epi16(xmm0_18, xmm0_18)
                            *(eax_16 + ecx_3) = _mm_packus_epi16(xmm0_19, xmm0_19)
                            uint128_t xmm1_6 = zx.o(*(i_18 + 8))
                            i_18 += 0x10
                            uint32_t xmm0_27[0x4] = __andps_xmmxud_memxud(
                                _mm_cvttpd_epi32(__addpd_xmmpd_mempd(
                                    _mm_cvtps_pd(_mm_mul_ps(
                                        _mm_andnot_ps(_mm_cmpeq_ps(xmm1_6, zx.o(0), 1), 
                                            _mm_min_ps(xmm7_2, xmm1_6)), 
                                        (data_8936b0).q)), 
                                    data_893620)), 
                                data_891990)
                            int16_t xmm0_28[0x8] = _mm_packus_epi16(xmm0_27, xmm0_27)
                            *(eax_16 + ecx_3 + 2) = _mm_packus_epi16(xmm0_28, xmm0_28)
                            ecx_3 += 4
                        while (ecx_3 s< eax_22)
                        
                        j_11 = arg8
                        edx_4 = arg6
                        esi_5 = arg7
                        
                        if (ecx_3 s< j_11)
                            goto label_71bffc
                    i_12 = i_10
                    esi_4 = var_bc_1
                
                i_14 += j_11 << 2
                esi_4 += j_11
                i_1 = i_12
                i_12 -= 1
                var_bc_1 = esi_4
                i_10 = i_12
            while (i_1 != 1)
            CookieCheckFunction(i_12)
            return i_12
    case 1
        if (i_10 s> 0)
            void* ecx_7 = nullptr
            void* var_a8_1 = nullptr
            void* eax_31
            void* i_2
            
            do
                eax_31 = nullptr
                void* var_ac_2 = nullptr
                
                if (esi_3 s> 0)
                    do
                        void* esi_9 = zx.d(var_98[eax_31]) + ecx_7
                        int32_t xmm0_34 =
                            _mm_min_ss(0x3f7fffff, _mm_max_ss(*(arg7 + (esi_9 << 2)), 0x39000000))
                        int32_t edx_7 = *(((xmm0_34 - 0x39000000) u>> 0x14 << 2) + u"\rs\rz\r")
                        *(arg6 + esi_9) = ((zx.d((xmm0_34 u>> 0xc).b) * zx.d(edx_7.w)
                            + (edx_7 u>> 7 & 0x1fffe00)) u>> 0x10).b
                        ecx_7 = var_a8_1
                        eax_31 = var_ac_2 + 1
                        var_ac_2 = eax_31
                    while (eax_31 s< var_c0_2)
                    
                    j_11 = arg8
                    esi_3 = var_c0_2
                
                if ((eax_4 & 2) == 0)
                    int32_t xmm1_11 = *(arg7 + ((var_bc + ecx_7) << 2))
                    int32_t xmm0_35
                    
                    if (0 f<= xmm1_11)
                        xmm0_35 = _mm_min_ss(0x3f800000, xmm1_11)
                    else
                        xmm0_35 = (zx.o(0)).d
                    
                    eax_31 = arg6 + var_bc
                    *(eax_31 + var_a8_1) = (int.d(fconvert.d(xmm0_35 f* 255f) + 0.5)).b
                    ecx_7 = var_a8_1
                
                ecx_7 += j_11
                i_2 = i_10
                i_10 -= 1
                var_a8_1 = ecx_7
            while (i_2 != 1)
            CookieCheckFunction(eax_31)
            return eax_31
    case 2
        if (i_10 s> 0)
            void* esi_10 = j_11 * 2
            void* var_bc_2 = nullptr
            void* i_15 = i_11
            int32_t* var_b4_2 = edx_4
            int32_t var_b0_2 = j_11 << 2
            void* var_c0_3 = esi_10
            void* i_3
            
            do
                int32_t j_2 = 0
                int32_t j_6 = 0
                
                if (j_11 s> 0)
                    if (j_11 u< 4)
                    label_71c36d:
                        void* eax_44 = var_bc_2 + j_2
                        void* esi_14 = edx_4 + (eax_44 << 1)
                        void* ecx_20 = arg7 + (eax_44 << 2)
                        void* j_7 = j_11 - j_6
                        void* j_1
                        
                        do
                            int32_t xmm1_18 = *ecx_20
                            int32_t xmm0_57
                            
                            if (0 f<= xmm1_18)
                                xmm0_57 = _mm_min_ss(0x3f800000, xmm1_18)
                            else
                                xmm0_57 = (zx.o(0)).d
                            
                            ecx_20 += 4
                            *esi_14 = (int.d(fconvert.d(xmm0_57 f* 65535f) + 0.5)).w
                            esi_14 += 2
                            j_1 = j_7
                            j_7 -= 1
                        while (j_1 != 1)
                    else
                        j_6 = 0
                        j_11 = arg8
                        
                        if (var_b4_2 u<= i_11 + var_b0_2 - 4 && esi_10 - 2 + edx_4 u>= i_15)
                            goto label_71c36d
                        
                        int32_t* edx_12 = var_b4_2
                        void* i_19 = i_15
                        
                        do
                            uint128_t xmm2_7 = zx.o(*i_19)
                            j_2 += 4
                            float xmm1_15[0x2] = _mm_mul_ps(
                                _mm_andnot_ps(_mm_cmpeq_ps(xmm2_7, zx.o(0), 1), 
                                    _mm_min_ps((data_8935b0).q, xmm2_7)), 
                                (data_893750).q)
                            int64_t xmm5_2 = (data_8935b0).q
                            *edx_12 = _mm_shuffle_epi32(
                                _mm_shufflelo_epi16(
                                    _mm_shufflehi_epi16(
                                        _mm_cvttpd_epi32(__addpd_xmmpd_mempd(_mm_cvtps_pd(xmm1_15), 
                                            data_893620)), 
                                        0xd8), 
                                    0xd8), 
                                0xd8)
                            uint128_t xmm1_16 = zx.o(*(i_19 + 8))
                            i_19 += 0x10
                            edx_12[1] = _mm_shuffle_epi32(
                                _mm_shufflelo_epi16(
                                    _mm_shufflehi_epi16(
                                        _mm_cvttpd_epi32(__addpd_xmmpd_mempd(
                                            _mm_cvtps_pd(_mm_mul_ps(
                                                _mm_andnot_ps(_mm_cmpeq_ps(xmm1_16, zx.o(0), 1), 
                                                    _mm_min_ps(xmm5_2, xmm1_16)), 
                                                (data_893750).q)), 
                                            data_893620)), 
                                        0xd8), 
                                    0xd8), 
                                0xd8)
                            edx_12 = &edx_12[2]
                        while (j_2 s< (j_11 & 0xfffffffc))
                        
                        j_11 = arg8
                        edx_4 = arg6
                        j_6 = j_2
                        
                        if (j_2 s< j_11)
                            goto label_71c36d
                    
                    esi_10 = var_c0_3
                    i_11 = arg7
                
                var_bc_2 += j_11
                var_b4_2 += j_11 * 2
                esi_10 += j_11 << 1
                int32_t ecx_22 = j_11 << 2
                var_b0_2 += ecx_22
                i_15 += ecx_22
                i_3 = i_10
                i_10 -= 1
                var_c0_3 = esi_10
            while (i_3 != 1)
            CookieCheckFunction(i_11)
            return i_11
    case 3
        i_11 = i_10
        
        if (i_11 s> 0)
            double xmm1_19 = 0.5
            int32_t ecx_27 = *(arg3 + 0x48) & 2
            void* ecx_28 = nullptr
            void* var_b0_3 = nullptr
            void* i_4
            
            do
                if (esi_3 s> 0)
                    int32_t edi_4 = 0
                    
                    do
                        void* eax_49 = zx.d(var_98[edi_4]) + ecx_28
                        int32_t xmm1_20 = *(arg7 + (eax_49 << 2))
                        int32_t xmm0_61
                        
                        if (0 f<= xmm1_20)
                            xmm0_61 = _mm_min_ss(0x3f800000, xmm1_20)
                        else
                            xmm0_61 = (zx.o(0)).d
                        
                        float xmm0_62
                        
                        if (0.00313080009f f< xmm0_61)
                            _libm_sse2_pow_precise(arg5, arg4, var_c8, var_c4.w, var_c0_2)
                            edx_4 = arg6
                            xmm0_62 = fconvert.s(fconvert.d(xmm0_61)) * 1.05499995f - 0.0549999997f
                        else
                            xmm0_62 = xmm0_61 f* 12.9200001f
                        
                        xmm1_19 = 0.5
                        edi_4 += 1
                        *(edx_4 + (eax_49 << 1)) = (int.d(fconvert.d(xmm0_62 * 65535f) + xmm1_19)).w
                        ecx_28 = var_b0_3
                    while (edi_4 s< esi_3)
                    
                    j_11 = arg8
                    i_11 = i_10
                
                if (ecx_27 == 0)
                    void* eax_52 = var_bc + ecx_28
                    int32_t xmm5_3 = *(arg7 + (eax_52 << 2))
                    float xmm0_69
                    
                    if (0 f<= xmm5_3)
                        xmm0_69 = _mm_min_ss(0x3f800000, xmm5_3)
                    else
                        xmm0_69 = (zx.o(0)).d
                    
                    *(edx_4 + (eax_52 << 1)) = (int.d(fconvert.d(xmm0_69 * 65535f) + xmm1_19)).w
                    esi_3 = var_c0_2
                    i_11 = i_10
                
                ecx_28 += j_11
                i_4 = i_11
                i_11 -= 1
                var_b0_3 = ecx_28
                i_10 = i_11
            while (i_4 != 1)
            CookieCheckFunction(i_11)
            return i_11
    case 4
        if (i_10 s> 0)
            int32_t* ecx_33 = edx_4
            int32_t* var_b0_4 = edx_4
            void* i_5
            
            do
                if (j_11 s> 0)
                    int32_t* eax_55 = i_11 - edx_4
                    void* j_8 = j_11
                    int32_t* esi_16 = ecx_33
                    int32_t* var_9c_8 = eax_55
                    void* j_3
                    
                    do
                        int32_t xmm0_73 = *(eax_55 + esi_16)
                        
                        if (not(0 f> xmm0_73))
                            xmm4 = _mm_min_ss(0x3f800000, xmm0_73)
                        
                        int32_t eax_56 = __dtol3(invalid, fconvert.d(xmm4) * 4294967295.0 + 0.5)
                        xmm4 = (zx.o(0)).d
                        *esi_16 = eax_56
                        esi_16 = &esi_16[1]
                        j_3 = j_8
                        j_8 -= 1
                    while (j_3 != 1)
                    j_11 = arg8
                    edx_4 = arg6
                    ecx_33 = var_b0_4
                
                xmm4 = (zx.o(0)).d
                ecx_33 = &ecx_33[j_11]
                i_5 = i_10
                i_10 -= 1
                i_11 = arg7
                var_b0_4 = ecx_33
            while (i_5 != 1)
            CookieCheckFunction(i_11)
            return i_11
    case 5
        i_11 = i_10
        
        if (i_11 s> 0)
            int32_t ecx_38 = *(arg3 + 0x48) & 2
            void* ecx_39 = nullptr
            void* var_b0_5 = nullptr
            void* i_6
            
            do
                if (esi_3 s> 0)
                    int32_t edi_6 = 0
                    
                    do
                        void* eax_59 = zx.d(var_98[edi_6]) + ecx_39
                        int32_t xmm1_22 = *(arg7 + (eax_59 << 2))
                        int32_t xmm0_77
                        
                        if (0 f<= xmm1_22)
                            xmm0_77 = _mm_min_ss(0x3f800000, xmm1_22)
                        else
                            xmm0_77 = (zx.o(0)).d
                        
                        float xmm0_78
                        
                        if (0.00313080009f f< xmm0_77)
                            _libm_sse2_pow_precise(arg5, arg4, var_c8, var_c4.w, var_c0_2)
                            xmm0_78 = fconvert.s(fconvert.d(xmm0_77)) * 1.05499995f - 0.0549999997f
                        else
                            xmm0_78 = xmm0_77 f* 12.9200001f
                        
                        edi_6 += 1
                        edx_4 = arg6
                        edx_4[eax_59] =
                            __dtol3(invalid, fconvert.d(xmm0_78) * 4294967295.0 + 0.5, arg5, arg4)
                        ecx_39 = var_b0_5
                    while (edi_6 s< esi_3)
                    
                    j_11 = arg8
                    i_11 = i_10
                
                if (ecx_38 == 0)
                    int32_t* esi_17 = (var_bc + ecx_39) << 2
                    int32_t xmm1_24 = *(esi_17 + arg7)
                    int32_t xmm0_85
                    
                    if (0 f<= xmm1_24)
                        xmm0_85 = _mm_min_ss(0x3f800000, xmm1_24)
                    else
                        xmm0_85 = (zx.o(0)).d
                    
                    *(edx_4 + esi_17) = int.d(fconvert.d(xmm0_85) * 4294967295.0 + 0.5)
                    esi_3 = var_c0_2
                    i_11 = i_10
                
                ecx_39 += j_11
                i_6 = i_11
                i_11 -= 1
                var_b0_5 = ecx_39
                i_10 = i_11
            while (i_6 != 1)
            CookieCheckFunction(i_11)
            return i_11
    case 6
        if (i_10 s> 0)
            void* var_b4_3 = nullptr
            int32_t var_b0_6 = j_11 << 2
            void* i_16 = i_11
            void* i_17 = i_16
            void* ecx_46 = edx_4 - i_11
            void* i_7
            
            do
                int32_t ecx_48 = 0
                int32_t var_a8_2 = 0
                
                if (j_11 s> 0)
                    if (j_11 u< 4)
                    label_71c8c4:
                        
                        if (j_11 s< 4)
                            goto label_71c957
                        
                        void* edx_15 = arg7 + 0xc + (var_b4_3 << 2)
                        void* ecx_47 = &arg6[var_b4_3 + 1]
                        int32_t j_9 = ((j_11 - 4) u>> 2) + 1
                        var_a8_2 = j_9 << 2
                        int32_t j_4
                        
                        do
                            ecx_47 += 0x10
                            *(ecx_47 - 0x14) = *(edx_15 - 0xc)
                            edx_15 += 0x10
                            *(ecx_47 - 0x10) = *(arg7 - arg6 + ecx_47 - 0x10)
                            *(ecx_47 - 0xc) = *(edx_15 - 0x14)
                            i_11 = *(edx_15 - 0x10)
                            *(ecx_47 - 8) = i_11
                            j_4 = j_9
                            j_9 -= 1
                        while (j_4 != 1)
                        j_11 = arg8
                        ecx_48 = var_a8_2
                        
                        if (ecx_48 s< j_11)
                            edx_4 = arg6
                        label_71c957:
                            void* ecx_49 = &edx_4[var_b4_3 + ecx_48]
                            void* eax_87 = arg7 - edx_4
                            void* j_10 = j_11 - var_a8_2
                            void* var_9c_13 = eax_87
                            void* j_5
                            
                            do
                                i_11 = *(eax_87 + ecx_49)
                                ecx_49 += 4
                                *(ecx_49 - 4) = i_11
                                j_5 = j_10
                                j_10 -= 1
                            while (j_5 != 1)
                        
                        i_16 = i_17
                    else
                        var_a8_2 = 0
                        j_11 = arg8
                        
                        if (ecx_46 + i_16 u<= arg7 + var_b0_6 - 4 && var_b0_6 - 4 + edx_4 u>= i_16)
                            goto label_71c8c4
                        
                        i_11 = memcpy(ecx_46 + i_16, i_16, j_11 << 2)
                    
                    edx_4 = arg6
                
                var_b4_3 += j_11
                int32_t ecx_50 = j_11 << 2
                var_b0_6 += ecx_50
                i_16 += ecx_50
                i_7 = i_10
                i_10 -= 1
                i_17 = i_16
            while (i_7 != 1)
            CookieCheckFunction(i_11)
            return i_11
    case 7
        if (i_10 s> 0)
            int32_t eax_90 = *(arg3 + 0x48) & 2
            void* ecx_53 = nullptr
            void* var_b4_4 = nullptr
            void* i_8
            
            do
                i_11 = nullptr
                void* i_13 = nullptr
                
                if (esi_3 s> 0)
                    void* ecx_54 = arg7
                    
                    do
                        void* esi_25 = zx.d(var_98[i_11]) + var_b4_4
                        float xmm0_89[0x2] = *(ecx_54 + (esi_25 << 2))
                        float xmm0_90
                        
                        if (0.00313080009f f< xmm0_89)
                            double xmm0_91 = _mm_cvtps_pd(xmm0_89)
                            _libm_sse2_pow_precise(arg5, arg4, var_c8, var_c4.w, var_c0_2)
                            i_11 = i_13
                            edx_4 = arg6
                            ecx_54 = arg7
                            xmm0_90 = fconvert.s(xmm0_91) * 1.05499995f - 0.0549999997f
                        else
                            xmm0_90 = xmm0_89 f* 12.9200001f
                        
                        i_11 += 1
                        edx_4[esi_25] = xmm0_90
                        esi_3 = var_c0_2
                        i_13 = i_11
                    while (i_11 s< esi_3)
                    
                    ecx_53 = var_b4_4
                
                if (eax_90 == 0)
                    int32_t ecx_55 = ecx_53 + var_bc
                    i_11 = *(arg7 + (ecx_55 << 2))
                    edx_4[ecx_55] = i_11
                    ecx_53 = var_b4_4
                
                ecx_53 += j_11
                i_8 = i_10
                i_10 -= 1
                var_b4_4 = ecx_53
            while (i_8 != 1)

CookieCheckFunction(i_11)
return i_11
