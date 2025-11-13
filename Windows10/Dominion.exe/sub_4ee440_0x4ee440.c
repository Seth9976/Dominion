// 函数: sub_4ee440
// 地址: 0x4ee440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* ebx = arg3
int32_t var_140 = 0
int32_t var_138 = 0
void* var_144 = ebx
int16_t var_130 = -0x3e7
int32_t var_13c = 0
void var_38
sub_58bc10(ebx, &var_38)
*arg5 = zx.o(0)
memset(arg5 + 0x18, 0, *(ebx + 0x1520) * 0x68)
memset(arg5 + 0x14518, 0, *(ebx + 0xd38) * 0x44)
int32_t edx_1 = *(ebx + 0xd38)
int32_t var_98[0x6]
int32_t var_80[0x6]
int32_t var_68[0x6]
void var_50
void var_20

if (edx_1 s> 0)
    int32_t edx_2 = edx_1 << 2
    __builtin_memset(&var_98, 0, edx_2 u>> 2 << 2)
    __builtin_memset(&var_80, 0, edx_2 u>> 2 << 2)
    __builtin_memset(&var_68, 0, edx_2 u>> 2 << 2)
    __builtin_memset(&var_50, 0, edx_2 u>> 2 << 2)
    __builtin_memset(&var_20, 0, edx_2 u>> 2 << 2)

int32_t esi_1 = *(ebx + 0xd38)
void* i = &data_19e1450
__builtin_memset(&data_19e1708, 0, 0x74)

do
    if (esi_1 s> 0)
        __builtin_memset(i, 0, esi_1 << 2)
    
    i += 0x18
while (i s< &data_19e1708)

int128_t* esi_2 = arg5
void* ecx_15 = ebx + 0x1594
int32_t i_1 = 7
void* var_128 = ecx_15
int32_t i_8 = 7
int32_t var_11c

do
    int32_t eax_7 = *ecx_15
    
    if (eax_7 != 0 && eax_7 != 0x1301 && eax_7 != 0xd30 && eax_7 != 0xd3d && eax_7 != 0x1128)
        void* eax_8 = *(ecx_15 + 8)
        
        if (eax_8 != 0)
            int32_t eax_9 = sub_4ee340(eax_8, esi_2, ebx, eax_8)
            
            if (i_1 u< 0x21)
                (&var_11c)[var_140] = eax_9
                var_140 += 1
            
            int32_t ecx_21 = *var_128
            
            if (ecx_21 == 0x103)
                var_138 = eax_9
            else if (ecx_21 != 0x601)
                int32_t edx_7 = var_138
                int32_t eax_10 = var_13c
                int32_t var_138_1 = edx_7
                int32_t var_13c_1 = eax_10
                var_138 = edx_7
                var_13c = eax_10
                
                if (ecx_21 != 0x70d)
                    int32_t var_138_2 = edx_7
                    int32_t var_13c_2 = eax_10
                    var_138 = edx_7
                    var_13c = eax_10
                
                if (ecx_21 == 0x70d || ecx_21 == 0x718)
                    for (void* j = *(eax_8 * 0x64 + ebx + 0x1aa4); j != 0; 
                            j = *(eax_10 + ebx + 0x1aa4))
                        sub_4ee340(eax_10, esi_2, ebx, j)
                        eax_10 = j * 0x64
                    
                    i_1 = i_8
            else
                var_13c = eax_9
            
            ecx_15 = var_128
        else if (i_1 u< 0x21)
            *(esi_2 + 2) += 1
            (&var_11c)[var_140] = eax_8
            var_140 += 1
    
    i_1 += 1
    ecx_15 += 0x10
    i_8 = i_1
    var_128 = ecx_15
while (i_1 s< 0x47)

int32_t i_2 = 1
int32_t i_7 = 1
int32_t var_164_2
char const* const var_160_5
uint32_t eax_12
char* ecx_37

