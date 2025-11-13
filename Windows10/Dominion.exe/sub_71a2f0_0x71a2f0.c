// 函数: sub_71a2f0
// 地址: 0x71a2f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg1[0x11]
void* i_51 = arg1[0x10]
int32_t edi = arg1[0x18]
int32_t eax_1 = arg1[0x13]
int32_t eax_2 = arg1[1]
int32_t eax_3 = arg1[0x24]
int32_t eax_5 = arg1[0x1e] + ((eax_3 * i_51) << 2)
int32_t eax_6 = arg1[0x16]
int32_t edx_1 = arg1[2]
int32_t eax_7

if (arg2 s< 0 || arg2 s>= edx_1)
    eax_7 = sub_719970(arg1, arg2, arg1[0x17], edx_1)
else
    eax_7 = arg2

void* ecx_5 = *arg1 + eax_7 * arg1[3]
int32_t eax_11 = eax_2 + eax_3
void* var_10 = ecx_5
int32_t esi_1 = neg.d(eax_3)
int32_t* i_23 = edi + (eax_1 << 1)
int32_t edi_1 = esi_1
void* i_47 = i_51

if (arg1[0x17] != 4 || (arg2 s>= 0 && arg2 s< edx_1))
    int32_t edx_5
    void var_48
    int32_t entry_ebx
    
    if (i_23 u> 7)
        edx_5 = eax_11
    else
        switch (i_23)
            case nullptr
                edx_5 = eax_11
                
                if (edi_1 s< edx_5)
                    float xmm3_1[0x4] = data_8936b0
                    void* eax_16 = edi_1 * i_47
                    void* var_2c_1 = eax_16
                    void* var_34_1 = eax_5 + (eax_16 << 2)
                    
                    do
                        int32_t ecx_12
                        
                        if (edi_1 s< 0 || edi_1 s>= arg1[1])
                            edx_5 = eax_11
                            ecx_12 = sub_719970(eax_16, edi_1, eax_6, eax_2)
                            eax_16 = var_2c_1
                        else
                            ecx_12 = edi_1
                        
                        void* ecx_16 = ecx_12 * i_47
                        int32_t i = 0
                        void* var_38_1 = ecx_16
                        
                        if (i_47 s> 0)
                            if (i_47 u< 0x10)
                                goto label_71a537
                            
                            int32_t eax_20 = eax_5 + ((eax_16 - 1 + i_47) << 2)
                            void* edx_9 = var_10 + ecx_16
                            void* eax_21 = i_47 - 1
                            i_47 = i_51
                            
                            if (var_34_1 u<= eax_21 + ecx_16 + var_10 && eax_20 u>= edx_9)
                                goto label_71a537
                            
                            void* eax_25 = i_47 & 0x8000000f
                            
                            if (eax_25 s< 0)
                                eax_25 = ((eax_25 - 1) | 0xfffffff0) + 1
                            
                            void* ecx_15 = edx_9 + 8
                            void* eax_29 = var_34_1 + 0x20
                            
                            do
                                uint128_t xmm1_1 = zx.o(*(ecx_15 - 8))
                                eax_29 += 0x40
                                ecx_15 += 0x10
                                i += 0x10
                                *(eax_29 - 0x60) = _mm_div_ps(
                                    _mm_cvtepi32_ps(_mm_unpacklo_epi16(
                                        _mm_unpacklo_epi8(xmm1_1, 0), 0)), 
                                    xmm3_1)
                                *(eax_29 - 0x50) = _mm_div_ps(
                                    _mm_cvtepi32_ps(_mm_unpacklo_epi16(
                                        _mm_unpacklo_epi8(zx.o(*(ecx_15 - 0x14)), 0), 0)), 
                                    xmm3_1)
                                *(eax_29 - 0x40) = _mm_div_ps(
                                    _mm_cvtepi32_ps(_mm_unpacklo_epi16(
                                        _mm_unpacklo_epi8(zx.o(*(ecx_15 - 0x10)), 0), 0)), 
                                    xmm3_1)
                                *(eax_29 - 0x30) = _mm_div_ps(
                                    _mm_cvtepi32_ps(_mm_unpacklo_epi16(
                                        _mm_unpacklo_epi8(zx.o(*(ecx_15 - 0xc)), 0), 0)), 
                                    xmm3_1)
                            while (i s< i_47 - eax_25)
                            
                            int32_t i_22 = i
                            
                            if (i s< i_47)
                                ecx_16 = var_38_1
                            label_71a537:
                                
                                if (i_47 - i s< 4)
                                label_71a5df:
                                    void* ecx_22 = var_38_1 + i + var_10
                                    void* i_50 = i_47
                                    void* i_35 = i_47 - i
                                    void* edx_16 = eax_5 + ((var_2c_1 + i) << 2)
                                    void* i_1
                                    
                                    do
                                        uint32_t eax_46 = zx.d(*ecx_22)
                                        edx_16 += 4
                                        ecx_22 += 1
                                        *(edx_16 - 4) = _mm_cvtepi32_ps(zx.o(eax_46)) / 255f
                                        i_1 = i_35
                                        i_35 -= 1
                                    while (i_1 != 1)
                                    i_47 = i_51
                                else
                                    void* ecx_19 = var_10 + 2 + ecx_16 + i
                                    void* edx_14 = eax_5 + ((var_2c_1 + i) << 2) + 8
                                    int32_t var_3c_2 = ((i_47 - i - 4) u>> 2) + 1
                                    int32_t i_34 = ((i_47 - i - 4) u>> 2) + 1
                                    i += (((i_47 - i - 4) u>> 2) + 1) << 2
                                    int32_t i_2
                                    
                                    do
                                        uint32_t eax_40 = zx.d(*(ecx_19 - 2))
                                        edx_14 += 0x10
                                        ecx_19 += 4
                                        *(edx_14 - 0x18) = _mm_cvtepi32_ps(zx.o(eax_40)) / 255f
                                        *(edx_14 - 0x14) =
                                            _mm_cvtepi32_ps(zx.o(*(ecx_19 - 5))) / 255f
                                        *(edx_14 - 0x10) =
                                            _mm_cvtepi32_ps(zx.o(*(ecx_19 - 4))) / 255f
                                        *(edx_14 - 0xc) =
                                            _mm_cvtepi32_ps(zx.o(*(ecx_19 - 3))) / 255f
                                        i_2 = i_34
                                        i_34 -= 1
                                    while (i_2 != 1)
                                    i_47 = i_51
                                    
                                    if (i s< i_47)
                                        goto label_71a5df
                            
                            eax_16 = var_2c_1
                            edx_5 = eax_11
                        
                        edi_1 += 1
                        var_34_1 += i_47 << 2
                        eax_16 += i_47
                        var_2c_1 = eax_16
                    while (edi_1 s< edx_5)
            case 1
                edx_5 = eax_11
                
                if (edi_1 s< edx_5)
                    void* ebx_3 = edi_1 * i_47
                    int32_t eax_49 = arg1[0x12] & 2
                    void* var_30_2 = ebx_3
                    void* var_38_2 = eax_5 + 8 + (ebx_3 << 2)
                    void* var_2c_2 = eax_5 + ((eax + ebx_3) << 2)
                    
                    do
                        int32_t eax_56
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_2)
                            eax_56 = sub_719970(eax_2, edi_1, eax_6, eax_2)
                            ecx_5 = var_10
                        else
                            eax_56 = edi_1
                        
                        void* eax_67 = eax_56 * i_47
                        int32_t edx_19 = 0
                        int32_t var_34_2 = 0
                        void* var_3c_3 = eax_67
                        
                        if (i_47 s>= 4)
                            void* edx_20 = var_38_2
                            void* ecx_25 = ecx_5 + eax_67 + 2
                            int32_t i_30 = ((i_47 - 4) u>> 2) + 1
                            var_34_2 = i_30 << 2
                            int32_t i_3
                            
                            do
                                uint32_t eax_59 = zx.d(*(ecx_25 - 2))
                                edx_20 += 0x10
                                ecx_25 += 4
                                *(edx_20 - 0x18) = *((eax_59 << 2) + &data_8012d8)
                                *(edx_20 - 0x14) = *((zx.d(*(ecx_25 - 5)) << 2) + &data_8012d8)
                                *(edx_20 - 0x10) = *((zx.d(*(ecx_25 - 4)) << 2) + &data_8012d8)
                                *(edx_20 - 0xc) = *((zx.d(*(ecx_25 - 3)) << 2) + &data_8012d8)
                                i_3 = i_30
                                i_30 -= 1
                            while (i_3 != 1)
                            eax_67 = var_3c_3
                            edx_19 = var_34_2
                            ebx_3 = var_30_2
                        
                        if (edx_19 s< i_47)
                            char* ecx_27 = eax_67 + edx_19 + var_10
                            void* i_31 = i_47 - var_34_2
                            void* edx_22 = eax_5 + ((ebx_3 + edx_19) << 2)
                            void* i_4
                            
                            do
                                uint32_t eax_69 = zx.d(*ecx_27)
                                edx_22 += 4
                                ecx_27 = &ecx_27[1]
                                *(edx_22 - 4) = *((eax_69 << 2) + &data_8012d8)
                                i_4 = i_31
                                i_31 -= 1
                            while (i_4 != 1)
                        
                        float* eax_74
                        
                        if (eax_49 != 0)
                            eax_74 = var_2c_2
                        else
                            eax_74 = var_2c_2
                            *eax_74 = _mm_cvtepi32_ps(zx.o(*(var_3c_3 + var_10 + eax))) / 255f
                        
                        var_38_2 += i_47 << 2
                        edx_5 = eax_11
                        edi_1 += 1
                        ecx_5 = var_10
                        ebx_3 = var_30_2 + i_47
                        var_30_2 = ebx_3
                        var_2c_2 = &eax_74[i_47]
                    while (edi_1 s< edx_5)
            case 2
                edx_5 = eax_11
                
                if (edi_1 s< edx_5)
                    float xmm3_2[0x4] = data_893750
                    void* eax_77 = edi_1 * i_47
                    void* var_2c_3 = eax_77
                    void* ecx_31 = eax_5 + (eax_77 << 2)
                    void* var_30_3 = ecx_31
                    
                    do
                        int32_t edx_24
                        
                        if (edi_1 s< 0 || edi_1 s>= arg1[1])
                            ecx_31 = var_30_3
                            edx_24 = sub_719970(eax_77, edi_1, eax_6, eax_2)
                            eax_77 = var_2c_3
                        else
                            edx_24 = edi_1
                        
                        int32_t edx_29 = edx_24 * i_47
                        int32_t i_7 = 0
                        
                        if (i_47 s> 0)
                            if (i_47 u< 0x10)
                            label_71a8c7:
                                
                                if (i_47 - i_7 s< 4)
                                label_71a96d:
                                    void* i_48 = i_47
                                    void* i_37 = i_47 - i_7
                                    void* ecx_44 = eax_5 + ((var_2c_3 + i_7) << 2)
                                    int16_t* edx_31 = var_10 + ((edx_29 + i_7) << 1)
                                    void* i_5
                                    
                                    do
                                        uint32_t eax_108 = zx.d(*edx_31)
                                        edx_31 = &edx_31[1]
                                        ecx_44 += 4
                                        *(ecx_44 - 4) = _mm_cvtepi32_ps(zx.o(eax_108)) / 65535f
                                        i_5 = i_37
                                        i_37 -= 1
                                    while (i_5 != 1)
                                    i_47 = i_51
                                else
                                    void* ecx_42 = eax_5 + ((var_2c_3 + i_7) << 2) + 8
                                    void* edx_28 = var_10 + ((edx_29 + i_7) << 1) + 4
                                    int32_t var_44_3 = ((i_47 - i_7 - 4) u>> 2) + 1
                                    int32_t i_36 = ((i_47 - i_7 - 4) u>> 2) + 1
                                    i_7 += (((i_47 - i_7 - 4) u>> 2) + 1) << 2
                                    int32_t i_6
                                    
                                    do
                                        uint32_t eax_101 = zx.d(*(edx_28 - 4))
                                        edx_28 += 8
                                        ecx_42 += 0x10
                                        *(ecx_42 - 0x18) = _mm_cvtepi32_ps(zx.o(eax_101)) / 65535f
                                        *(ecx_42 - 0x14) =
                                            _mm_cvtepi32_ps(zx.o(*(edx_28 - 0xa))) / 65535f
                                        *(ecx_42 - 0x10) =
                                            _mm_cvtepi32_ps(zx.o(*(edx_28 - 8))) / 65535f
                                        *(ecx_42 - 0xc) =
                                            _mm_cvtepi32_ps(zx.o(*(edx_28 - 6))) / 65535f
                                        i_6 = i_36
                                        i_36 -= 1
                                    while (i_6 != 1)
                                    i_47 = i_51
                                    
                                    if (i_7 s< i_47)
                                        goto label_71a96d
                            else
                                int32_t ecx_34 = eax_5 + ((eax_77 - 1 + i_47) << 2)
                                void* eax_83 = var_10 + ((i_47 - 1 + edx_29) << 1)
                                i_47 = i_51
                                
                                if (var_30_3 u<= eax_83)
                                    i_47 = i_51
                                
                                if (var_30_3 u<= eax_83 && ecx_34 u>= var_10 + (edx_29 << 1))
                                    goto label_71a8c7
                                
                                void* eax_86 = i_47 & 0x8000000f
                                
                                if (eax_86 s< 0)
                                    eax_86 = ((eax_86 - 1) | 0xfffffff0) + 1
                                
                                void* eax_90 = var_30_3 + 0x20
                                void* ecx_39 = var_10 + (edx_29 << 1) + 0x10
                                
                                do
                                    uint128_t xmm1_13 = zx.o(*(ecx_39 - 0x10))
                                    ecx_39 += 0x20
                                    eax_90 += 0x40
                                    i_7 += 0x10
                                    *(eax_90 - 0x60) = _mm_div_ps(
                                        _mm_cvtepi32_ps(_mm_unpacklo_epi16(xmm1_13, 0)), xmm3_2)
                                    *(eax_90 - 0x50) = _mm_div_ps(
                                        _mm_cvtepi32_ps(_mm_unpacklo_epi16(zx.o(*(ecx_39 - 0x28)), 
                                            0)), 
                                        xmm3_2)
                                    *(eax_90 - 0x40) = _mm_div_ps(
                                        _mm_cvtepi32_ps(_mm_unpacklo_epi16(zx.o(*(ecx_39 - 0x20)), 
                                            0)), 
                                        xmm3_2)
                                    *(eax_90 - 0x30) = _mm_div_ps(
                                        _mm_cvtepi32_ps(_mm_unpacklo_epi16(zx.o(*(ecx_39 - 0x18)), 
                                            0)), 
                                        xmm3_2)
                                while (i_7 s< i_47 - eax_86)
                                
                                int32_t i_20 = i_7
                                
                                if (i_7 s< i_47)
                                    goto label_71a8c7
                            
                            eax_77 = var_2c_3
                            ecx_31 = var_30_3
                        
                        edi_1 += 1
                        ecx_31 += i_47 << 2
                        eax_77 += i_47
                        edx_5 = eax_11
                        var_2c_3 = eax_77
                        var_30_3 = ecx_31
                    while (edi_1 s< edx_5)
            case 3
                edx_5 = eax_11
                
                if (edi_1 s< edx_5)
                    int32_t eax_111 = arg1[0x12] & 2
                    void* eax_113 = edi_1 * i_47
                    float* ecx_45 = eax_5 + (eax_113 << 2)
                    float* var_38_3 = ecx_45
                    float* ebx_9 = eax_5 + ((eax_113 + eax) << 2)
                    float* var_30_4 = ebx_9
                    
                    do
                        int32_t eax_116
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_2)
                            eax_116 = sub_719970(eax_2, edi_1, eax_6, eax_2)
                            ecx_45 = var_38_3
                        else
                            eax_116 = edi_1
                        
                        void* eax_118 = eax_116 * i_47
                        
                        if (i_47 s> 0)
                            float* var_3c_5 = ecx_45
                            int16_t* ebx_10 = var_10 + (eax_118 << 1)
                            void* i_28 = i_47
                            void* i_41 = i_28
                            void* i_8
                            
                            do
                                float xmm0_52 = _mm_cvtepi32_ps(zx.o(*ebx_10)) / 65535f
                                float xmm0_53
                                
                                if (0.0404499993f < xmm0_52)
                                    double xmm0_56 =
                                        _mm_cvtps_pd((xmm0_52 + 0.0549999997f) / 1.05499995f)
                                    _libm_sse2_pow_precise(arg4, arg3, entry_ebx, var_48, eax_118)
                                    ecx_45 = var_3c_5
                                    i_28 = i_41
                                    xmm0_53 = fconvert.s(xmm0_56)
                                else
                                    xmm0_53 = xmm0_52 / 12.9200001f
                                
                                *ecx_45 = xmm0_53
                                ebx_10 = &ebx_10[1]
                                ecx_45 = &ecx_45[1]
                                i_8 = i_28
                                i_28 -= 1
                                var_3c_5 = ecx_45
                                i_41 = i_28
                            while (i_8 != 1)
                            ebx_9 = var_30_4
                        
                        if (eax_111 == 0)
                            *ebx_9 =
                                _mm_cvtepi32_ps(zx.o(*(var_10 + ((eax_118 + eax) << 1)))) / 65535f
                        
                        ebx_9 = &ebx_9[i_47]
                        ecx_45 = &var_38_3[i_47]
                        edx_5 = eax_11
                        edi_1 += 1
                        var_30_4 = ebx_9
                        var_38_3 = ecx_45
                    while (edi_1 s< edx_5)
            case 4
                edx_5 = eax_11
                
                if (edi_1 s< edx_5)
                    int32_t ebx_11 = eax_5
                    uint32_t xmm4_1[0x4] = data_893670
                    double xmm5_1[0x2] = data_893650
                    double xmm2_1 = 4294967295.0
                    void* eax_122 = edi_1 * i_47
                    void* var_30_5 = eax_122
                    void* var_34_3 = ebx_11 + (eax_122 << 2)
                    
                    do
                        int32_t edx_36
                        
                        if (edi_1 s< 0 || edi_1 s>= arg1[1])
                            edx_36 = sub_719970(eax_122, edi_1, eax_6, eax_2)
                            eax_122 = var_30_5
                        else
                            edx_36 = edi_1
                        
                        int32_t edx_38 = edx_36 * i_47
                        int32_t i_11 = 0
                        
                        if (i_47 s> 0)
                            if (i_47 u< 8)
                                goto label_71ac6e
                            
                            int32_t ebx_12 = ebx_11 + ((eax_122 - 1 + i_47) << 2)
                            void* eax_128 = var_10 + ((i_47 - 1 + edx_38) << 2)
                            i_47 = i_51
                            
                            if (var_34_3 u<= eax_128)
                                i_47 = i_51
                            
                            if (var_34_3 u<= eax_128 && ebx_12 u>= var_10 + (edx_38 << 2))
                                ebx_11 = eax_5
                            label_71ac6e:
                                
                                if (i_47 - i_11 s< 4)
                                label_71ad4f:
                                    void* i_49 = i_47
                                    int32_t* edx_45 = eax_5 + ((var_30_5 + i_11) << 2)
                                    void* i_38 = i_47 - i_11
                                    int32_t* ebx_21 = var_10 + ((edx_38 + i_11) << 2)
                                    void* i_9
                                    
                                    do
                                        int32_t eax_155 = *ebx_21
                                        ebx_21 = &ebx_21[1]
                                        *edx_45 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_155)) f+
                                            *((eax_155 u>> 0x1f << 3) + &data_893660)) / xmm2_1)
                                        edx_45 = &edx_45[1]
                                        i_9 = i_38
                                        i_38 -= 1
                                    while (i_9 != 1)
                                    i_47 = i_51
                                else
                                    void* ebx_19 = ebx_11 + ((var_30_5 + i_11) << 2) + 8
                                    void* eax_142 = var_10 + ((edx_38 + 2 + i_11) << 2)
                                    void* var_44_6 = eax_142
                                    void* esi_7 = eax_142
                                    int32_t i_29 = ((i_47 - i_11 - 4) u>> 2) + 1
                                    i_11 += i_29 << 2
                                    int32_t i_10
                                    
                                    do
                                        int32_t eax_143 = *(esi_7 - 8)
                                        *(ebx_19 - 8) = _mm_cvtpd_ps((
                                            _mm_cvtepi32_pd(zx.q(eax_143)) f+
                                            *((eax_143 u>> 0x1f << 3) + &data_893660)) / xmm2_1)
                                        int32_t eax_145 = *(esi_7 - 4)
                                        *(ebx_19 - 4) = _mm_cvtpd_ps((
                                            _mm_cvtepi32_pd(zx.q(eax_145)) f+
                                            *((eax_145 u>> 0x1f << 3) + &data_893660)) / xmm2_1)
                                        int32_t eax_147 = *esi_7
                                        *ebx_19 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_147)) f+
                                            *((eax_147 u>> 0x1f << 3) + &data_893660)) / xmm2_1)
                                        int32_t eax_149 = *(esi_7 + 4)
                                        esi_7 += 0x10
                                        *(ebx_19 + 4) = _mm_cvtpd_ps((
                                            _mm_cvtepi32_pd(zx.q(eax_149)) f+
                                            *((eax_149 u>> 0x1f << 3) + &data_893660)) / xmm2_1)
                                        ebx_19 += 0x10
                                        i_10 = i_29
                                        i_29 -= 1
                                    while (i_10 != 1)
                                    i_47 = i_51
                                    
                                    if (i_11 s< i_47)
                                        goto label_71ad4f
                                
                                ebx_11 = eax_5
                            else
                                void* eax_131 = i_47 & 0x80000007
                                
                                if (eax_131 s< 0)
                                    eax_131 = ((eax_131 - 1) | 0xfffffff8) + 1
                                
                                int64_t* eax_135 = var_34_3 + 0x10
                                void* ebx_17 = var_10 + (edx_38 << 2) + 0x10
                                
                                do
                                    double xmm0_60[0x2] = __cvtdq2pd_xmmpd_memq(*(ebx_17 - 0x10))
                                    i_11 += 8
                                    eax_135[-2] = _mm_cvtpd_ps(_mm_div_pd(
                                        _mm_add_pd(
                                            _mm_and_ps(_mm_cmpeq_pd(xmm0_60, zx.o(0), 1), xmm4_1), 
                                            xmm0_60), 
                                        xmm5_1))
                                    double xmm0_62[0x2] = __cvtdq2pd_xmmpd_memq(*(ebx_17 - 8))
                                    eax_135[-1] = _mm_cvtpd_ps(_mm_div_pd(
                                        _mm_add_pd(
                                            _mm_and_ps(_mm_cmpeq_pd(xmm0_62, zx.o(0), 1), xmm4_1), 
                                            xmm0_62), 
                                        xmm5_1))
                                    double xmm0_64[0x2] = __cvtdq2pd_xmmpd_memq(*ebx_17)
                                    *eax_135 = _mm_cvtpd_ps(_mm_div_pd(
                                        _mm_add_pd(
                                            _mm_and_ps(_mm_cmpeq_pd(xmm0_64, zx.o(0), 1), xmm4_1), 
                                            xmm0_64), 
                                        xmm5_1))
                                    double xmm0_66[0x2] = __cvtdq2pd_xmmpd_memq(*(ebx_17 + 8))
                                    ebx_17 += 0x20
                                    eax_135[1] = _mm_cvtpd_ps(_mm_div_pd(
                                        _mm_add_pd(
                                            _mm_and_ps(_mm_cmpeq_pd(xmm0_66, zx.o(0), 1), xmm4_1), 
                                            xmm0_66), 
                                        xmm5_1))
                                    eax_135 = &eax_135[4]
                                while (i_11 s< i_47 - eax_131)
                                
                                ebx_11 = eax_5
                                int32_t i_21 = i_11
                                
                                if (i_11 s< i_47)
                                    goto label_71ac6e
                            
                            eax_122 = var_30_5
                        
                        edx_5 = eax_11
                        var_34_3 += i_47 << 2
                        edi_1 += 1
                        eax_122 += i_47
                        var_30_5 = eax_122
                    while (edi_1 s< edx_5)
            case 5
                edx_5 = eax_11
                
                if (edi_1 s< edx_5)
                    double xmm1_42 = 4294967295.0
                    int32_t eax_159 = arg1[0x12] & 2
                    void* eax_161 = edi_1 * i_47
                    float* ebx_22 = eax_5 + (eax_161 << 2)
                    float* var_34_4 = ebx_22
                    void* var_38_4 = eax_5 + ((eax_161 + eax) << 2)
                    
                    do
                        int32_t eax_165
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_2)
                            eax_165 = sub_719970(eax_2, edi_1, eax_6, eax_2)
                            ecx_5 = var_10
                        else
                            eax_165 = edi_1
                        
                        void* eax_169 = eax_165 * i_47
                        
                        if (i_47 s> 0)
                            int32_t* eax_166 = ecx_5 + (eax_169 << 2)
                            void* i_25 = i_47
                            void* i_40 = i_25
                            int32_t* esi_8 = eax_166
                            void* i_12
                            
                            do
                                int32_t eax_167 = *esi_8
                                float xmm0_97 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_167)) f+
                                    *((eax_167 u>> 0x1f << 3) + &data_893660)) / xmm1_42)
                                float xmm0_98
                                
                                if (0.0404499993f < xmm0_97)
                                    double xmm0_101 =
                                        _mm_cvtps_pd((xmm0_97 + 0.0549999997f) / 1.05499995f)
                                    _libm_sse2_pow_precise(arg4, arg3, entry_ebx, var_48, eax_166)
                                    xmm1_42 = 4294967295.0
                                    i_25 = i_40
                                    xmm0_98 = fconvert.s(xmm0_101)
                                else
                                    xmm0_98 = xmm0_97 / 12.9200001f
                                
                                *ebx_22 = xmm0_98
                                esi_8 = &esi_8[1]
                                ebx_22 = &ebx_22[1]
                                i_12 = i_25
                                i_25 -= 1
                                i_40 = i_25
                            while (i_12 != 1)
                            i_47 = i_51
                            ebx_22 = var_34_4
                        
                        int32_t* eax_173
                        
                        if (eax_159 != 0)
                            eax_173 = var_38_4
                        else
                            int32_t eax_171 = *(var_10 + ((eax_169 + eax) << 2))
                            eax_173 = var_38_4
                            *eax_173 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_171)) f+
                                *((eax_171 u>> 0x1f << 3) + &data_893660)) / xmm1_42)
                        
                        edx_5 = eax_11
                        ebx_22 = &ebx_22[i_47]
                        ecx_5 = var_10
                        edi_1 += 1
                        var_38_4 = &eax_173[i_47]
                        var_34_4 = ebx_22
                    while (edi_1 s< edx_5)
            case 6
                edx_5 = eax_11
                
                if (edi_1 s< edx_5)
                    void* ecx_57 = edi_1 * i_47
                    void* var_2c_6 = ecx_57
                    int32_t eax_176 = eax_5 + (ecx_57 << 2)
                    int32_t var_30_7 = eax_176
                    
                    do
                        int32_t ebx_23
                        
                        if (edi_1 s< 0 || edi_1 s>= arg1[1])
                            ecx_57 = var_2c_6
                            ebx_23 = sub_719970(eax_176, edi_1, eax_6, eax_2)
                            eax_176 = var_30_7
                        else
                            ebx_23 = edi_1
                        
                        int32_t ebx_28 = ebx_23 * i_47
                        int32_t edx_50 = 0
                        int32_t var_34_5 = 0
                        
                        if (i_47 s> 0)
                            void* eax_182
                            
                            if (i_47 u>= 4)
                                var_34_5 = 0
                                eax_182 = var_10 + (ebx_28 << 2)
                                edx_50 = 0
                            
                            if (i_47 u>= 4 && (var_30_7 u> var_10 + ((i_47 - 1 + ebx_28) << 2)
                                    || eax_5 + ((i_47 - 1 + ecx_57) << 2) u< eax_182))
                                memcpy(var_30_7, eax_182, i_47 << 2)
                            else
                                if (i_47 s>= 4)
                                    void* ecx_61 = eax_5 + (ecx_57 << 2) + 8
                                    void* edx_55 = var_10 + (ebx_28 << 2) + 8
                                    int32_t i_32 = ((i_47 - 4) u>> 2) + 1
                                    var_34_5 = i_32 << 2
                                    int32_t i_13
                                    
                                    do
                                        int32_t eax_193 = *(edx_55 - 8)
                                        edx_55 += 0x10
                                        *(ecx_61 - 8) = eax_193
                                        ecx_61 += 0x10
                                        *(ecx_61 - 0x14) = *(edx_55 - 0x14)
                                        *(ecx_61 - 0x10) = *(edx_55 - 0x10)
                                        *(ecx_61 - 0xc) = *(edx_55 - 0xc)
                                        i_13 = i_32
                                        i_32 -= 1
                                    while (i_13 != 1)
                                    edx_50 = var_34_5
                                
                                if (i_47 s< 4 || edx_50 s< i_47)
                                    int32_t* ecx_63 = eax_5 + ((var_2c_6 + edx_50) << 2)
                                    void* i_33 = i_47 - var_34_5
                                    int32_t* edx_57 = var_10 + ((ebx_28 + edx_50) << 2)
                                    void* i_14
                                    
                                    do
                                        int32_t eax_200 = *edx_57
                                        edx_57 = &edx_57[1]
                                        *ecx_63 = eax_200
                                        ecx_63 = &ecx_63[1]
                                        i_14 = i_33
                                        i_33 -= 1
                                    while (i_14 != 1)
                            
                            ecx_57 = var_2c_6
                            eax_176 = var_30_7
                        
                        edi_1 += 1
                        eax_176 += i_47 << 2
                        ecx_57 += i_47
                        edx_5 = eax_11
                        var_2c_6 = ecx_57
                        var_30_7 = eax_176
                    while (edi_1 s< edx_5)
            case 7
                edx_5 = eax_11
                
                if (edi_1 s< edx_5)
                    int32_t eax_203 = arg1[0x12] & 2
                    void* eax_205 = edi_1 * i_47
                    float* edx_59 = eax_5 + (eax_205 << 2)
                    float* var_38_6 = edx_59
                    int32_t* ebx_31 = eax_5 + ((eax_205 + eax) << 2)
                    int32_t* var_30_8 = ebx_31
                    
                    do
                        int32_t ecx_64
                        
                        if (edi_1 s< 0 || edi_1 s>= eax_2)
                            edx_59 = var_38_6
                            ecx_64 = sub_719970(eax_2, edi_1, eax_6, eax_2)
                        else
                            ecx_64 = edi_1
                        
                        int32_t ecx_66 = ecx_64 * i_47
                        
                        if (i_47 s> 0)
                            float* eax_209 = edx_59
                            float* var_3c_8 = eax_209
                            int32_t* ebx_32 = var_10 + (ecx_66 << 2)
                            void* i_26 = i_47
                            void* i_42 = i_26
                            void* i_15
                            
                            do
                                float xmm0_107 = *ebx_32
                                float xmm0_108
                                
                                if (0.0404499993f < xmm0_107)
                                    double xmm0_111 =
                                        _mm_cvtps_pd((xmm0_107 + 0.0549999997f) / 1.05499995f)
                                    _libm_sse2_pow_precise(arg4, arg3, entry_ebx, var_48, ecx_66)
                                    eax_209 = var_3c_8
                                    i_26 = i_42
                                    xmm0_108 = fconvert.s(xmm0_111)
                                else
                                    xmm0_108 = xmm0_107 / 12.9200001f
                                
                                *eax_209 = xmm0_108
                                ebx_32 = &ebx_32[1]
                                eax_209 = &eax_209[1]
                                i_15 = i_26
                                i_26 -= 1
                                var_3c_8 = eax_209
                                i_42 = i_26
                            while (i_15 != 1)
                            ebx_31 = var_30_8
                        
                        if (eax_203 == 0)
                            *ebx_31 = *(var_10 + ((eax + ecx_66) << 2))
                        
                        edi_1 += 1
                        ebx_31 = &ebx_31[i_47]
                        edx_59 = &var_38_6[i_47]
                        var_30_8 = ebx_31
                        var_38_6 = edx_59
                    while (edi_1 s< eax_11)
                    
                    edx_5 = eax_11
    i_23 = arg1
    int32_t edi_3 = esi_1
    
    if ((i_23[0x12].b & 1) == 0 && edi_3 s< edx_5)
        void* ebx_34 = edi_3 * i_47
        void* var_38_7 = ebx_34
        void* edi_5 = eax_5 + 8 + (ebx_34 << 2)
        int32_t* ecx_70 = eax_5 + ((eax + ebx_34) << 2)
        void* var_34_6 = edi_5
        int32_t* var_30_9 = ecx_70
        i_23 = edx_5 - esi_1
        int32_t* i_43 = i_23
        int32_t* i_16
        
        do
            float xmm1_45 = *ecx_70
            
            if (eax_1 != 3)
                xmm1_45 = xmm1_45 + 8.27180613e-25f
                *ecx_70 = xmm1_45
            
            int32_t j = 0
            
            if (i_47 s>= 4)
                void* ecx_71 = var_34_6
                int32_t edi_6 = 2
                
                do
                    if (j != eax)
                        *(ecx_71 - 8) = xmm1_45 f* *(ecx_71 - 8)
                    
                    if (edi_6 - 1 != eax)
                        *(ecx_71 - 4) = xmm1_45 f* *(ecx_71 - 4)
                    
                    if (edi_6 != eax)
                        *ecx_71 = xmm1_45 f* *ecx_71
                    
                    if (edi_6 + 1 != eax)
                        *(ecx_71 + 4) = xmm1_45 f* *(ecx_71 + 4)
                    
                    j += 4
                    ecx_71 += 0x10
                    edi_6 += 4
                while (j s< i_47 - 3)
                
                i_47 = i_51
                ecx_70 = var_30_9
                ebx_34 = var_38_7
                edi_5 = var_34_6
                i_23 = i_43
            
            if (j s< i_47)
                float* eax_219 = eax_5 + ((ebx_34 + j) << 2)
                edi_5 = var_34_6
                
                do
                    if (j != arg1[0x11])
                        *eax_219 = xmm1_45 * *eax_219
                    
                    j += 1
                    eax_219 = &eax_219[1]
                while (j s< i_47)
                
                ecx_70 = var_30_9
                ebx_34 = var_38_7
                i_23 = i_43
            
            ebx_34 += i_47
            ecx_70 = &ecx_70[i_47]
            var_38_7 = ebx_34
            edi_5 += i_47 << 2
            var_30_9 = ecx_70
            i_16 = i_23
            i_23 -= 1
            var_34_6 = edi_5
            i_43 = i_23
        while (i_16 != 1)
        edi_3 = esi_1
    
    if (eax_6 == 4)
        if (edi_3 s< 0)
            i_23 = edi_3 * i_47
            int32_t i_39 = neg.d(edi_3)
            int32_t i_44 = i_39
            int32_t edx_64 = eax_5 + (i_23 << 2)
            int32_t i_17
            
            do
                if (i_47 s> 0)
                    i_23 = nullptr
                    __builtin_memset(edx_64, 0, i_47 << 2)
                    i_39 = i_44
                
                edx_64 += i_47 << 2
                i_17 = i_39
                i_39 -= 1
                i_44 = i_39
            while (i_17 != 1)
        
        if (eax_2 s< eax_11)
            i_23 = eax_2 * i_47
            int32_t i_27 = eax_11 - eax_2
            int32_t i_46 = i_27
            int32_t edx_66 = eax_5 + (i_23 << 2)
            int32_t i_18
            
            do
                if (i_47 s> 0)
                    i_23 = nullptr
                    __builtin_memset(edx_66, 0, i_47 << 2)
                    i_27 = i_46
                
                edx_66 += i_47 << 2
                i_18 = i_27
                i_27 -= 1
                i_46 = i_27
            while (i_18 != 1)
else if (edi_1 s< eax_11)
    int32_t ebx_1 = i_47 << 2
    int32_t eax_14 = edi_1 * i_47
    int32_t i_24 = eax_11 - edi_1
    int32_t i_45 = i_24
    int32_t edx_4 = eax_5 + (eax_14 << 2)
    int32_t i_19
    
    do
        if (i_47 s> 0)
            eax_14 = 0
            __builtin_memset(edx_4, 0, ebx_1 u>> 2 << 2)
            i_24 = i_45
        
        edx_4 += ebx_1
        i_19 = i_24
        i_24 -= 1
        i_45 = i_24
    while (i_19 != 1)
    return eax_14

return i_23
