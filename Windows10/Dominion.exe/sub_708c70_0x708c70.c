// 函数: sub_708c70
// 地址: 0x708c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_147ded8
int32_t* var_c
int32_t* edi

if (eax == 0)
    int32_t* eax_2 = malloc(0xc)
    var_c = eax_2
    edi = eax_2
else
    edi = eax(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0xf9)
    var_c = edi

if (edi != 0)
    edi[2] = 0

int32_t eax_3 = data_147ded8
*edi = 0
edi[1] = 0x12
int32_t eax_4
int32_t ecx

if (eax_3 == 0)
    eax_4, ecx = malloc(0x48)
else
    eax_4, ecx =
        eax_3(0x48, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0xf9)

if (eax_4 != 0)
    memset(eax_4, 0, 0x48)

edi[2] = eax_4
int32_t* edi_1 = arg4
int32_t esi_1 = 0
int32_t var_44 = 0
int32_t var_10 = 0
int32_t var_30 = 0
char* eax_5 = *edi_1
ecx.b = *eax_5
int32_t ebx_1 = zx.d(ecx.b) & 0x7f
*edi_1 = &eax_5[1]
int32_t var_2c = ebx_1

if (ecx.b s< 0)
    ecx.b = eax_5[1]
    *edi_1 = &eax_5[2]
    ebx_1 |= (zx.d(ecx.b) & 0x7f) << 7
    var_2c = ebx_1
    
    if (ecx.b s< 0)
        ecx.b = eax_5[2]
        *edi_1 = &eax_5[3]
        ebx_1 |= (zx.d(ecx.b) & 0x7f) << 0xe
        var_2c = ebx_1
        
        if (ecx.b s< 0)
            ecx.b = eax_5[3]
            *edi_1 = &eax_5[4]
            ebx_1 |= (zx.d(ecx.b) & 0x7f) << 0x15
            var_2c = ebx_1
            
            if (ecx.b s< 0)
                ecx.b = eax_5[4]
                *edi_1 = &eax_5[5]
                ebx_1 |= zx.d(ecx.b) << 0x1c
                var_2c = ebx_1

if (ebx_1 s> 0)
    do
        char* eax_20 = *edi_1
        ecx.b = *eax_20
        void* edx_4 = &eax_20[1]
        int32_t ebx_3 = zx.d(ecx.b) & 0x7f
        *edi_1 = edx_4
        int32_t var_14_1 = ebx_3
        
        if (ecx.b s< 0)
            ecx.b = *edx_4
            edx_4 += 1
            *edi_1 = edx_4
            int32_t ebx_4 = ebx_3 | (zx.d(ecx.b) & 0x7f) << 7
            var_14_1 = ebx_4
            
            if (ecx.b s< 0)
                ecx.b = *edx_4
                edx_4 += 1
                *edi_1 = edx_4
                int32_t ebx_5 = ebx_4 | (zx.d(ecx.b) & 0x7f) << 0xe
                var_14_1 = ebx_5
                
                if (ecx.b s< 0)
                    ecx.b = *edx_4
                    edx_4 += 1
                    *edi_1 = edx_4
                    int32_t ebx_6 = ebx_5 | (zx.d(ecx.b) & 0x7f) << 0x15
                    var_14_1 = ebx_6
                    
                    if (ecx.b s< 0)
                        eax_20.b = *edx_4
                        edx_4 += 1
                        *edi_1 = edx_4
                        var_14_1 = ebx_6 | zx.d(eax_20.b) << 0x1c
        
        eax_20.b = *edx_4
        int32_t ebx_9 = zx.d(eax_20.b) & 0x7f
        int32_t var_3c_1 = 0
        *edi_1 = edx_4 + 1
        int32_t var_28_1 = ebx_9
        
        if (eax_20.b s< 0)
            ecx.b = *(edx_4 + 1)
            *edi_1 = edx_4 + 2
            ebx_9 |= (zx.d(ecx.b) & 0x7f) << 7
            var_28_1 = ebx_9
            
            if (ecx.b s< 0)
                ecx.b = *(edx_4 + 2)
                *edi_1 = edx_4 + 3
                ebx_9 |= (zx.d(ecx.b) & 0x7f) << 0xe
                var_28_1 = ebx_9
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_4 + 3)
                    *edi_1 = edx_4 + 4
                    ebx_9 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    var_28_1 = ebx_9
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_4 + 4)
                        *edi_1 = edx_4 + 5
                        ebx_9 |= zx.d(ecx.b) << 0x1c
                        var_28_1 = ebx_9
        
        if (ebx_9 s> 0)
            int32_t esi_15
            
            do
                char* eax_38 = *edi_1
                ecx:1.b = *eax_38
                *edi_1 = &eax_38[1]
                ecx.b = eax_38[1]
                int32_t ebx_11 = zx.d(ecx.b) & 0x7f
                *edi_1 = &eax_38[2]
                int32_t var_1c_1 = ebx_11
                
                if (ecx.b s< 0)
                    ecx.b = eax_38[2]
                    *edi_1 = &eax_38[3]
                    ebx_11 |= (zx.d(ecx.b) & 0x7f) << 7
                    var_1c_1 = ebx_11
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_38[3]
                        *edi_1 = &eax_38[4]
                        ebx_11 |= (zx.d(ecx.b) & 0x7f) << 0xe
                        var_1c_1 = ebx_11
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_38[4]
                            *edi_1 = &eax_38[5]
                            ebx_11 |= (zx.d(ecx.b) & 0x7f) << 0x15
                            var_1c_1 = ebx_11
                            
                            if (ecx.b s< 0)
                                ecx.b = eax_38[5]
                                *edi_1 = &eax_38[6]
                                ebx_11 |= zx.d(ecx.b) << 0x1c
                                var_1c_1 = ebx_11
                
                uint32_t eax_52 = zx.d(ecx:1.b)
                int32_t xmm1_2
                
                if (eax_52 == 0)
                    int32_t eax_129 = data_147ded8
                    int32_t* var_34_2
                    int32_t* esi_12
                    
                    if (eax_129 == 0)
                        int32_t* eax_131 = malloc(0x18)
                        var_34_2 = eax_131
                        esi_12 = eax_131
                    else
                        esi_12 = eax_129(0x18, 
                            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 
                            0x36e)
                        var_34_2 = esi_12
                    
                    if (esi_12 != 0)
                        __builtin_memset(esi_12, 0, 0x18)
                    
                    int32_t eax_132 = data_147ded8
                    *esi_12 = 4
                    int32_t* eax_133
                    
                    if (eax_132 == 0)
                        eax_133 = malloc(0xc)
                    else
                        eax_133 = eax_132(0xc, 
                            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x52)
                    
                    if (eax_133 != 0)
                        *eax_133 = 0
                        eax_133[1] = 0
                    
                    int32_t ecx_21 = data_147ded8
                    esi_12[1] = eax_133
                    eax_133[2] = sub_7162a0
                    *esi_12[1] = sub_716100
                    *(esi_12[1] + 4) = sub_716290
                    int32_t _Size = ebx_11 << 2
                    esi_12[2] = ebx_11
                    int32_t var_40_3
                    int32_t ecx_22
                    
                    if (ecx_21 == 0)
                        int32_t eax_137 = malloc(_Size)
                        var_40_3 = eax_137
                        ecx_22 = eax_137
                    else
                        ecx_22 = ecx_21(_Size, 
                            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 
                            0x372)
                        var_40_3 = ecx_22
                    
                    if (ecx_22 != 0)
                        memset(ecx_22, 0, ebx_11 << 2)
                        ecx_22 = var_40_3
                    
                    esi_12[3] = ecx_22
                    int32_t _Size_1 = ebx_11 << 2
                    int32_t ecx_23 = data_147ded8
                    void* var_40_4
                    void* ecx_24
                    int32_t edx_19
                    
                    if (ecx_23 == 0)
                        void* eax_140
                        eax_140, edx_19 = malloc(_Size_1)
                        var_40_4 = eax_140
                        ecx_24 = eax_140
                    else
                        void* eax_139
                        eax_139, edx_19 = ecx_23(_Size_1, 
                            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 
                            0x373)
                        ecx_24 = eax_139
                        var_40_4 = ecx_24
                    
                    if (ecx_24 != 0)
                        memset(ecx_24, 0, ebx_11 << 2)
                        ecx_24 = var_40_4
                    
                    esi_12[5] = ecx_24
                    esi_12[4] = var_14_1
                    int32_t var_24_1 = 0
                    
                    if (ebx_11 s> 0)
                        uint32_t* var_38_3 = nullptr
                        int32_t eax_159
                        
                        do
                            char* eax_143 = *edi_1
                            ecx_24.b = *eax_143
                            *edi_1 = &eax_143[1]
                            edx_19:1.b = eax_143[1]
                            *edi_1 = &eax_143[2]
                            edx_19.b = eax_143[2]
                            *edi_1 = &eax_143[3]
                            ebx_11.b = eax_143[3]
                            *edi_1 = &eax_143[4]
                            char* esi_13 = sub_708970(edi_1, arg5)
                            *(var_38_3 + var_34_2[3]) = (
                                (zx.d(ecx_24.b) << 8 | zx.d(edx_19:1.b)) << 8 | zx.d(edx_19.b)) << 8
                                | zx.d(ebx_11.b)
                            free(*(var_34_2[5] + (var_24_1 << 2)))
                            
                            if (esi_13 == 0)
                                esi_12 = var_34_2
                                *(esi_12[5] + (var_24_1 << 2)) = 0
                            else
                                char* ecx_35 = esi_13
                                void* edx_21 = &ecx_35[1]
                                char i
                                
                                do
                                    i = *ecx_35
                                    ecx_35 = &ecx_35[1]
                                while (i != 0)
                                int32_t eax_154 = data_147ded8
                                int32_t eax_155
                                
                                if (eax_154 == 0)
                                    eax_155 = malloc(ecx_35 - edx_21 + 1)
                                else
                                    eax_155 = eax_154(ecx_35 - edx_21 + 1, 
                                        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 
                                        0x37d)
                                
                                *(var_34_2[5] + (var_24_1 << 2)) = eax_155
                                ecx_24 = eax_155 - esi_13
                                int32_t eax_156
                                
                                do
                                    eax_156.b = *esi_13
                                    esi_13 = &esi_13[1]
                                    *(esi_13 + ecx_24 - 1) = eax_156.b
                                while (eax_156.b != 0)
                                esi_12 = var_34_2
                            
                            var_38_3 = &var_38_3[1]
                            eax_159 = var_24_1 + 1
                            ebx_11 = var_1c_1
                            var_24_1 = eax_159
                        while (eax_159 s< ebx_11)
                    
                    int32_t* edx_22 = var_c
                    int32_t eax_160 = *edx_22
                    
                    if (eax_160 == edx_22[1])
                        int32_t eax_161 = int.d(_mm_cvtepi32_ps(zx.o(eax_160)) * 1.75f)
                        
                        if (eax_161 s< 8)
                            eax_161 = 8
                        
                        edx_22[1] = eax_161
                        int32_t eax_163 = realloc(edx_22[2], eax_161 << 2)
                        edx_22 = var_c
                        edx_22[2] = eax_163
                    
                    *(edx_22[2] + (*edx_22 << 2)) = esi_12
                    *edx_22 += 1
                    xmm1_2 = __maxss_xmmss_memss(var_10, *(esi_12[3] + (ebx_11 << 2) - 4))
                else if (eax_52 == 1)
                    int32_t* eax_98
                    int32_t* edx_17
                    eax_98, edx_17 = sub_714ad0(eax_52 - 1, 5, ebx_11, 5, sub_7158f0, sub_715c10)
                    int32_t var_40_2 = 0
                    eax_98[5] = var_14_1
                    
                    if (ebx_11 s> 0)
                        int32_t eax_100 = ebx_11 - 1
                        uint32_t* var_38_2 = nullptr
                        int32_t esi_11
                        
                        do
                            char* eax_101 = *edi_1
                            uint32_t ecx_12
                            ecx_12.b = *eax_101
                            *edi_1 = &eax_101[1]
                            edx_17:1.b = eax_101[1]
                            *edi_1 = &eax_101[2]
                            edx_17.b = eax_101[2]
                            *edi_1 = &eax_101[3]
                            ebx_11.b = eax_101[3]
                            *edi_1 = &eax_101[4]
                            uint32_t var_58_2 = ((zx.d(ecx_12.b) << 8 | zx.d(edx_17:1.b)) << 8
                                | zx.d(edx_17.b)) << 8 | zx.d(ebx_11.b)
                            ecx_12.b = eax_101[4]
                            *edi_1 = &eax_101[5]
                            edx_17.b = eax_101[5]
                            *edi_1 = &eax_101[6]
                            ebx_11.b = eax_101[6]
                            *edi_1 = &eax_101[7]
                            ecx_12:1.b = eax_101[7]
                            *edi_1 = &eax_101[8]
                            *(var_38_2 + eax_98[4]) = var_58_2
                            *(eax_98[4] + var_38_2 + 4) = _mm_cvtepi32_ps(zx.o(ecx_12.b)) / 255f
                            *(eax_98[4] + var_38_2 + 8) = _mm_cvtepi32_ps(zx.o(edx_17.b)) / 255f
                            *(eax_98[4] + var_38_2 + 0xc) = _mm_cvtepi32_ps(zx.o(ebx_11.b)) / 255f
                            float xmm0_37 = _mm_cvtepi32_ps(zx.o(ecx_12:1.b))
                            int32_t eax_122 = eax_98[4]
                            *(eax_122 + var_38_2 + 0x10) = xmm0_37 / 255f
                            
                            if (var_40_2 s< eax_100)
                                ecx_12, edx_17 = sub_708a00(eax_122, eax_98, edi_1, var_40_2)
                            
                            var_38_2 = &var_38_2[5]
                            esi_11 = var_40_2 + 1
                            ebx_11 = var_1c_1
                            var_40_2 = esi_11
                        while (esi_11 s< ebx_11)
                    
                    int32_t* edx_18 = var_c
                    int32_t eax_123 = *edx_18
                    
                    if (eax_123 == edx_18[1])
                        int32_t eax_124 = int.d(_mm_cvtepi32_ps(zx.o(eax_123)) * 1.75f)
                        
                        if (eax_124 s< 8)
                            eax_124 = 8
                        
                        edx_18[1] = eax_124
                        int32_t eax_126 = realloc(edx_18[2], eax_124 << 2)
                        edx_18 = var_c
                        edx_18[2] = eax_126
                    
                    *(edx_18[2] + (*edx_18 << 2)) = eax_98
                    *edx_18 += 1
                    xmm1_2 = __maxss_xmmss_memss(var_10, *(eax_98[4] + ebx_11 * 0x14 - 0x14))
                else
                    if (eax_52 != 2)
                        int32_t i_1 = 0
                        
                        if (*var_c s> 0)
                            do
                                void* eax_215 = *(var_c[2] + (i_1 << 2))
                                (*(*(eax_215 + 4) + 8))(eax_215)
                                i_1 += 1
                            while (i_1 s< *var_c)
                        
                        free(var_c[2])
                        free(var_c)
                        void* eax_219 = *(*(arg5 + 0x2c) + (var_14_1 << 2))
                        sub_7087d0(eax_219, "Invalid timeline type for a slot: ", arg3, 
                            *(eax_219 + 4))
                        return 0
                    
                    int32_t* eax_56
                    int16_t edx_14
                    eax_56, edx_14 =
                        sub_714ad0(eax_52 - 2, eax_52 + 0xc, ebx_11, 8, sub_715c20, sub_7160f0)
                    int32_t var_40_1 = 0
                    eax_56[5] = var_14_1
                    
                    if (ebx_11 s> 0)
                        int32_t eax_58 = ebx_11 - 1
                        uint32_t* var_38_1 = nullptr
                        int32_t esi_6
                        
                        do
                            char* eax_59 = *edi_1
                            int32_t* ecx_2
                            ecx_2.b = *eax_59
                            *edi_1 = &eax_59[1]
                            edx_14:1.b = eax_59[1]
                            *edi_1 = &eax_59[2]
                            edx_14.b = eax_59[2]
                            *edi_1 = &eax_59[3]
                            ebx_11.b = eax_59[3]
                            *edi_1 = &eax_59[4]
                            uint32_t var_58_1 =
                                ((zx.d(ecx_2.b) << 8 | zx.d(edx_14:1.b)) << 8 | zx.d(edx_14.b)) << 8
                                | zx.d(ebx_11.b)
                            uint32_t ecx_9
                            ecx_9.b = eax_59[4]
                            *edi_1 = &eax_59[5]
                            edx_14.b = eax_59[5]
                            *edi_1 = &eax_59[6]
                            ebx_11.b = eax_59[6]
                            *edi_1 = &eax_59[7]
                            ecx_9:1.b = eax_59[7]
                            *edi_1 = &eax_59[9]
                            edx_14:1.b = eax_59[9]
                            *edi_1 = &eax_59[0xa]
                            ebx_11:1.b = eax_59[0xa]
                            *edi_1 = &eax_59[0xb]
                            char var_5_1 = ebx_11:1.b
                            ebx_11:1.b = eax_59[0xb]
                            *edi_1 = &eax_59[0xc]
                            *(var_38_1 + eax_56[4]) = var_58_1
                            *(var_38_1 + eax_56[4] + 4) = _mm_cvtepi32_ps(zx.o(ecx_9.b)) / 255f
                            *(var_38_1 + eax_56[4] + 8) = _mm_cvtepi32_ps(zx.o(edx_14.b)) / 255f
                            *(var_38_1 + eax_56[4] + 0xc) = _mm_cvtepi32_ps(zx.o(ebx_11.b)) / 255f
                            *(var_38_1 + eax_56[4] + 0x10) = _mm_cvtepi32_ps(zx.o(ecx_9:1.b)) / 255f
                            *(var_38_1 + eax_56[4] + 0x14) =
                                _mm_cvtepi32_ps(zx.o(edx_14:1.b)) / 255f
                            *(var_38_1 + eax_56[4] + 0x18) = _mm_cvtepi32_ps(zx.o(var_5_1)) / 255f
                            float xmm0_21 = _mm_cvtepi32_ps(zx.o(ebx_11:1.b))
                            int32_t eax_91 = eax_56[4]
                            *(var_38_1 + eax_91 + 0x1c) = xmm0_21 / 255f
                            
                            if (var_40_1 s< eax_58)
                                ecx_2, edx_14 = sub_708a00(eax_91, eax_56, edi_1, var_40_1)
                            
                            var_38_1 = &var_38_1[8]
                            esi_6 = var_40_1 + 1
                            ebx_11 = var_1c_1
                            var_40_1 = esi_6
                        while (esi_6 s< ebx_11)
                    
                    int32_t* edx_16 = var_c
                    int32_t eax_92 = *edx_16
                    
                    if (eax_92 == edx_16[1])
                        int32_t eax_93 = int.d(_mm_cvtepi32_ps(zx.o(eax_92)) * 1.75f)
                        
                        if (eax_93 s< 8)
                            eax_93 = 8
                        
                        edx_16[1] = eax_93
                        int32_t eax_95 = realloc(edx_16[2], eax_93 << 2)
                        edx_16 = var_c
                        edx_16[2] = eax_95
                    
                    *(edx_16[2] + (*edx_16 << 2)) = eax_56
                    *edx_16 += 1
                    xmm1_2 = __maxss_xmmss_memss(var_10, *((ebx_11 << 5) + eax_56[4] - 0x20))
                
                esi_15 = var_3c_1 + 1
                var_10 = xmm1_2
                var_3c_1 = esi_15
            while (esi_15 s< var_28_1)
            esi_1 = var_30
        
        esi_1 += 1
        var_30 = esi_1
    while (esi_1 s< var_2c)