if (*(ebx + 0x1520) s> 1)
    do
        void* edx_10 = ebx + 0x1a48 + i_2 * 0x64
        uint32_t ecx_23 = *(edx_10 + 8)
        eax_12 = ecx_23
        int32_t ebx_1 = *(edx_10 + 0x28)
        int32_t edi_3
        
        if (eax_12 s<= 0x3e9)
            if (eax_12 == 0x3e9)
            label_4ee7cf:
                edi_3 = 6
                goto label_4ee95f
            
            eax_12 -= 1
            
            if (eax_12 u> 5)
                goto label_4ee926
            
            switch (eax_12)
                case 0, 2, 5
                    edi_3 = 3
                    goto label_4ee928
                case 1
                    edi_3 = 1
                    goto label_4ee95f
                case 3
                    goto label_4ee926
                case 4
                    edi_3 = 3
                    goto label_4ee95f
        else if (eax_12 - 0x3ea u> 0x8a)
        label_4ee926:
            edi_3 = 0
        label_4ee928:
            
            if ((ecx_23 s< 7 || ecx_23 s> 0x21) && (ecx_23 s< 0x27 || ecx_23 s> 0x47)
                    && ecx_23 != 1)
                goto label_4ee953
        else
            eax_12 = zx.d(*(eax_12 + 0x4ef1b2))
            
            switch (eax_12)
                case 0
                    edi_3 = 7
                label_4ee953:
                    eax_12 = 4
                    
                    if (ecx_23 - 0x22 u<= 4)
                        edi_3 = 4
                    
                    goto label_4ee95f
                case 1
                    edi_3 = 8
                    goto label_4ee95f
                case 2
                    edi_3 = 9
                    goto label_4ee95f
                case 3
                    edi_3 = 0xa
                    goto label_4ee953
                case 4
                    goto label_4ee7cf
                case 5
                    edi_3 = 8
                    goto label_4ee953
                case 6
                    edi_3 = 0xc
                    goto label_4ee95f
                case 7
                label_4ee918:
                    edi_3 = 0xb
                    goto label_4ee95f
                case 8
                    edi_3 = 0x12
                    goto label_4ee95f
                case 9
                label_4ee801:
                    edi_3 = 0x15
                    goto label_4ee95f
                case 0xa
                label_4ee8c7:
                    edi_3 = 5
                    goto label_4ee95f
                case 0xb
                label_4ee91f:
                    edi_3 = 0x13
                    goto label_4ee95f
                case 0xc
                    edi_3 = 0xd
                label_4ee95f:
                    
                    if ((*(edx_10 + 0x24) & 0x20) != 0)
                        edi_3 = 0x11
                    else if (edi_3 == 7)
                        if (ebx_1 s< 0)
                            var_160_5 = "MakeInputs"
                            var_164_2 = 0x98e
                            ecx_37 = "owner >= 0"
                            goto label_4ef523
                        
                        eax_12 = ebx_1 * 0x11
                        *(esi_2 + (eax_12 << 2) + 0x14532) += 1
                    
                    if (*(edx_10 + (arg4 << 2) + 0x3c) == 0)
                        edi_3 = 0x1c
                    else if (edi_3 == 0)
                        var_160_5 = "MakeInputs"
                        var_164_2 = 0x998
                        ecx_37 = "mw != MW_NONE"
                        goto label_4ef523
                    
                    void* var_160_4 = edx_10 + 0x3c
                    sub_4ee1a0(edx_10 + 0x3c, arg4, arg4, esi_2, i_7, *(edx_10 + 4), ebx_1, 
                        edi_3.b, *(edx_10 + 0x24))
                    
                    if (edi_3 == 7 && (*(i_7 * 0x68 + esi_2 + 0x20) & 4) != 0)
                        int32_t eax_25 = ebx_1 * 0x11
                        *(esi_2 + (eax_25 << 2) + 0x14534) += 1
                    
                    if (ebx_1 s>= 0)
                        var_68[ebx_1] += 1
                        int32_t eax_26 = i_7 * 0x68
                        int32_t ecx_27 = *(eax_26 + esi_2 + 0x20)
                        int32_t var_148_2 = *(eax_26 + esi_2 + 0x24)
                        
                        if ((ecx_27 & 4) != 0)
                            var_80[ebx_1] += 1
                        
                        if ((ecx_27 & 2) != 0)
                            var_98[ebx_1] += 1
                        
                        int32_t ecx_30 = *(&var_20 + (ebx_1 << 2))
                        int32_t edx_12 = 0
                        
                        if (ecx_30 s> 0)
                            int32_t j_1 = *(edx_10 + 4)
                            int32_t j_3 = j_1
                            void* eax_33 = ebx_1 * 0xc80 + &data_19f5d38
                            
                            while (*eax_33 != j_1)
                                edx_12 += 1
                                eax_33 += 4
                                
                                if (edx_12 s>= ecx_30)
                                    break
                            
                            esi_2 = arg5
                        
                        if (edx_12 == ecx_30)
                            int32_t eax_35 = *(edx_10 + 4)
                            *(&var_20 + (ebx_1 << 2)) += 1
                            *(((ebx_1 * 0x320 + edx_12) << 2) + &data_19f5d38) = eax_35
                        
                        if (edi_3 == 6 || edi_3 == 0xc)
                            int32_t edi_4 = *(&var_50 + (ebx_1 << 2))
                            int32_t edx_13 = 0
                            
                            if (edi_4 s> 0)
                                void* eax_38 = ebx_1 * 0xc80 + &data_19fa838
                                
                                while (*eax_38 != *(edx_10 + 4))
                                    edx_13 += 1
                                    eax_38 += 4
                                    
                                    if (edx_13 s>= edi_4)
                                        break
                            
                            if (edx_13 == edi_4)
                                *(((ebx_1 * 0x320 + edx_13) << 2) + &data_19fa838) = *(edx_10 + 4)
                                *(&var_50 + (ebx_1 << 2)) = edi_4 + 1
                case 0xd
                    edi_3 = 0xe
                    goto label_4ee95f
                case 0xe
                    edi_3 = 0xf
                    goto label_4ee95f
                case 0xf
                    edi_3 = 0x10
                    goto label_4ee95f
                case 0x10
                    eax_12 = *(*(edx_10 + 0x20) * 0x64 + var_144 + 0x1a4c)
                    
                    if (eax_12 s<= 0xe04)
                        if (eax_12 == 0xe04)
                            goto label_4ee801
                        
                        if (eax_12 s> 0xb08)
                            if (eax_12 s> 0xd16)
                                if (eax_12 != 0xd2f)
                                    goto label_4ee918
                                
                                edi_3 = 0x16
                                goto label_4ee95f
                            
                            if (eax_12 != 0xd16)
                                uint32_t temp2_1 = eax_12
                                eax_12 -= 0xc02
                                
                                if (temp2_1 == 0xc02)
                                    goto label_4ee918
                                
                                uint32_t temp5_1 = eax_12
                                eax_12 -= 0x13
                                
                                if (temp5_1 != 0x13)
                                    goto label_4ee918
                            
                            edi_3 = 0x19
                            goto label_4ee95f
                        
                        if (eax_12 == 0xb08)
                            goto label_4ee801
                        
                        if (eax_12 s> 0x41e)
                            goto label_4ee918
                        
                        if (eax_12 == 0x41e)
                            edi_3 = 0x18
                            goto label_4ee95f
                        
                        if (eax_12 == 0x101)
                            goto label_4ee918
                        
                        if (eax_12 == 0x401)
                            goto label_4ee801
                        
                        edi_3 = 0xb
                        goto label_4ee95f
                    
                    if (eax_12 s> 0x1101)
                        if (eax_12 s> 0x1302)
                            if (eax_12 == 0x130b)
                                goto label_4ee91f
                            
                            goto label_4ee918
                        
                        if (eax_12 == 0x1302)
                            goto label_4ee801
                        
                        uint32_t temp0_1 = eax_12
                        eax_12 -= 0x1121
                        
                        if (temp0_1 == 0x1121)
                            edi_3 = 0x17
                            goto label_4ee95f
                        
                        uint32_t temp1_1 = eax_12
                        eax_12 -= 0x11
                        
                        if (temp1_1 == 0x11)
                            goto label_4ee801
                        
                        edi_3 = 0xb
                        goto label_4ee95f
                    
                    if (eax_12 == 0x1101)
                        edi_3 = 0x1a
                        goto label_4ee95f
                    
                    if (eax_12 s> 0x100e)
                        if (eax_12 != 0x1100)
                            goto label_4ee918
                        
                        edi_3 = 0x1b
                        goto label_4ee95f
                    
                    if (eax_12 == 0x100e)
                        goto label_4ee8c7
                    
                    if (eax_12 == 0xe0d)
                        goto label_4ee801
                    
                    if (eax_12 != 0x100a)
                        goto label_4ee918
                    
                    goto label_4ee8c7
                case 0x11
                    goto label_4ee926
        ebx = var_144
        i_2 = i_7 + 1
        i_7 = i_2
    while (i_2 s< *(ebx + 0x1520))

