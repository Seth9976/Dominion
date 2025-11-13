// 函数: sub_75c100
// 地址: 0x75c100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
void* edi = arg1
void* var_21c = edi
char outputString[0xcc]

if ((arg2.b & 0xf) != 0)
    char const* const var_244 = "((size_t)aBuffer & 0xf) == 0"
    int32_t var_248 = 0x420
    char const* const var_24c = "D:\soloud\src\core\soloud.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

if ((arg5.b & 0xf) != 0)
    char const* const var_244_2 = "((size_t)aScratch & 0xf) == 0"
    int32_t var_248_1 = 0x421
    char const* const var_24c_1 = "D:\soloud\src\core\soloud.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

if ((arg4.b & 0xf) != 0)
    char const* const var_244_4 = "((size_t)aBufferSize & 0xf) == 0"
    int32_t var_248_2 = 0x422
    char const* const var_24c_2 = "D:\soloud\src\core\soloud.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

uint32_t ecx_2 = arg6
int32_t i_27 = arg3
void var_140
float var_120
float var_100

if (ecx_2 != 0)
    float xmm1_1 = *(edi + 0x3c)
    double xmm0_2 = _mm_cvtepi32_pd(zx.q(i_27))
    __builtin_memcpy(&var_120, edi + 0x15c, ecx_2 << 2)
    void* ecx_3 = edi + 0x18
    int32_t eax_5 = 0
    float xmm2_1 = _mm_cvtpd_ps(xmm0_2 f+ *((i_27 u>> 0x1f << 3) + &data_893660))
    
    do
        float xmm0_5 = xmm1_1 f* *ecx_3
        *(&var_140 + (eax_5 << 2)) = xmm0_5
        float xmm0_6 = xmm0_5 f- *(ecx_3 + 0x144)
        ecx_3 += 4
        (&var_100)[eax_5] = xmm0_6 / xmm2_1
        eax_5 += 1
    while (eax_5 u< arg6)
    
    edi = var_21c
    ecx_2 = arg6

uint32_t result
float var_11c
float var_118
float var_114
int128_t var_110
float var_fc
float var_f8
float var_f4
int128_t var_f0
int32_t i_8

if (ecx_2 - 1 u> 7)
label_75e82f:
    result = arg6
    i_8 = 0
    
    if (result u>= 4)
        goto label_75e83c
    
label_75e877:
    
    if (i_8 u< result)
        goto label_75e88a