char* eax_166 = *edi_1
int32_t var_30_1 = 0
ecx.b = *eax_166
int32_t ebx_15 = zx.d(ecx.b) & 0x7f
*edi_1 = &eax_166[1]
int32_t var_24_2 = ebx_15

if (ecx.b s< 0)
    ecx.b = eax_166[1]
    *edi_1 = &eax_166[2]
    ebx_15 |= (zx.d(ecx.b) & 0x7f) << 7
    var_24_2 = ebx_15
    
    if (ecx.b s< 0)
        ecx.b = eax_166[2]
        *edi_1 = &eax_166[3]
        ebx_15 |= (zx.d(ecx.b) & 0x7f) << 0xe
        var_24_2 = ebx_15
        
        if (ecx.b s< 0)
            ecx.b = eax_166[3]
            *edi_1 = &eax_166[4]
            ebx_15 |= (zx.d(ecx.b) & 0x7f) << 0x15
            var_24_2 = ebx_15
            
            if (ecx.b s< 0)
                ecx.b = eax_166[4]
                *edi_1 = &eax_166[5]
                ebx_15 |= zx.d(ecx.b) << 0x1c
                var_24_2 = ebx_15

if (ebx_15 s> 0)
    int32_t eax_285
    
    do
        char* eax_181 = *edi_1
        ecx.b = *eax_181
        void* edx_27 = &eax_181[1]
        uint32_t esi_17 = zx.d(ecx.b) & 0x7f
        *edi_1 = edx_27
        uint32_t var_14_2 = esi_17
        
        if (ecx.b s< 0)
            ecx.b = *edx_27
            edx_27 += 1
            *edi_1 = edx_27
            esi_17 |= (zx.d(ecx.b) & 0x7f) << 7
            var_14_2 = esi_17
            
            if (ecx.b s< 0)
                ecx.b = *edx_27
                edx_27 += 1
                *edi_1 = edx_27
                esi_17 |= (zx.d(ecx.b) & 0x7f) << 0xe
                var_14_2 = esi_17
                
                if (ecx.b s< 0)
                    ecx.b = *edx_27
                    edx_27 += 1
                    *edi_1 = edx_27
                    esi_17 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    var_14_2 = esi_17
                    
                    if (ecx.b s< 0)
                        eax_181.b = *edx_27
                        edx_27 += 1
                        esi_17 |= zx.d(eax_181.b) << 0x1c
                        *edi_1 = edx_27
                        var_14_2 = esi_17
        
        eax_181.b = *edx_27
        int32_t edx_29 = zx.d(eax_181.b) & 0x7f
        int32_t var_38_4 = 0
        *edi_1 = edx_27 + 1
        int32_t var_28_2 = edx_29
        
        if (eax_181.b s< 0)
            ecx.b = *(edx_27 + 1)
            *edi_1 = edx_27 + 2
            edx_29 |= (zx.d(ecx.b) & 0x7f) << 7
            var_28_2 = edx_29
            
            if (ecx.b s< 0)
                ecx.b = *(edx_27 + 2)
                *edi_1 = edx_27 + 3
                edx_29 |= (zx.d(ecx.b) & 0x7f) << 0xe
                var_28_2 = edx_29
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_27 + 3)
                    *edi_1 = edx_27 + 4
                    edx_29 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    var_28_2 = edx_29
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_27 + 4)
                        *edi_1 = edx_27 + 5
                        edx_29 |= zx.d(ecx.b) << 0x1c
                        var_28_2 = edx_29
        
        if (edx_29 s> 0)
            int32_t eax_283
            
            do
                char* eax_199 = *edi_1
                ecx:1.b = *eax_199
                *edi_1 = &eax_199[1]
                ecx.b = eax_199[1]
                int32_t ebx_21 = zx.d(ecx.b) & 0x7f
                *edi_1 = &eax_199[2]
                int32_t var_1c_2 = ebx_21
                
                if (ecx.b s< 0)
                    ecx.b = eax_199[2]
                    *edi_1 = &eax_199[3]
                    ebx_21 |= (zx.d(ecx.b) & 0x7f) << 7
                    var_1c_2 = ebx_21
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_199[3]
                        *edi_1 = &eax_199[4]
                        ebx_21 |= (zx.d(ecx.b) & 0x7f) << 0xe
                        var_1c_2 = ebx_21
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_199[4]
                            *edi_1 = &eax_199[5]
                            ebx_21 |= (zx.d(ecx.b) & 0x7f) << 0x15
                            var_1c_2 = ebx_21
                            
                            if (ecx.b s< 0)
                                ecx.b = eax_199[5]
                                *edi_1 = &eax_199[6]
                                ebx_21 |= zx.d(ecx.b) << 0x1c
                                var_1c_2 = ebx_21
                
                uint32_t eax_213 = zx.d(ecx:1.b)
                
                if (eax_213 u> 3)
                    int32_t i_2 = 0
                    
                    if (*var_c s> 0)
                        do
                            void* eax_346 = *(var_c[2] + (i_2 << 2))
                            (*(*(eax_346 + 4) + 8))(eax_346)
                            i_2 += 1
                        while (i_2 s< *var_c)
                    
                    free(var_c[2])
                    free(var_c)
                    void* eax_350 = *(*(arg5 + 0x24) + (var_14_2 << 2))
                    sub_7087d0(eax_350, "Invalid timeline type for a bone: ", arg3, *(eax_350 + 4))
                    return 0
                
                int32_t xmm0_52
                
                switch (eax_213)
                    case 0
                        int32_t* eax_221
                        int16_t edx_31
                        eax_221, edx_31 = sub_714ad0(eax_213, 0, ebx_21, 2, sub_714b80, 
                            ?get@Length@?$WriteOnlyArray@E$00@Platform@@Q$ABAIXZ)
                        int32_t* esi_18 = eax_221
                        int32_t* var_58_4 = esi_18
                        int32_t var_40_5 = 0
                        esi_18[5] = var_14_2
                        
                        if (ebx_21 s> 0)
                            int32_t eax_222 = ebx_21 - 1
                            
                            do
                                char* eax_223 = *edi_1
                                uint32_t ecx_43
                                ecx_43.b = *eax_223
                                *edi_1 = &eax_223[1]
                                edx_31:1.b = eax_223[1]
                                *edi_1 = &eax_223[2]
                                edx_31.b = eax_223[2]
                                *edi_1 = &eax_223[3]
                                ebx_21.b = eax_223[3]
                                *edi_1 = &eax_223[4]
                                uint32_t var_54_3 = ((zx.d(ecx_43.b) << 8 | zx.d(edx_31:1.b)) << 8
                                    | zx.d(edx_31.b)) << 8 | zx.d(ebx_21.b)
                                uint32_t ecx_50
                                ecx_50.b = eax_223[4]
                                *edi_1 = &eax_223[5]
                                edx_31.b = eax_223[5]
                                esi_18 = var_58_4
                                *edi_1 = &eax_223[6]
                                ebx_21.b = eax_223[6]
                                *edi_1 = &eax_223[7]
                                edx_31:1.b = eax_223[7]
                                *edi_1 = &eax_223[8]
                                *(esi_18[4] + (var_40_5 << 3)) = var_54_3
                                int32_t eax_238 = esi_18[4]
                                *(eax_238 + (var_40_5 << 3) + 4) = (
                                    (zx.d(ecx_50.b) << 8 | zx.d(edx_31.b)) << 8 | zx.d(ebx_21.b)) << 8
                                    | zx.d(edx_31:1.b)
                                
                                if (var_40_5 s< eax_222)
                                    ecx_43, edx_31 = sub_708a00(eax_238, esi_18, edi_1, var_40_5)
                                
                                ebx_21 = var_40_5 + 1
                                var_40_5 = ebx_21
                            while (ebx_21 s< var_1c_2)
                            
                            ebx_21 = var_1c_2
                        
                        int32_t* edx_33 = var_c
                        int32_t eax_239 = *edx_33
                        
                        if (eax_239 == edx_33[1])
                            int32_t eax_240 = int.d(_mm_cvtepi32_ps(zx.o(eax_239)) * 1.75f)
                            
                            if (eax_240 s< 8)
                                eax_240 = 8
                            
                            edx_33[1] = eax_240
                            int32_t eax_242 = realloc(edx_33[2], eax_240 << 2)
                            edx_33 = var_c
                            edx_33[2] = eax_242
                        
                        *(edx_33[2] + (*edx_33 << 2)) = esi_18
                        *edx_33 += 1
                        xmm0_52 = __maxss_xmmss_memss(var_10, *(esi_18[4] + (ebx_21 << 3) - 8))
                    case 1, 2, 3
                        float xmm1_5 = 1f
                        int32_t* ecx_58 = nullptr
                        float var_34_3 = 1f
                        int32_t* var_2c_1 = nullptr
                        void* edx_30
                        
                        if (eax_213 == 1)
                            int32_t* eax_250
                            eax_250, edx_30 =
                                sub_714ad0(eax_213 - 1, 1, ebx_21, 3, sub_714e70, sub_7150e0)
                            ecx_58 = eax_250
                            xmm1_5 = *arg3
                            var_34_3 = xmm1_5
                            var_2c_1 = ecx_58
                        else if (eax_213 == 2)
                            int32_t* eax_249
                            eax_249, edx_30 =
                                sub_714ad0(eax_213 - 2, 2, ebx_21, 3, sub_7150f0, sub_715660)
                            xmm1_5 = 1f
                            ecx_58 = eax_249
                            var_2c_1 = ecx_58
                        else if (eax_213 == 3)
                            int32_t* eax_248
                            eax_248, edx_30 =
                                sub_714ad0(eax_213 - 3, 3, ebx_21, 3, sub_715670, sub_7158e0)
                            xmm1_5 = 1f
                            ecx_58 = eax_248
                            var_2c_1 = ecx_58
                        
                        ecx_58[5] = esi_17
                        int32_t var_40_6 = 0
                        
                        if (ebx_21 s> 0)
                            int32_t eax_252 = ebx_21 - 1
                            void* var_3c_2 = nullptr
                            int32_t esi_23
                            
                            do
                                char* eax_253 = *edi_1
                                ecx_58.b = *eax_253
                                *edi_1 = &eax_253[1]
                                edx_30:1.b = eax_253[1]
                                *edi_1 = &eax_253[2]
                                edx_30.b = eax_253[2]
                                *edi_1 = &eax_253[3]
                                ebx_21.b = eax_253[3]
                                *edi_1 = &eax_253[4]
                                uint32_t var_58_5 = ((zx.d(ecx_58.b) << 8 | zx.d(edx_30:1.b)) << 8
                                    | zx.d(edx_30.b)) << 8 | zx.d(ebx_21.b)
                                uint32_t ecx_68
                                ecx_68.b = eax_253[4]
                                *edi_1 = &eax_253[5]
                                edx_30.b = eax_253[5]
                                *edi_1 = &eax_253[6]
                                ebx_21.b = eax_253[6]
                                *edi_1 = &eax_253[7]
                                edx_30:1.b = eax_253[7]
                                *edi_1 = &eax_253[8]
                                uint32_t var_54_4 = ((zx.d(ecx_68.b) << 8 | zx.d(edx_30.b)) << 8
                                    | zx.d(ebx_21.b)) << 8 | zx.d(edx_30:1.b)
                                uint32_t ecx_75
                                ecx_75.b = eax_253[8]
                                *edi_1 = &eax_253[9]
                                edx_30.b = eax_253[9]
                                *edi_1 = &eax_253[0xa]
                                ebx_21.b = eax_253[0xa]
                                *edi_1 = &eax_253[0xb]
                                edx_30:1.b = eax_253[0xb]
                                *edi_1 = &eax_253[0xc]
                                uint32_t* ebx_24 = var_3c_2
                                *(ebx_24 + var_2c_1[4]) = var_58_5
                                *(ebx_24 + var_2c_1[4] + 4) = var_54_4 f* xmm1_5
                                int32_t eax_275 = var_2c_1[4]
                                *(ebx_24 + eax_275 + 8) = xmm1_5 * ((
                                    (zx.d(ecx_75.b) << 8 | zx.d(edx_30.b)) << 8 | zx.d(ebx_21.b)) << 8
                                    | zx.d(edx_30:1.b))
                                
                                if (var_40_6 s< eax_252)
                                    ecx_58, edx_30 = sub_708a00(eax_275, var_2c_1, edi_1, var_40_6)
                                    xmm1_5 = var_34_3
                                
                                esi_23 = var_40_6 + 1
                                var_3c_2 = &ebx_24[3]
                                ebx_21 = var_1c_2
                                var_40_6 = esi_23
                            while (esi_23 s< ebx_21)
                        
                        int32_t eax_276 = *var_c
                        
                        if (eax_276 == var_c[1])
                            int32_t eax_277 = int.d(_mm_cvtepi32_ps(zx.o(eax_276)) * 1.75f)
                            
                            if (eax_277 s< 8)
                                eax_277 = 8
                            
                            var_c[1] = eax_277
                            var_c[2] = realloc(var_c[2], eax_277 << 2)
                        
                        *(var_c[2] + (*var_c << 2)) = var_2c_1
                        *var_c += 1
                        xmm0_52 = __maxss_xmmss_memss(var_10, *(var_2c_1[4] + ebx_21 * 0xc - 0xc))
                
                esi_17 = var_14_2
                eax_283 = var_38_4 + 1
                var_10 = xmm0_52
                var_38_4 = eax_283
            while (eax_283 s< var_28_2)
        
        eax_285 = var_30_1 + 1
        var_30_1 = eax_285
    while (eax_285 s< var_24_2)