if (*(arg2 + 0x54) == 2)
    *(*(arg2 + 0x58) * 0x68 + esi_2 + 0x37) = 1

void* edx_14 = *(ebx + 0xd38)
int32_t i_3 = 0
int16_t edx_15
int32_t var_128_1
int32_t ecx_36

if (edx_14 s<= 0)
label_4eeba3:
    ecx_36 = 0
    var_128_1 = 0
    edx_15 = edx_14.w
    
    if (edx_14 s> 0)
        goto label_4eebb6
else
    uint32_t edi_7
    
    if (edx_14 u< 8 || data_cc8d30 s< 2)
        edi_7 = 0xfffffc19
    else
        void* eax_46 = edx_14 & 0x80000007
        
        if (eax_46 s< 0)
            eax_46 = ((eax_46 - 1) | 0xfffffff8) + 1
        
        int32_t xmm1_1[0x4] = data_893930
        int32_t xmm2_1[0x4] = xmm1_1
        
        do
            xmm1_1 = _mm_max_epi32(xmm1_1, *(&var_38 + (i_3 << 2)))
            void var_28
            int32_t xmm0_2[0x4] = *(&var_28 + (i_3 << 2))
            i_3 += 8
            xmm2_1 = _mm_max_epi32(xmm2_1, xmm0_2)
        while (i_3 s< edx_14 - eax_46)
        
        int32_t xmm1_2[0x4] = _mm_max_epi32(xmm1_1, xmm2_1)
        int32_t xmm1_3[0x4] = _mm_max_epi32(xmm1_2, _mm_bsrli_si128(xmm1_2, 8))
        edi_7 = _mm_max_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 4))
        var_130 = edi_7.w
        
        if (i_3 s>= edx_14)
            goto label_4eeba3
    
    do
        uint32_t eax_58 = *(&var_38 + (i_3 << 2))
        
        if (eax_58 s<= edi_7)
            eax_58 = edi_7
        
        i_3 += 1
        edi_7 = eax_58
    while (i_3 s< edx_14)
    
    ecx_36 = 0
    var_130 = edi_7.w
    var_128_1 = 0