else
    switch (ecx_2)
        case 1
            int32_t i_25 = 0
            int32_t var_1f8_1 = 0
            
            if (*(edi + 0x48) u<= 0)
                goto label_75cc0f
            
            void* edx = arg5
            int32_t eax_7 = arg4
            float xmm4_1 = var_100
            void* var_20c_1 = edx + 8
            int32_t ecx_5 = 0
            int32_t i
            
            do
                float xmm3_1 = *(edi + 0x15c)
                int32_t edi_1 = 0
                float* ecx_6
                
                if (arg3 u>= 4)
                    ecx_6 = arg2
                    int32_t j_1 = ((arg3 - 4) u>> 2) + 1
                    void* edi_2 = &ecx_6[2]
                    void* eax_11 = var_20c_1
                    edx = arg5
                    int32_t j
                    
                    do
                        float xmm2_3 = xmm4_1 + xmm3_1
                        float xmm2_4 = xmm2_3 + xmm4_1
                        float xmm1_3 = xmm4_1 + xmm2_4
                        *(edi_2 - 8) = xmm2_3 f* *(eax_11 - 8) f+ *(edi_2 - 8)
                        xmm3_1 = xmm4_1 + xmm1_3
                        *(edi_2 - 4) = xmm2_4 f* *(eax_11 - 4) f+ *(edi_2 - 4)
                        *edi_2 = xmm1_3 f* *eax_11 f+ *edi_2
                        float xmm0_18 = xmm3_1 f* *(eax_11 + 4)
                        eax_11 += 0x10
                        *(edi_2 + 4) = xmm0_18 f+ *(edi_2 + 4)
                        edi_2 += 0x10
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    edi_1 = (((arg3 - 4) u>> 2) + 1) << 2
                    eax_7 = arg4
                    
                    if (edi_1 u< arg3)
                        goto label_75c3a3
                    
                    ecx_5 = var_1f8_1
                else if (arg3 != 0)
                    ecx_6 = arg2
                label_75c3a3:
                    float* eax_14 = edx + ((var_1f8_1 + edi_1) << 2)
                    
                    do
                        xmm3_1 = xmm3_1 + xmm4_1
                        float xmm0_22 = xmm3_1 * *eax_14
                        eax_14 = &eax_14[1]
                        ecx_6[edi_1] = xmm0_22 + ecx_6[edi_1]
                        edi_1 += 1
                    while (edi_1 u< arg3)
                    
                    eax_7 = arg4
                    ecx_5 = var_1f8_1
                var_20c_1 += eax_7 << 2
                i = i_25 + 1
                ecx_5 += eax_7
                i_25 = i
                var_1f8_1 = ecx_5
                edx = arg5
                edi = var_21c
            while (i u< *(var_21c + 0x48))
            result = arg6
            i_8 = 0
            goto label_75e88a
        case 2
            int32_t eax_16 = *(edi + 0x48) - 1
            
            if (eax_16 u> 7)
                goto label_75cc0f
            
            float var_1e0
            float var_190
            
            switch (eax_16)
                case 0
                    float xmm4_14 = var_100
                    float xmm6_5 = var_120
                    int32_t* var_1f0_2 = &var_1e0
                    float xmm7_5 = var_11c
                    uint32_t i_32 = i_27 u>> 2
                    uint32_t edi_10 = 0
                    uint32_t i_24 = i_32
                    uint32_t var_1f8_5 = 0
                    var_1e0 = xmm4_14 + xmm6_5
                    var_1f0_2[1] = xmm4_14 * 2f + xmm6_5
                    float xmm4_15[0x4] = xmm4_14 * 4f
                    var_1f0_2[2] = xmm4_14 * 3f + xmm6_5
                    var_1f0_2[3] = xmm6_5 f+ xmm4_15
                    int128_t* var_198_2 = &var_190
                    float* ecx_14 = arg2
                    var_190 = var_fc + xmm7_5
                    *(var_198_2 + 4) = var_fc * 2f + xmm7_5
                    float xmm3_8[0x4] = var_fc * 4f
                    *(var_198_2 + 8) = var_fc * 3f + xmm7_5
                    *(var_198_2 + 0xc) = xmm7_5 f+ xmm3_8
                    float xmm0_96[0x4] = _mm_shuffle_ps(xmm4_15, xmm4_15, 0)
                    float xmm0_98[0x4] = _mm_shuffle_ps(xmm3_8, xmm3_8, 0)
                    float xmm4_16[0x4] = *var_1f0_2
                    float xmm5_11[0x4] = *var_198_2
                    int32_t eax_66 = arg4
                    
                    if (i_32 != 0)
                        void* edi_11 = &ecx_14[eax_66]
                        float* esi_25 = ecx_14
                        var_1f8_5 = i_24 << 2
                        eax_66 = arg4
                        uint32_t i_1
                        
                        do
                            float xmm3_9[0x4] = *(arg5 - ecx_14 + esi_25)
                            float xmm2_16[0x4] = *edi_11
                            float xmm1_14[0x4] = _mm_mul_ps(xmm3_9, xmm4_16)
                            xmm4_16 = __addps_xmmps_memps(xmm4_16, xmm0_96)
                            float xmm3_10[0x4] = _mm_mul_ps(xmm3_9, xmm5_11)
                            float xmm1_15[0x4] = __addps_xmmps_memps(xmm1_14, *esi_25)
                            xmm5_11 = __addps_xmmps_memps(xmm5_11, xmm0_98)
                            float xmm3_11[0x4] = _mm_add_ps(xmm3_10, xmm2_16)
                            *esi_25 = xmm1_15
                            esi_25 = &esi_25[4]
                            *edi_11 = xmm3_11
                            edi_11 += 0x10
                            i_1 = i_24
                            i_24 -= 1
                        while (i_1 != 1)
                        ecx_14 = arg2
                        edi_10 = var_1f8_5
                    
                    if (edi_10 u< arg3)
                        void* edi_12 = &ecx_14[edi_10]
                        int32_t i_30 = arg3 - var_1f8_5
                        void* eax_69 = &ecx_14[eax_66 + var_1f8_5]
                        int32_t i_2
                        
                        do
                            float xmm1_16 = *(edi_12 + arg5 - ecx_14)
                            xmm6_5 = xmm6_5 + xmm4_15
                            xmm7_5 = xmm7_5 + xmm3_8[0]
                            *edi_12 = xmm6_5 * xmm1_16 f+ *edi_12
                            edi_12 += 4
                            *eax_69 = xmm1_16 * xmm7_5 f+ *eax_69
                            eax_69 += 4
                            i_2 = i_30
                            i_30 -= 1
                        while (i_2 != 1)
                    
                    goto label_75cc09
                case 1
                    float xmm7_3 = var_100
                    float xmm5_10 = var_120
                    float* var_198_1 = &var_190
                    float xmm6_4 = var_11c
                    uint32_t i_31 = i_27 u>> 2
                    uint32_t edi_7 = 0
                    uint32_t i_26 = i_31
                    uint32_t var_1f8_4 = 0
                    var_190 = xmm7_3 + xmm5_10
                    var_198_1[1] = xmm7_3 * 2f + xmm5_10
                    float xmm7_4[0x4] = xmm7_3 * 4f
                    var_198_1[2] = xmm7_3 * 3f + xmm5_10
                    var_198_1[3] = xmm5_10 f+ xmm7_4
                    float* var_1f0_1 = &var_1e0
                    float* ecx_11 = arg2
                    var_1e0 = var_fc + xmm6_4
                    var_1f0_1[1] = var_fc * 2f + xmm6_4
                    float xmm4_12[0x4] = var_fc * 4f
                    var_1f0_1[2] = var_fc * 3f + xmm6_4
                    var_1f0_1[3] = xmm6_4 f+ xmm4_12
                    float xmm0_67[0x4] = _mm_shuffle_ps(xmm7_4, xmm7_4, 0)
                    float xmm0_69[0x4] = _mm_shuffle_ps(xmm4_12, xmm4_12, 0)
                    float xmm3_6[0x4] = *var_198_1
                    float xmm4_13[0x4] = *var_1f0_1
                    int32_t eax_54 = arg4
                    
                    if (i_31 != 0)
                        void* edi_8 = &ecx_11[eax_54]
                        float* esi_23 = ecx_11
                        float (* ecx_12)[0x4] = arg5 - ecx_11
                        var_1f8_4 = i_26 << 2
                        eax_54 = arg4
                        uint32_t i_3
                        
                        do
                            float xmm2_12[0x4] = *(ecx_12 + edi_8)
                            float xmm1_8[0x4] = _mm_mul_ps(*(ecx_12 + esi_23), xmm3_6)
                            xmm3_6 = __addps_xmmps_memps(xmm3_6, xmm0_67)
                            float xmm2_13[0x4] = _mm_mul_ps(xmm2_12, xmm4_13)
                            float xmm1_9[0x4] = __addps_xmmps_memps(xmm1_8, *esi_23)
                            xmm4_13 = __addps_xmmps_memps(xmm4_13, xmm0_69)
                            float xmm2_14[0x4] = __addps_xmmps_memps(xmm2_13, *edi_8)
                            *esi_23 = xmm1_9
                            esi_23 = &esi_23[4]
                            *edi_8 = xmm2_14
                            edi_8 += 0x10
                            i_3 = i_26
                            i_26 -= 1
                        while (i_3 != 1)
                        ecx_11 = arg2
                        edi_7 = var_1f8_4
                    
                    if (edi_7 u< arg3)
                        float* edi_9 = &ecx_11[edi_7]
                        void* edx_15 = arg5 - ecx_11
                        int32_t i_29 = arg3 - var_1f8_4
                        void* eax_57 = &ecx_11[eax_54 + var_1f8_4]
                        int32_t i_4
                        
                        do
                            xmm5_10 = xmm5_10 + xmm7_4[0]
                            xmm6_4 = xmm6_4 + xmm4_12
                            float xmm1_11 = *(eax_57 + edx_15) * xmm6_4
                            *edi_9 = xmm5_10 f* *(edi_9 + edx_15) + *edi_9
                            edi_9 = &edi_9[1]
                            *eax_57 = xmm1_11 f+ *eax_57
                            eax_57 += 4
                            i_4 = i_29
                            i_29 -= 1
                        while (i_4 != 1)
                        edi = var_21c
                        i_8 = 0
                        result = arg6
                        goto label_75e88a
                    
                label_75cc09:
                    edi = var_21c
                label_75cc0f:
                    result = arg6
                    i_8 = 0
                label_75e88a:
                    result -= i_8
                    arg6 = result
                    __builtin_memcpy(edi + (i_8 << 2) + 0x15c, &var_140 + (i_8 << 2), result << 2)
                case 2, 4, 6
                    goto label_75cc0f
                case 3
                    if (i_27 == 0)
                        goto label_75cc0f
                    
                    float* ecx_9 = arg2
                    float xmm7_2 = var_100
                    float xmm3_5 = var_11c
                    void* edi_6 = &ecx_9[arg4]
                    float xmm4_10 = var_120
                    void* edx_11 = arg5 - ecx_9
                    void* var_204_3 = arg5 + arg4 * 0xc
                    float* eax_45 = arg5 + (arg4 << 3)
                    int32_t i_5
                    
                    do
                        float* esi_21 = var_204_3
                        xmm4_10 = xmm4_10 + xmm7_2
                        xmm3_5 = xmm3_5 + var_fc
                        float xmm0_42 = *(ecx_9 + edx_11) + *eax_45
                        eax_45 = &eax_45[1]
                        var_204_3 = &esi_21[1]
                        float xmm2_10 = (*esi_21 + *(edi_6 + edx_11)) * 0.5f * xmm3_5
                        *ecx_9 = xmm0_42 * 0.5f * xmm4_10 + *ecx_9
                        ecx_9 = &ecx_9[1]
                        *edi_6 = xmm2_10 f+ *edi_6
                        edi_6 += 4
                        i_5 = arg3
                        arg3 -= 1
                    while (i_5 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e88a
                case 5
                    if (i_27 == 0)
                        goto label_75cc0f
                    
                    float* ecx_8 = arg2
                    float xmm5_9 = var_11c
                    float xmm6_2 = var_120
                    void* edi_5 = &ecx_8[arg4]
                    void* var_204_2 = arg5 + arg4 * 0x14
                    float* var_1f8_3 = arg5 + arg4 * 0xc
                    void* edx_9 = arg5 - ecx_8
                    float* var_20c_3 = arg5 + (arg4 << 3)
                    float* eax_41 = (arg4 << 4) + arg5
                    int32_t i_6
                    
                    do
                        xmm6_2 = xmm6_2 + var_100
                        xmm5_9 = xmm5_9 + var_fc
                        float xmm4_3 = *var_20c_3
                        float* esi_17 = var_1f8_3
                        var_20c_3 = &var_20c_3[1]
                        var_1f8_3 = &var_1f8_3[1]
                        float xmm2_6 = *esi_17
                        int32_t* esi_18 = var_204_2
                        var_204_2 = &esi_18[1]
                        float xmm0_35 = xmm4_3 f+ *(ecx_8 + edx_9) + xmm2_6 + *eax_41
                        eax_41 = &eax_41[1]
                        float xmm4_8 =
                            (xmm4_3 + *(edi_5 + edx_9) + xmm2_6 + *esi_18) * 0.300000012f * xmm5_9
                        *ecx_8 = xmm0_35 * 0.300000012f * xmm6_2 + *ecx_8
                        ecx_8 = &ecx_8[1]
                        *edi_5 = xmm4_8 f+ *edi_5
                        edi_5 += 4
                        i_6 = arg3
                        arg3 -= 1
                    while (i_6 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e88a
                case 7
                    if (i_27 == 0)
                        goto label_75cc0f
                    
                    float* ecx_7 = arg2
                    float xmm6_1 = var_11c
                    float xmm7_1 = var_120
                    void* edi_4 = &ecx_7[arg4]
                    float* var_208_1 = arg5 + arg4 * 0x18
                    void* var_204_1 = arg5 + arg4 * 0x1c
                    int32_t* var_200_1 = arg5 + arg4 * 0x14
                    float* var_1f8_2 = arg5 + arg4 * 0xc
                    void* edx_5 = arg5 - ecx_7
                    void* var_20c_2 = arg5 + (arg4 << 3)
                    float* eax_32 = (arg4 << 4) + arg5
                    void* var_1fc_1 = edx_5
                    int32_t i_7
                    
                    do
                        xmm7_1 = xmm7_1 + var_100
                        xmm6_1 = xmm6_1 + var_fc
                        float xmm5_1 = *var_20c_2
                        var_20c_2 += 4
                        float xmm3_3 = *var_1f8_2
                        int32_t* esi_10 = var_200_1
                        var_1f8_2 = &var_1f8_2[1]
                        var_200_1 = &var_200_1[1]
                        int32_t* esi_11 = var_204_1
                        float xmm0_27 = xmm5_1 f+ *(ecx_7 + edx_5) + xmm3_3 + *eax_32
                        eax_32 = &eax_32[1]
                        var_204_1 = &esi_11[1]
                        float xmm0_28 = xmm0_27 + *var_208_1
                        float xmm5_5 = xmm5_1 + *(edi_4 + edx_5) + xmm3_3 + *esi_10 + *esi_11
                        var_208_1 = &var_208_1[1]
                        edx_5 = var_1fc_1
                        *ecx_7 = xmm0_28 * 0.200000003f * xmm7_1 + *ecx_7
                        ecx_7 = &ecx_7[1]
                        *edi_4 = xmm5_5 * 0.200000003f * xmm6_1 f+ *edi_4
                        edi_4 += 4
                        i_7 = arg3
                        arg3 -= 1
                    while (i_7 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e88a
        case 3, 5, 7
            goto label_75e82f
        case 4
            int32_t eax_71 = *(edi + 0x48) - 1
            
            if (eax_71 u> 7)
            label_75de5c:
                result = arg6
                i_8 = 0
            label_75e83c:
                void* edx_62 = edi + 0x160
                
                do
                    edx_62 += 0x10
                    *(edx_62 - 0x14) = *(&var_140 + (i_8 << 2))
                    void var_13c
                    *(edx_62 - 0x10) = *(&var_13c + (i_8 << 2))
                    void var_138
                    *(edx_62 - 0xc) = *(&var_138 + (i_8 << 2))
                    int32_t var_134[0x5]
                    int32_t eax_289 = var_134[i_8]
                    i_8 += 4
                    *(edx_62 - 8) = eax_289
                while (i_8 u< result - 3)
                
                result = arg6
                goto label_75e877
            
            switch (eax_71)
                case 0
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float* ecx_20 = arg2
                    float xmm2_33 = var_114
                    float xmm3_21 = var_118
                    float xmm4_27 = var_11c
                    void* esi_40 = &ecx_20[arg4 * 3]
                    float xmm5_16 = var_120
                    void* edi_17 = &ecx_20[arg4 * 2]
                    void* var_214_5 = &ecx_20[arg4]
                    void* eax_113 = arg5 - ecx_20
                    void* var_1fc_5 = eax_113
                    int32_t i_9
                    
                    do
                        float xmm1_34 = *(eax_113 + ecx_20)
                        xmm3_21 = xmm3_21 + var_f8
                        xmm5_16 = xmm5_16 + var_100
                        xmm4_27 = xmm4_27 + var_fc
                        xmm2_33 = xmm2_33 + var_f4
                        *ecx_20 = xmm5_16 * xmm1_34 + *ecx_20
                        ecx_20 = &ecx_20[1]
                        *var_214_5 = xmm1_34 * xmm4_27 f+ *var_214_5
                        var_214_5 += 4
                        eax_113 = var_1fc_5
                        *edi_17 = xmm1_34 * xmm3_21 f+ *edi_17
                        edi_17 += 4
                        *esi_40 = xmm1_34 * xmm2_33 f+ *esi_40
                        esi_40 += 4
                        i_9 = i_27
                        i_27 -= 1
                    while (i_9 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 1
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float* ecx_19 = arg2
                    float xmm3_20 = var_114
                    float xmm4_26 = var_118
                    float xmm5_15 = var_11c
                    float xmm6_13 = var_120
                    void* edi_16 = &ecx_19[arg4 * 3]
                    void* var_214_4 = &ecx_19[arg4 * 2]
                    void* esi_39 = &ecx_19[arg4]
                    void* eax_105 = arg5 - ecx_19
                    void* var_1fc_4 = eax_105
                    int32_t i_10
                    
                    do
                        float xmm1_31 = *(ecx_19 + eax_105)
                        xmm3_20 = xmm3_20 + var_f4
                        xmm6_13 = xmm6_13 + var_100
                        float xmm2_30 = *(esi_39 + eax_105)
                        xmm5_15 = xmm5_15 + var_fc
                        xmm4_26 = xmm4_26 + var_f8
                        *ecx_19 = xmm6_13 * xmm1_31 + *ecx_19
                        ecx_19 = &ecx_19[1]
                        *esi_39 = xmm2_30 * xmm5_15 f+ *esi_39
                        esi_39 += 4
                        *var_214_4 = xmm1_31 * xmm4_26 f+ *var_214_4
                        var_214_4 += 4
                        eax_105 = var_1fc_4
                        *edi_16 = xmm2_30 * xmm3_20 f+ *edi_16
                        edi_16 += 4
                        i_10 = i_27
                        i_27 -= 1
                    while (i_10 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 2, 4, 6
                    goto label_75de5c
                case 3
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float* ecx_18 = arg2
                    float xmm4_25 = var_114
                    float xmm5_14 = var_118
                    float xmm6_12 = var_11c
                    float xmm7_8 = var_120
                    void* esi_37 = &ecx_18[arg4 * 3]
                    void* edi_15 = &ecx_18[arg4 * 2]
                    void* var_214_3 = &ecx_18[arg4]
                    float* eax_100 = arg5 - ecx_18
                    int32_t i_11
                    
                    do
                        xmm7_8 = xmm7_8 + var_100
                        xmm6_12 = xmm6_12 + var_fc
                        float xmm3_17 = *(esi_37 + eax_100)
                        xmm5_14 = xmm5_14 + var_f8
                        xmm4_25 = xmm4_25 + var_f4
                        float xmm1_29 = *(var_214_3 + eax_100) * xmm6_12
                        float xmm2_28 = *(edi_15 + eax_100) * xmm5_14
                        *ecx_18 = xmm7_8 f* *(eax_100 + ecx_18) + *ecx_18
                        ecx_18 = &ecx_18[1]
                        *var_214_3 = xmm1_29 f+ *var_214_3
                        var_214_3 += 4
                        *edi_15 = xmm2_28 f+ *edi_15
                        edi_15 += 4
                        *esi_37 = xmm3_17 * xmm4_25 f+ *esi_37
                        esi_37 += 4
                        i_11 = arg3
                        arg3 -= 1
                    while (i_11 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 5
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float* ecx_17 = arg2
                    float xmm5_13 = var_114
                    float xmm6_11 = var_118
                    float xmm7_7 = var_11c
                    float xmm1_24 = var_120
                    void* edi_14 = &ecx_17[arg4 * 3]
                    void* var_214_2 = &ecx_17[arg4 * 2]
                    void* var_20c_7 = &ecx_17[arg4]
                    float* var_208_5 = arg5 + arg4 * 0x14
                    float* eax_94 = (arg4 << 4) + arg5
                    void* edx_27 = arg5 - ecx_17
                    void* var_1fc_3 = edx_27
                    int32_t i_12
                    
                    do
                        xmm7_7 = xmm7_7 + var_fc
                        float xmm3_14 = *eax_94
                        float xmm0_113 = var_100 + xmm1_24
                        eax_94 = &eax_94[1]
                        xmm6_11 = xmm6_11 + var_f8
                        xmm5_13 = xmm5_13 + var_f4
                        float xmm4_22 = *var_208_5
                        var_208_5 = &var_208_5[1]
                        float xmm1_27 = (*(var_214_2 + edx_27) f+ *(edi_14 + edx_27)) * 0.699999988f
                        float xmm2_25 = *(var_20c_7 + edx_27) * xmm7_7 + xmm1_27
                        xmm1_24 = xmm0_113
                        *ecx_17 = xmm0_113 f* *(ecx_17 + edx_27) + xmm1_27 + *ecx_17
                        ecx_17 = &ecx_17[1]
                        *var_20c_7 = xmm2_25 f+ *var_20c_7
                        var_20c_7 += 4
                        edx_27 = var_1fc_3
                        *var_214_2 = xmm3_14 * xmm6_11 f+ *var_214_2
                        var_214_2 += 4
                        *edi_14 = xmm4_22 * xmm5_13 f+ *edi_14
                        edi_14 += 4
                        i_12 = arg3
                        arg3 -= 1
                    while (i_12 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 7
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float* ecx_16 = arg2
                    float xmm7_6 = var_114
                    float xmm1_19 = var_118
                    float xmm2_18 = var_11c
                    void* edi_13 = &ecx_16[arg4 * 3]
                    float xmm3_12 = var_120
                    void* var_204_4 = &ecx_16[arg4 * 2]
                    void* var_200_2 = &ecx_16[arg4]
                    int32_t* var_1f8_6 = arg5 + arg4 * 0x1c
                    int32_t* var_20c_6 = arg5 + arg4 * 0x18
                    int32_t* var_208_4 = arg5 + arg4 * 0x14
                    int32_t* eax_86 = (arg4 << 4) + arg5
                    void* edx_22 = arg5 - ecx_16
                    void* var_1fc_2 = edx_22
                    int32_t i_13
                    
                    do
                        float xmm0_105 = var_100 + xmm3_12
                        float xmm3_13 = *eax_86
                        eax_86 = &eax_86[1]
                        xmm7_6 = xmm7_6 + var_f4
                        float xmm0_107 = var_fc + xmm2_18
                        int32_t* esi_28 = var_208_4
                        var_208_4 = &var_208_4[1]
                        int32_t* esi_29 = var_20c_6
                        var_20c_6 = &var_20c_6[1]
                        int32_t* esi_30 = var_1f8_6
                        var_1f8_6 = &var_1f8_6[1]
                        xmm3_12 = xmm0_105
                        float xmm1_23 = (*(edx_22 + var_204_4) f+ *(edx_22 + edi_13)) * 0.699999988f
                        float xmm6_9 = (*esi_30 + *esi_28) * 0.5f * xmm7_6
                        float xmm2_21 = *(edx_22 + var_200_2) * xmm0_107 + xmm1_23
                        xmm1_19 = xmm1_19 + var_f8
                        float xmm4_20 = (*esi_29 + xmm3_13) * 0.5f * xmm1_19
                        *ecx_16 = xmm0_105 f* *(ecx_16 + edx_22) + xmm1_23 + *ecx_16
                        ecx_16 = &ecx_16[1]
                        *var_200_2 = xmm2_21 f+ *var_200_2
                        xmm2_18 = xmm0_107
                        var_200_2 += 4
                        edx_22 = var_1fc_2
                        *var_204_4 = xmm4_20 f+ *var_204_4
                        var_204_4 += 4
                        *edi_13 = xmm6_9 f+ *edi_13
                        edi_13 += 4
                        i_13 = arg3
                        arg3 -= 1
                    while (i_13 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
        case 6
            int32_t eax_117 = *(edi + 0x48) - 1
            
            if (eax_117 u> 7)
                goto label_75de5c
            
            switch (eax_117)
                case 0
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float* ecx_25 = arg2
                    float xmm2_51 = var_110:4.d
                    float xmm3_36 = var_110.d
                    float xmm4_43 = var_114
                    float xmm5_26 = var_118
                    float xmm6_20 = var_11c
                    void* edi_25 = &ecx_25[arg4 * 5]
                    float xmm7_19 = var_120
                    void* esi_59 = &ecx_25[arg4 * 4]
                    void* var_210_10 = &ecx_25[arg4 * 3]
                    void* var_208_9 = &ecx_25[arg4 * 2]
                    int32_t i_28 = arg3
                    void* var_204_10 = &ecx_25[arg4]
                    void* eax_175 = arg5 - ecx_25
                    void* var_1fc_10 = eax_175
                    int32_t i_14
                    
                    do
                        float xmm1_57 = *(ecx_25 + eax_175)
                        xmm7_19 = xmm7_19 + var_100
                        xmm6_20 = xmm6_20 + var_fc
                        void* eax_176 = var_204_10
                        xmm5_26 = xmm5_26 + var_f8
                        xmm4_43 = xmm4_43 + var_f4
                        var_204_10 += 4
                        xmm3_36 = xmm3_36 f+ var_f0.d
                        xmm2_51 = xmm2_51 f+ var_f0:4.d
                        *ecx_25 = xmm7_19 * xmm1_57 + *ecx_25
                        ecx_25 = &ecx_25[1]
                        *eax_176 = xmm1_57 * xmm6_20 f+ *eax_176
                        void* eax_177 = var_208_9
                        var_208_9 += 4
                        *eax_177 = xmm5_26 * xmm1_57 f+ *eax_177
                        *var_210_10 = xmm4_43 * xmm1_57 f+ *var_210_10
                        var_210_10 += 4
                        eax_175 = var_1fc_10
                        *esi_59 = xmm3_36 * xmm1_57 f+ *esi_59
                        esi_59 += 4
                        *edi_25 = xmm2_51 * xmm1_57 f+ *edi_25
                        edi_25 += 4
                        i_14 = i_28
                        i_28 -= 1
                    while (i_14 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 1
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float* ecx_24 = arg2
                    float xmm4_42 = var_110:4.d
                    float xmm5_25 = var_110.d
                    float xmm6_19 = var_114
                    float xmm7_18 = var_118
                    float xmm1_50 = var_11c
                    float xmm2_47 = var_120
                    void* var_210_9 = &ecx_24[arg4 * 5]
                    void* esi_56 = &ecx_24[arg4 * 4]
                    void* var_208_8 = &ecx_24[arg4 * 3]
                    void* var_204_9 = &ecx_24[arg4 * 2]
                    void* edi_24 = &ecx_24[arg4]
                    void* eax_162 = arg5 - ecx_24
                    void* var_1fc_9 = eax_162
                    int32_t i_15
                    
                    do
                        float xmm3_33 = *(edi_24 + eax_162)
                        float xmm0_170 = var_100 + xmm2_47
                        float xmm2_48 = *(eax_162 + ecx_24)
                        float xmm1_51 = xmm1_50 + var_fc
                        xmm7_18 = xmm7_18 + var_f8
                        void* eax_163 = var_204_9
                        var_204_9 += 4
                        xmm6_19 = xmm6_19 + var_f4
                        xmm5_25 = xmm5_25 f+ var_f0.d
                        xmm4_42 = xmm4_42 f+ var_f0:4.d
                        *ecx_24 = xmm0_170 * xmm2_48 + *ecx_24
                        ecx_24 = &ecx_24[1]
                        float xmm1_54 = (xmm3_33 + xmm2_48) * 0.5f
                        *edi_24 = xmm3_33 * xmm1_51 f+ *edi_24
                        edi_24 += 4
                        *eax_163 = xmm1_54 * xmm7_18 f+ *eax_163
                        void* eax_164 = var_208_8
                        var_208_8 += 4
                        *eax_164 = xmm1_54 * xmm6_19 f+ *eax_164
                        float* eax_165 = var_210_9
                        xmm1_50 = xmm1_51
                        *esi_56 = xmm2_48 * xmm5_25 f+ *esi_56
                        esi_56 += 4
                        xmm2_47 = xmm0_170
                        *eax_165 = xmm3_33 * xmm4_42 + *eax_165
                        var_210_9 = &eax_165[1]
                        eax_162 = var_1fc_9
                        i_15 = i_27
                        i_27 -= 1
                    while (i_15 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 2, 4, 6
                    goto label_75de5c
                case 3
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float* ecx_23 = arg2
                    float xmm5_24 = var_110:4.d
                    float xmm6_18 = var_110.d
                    float xmm7_17 = var_114
                    float xmm1_47 = var_118
                    float xmm2_44 = var_11c
                    float xmm3_29 = var_120
                    void* var_204_8 = &ecx_23[arg4 * 5]
                    void* esi_53 = &ecx_23[arg4 * 4]
                    void* edi_22 = &ecx_23[arg4 * 3]
                    void* var_210_8 = &ecx_23[arg4 * 2]
                    void* var_1f8_9 = &ecx_23[arg4]
                    void* eax_151 = arg5 - ecx_23
                    void* var_1fc_8 = eax_151
                    int32_t i_16
                    
                    do
                        float xmm0_150 = var_100 + xmm3_29
                        float xmm4_39 = *(edi_22 + eax_151)
                        xmm7_17 = xmm7_17 + var_f4
                        xmm6_18 = xmm6_18 f+ var_f0.d
                        float xmm1_49 = *(ecx_23 + eax_151)
                        float xmm0_152 = var_fc + xmm2_44
                        float xmm2_45 = *(var_1f8_9 + eax_151)
                        xmm5_24 = xmm5_24 f+ var_f0:4.d
                        float xmm3_30 = *(var_210_8 + eax_151)
                        void* eax_152 = var_1f8_9
                        var_1f8_9 += 4
                        *ecx_23 = xmm0_150 * xmm1_49 + *ecx_23
                        float xmm2_46 = xmm2_45 + xmm1_49
                        ecx_23 = &ecx_23[1]
                        xmm1_47 = xmm1_47 + var_f8
                        *eax_152 = xmm2_45 * xmm0_152 f+ *eax_152
                        void* eax_153 = var_204_8
                        var_204_8 += 4
                        *var_210_8 = xmm2_46 * 0.5f * xmm1_47 f+ *var_210_8
                        xmm2_44 = xmm0_152
                        var_210_8 += 4
                        *edi_22 = (xmm3_30 + xmm2_46 + xmm4_39) * 0.25f * xmm7_17 f+ *edi_22
                        edi_22 += 4
                        *esi_53 = xmm3_30 * xmm6_18 f+ *esi_53
                        esi_53 += 4
                        i_16 = arg3
                        arg3 -= 1
                        xmm3_29 = xmm0_150
                        *eax_153 = xmm4_39 * xmm5_24 f+ *eax_153
                        eax_151 = var_1fc_8
                    while (i_16 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 5
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float* ecx_22 = arg2
                    float xmm6_17 = var_110:4.d
                    float xmm7_16 = var_110.d
                    float xmm1_42 = var_114
                    float xmm2_39 = var_118
                    float xmm3_25 = var_11c
                    void* edi_21 = &ecx_22[arg4 * 5]
                    float xmm4_35 = var_120
                    void* esi_50 = &ecx_22[arg4 * 4]
                    void* var_210_7 = &ecx_22[arg4 * 3]
                    void* var_204_7 = &ecx_22[arg4 * 2]
                    void* var_1f8_8 = &ecx_22[arg4]
                    void* eax_139 = arg5 - ecx_22
                    void* var_1fc_7 = eax_139
                    int32_t i_17
                    
                    do
                        float xmm0_143 = var_100 + xmm4_35
                        float xmm2_40 = xmm2_39 + var_f8
                        float xmm4_36 = *(esi_50 + eax_139)
                        float xmm5_21 = *(edi_21 + eax_139)
                        float xmm0_145 = var_fc + xmm3_25
                        float xmm2_42 = *(var_204_7 + eax_139) * xmm2_40
                        float xmm3_26 = *(var_210_7 + eax_139)
                        void* eax_140 = var_1f8_8
                        float xmm1_45 = *(var_1f8_8 + eax_139) * xmm0_145
                        var_1f8_8 += 4
                        xmm7_16 = xmm7_16 f+ var_f0.d
                        xmm6_17 = xmm6_17 f+ var_f0:4.d
                        *ecx_22 = xmm0_143 f* *(eax_139 + ecx_22) + *ecx_22
                        ecx_22 = &ecx_22[1]
                        *eax_140 = xmm1_45 f+ *eax_140
                        xmm1_42 = xmm1_42 + var_f4
                        *var_204_7 = xmm2_42 f+ *var_204_7
                        xmm2_39 = xmm2_40
                        var_204_7 += 4
                        eax_139 = var_1fc_7
                        *var_210_7 = xmm3_26 * xmm1_42 f+ *var_210_7
                        xmm3_25 = xmm0_145
                        var_210_7 += 4
                        *esi_50 = xmm4_36 * xmm7_16 f+ *esi_50
                        esi_50 += 4
                        xmm4_35 = xmm0_143
                        *edi_21 = xmm5_21 * xmm6_17 f+ *edi_21
                        edi_21 += 4
                        i_17 = arg3
                        arg3 -= 1
                    while (i_17 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 7
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float* ecx_21 = arg2
                    float xmm1_37 = var_110:4.d
                    float xmm2_34 = var_110.d
                    float xmm3_22 = var_114
                    float xmm4_28 = var_118
                    float xmm5_17 = var_11c
                    void* var_204_6 = &ecx_21[arg4 * 3]
                    void* var_200_3 = &ecx_21[arg4 * 2]
                    float xmm6_15 = var_120
                    void* var_1f8_7 = &ecx_21[arg4]
                    void* edi_20 = &ecx_21[arg4 * 4]
                    float* var_20c_8 = arg5 + arg4 * 0x1c
                    void* edx_34 = arg5 - ecx_21
                    int32_t* var_208_6 = arg5 + arg4 * 0x18
                    void* eax_130 = &ecx_21[arg4 * 5]
                    void* var_1fc_6 = edx_34
                    int32_t i_18
                    
                    do
                        float xmm0_136 = var_100 + xmm6_15
                        float xmm4_29 = xmm4_28 + var_f8
                        float xmm3_23 = xmm3_22 + var_f4
                        float xmm0_138 = var_fc + xmm5_17
                        float xmm2_37 = *(var_200_3 + edx_34) * xmm4_29
                        int32_t* esi_44 = var_208_6
                        var_208_6 = &var_208_6[1]
                        float* esi_45 = var_20c_8
                        float xmm1_40 = *(var_1f8_7 + edx_34) * xmm0_138
                        var_20c_8 = &var_20c_8[1]
                        float xmm7_12 = *esi_45 + *(eax_130 + edx_34)
                        void* edx_35 = var_1f8_7
                        float xmm4_31 = *esi_44 + *(edi_20 + edx_34)
                        float xmm5_19 = *(var_204_6 + edx_34) * xmm3_23
                        var_1f8_7 += 4
                        *ecx_21 = xmm0_136 f* *(ecx_21 + edx_34) + *ecx_21
                        ecx_21 = &ecx_21[1]
                        *edx_35 = xmm1_40 f+ *edx_35
                        xmm1_37 = xmm1_37 f+ var_f0:4.d
                        xmm3_22 = xmm3_23
                        xmm6_15 = xmm0_136
                        *var_200_3 = xmm2_37 f+ *var_200_3
                        xmm2_34 = xmm2_34 f+ var_f0.d
                        var_200_3 += 4
                        edx_34 = var_1fc_6
                        *var_204_6 = xmm5_19 f+ *var_204_6
                        xmm5_17 = xmm0_138
                        var_204_6 += 4
                        *edi_20 = xmm4_31 * 0.5f * xmm2_34 f+ *edi_20
                        edi_20 += 4
                        xmm4_28 = xmm4_29
                        *eax_130 = xmm7_12 * 0.5f * xmm1_37 f+ *eax_130
                        eax_130 += 4
                        i_18 = arg3
                        arg3 -= 1
                    while (i_18 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
        case 8
            int32_t eax_181 = *(edi + 0x48) - 1
            
            if (eax_181 u> 7)
                goto label_75e82f
            
            switch (eax_181)
                case 0
                    if (i_27 == 0)
                        goto label_75e82f
                    
                    float xmm7_27 = var_110:0xc.d
                    float xmm2_69 = var_110:8.d
                    float xmm3_51 = var_110:4.d
                    float xmm4_55 = var_110.d
                    float* ecx_35 = arg2
                    float xmm5_38 = var_114
                    float xmm6_31 = var_118
                    float xmm1_79 = var_11c
                    float var_204_15 = var_120
                    void* var_210_15 = &ecx_35[arg4 * 6]
                    float* var_200_8 = &ecx_35[arg4 * 5]
                    float* esi_74 = &ecx_35[arg4 * 4]
                    float* var_1f8_14 = &ecx_35[arg4 * 3]
                    float* var_20c_13 = &ecx_35[arg4 * 2]
                    float* edi_34 = &ecx_35[arg4 * 7]
                    float* var_208_14 = &ecx_35[arg4]
                    void* eax_279 = arg5 - ecx_35
                    void* var_1fc_15 = eax_279
                    int32_t i_19
                    
                    do
                        xmm6_31 = xmm6_31 + var_f8
                        xmm5_38 = xmm5_38 + var_f4
                        xmm4_55 = xmm4_55 f+ var_f0.d
                        xmm3_51 = xmm3_51 f+ var_f0:4.d
                        var_204_15 = var_100 + var_204_15
                        float xmm0_292 = var_fc + xmm1_79
                        float xmm1_80 = *(ecx_35 + eax_279)
                        float* eax_280 = var_208_14
                        xmm2_69 = xmm2_69 f+ var_f0:8.d
                        xmm7_27 = xmm7_27 f+ var_f0:0xc.d
                        var_208_14 = &var_208_14[1]
                        *ecx_35 = var_204_15 * xmm1_80 + *ecx_35
                        ecx_35 = &ecx_35[1]
                        *eax_280 = xmm1_80 * xmm0_292 + *eax_280
                        float* eax_281 = var_20c_13
                        var_20c_13 = &var_20c_13[1]
                        *eax_281 = xmm1_80 * xmm6_31 + *eax_281
                        float* eax_282 = var_1f8_14
                        var_1f8_14 = &var_1f8_14[1]
                        *eax_282 = xmm1_80 * xmm5_38 + *eax_282
                        float* eax_283 = var_200_8
                        var_200_8 = &var_200_8[1]
                        *esi_74 = xmm1_80 * xmm4_55 + *esi_74
                        esi_74 = &esi_74[1]
                        *eax_283 = xmm1_80 * xmm3_51 + *eax_283
                        float* eax_284 = var_210_15
                        *eax_284 = xmm1_80 * xmm2_69 + *eax_284
                        var_210_15 = &eax_284[1]
                        eax_279 = var_1fc_15
                        *edi_34 = xmm1_80 * xmm7_27 + *edi_34
                        edi_34 = &edi_34[1]
                        xmm1_79 = xmm0_292
                        i_19 = i_27
                        i_27 -= 1
                    while (i_19 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 1
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float xmm2_65 = var_110:0xc.d
                    float xmm4_54 = var_110:8.d
                    float xmm5_37 = var_110:4.d
                    float xmm6_30 = var_110.d
                    float* ecx_33 = arg2
                    float xmm7_26 = var_114
                    float xmm1_72 = var_118
                    float xmm3_47 = var_11c
                    float var_204_14 = var_120
                    void* var_210_14 = &ecx_33[arg4 * 7]
                    void* var_200_7 = &ecx_33[arg4 * 6]
                    void* var_1f8_13 = &ecx_33[arg4 * 5]
                    void* esi_71 = &ecx_33[arg4 * 4]
                    void* var_20c_12 = &ecx_33[arg4 * 3]
                    void* var_208_13 = &ecx_33[arg4 * 2]
                    void* edi_32 = &ecx_33[arg4]
                    void* eax_257 = arg5 - ecx_33
                    void* var_1fc_14 = eax_257
                    int32_t i_20
                    
                    do
                        float xmm1_73 = xmm1_72 + var_f8
                        xmm7_26 = xmm7_26 + var_f4
                        xmm6_30 = xmm6_30 f+ var_f0.d
                        xmm5_37 = xmm5_37 f+ var_f0:4.d
                        var_204_14 = var_100 + var_204_14
                        float xmm0_270 = var_fc + xmm3_47
                        float xmm3_48 = *(eax_257 + edi_32)
                        xmm4_54 = xmm4_54 f+ var_f0:8.d
                        float xmm2_66 = *(ecx_33 + eax_257)
                        void* eax_258 = var_208_13
                        var_208_13 += 4
                        float xmm1_76 = (xmm3_48 + xmm2_66) * 0.5f
                        *ecx_33 = var_204_14 * xmm2_66 + *ecx_33
                        ecx_33 = &ecx_33[1]
                        *edi_32 = xmm3_48 * xmm0_270 f+ *edi_32
                        edi_32 += 4
                        *eax_258 = xmm1_76 * xmm1_73 f+ *eax_258
                        void* eax_259 = var_20c_12
                        var_20c_12 += 4
                        *eax_259 = xmm1_76 * xmm7_26 f+ *eax_259
                        void* eax_260 = var_1f8_13
                        var_1f8_13 += 4
                        xmm1_72 = xmm1_73
                        *esi_71 = xmm2_66 * xmm6_30 f+ *esi_71
                        esi_71 += 4
                        *eax_260 = xmm3_48 * xmm5_37 f+ *eax_260
                        void* eax_261 = var_200_7
                        var_200_7 += 4
                        *eax_261 = xmm2_66 * xmm4_54 f+ *eax_261
                        float* eax_262 = var_210_14
                        xmm2_65 = var_f0:0xc.d + xmm2_65
                        *eax_262 = xmm3_48 * xmm2_65 + *eax_262
                        xmm3_47 = xmm0_270
                        var_210_14 = &eax_262[1]
                        eax_257 = var_1fc_14
                        i_20 = i_27
                        i_27 -= 1
                    while (i_20 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 2, 4, 6
                    goto label_75e82f
                case 3
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float xmm6_29 = var_110:4.d
                    float xmm7_25 = var_110.d
                    float xmm1_68 = var_114
                    float xmm2_62 = var_118
                    float xmm3_45 = var_11c
                    int32_t* ecx_31 = arg2
                    float xmm4_52 = var_120
                    void* var_1f8_12 = &ecx_31[arg4 * 7]
                    void* var_208_12 = &ecx_31[arg4 * 6]
                    void* var_204_13 = &ecx_31[arg4 * 5]
                    void* esi_68 = &ecx_31[arg4 * 4]
                    void* edi_30 = &ecx_31[arg4 * 3]
                    void* var_210_13 = &ecx_31[arg4 * 2]
                    float* var_20c_11 = &ecx_31[arg4]
                    float* eax_237 = arg5 - ecx_31
                    float* var_1fc_13 = eax_237
                    int32_t i_21
                    
                    do
                        float xmm0_231 = var_100 + xmm4_52
                        float xmm5_36 = *(eax_237 + edi_30)
                        float xmm2_63 = xmm2_62 + var_f8
                        xmm7_25 = xmm7_25 f+ var_f0.d
                        float xmm0_233 = var_fc + xmm3_45
                        float xmm2_64 = *(ecx_31 + eax_237)
                        float xmm3_46 = *(eax_237 + var_20c_11)
                        float xmm1_71 = xmm3_46 + xmm2_64
                        float xmm4_53 = *(eax_237 + var_210_13)
                        float* eax_238 = var_20c_11
                        xmm6_29 = xmm6_29 f+ var_f0:4.d
                        var_20c_11 = &var_20c_11[1]
                        *ecx_31 = xmm0_231 * xmm2_64 f+ *ecx_31
                        ecx_31 = &ecx_31[1]
                        *eax_238 = xmm3_46 * xmm0_233 + *eax_238
                        void* eax_239 = var_204_13
                        var_204_13 += 4
                        *var_210_13 = xmm1_71 * 0.5f * xmm2_63 f+ *var_210_13
                        xmm1_68 = xmm1_68 + var_f4
                        var_210_13 += 4
                        *edi_30 = (xmm4_53 + xmm1_71 + xmm5_36) * 0.25f * xmm1_68 f+ *edi_30
                        edi_30 += 4
                        xmm2_62 = xmm2_63
                        *esi_68 = (xmm4_53 + xmm2_64) * 0.5f * xmm7_25 f+ *esi_68
                        esi_68 += 4
                        xmm3_45 = xmm0_233
                        *eax_239 = (xmm5_36 + xmm3_46) * 0.5f * xmm6_29 f+ *eax_239
                        void* eax_240 = var_208_12
                        var_208_12 += 4
                        xmm4_52 = xmm0_231
                        *eax_240 = xmm7_25 * xmm4_53 f+ *eax_240
                        void* eax_241 = var_1f8_12
                        var_1f8_12 += 4
                        i_21 = arg3
                        arg3 -= 1
                        *eax_241 = xmm6_29 * xmm5_36 f+ *eax_241
                        eax_237 = var_1fc_13
                    while (i_21 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 5
                    if (i_27 == 0)
                        goto label_75de5c
                    
                    float xmm5_32 = var_110:0xc.d
                    float xmm7_24 = var_110:8.d
                    float xmm1_63 = var_110:4.d
                    float xmm2_57 = var_110.d
                    float* ecx_29 = arg2
                    float xmm3_42 = var_114
                    float xmm4_49 = var_118
                    float xmm6_25 = var_11c
                    float var_204_12 = var_120
                    void* var_200_5 = &ecx_29[arg4 * 7]
                    float* var_208_11 = &ecx_29[arg4 * 6]
                    float* esi_65 = &ecx_29[arg4 * 4]
                    void* var_210_12 = &ecx_29[arg4 * 3]
                    void* var_1f8_11 = &ecx_29[arg4 * 2]
                    void* edi_29 = &ecx_29[arg4 * 5]
                    void* var_20c_10 = &ecx_29[arg4]
                    void* eax_218 = arg5 - ecx_29
                    void* var_1fc_12 = eax_218
                    int32_t i_22
                    
                    do
                        float xmm4_50 = xmm4_49 + var_f8
                        float xmm3_43 = xmm3_42 + var_f4
                        var_204_12 = var_100 + var_204_12
                        float xmm0_211 = var_fc + xmm6_25
                        float xmm4_51 = *(var_20c_10 + eax_218)
                        float xmm6_26 = *(edi_29 + eax_218)
                        float xmm3_44 = *(ecx_29 + eax_218)
                        float xmm5_33 = *(esi_65 + eax_218)
                        float xmm1_66 = *(var_1f8_11 + eax_218) * xmm4_50
                        void* eax_219 = var_20c_10
                        float xmm2_60 = *(var_210_12 + eax_218) * xmm3_43
                        var_20c_10 += 4
                        *ecx_29 = var_204_12 * xmm3_44 + *ecx_29
                        ecx_29 = &ecx_29[1]
                        xmm7_24 = xmm7_24 f+ var_f0:8.d
                        *eax_219 = xmm4_51 * xmm0_211 f+ *eax_219
                        void* eax_220 = var_1f8_11
                        var_1f8_11 += 4
                        xmm3_42 = xmm3_43
                        *eax_220 = xmm1_66 f+ *eax_220
                        xmm1_63 = xmm1_63 f+ var_f0:4.d
                        float* eax_221 = var_208_11
                        var_208_11 = &var_208_11[1]
                        *var_210_12 = xmm2_60 f+ *var_210_12
                        xmm2_57 = xmm2_57 f+ var_f0.d
                        var_210_12 += 4
                        *esi_65 = (xmm5_33 + xmm3_44) * 0.5f * xmm2_57 + *esi_65
                        esi_65 = &esi_65[1]
                        xmm4_49 = xmm4_50
                        *edi_29 = (xmm6_26 + xmm4_51) * 0.5f * xmm1_63 f+ *edi_29
                        edi_29 += 4
                        *eax_221 = xmm5_33 * xmm7_24 + *eax_221
                        void* eax_222 = var_200_5
                        xmm5_32 = var_f0:0xc.d + xmm5_32
                        var_200_5 += 4
                        i_22 = arg3
                        arg3 -= 1
                        *eax_222 = xmm6_26 * xmm5_32 f+ *eax_222
                        xmm6_25 = xmm0_211
                        eax_218 = var_1fc_12
                    while (i_22 != 1)
                    edi = var_21c
                    i_8 = 0
                    result = arg6
                    goto label_75e83c
                case 7
                    if (i_27 != 0)
                        float xmm6_21 = var_110:0xc.d
                        float xmm1_58 = var_110:8.d
                        float xmm2_52 = var_110:4.d
                        float xmm3_37 = var_110.d
                        float* ecx_27 = arg2
                        float xmm4_44 = var_114
                        float xmm5_27 = var_118
                        float xmm7_20 = var_11c
                        float var_204_11 = var_120
                        void* var_210_11 = &ecx_27[arg4 * 6]
                        void* var_208_10 = &ecx_27[arg4 * 5]
                        int32_t* esi_62 = &ecx_27[arg4 * 4]
                        void* var_20c_9 = &ecx_27[arg4 * 3]
                        void* var_200_4 = &ecx_27[arg4 * 2]
                        void* edi_27 = &ecx_27[arg4 * 7]
                        void* var_1f8_10 = &ecx_27[arg4]
                        void* eax_197 = arg5 - ecx_27
                        void* var_1fc_11 = eax_197
                        int32_t i_23
                        
                        do
                            float xmm5_28 = xmm5_27 + var_f8
                            float xmm4_45 = xmm4_44 + var_f4
                            var_204_11 = var_100 + var_204_11
                            float xmm0_201 = var_fc + xmm7_20
                            float xmm7_21 = *(edi_27 + eax_197)
                            float xmm1_61 = *(var_1f8_10 + eax_197) * xmm0_201
                            float xmm3_39 = *(var_20c_9 + eax_197)
                            float xmm5_29 = *(var_208_10 + eax_197)
                            float xmm2_55 = *(var_200_4 + eax_197) * xmm5_28
                            float xmm6_22 = *(var_210_11 + eax_197)
                            float xmm4_46 = *(esi_62 + eax_197)
                            void* eax_198 = var_1f8_10
                            *ecx_27 = var_204_11 f* *(ecx_27 + eax_197) + *ecx_27
                            ecx_27 = &ecx_27[1]
                            var_1f8_10 += 4
                            *eax_198 = xmm1_61 f+ *eax_198
                            void* eax_199 = var_200_4
                            xmm1_58 = xmm1_58 f+ var_f0:8.d
                            var_200_4 += 4
                            *eax_199 = xmm2_55 f+ *eax_199
                            void* eax_200 = var_20c_9
                            xmm2_52 = xmm2_52 f+ var_f0:4.d
                            var_20c_9 += 4
                            *eax_200 = xmm3_39 * xmm4_45 f+ *eax_200
                            xmm3_37 = xmm3_37 f+ var_f0.d
                            *esi_62 = xmm4_46 * xmm3_37 f+ *esi_62
                            esi_62 = &esi_62[1]
                            xmm4_44 = xmm4_45
                            *var_208_10 = xmm5_29 * xmm2_52 f+ *var_208_10
                            xmm5_27 = xmm5_28
                            var_208_10 += 4
                            eax_197 = var_1fc_11
                            *var_210_11 = xmm6_22 * xmm1_58 f+ *var_210_11
                            xmm6_21 = var_f0:0xc.d + xmm6_21
                            var_210_11 += 4
                            *edi_27 = xmm7_21 * xmm6_21 f+ *edi_27
                            edi_27 += 4
                            i_23 = arg3
                            arg3 -= 1
                            xmm7_20 = xmm0_201
                        while (i_23 != 1)
                        edi = var_21c
                    
                    goto label_75de5c
CookieCheckFunction(result)
return result