char* eax_286 = *edi_1
ecx.b = *eax_286
int32_t i_17 = zx.d(ecx.b) & 0x7f
*edi_1 = &eax_286[1]
int32_t i_13 = i_17

if (ecx.b s< 0)
    ecx.b = eax_286[1]
    *edi_1 = &eax_286[2]
    i_17 |= (zx.d(ecx.b) & 0x7f) << 7
    i_13 = i_17
    
    if (ecx.b s< 0)
        ecx.b = eax_286[2]
        *edi_1 = &eax_286[3]
        i_17 |= (zx.d(ecx.b) & 0x7f) << 0xe
        i_13 = i_17
        
        if (ecx.b s< 0)
            ecx.b = eax_286[3]
            *edi_1 = &eax_286[4]
            i_17 |= (zx.d(ecx.b) & 0x7f) << 0x15
            i_13 = i_17
            
            if (ecx.b s< 0)
                ecx.b = eax_286[4]
                *edi_1 = &eax_286[5]
                i_17 |= zx.d(ecx.b) << 0x1c
                i_13 = i_17

if (i_17 s> 0)
    int32_t i_3
    
    do
        char* eax_301 = *edi_1
        ecx.b = *eax_301
        void* edx_40 = &eax_301[1]
        int32_t ebx_27 = zx.d(ecx.b) & 0x7f
        *edi_1 = edx_40
        int32_t var_2c_2 = ebx_27
        
        if (ecx.b s< 0)
            ecx.b = *edx_40
            edx_40 += 1
            *edi_1 = edx_40
            int32_t ebx_28 = ebx_27 | (zx.d(ecx.b) & 0x7f) << 7
            var_2c_2 = ebx_28
            
            if (ecx.b s< 0)
                ecx.b = *edx_40
                edx_40 += 1
                *edi_1 = edx_40
                int32_t ebx_29 = ebx_28 | (zx.d(ecx.b) & 0x7f) << 0xe
                var_2c_2 = ebx_29
                
                if (ecx.b s< 0)
                    ecx.b = *edx_40
                    edx_40 += 1
                    *edi_1 = edx_40
                    int32_t ebx_30 = ebx_29 | (zx.d(ecx.b) & 0x7f) << 0x15
                    var_2c_2 = ebx_30
                    
                    if (ecx.b s< 0)
                        eax_301.b = *edx_40
                        edx_40 += 1
                        *edi_1 = edx_40
                        var_2c_2 = ebx_30 | zx.d(eax_301.b) << 0x1c
        
        eax_301.b = *edx_40
        int32_t esi_27 = zx.d(eax_301.b) & 0x7f
        *edi_1 = edx_40 + 1
        int32_t var_20_2 = esi_27
        
        if (eax_301.b s< 0)
            ecx.b = *(edx_40 + 1)
            *edi_1 = edx_40 + 2
            eax_301 = (zx.d(ecx.b) & 0x7f) << 7
            esi_27 |= eax_301
            var_20_2 = esi_27
            
            if (ecx.b s< 0)
                ecx.b = *(edx_40 + 2)
                *edi_1 = edx_40 + 3
                eax_301 = (zx.d(ecx.b) & 0x7f) << 0xe
                esi_27 |= eax_301
                var_20_2 = esi_27
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_40 + 3)
                    *edi_1 = edx_40 + 4
                    eax_301 = (zx.d(ecx.b) & 0x7f) << 0x15
                    esi_27 |= eax_301
                    var_20_2 = esi_27
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_40 + 4)
                        *edi_1 = edx_40 + 5
                        eax_301 = zx.d(ecx.b) << 0x1c
                        esi_27 |= eax_301
                        var_20_2 = esi_27
        
        int32_t* eax_315
        uint32_t ecx_86
        int16_t edx_45
        eax_315, ecx_86, edx_45 = sub_714ad0(eax_301, 9, esi_27, 6, sub_718870, sub_718c00)
        int32_t* ebx_32 = eax_315
        int32_t var_40_7 = 0
        int32_t* var_38_5 = ebx_32
        ebx_32[5] = var_2c_2
        
        if (esi_27 s> 0)
            int32_t* var_3c_3 = nullptr
            int32_t esi_33
            
            do
                char* eax_318 = *edi_1
                ecx_86.b = *eax_318
                *edi_1 = &eax_318[1]
                edx_45:1.b = eax_318[1]
                *edi_1 = &eax_318[2]
                edx_45.b = eax_318[2]
                *edi_1 = &eax_318[3]
                ebx_32.b = eax_318[3]
                *edi_1 = &eax_318[4]
                uint32_t var_58_6 =
                    ((zx.d(ecx_86.b) << 8 | zx.d(edx_45:1.b)) << 8 | zx.d(edx_45.b)) << 8
                    | zx.d(ebx_32.b)
                uint32_t ecx_93
                ecx_93.b = eax_318[4]
                *edi_1 = &eax_318[5]
                edx_45.b = eax_318[5]
                *edi_1 = &eax_318[6]
                ebx_32.b = eax_318[6]
                *edi_1 = &eax_318[7]
                edx_45:1.b = eax_318[7]
                *edi_1 = &eax_318[8]
                uint32_t var_54_5 =
                    ((zx.d(ecx_93.b) << 8 | zx.d(edx_45.b)) << 8 | zx.d(ebx_32.b)) << 8
                    | zx.d(edx_45:1.b)
                uint32_t ecx_100
                ecx_100.b = eax_318[8]
                *edi_1 = &eax_318[9]
                edx_45.b = eax_318[9]
                *edi_1 = &eax_318[0xa]
                ebx_32.b = eax_318[0xa]
                *edi_1 = &eax_318[0xb]
                edx_45:1.b = eax_318[0xb]
                *edi_1 = &eax_318[0xc]
                uint32_t var_50_3 =
                    ((zx.d(ecx_100.b) << 8 | zx.d(edx_45.b)) << 8 | zx.d(ebx_32.b)) << 8
                    | zx.d(edx_45:1.b)
                ecx_86.b = eax_318[0xc]
                *edi_1 = &eax_318[0xd]
                edx_45.b = eax_318[0xd]
                *edi_1 = &eax_318[0xe]
                ecx_86:1.b = eax_318[0xe]
                *edi_1 = &eax_318[0xf]
                *(var_3c_3 + var_38_5[4]) = var_58_6
                *(var_3c_3 + var_38_5[4] + 4) = var_54_5
                *(var_3c_3 + var_38_5[4] + 8) = var_50_3
                *(var_3c_3 + var_38_5[4] + 0xc) = _mm_cvtepi32_ps(zx.o(sx.d(ecx_86.b)))
                int32_t xmm0_67
                
                if (edx_45.b == 0)
                    xmm0_67 = (zx.o(0)).d
                else
                    xmm0_67 = 0x3f800000
                
                *(var_3c_3 + var_38_5[4] + 0x10) = xmm0_67
                int32_t xmm0_68
                
                if (ecx_86:1.b == 0)
                    xmm0_68 = (zx.o(0)).d
                else
                    xmm0_68 = 0x3f800000
                
                int32_t eax_353 = var_38_5[4]
                *(var_3c_3 + eax_353 + 0x14) = xmm0_68
                
                if (var_40_7 s< esi_27 - 1)
                    ecx_86, edx_45 = sub_708a00(eax_353, var_38_5, edi_1, var_40_7)
                
                esi_33 = var_40_7 + 1
                var_40_7 = esi_33
                var_3c_3 = &var_3c_3[6]
            while (esi_33 s< var_20_2)
            ebx_32 = var_38_5
            esi_27 = var_20_2
        
        int32_t* edx_47 = var_c
        int32_t eax_354 = *edx_47
        
        if (eax_354 == edx_47[1])
            int32_t eax_355 = int.d(_mm_cvtepi32_ps(zx.o(eax_354)) * 1.75f)
            
            if (eax_355 s< 8)
                eax_355 = 8
            
            edx_47[1] = eax_355
            int32_t eax_357 = realloc(edx_47[2], eax_355 << 2)
            edx_47 = var_c
            edx_47[2] = eax_357
        
        *(edx_47[2] + (*edx_47 << 2)) = ebx_32
        *edx_47 += 1
        i_3 = i_13
        i_13 -= 1
        var_10 = __maxss_xmmss_memss(var_10, *(ebx_32[4] + esi_27 * 0x18 - 0x18))
    while (i_3 != 1)