label_4eebb6:
    void* edx_16 = ebx + 0x174fc
    void* var_124_1 = edx_16
    void* edi_8 = esi_2 + 0x1451c
    int32_t eax_64
    
    do
        uint32_t eax_49 = zx.d(*(edx_16 - 4))
        *(edi_8 - 4) = eax_49.w
        *(edi_8 - 2) = *edx_16
        *edi_8 = *(edx_16 - 8)
        *(edi_8 + 2) = *(edx_16 + 4)
        int16_t eax_53 = eax_49.w
        uint32_t var_134_1 = eax_49
        
        if (*(edi_8 + 0x18) s> eax_53)
            *(edi_8 + 0x18) = eax_53
        
        *(edi_8 + 0x1a) = *(&var_20 + (ecx_36 << 2))
        *(edi_8 + 0x1c) = *(&var_50 + (ecx_36 << 2))
        *(edi_8 + 0x3e) = var_130 - *(&var_38 + (ecx_36 << 2))
        int32_t eax_57 = var_68[ecx_36]
        
        if (eax_57 s> 0)
            float xmm0_8 = _mm_cvtepi32_ps(zx.o(var_80[ecx_36]))
            float xmm1_6 = _mm_cvtepi32_ps(zx.o(eax_57))
            *(edi_8 + 0x20) = xmm0_8 / xmm1_6
            *(edi_8 + 0x24) = _mm_cvtepi32_ps(zx.o(var_98[ecx_36])) / xmm1_6
        
        if (*(ebx + 0x19cc) != ecx_36 || *(ebx + 0x19d0) != ecx_36)
            eax_57.b = 0
        else
            eax_57.b = 1
        
        *(edi_8 + 0x3a) = eax_57.b
        
        if (*(ebx + 0x19cc) != ecx_36 || *(ebx + 0x19c4) != ecx_36)
            *(edi_8 + 0x3b) = 0
            eax_57.b = 0
        else
            *(edi_8 + 0x3b) = 1
            
            if (*(ebx + 0x19c8) != ecx_36)
                eax_57.b = 0
            else
                eax_57.b = 1
        
        *(edi_8 + 0x3c) = eax_57.b
        int32_t edx_17 = *(edx_16 - 0x228)
        
        if (edx_17 != 0 && (*(ebx + ((edx_17 * 0x19 + arg4) << 2) + 0x1a84) & 4) != 0)
            *(edx_17 * 0x68 + arg5 + 0x34) = 1
        
        int32_t i_4 = 0
        
        if (*(var_124_1 + 0x54) s> 0)
            void* ecx_38 = var_124_1 + 0x3efc
            
            do
                int32_t eax_63 = *ecx_38 * 0x68
                ecx_38 += 4
                i_4 += 1
                *(eax_63 + arg5 + 0x3a) = 1
            while (i_4 s< *(var_124_1 + 0x54))
            
            ebx = var_144
            ecx_36 = var_128_1
        
        ecx_36 += 1
        eax_64 = *(ebx + 0xd38)
        edx_16 = var_124_1 + 0x5a30
        edi_8 += 0x44
        esi_2 = arg5
        var_128_1 = ecx_36
        var_124_1 = edx_16
    while (ecx_36 s< eax_64)
    
    edx_15 = eax_64.w
