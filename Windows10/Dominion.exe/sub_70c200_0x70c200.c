// 函数: sub_70c200
// 地址: 0x70c200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t entry___saved_ebx
int32_t __saved_ebx = entry___saved_ebx
char* eax = sub_708970(arg2, arg9)
char* ecx_1 = *arg2

if (eax == 0)
    eax = arg8

entry___saved_ebx.b = *ecx_1
uint32_t eax_1 = zx.d(entry___saved_ebx.b)
*arg2 = &ecx_1[1]
uint32_t var_10 = eax_1

if (eax_1 u> 6)
    return 0

void* ebx_2
int32_t* esi_3

switch (eax_1)
    case 0
        char* ebx = sub_708970(arg2, arg9)
        int32_t var_14_1
        char* ebx_1
        char* eax_2
        
        if (ebx != 0)
            char* ecx_7 = ebx
            void* edx_6 = &ecx_7[1]
            
            do
                eax_2.b = *ecx_7
                ecx_7 = &ecx_7[1]
            while (eax_2.b != 0)
            
            int32_t eax_5 = data_147ded8
            int32_t eax_6
            
            if (eax_5 == 0)
                eax_6 = malloc(ecx_7 - edx_6 + 1)
            else
                eax_6 = eax_5(ecx_7 - edx_6 + 1, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2b6)
            
            var_14_1 = eax_6
            void* ecx_11 = eax_6 - ebx
            
            do
                eax_6.b = *ebx
                ebx = &ebx[1]
                *(ebx + ecx_11 - 1) = eax_6.b
            while (eax_6.b != 0)
            
            ebx_1 = eax
        else
            ebx_1 = eax
            char* ecx_3 = ebx_1
            void* edx_3 = &ecx_3[1]
            
            do
                eax_2.b = *ecx_3
                ecx_3 = &ecx_3[1]
            while (eax_2.b != 0)
            
            int32_t eax_3 = data_147ded8
            int32_t eax_4
            
            if (eax_3 == 0)
                eax_4 = malloc(ecx_3 - edx_3 + 1)
            else
                eax_4 = eax_3(ecx_3 - edx_3 + 1, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2b3)
            
            var_14_1 = eax_4
            void* edx_5 = eax_4 - ebx_1
            char* ecx_6 = ebx_1
            
            do
                eax_4.b = *ecx_6
                ecx_6 = &ecx_6[1]
                *(edx_5 + ecx_6 - 1) = eax_4.b
            while (eax_4.b != 0)
        int32_t* esi_1 = arg3[1]
        free(*esi_1)
        free(esi_1[1])
        int32_t* eax_7 = esi_1[2]
        *esi_1 = 0
        esi_1[1] = 0
        void* eax_9
        int16_t edx_7
        eax_9, edx_7 = (*eax_7)(esi_1, arg6, var_10, ebx_1, var_14_1)
        *(eax_9 + 0x14) = var_14_1
        char* ecx_12 = *arg2
        ebx_1:1.b = *ecx_12
        *arg2 = &ecx_12[1]
        edx_7.b = ecx_12[1]
        *arg2 = &ecx_12[2]
        uint32_t ecx_14 = zx.d(ebx_1:1.b) << 8
        ebx_1.b = ecx_12[2]
        *arg2 = &ecx_12[3]
        edx_7:1.b = ecx_12[3]
        *arg2 = &ecx_12[4]
        *(eax_9 + 0x28) = ((ecx_14 | zx.d(edx_7.b)) << 8 | zx.d(ebx_1.b)) << 8 | zx.d(edx_7:1.b)
        char* eax_18 = *arg2
        esi_3 = arg3
        uint32_t ecx_19
        ecx_19.b = *eax_18
        *arg2 = &eax_18[1]
        edx_7.b = eax_18[1]
        *arg2 = &eax_18[2]
        ebx_1.b = eax_18[2]
        *arg2 = &eax_18[3]
        edx_7:1.b = eax_18[3]
        *arg2 = &eax_18[4]
        *(eax_9 + 0x18) = (((zx.d(ecx_19.b) << 8 | zx.d(edx_7.b)) << 8 | zx.d(ebx_1.b)) << 8
            | zx.d(edx_7:1.b)) f* *esi_3
        char* eax_27 = *arg2
        uint32_t ecx_26
        ecx_26.b = *eax_27
        *arg2 = &eax_27[1]
        edx_7.b = eax_27[1]
        *arg2 = &eax_27[2]
        ebx_1.b = eax_27[2]
        *arg2 = &eax_27[3]
        edx_7:1.b = eax_27[3]
        *arg2 = &eax_27[4]
        *(eax_9 + 0x1c) = (((zx.d(ecx_26.b) << 8 | zx.d(edx_7.b)) << 8 | zx.d(ebx_1.b)) << 8
            | zx.d(edx_7:1.b)) f* *esi_3
        char* eax_36 = *arg2
        uint32_t ecx_33
        ecx_33.b = *eax_36
        *arg2 = &eax_36[1]
        edx_7.b = eax_36[1]
        *arg2 = &eax_36[2]
        ebx_1.b = eax_36[2]
        *arg2 = &eax_36[3]
        edx_7:1.b = eax_36[3]
        *arg2 = &eax_36[4]
        *(eax_9 + 0x20) =
            ((zx.d(ecx_33.b) << 8 | zx.d(edx_7.b)) << 8 | zx.d(ebx_1.b)) << 8 | zx.d(edx_7:1.b)
        char* eax_45 = *arg2
        uint32_t ecx_40
        ecx_40.b = *eax_45
        *arg2 = &eax_45[1]
        edx_7.b = eax_45[1]
        *arg2 = &eax_45[2]
        ebx_1.b = eax_45[2]
        *arg2 = &eax_45[3]
        edx_7:1.b = eax_45[3]
        *arg2 = &eax_45[4]
        *(eax_9 + 0x24) =
            ((zx.d(ecx_40.b) << 8 | zx.d(edx_7.b)) << 8 | zx.d(ebx_1.b)) << 8 | zx.d(edx_7:1.b)
        char* eax_54 = *arg2
        uint32_t ecx_47
        ecx_47.b = *eax_54
        *arg2 = &eax_54[1]
        edx_7.b = eax_54[1]
        *arg2 = &eax_54[2]
        ebx_1.b = eax_54[2]
        *arg2 = &eax_54[3]
        edx_7:1.b = eax_54[3]
        *arg2 = &eax_54[4]
        *(eax_9 + 0x2c) = (((zx.d(ecx_47.b) << 8 | zx.d(edx_7.b)) << 8 | zx.d(ebx_1.b)) << 8
            | zx.d(edx_7:1.b)) f* *esi_3
        char* eax_63 = *arg2
        uint32_t ecx_54
        ecx_54.b = *eax_63
        *arg2 = &eax_63[1]
        edx_7.b = eax_63[1]
        *arg2 = &eax_63[2]
        ebx_1.b = eax_63[2]
        *arg2 = &eax_63[3]
        edx_7:1.b = eax_63[3]
        *arg2 = &eax_63[4]
        ebx_2 = eax_9
        *(ebx_2 + 0x30) = (((zx.d(ecx_54.b) << 8 | zx.d(edx_7.b)) << 8 | zx.d(ebx_1.b)) << 8
            | zx.d(edx_7:1.b)) f* *esi_3
        char* eax_71 = *arg2
        uint32_t ecx_61
        ecx_61.b = *eax_71
        *arg2 = &eax_71[1]
        *(ebx_2 + 0x34) = _mm_cvtepi32_ps(zx.o(ecx_61.b)) / 255f
        char* eax_74 = *arg2
        ecx_61.b = *eax_74
        *arg2 = &eax_74[1]
        *(ebx_2 + 0x38) = _mm_cvtepi32_ps(zx.o(ecx_61.b)) / 255f
        char* eax_77 = *arg2
        ecx_61.b = *eax_77
        *arg2 = &eax_77[1]
        *(ebx_2 + 0x3c) = _mm_cvtepi32_ps(zx.o(ecx_61.b)) / 255f
        char* eax_80 = *arg2
        ecx_61.b = *eax_80
        *arg2 = &eax_80[1]
        float xmm5_1 = *(ebx_2 + 0x2c)
        float xmm3_1 = *(ebx_2 + 0x30)
        uint128_t xmm7_1 = zx.o(*(ebx_2 + 0x48))
        float xmm0_23 = _mm_cvtepi32_ps(zx.o(ecx_61.b)) / 255f
        float xmm5_3 = xmm5_1 * 0.5f f* *(ebx_2 + 0x20)
        *(ebx_2 + 0x40) = xmm0_23
        float xmm0_25 = _mm_cvtepi32_ps(zx.o(*(ebx_2 + 0x58)))
        uint128_t xmm2_1 = zx.o(*(ebx_2 + 0x4c))
        float xmm6_3 = xmm5_1 / xmm0_25 f* *(ebx_2 + 0x20)
        float xmm4_3 = xmm3_1 / _mm_cvtepi32_ps(zx.o(*(ebx_2 + 0x5c))) f* *(ebx_2 + 0x24)
        float xmm3_3 = xmm3_1 * 0.5f f* *(ebx_2 + 0x24)
        float xmm0_29 = _mm_cvtepi32_ps(zx.o(*(ebx_2 + 0x50)))
        float xmm7_4 = _mm_cvtepi32_ps(xmm7_1) * xmm6_3 - xmm5_3
        float xmm0_31 = xmm0_29 * xmm6_3 + xmm7_4
        float xmm2_4 = _mm_cvtepi32_ps(xmm2_1) * xmm4_3 - xmm3_3
        float xmm0_35 = _mm_cvtepi32_ps(zx.o(*(ebx_2 + 0x54))) * xmm4_3 + xmm2_4
        double xmm0_38 = _mm_cvtps_pd(*(ebx_2 + 0x28) * 0.0174532924f)
        _libm_sse2_cos_precise(arg5, arg4.w, __saved_ebx)
        float xmm0_39 = fconvert.s(xmm0_38)
        _libm_sse2_sin_precise()
        float xmm5_6 = xmm0_39 * xmm7_4 f+ *(ebx_2 + 0x18)
        float xmm6_6 = xmm0_39 * xmm2_4 f+ *(ebx_2 + 0x1c)
        float xmm7_7 = xmm0_39 * xmm0_35 f+ *(ebx_2 + 0x1c)
        float xmm4_4 = fconvert.s(xmm0_38)
        float xmm2_7 = xmm0_39 * xmm0_31 f+ *(ebx_2 + 0x18)
        float xmm4_5 = xmm4_4 * xmm2_4
        float xmm3_5 = xmm4_4 * xmm7_4
        float xmm1_2 = xmm4_4 * xmm0_31
        float xmm7_9 = xmm4_4 * xmm0_35
        *(ebx_2 + 0x60) = xmm5_6 - xmm4_5
        *(ebx_2 + 0x64) = xmm6_6 + xmm3_5
        *(ebx_2 + 0x68) = xmm5_6 - xmm7_9
        *(ebx_2 + 0x74) = xmm7_7 + xmm1_2
        *(ebx_2 + 0x6c) = xmm7_7 + xmm3_5
        *(ebx_2 + 0x7c) = xmm1_2 + xmm6_6
        *(ebx_2 + 0x70) = xmm2_7 - xmm7_9
        *(ebx_2 + 0x78) = xmm2_7 - xmm4_5
    label_70c718:
        void* ecx_62 = esi_3[1]
        int32_t eax_84 = *(*(ecx_62 + 8) + 4)
        
        if (eax_84 != 0)
            eax_84(ecx_62, ebx_2)
        
        return ebx_2
    case 1
        eax_1.b = ecx_1[1]
        void* edx_8 = &ecx_1[2]
        int32_t ebx_4 = zx.d(eax_1.b) & 0x7f
        *arg2 = edx_8
        int32_t var_14_3 = ebx_4
        
        if (eax_1.b s< 0)
            ecx_1.b = *edx_8
            *arg2 = edx_8 + 1
            int32_t ebx_5 = ebx_4 | (zx.d(ecx_1.b) & 0x7f) << 7
            var_14_3 = ebx_5
            
            if (ecx_1.b s< 0)
                ecx_1.b = *(edx_8 + 1)
                *arg2 = edx_8 + 2
                int32_t ebx_6 = ebx_5 | (zx.d(ecx_1.b) & 0x7f) << 0xe
                var_14_3 = ebx_6
                
                if (ecx_1.b s< 0)
                    ecx_1.b = *(edx_8 + 2)
                    *arg2 = edx_8 + 3
                    int32_t ebx_7 = ebx_6 | (zx.d(ecx_1.b) & 0x7f) << 0x15
                    var_14_3 = ebx_7
                    
                    if (ecx_1.b s< 0)
                        ecx_1.b = *(edx_8 + 3)
                        *arg2 = edx_8 + 4
                        var_14_3 = ebx_7 | zx.d(ecx_1.b) << 0x1c
        
        int32_t* esi_4 = arg3[1]
        free(*esi_4)
        free(esi_4[1])
        int32_t* eax_98 = esi_4[2]
        *esi_4 = 0
        esi_4[1] = 0
        void* eax_100 = (*eax_98)(esi_4, arg6, var_10, eax, 0)
        esi_3 = arg3
        ebx_2 = eax_100
        sub_70bd10(eax_100, arg2, esi_3, ebx_2, var_14_3)
        
        if (arg10 != 0)
            *arg2 += 4
        
        goto label_70c718
    case 2
        char* ebx_10 = sub_708970(arg2, arg9)
        int32_t var_14_4
        char* ebx_11
        char* eax_101
        
        if (ebx_10 != 0)
            char* ecx_69 = ebx_10
            void* edx_17 = &ecx_69[1]
            
            do
                eax_101.b = *ecx_69
                ecx_69 = &ecx_69[1]
            while (eax_101.b != 0)
            
            int32_t eax_104 = data_147ded8
            int32_t eax_105
            
            if (eax_104 == 0)
                eax_105 = malloc(ecx_69 - edx_17 + 1)
            else
                eax_105 = eax_104(ecx_69 - edx_17 + 1, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2d8)
            
            var_14_4 = eax_105
            void* ecx_73 = eax_105 - ebx_10
            
            do
                eax_105.b = *ebx_10
                ebx_10 = &ebx_10[1]
                *(ebx_10 + ecx_73 - 1) = eax_105.b
            while (eax_105.b != 0)
            
            ebx_11 = eax
        else
            ebx_11 = eax
            char* ecx_65 = ebx_11
            void* edx_14 = &ecx_65[1]
            
            do
                eax_101.b = *ecx_65
                ecx_65 = &ecx_65[1]
            while (eax_101.b != 0)
            
            int32_t eax_102 = data_147ded8
            int32_t eax_103
            
            if (eax_102 == 0)
                eax_103 = malloc(ecx_65 - edx_14 + 1)
            else
                eax_103 = eax_102(ecx_65 - edx_14 + 1, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2d5)
            
            var_14_4 = eax_103
            void* edx_16 = eax_103 - ebx_11
            char* ecx_68 = ebx_11
            
            do
                eax_103.b = *ecx_68
                ecx_68 = &ecx_68[1]
                *(ecx_68 + edx_16 - 1) = eax_103.b
            while (eax_103.b != 0)
        int32_t* esi_5 = arg3[1]
        free(*esi_5)
        free(esi_5[1])
        int32_t* eax_106 = esi_5[2]
        *esi_5 = 0
        esi_5[1] = 0
        ebx_2 = (*eax_106)(esi_5, arg6, var_10, ebx_11, var_14_4)
        void* var_18_10 = ebx_2
        *(ebx_2 + 0x64) = var_14_4
        char* ecx_74 = *arg2
        char edx_18 = *ecx_74
        *arg2 = &ecx_74[1]
        *(ebx_2 + 0x78) = _mm_cvtepi32_ps(zx.o(edx_18)) / 255f
        char* eax_110 = *arg2
        uint32_t ecx_76
        ecx_76.b = *eax_110
        *arg2 = &eax_110[1]
        *(ebx_2 + 0x7c) = _mm_cvtepi32_ps(zx.o(ecx_76.b)) / 255f
        char* eax_113 = *arg2
        ecx_76.b = *eax_113
        *arg2 = &eax_113[1]
        *(ebx_2 + 0x80) = _mm_cvtepi32_ps(zx.o(ecx_76.b)) / 255f
        char* eax_116 = *arg2
        ecx_76.b = *eax_116
        *arg2 = &eax_116[1]
        *(ebx_2 + 0x84) = _mm_cvtepi32_ps(zx.o(ecx_76.b)) / 255f
        char* eax_119 = *arg2
        ecx_76.b = *eax_119
        int32_t esi_7 = zx.d(ecx_76.b) & 0x7f
        *arg2 = &eax_119[1]
        
        if (ecx_76.b s< 0)
            ecx_76.b = eax_119[1]
            *arg2 = &eax_119[2]
            esi_7 |= (zx.d(ecx_76.b) & 0x7f) << 7
            
            if (ecx_76.b s< 0)
                ecx_76.b = eax_119[2]
                *arg2 = &eax_119[3]
                esi_7 |= (zx.d(ecx_76.b) & 0x7f) << 0xe
                
                if (ecx_76.b s< 0)
                    ecx_76.b = eax_119[3]
                    *arg2 = &eax_119[4]
                    esi_7 |= (zx.d(ecx_76.b) & 0x7f) << 0x15
                    
                    if (ecx_76.b s< 0)
                        ecx_76.b = eax_119[4]
                        *arg2 = &eax_119[5]
                        esi_7 |= zx.d(ecx_76.b) << 0x1c
        
        *(ebx_2 + 0x68) = sub_70bb10(arg2, esi_7 * 2, 1f)
        int32_t eax_133 = sub_70bc30(arg2, ebx_2 + 0x70)
        esi_3 = arg3
        *(ebx_2 + 0x74) = eax_133
        sub_70bd10(eax_133, arg2, esi_3, ebx_2, esi_7)
        sub_753020(ebx_2)
        char* eax_134 = *arg2
        char ecx_81 = *eax_134
        int32_t eax_136 = zx.d(ecx_81) & 0x7f
        *arg2 = &eax_134[1]
        
        if (ecx_81 s< 0)
            ecx_81 = eax_134[1]
            *arg2 = &eax_134[2]
            int32_t var_8_3 = eax_136 | (zx.d(ecx_81) & 0x7f) << 7
            
            if (ecx_81 s< 0)
                ecx_81 = eax_134[2]
                *arg2 = &eax_134[3]
                var_8_3 |= (zx.d(ecx_81) & 0x7f) << 0xe
                
                if (ecx_81 s< 0)
                    ecx_81 = eax_134[3]
                    *arg2 = &eax_134[4]
                    var_8_3 |= (zx.d(ecx_81) & 0x7f) << 0x15
                    
                    if (ecx_81 s< 0)
                        ecx_81 = eax_134[4]
                        *arg2 = &eax_134[5]
                        var_8_3 |= zx.d(ecx_81) << 0x1c
            
            eax_136 = var_8_3
        
        *(ebx_2 + 0x88) = eax_136 * 2
        
        if (arg10 == 0)
            *(ebx_2 + 0x94) = 0
            *(ebx_2 + 0x98) = 0
            *(ebx_2 + 0x9c) = 0
        else
            int32_t eax_150
            int16_t edx_31
            eax_150, edx_31 = sub_70bc30(arg2, ebx_2 + 0x90)
            *(ebx_2 + 0x94) = eax_150
            char* eax_151 = *arg2
            char ecx_83 = *eax_151
            *arg2 = &eax_151[1]
            edx_31.b = eax_151[1]
            *arg2 = &eax_151[2]
            ebx_2.b = eax_151[2]
            *arg2 = &eax_151[3]
            edx_31:1.b = eax_151[3]
            *arg2 = &eax_151[4]
            *(var_18_10 + 0x98) = (((zx.d(ecx_83) << 8 | zx.d(edx_31.b)) << 8 | zx.d(ebx_2.b)) << 8
                | zx.d(edx_31:1.b)) f* *esi_3
            char* eax_160 = *arg2
            uint32_t ecx_90
            ecx_90.b = *eax_160
            *arg2 = &eax_160[1]
            edx_31.b = eax_160[1]
            *arg2 = &eax_160[2]
            ebx_2.b = eax_160[2]
            *arg2 = &eax_160[3]
            edx_31:1.b = eax_160[3]
            *arg2 = &eax_160[4]
            uint32_t eax_166 = zx.d(ebx_2.b)
            ebx_2 = var_18_10
            *(ebx_2 + 0x9c) = (((zx.d(ecx_90.b) << 8 | zx.d(edx_31.b)) << 8 | eax_166) << 8
                | zx.d(edx_31:1.b)) f* *esi_3
        
        goto label_70c718
    case 3
        char* ebx_12 = sub_708970(arg2, arg9)
        int32_t var_14_5
        char* ebx_13
        char* eax_168
        
        if (ebx_12 != 0)
            char* ecx_103 = ebx_12
            void* edx_36 = &ecx_103[1]
            
            do
                eax_168.b = *ecx_103
                ecx_103 = &ecx_103[1]
            while (eax_168.b != 0)
            
            int32_t eax_171 = data_147ded8
            int32_t eax_172
            
            if (eax_171 == 0)
                eax_172 = malloc(ecx_103 - edx_36 + 1)
            else
                eax_172 = eax_171(ecx_103 - edx_36 + 1, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2fb)
            
            var_14_5 = eax_172
            void* ecx_107 = eax_172 - ebx_12
            
            do
                eax_172.b = *ebx_12
                ebx_12 = &ebx_12[1]
                *(ebx_12 + ecx_107 - 1) = eax_172.b
            while (eax_172.b != 0)
            
            ebx_13 = eax
        else
            ebx_13 = eax
            char* ecx_99 = ebx_13
            void* edx_33 = &ecx_99[1]
            
            do
                eax_168.b = *ecx_99
                ecx_99 = &ecx_99[1]
            while (eax_168.b != 0)
            
            int32_t eax_169 = data_147ded8
            int32_t eax_170
            
            if (eax_169 == 0)
                eax_170 = malloc(ecx_99 - edx_33 + 1)
            else
                eax_170 = eax_169(ecx_99 - edx_33 + 1, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x2f8)
            
            var_14_5 = eax_170
            void* edx_35 = eax_170 - ebx_13
            char* ecx_102 = ebx_13
            
            do
                eax_170.b = *ecx_102
                ecx_102 = &ecx_102[1]
                *(ecx_102 + edx_35 - 1) = eax_170.b
            while (eax_170.b != 0)
        int32_t* esi_8 = arg3[1]
        free(*esi_8)
        free(esi_8[1])
        int32_t* eax_173 = esi_8[2]
        *esi_8 = 0
        esi_8[1] = 0
        void* ebx_14 = (*eax_173)(esi_8, arg6, var_10, ebx_13, var_14_5)
        void* var_18_11 = ebx_14
        *(ebx_14 + 0x64) = var_14_5
        char* ecx_108 = *arg2
        char edx_37 = *ecx_108
        *arg2 = &ecx_108[1]
        *(ebx_14 + 0x78) = _mm_cvtepi32_ps(zx.o(edx_37)) / 255f
        char* eax_177 = *arg2
        uint32_t ecx_110
        ecx_110.b = *eax_177
        *arg2 = &eax_177[1]
        *(ebx_14 + 0x7c) = _mm_cvtepi32_ps(zx.o(ecx_110.b)) / 255f
        char* eax_180 = *arg2
        ecx_110.b = *eax_180
        *arg2 = &eax_180[1]
        *(ebx_14 + 0x80) = _mm_cvtepi32_ps(zx.o(ecx_110.b)) / 255f
        char* eax_183 = *arg2
        ecx_110.b = *eax_183
        *arg2 = &eax_183[1]
        *(ebx_14 + 0x84) = _mm_cvtepi32_ps(zx.o(ecx_110.b)) / 255f
        int32_t eax_186 = sub_708970(arg2, arg9)
        int32_t eax_187
        int16_t edx_40
        eax_187, edx_40 = sub_708970(arg2, arg9)
        char* ecx_113 = *arg2
        edx_40.b = *ecx_113
        *arg2 = &ecx_113[1]
        int32_t ecx_114
        ecx_114.b = edx_40.b != 0
        int32_t var_20_1 = ecx_114
        
        if (arg10 != 0)
            ecx_114.b = ecx_113[1]
            *arg2 = &ecx_113[2]
            edx_40.b = ecx_113[2]
            *arg2 = &ecx_113[3]
            ebx_14.b = ecx_113[3]
            *arg2 = &ecx_113[4]
            edx_40:1.b = ecx_113[4]
            *arg2 = &ecx_113[5]
            *(var_18_11 + 0x98) = (
                ((zx.d(ecx_114.b) << 8 | zx.d(edx_40.b)) << 8 | zx.d(ebx_14.b)) << 8
                | zx.d(edx_40:1.b)) f* *arg3
            char* eax_197 = *arg2
            uint32_t ecx_121
            ecx_121.b = *eax_197
            *arg2 = &eax_197[1]
            edx_40.b = eax_197[1]
            *arg2 = &eax_197[2]
            ebx_14.b = eax_197[2]
            *arg2 = &eax_197[3]
            edx_40:1.b = eax_197[3]
            *arg2 = &eax_197[4]
            uint32_t eax_203 = zx.d(ebx_14.b)
            ebx_14 = var_18_11
            *(ebx_14 + 0x9c) = (((zx.d(ecx_121.b) << 8 | zx.d(edx_40.b)) << 8 | eax_203) << 8
                | zx.d(edx_40:1.b)) f* *arg3
        
        int32_t eax_205 = arg3[5]
        void* var_18_12 = &arg3[4]
        
        if (arg3[4] == eax_205)
            int32_t eax_206 = eax_205 * 2
            arg3[5] = eax_206
            
            if (eax_206 s< 8)
                arg3[5] = 8
                eax_206 = 8
                var_18_12 = &arg3[4]
            
            int32_t ecx_130 = data_147ded8
            int32_t _Size = eax_206 * 0x14
            int32_t var_14_6
            int32_t ecx_131
            
            if (ecx_130 == 0)
                int32_t eax_209 = malloc(_Size)
                var_14_6 = eax_209
                ecx_131 = eax_209
            else
                ecx_131 = ecx_130(_Size, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0xea, 
                    arg5, arg4, __saved_ebx)
                var_14_6 = ecx_131
            
            memcpy(ecx_131, arg3[6], arg3[4] * 0x14)
            free(arg3[6])
            arg3[6] = var_14_6
        
        int32_t eax_214 = arg3[4]
        int32_t ecx_132 = arg3[6]
        int32_t edx_41 = eax_214 * 5
        *var_18_12 = eax_214 + 1
        *(ecx_132 + (edx_41 << 2) + 4) = eax_186
        *(ecx_132 + (edx_41 << 2) + 8) = arg7
        *(ecx_132 + (edx_41 << 2)) = eax_187
        *(ecx_132 + (edx_41 << 2) + 0x10) = var_20_1
        *(ecx_132 + (edx_41 << 2) + 0xc) = ebx_14
        return ebx_14
    case 4
        int32_t* esi_11 = arg3[1]
        free(*esi_11)
        free(esi_11[1])
        int32_t* eax_221 = esi_11[2]
        *esi_11 = 0
        esi_11[1] = 0
        void* eax_223 = (*eax_221)(esi_11, arg6, var_10, eax, 0)
        char* ecx_133 = *arg2
        ebx_2 = eax_223
        void* var_1c_6 = ebx_2
        char edx_42 = *ecx_133
        *arg2 = &ecx_133[1]
        int32_t ecx_135
        ecx_135.b = edx_42 != 0
        *(ebx_2 + 0x38) = ecx_135
        char* eax_224 = *arg2
        ecx_135.b = *eax_224
        *arg2 = &eax_224[1]
        int32_t eax_226
        eax_226.b = ecx_135.b != 0
        *(ebx_2 + 0x3c) = eax_226
        char* eax_227 = *arg2
        ecx_135.b = *eax_227
        int32_t esi_13 = zx.d(ecx_135.b) & 0x7f
        *arg2 = &eax_227[1]
        int32_t var_14_7 = esi_13
        
        if (ecx_135.b s< 0)
            ecx_135.b = eax_227[1]
            void* edx_44 = &eax_227[2]
            *arg2 = edx_44
            eax_227 = (zx.d(ecx_135.b) & 0x7f) << 7
            esi_13 |= eax_227
            var_14_7 = esi_13
            
            if (ecx_135.b s< 0)
                ecx_135.b = *edx_44
                *arg2 = edx_44 + 1
                eax_227 = (zx.d(ecx_135.b) & 0x7f) << 0xe
                esi_13 |= eax_227
                var_14_7 = esi_13
                
                if (ecx_135.b s< 0)
                    ecx_135.b = *(edx_44 + 1)
                    *arg2 = edx_44 + 2
                    eax_227 = (zx.d(ecx_135.b) & 0x7f) << 0x15
                    esi_13 |= eax_227
                    var_14_7 = esi_13
                    
                    if (ecx_135.b s< 0)
                        ecx_135.b = *(edx_44 + 2)
                        *arg2 = edx_44 + 3
                        eax_227 = zx.d(ecx_135.b) << 0x1c
                        esi_13 |= eax_227
                        var_14_7 = esi_13
        
        esi_3 = arg3
        sub_70bd10(eax_227, arg2, esi_3, ebx_2, esi_13)
        int32_t ecx_137 = data_147ded8
        int32_t eax_239 = var_14_7 s/ 3
        *(ebx_2 + 0x30) = eax_239
        int32_t _Size_1 = eax_239 << 2
        int32_t eax_240
        int32_t i
        int16_t edx_49
        
        if (ecx_137 == 0)
            eax_240, edx_49, i = malloc(_Size_1)
        else
            eax_240, edx_49, i = ecx_137(_Size_1, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x315)
        
        bool cond:1_1 = *(ebx_2 + 0x30) s<= 0
        *(ebx_2 + 0x34) = eax_240
        int32_t i_1 = 0
        
        if (not(cond:1_1))
            do
                char* eax_241 = *arg2
                i.b = *eax_241
                *arg2 = &eax_241[1]
                edx_49:1.b = eax_241[1]
                *arg2 = &eax_241[2]
                edx_49.b = eax_241[2]
                *arg2 = &eax_241[3]
                ebx_2.b = eax_241[3]
                *arg2 = &eax_241[4]
                uint32_t eax_248 = zx.d(ebx_2.b)
                ebx_2 = var_1c_6
                *(*(ebx_2 + 0x34) + (i_1 << 2)) =
                    (((zx.d(i.b) << 8 | zx.d(edx_49:1.b)) << 8 | zx.d(edx_49.b)) << 8 | eax_248) f*
                    *esi_3
                i = i_1 + 1
                i_1 = i
            while (i s< *(ebx_2 + 0x30))
        
        if (arg10 != 0)
            *arg2 += 4
        
        goto label_70c718
    case 5
        int32_t* esi_14 = arg3[1]
        free(*esi_14)
        free(esi_14[1])
        int32_t* eax_250 = esi_14[2]
        *esi_14 = 0
        esi_14[1] = 0
        void* eax_252
        int16_t edx_50
        eax_252, edx_50 = (*eax_250)(esi_14, arg6, var_10, eax, 0)
        char* ecx_146 = *arg2
        char* ebx_16
        ebx_16:1.b = *ecx_146
        *arg2 = &ecx_146[1]
        edx_50.b = ecx_146[1]
        *arg2 = &ecx_146[2]
        uint32_t ecx_148 = zx.d(ebx_16:1.b) << 8
        ebx_16.b = ecx_146[2]
        *arg2 = &ecx_146[3]
        edx_50:1.b = ecx_146[3]
        *arg2 = &ecx_146[4]
        *(eax_252 + 0x1c) =
            ((ecx_148 | zx.d(edx_50.b)) << 8 | zx.d(ebx_16.b)) << 8 | zx.d(edx_50:1.b)
        char* eax_260 = *arg2
        esi_3 = arg3
        uint32_t ecx_153
        ecx_153.b = *eax_260
        *arg2 = &eax_260[1]
        edx_50.b = eax_260[1]
        *arg2 = &eax_260[2]
        ebx_16.b = eax_260[2]
        *arg2 = &eax_260[3]
        edx_50:1.b = eax_260[3]
        *arg2 = &eax_260[4]
        *(eax_252 + 0x14) = (((zx.d(ecx_153.b) << 8 | zx.d(edx_50.b)) << 8 | zx.d(ebx_16.b)) << 8
            | zx.d(edx_50:1.b)) f* *esi_3
        char* eax_269 = *arg2
        uint32_t ecx_160
        ecx_160.b = *eax_269
        *arg2 = &eax_269[1]
        edx_50.b = eax_269[1]
        *arg2 = &eax_269[2]
        ebx_16.b = eax_269[2]
        *arg2 = &eax_269[3]
        edx_50:1.b = eax_269[3]
        *arg2 = &eax_269[4]
        ebx_2 = eax_252
        *(ebx_2 + 0x18) = (((zx.d(ecx_160.b) << 8 | zx.d(edx_50.b)) << 8 | zx.d(ebx_16.b)) << 8
            | zx.d(edx_50:1.b)) f* *esi_3
        
        if (arg10 != 0)
            char* eax_277 = *arg2
            uint32_t ecx_167
            ecx_167.b = *eax_277
            *arg2 = &eax_277[1]
            *(ebx_2 + 0x20) = _mm_cvtepi32_ps(zx.o(ecx_167.b)) / 255f
            char* eax_280 = *arg2
            ecx_167.b = *eax_280
            *arg2 = &eax_280[1]
            *(ebx_2 + 0x24) = _mm_cvtepi32_ps(zx.o(ecx_167.b)) / 255f
            char* eax_283 = *arg2
            ecx_167.b = *eax_283
            *arg2 = &eax_283[1]
            *(ebx_2 + 0x28) = _mm_cvtepi32_ps(zx.o(ecx_167.b)) / 255f
            char* eax_286 = *arg2
            ecx_167.b = *eax_286
            *arg2 = &eax_286[1]
            *(ebx_2 + 0x2c) = _mm_cvtepi32_ps(zx.o(ecx_167.b)) / 255f
        
        goto label_70c718
    case 6
        eax_1.b = ecx_1[1]
        void* ecx_168 = &ecx_1[2]
        int32_t ebx_18 = zx.d(eax_1.b) & 0x7f
        *arg2 = &ecx_1[2]
        int32_t var_18_14 = ebx_18
        
        if (eax_1.b s< 0)
            ecx_168.b = ecx_1[2]
            void* edx_52 = &ecx_1[3]
            *arg2 = edx_52
            int32_t ebx_19 = ebx_18 | (zx.d(ecx_168.b) & 0x7f) << 7
            var_18_14 = ebx_19
            
            if (ecx_168.b s>= 0)
                ecx_168 = edx_52
            else
                ecx_168.b = *edx_52
                edx_52 += 1
                *arg2 = edx_52
                int32_t ebx_20 = ebx_19 | (zx.d(ecx_168.b) & 0x7f) << 0xe
                var_18_14 = ebx_20
                
                if (ecx_168.b s>= 0)
                    ecx_168 = edx_52
                else
                    ecx_168.b = *edx_52
                    edx_52 += 1
                    *arg2 = edx_52
                    int32_t ebx_21 = ebx_20 | (zx.d(ecx_168.b) & 0x7f) << 0x15
                    var_18_14 = ebx_21
                    
                    if (ecx_168.b s>= 0)
                        ecx_168 = edx_52
                    else
                        eax_1.b = *edx_52
                        ecx_168 = edx_52 + 1
                        *arg2 = ecx_168
                        var_18_14 = ebx_21 | zx.d(eax_1.b) << 0x1c
        
        eax_1.b = *ecx_168
        void* edx_53 = ecx_168 + 1
        int32_t ebx_24 = zx.d(eax_1.b) & 0x7f
        *arg2 = edx_53
        int32_t var_14_8 = ebx_24
        
        if (eax_1.b s< 0)
            ecx_168.b = *edx_53
            *arg2 = edx_53 + 1
            int32_t ebx_25 = ebx_24 | (zx.d(ecx_168.b) & 0x7f) << 7
            var_14_8 = ebx_25
            
            if (ecx_168.b s< 0)
                ecx_168.b = *(edx_53 + 1)
                *arg2 = edx_53 + 2
                int32_t ebx_26 = ebx_25 | (zx.d(ecx_168.b) & 0x7f) << 0xe
                var_14_8 = ebx_26
                
                if (ecx_168.b s< 0)
                    ecx_168.b = *(edx_53 + 2)
                    *arg2 = edx_53 + 3
                    int32_t ebx_27 = ebx_26 | (zx.d(ecx_168.b) & 0x7f) << 0x15
                    var_14_8 = ebx_27
                    
                    if (ecx_168.b s< 0)
                        ecx_168.b = *(edx_53 + 3)
                        *arg2 = edx_53 + 4
                        var_14_8 = ebx_27 | zx.d(ecx_168.b) << 0x1c
        
        int32_t* esi_16 = arg3[1]
        free(*esi_16)
        free(esi_16[1])
        int32_t* eax_308 = esi_16[2]
        *esi_16 = 0
        esi_16[1] = 0
        void* eax_310 = (*eax_308)(esi_16, arg6, var_10, eax, 0)
        esi_3 = arg3
        ebx_2 = eax_310
        sub_70bd10(eax_310, arg2, esi_3, ebx_2, var_14_8)
        
        if (arg10 != 0)
            *arg2 += 4
        
        *(ebx_2 + 0x30) = *(*(arg9 + 0x2c) + (var_18_14 << 2))
        goto label_70c718