char* eax_360 = *edi_1
ecx.b = *eax_360
int32_t i_16 = zx.d(ecx.b) & 0x7f
*edi_1 = &eax_360[1]
int32_t i_12 = i_16

if (ecx.b s< 0)
    ecx.b = eax_360[1]
    *edi_1 = &eax_360[2]
    i_16 |= (zx.d(ecx.b) & 0x7f) << 7
    i_12 = i_16
    
    if (ecx.b s< 0)
        ecx.b = eax_360[2]
        *edi_1 = &eax_360[3]
        i_16 |= (zx.d(ecx.b) & 0x7f) << 0xe
        i_12 = i_16
        
        if (ecx.b s< 0)
            ecx.b = eax_360[3]
            *edi_1 = &eax_360[4]
            i_16 |= (zx.d(ecx.b) & 0x7f) << 0x15
            i_12 = i_16
            
            if (ecx.b s< 0)
                ecx.b = eax_360[4]
                *edi_1 = &eax_360[5]
                i_16 |= zx.d(ecx.b) << 0x1c
                i_12 = i_16

if (i_16 s> 0)
    int32_t i_4
    
    do
        char* eax_375 = *edi_1
        ecx.b = *eax_375
        void* edx_52 = &eax_375[1]
        int32_t esi_35 = zx.d(ecx.b) & 0x7f
        *edi_1 = edx_52
        
        if (ecx.b s< 0)
            ecx.b = *edx_52
            edx_52 += 1
            *edi_1 = edx_52
            esi_35 |= (zx.d(ecx.b) & 0x7f) << 7
            
            if (ecx.b s< 0)
                ecx.b = *edx_52
                edx_52 += 1
                *edi_1 = edx_52
                esi_35 |= (zx.d(ecx.b) & 0x7f) << 0xe
                
                if (ecx.b s< 0)
                    ecx.b = *edx_52
                    edx_52 += 1
                    *edi_1 = edx_52
                    esi_35 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    
                    if (ecx.b s< 0)
                        eax_375.b = *edx_52
                        edx_52 += 1
                        *edi_1 = edx_52
                        esi_35 |= zx.d(eax_375.b) << 0x1c
        
        eax_375.b = *edx_52
        int32_t ebx_37 = zx.d(eax_375.b) & 0x7f
        *edi_1 = edx_52 + 1
        int32_t var_2c_3 = ebx_37
        
        if (eax_375.b s< 0)
            ecx.b = *(edx_52 + 1)
            *edi_1 = edx_52 + 2
            eax_375 = (zx.d(ecx.b) & 0x7f) << 7
            ebx_37 |= eax_375
            var_2c_3 = ebx_37
            
            if (ecx.b s< 0)
                ecx.b = *(edx_52 + 2)
                *edi_1 = edx_52 + 3
                eax_375 = (zx.d(ecx.b) & 0x7f) << 0xe
                ebx_37 |= eax_375
                var_2c_3 = ebx_37
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_52 + 3)
                    *edi_1 = edx_52 + 4
                    eax_375 = (zx.d(ecx.b) & 0x7f) << 0x15
                    ebx_37 |= eax_375
                    var_2c_3 = ebx_37
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_52 + 4)
                        *edi_1 = edx_52 + 5
                        eax_375 = zx.d(ecx.b) << 0x1c
                        ebx_37 |= eax_375
                        var_2c_3 = ebx_37
        
        int32_t* eax_389
        int32_t* ecx_113
        int16_t edx_57
        eax_389, ecx_113, edx_57 = sub_714ad0(eax_375, 0xa, ebx_37, 5, sub_718c10, sub_718f20)
        int32_t var_44_1 = 0
        eax_389[5] = esi_35
        
        if (ebx_37 s> 0)
            int32_t eax_390 = ebx_37 - 1
            void* var_40_8 = nullptr
            int32_t esi_41
            
            do
                char* eax_391 = *edi_1
                ecx_113.b = *eax_391
                *edi_1 = &eax_391[1]
                edx_57:1.b = eax_391[1]
                *edi_1 = &eax_391[2]
                edx_57.b = eax_391[2]
                *edi_1 = &eax_391[3]
                ebx_37.b = eax_391[3]
                *edi_1 = &eax_391[4]
                uint32_t var_58_7 =
                    ((zx.d(ecx_113.b) << 8 | zx.d(edx_57:1.b)) << 8 | zx.d(edx_57.b)) << 8
                    | zx.d(ebx_37.b)
                uint32_t ecx_120
                ecx_120.b = eax_391[4]
                *edi_1 = &eax_391[5]
                edx_57.b = eax_391[5]
                *edi_1 = &eax_391[6]
                ebx_37.b = eax_391[6]
                *edi_1 = &eax_391[7]
                edx_57:1.b = eax_391[7]
                *edi_1 = &eax_391[8]
                uint32_t var_54_6 =
                    ((zx.d(ecx_120.b) << 8 | zx.d(edx_57.b)) << 8 | zx.d(ebx_37.b)) << 8
                    | zx.d(edx_57:1.b)
                uint32_t ecx_127
                ecx_127.b = eax_391[8]
                *edi_1 = &eax_391[9]
                edx_57.b = eax_391[9]
                *edi_1 = &eax_391[0xa]
                ebx_37.b = eax_391[0xa]
                *edi_1 = &eax_391[0xb]
                edx_57:1.b = eax_391[0xb]
                *edi_1 = &eax_391[0xc]
                uint32_t var_50_4 =
                    ((zx.d(ecx_127.b) << 8 | zx.d(edx_57.b)) << 8 | zx.d(ebx_37.b)) << 8
                    | zx.d(edx_57:1.b)
                uint32_t ecx_134
                ecx_134.b = eax_391[0xc]
                *edi_1 = &eax_391[0xd]
                edx_57.b = eax_391[0xd]
                *edi_1 = &eax_391[0xe]
                ebx_37.b = eax_391[0xe]
                *edi_1 = &eax_391[0xf]
                edx_57:1.b = eax_391[0xf]
                *edi_1 = &eax_391[0x10]
                uint32_t var_4c_4 =
                    ((zx.d(ecx_134.b) << 8 | zx.d(edx_57.b)) << 8 | zx.d(ebx_37.b)) << 8
                    | zx.d(edx_57:1.b)
                uint32_t ecx_141
                ecx_141.b = eax_391[0x10]
                *edi_1 = &eax_391[0x11]
                edx_57.b = eax_391[0x11]
                *edi_1 = &eax_391[0x12]
                ebx_37.b = eax_391[0x12]
                *edi_1 = &eax_391[0x13]
                edx_57:1.b = eax_391[0x13]
                *edi_1 = &eax_391[0x14]
                uint32_t* ebx_38 = var_40_8
                *(ebx_38 + eax_389[4]) = var_58_7
                *(ebx_38 + eax_389[4] + 4) = var_54_6
                *(ebx_38 + eax_389[4] + 8) = var_50_4
                *(ebx_38 + eax_389[4] + 0xc) = var_4c_4
                int32_t eax_427 = eax_389[4]
                *(ebx_38 + eax_427 + 0x10) =
                    ((zx.d(ecx_141.b) << 8 | zx.d(edx_57.b)) << 8 | zx.d(ebx_37.b)) << 8
                    | zx.d(edx_57:1.b)
                
                if (var_44_1 s< eax_390)
                    ecx_113, edx_57 = sub_708a00(eax_427, eax_389, edi_1, var_44_1)
                
                esi_41 = var_44_1 + 1
                var_40_8 = &ebx_38[5]
                ebx_37 = var_2c_3
                var_44_1 = esi_41
            while (esi_41 s< ebx_37)
        
        int32_t eax_428 = *var_c
        
        if (eax_428 == var_c[1])
            int32_t eax_429 = int.d(_mm_cvtepi32_ps(zx.o(eax_428)) * 1.75f)
            
            if (eax_429 s< 8)
                eax_429 = 8
            
            var_c[1] = eax_429
            var_c[2] = realloc(var_c[2], eax_429 << 2)
        
        *(var_c[2] + (*var_c << 2)) = eax_389
        *var_c += 1
        i_4 = i_12
        i_12 -= 1
        var_10 = __maxss_xmmss_memss(var_10, *(eax_389[4] + ebx_37 * 0x14 - 0x14))
    while (i_4 != 1)

char* eax_434 = *edi_1
ecx.b = *eax_434
int32_t i_18 = zx.d(ecx.b) & 0x7f
*edi_1 = &eax_434[1]
int32_t i_11 = i_18

if (ecx.b s< 0)
    ecx.b = eax_434[1]
    *edi_1 = &eax_434[2]
    i_18 |= (zx.d(ecx.b) & 0x7f) << 7
    i_11 = i_18
    
    if (ecx.b s< 0)
        ecx.b = eax_434[2]
        *edi_1 = &eax_434[3]
        i_18 |= (zx.d(ecx.b) & 0x7f) << 0xe
        i_11 = i_18
        
        if (ecx.b s< 0)
            ecx.b = eax_434[3]
            *edi_1 = &eax_434[4]
            i_18 |= (zx.d(ecx.b) & 0x7f) << 0x15
            i_11 = i_18
            
            if (ecx.b s< 0)
                ecx.b = eax_434[4]
                *edi_1 = &eax_434[5]
                i_18 |= zx.d(ecx.b) << 0x1c
                i_11 = i_18