*(esi_2 + 8) = edx_15
void* i_9 = nullptr
void* i_5

if (*(ebx + 0x19a4) s<= 0)
label_4ef142:
    void* i_10 = nullptr
    
    if (*(ebx + 0x19b8) s> 0)
        int32_t* edx_20 = ebx + 0x3b5b8
        int32_t* var_130_2 = edx_20
        
        do
            if (edx_20[-1] == 1)
                int32_t ecx_61 = edx_20[1] * 0x11
                *(esi_2 + (ecx_61 << 2) + 0x14554) += 1
            
            if (edx_20[-1] == 0)
                i_5 = edx_20[1]
                void* ecx_64 = i_5 * 0x11
                
                if (*edx_20 == i_5)
                    i_5 = edx_20[2]
                    
                    if ((i_5.b & 1) != 0)
                        *(esi_2 + (ecx_64 << 2) + 0x1454c) += 1
                    else if ((i_5.b & 2) == 0)
                        *(esi_2 + (ecx_64 << 2) + 0x14548) += 1
                    else
                        *(esi_2 + (ecx_64 << 2) + 0x1454e) += 1
                else
                    *(esi_2 + (ecx_64 << 2) + 0x1454a) += 1
            
            if (edx_20[-1] == 3)
                if (*edx_20 == 9)
                    *(esi_2 + edx_20[-0xf] * 0x44 + 0x14551) = 1
                
                if (*edx_20 == 0x19)
                    *(esi_2 + edx_20[-0xf] * 0x44 + 0x14552) = 1
                
                if (*edx_20 == 3)
                    i_5.w = edx_20[1].w
                    int32_t ecx_73 = edx_20[-0xf] * 0x11
                    *(esi_2 + (ecx_73 << 2) + 0x14546) += i_5.w
                
                if (*edx_20 == 2)
                    i_5.w = edx_20[1].w
                    int32_t ecx_76 = edx_20[-0xf] * 0x11
                    *(esi_2 + (ecx_76 << 2) + 0x14544) += i_5.w
                
                if (*edx_20 == 8)
                    int32_t eax_111 = edx_20[-0x14]
                    int32_t j_2 = 0
                    uint32_t eax_112 = edx_20[1]
                    
                    if (0 s< *esi_2)
                        int32_t ecx_77 = 0
                        void* edx_21 = edx_20[-0xf]
                        
                        do
                            if (*(esi_2 + ecx_77 + 0x18) == eax_112)
                                void* eax_113 = edx_21 + esi_2
                                
                                if (eax_111 != 1)
                                    *(eax_113 + ecx_77 + 0x41) = 1
                                else
                                    *(eax_113 + ecx_77 + 0x3b) = 1
                            
                            j_2 += 1
                            ecx_77 += 0x68
                        while (j_2 s< sx.d(*esi_2))
                        
                        edx_20 = var_130_2
                        ebx = var_144
            
            edx_20 = &edx_20[0x2a]
            i_5 = i_10 + 1
            var_130_2 = edx_20
            i_10 = i_5
        while (i_5 s< *(ebx + 0x19b8))
    
    int32_t ecx_78 = *(ebx + 0x19cc)
    
    if (ecx_78 != *(ebx + 0x19d0))
        *(esi_2 + ecx_78 * 0x44 + 0x14550) = 1
        *(esi_2 + *(ebx + 0x19d0) * 0x44 + 0x14518) = *(esi_2 + *(ebx + 0x19cc) * 0x44 + 0x14518)
        *(esi_2 + *(ebx + 0x19d0) * 0x44 + 0x1451a) = *(esi_2 + *(ebx + 0x19cc) * 0x44 + 0x1451a)
        *(esi_2 + *(ebx + 0x19d0) * 0x44 + 0x1451c) = *(esi_2 + *(ebx + 0x19cc) * 0x44 + 0x1451c)
        *(esi_2 + *(ebx + 0x19d0) * 0x44 + 0x1451e) = *(esi_2 + *(ebx + 0x19cc) * 0x44 + 0x1451e)
        *(esi_2 + *(ebx + 0x19cc) * 0x44 + 0x14518) = 0
        *(esi_2 + *(ebx + 0x19cc) * 0x44 + 0x1451a) = 0
        *(esi_2 + *(ebx + 0x19cc) * 0x44 + 0x1451c) = 0
        *(esi_2 + *(ebx + 0x19cc) * 0x44 + 0x1451e) = 0
        int32_t i_6 = 1
        int32_t i_11 = 1
        
        if (*(ebx + 0x1520) s> 1)
            void* edx_34 = 0x68
            void* edi_10 = ebx + 0x1ad4
            
            do
                if (*edi_10 == *(ebx + 0x19cc))
                    int32_t eax_136 = *(edx_34 + esi_2 + 0x28)
                    
                    if (eax_136 == 6 || eax_136 == 7 || eax_136 == 0xc)
                        *(edx_34 + esi_2 + *(ebx + 0x19d0) + 0x2c) = 1
                        i_6 = i_11
                
                i_6 += 1
                edi_10 += 0x64
                edx_34 += 0x68
                i_11 = i_6
            while (i_6 s< *(ebx + 0x1520))
    
    int32_t eax_139 = var_140 << 2 s>> 2
    sub_4f6c30(eax_139, &(&var_11c)[var_140], &var_11c, eax_139, nullptr)
    int16_t var_118
    int16_t var_114
    int16_t eax_142 = var_118 + var_11c.w + var_114
    *(esi_2 + 4) = var_138.w
    *(esi_2 + 6) = eax_142
    
    if (*(ebx + 0x1068) != 0 && var_13c s< var_138)
        *(esi_2 + 4) = var_13c.w
    
    *(esi_2 + 0xe) = *(ebx + 0x19b4)
    uint32_t result = zx.d(*(ebx + 0x19dc))
    *(esi_2 + 0xa) = result.w
    CookieCheckFunction(result)
    return result

