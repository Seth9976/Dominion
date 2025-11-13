// 函数: sub_70bd10
// 地址: 0x70bd10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = arg5 * 2
int32_t* edi = arg2
int32_t eax_2 = data_147ded8
void** var_18 = edi
int32_t* eax_3

if (eax_2 == 0)
    eax_3 = malloc(0xc)
else
    eax_3 = eax_2(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Array.c", 0x21)

if (eax_3 != 0)
    eax_3[2] = 0

int32_t eax_4 = data_147ded8
*eax_3 = 0
eax_3[1] = 8
int32_t eax_5

if (eax_4 == 0)
    eax_5 = malloc(0x20)
else
    eax_5 = eax_4(0x20, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Array.c", 0x21)

if (eax_5 != 0)
    __builtin_memset(eax_5, 0, 0x20)

eax_3[2] = eax_5
int32_t* eax_6 = sub_7523c0(8)
int32_t eax_7 = eax_1
*(arg4 + 0x24) = eax_7
char* ecx_1 = *edi
int32_t ebx
ebx.b = *ecx_1
*edi = &ecx_1[1]

if (ebx.b == 0)
    *(arg4 + 0x1c) = eax_7
    *(arg4 + 0x20) = sub_70bb10(edi, eax_7, *arg3)
    *(arg4 + 0x14) = 0
    *(arg4 + 0x18) = 0
    free(eax_3[2])
    free(eax_3)
    free(eax_6[2])
    return free(eax_6)

int32_t ecx_5 = eax_7 * 9

if (eax_3[1] s< ecx_5)
    eax_3[1] = ecx_5
    int32_t eax_11
    eax_11, ecx_5 = realloc(eax_3[2], ecx_5 << 2)
    eax_3[2] = eax_11
    eax_7 = eax_1

int32_t* ebx_2 = eax_6
int32_t eax_12 = eax_7 * 3

if (ebx_2[1] s< eax_12)
    ebx_2[1] = eax_12
    int32_t eax_14
    eax_14, ecx_5 = realloc(ebx_2[2], eax_12 << 2)
    ebx_2[2] = eax_14

if (arg5 s> 0)
    int32_t i
    
    do
        char* eax_15 = *edi
        ecx_5.b = *eax_15
        void** j_2 = zx.d(ecx_5.b) & 0x7f
        *edi = &eax_15[1]
        void** j_1 = j_2
        
        if (ecx_5.b s< 0)
            ecx_5.b = eax_15[1]
            *edi = &eax_15[2]
            j_2 |= (zx.d(ecx_5.b) & 0x7f) << 7
            j_1 = j_2
            
            if (ecx_5.b s< 0)
                ecx_5.b = eax_15[2]
                *edi = &eax_15[3]
                j_2 |= (zx.d(ecx_5.b) & 0x7f) << 0xe
                j_1 = j_2
                
                if (ecx_5.b s< 0)
                    ecx_5.b = eax_15[3]
                    *edi = &eax_15[4]
                    j_2 |= (zx.d(ecx_5.b) & 0x7f) << 0x15
                    j_1 = j_2
                    
                    if (ecx_5.b s< 0)
                        ecx_5.b = eax_15[4]
                        *edi = &eax_15[5]
                        j_2 |= zx.d(ecx_5.b) << 0x1c
                        j_1 = j_2
        
        int32_t eax_35 = *ebx_2
        
        if (eax_35 == ebx_2[1])
            int32_t eax_36 = int.d(_mm_cvtepi32_ps(zx.o(eax_35)) * 1.75f)
            
            if (eax_36 s< 8)
                eax_36 = 8
            
            ebx_2[1] = eax_36
            j_2 = j_1
            ebx_2[2] = realloc(ebx_2[2], eax_36 << 2)
        
        *(ebx_2[2] + (*ebx_2 << 2)) = j_2
        *ebx_2 += 1
        
        if (j_2 s> 0)
            void** j
            
            do
                char* eax_40 = *edi
                ecx_5.b = *eax_40
                *edi = &eax_40[1]
                int32_t edi_2 = zx.d(ecx_5.b) & 0x7f
                
                if (ecx_5.b s< 0)
                    ecx_5.b = eax_40[1]
                    *var_18 = &eax_40[2]
                    edi_2 |= (zx.d(ecx_5.b) & 0x7f) << 7
                    
                    if (ecx_5.b s< 0)
                        ecx_5.b = eax_40[2]
                        *var_18 = &eax_40[3]
                        edi_2 |= (zx.d(ecx_5.b) & 0x7f) << 0xe
                        
                        if (ecx_5.b s< 0)
                            ecx_5.b = eax_40[3]
                            *var_18 = &eax_40[4]
                            edi_2 |= (zx.d(ecx_5.b) & 0x7f) << 0x15
                            
                            if (ecx_5.b s< 0)
                                ecx_5.b = eax_40[4]
                                *var_18 = &eax_40[5]
                                edi_2 |= zx.d(ecx_5.b) << 0x1c
                
                int32_t eax_60 = *ebx_2
                
                if (eax_60 == ebx_2[1])
                    int32_t eax_61 = int.d(_mm_cvtepi32_ps(zx.o(eax_60)) * 1.75f)
                    
                    if (eax_61 s< 8)
                        eax_61 = 8
                    
                    ebx_2[1] = eax_61
                    int32_t eax_63
                    eax_63, j_2 = realloc(ebx_2[2], eax_61 << 2)
                    ebx_2[2] = eax_63
                
                *(ebx_2[2] + (*ebx_2 << 2)) = edi_2
                *ebx_2 += 1
                edi = var_18
                char* eax_65 = *edi
                int32_t ecx_6
                ecx_6.b = *eax_65
                *edi = &eax_65[1]
                j_2:1.b = eax_65[1]
                *edi = &eax_65[2]
                j_2.b = eax_65[2]
                *edi = &eax_65[3]
                ebx_2.b = eax_65[3]
                *edi = &eax_65[4]
                int32_t eax_73 = *eax_3
                float xmm0_8 = (((zx.d(ecx_6.b) << 8 | zx.d(j_2:1.b)) << 8 | zx.d(j_2.b)) << 8
                    | zx.d(ebx_2.b)) f* *arg3
                
                if (eax_73 == eax_3[1])
                    int32_t eax_74 = int.d(_mm_cvtepi32_ps(zx.o(eax_73)) * 1.75f)
                    
                    if (eax_74 s< 8)
                        eax_74 = 8
                    
                    eax_3[1] = eax_74
                    int32_t eax_76
                    eax_76, j_2 = realloc(eax_3[2], eax_74 << 2)
                    eax_3[2] = eax_76
                
                *(eax_3[2] + (*eax_3 << 2)) = xmm0_8
                *eax_3 += 1
                char* eax_78 = *edi
                int32_t ecx_15
                ecx_15.b = *eax_78
                *edi = &eax_78[1]
                j_2:1.b = eax_78[1]
                *edi = &eax_78[2]
                j_2.b = eax_78[2]
                *edi = &eax_78[3]
                ebx_2.b = eax_78[3]
                *edi = &eax_78[4]
                float xmm0_13 = (((zx.d(ecx_15.b) << 8 | zx.d(j_2:1.b)) << 8 | zx.d(j_2.b)) << 8
                    | zx.d(ebx_2.b)) f* *arg3
                int32_t eax_87 = *eax_3
                
                if (eax_87 == eax_3[1])
                    int32_t eax_88 = int.d(_mm_cvtepi32_ps(zx.o(eax_87)) * 1.75f)
                    
                    if (eax_88 s< 8)
                        eax_88 = 8
                    
                    eax_3[1] = eax_88
                    int32_t eax_90
                    eax_90, j_2 = realloc(eax_3[2], eax_88 << 2)
                    eax_3[2] = eax_90
                
                *(eax_3[2] + (*eax_3 << 2)) = xmm0_13
                *eax_3 += 1
                char* eax_92 = *edi
                int32_t ecx_23
                ecx_23.b = *eax_92
                *edi = &eax_92[1]
                j_2:1.b = eax_92[1]
                *edi = &eax_92[2]
                j_2.b = eax_92[2]
                *edi = &eax_92[3]
                ebx_2.b = eax_92[3]
                *edi = &eax_92[4]
                uint32_t ecx_30 =
                    ((zx.d(ecx_23.b) << 8 | zx.d(j_2:1.b)) << 8 | zx.d(j_2.b)) << 8 | zx.d(ebx_2.b)
                int32_t eax_100 = *eax_3
                
                if (eax_100 == eax_3[1])
                    int32_t eax_101 = int.d(_mm_cvtepi32_ps(zx.o(eax_100)) * 1.75f)
                    
                    if (eax_101 s< 8)
                        eax_101 = 8
                    
                    eax_3[1] = eax_101
                    int32_t eax_103
                    eax_103, j_2 = realloc(eax_3[2], eax_101 << 2)
                    eax_3[2] = eax_103
                
                ebx_2 = eax_6
                *(eax_3[2] + (*eax_3 << 2)) = ecx_30
                *eax_3 += 1
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i = arg5
        arg5 -= 1
    while (i != 1)

*(arg4 + 0x1c) = *eax_3
*(arg4 + 0x20) = eax_3[2]
free(eax_3)
*(arg4 + 0x14) = *ebx_2
*(arg4 + 0x18) = ebx_2[2]
return free(ebx_2)