if (i_18 s> 0)
    int32_t i_5
    
    do
        char* eax_447 = *edi_1
        ecx.b = *eax_447
        void* edx_64 = &eax_447[1]
        int32_t ebx_41 = zx.d(ecx.b) & 0x7f
        *edi_1 = edx_64
        int32_t var_20_3 = ebx_41
        
        if (ecx.b s< 0)
            ecx.b = *edx_64
            edx_64 += 1
            *edi_1 = edx_64
            ebx_41 |= (zx.d(ecx.b) & 0x7f) << 7
            var_20_3 = ebx_41
            
            if (ecx.b s< 0)
                ecx.b = *edx_64
                edx_64 += 1
                *edi_1 = edx_64
                ebx_41 |= (zx.d(ecx.b) & 0x7f) << 0xe
                var_20_3 = ebx_41
                
                if (ecx.b s< 0)
                    ecx.b = *edx_64
                    edx_64 += 1
                    *edi_1 = edx_64
                    ebx_41 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    var_20_3 = ebx_41
                    
                    if (ecx.b s< 0)
                        int32_t eax_456
                        eax_456.b = *edx_64
                        edx_64 += 1
                        ebx_41 |= zx.d(eax_456.b) << 0x1c
                        *edi_1 = edx_64
                        var_20_3 = ebx_41
        
        void* var_34_4 = *(*(arg5 + 0x60) + (ebx_41 << 2))
        void* eax_461
        eax_461.b = *edx_64
        int32_t j_1 = zx.d(eax_461.b) & 0x7f
        *edi_1 = edx_64 + 1
        int32_t j_2 = j_1
        
        if (eax_461.b s< 0)
            ecx.b = *(edx_64 + 1)
            *edi_1 = edx_64 + 2
            j_1 |= (zx.d(ecx.b) & 0x7f) << 7
            j_2 = j_1
            
            if (ecx.b s< 0)
                ecx.b = *(edx_64 + 2)
                *edi_1 = edx_64 + 3
                j_1 |= (zx.d(ecx.b) & 0x7f) << 0xe
                j_2 = j_1
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_64 + 3)
                    *edi_1 = edx_64 + 4
                    j_1 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    j_2 = j_1
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_64 + 4)
                        *edi_1 = edx_64 + 5
                        j_1 |= zx.d(ecx.b) << 0x1c
                        j_2 = j_1
        
        if (j_1 s> 0)
            int32_t j
            
            do
                char* eax_474 = *edi_1
                ecx:1.b = *eax_474
                *edi_1 = &eax_474[1]
                ecx.b = eax_474[1]
                int32_t ebx_43 = zx.d(ecx.b) & 0x7f
                *edi_1 = &eax_474[2]
                int32_t var_14_3 = ebx_43
                
                if (ecx.b s< 0)
                    ecx.b = eax_474[2]
                    *edi_1 = &eax_474[3]
                    ebx_43 |= (zx.d(ecx.b) & 0x7f) << 7
                    var_14_3 = ebx_43
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_474[3]
                        *edi_1 = &eax_474[4]
                        ebx_43 |= (zx.d(ecx.b) & 0x7f) << 0xe
                        var_14_3 = ebx_43
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_474[4]
                            *edi_1 = &eax_474[5]
                            ebx_43 |= (zx.d(ecx.b) & 0x7f) << 0x15
                            var_14_3 = ebx_43
                            
                            if (ecx.b s< 0)
                                ecx.b = eax_474[5]
                                *edi_1 = &eax_474[6]
                                ebx_43 |= zx.d(ecx.b) << 0x1c
                                var_14_3 = ebx_43
                
                uint32_t eax_488 = zx.d(ecx:1.b)
                int32_t eax_489 = eax_488
                int32_t temp10_1
                
                if (eax_488 != 0)
                    temp10_1 = eax_489
                    eax_489 -= 1
                
                if (eax_488 == 0 || temp10_1 == 1)
                    float var_2c_4 = 1f
                    int32_t* var_38_7
                    int32_t* ecx_177
                    int16_t edx_77
                    float xmm1_6
                    bool cond:3_1
                    
                    if (ecx:1.b != 1)
                        int32_t* eax_527
                        eax_527, edx_77 =
                            sub_714ad0(eax_489, 0xb, ebx_43, 2, sub_718f30, sub_719100)
                        ecx_177 = eax_527
                        var_38_7 = ecx_177
                        cond:3_1 = *(var_34_4 + 0x18) != 0
                    label_70a5ff:
                        
                        if (cond:3_1)
                            xmm1_6 = 1f
                        else
                            xmm1_6 = *arg3
                            var_2c_4 = xmm1_6
                    else
                        int32_t* eax_523
                        eax_523, edx_77 =
                            sub_714ad0(eax_489, 0xc, ebx_43, 2, sub_719110, sub_7192e0)
                        ecx_177 = eax_523
                        var_38_7 = ecx_177
                        int32_t eax_525 = *(var_34_4 + 0x1c)
                        
                        if (eax_525 != 0)
                            cond:3_1 = eax_525 != 1
                            goto label_70a5ff
                        
                        xmm1_6 = *arg3
                        var_2c_4 = xmm1_6
                    ecx_177[5] = var_20_3
                    int32_t var_44_3 = 0
                    
                    if (ebx_43 s> 0)
                        int32_t eax_530 = ebx_43 - 1
                        int32_t esi_52
                        
                        do
                            char* eax_531 = *edi_1
                            ecx_177.b = *eax_531
                            *edi_1 = &eax_531[1]
                            edx_77:1.b = eax_531[1]
                            *edi_1 = &eax_531[2]
                            edx_77.b = eax_531[2]
                            *edi_1 = &eax_531[3]
                            ebx_43.b = eax_531[3]
                            *edi_1 = &eax_531[4]
                            uint32_t var_58_9 = ((zx.d(ecx_177.b) << 8 | zx.d(edx_77:1.b)) << 8
                                | zx.d(edx_77.b)) << 8 | zx.d(ebx_43.b)
                            uint32_t ecx_184
                            ecx_184.b = eax_531[4]
                            *edi_1 = &eax_531[5]
                            edx_77.b = eax_531[5]
                            *edi_1 = &eax_531[6]
                            ebx_43.b = eax_531[6]
                            *edi_1 = &eax_531[7]
                            edx_77:1.b = eax_531[7]
                            *edi_1 = &eax_531[8]
                            *(var_38_7[4] + (var_44_3 << 3)) = var_58_9
                            int32_t eax_546 = var_38_7[4]
                            *(eax_546 + (var_44_3 << 3) + 4) = xmm1_6 * (
                                ((zx.d(ecx_184.b) << 8 | zx.d(edx_77.b)) << 8 | zx.d(ebx_43.b)) << 8
                                | zx.d(edx_77:1.b))
                            
                            if (var_44_3 s< eax_530)
                                ecx_177, edx_77 = sub_708a00(eax_546, var_38_7, edi_1, var_44_3)
                                xmm1_6 = var_2c_4
                            
                            ebx_43 = var_14_3
                            esi_52 = var_44_3 + 1
                            var_44_3 = esi_52
                        while (esi_52 s< ebx_43)
                        j_1 = j_2
                    
                    int32_t* edx_79 = var_c
                    int32_t eax_547 = *edx_79
                    
                    if (eax_547 == edx_79[1])
                        int32_t eax_548 = int.d(_mm_cvtepi32_ps(zx.o(eax_547)) * 1.75f)
                        
                        if (eax_548 s< 8)
                            eax_548 = 8
                        
                        edx_79[1] = eax_548
                        int32_t eax_550 = realloc(edx_79[2], eax_548 << 2)
                        edx_79 = var_c
                        edx_79[2] = eax_550
                    
                    *(edx_79[2] + (*edx_79 << 2)) = var_38_7
                    *var_c += 1
                    var_10 = __maxss_xmmss_memss(var_10, *(var_38_7[4] + (ebx_43 << 3) - 8))
                else if (eax_489 == 1)
                    int32_t* eax_491
                    int32_t* ecx_152
                    int16_t edx_74
                    eax_491, ecx_152, edx_74 =
                        sub_714ad0(eax_489 - 1, eax_489 + 0xc, ebx_43, 3, sub_7192f0, sub_719530)
                    int32_t var_44_2 = 0
                    eax_491[5] = var_20_3
                    
                    if (ebx_43 s> 0)
                        int32_t eax_493 = ebx_43 - 1
                        void* var_40_9 = nullptr
                        int32_t esi_49
                        
                        do
                            char* eax_494 = *edi_1
                            ecx_152.b = *eax_494
                            *edi_1 = &eax_494[1]
                            edx_74:1.b = eax_494[1]
                            *edi_1 = &eax_494[2]
                            edx_74.b = eax_494[2]
                            *edi_1 = &eax_494[3]
                            ebx_43.b = eax_494[3]
                            *edi_1 = &eax_494[4]
                            uint32_t var_58_8 = ((zx.d(ecx_152.b) << 8 | zx.d(edx_74:1.b)) << 8
                                | zx.d(edx_74.b)) << 8 | zx.d(ebx_43.b)
                            uint32_t ecx_159
                            ecx_159.b = eax_494[4]
                            *edi_1 = &eax_494[5]
                            edx_74.b = eax_494[5]
                            *edi_1 = &eax_494[6]
                            ebx_43.b = eax_494[6]
                            *edi_1 = &eax_494[7]
                            edx_74:1.b = eax_494[7]
                            *edi_1 = &eax_494[8]
                            uint32_t var_54_7 =
                                ((zx.d(ecx_159.b) << 8 | zx.d(edx_74.b)) << 8 | zx.d(ebx_43.b)) << 8
                                | zx.d(edx_74:1.b)
                            uint32_t ecx_166
                            ecx_166.b = eax_494[8]
                            *edi_1 = &eax_494[9]
                            edx_74.b = eax_494[9]
                            *edi_1 = &eax_494[0xa]
                            ebx_43.b = eax_494[0xa]
                            *edi_1 = &eax_494[0xb]
                            edx_74:1.b = eax_494[0xb]
                            *edi_1 = &eax_494[0xc]
                            uint32_t* ebx_44 = var_40_9
                            *(ebx_44 + eax_491[4]) = var_58_8
                            *(ebx_44 + eax_491[4] + 4) = var_54_7
                            int32_t eax_516 = eax_491[4]
                            *(ebx_44 + eax_516 + 8) =
                                ((zx.d(ecx_166.b) << 8 | zx.d(edx_74.b)) << 8 | zx.d(ebx_43.b)) << 8
                                | zx.d(edx_74:1.b)
                            
                            if (var_44_2 s< eax_493)
                                ecx_152, edx_74 = sub_708a00(eax_516, eax_491, edi_1, var_44_2)
                            
                            esi_49 = var_44_2 + 1
                            var_40_9 = &ebx_44[3]
                            ebx_43 = var_14_3
                            var_44_2 = esi_49
                        while (esi_49 s< ebx_43)
                    
                    int32_t* edx_76 = var_c
                    int32_t eax_517 = *edx_76
                    
                    if (eax_517 == edx_76[1])
                        int32_t eax_518 = int.d(_mm_cvtepi32_ps(zx.o(eax_517)) * 1.75f)
                        
                        if (eax_518 s< 8)
                            eax_518 = 8
                        
                        edx_76[1] = eax_518
                        int32_t eax_520 = realloc(edx_76[2], eax_518 << 2)
                        edx_76 = var_c
                        edx_76[2] = eax_520
                    
                    *(edx_76[2] + (*edx_76 << 2)) = eax_491
                    *edx_76 += 1
                    j_1 = j_2
                    var_10 = __maxss_xmmss_memss(var_10, *(eax_491[4] + ebx_43 * 0xc - 0xc))
                
                j = j_1
                j_1 -= 1
                j_2 = j_1
            while (j != 1)
        
        i_5 = i_11
        i_11 -= 1
    while (i_5 != 1)

char* eax_554 = *edi_1
int32_t var_58_10 = 0
ecx.b = *eax_554
int32_t ebx_47 = zx.d(ecx.b) & 0x7f
*edi_1 = &eax_554[1]
int32_t var_34_5 = ebx_47

if (ecx.b s< 0)
    ecx.b = eax_554[1]
    *edi_1 = &eax_554[2]
    ebx_47 |= (zx.d(ecx.b) & 0x7f) << 7
    var_34_5 = ebx_47
    
    if (ecx.b s< 0)
        ecx.b = eax_554[2]
        *edi_1 = &eax_554[3]
        ebx_47 |= (zx.d(ecx.b) & 0x7f) << 0xe
        var_34_5 = ebx_47
        
        if (ecx.b s< 0)
            ecx.b = eax_554[3]
            *edi_1 = &eax_554[4]
            ebx_47 |= (zx.d(ecx.b) & 0x7f) << 0x15
            var_34_5 = ebx_47
            
            if (ecx.b s< 0)
                ecx.b = eax_554[4]
                *edi_1 = &eax_554[5]
                ebx_47 |= zx.d(ecx.b) << 0x1c
                var_34_5 = ebx_47