void* edi_9 = ebx + 0x152dc

while (true)
    int32_t eax_65 = *(edi_9 - 0xc)
    int32_t ecx_39 = 0
    int32_t edx_19 = *(edi_9 - 0x10)
    int32_t var_12c_1 = 0
    
    if (eax_65 s< 0x48)
        int32_t eax_66 = eax_65 * 2
        var_12c_1 = *(ebx + (eax_66 << 3) + 0x1524)
        ecx_39 = *(ebx + (eax_66 << 3) + 0x152c)
    
    eax_12 = *(edi_9 - 0x14)
    uint32_t var_120_1 = eax_12
    
    if (eax_12 s<= 0xb00)
        if (eax_12 == 0xb00)
        label_4eefcb:
            
            if (ecx_39 == 0)
                goto label_4ef125
            
            if (var_120_1 == 0xb00 || var_120_1 == 0xb0a)
                *(ecx_39 * 0x68 + esi_2 + edx_19 + 0x6e) = 1
            else
                *(ecx_39 * 0x68 + esi_2 + edx_19 + 0x74) = 1
            
            goto label_4ef125
        
        if (eax_12 s> 0x600)
            if (eax_12 == 0x601)
                int16_t eax_71 = *edi_9
                
                if (edx_19 != 0xffffffff)
                    int32_t eax_75 = edx_19 * 0x11
                    *(esi_2 + (eax_75 << 2) + 0x14530) += eax_71
                else
                    int32_t eax_72 = ecx_39 * 0x68
                    *(eax_72 + esi_2 + 0x60) += eax_71
                
                goto label_4ef125
            
            if (eax_12 != 0xa00)
                goto label_4ef4f9
            
            eax_12.w = *edi_9
            int32_t ecx_46 = edx_19 * 0x11
            *(esi_2 + (ecx_46 << 2) + 0x14524) += eax_12.w
            goto label_4ef125
        
        if (eax_12 == 0x600)
            if (*(edi_9 - 0xc) != 6)
                if (var_12c_1 == 0)
                    var_160_5 = "MakeInputs"
                    var_164_2 = 0xa2c
                    ecx_37 = "pileWhat != CARD_NONE"
                    break
                
                if (ecx_39 != 0)
                    *(ecx_39 * 0x68 + esi_2 + 0x5e) = 1
            else
                *(esi_2 + 0xc) += 1
            
            goto label_4ef125
        
        int32_t eax_67 = eax_12 - 0x400
        
        if (eax_12 == 0x400)
            if (ecx_39 != 0)
                int32_t eax_69 = ecx_39 * 0x68
                *(eax_69 + esi_2 + 0x5c) += 1
            
            goto label_4ef125
        
        eax_12 = eax_67 - 1
        
        if (eax_67 != 1)
            goto label_4ef4f9
        
        int32_t ecx_43 = (edx_19 + 0x4c8) * 0x11
        int32_t eax_68
        eax_68.w = *edi_9
        *(esi_2 + (ecx_43 << 2)) += eax_68.w
        goto label_4ef125
    
    if (eax_12 s> 0xc00)
        if (eax_12 s<= 0x1000)
            if (eax_12 == 0x1000)
                int16_t eax_104 = *edi_9
                
                if (edx_19 != 0xffffffff)
                    int32_t eax_108 = edx_19 * 0x11
                    *(esi_2 + (eax_108 << 2) + 0x1452a) += eax_104
                else
                    int32_t eax_105 = ecx_39 * 0x68
                    *(eax_105 + esi_2 + 0x64) += eax_104
                
                goto label_4ef125
            
            int32_t eax_98 = eax_12 - 0xe00
            
            if (eax_12 == 0xe00)
                eax_98.w = *edi_9
                int32_t ecx_54 = edx_19 * 0x11
                *(esi_2 + (ecx_54 << 2) + 0x14528) += eax_98.w
                goto label_4ef125
            
            eax_12 = eax_98 - 1
            
            if (eax_98 != 1)
                goto label_4ef4f9
            
            if (edx_19 == 0xffffffff)
                var_160_5 = "MakeInputs"
                var_164_2 = 0xaa6
                ecx_37 = "owner != PLAYER_NONE"
                break
            
            if (ecx_39 != 0)
                *(ecx_39 * 0x68 + esi_2 + edx_19 + 0x2c) = 1
                
                if (var_12c_1 == 0xe26)
                    ecx_39.w = *edi_9
                    ecx_39.w -= 1
                    *(esi_2 + edx_19 * 0x44 + 0x14522) = ecx_39.w
            
            goto label_4ef125
        
        if (eax_12 == 0x1001)
            eax_12 = *(edi_9 - 8)
            
            if (eax_12 == 0)
                var_160_5 = "MakeInputs"
                var_164_2 = 0xa56
                ecx_37 = "g.tokens[i].whereCard != CARDID_NULL"
                break
            
            int16_t* ecx_58 = (eax_12 + 1) * 0x68
            int32_t eax_109
            eax_109.w = *edi_9
            *(ecx_58 + esi_2) += eax_109.w
            goto label_4ef125
        
        if (eax_12 != 0x1200)
            goto label_4ef4f9
        
        eax_12.w = *edi_9
        int32_t ecx_57 = ecx_39 * 0x68
        *(ecx_57 + esi_2 + 0x66) += eax_12.w
    label_4ef125:
        edi_9 += 0x20
        i_5 = i_9 + 1
        i_9 = i_5
        
        if (i_5 s>= *(ebx + 0x19a4))
            goto label_4ef142
    else
        if (eax_12 == 0xc00)
            int16_t eax_93 = *edi_9
            
            if (edx_19 != 0xffffffff)
                int32_t eax_97 = edx_19 * 0x11
                *(esi_2 + (eax_97 << 2) + 0x14526) += eax_93
            else
                int32_t eax_94 = ecx_39 * 0x68
                *(eax_94 + esi_2 + 0x62) += eax_93
            
            goto label_4ef125
        
        eax_12 -= 0xb01
        
        if (eax_12 u> 9)
        label_4ef4f9:
            var_160_5 = "MakeInputs"
            var_164_2 = 0xabb
            ecx_37 = "Halt"
            break
        
        switch (eax_12)
            case 0
                if (*(edi_9 - 4) != 0)
                    *(esi_2 + edx_19 * 0x44 + 0x1452c) = 1
                
                goto label_4ef125
            case 1
                goto label_4ef125
            case 2, 3, 4, 5
                int32_t eax_85 = var_12c_1
                
                if (eax_85 != 0)
                    int32_t var_130_1 = 0
                    
                    if (0 s< *esi_2)
                        void* ecx_49 = esi_2 + 0x18
                        
                        while (true)
                            if (*ecx_49 == eax_85 && *(edx_19 + ecx_49 + 0x14) != 0)
                                eax_12 = var_120_1 - 0xb03
                                
                                if (eax_12 u> 3)
                                    var_160_5 = "ApplyTokenCards"
                                    var_164_2 = 0x870
                                    ecx_37 = "Halt"
                                    break
                                
                                switch (eax_12)
                                    case 0
                                        *(ecx_49 + 0x53) = 1
                                    case 1
                                        *(ecx_49 + 0x52) = 1
                                    case 2
                                        *(ecx_49 + 0x54) = 1
                                    case 3
                                        *(ecx_49 + 0x55) = 1
                            
                            ecx_49 += 0x68
                            var_130_1 += 1
                            eax_85 = var_12c_1
                            
                            if (var_130_1 s>= sx.d(*esi_2))
                                goto label_4ef125
                        
                        break
                
                goto label_4ef125
            case 6, 9
                goto label_4eefcb
            case 7
                *(esi_2 + edx_19 * 0x44 + 0x1452e) = 1
                goto label_4ef125
            case 8
                *(esi_2 + edx_19 * 0x44 + 0x1452d) = 1
                goto label_4ef125

label_4ef523:
sub_63b870(eax_12, &data_801800, ecx_37, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", var_164_2, 
    var_160_5)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