if (ebx_47 s> 0)
    int32_t eax_731
    
    do
        char* eax_567 = *edi_1
        ecx.b = *eax_567
        void* edx_85 = &eax_567[1]
        int32_t esi_54 = zx.d(ecx.b) & 0x7f
        *edi_1 = edx_85
        
        if (ecx.b s< 0)
            ecx.b = *edx_85
            edx_85 += 1
            *edi_1 = edx_85
            esi_54 |= (zx.d(ecx.b) & 0x7f) << 7
            
            if (ecx.b s< 0)
                ecx.b = *edx_85
                edx_85 += 1
                *edi_1 = edx_85
                esi_54 |= (zx.d(ecx.b) & 0x7f) << 0xe
                
                if (ecx.b s< 0)
                    ecx.b = *edx_85
                    edx_85 += 1
                    *edi_1 = edx_85
                    esi_54 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    
                    if (ecx.b s< 0)
                        int32_t eax_576
                        eax_576.b = *edx_85
                        edx_85 += 1
                        *edi_1 = edx_85
                        esi_54 |= zx.d(eax_576.b) << 0x1c
        
        int32_t esi_55 = 0
        int32_t var_5c_1 = *(*(arg5 + 0x34) + (esi_54 << 2))
        int32_t eax_581
        eax_581.b = *edx_85
        int32_t ebx_49 = zx.d(eax_581.b) & 0x7f
        int32_t var_54_9 = 0
        *edi_1 = edx_85 + 1
        int32_t var_30_2 = ebx_49
        
        if (eax_581.b s< 0)
            ecx.b = *(edx_85 + 1)
            *edi_1 = edx_85 + 2
            ebx_49 |= (zx.d(ecx.b) & 0x7f) << 7
            var_30_2 = ebx_49
            
            if (ecx.b s< 0)
                ecx.b = *(edx_85 + 2)
                *edi_1 = edx_85 + 3
                ebx_49 |= (zx.d(ecx.b) & 0x7f) << 0xe
                var_30_2 = ebx_49
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_85 + 3)
                    *edi_1 = edx_85 + 4
                    ebx_49 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    var_30_2 = ebx_49
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_85 + 4)
                        *edi_1 = edx_85 + 5
                        ebx_49 |= zx.d(ecx.b) << 0x1c
                        var_30_2 = ebx_49
        
        if (ebx_49 s> 0)
            do
                char* eax_596 = *edi_1
                ecx.b = *eax_596
                void* edx_90 = &eax_596[1]
                int32_t ebx_51 = zx.d(ecx.b) & 0x7f
                *edi_1 = edx_90
                int32_t var_24_3 = ebx_51
                
                if (ecx.b s< 0)
                    ecx.b = *edx_90
                    edx_90 += 1
                    *edi_1 = edx_90
                    int32_t ebx_52 = ebx_51 | (zx.d(ecx.b) & 0x7f) << 7
                    var_24_3 = ebx_52
                    
                    if (ecx.b s< 0)
                        ecx.b = *edx_90
                        edx_90 += 1
                        *edi_1 = edx_90
                        int32_t ebx_53 = ebx_52 | (zx.d(ecx.b) & 0x7f) << 0xe
                        var_24_3 = ebx_53
                        
                        if (ecx.b s< 0)
                            ecx.b = *edx_90
                            edx_90 += 1
                            *edi_1 = edx_90
                            int32_t ebx_54 = ebx_53 | (zx.d(ecx.b) & 0x7f) << 0x15
                            var_24_3 = ebx_54
                            
                            if (ecx.b s< 0)
                                eax_596.b = *edx_90
                                edx_90 += 1
                                *edi_1 = edx_90
                                var_24_3 = ebx_54 | zx.d(eax_596.b) << 0x1c
                
                eax_596.b = *edx_90
                int32_t ebx_57 = zx.d(eax_596.b) & 0x7f
                int32_t var_50_7 = 0
                *edi_1 = edx_90 + 1
                int32_t var_28_3 = ebx_57
                
                if (eax_596.b s< 0)
                    ecx.b = *(edx_90 + 1)
                    *edi_1 = edx_90 + 2
                    ebx_57 |= (zx.d(ecx.b) & 0x7f) << 7
                    var_28_3 = ebx_57
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_90 + 2)
                        *edi_1 = edx_90 + 3
                        ebx_57 |= (zx.d(ecx.b) & 0x7f) << 0xe
                        var_28_3 = ebx_57
                        
                        if (ecx.b s< 0)
                            ecx.b = *(edx_90 + 3)
                            *edi_1 = edx_90 + 4
                            ebx_57 |= (zx.d(ecx.b) & 0x7f) << 0x15
                            var_28_3 = ebx_57
                            
                            if (ecx.b s< 0)
                                ecx.b = *(edx_90 + 4)
                                *edi_1 = edx_90 + 5
                                ebx_57 |= zx.d(ecx.b) << 0x1c
                                var_28_3 = ebx_57
                
                if (ebx_57 s> 0)
                    int32_t* ebx_58 = var_c
                    int32_t eax_729
                    
                    do
                        char* eax_614 = sub_708970(edi_1, arg5)
                        void* eax_615 = sub_752840(eax_614, var_24_3, var_5c_1, eax_614)
                        
                        if (eax_615 == 0)
                            int32_t i_6 = 0
                            
                            if (*ebx_58 s> 0)
                                do
                                    void* eax_750 = *(ebx_58[2] + (i_6 << 2))
                                    (*(*(eax_750 + 4) + 8))(eax_750)
                                    i_6 += 1
                                while (i_6 s< *ebx_58)
                            
                            free(ebx_58[2])
                            sub_7087d0(free(ebx_58), "Attachment not found: ", arg3, eax_614)
                            return 0
                        
                        int32_t ecx_195 = *(eax_615 + 0x18)
                        int32_t ebx_59 = *(eax_615 + 0x1c)
                        int32_t var_20_4 = ebx_59
                        
                        if (ecx_195 != 0)
                            ebx_59 = ebx_59 s/ 3 * 2
                            var_20_4 = ebx_59
                        
                        int32_t ecx_196 = data_147ded8
                        int32_t _Size_2 = ebx_59 << 2
                        void* eax_617
                        
                        if (ecx_196 == 0)
                            eax_617 = malloc(_Size_2)
                        else
                            eax_617 = ecx_196(_Size_2, 
                                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 
                                0x1f0)
                        
                        char* eax_618 = *edi_1
                        char ecx_197 = *eax_618
                        int32_t esi_58 = zx.d(ecx_197) & 0x7f
                        *edi_1 = &eax_618[1]
                        int32_t var_1c_3 = esi_58
                        
                        if (ecx_197 s< 0)
                            ecx_197 = eax_618[1]
                            *edi_1 = &eax_618[2]
                            esi_58 |= (zx.d(ecx_197) & 0x7f) << 7
                            var_1c_3 = esi_58
                            
                            if (ecx_197 s< 0)
                                ecx_197 = eax_618[2]
                                *edi_1 = &eax_618[3]
                                esi_58 |= (zx.d(ecx_197) & 0x7f) << 0xe
                                var_1c_3 = esi_58
                                
                                if (ecx_197 s< 0)
                                    ecx_197 = eax_618[3]
                                    *edi_1 = &eax_618[4]
                                    esi_58 |= (zx.d(ecx_197) & 0x7f) << 0x15
                                    var_1c_3 = esi_58
                                    
                                    if (ecx_197 s< 0)
                                        ecx_197 = eax_618[4]
                                        *edi_1 = &eax_618[5]
                                        esi_58 |= zx.d(ecx_197) << 0x1c
                                        var_1c_3 = esi_58
                        
                        int32_t* eax_631
                        int16_t edx_103
                        eax_631, edx_103 = sub_7183a0(esi_58, ebx_59)
                        int32_t* esi_59 = eax_631
                        int32_t var_4c_6 = 0
                        int32_t* var_68_1 = esi_59
                        esi_59[7] = var_24_3
                        esi_59[8] = eax_615
                        
                        if (var_1c_3 s> 0)
                            uint32_t* var_40_10 = nullptr
                            int32_t count = ebx_59 << 2
                            
                            do
                                char* eax_636 = *edi_1
                                int32_t ecx_199
                                ecx_199.b = *eax_636
                                *edi_1 = &eax_636[1]
                                edx_103:1.b = eax_636[1]
                                *edi_1 = &eax_636[2]
                                edx_103.b = eax_636[2]
                                *edi_1 = &eax_636[3]
                                ebx_59.b = eax_636[3]
                                *edi_1 = &eax_636[4]
                                uint32_t eax_642
                                eax_642.b = eax_636[4]
                                void* esi_61 = &eax_636[5]
                                int32_t c = zx.d(eax_642.b) & 0x7f
                                *edi_1 = esi_61
                                int32_t c_1 = c
                                uint32_t ecx_206
                                
                                if (eax_642.b s< 0)
                                    ecx_206.b = *esi_61
                                    esi_61 += 1
                                    *edi_1 = esi_61
                                    c |= (zx.d(ecx_206.b) & 0x7f) << 7
                                    c_1 = c
                                    
                                    if (ecx_206.b s< 0)
                                        ecx_206.b = *esi_61
                                        esi_61 += 1
                                        *edi_1 = esi_61
                                        c |= (zx.d(ecx_206.b) & 0x7f) << 0xe
                                        c_1 = c
                                        
                                        if (ecx_206.b s< 0)
                                            ecx_206.b = *esi_61
                                            esi_61 += 1
                                            *edi_1 = esi_61
                                            c |= (zx.d(ecx_206.b) & 0x7f) << 0x15
                                            c_1 = c
                                            
                                            if (ecx_206.b s< 0)
                                                eax_642.b = *esi_61
                                                esi_61 += 1
                                                c |= zx.d(eax_642.b) << 0x1c
                                                *edi_1 = esi_61
                                                c_1 = c
                                
                                void* var_38_8
                                
                                if (c != 0)
                                    eax_642.b = *esi_61
                                    int32_t ebx_64 = zx.d(eax_642.b) & 0x7f
                                    *edi_1 = esi_61 + 1
                                    
                                    if (eax_642.b s< 0)
                                        ecx_206.b = *(esi_61 + 1)
                                        *edi_1 = esi_61 + 2
                                        ebx_64 |= (zx.d(ecx_206.b) & 0x7f) << 7
                                        
                                        if (ecx_206.b s< 0)
                                            ecx_206.b = *(esi_61 + 2)
                                            *edi_1 = esi_61 + 3
                                            ebx_64 |= (zx.d(ecx_206.b) & 0x7f) << 0xe
                                            
                                            if (ecx_206.b s< 0)
                                                ecx_206.b = *(esi_61 + 3)
                                                *edi_1 = esi_61 + 4
                                                ebx_64 |= (zx.d(ecx_206.b) & 0x7f) << 0x15
                                                
                                                if (ecx_206.b s< 0)
                                                    ecx_206.b = *(esi_61 + 4)
                                                    *edi_1 = esi_61 + 5
                                                    ebx_64 |= zx.d(ecx_206.b) << 0x1c
                                    
                                    var_38_8 = eax_617
                                    memset(eax_617, 0, ebx_64 << 2)
                                    int32_t esi_67 = ebx_64
                                    float ecx_209 = c_1 + ebx_64
                                    float var_44_4 = ecx_209
                                    float xmm0_99 = *arg3
                                    xmm0_99 - 1f
                                    float* eax_665
                                    eax_665:1.b = (xmm0_99 == 1f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_99, 1f) ? 1 : 0) << 2
                                        | (xmm0_99 < 1f ? 1 : 0)
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    int16_t edx_105
                                    
                                    if (p_2)
                                        if (ebx_64 s< ecx_209)
                                            do
                                                char* eax_675 = *edi_1
                                                ecx_209.b = *eax_675
                                                *edi_1 = &eax_675[1]
                                                edx_105:1.b = eax_675[1]
                                                *edi_1 = &eax_675[2]
                                                edx_105.b = eax_675[2]
                                                *edi_1 = &eax_675[3]
                                                ebx_64.b = eax_675[3]
                                                *edi_1 = &eax_675[4]
                                                *(eax_617 + (esi_67 << 2)) = ((
                                                    (zx.d(ecx_209.b) << 8 | zx.d(edx_105:1.b)) << 8
                                                    | zx.d(edx_105.b)) << 8 | zx.d(ebx_64.b)) * *arg3
                                                esi_67 += 1
                                            while (esi_67 s< var_44_4)
                                    else if (ebx_64 s< ecx_209)
                                        do
                                            char* eax_666 = *edi_1
                                            ecx_209.b = *eax_666
                                            *edi_1 = &eax_666[1]
                                            edx_105:1.b = eax_666[1]
                                            *edi_1 = &eax_666[2]
                                            edx_105.b = eax_666[2]
                                            *edi_1 = &eax_666[3]
                                            ebx_64.b = eax_666[3]
                                            *edi_1 = &eax_666[4]
                                            *(eax_617 + (esi_67 << 2)) = (
                                                (zx.d(ecx_209.b) << 8 | zx.d(edx_105:1.b)) << 8
                                                | zx.d(edx_105.b)) << 8 | zx.d(ebx_64.b)
                                            esi_67 += 1
                                        while (esi_67 s< var_44_4)
                                    memset(eax_617 + (esi_67 << 2), 0, (var_20_4 - esi_67) << 2)
                                    
                                    if (ecx_195 == 0)
                                        int32_t i_9 = 0
                                        int32_t edx_106 = var_20_4
                                        void* ebx_65 = *(eax_615 + 0x20)
                                        
                                        if (edx_106 s> 0)
                                            void* esi_68 = eax_617
                                            
                                            if (edx_106 u< 2)
                                            label_70ae3a:
                                                
                                                if (edx_106 - i_9 s< 4)
                                                label_70aec3:
                                                    int32_t* eax_712 = esi_68 + (i_9 << 2)
                                                    int32_t i_14 = edx_106 - i_9
                                                    int32_t i_7
                                                    
                                                    do
                                                        *eax_712 =
                                                            *(eax_712 + ebx_65 - esi_68) f+ *eax_712
                                                        eax_712 = &eax_712[1]
                                                        i_7 = i_14
                                                        i_14 -= 1
                                                    while (i_7 != 1)
                                                else
                                                    void* edx_110 = ebx_65 + 0xc + (i_9 << 2)
                                                    int32_t* eax_711 = esi_68 + ((i_9 + 1) << 2)
                                                    int32_t i_15 = ((var_20_4 - i_9 - 4) u>> 2) + 1
                                                    i_9 += i_15 << 2
                                                    int32_t i_8
                                                    
                                                    do
                                                        eax_711[-1] =
                                                            *(edx_110 - 0xc) f+ eax_711[-1]
                                                        *eax_711 =
                                                            *(eax_711 + ebx_65 - esi_68) f+ *eax_711
                                                        eax_711[1] = *(edx_110 - 4) f+ eax_711[1]
                                                        float xmm0_114 = *edx_110
                                                        edx_110 += 0x10
                                                        eax_711[2] = xmm0_114 f+ eax_711[2]
                                                        eax_711 = &eax_711[4]
                                                        i_8 = i_15
                                                        i_15 -= 1
                                                    while (i_8 != 1)
                                                    edx_106 = var_20_4
                                                    edi_1 = arg4
                                                    
                                                    if (i_9 s< edx_106)
                                                        goto label_70aec3
                                            else
                                                if (esi_68 u<= (edx_106 << 2) - 4 + ebx_65)
                                                    edi_1 = arg4
                                                
                                                if (esi_68 u<= (edx_106 << 2) - 4 + ebx_65
                                                        && (edx_106 << 2) - 4 + esi_68 u>= ebx_65)
                                                    goto label_70ae3a
                                                
                                                if (edx_106 u< 0x10)
                                                label_70ade7:
                                                    int32_t eax_704 = edx_106 & 0x80000001
                                                    
                                                    if (eax_704 s< 0)
                                                        eax_704 = ((eax_704 - 1) | 0xfffffffe) + 1
                                                    
                                                    void* eax_707 = esi_68 + (i_9 << 2)
                                                    edi_1 = arg4
                                                    
                                                    do
                                                        i_9 += 2
                                                        *eax_707 = _mm_add_ps(
                                                            zx.o(*(eax_707 + ebx_65 - esi_68)), 
                                                            zx.o(*eax_707))
                                                        eax_707 += 8
                                                    while (i_9 s< edx_106 - eax_704)
                                                    
                                                    esi_68 = eax_617
                                                else
                                                    int32_t eax_698 = edx_106 & 0x8000000f
                                                    
                                                    if (eax_698 s< 0)
                                                        eax_698 = ((eax_698 - 1) | 0xfffffff0) + 1
                                                    
                                                    void* eax_701 = esi_68 + 0x10
                                                    edi_1 = arg4
                                                    void* edx_108 = ebx_65 + 0x30
                                                    
                                                    do
                                                        i_9 += 0x10
                                                        *(eax_701 - 0x10) = _mm_add_ps(
                                                            *(edx_108 - 0x30), *(eax_701 - 0x10))
                                                        *eax_701 = _mm_add_ps(
                                                            *(ebx_65 - esi_68 + eax_701), *eax_701)
                                                        *(eax_701 + 0x10) = _mm_add_ps(
                                                            *(edx_108 - 0x10), *(eax_701 + 0x10))
                                                        float xmm0_105[0x4] = *edx_108
                                                        edx_108 += 0x40
                                                        *(eax_701 + 0x20) =
                                                            _mm_add_ps(*(eax_701 + 0x20), xmm0_105)
                                                        eax_701 += 0x40
                                                    while (i_9 s< edx_106 - eax_698)
                                                    
                                                    edx_106 = var_20_4
                                                    esi_68 = eax_617
                                                    
                                                    if ((edx_106.b & 0xf) u>= 2)
                                                        goto label_70ade7
                                                
                                                if (i_9 s< edx_106)
                                                    goto label_70ae3a
                                else if (ecx_195 == c)
                                    var_38_8 = *(eax_615 + 0x20)
                                else
                                    var_38_8 = eax_617
                                    memset(eax_617, c, count)
                                
                                esi_59 = var_68_1
                                *(var_40_10 + esi_59[4]) = (
                                    (zx.d(ecx_199.b) << 8 | zx.d(edx_103:1.b)) << 8
                                    | zx.d(edx_103.b)) << 8 | zx.d(ebx_59.b)
                                edx_103, ecx_199 = free(*(esi_59[6] + (var_4c_6 << 2)))
                                int32_t eax_715
                                
                                if (var_38_8 != 0)
                                    int32_t ecx_223 = data_147ded8
                                    int32_t _Size_3 = esi_59[5] << 2
                                    int32_t eax_717
                                    
                                    if (ecx_223 == 0)
                                        eax_717 = malloc(_Size_3)
                                    else
                                        eax_717 = ecx_223(_Size_3, 
                                            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\s"
                                        "pAnimation.c", 
                                            0x47a)
                                    
                                    *(esi_59[6] + (var_4c_6 << 2)) = eax_717
                                    eax_715, ecx_199, edx_103 = memcpy(
                                        *(esi_59[6] + (var_4c_6 << 2)), var_38_8, esi_59[5] << 2)
                                else
                                    eax_715 = esi_59[6]
                                    *(eax_715 + (var_4c_6 << 2)) = 0
                                
                                if (var_4c_6 s< var_1c_3 - 1)
                                    ecx_199, edx_103 = sub_708a00(eax_715, esi_59, edi_1, var_4c_6)
                                
                                var_40_10 = &var_40_10[1]
                                ebx_59 = var_4c_6 + 1
                                var_4c_6 = ebx_59
                            while (ebx_59 s< var_1c_3)
                        
                        free(eax_617)
                        ebx_58 = var_c
                        int32_t eax_722 = *ebx_58
                        
                        if (eax_722 == ebx_58[1])
                            int32_t eax_723 = int.d(_mm_cvtepi32_ps(zx.o(eax_722)) * 1.75f)
                            
                            if (eax_723 s< 8)
                                eax_723 = 8
                            
                            ebx_58[1] = eax_723
                            ebx_58[2] = realloc(ebx_58[2], eax_723 << 2)
                        
                        *(ebx_58[2] + (*ebx_58 << 2)) = esi_59
                        *ebx_58 += 1
                        eax_729 = var_50_7 + 1
                        var_50_7 = eax_729
                        var_10 = __maxss_xmmss_memss(var_10, *(esi_59[4] + (var_1c_3 << 2) - 4))
                    while (eax_729 s< var_28_3)
                    esi_55 = var_54_9
                
                esi_55 += 1
                var_54_9 = esi_55
            while (esi_55 s< var_30_2)
        
        eax_731 = var_58_10 + 1
        var_58_10 = eax_731
    while (eax_731 s< var_34_5)

char* eax_732 = *edi_1
ecx.b = *eax_732
int32_t ebx_74 = zx.d(ecx.b) & 0x7f
*edi_1 = &eax_732[1]
int32_t var_24_4 = ebx_74

if (ecx.b s< 0)
    ecx.b = eax_732[1]
    *edi_1 = &eax_732[2]
    ebx_74 |= (zx.d(ecx.b) & 0x7f) << 7
    var_24_4 = ebx_74
    
    if (ecx.b s< 0)
        ecx.b = eax_732[2]
        *edi_1 = &eax_732[3]
        ebx_74 |= (zx.d(ecx.b) & 0x7f) << 0xe
        var_24_4 = ebx_74
        
        if (ecx.b s< 0)
            ecx.b = eax_732[3]
            *edi_1 = &eax_732[4]
            ebx_74 |= (zx.d(ecx.b) & 0x7f) << 0x15
            var_24_4 = ebx_74
            
            if (ecx.b s< 0)
                ecx.b = eax_732[4]
                *edi_1 = &eax_732[5]
                ebx_74 |= zx.d(ecx.b) << 0x1c
                var_24_4 = ebx_74

if (ebx_74 != 0)
    int32_t eax_746 = *(arg5 + 0x28)
    int32_t eax_747 = data_147ded8
    int32_t* var_58_11
    int32_t* esi_71
    
    if (eax_747 == 0)
        int32_t* eax_754 = malloc(0x18)
        var_58_11 = eax_754
        esi_71 = eax_754
    else
        esi_71 =
            eax_747(0x18, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x501)
        var_58_11 = esi_71
    
    if (esi_71 != 0)
        __builtin_memset(esi_71, 0, 0x18)
    
    int32_t eax_755 = data_147ded8
    *esi_71 = 8
    int32_t* eax_756
    
    if (eax_755 == 0)
        eax_756 = malloc(0xc)
    else
        eax_756 =
            eax_755(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x52)
    
    if (eax_756 != 0)
        *eax_756 = 0
        eax_756[1] = 0
    
    esi_71[1] = eax_756
    eax_756[2] = sub_718810
    *esi_71[1] = sub_718700
    *(esi_71[1] + 4) = sub_718800
    int32_t eax_759 = data_147ded8
    esi_71[2] = ebx_74
    int32_t ebx_75 = ebx_74 << 2
    int32_t* eax_760
    
    if (eax_759 == 0)
        eax_760 = malloc(ebx_75)
    else
        eax_760 = eax_759(ebx_75, 
            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x505)
    
    if (eax_760 != 0)
        memset(eax_760, 0, ebx_75)
    
    esi_71[3] = eax_760
    int32_t eax_761 = data_147ded8
    int32_t* eax_762
    int16_t edx_116
    
    if (eax_761 == 0)
        eax_762, edx_116 = malloc(ebx_75)
    else
        eax_762, edx_116 = eax_761(ebx_75, 
            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x506)
    
    if (eax_762 != 0)
        memset(eax_762, 0, ebx_75)
    
    int32_t ebx_76 = var_24_4
    esi_71[4] = eax_762
    esi_71[5] = eax_746
    int32_t var_30_3 = 0
    
    if (ebx_76 s> 0)
        uint32_t* var_3c_7 = nullptr
        int32_t eax_845
        
        do
            char* eax_764 = *edi_1
            char ecx_229 = *eax_764
            *edi_1 = &eax_764[1]
            edx_116:1.b = eax_764[1]
            *edi_1 = &eax_764[2]
            edx_116.b = eax_764[2]
            *edi_1 = &eax_764[3]
            ebx_76.b = eax_764[3]
            *edi_1 = &eax_764[4]
            uint32_t eax_770
            eax_770.b = eax_764[4]
            int32_t* ebx_78 = zx.d(eax_770.b) & 0x7f
            *edi_1 = &eax_764[5]
            arg4 = ebx_78
            
            if (eax_770.b s< 0)
                uint32_t ecx_236
                ecx_236.b = eax_764[5]
                *edi_1 = &eax_764[6]
                ebx_78 |= (zx.d(ecx_236.b) & 0x7f) << 7
                arg4 = ebx_78
                
                if (ecx_236.b s< 0)
                    ecx_236.b = eax_764[6]
                    *edi_1 = &eax_764[7]
                    ebx_78 |= (zx.d(ecx_236.b) & 0x7f) << 0xe
                    arg4 = ebx_78
                    
                    if (ecx_236.b s< 0)
                        ecx_236.b = eax_764[7]
                        *edi_1 = &eax_764[8]
                        ebx_78 |= (zx.d(ecx_236.b) & 0x7f) << 0x15
                        arg4 = ebx_78
                        
                        if (ecx_236.b s< 0)
                            ecx_236.b = eax_764[8]
                            *edi_1 = &eax_764[9]
                            ebx_78 |= zx.d(ecx_236.b) << 0x1c
                            arg4 = ebx_78
            
            int32_t ecx_237 = data_147ded8
            int32_t _Size_4 = *(arg5 + 0x28) << 2
            int32_t eax_784
            
            if (ecx_237 == 0)
                eax_784 = malloc(_Size_4)
            else
                eax_784 = ecx_237(_Size_4, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x226)
            
            int32_t ecx_238 = data_147ded8
            int32_t _Size_5 = (*(arg5 + 0x28) - ebx_78) << 2
            int32_t eax_787
            
            if (ecx_238 == 0)
                eax_787 = malloc(_Size_5)
            else
                eax_787 = ecx_238(_Size_5, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x227)
            
            int32_t esi_74 = 0
            int32_t ebx_79 = 0
            memset(eax_784, 0xffffffff, *(arg5 + 0x28) << 2)
            
            if (arg4 s> 0)
                int32_t* i_10
                
                do
                    char* eax_791 = *edi_1
                    int32_t ecx_239
                    ecx_239.b = *eax_791
                    int32_t edx_122 = zx.d(ecx_239.b) & 0x7f
                    *edi_1 = &eax_791[1]
                    
                    if (ecx_239.b s< 0)
                        ecx_239.b = eax_791[1]
                        *edi_1 = &eax_791[2]
                        edx_122 |= (zx.d(ecx_239.b) & 0x7f) << 7
                        
                        if (ecx_239.b s< 0)
                            ecx_239.b = eax_791[2]
                            *edi_1 = &eax_791[3]
                            edx_122 |= (zx.d(ecx_239.b) & 0x7f) << 0xe
                            
                            if (ecx_239.b s< 0)
                                ecx_239.b = eax_791[3]
                                *edi_1 = &eax_791[4]
                                edx_122 |= (zx.d(ecx_239.b) & 0x7f) << 0x15
                                
                                if (ecx_239.b s< 0)
                                    ecx_239.b = eax_791[4]
                                    *edi_1 = &eax_791[5]
                                    edx_122 |= zx.d(ecx_239.b) << 0x1c
                    
                    while (esi_74 != edx_122)
                        *(eax_787 + (ebx_79 << 2)) = esi_74
                        esi_74 += 1
                        ebx_79 += 1
                    
                    char* eax_812 = *edi_1
                    ecx_239.b = *eax_812
                    int32_t edx_124 = zx.d(ecx_239.b) & 0x7f
                    *edi_1 = &eax_812[1]
                    
                    if (ecx_239.b s< 0)
                        ecx_239.b = eax_812[1]
                        *edi_1 = &eax_812[2]
                        edx_124 |= (zx.d(ecx_239.b) & 0x7f) << 7
                        
                        if (ecx_239.b s< 0)
                            ecx_239.b = eax_812[2]
                            *edi_1 = &eax_812[3]
                            edx_124 |= (zx.d(ecx_239.b) & 0x7f) << 0xe
                            
                            if (ecx_239.b s< 0)
                                ecx_239.b = eax_812[3]
                                *edi_1 = &eax_812[4]
                                edx_124 |= (zx.d(ecx_239.b) & 0x7f) << 0x15
                                
                                if (ecx_239.b s< 0)
                                    ecx_239.b = eax_812[4]
                                    *edi_1 = &eax_812[5]
                                    edx_124 |= zx.d(ecx_239.b) << 0x1c
                    
                    *(eax_784 + ((edx_124 + esi_74) << 2)) = esi_74
                    esi_74 += 1
                    i_10 = arg4
                    arg4 -= 1
                while (i_10 != 1)
            
            int32_t edx_125 = *(arg5 + 0x28)
            
            while (esi_74 s< edx_125)
                *(eax_787 + (ebx_79 << 2)) = esi_74
                esi_74 += 1
                edx_125 = *(arg5 + 0x28)
                ebx_79 += 1
            
            int32_t edx_126 = edx_125 - 1
            int32_t ebx_80
            
            if (edx_125 - 1 s< 0)
                ebx_80 = eax_784
            else
                void* esi_75 = eax_787 + (ebx_79 << 2)
                ebx_80 = eax_784
                int32_t temp18_1
                
                do
                    if (*(ebx_80 + (edx_126 << 2)) == 0xffffffff)
                        int32_t eax_834 = *(esi_75 - 4)
                        esi_75 -= 4
                        *(ebx_80 + (edx_126 << 2)) = eax_834
                    
                    temp18_1 = edx_126
                    edx_126 -= 1
                while (temp18_1 - 1 s>= 0)
            
            free(eax_787)
            esi_71 = var_58_11
            *(var_3c_7 + esi_71[3]) =
                ((zx.d(ecx_229) << 8 | zx.d(edx_116:1.b)) << 8 | zx.d(edx_116.b)) << 8
                | zx.d(ebx_76.b)
            free(*(esi_71[4] + (var_30_3 << 2)))
            
            if (ebx_80 != 0)
                int32_t ecx_244 = data_147ded8
                int32_t _Size_6 = esi_71[5] << 2
                int32_t eax_839
                
                if (ecx_244 == 0)
                    eax_839 = malloc(_Size_6)
                else
                    eax_839 = ecx_244(_Size_6, 
                        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x513)
                
                *(esi_71[4] + (var_30_3 << 2)) = eax_839
                memcpy(*(esi_71[4] + (var_30_3 << 2)), ebx_80, esi_71[5] << 2)
            else
                *(esi_71[4] + (var_30_3 << 2)) = ebx_80
            
            free(ebx_80)
            var_3c_7 = &var_3c_7[1]
            eax_845 = var_30_3 + 1
            ebx_76 = var_24_4
            var_30_3 = eax_845
        while (eax_845 s< ebx_76)
    
    int32_t* edx_128 = var_c
    int32_t eax_846 = *edx_128
    
    if (eax_846 == edx_128[1])
        int32_t eax_847 = int.d(_mm_cvtepi32_ps(zx.o(eax_846)) * 1.75f)
        
        if (eax_847 s< 8)
            eax_847 = 8
        
        edx_128[1] = eax_847
        int32_t eax_849 = realloc(edx_128[2], eax_847 << 2)
        edx_128 = var_c
        edx_128[2] = eax_849
    
    *(edx_128[2] + (*edx_128 << 2)) = esi_71
    *edx_128 += 1
    var_10 = __maxss_xmmss_memss(var_10, *(esi_71[3] + (ebx_76 << 2) - 4))

char* eax_852 = *edi_1
ecx.b = *eax_852
int32_t* esi_77 = zx.d(ecx.b) & 0x7f
*edi_1 = &eax_852[1]
arg4 = esi_77

if (ecx.b s< 0)
    ecx.b = eax_852[1]
    *edi_1 = &eax_852[2]
    esi_77 |= (zx.d(ecx.b) & 0x7f) << 7
    arg4 = esi_77
    
    if (ecx.b s< 0)
        ecx.b = eax_852[2]
        *edi_1 = &eax_852[3]
        esi_77 |= (zx.d(ecx.b) & 0x7f) << 0xe
        arg4 = esi_77
        
        if (ecx.b s< 0)
            ecx.b = eax_852[3]
            *edi_1 = &eax_852[4]
            esi_77 |= (zx.d(ecx.b) & 0x7f) << 0x15
            arg4 = esi_77
            
            if (ecx.b s< 0)
                ecx.b = eax_852[4]
                *edi_1 = &eax_852[5]
                esi_77 |= zx.d(ecx.b) << 0x1c
                arg4 = esi_77

int32_t* edi_7

if (esi_77 == 0)
    edi_7 = var_c
else
    int32_t eax_865 = data_147ded8
    int32_t* var_54_10
    int32_t* ebx_81
    
    if (eax_865 == 0)
        int32_t* eax_867 = malloc(0x14)
        var_54_10 = eax_867
        ebx_81 = eax_867
    else
        ebx_81 =
            eax_865(0x14, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x4b6)
        var_54_10 = ebx_81
    
    if (ebx_81 != 0)
        ebx_81[1] = 0
        ebx_81[2] = 0
        ebx_81[3] = 0
        ebx_81[4] = 0
    
    int32_t eax_868 = data_147ded8
    *ebx_81 = 7
    int32_t* eax_869
    
    if (eax_868 == 0)
        eax_869 = malloc(0xc)
    else
        eax_869 =
            eax_868(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x52)
    
    if (eax_869 != 0)
        *eax_869 = 0
        eax_869[1] = 0
    
    int32_t ecx_246 = data_147ded8
    ebx_81[1] = eax_869
    eax_869[2] = sub_718690
    *ebx_81[1] = sub_718540
    *(ebx_81[1] + 4) = sub_718680
    int32_t _Size_7 = esi_77 << 2
    ebx_81[2] = esi_77
    int32_t var_58_12
    int32_t ecx_247
    
    if (ecx_246 == 0)
        int32_t eax_873 = malloc(_Size_7)
        var_58_12 = eax_873
        ecx_247 = eax_873
    else
        ecx_247 = ecx_246(_Size_7, 
            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x4ba)
        var_58_12 = ecx_247
    
    if (ecx_247 != 0)
        memset(ecx_247, 0, esi_77 << 2)
        ecx_247 = var_58_12
    
    ebx_81[3] = ecx_247
    int32_t _Size_8 = esi_77 << 2
    int32_t ecx_248 = data_147ded8
    int32_t var_58_13
    int32_t ecx_249
    int16_t edx_133
    
    if (ecx_248 == 0)
        int32_t eax_876
        eax_876, edx_133 = malloc(_Size_8)
        var_58_13 = eax_876
        ecx_249 = eax_876
    else
        int32_t eax_875
        eax_875, edx_133 = ecx_248(_Size_8, 
            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x4bb)
        ecx_249 = eax_875
        var_58_13 = ecx_249
    
    if (ecx_249 != 0)
        memset(ecx_249, 0, esi_77 << 2)
        ecx_249 = var_58_13
    
    ebx_81[4] = ecx_249
    int32_t var_3c_8 = 0
    
    if (esi_77 s> 0)
        do
            char* eax_878 = *edi_1
            ecx_249.b = *eax_878
            *edi_1 = &eax_878[1]
            edx_133:1.b = eax_878[1]
            *edi_1 = &eax_878[2]
            edx_133.b = eax_878[2]
            *edi_1 = &eax_878[3]
            ebx_81.b = eax_878[3]
            *edi_1 = &eax_878[4]
            uint32_t eax_884
            eax_884.b = eax_878[4]
            int32_t edx_135 = zx.d(eax_884.b) & 0x7f
            *edi_1 = &eax_878[5]
            
            if (eax_884.b s< 0)
                uint32_t ecx_256
                ecx_256.b = eax_878[5]
                *edi_1 = &eax_878[6]
                edx_135 |= (zx.d(ecx_256.b) & 0x7f) << 7
                
                if (ecx_256.b s< 0)
                    ecx_256.b = eax_878[6]
                    *edi_1 = &eax_878[7]
                    edx_135 |= (zx.d(ecx_256.b) & 0x7f) << 0xe
                    
                    if (ecx_256.b s< 0)
                        ecx_256.b = eax_878[7]
                        *edi_1 = &eax_878[8]
                        edx_135 |= (zx.d(ecx_256.b) & 0x7f) << 0x15
                        
                        if (ecx_256.b s< 0)
                            ecx_256.b = eax_878[8]
                            *edi_1 = &eax_878[9]
                            edx_135 |= zx.d(ecx_256.b) << 0x1c
            
            void* ebx_82 = *(*(arg5 + 0x40) + (edx_135 << 2))
            int32_t eax_899 = data_147ded8
            int32_t* var_40_13
            int32_t* esi_83
            
            if (eax_899 == 0)
                int32_t* eax_901 = malloc(0x1c)
                var_40_13 = eax_901
                esi_83 = eax_901
            else
                esi_83 =
                    eax_899(0x1c, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Event.c", 0x22)
                var_40_13 = esi_83
            
            if (esi_83 != 0)
                __builtin_memset(&esi_83[2], 0, 0x14)
            
            *esi_83 = ebx_82
            esi_83[1] = ((zx.d(ecx_249.b) << 8 | zx.d(edx_133:1.b)) << 8 | zx.d(edx_133.b)) << 8
                | zx.d(ebx_81.b)
            char* eax_902 = *edi_1
            char ecx_257 = *eax_902
            int32_t edx_137 = zx.d(ecx_257) & 0x7f
            *edi_1 = &eax_902[1]
            
            if (ecx_257 s< 0)
                ecx_257 = eax_902[1]
                *edi_1 = &eax_902[2]
                edx_137 |= (zx.d(ecx_257) & 0x7f) << 7
                
                if (ecx_257 s< 0)
                    ecx_257 = eax_902[2]
                    *edi_1 = &eax_902[3]
                    edx_137 |= (zx.d(ecx_257) & 0x7f) << 0xe
                    
                    if (ecx_257 s< 0)
                        ecx_257 = eax_902[3]
                        *edi_1 = &eax_902[4]
                        edx_137 |= (zx.d(ecx_257) & 0x7f) << 0x15
                        
                        if (ecx_257 s< 0)
                            ecx_257 = eax_902[4]
                            *edi_1 = &eax_902[5]
                            edx_137 |= zx.d(ecx_257) << 0x1c
            
            esi_83[2] = edx_137 u>> 1 ^ neg.d(edx_137 & 1)
            char* eax_918 = *edi_1
            ecx_257 = *eax_918
            *edi_1 = &eax_918[1]
            int32_t edx_139
            edx_139:1.b = eax_918[1]
            *edi_1 = &eax_918[2]
            edx_139.b = eax_918[2]
            *edi_1 = &eax_918[3]
            void* ebx_83
            ebx_83.b = eax_918[3]
            *edi_1 = &eax_918[4]
            esi_83[3] = ((zx.d(ecx_257) << 8 | zx.d(edx_139:1.b)) << 8 | zx.d(edx_139.b)) << 8
                | zx.d(ebx_83.b)
            char* eax_926 = *edi_1
            uint32_t ecx_264
            ecx_264.b = *eax_926
            *edi_1 = &eax_926[1]
            void* ecx_266
            int16_t edx_140
            void* ebx_84
            
            if (ecx_264.b == 0)
                ebx_84 = ebx_82
                char* esi_84 = *(ebx_84 + 0xc)
                char* ecx_267 = esi_84
                void* edx_141 = &ecx_267[1]
                void* eax_927
                
                do
                    eax_927.b = *ecx_267
                    ecx_267 = &ecx_267[1]
                while (eax_927.b != 0)
                int32_t eax_929 = data_147ded8
                int32_t eax_930
                
                if (eax_929 == 0)
                    eax_930, edx_140 = malloc(ecx_267 - edx_141 + 1)
                else
                    eax_930, edx_140 = eax_929(ecx_267 - edx_141 + 1, 
                        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x24f)
                
                var_40_13[4] = eax_930
                ecx_266 = eax_930 - esi_84
                int32_t* eax_931
                
                do
                    eax_931.b = *esi_84
                    esi_84 = &esi_84[1]
                    *(esi_84 + ecx_266 - 1) = eax_931.b
                while (eax_931.b != 0)
                esi_83 = var_40_13
            else
                int32_t eax_928
                eax_928, ecx_266, edx_140 = sub_7088b0(edi_1)
                ebx_84 = ebx_82
                esi_83[4] = eax_928
            
            if (*(ebx_84 + 0x10) != 0)
                char* eax_932 = *edi_1
                ecx_266.b = *eax_932
                *edi_1 = &eax_932[1]
                edx_140:1.b = eax_932[1]
                *edi_1 = &eax_932[2]
                edx_140.b = eax_932[2]
                *edi_1 = &eax_932[3]
                ebx_84.b = eax_932[3]
                *edi_1 = &eax_932[4]
                esi_83[5] = ((zx.d(ecx_266.b) << 8 | zx.d(edx_140:1.b)) << 8 | zx.d(edx_140.b)) << 8
                    | zx.d(ebx_84.b)
                char* eax_940 = *edi_1
                uint32_t ecx_277
                ecx_277.b = *eax_940
                *edi_1 = &eax_940[1]
                edx_140:1.b = eax_940[1]
                *edi_1 = &eax_940[2]
                edx_140.b = eax_940[2]
                *edi_1 = &eax_940[3]
                ebx_84.b = eax_940[3]
                *edi_1 = &eax_940[4]
                esi_83[6] = ((zx.d(ecx_277.b) << 8 | zx.d(edx_140:1.b)) << 8 | zx.d(edx_140.b)) << 8
                    | zx.d(ebx_84.b)
            
            ebx_81 = var_54_10
            *(ebx_81[3] + (var_3c_8 << 2)) = esi_83[1]
            free(*(ebx_81[4] + (var_3c_8 << 2)))
            *(ebx_81[4] + (var_3c_8 << 2)) = esi_83
            ecx_249 = var_3c_8 + 1
            esi_77 = arg4
            var_3c_8 = ecx_249
        while (ecx_249 s< esi_77)
    
    edi_7 = var_c
    int32_t eax_951 = *edi_7
    
    if (eax_951 == edi_7[1])
        int32_t eax_952 = int.d(_mm_cvtepi32_ps(zx.o(eax_951)) * 1.75f)
        
        if (eax_952 s< 8)
            eax_952 = 8
        
        edi_7[1] = eax_952
        edi_7[2] = realloc(edi_7[2], eax_952 << 2)
    
    *(edi_7[2] + (*edi_7 << 2)) = ebx_81
    *edi_7 += 1
    var_10 = __maxss_xmmss_memss(var_10, *(ebx_81[3] + (esi_77 << 2) - 4))

int128_t* result = sub_714870(arg2)
free(*(result + 0xc))
*(result + 4) = var_10
*(result + 8) = *edi_7
*(result + 0xc) = edi_7[2]
free(edi_7)
return result
