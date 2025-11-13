// 函数: sub_716300
// 地址: 0x716300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
float xmm3[0x4] = arg4
int32_t eax_1 = *(arg2 + 0x14)
float xmm4_1[0x4] = _mm_shuffle_ps(xmm3, xmm3, 0)
void* ecx_1 = *(eax_1 + (*(arg1 + 0x1c) << 2))
void* var_20 = ecx_1
uint32_t i_1 = *(ecx_1 + 4)

if (*(i_1 + 0x6c) != 0)
    void* edx_1 = *(ecx_1 + 0x1c)
    
    if (edx_1 != 0)
        i_1 = *(edx_1 + 4) - 1
        
        if (i_1 u<= 5)
            i_1 = zx.d(lookup_table_7182e8[i_1])
            
            switch (i_1)
                case 0
                    i_1 = *(edx_1 + 0x28)
                    
                    if (i_1 == *(arg1 + 0x20))
                        uint32_t esi_1 = *(arg1 + 0x14)
                        i_1 = *(arg1 + 0x10)
                        int32_t edx_2 = *(arg1 + 0xc)
                        uint32_t i_46 = i_1
                        uint32_t var_14_1 = esi_1
                        
                        if (*(ecx_1 + 0x24) s< esi_1 && *(ecx_1 + 0x20) s< esi_1)
                            free(*(ecx_1 + 0x28))
                            int32_t ecx_2 = data_147ded8
                            int32_t _Size = esi_1 << 2
                            int32_t eax_3
                            
                            if (ecx_2 == 0)
                                eax_3 = malloc(_Size)
                            else
                                eax_3 = ecx_2(_Size, 
                                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 
                                    0x3a8)
                            
                            ecx_1 = var_20
                            xmm3 = arg4
                            *(ecx_1 + 0x28) = eax_3
                            i_1 = i_46
                            *(ecx_1 + 0x20) = esi_1
                        
                        int32_t edi_1 = *(arg1 + 0x18)
                        uint32_t i_63 = 0
                        
                        if (*(ecx_1 + 0x24) != 0)
                            i_63 = arg5
                        
                        void* edi_2 = *(ecx_1 + 0x28)
                        void* var_18_1 = edi_2
                        
                        if (*i_1 <= arg3)
                            *(ecx_1 + 0x24) = esi_1
                            
                            if (arg3 f< *(i_1 + (edx_2 << 2) - 4))
                                int32_t eax_188 = sub_714a40(i_1, edx_2, i_1, arg3, 1)
                                int32_t xmm1_72 = (zx.o(0)).d
                                int32_t ecx_33 = *(edi_1 + (eax_188 << 2) - 4)
                                float (* edx_24)[0x4] = *(edi_1 + (eax_188 << 2))
                                int32_t eax_189 = eax_188 * 0x13
                                int32_t var_24_2 = ecx_33
                                float (* var_1c_2)[0x4] = edx_24
                                i_1 = *(arg1 + 8)
                                uint32_t i_52 = i_1
                                float xmm0_224 = *(i_1 + (eax_189 << 2) - 0x4c)
                                float xmm6_1 = 1f - (arg3 f- *(i_46 + (eax_188 << 2)))
                                    / (*(i_46 + (eax_188 << 2) - 4) f- *(i_46 + (eax_188 << 2)))
                                float xmm5_1[0x4]
                                
                                if (0 f<= xmm6_1)
                                    xmm5_1 = _mm_min_ss(0x3f800000, xmm6_1)
                                else
                                    xmm5_1 = zx.o(0)
                                
                                uint32_t esi_47 = var_14_1
                                xmm0_224 f- 0
                                i_1:1.b = (xmm0_224 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_224, 0f) ? 1 : 0) << 2
                                    | (xmm0_224 < 0f ? 1 : 0)
                                bool p_6 = unimplemented  {test ah, 0x44}
                                
                                if (p_6)
                                    xmm0_224 - 1f
                                    i_1:1.b = (xmm0_224 == 1f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_224, 1f) ? 1 : 0) << 2
                                        | (xmm0_224 < 1f ? 1 : 0)
                                    bool p_8 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_8)
                                        float xmm2_9 = (zx.o(0)).d
                                        i_1 = eax_189 - 0x12
                                        uint32_t i_39 = i_1
                                        edi_2 = var_18_1
                                        
                                        if (i_1 s>= eax_189)
                                        label_71753b:
                                            xmm5_1 = (xmm5_1 f- xmm2_9)
                                                * (1f f- *(i_52 + (i_1 << 2) - 4))
                                                / (1f - xmm2_9) f+ *(i_52 + (i_1 << 2) - 4)
                                            esi_47 = var_14_1
                                        else
                                            while (true)
                                                xmm2_9 = *(i_52 + (i_1 << 2))
                                                ecx_33 = var_24_2
                                                
                                                if (xmm2_9 f>= xmm5_1)
                                                    int32_t xmm6_4
                                                    
                                                    if (i_1 != i_39)
                                                        xmm1_72 = *(i_52 + (i_1 << 2) - 8)
                                                        xmm6_4 = *(i_52 + (i_1 << 2) - 4)
                                                        edi_2 = var_18_1
                                                    else
                                                        xmm6_4 = (zx.o(0)).d
                                                    
                                                    edx_24 = var_1c_2
                                                    xmm5_1 = (xmm5_1 f- xmm1_72)
                                                        * (*(i_52 + (i_1 << 2) + 4) f- xmm6_4)
                                                        / (xmm2_9 f- xmm1_72) f+ xmm6_4
                                                    break
                                                
                                                i_1 += 2
                                                
                                                if (i_1 s>= eax_189)
                                                    goto label_71753b
                                    else
                                        xmm5_1 = zx.o(0)
                                
                                xmm3 f- 1f
                                float xmm6_3[0x4] = _mm_shuffle_ps(xmm5_1, xmm5_1, 0)
                                i_1:1.b = (xmm3 f== 1f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm3, 1f) ? 1 : 0) << 2
                                    | (xmm3 f< 1f ? 1 : 0)
                                bool p_10 = unimplemented  {test ah, 0x44}
                                
                                if (p_10)
                                    i_1 = i_63
                                    
                                    switch (i_1)
                                        case 0
                                            i_1 = *(var_20 + 0x1c)
                                            
                                            if (*(i_1 + 0x18) != 0)
                                                uint32_t i_55 = 0
                                                
                                                if (esi_47 s> 0)
                                                    if (esi_47 u< 0x10)
                                                    label_717e22:
                                                        
                                                        if (esi_47 - i_55 s< 4)
                                                            i_1 = i_55
                                                        label_717f08:
                                                            void* ecx_46 = ecx_33 - edx_24
                                                            uint32_t i_78 = var_14_1 - i_1
                                                            float* eax_314 = &(*edx_24)[i_1]
                                                            uint32_t i
                                                            
                                                            do
                                                                *(edi_2 - edx_24 + eax_314) = ((
                                                                    *eax_314 f- *(eax_314 + ecx_46))
                                                                    f* xmm5_1 f+ *(eax_314 + ecx_46))
                                                                    f* xmm3
                                                                eax_314 = &eax_314[1]
                                                                i = i_78
                                                                i_78 -= 1
                                                            while (i != 1)
                                                            return eax_314
                                                        
                                                        i_1 = i_55
                                                        void* esi_83 = ecx_33 - edx_24
                                                        void* edx_43 = ecx_33 - edi_2
                                                        void* edi_63 = &(*edx_24)[i_1 + 1]
                                                        void* edx_44 = edi_2 + ((i_1 + 2) << 2)
                                                        
                                                        do
                                                            *(edx_44 - 8) = ((*(edi_63 - 4) f-
                                                                *(ecx_33 + (i_1 << 2))) f* xmm5_1 f+
                                                                *(ecx_33 + (i_1 << 2))) f* xmm3
                                                            *(edi_2 - edx_24 + edi_63) = ((
                                                                *edi_63 f- *(edi_63 + esi_83)) f* xmm5_1
                                                                f+ *(edi_63 + esi_83)) f* xmm3
                                                            *edx_44 = ((*(edi_63 + 4) f-
                                                                *(edx_44 + edx_43)) f* xmm5_1 f+
                                                                *(edx_44 + edx_43)) f* xmm3
                                                            float xmm1_175 = *(edi_63 + 8)
                                                            edi_63 += 0x10
                                                            float xmm1_178 = (xmm1_175 f-
                                                                *(ecx_33 + (i_1 << 2) + 0xc)) f* xmm5_1
                                                                f+ *(ecx_33 + (i_1 << 2) + 0xc)
                                                            i_1 += 4
                                                            *(edx_44 + 4) = xmm1_178 f* xmm3
                                                            edx_44 += 0x10
                                                        while (i_1 s< esi_47 - 3)
                                                        
                                                        edi_2 = var_18_1
                                                        edx_24 = var_1c_2
                                                        uint32_t i_33 = i_1
                                                        
                                                        if (i_1 s< var_14_1)
                                                            goto label_717f08
                                                    else
                                                        i_55 = 0
                                                        
                                                        if (edi_2 u> &(*edx_24)[esi_47 - 1])
                                                            if (
                                                                    edi_2 u> ecx_33 + ((esi_47 - 1) << 2)
                                                                    || edi_2 + ((esi_47 - 1) << 2)
                                                                    u< ecx_33)
                                                                goto label_717d56
                                                            
                                                            goto label_717e22
                                                        
                                                        if (edi_2 + ((esi_47 - 1) << 2) u>= edx_24
                                                                || (
                                                                edi_2 u<= ecx_33 + ((esi_47 - 1) << 2)
                                                                && edi_2 + ((esi_47 - 1) << 2)
                                                                u>= ecx_33))
                                                            goto label_717e22
                                                        
                                                    label_717d56:
                                                        int32_t eax_301 = esi_47 & 0x8000000f
                                                        
                                                        if (eax_301 s< 0)
                                                            eax_301 =
                                                                ((eax_301 - 1) | 0xfffffff0) + 1
                                                        
                                                        void* esi_77 = edi_2 + 0x20
                                                        int32_t eax_308 = edi_2 - edx_24
                                                        float* edx_41 = &edx_24[1]
                                                        void* eax_310 = ecx_33 - edi_2
                                                        i_1 = 0
                                                        
                                                        do
                                                            float xmm0_293[0x4] =
                                                                *(ecx_33 + (i_1 << 2))
                                                            *(esi_77 - 0x20) = _mm_mul_ps(
                                                                _mm_add_ps(
                                                                    _mm_mul_ps(
                                                                        _mm_sub_ps(*(edx_41 - 0x10), xmm0_293), 
                                                                        xmm6_3), 
                                                                    xmm0_293), 
                                                                xmm4_1)
                                                            float xmm0_294[0x4] =
                                                                *(edx_41 + ecx_33 - edx_24)
                                                            *(edx_41 + eax_308) = _mm_mul_ps(
                                                                _mm_add_ps(
                                                                    _mm_mul_ps(
                                                                        _mm_sub_ps(*edx_41, xmm0_294), xmm6_3), 
                                                                    xmm0_294), 
                                                                xmm4_1)
                                                            float xmm0_295[0x4] =
                                                                *(eax_310 + esi_77)
                                                            edi_2 = var_18_1
                                                            *esi_77 = _mm_mul_ps(
                                                                _mm_add_ps(
                                                                    _mm_mul_ps(
                                                                        _mm_sub_ps(*(edx_41 + 0x10), xmm0_295), 
                                                                        xmm6_3), 
                                                                    xmm0_295), 
                                                                xmm4_1)
                                                            float xmm0_296[0x4] =
                                                                *(ecx_33 + (i_1 << 2) + 0x30)
                                                            i_1 += 0x10
                                                            float xmm1_155[0x4] = *(edx_41 + 0x20)
                                                            edx_41 = &edx_41[0x10]
                                                            *(esi_77 + 0x10) = _mm_mul_ps(
                                                                _mm_add_ps(
                                                                    _mm_mul_ps(
                                                                        _mm_sub_ps(xmm1_155, xmm0_296), 
                                                                        xmm6_3), 
                                                                    xmm0_296), 
                                                                xmm4_1)
                                                            esi_77 += 0x40
                                                        while (i_1 s< esi_47 - eax_301)
                                                        
                                                        esi_47 = var_14_1
                                                        edx_24 = var_1c_2
                                                        uint32_t i_32 = i_1
                                                        i_55 = i_1
                                                        
                                                        if (i_1 s< esi_47)
                                                            goto label_717e22
                                            else
                                                void* eax_272 = *(i_1 + 0x20)
                                                i_1 = 0
                                                uint32_t i_3 = 0
                                                
                                                if (esi_47 s> 0)
                                                    if (esi_47 u< 8)
                                                        goto label_717cbf
                                                    
                                                    i_3 = 0
                                                    
                                                    if ((edi_2 u<= &(*edx_24)[esi_47 - 1]
                                                            && edi_2 + ((esi_47 - 1) << 2)
                                                            u>= edx_24) || (
                                                            edi_2 u<= eax_272 + (esi_47 << 2) - 4
                                                            && edi_2 + ((esi_47 - 1) << 2)
                                                            u>= eax_272) || (
                                                            edi_2 u<= ecx_33 + ((esi_47 - 1) << 2)
                                                            && edi_2 + ((esi_47 - 1) << 2)
                                                            u>= ecx_33))
                                                        i_1 = 0
                                                    label_717cbf:
                                                        void* ecx_45 = ecx_33 - eax_272
                                                        float* eax_291 = eax_272 + (i_1 << 2)
                                                        uint32_t i_77 = var_14_1 - i_3
                                                        uint32_t i_2
                                                        
                                                        do
                                                            *(edi_2 - eax_272 + eax_291) = ((
                                                                *(edx_24 - eax_272 + eax_291) f-
                                                                *(eax_291 + ecx_45)) f* xmm5_1 f+
                                                                *(eax_291 + ecx_45) - *eax_291) f* xmm3
                                                                + *eax_291
                                                            eax_291 = &eax_291[1]
                                                            i_2 = i_77
                                                            i_77 -= 1
                                                        while (i_2 != 1)
                                                        return eax_291
                                                    
                                                    int32_t eax_287 = esi_47 & 0x80000007
                                                    
                                                    if (eax_287 s< 0)
                                                        eax_287 = ((eax_287 - 1) | 0xfffffff8) + 1
                                                    
                                                    void* eax_290 = eax_272 + 0x10
                                                    float (* esi_74)[0x4] = var_1c_2
                                                    
                                                    do
                                                        i_3 += 8
                                                        float xmm2_11[0x4] = *(eax_290 - 0x10)
                                                        float xmm0_291[0x4] =
                                                            *(esi_74 + ecx_33 - var_1c_2)
                                                        *(esi_74 + var_18_1 - var_1c_2) =
                                                            _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(
                                                                    _mm_add_ps(
                                                                        _mm_mul_ps(
                                                                            _mm_sub_ps(*esi_74, xmm0_291), xmm6_3), 
                                                                        xmm0_291), 
                                                                    xmm2_11), 
                                                                xmm4_1), 
                                                            xmm2_11)
                                                        esi_74 = &esi_74[2]
                                                        float xmm0_292[0x4] =
                                                            *(ecx_33 - eax_272 + eax_290)
                                                        float xmm2_12[0x4] = *eax_290
                                                        *(var_18_1 - eax_272 + eax_290) =
                                                            _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(
                                                                    _mm_add_ps(
                                                                        _mm_mul_ps(
                                                                            _mm_sub_ps(
                                                                                *(var_1c_2 - eax_272 + eax_290), 
                                                                                xmm0_292), 
                                                                            xmm6_3), 
                                                                        xmm0_292), 
                                                                    xmm2_12), 
                                                                xmm4_1), 
                                                            xmm2_12)
                                                        edx_24 = var_1c_2
                                                        eax_290 += 0x20
                                                    while (i_3 s< esi_47 - eax_287)
                                                    
                                                    i_1 = i_3
                                                    bool cond:6_1 = i_3 s>= var_14_1
                                                    edi_2 = var_18_1
                                                    ecx_33 = var_24_2
                                                    i_3 = i_1
                                                    
                                                    if (not(cond:6_1))
                                                        goto label_717cbf
                                        case 1, 2
                                            i_1 = 0
                                            uint32_t i_56 = 0
                                            
                                            if (esi_47 s> 0)
                                                if (esi_47 u< 4)
                                                    goto label_71800c
                                                
                                                i_56 = 0
                                                
                                                if ((edi_2 u<= &(*edx_24)[esi_47 - 1]
                                                        && edi_2 + ((esi_47 - 1) << 2) u>= edx_24) || (
                                                        edi_2 u<= ecx_33 + ((esi_47 - 1) << 2)
                                                        && edi_2 + ((esi_47 - 1) << 2) u>= ecx_33))
                                                    i_1 = 0
                                                label_71800c:
                                                    void* eax_332 = edi_2 + (i_1 << 2)
                                                    void* ecx_48 = ecx_33 - edx_24
                                                    int32_t edx_45 = edx_24 - edi_2
                                                    void* var_40_6 = eax_332
                                                    uint32_t i_79 = esi_47 - i_56
                                                    int32_t* edi_66 = eax_332
                                                    void* eax_333
                                                    uint32_t i_4
                                                    
                                                    do
                                                        eax_333 = edi_66 + edx_45
                                                        *edi_66 = ((*(edi_66 + edx_45) f-
                                                            *(ecx_48 + eax_333)) f* xmm5_1 f+
                                                            *(ecx_48 + eax_333) f- *edi_66) f* xmm3 f+
                                                            *edi_66
                                                        edi_66 = &edi_66[1]
                                                        i_4 = i_79
                                                        i_79 -= 1
                                                    while (i_4 != 1)
                                                    return eax_333
                                                
                                                int32_t eax_324 = esi_47 & 0x80000003
                                                
                                                if (eax_324 s< 0)
                                                    eax_324 = ((eax_324 - 1) | 0xfffffffc) + 1
                                                
                                                void* esi_92 = edi_2
                                                int128_t* eax_330 = edx_24 - edi_2
                                                int128_t* var_3c_4 = eax_330
                                                uint32_t i_5 = 0
                                                
                                                do
                                                    float xmm1_185[0x4] = *(eax_330 + esi_92)
                                                    i_5 += 4
                                                    float xmm2_13[0x4] = *esi_92
                                                    float xmm0_297[0x4] =
                                                        *(eax_330 + esi_92 + ecx_33 - edx_24)
                                                    eax_330 = var_3c_4
                                                    *esi_92 = _mm_add_ps(
                                                        _mm_mul_ps(
                                                            _mm_sub_ps(
                                                                _mm_add_ps(
                                                                    _mm_mul_ps(
                                                                        _mm_sub_ps(xmm1_185, xmm0_297), 
                                                                        xmm6_3), 
                                                                    xmm0_297), 
                                                                xmm2_13), 
                                                            xmm4_1), 
                                                        xmm2_13)
                                                    esi_92 += 0x10
                                                while (i_5 s< esi_47 - eax_324)
                                                
                                                esi_47 = var_14_1
                                                i_1 = i_5
                                                edi_2 = var_18_1
                                                ecx_33 = var_24_2
                                                uint32_t i_34 = i_5
                                                edx_24 = var_1c_2
                                                i_56 = i_1
                                                
                                                if (i_1 s< esi_47)
                                                    goto label_71800c
                                        case 3
                                            void* eax_335 = *(var_20 + 0x1c)
                                            
                                            if (*(eax_335 + 0x18) != 0)
                                                i_1 = 0
                                                uint32_t i_57 = 0
                                                
                                                if (esi_47 s> 0)
                                                    if (esi_47 u< 8)
                                                        goto label_718295
                                                    
                                                    i_57 = 0
                                                    
                                                    if ((edi_2 u> &(*edx_24)[esi_47 - 1]
                                                            || edi_2 + ((esi_47 - 1) << 2)
                                                            u< edx_24) && (
                                                            edi_2 u> ecx_33 + ((esi_47 - 1) << 2)
                                                            || edi_2 + ((esi_47 - 1) << 2)
                                                            u< ecx_33))
                                                        int32_t eax_365 = esi_47 & 0x80000007
                                                        
                                                        if (eax_365 s< 0)
                                                            eax_365 =
                                                                ((eax_365 - 1) | 0xfffffff8) + 1
                                                        
                                                        void* esi_97 = edi_2 + 0x10
                                                        void* eax_369 = edx_24 - edi_2
                                                        float (* var_3c_6)[0x4] = edx_24
                                                        float (* edi_70)[0x4] = edx_24
                                                        int32_t var_40_9 = ecx_33
                                                        void* ecx_53 = ecx_33 - edx_24
                                                        void* var_38_25 = eax_369
                                                        uint32_t i_6 = 0
                                                        
                                                        do
                                                            float xmm0_301[0x4] = *(edi_70 + ecx_53)
                                                            void* eax_370 = eax_369 + esi_97
                                                            i_6 += 8
                                                            float xmm1_213[0x4] = *edi_70
                                                            edi_70 = &edi_70[2]
                                                            *(esi_97 - 0x10) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_add_ps(
                                                                        _mm_mul_ps(
                                                                            _mm_sub_ps(xmm1_213, xmm0_301), 
                                                                            xmm6_3), 
                                                                        xmm0_301), 
                                                                    xmm4_1), 
                                                                *(esi_97 - 0x10))
                                                            float xmm0_303[0x4] =
                                                                *(eax_370 + ecx_53)
                                                            eax_369 = var_38_25
                                                            *esi_97 = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_add_ps(
                                                                        _mm_mul_ps(
                                                                            _mm_sub_ps(*eax_370, xmm0_303), 
                                                                            xmm6_3), 
                                                                        xmm0_303), 
                                                                    xmm4_1), 
                                                                *esi_97)
                                                            esi_97 += 0x20
                                                        while (i_6 s< esi_47 - eax_365)
                                                        
                                                        esi_47 = var_14_1
                                                        i_1 = i_6
                                                        edi_2 = var_18_1
                                                        ecx_33 = var_24_2
                                                        uint32_t i_35 = i_6
                                                        edx_24 = var_1c_2
                                                        i_57 = i_1
                                                        
                                                        if (i_1 s< esi_47)
                                                            goto label_718295
                                                    else
                                                        i_1 = 0
                                                    label_718295:
                                                        void* ecx_54 = ecx_33 - edx_24
                                                        i_1 = edi_2 + (i_1 << 2)
                                                        int32_t edx_48 = edx_24 - edi_2
                                                        uint32_t i_45 = i_1
                                                        uint32_t i_81 = esi_47 - i_57
                                                        uint32_t i_7
                                                        
                                                        do
                                                            int32_t eax_371 = i_1 + edx_48
                                                            *i_45 = ((*(i_1 + edx_48) f-
                                                                *(ecx_54 + eax_371)) f* xmm5_1 f+
                                                                *(ecx_54 + eax_371)) f* xmm3 f+ *i_45
                                                            i_1 = i_45 + 4
                                                            i_45 = i_1
                                                            i_7 = i_81
                                                            i_81 -= 1
                                                        while (i_7 != 1)
                                            else
                                                int32_t eax_336 = *(eax_335 + 0x20)
                                                i_1 = 0
                                                uint32_t i_62 = 0
                                                
                                                if (esi_47 s> 0)
                                                    if (esi_47 u< 4)
                                                        goto label_71816b
                                                    
                                                    i_62 = 0
                                                    
                                                    if ((edi_2 u<= eax_336 + (esi_47 << 2) - 4
                                                            && edi_2 + ((esi_47 - 1) << 2)
                                                            u>= eax_336) || (
                                                            edi_2 u<= &(*edx_24)[esi_47 - 1]
                                                            && edi_2 + ((esi_47 - 1) << 2)
                                                            u>= edx_24) || (
                                                            edi_2 u<= ecx_33 + ((esi_47 - 1) << 2)
                                                            && edi_2 + ((esi_47 - 1) << 2)
                                                            u>= ecx_33))
                                                        i_1 = 0
                                                    label_71816b:
                                                        void* eax_355 = &(*edx_24)[i_1]
                                                        void* ecx_52 = ecx_33 - edx_24
                                                        int32_t* edi_69 = edi_2 - edx_24
                                                        uint32_t i_80 = esi_47 - i_62
                                                        uint32_t i_8
                                                        
                                                        do
                                                            *(edi_69 + eax_355) = ((*eax_355 f-
                                                                *(eax_355 + ecx_52)) f* xmm5_1 f+
                                                                *(eax_355 + ecx_52) f-
                                                                *(eax_336 - edx_24 + eax_355)) f* xmm3
                                                                f+ *(edi_69 + eax_355)
                                                            eax_355 += 4
                                                            i_8 = i_80
                                                            i_80 -= 1
                                                        while (i_8 != 1)
                                                        return eax_355
                                                    
                                                    int32_t eax_351 = esi_47 & 0x80000003
                                                    
                                                    if (eax_351 s< 0)
                                                        eax_351 = ((eax_351 - 1) | 0xfffffffc) + 1
                                                    
                                                    int32_t var_30_24 = esi_47 - eax_351
                                                    void* esi_94 = ecx_33 - edx_24
                                                    float (* eax_354)[0x4] = edx_24
                                                    void* var_3c_5 = esi_94
                                                    int32_t edi_68 = var_18_1 - edx_24
                                                    int32_t var_40_7 = edi_68
                                                    
                                                    do
                                                        float xmm0_298[0x4] = *(eax_354 + esi_94)
                                                        i_62 += 4
                                                        *(eax_354 + edi_68) = _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(
                                                                    _mm_add_ps(
                                                                        _mm_mul_ps(
                                                                            _mm_sub_ps(*eax_354, xmm0_298), 
                                                                            xmm6_3), 
                                                                        xmm0_298), 
                                                                    *(eax_336 - edx_24 + eax_354)), 
                                                                xmm4_1), 
                                                            *(eax_354 + edi_68))
                                                        eax_354 = &eax_354[1]
                                                        esi_47 = var_14_1
                                                    while (i_62 s< var_30_24)
                                                    
                                                    i_1 = i_62
                                                    edi_2 = var_18_1
                                                    ecx_33 = var_24_2
                                                    edx_24 = var_1c_2
                                                    i_62 = i_1
                                                    
                                                    if (i_1 s< esi_47)
                                                        goto label_71816b
                                else if (i_63 != 3)
                                    uint32_t i_54 = 0
                                    
                                    if (esi_47 s> 0)
                                        if (esi_47 u< 0x10)
                                        label_717a5b:
                                            
                                            if (esi_47 - i_54 s< 4)
                                                i_1 = i_54
                                            label_717b33:
                                                void* ecx_42 = ecx_33 - edx_24
                                                uint32_t i_76 = var_14_1 - i_1
                                                float* eax_270 = &(*edx_24)[i_1]
                                                uint32_t i_9
                                                
                                                do
                                                    *(edi_2 - edx_24 + eax_270) = (*eax_270 f-
                                                        *(eax_270 + ecx_42)) f* xmm5_1 f+
                                                        *(eax_270 + ecx_42)
                                                    eax_270 = &eax_270[1]
                                                    i_9 = i_76
                                                    i_76 -= 1
                                                while (i_9 != 1)
                                                return eax_270
                                            
                                            i_1 = i_54
                                            void* esi_62 = ecx_33 - edx_24
                                            void* edx_33 = ecx_33 - edi_2
                                            void* edi_50 = &(*edx_24)[i_1 + 1]
                                            void* edx_34 = edi_2 + ((i_1 + 2) << 2)
                                            
                                            do
                                                *(edx_34 - 8) = (*(edi_50 - 4) f-
                                                    *(ecx_33 + (i_1 << 2))) f* xmm5_1 f+
                                                    *(ecx_33 + (i_1 << 2))
                                                *(edi_2 - edx_24 + edi_50) =
                                                    (*edi_50 f- *(edi_50 + esi_62)) f* xmm5_1 f+
                                                    *(edi_50 + esi_62)
                                                *edx_34 = (*(edi_50 + 4) f- *(edx_33 + edx_34))
                                                    f* xmm5_1 f+ *(edx_33 + edx_34)
                                                float xmm0_283 = *(edi_50 + 8)
                                                edi_50 += 0x10
                                                float xmm0_286 = (xmm0_283 f-
                                                    *(ecx_33 + (i_1 << 2) + 0xc)) f* xmm5_1 f+
                                                    *(ecx_33 + (i_1 << 2) + 0xc)
                                                i_1 += 4
                                                *(edx_34 + 4) = xmm0_286
                                                edx_34 += 0x10
                                            while (i_1 s< esi_47 - 3)
                                            
                                            edi_2 = var_18_1
                                            edx_24 = var_1c_2
                                            uint32_t i_42 = i_1
                                            
                                            if (i_1 s< var_14_1)
                                                goto label_717b33
                                        else
                                            i_54 = 0
                                            
                                            if (edi_2 u> &(*edx_24)[esi_47 - 1])
                                                if (edi_2 u> ecx_33 + ((esi_47 - 1) << 2)
                                                        || edi_2 + ((esi_47 - 1) << 2) u< ecx_33)
                                                    goto label_7179a0
                                                
                                                goto label_717a5b
                                            
                                            if (edi_2 + ((esi_47 - 1) << 2) u>= edx_24 || (
                                                    edi_2 u<= ecx_33 + ((esi_47 - 1) << 2)
                                                    && edi_2 + ((esi_47 - 1) << 2) u>= ecx_33))
                                                goto label_717a5b
                                            
                                        label_7179a0:
                                            int32_t eax_257 = esi_47 & 0x8000000f
                                            
                                            if (eax_257 s< 0)
                                                eax_257 = ((eax_257 - 1) | 0xfffffff0) + 1
                                            
                                            void* esi_56 = edi_2 + 0x20
                                            int32_t eax_264 = edi_2 - edx_24
                                            float* edx_31 = &edx_24[1]
                                            void* eax_266 = ecx_33 - edi_2
                                            i_1 = 0
                                            
                                            do
                                                float xmm1_115[0x4] = *(ecx_33 + (i_1 << 2))
                                                *(esi_56 - 0x20) = _mm_add_ps(
                                                    _mm_mul_ps(
                                                        _mm_sub_ps(*(edx_31 - 0x10), xmm1_115), 
                                                        xmm6_3), 
                                                    xmm1_115)
                                                float xmm1_116[0x4] = *(edx_31 + ecx_33 - edx_24)
                                                *(edx_31 + eax_264) = _mm_add_ps(
                                                    _mm_mul_ps(_mm_sub_ps(*edx_31, xmm1_116), 
                                                        xmm6_3), 
                                                    xmm1_116)
                                                float xmm1_117[0x4] = *(eax_266 + esi_56)
                                                edi_2 = var_18_1
                                                *esi_56 = _mm_add_ps(
                                                    _mm_mul_ps(
                                                        _mm_sub_ps(*(edx_31 + 0x10), xmm1_117), 
                                                        xmm6_3), 
                                                    xmm1_117)
                                                float xmm1_118[0x4] = *(ecx_33 + (i_1 << 2) + 0x30)
                                                i_1 += 0x10
                                                float xmm0_267[0x4] = *(edx_31 + 0x20)
                                                edx_31 = &edx_31[0x10]
                                                *(esi_56 + 0x10) = _mm_add_ps(
                                                    _mm_mul_ps(_mm_sub_ps(xmm0_267, xmm1_118), 
                                                        xmm6_3), 
                                                    xmm1_118)
                                                esi_56 += 0x40
                                            while (i_1 s< esi_47 - eax_257)
                                            
                                            esi_47 = var_14_1
                                            edx_24 = var_1c_2
                                            uint32_t i_41 = i_1
                                            i_54 = i_1
                                            
                                            if (i_1 s< esi_47)
                                                goto label_717a5b
                                else
                                    i_1 = *(var_20 + 0x1c)
                                    
                                    if (*(i_1 + 0x18) != 0)
                                        uint32_t i_53 = 0
                                        
                                        if (esi_47 s> 0)
                                            if (esi_47 u< 0x10)
                                            label_717827:
                                                
                                                if (esi_47 - i_53 s< 4)
                                                    i_1 = i_53
                                                label_71790f:
                                                    void* ecx_41 = ecx_33 - edx_24
                                                    int32_t edx_30 = edx_24 - edi_2
                                                    float* edi_46 = edi_2 + (i_1 << 2)
                                                    uint32_t i_75 = var_14_1 - i_1
                                                    float* eax_247
                                                    uint32_t i_10
                                                    
                                                    do
                                                        eax_247 = edi_46 + edx_30
                                                        *edi_46 = (*(edi_46 + edx_30) f-
                                                            *(eax_247 + ecx_41)) f* xmm5_1 f+
                                                            *(eax_247 + ecx_41) + *edi_46
                                                        edi_46 = &edi_46[1]
                                                        i_10 = i_75
                                                        i_75 -= 1
                                                    while (i_10 != 1)
                                                    return eax_247
                                                
                                                uint32_t i_11 = i_53
                                                void* edi_45 = &(*edx_24)[i_11 + 2]
                                                void* eax_243 = ecx_33 - edx_24
                                                void* edx_29 = edi_2 + ((i_11 + 1) << 2)
                                                
                                                do
                                                    float* eax_245 = edx_24 - edi_2 + edx_29
                                                    *(edx_29 - 4) = (*(edi_45 - 8) f-
                                                        *(ecx_33 + (i_11 << 2))) f* xmm5_1 f+
                                                        *(ecx_33 + (i_11 << 2)) f+ *(edx_29 - 4)
                                                    float* eax_246 = eax_243
                                                    ecx_33 = var_24_2
                                                    *edx_29 = (*eax_245 f- *(eax_243 + eax_245))
                                                        f* xmm5_1 f+ *(eax_243 + eax_245) f+ *edx_29
                                                    *(edx_29 + 4) = (*edi_45 f- *(eax_246 + edi_45))
                                                        f* xmm5_1 f+ *(eax_246 + edi_45) f+
                                                        *(edx_29 + 4)
                                                    float xmm0_250 = *(edi_45 + 4)
                                                    edi_45 += 0x10
                                                    float xmm0_253 = (xmm0_250 f-
                                                        *(ecx_33 + (i_11 << 2) + 0xc)) f* xmm5_1 f+
                                                        *(ecx_33 + (i_11 << 2) + 0xc)
                                                    i_11 += 4
                                                    i_1 = i_11
                                                    uint32_t i_40 = i_1
                                                    *(edx_29 + 8) = xmm0_253 f+ *(edx_29 + 8)
                                                    edx_29 += 0x10
                                                while (i_11 s< esi_47 - 3)
                                                
                                                edi_2 = var_18_1
                                                edx_24 = var_1c_2
                                                
                                                if (i_1 s< var_14_1)
                                                    goto label_71790f
                                            else
                                                i_53 = 0
                                                
                                                if (edi_2 u> &(*edx_24)[esi_47 - 1])
                                                    if (edi_2 u> ecx_33 + ((esi_47 - 1) << 2)
                                                            || edi_2 + ((esi_47 - 1) << 2)
                                                            u< ecx_33)
                                                        goto label_717743
                                                    
                                                    goto label_717827
                                                
                                                if (edi_2 + ((esi_47 - 1) << 2) u>= edx_24 || (
                                                        edi_2 u<= ecx_33 + ((esi_47 - 1) << 2)
                                                        && edi_2 + ((esi_47 - 1) << 2) u>= ecx_33))
                                                    goto label_717827
                                                
                                            label_717743:
                                                int32_t eax_221 = esi_47 & 0x8000000f
                                                
                                                if (eax_221 s< 0)
                                                    eax_221 = ((eax_221 - 1) | 0xfffffff0) + 1
                                                
                                                void* edi_44 = edi_2 + 0x10
                                                void* eax_229 = ecx_33 - edx_24
                                                float* edx_28 = &edx_24[2]
                                                uint32_t i_12 = 0
                                                
                                                do
                                                    float xmm0_232[0x4] = *(ecx_33 + (i_12 << 2))
                                                    void* eax_231 = edx_24 - edi_2 + edi_44
                                                    *(edi_44 - 0x10) = _mm_add_ps(
                                                        _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(*(edx_28 - 0x20), xmm0_232), 
                                                                xmm6_3), 
                                                            xmm0_232), 
                                                        *(edi_44 - 0x10))
                                                    float xmm0_234[0x4] = *(eax_231 + eax_229)
                                                    ecx_33 = var_24_2
                                                    *edi_44 = _mm_add_ps(
                                                        _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(*eax_231, xmm0_234), 
                                                                xmm6_3), 
                                                            xmm0_234), 
                                                        *edi_44)
                                                    float xmm0_236[0x4] = *(edx_28 + eax_229)
                                                    *(edi_44 + 0x10) = _mm_add_ps(
                                                        _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(*edx_28, xmm0_236), xmm6_3), 
                                                            xmm0_236), 
                                                        *(edi_44 + 0x10))
                                                    float xmm0_238[0x4] =
                                                        *(ecx_33 + (i_12 << 2) + 0x30)
                                                    i_12 += 0x10
                                                    float xmm1_100[0x4] = *(edx_28 + 0x10)
                                                    edx_28 = &edx_28[0x10]
                                                    i_1 = i_12
                                                    *(edi_44 + 0x20) = _mm_add_ps(
                                                        _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(xmm1_100, xmm0_238), 
                                                                xmm6_3), 
                                                            xmm0_238), 
                                                        *(edi_44 + 0x20))
                                                    edi_44 += 0x40
                                                while (i_12 s< esi_47 - eax_221)
                                                
                                                esi_47 = var_14_1
                                                edi_2 = var_18_1
                                                edx_24 = var_1c_2
                                                i_53 = i_1
                                                
                                                if (i_1 s< esi_47)
                                                    goto label_717827
                                    else
                                        int32_t eax_192 = *(i_1 + 0x20)
                                        i_1 = 0
                                        uint32_t i_61 = 0
                                        
                                        if (esi_47 s> 0)
                                            if (esi_47 u< 4)
                                                goto label_7176ad
                                            
                                            i_61 = 0
                                            
                                            if ((edi_2 u<= eax_192 + (esi_47 << 2) - 4
                                                    && edi_2 + ((esi_47 - 1) << 2) u>= eax_192) || (
                                                    edi_2 u<= &(*edx_24)[esi_47 - 1]
                                                    && edi_2 + ((esi_47 - 1) << 2) u>= edx_24) || (
                                                    edi_2 u<= ecx_33 + ((esi_47 - 1) << 2)
                                                    && edi_2 + ((esi_47 - 1) << 2) u>= ecx_33))
                                                i_1 = 0
                                            label_7176ad:
                                                void* eax_211 = &(*edx_24)[i_1]
                                                void* ecx_38 = ecx_33 - edx_24
                                                int32_t* edi_43 = edi_2 - edx_24
                                                uint32_t i_74 = esi_47 - i_61
                                                uint32_t i_13
                                                
                                                do
                                                    *(edi_43 + eax_211) = (*eax_211 f-
                                                        *(eax_211 + ecx_38)) f* xmm5_1 f+
                                                        *(eax_211 + ecx_38) f-
                                                        *(eax_192 - edx_24 + eax_211) f+
                                                        *(edi_43 + eax_211)
                                                    eax_211 += 4
                                                    i_13 = i_74
                                                    i_74 -= 1
                                                while (i_13 != 1)
                                                return eax_211
                                            
                                            int32_t eax_207 = esi_47 & 0x80000003
                                            
                                            if (eax_207 s< 0)
                                                eax_207 = ((eax_207 - 1) | 0xfffffffc) + 1
                                            
                                            int32_t var_2c_11 = esi_47 - eax_207
                                            void* esi_50 = ecx_33 - edx_24
                                            float (* eax_210)[0x4] = edx_24
                                            void* var_34_16 = esi_50
                                            void* edi_41 = var_18_1 - edx_24
                                            void* var_38_13 = edi_41
                                            
                                            do
                                                float xmm0_227[0x4] = *(esi_50 + eax_210)
                                                i_61 += 4
                                                *(edi_41 + eax_210) = _mm_add_ps(
                                                    _mm_sub_ps(
                                                        _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(*eax_210, xmm0_227), 
                                                                xmm6_3), 
                                                            xmm0_227), 
                                                        *(eax_192 - edx_24 + eax_210)), 
                                                    *(edi_41 + eax_210))
                                                eax_210 = &eax_210[1]
                                                esi_47 = var_14_1
                                            while (i_61 s< var_2c_11)
                                            
                                            i_1 = i_61
                                            edi_2 = var_18_1
                                            ecx_33 = var_24_2
                                            edx_24 = var_1c_2
                                            i_61 = i_1
                                            
                                            if (i_1 s< esi_47)
                                                goto label_7176ad
                            else
                                xmm3 f- 1f
                                void* ecx_4 = *(*(arg1 + 0x18) + (edx_2 << 2) - 4)
                                void* var_1c_1 = ecx_4
                                i_1:1.b = (xmm3 f== 1f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm3, 1f) ? 1 : 0) << 2
                                    | (xmm3 f< 1f ? 1 : 0)
                                bool p_4 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_4))
                                    if (i_63 != 3)
                                        return memcpy(edi_2, ecx_4, esi_1 << 2)
                                    
                                    uint32_t i_15 = 0
                                    i_1 = *(var_20 + 0x1c)
                                    
                                    if (*(i_1 + 0x18) == 0)
                                        i_1 = *(i_1 + 0x20)
                                        uint32_t i_59 = i_1
                                        
                                        if (esi_1 s> 0)
                                            if (esi_1 u< 2 || (edi_2 u<= i_1 + (esi_1 << 2) - 4
                                                && edi_2 + ((esi_1 - 1) << 2) u>= i_59) || (
                                                edi_2 u<= ecx_4 - 4 + (esi_1 << 2)
                                                && edi_2 + ((esi_1 - 1) << 2) u>= ecx_4))
                                            label_7168af:
                                                
                                                if (esi_1 - i_15 s< 4)
                                                label_71695e:
                                                    void* eax_64 = edi_2 + (i_15 << 2)
                                                    uint32_t i_68 = esi_1 - i_15
                                                    void* var_30_5 = eax_64
                                                    uint32_t i_14
                                                    
                                                    do
                                                        float* eax_65 = eax_64 + i_59 - edi_2
                                                        float* eax_66 = var_30_5
                                                        *eax_66 = *(ecx_4 - i_59 + eax_65) - *eax_65
                                                            + *eax_66
                                                        eax_64 = &eax_66[1]
                                                        var_30_5 = eax_64
                                                        i_14 = i_68
                                                        i_68 -= 1
                                                    while (i_14 != 1)
                                                    return eax_64
                                                
                                                void* esi_8 = edi_2 + ((i_15 + 1) << 2)
                                                void* edi_8 = ecx_4 - i_59
                                                void* edi_9 = i_59 + (i_15 << 2) + 8
                                                
                                                do
                                                    int32_t* ecx_7 = edi_8
                                                    float* eax_62 = i_59 - edi_2 + esi_8
                                                    *(esi_8 - 4) = *(ecx_4 + (i_15 << 2)) f-
                                                        *(edi_9 - 8) f+ *(esi_8 - 4)
                                                    ecx_4 = var_1c_1
                                                    *esi_8 = *(ecx_7 + eax_62) - *eax_62 f+ *esi_8
                                                    *(esi_8 + 4) =
                                                        *(ecx_7 + edi_9) f- *edi_9 f+ *(esi_8 + 4)
                                                    float xmm0_63 = *(ecx_4 + (i_15 << 2) + 0xc)
                                                    i_15 += 4
                                                    float xmm0_64 = xmm0_63 f- *(edi_9 + 4)
                                                    edi_9 += 0x10
                                                    i_1 = i_15
                                                    *(esi_8 + 8) = xmm0_64 f+ *(esi_8 + 8)
                                                    esi_8 += 0x10
                                                while (i_15 s< esi_1 - 3)
                                                
                                                esi_1 = var_14_1
                                                edi_2 = var_18_1
                                                
                                                if (i_1 s< esi_1)
                                                    goto label_71695e
                                            else
                                                if (esi_1 u< 0x10)
                                                label_716843:
                                                    int32_t eax_46 = esi_1 & 0x80000001
                                                    
                                                    if (eax_46 s< 0)
                                                        eax_46 = ((eax_46 - 1) | 0xfffffffe) + 1
                                                    
                                                    i_1 = ecx_4 - edi_2
                                                    int64_t* edi_6 = edi_2 + (i_15 << 2)
                                                    uint32_t i_50 = i_1
                                                    
                                                    do
                                                        uint128_t xmm2_4 = zx.o(*(i_1 + edi_6))
                                                        i_15 += 2
                                                        float xmm1_25[0x4] =
                                                            zx.o(*(i_1 + edi_6 + i_59 - ecx_4))
                                                        i_1 = i_50
                                                        *edi_6 = _mm_add_ps(
                                                            _mm_sub_ps(xmm2_4, xmm1_25), 
                                                            zx.o(*edi_6))
                                                        edi_6 = &edi_6[1]
                                                    while (i_15 s< esi_1 - eax_46)
                                                    
                                                    esi_1 = var_14_1
                                                    edi_2 = var_18_1
                                                    ecx_4 = var_1c_1
                                                else
                                                    int32_t eax_34 = esi_1 & 0x8000000f
                                                    
                                                    if (eax_34 s< 0)
                                                        eax_34 = ((eax_34 - 1) | 0xfffffff0) + 1
                                                    
                                                    void* esi_5 = edi_2 + 0x10
                                                    uint32_t i_83 = i_59
                                                    void* eax_41 = i_83 - ecx_4
                                                    void* ecx_5 = ecx_4 + 0x20
                                                    
                                                    do
                                                        int128_t* eax_43 = ecx_4 - edi_2 + esi_5
                                                        *(esi_5 - 0x10) = _mm_add_ps(
                                                            _mm_sub_ps(*(ecx_5 - 0x20), 
                                                                *(i_83 + (i_15 << 2))), 
                                                            *(esi_5 - 0x10))
                                                        i_83 = i_59
                                                        *esi_5 = _mm_add_ps(
                                                            _mm_sub_ps(*eax_43, 
                                                                *(eax_43 + eax_41)), 
                                                            *esi_5)
                                                        *(esi_5 + 0x10) = _mm_add_ps(
                                                            _mm_sub_ps(*ecx_5, *(eax_41 + ecx_5)), 
                                                            *(esi_5 + 0x10))
                                                        float xmm0_52[0x4] =
                                                            *(i_83 + (i_15 << 2) + 0x30)
                                                        i_15 += 0x10
                                                        float xmm1_22[0x4] = *(ecx_5 + 0x10)
                                                        ecx_5 += 0x40
                                                        *(esi_5 + 0x20) = _mm_add_ps(
                                                            _mm_sub_ps(xmm1_22, xmm0_52), 
                                                            *(esi_5 + 0x20))
                                                        esi_5 += 0x40
                                                    while (i_15 s< esi_1 - eax_34)
                                                    
                                                    esi_1 = var_14_1
                                                    edi_2 = var_18_1
                                                    i_1.b = esi_1.b & 0xf
                                                    ecx_4 = var_1c_1
                                                    
                                                    if (i_1.b u>= 2)
                                                        goto label_716843
                                                
                                                if (i_15 s< esi_1)
                                                    goto label_7168af
                                    else if (esi_1 s> 0)
                                        if (esi_1 u< 2)
                                        label_716a9a:
                                            
                                            if (esi_1 - i_15 s< 4)
                                            label_716b25:
                                                int32_t* eax_85 = edi_2 + (i_15 << 2)
                                                uint32_t i_69 = esi_1 - i_15
                                                uint32_t i_16
                                                
                                                do
                                                    *eax_85 = *(eax_85 + ecx_4 - edi_2) f+ *eax_85
                                                    eax_85 = &eax_85[1]
                                                    i_16 = i_69
                                                    i_69 -= 1
                                                while (i_16 != 1)
                                                return eax_85
                                            
                                            esi_1 = var_14_1
                                            void* eax_83 = ecx_4 + ((i_15 + 3) << 2)
                                            void* ecx_10 = ecx_4 - edi_2
                                            i_1 = edi_2 + ((i_15 + 1) << 2)
                                            void* var_2c_5 = ecx_10
                                            int32_t i_47 = ((esi_1 - i_15 - 4) u>> 2) + 1
                                            i_15 += (((esi_1 - i_15 - 4) u>> 2) + 1) << 2
                                            void* edi_17 = eax_83
                                            int32_t i_17
                                            
                                            do
                                                *(i_1 - 4) = *(edi_17 - 0xc) f+ *(i_1 - 4)
                                                *i_1 = *(ecx_10 + i_1) f+ *i_1
                                                *(i_1 + 4) = *(edi_17 - 4) f+ *(i_1 + 4)
                                                float xmm0_82 = *(i_1 + 8) f+ *edi_17
                                                edi_17 += 0x10
                                                *(i_1 + 8) = xmm0_82
                                                i_1 += 0x10
                                                i_17 = i_47
                                                i_47 -= 1
                                            while (i_17 != 1)
                                            edi_2 = var_18_1
                                            ecx_4 = var_1c_1
                                            
                                            if (i_15 s< esi_1)
                                                goto label_716b25
                                        else
                                            i_15 = 0
                                            
                                            if (edi_2 u<= ecx_4 + ((esi_1 - 1) << 2)
                                                    && edi_2 + ((esi_1 - 1) << 2) u>= ecx_4)
                                                goto label_716a9a
                                            
                                            if (esi_1 u< 0x10)
                                            label_716a4a:
                                                int32_t eax_77 = esi_1 & 0x80000001
                                                
                                                if (eax_77 s< 0)
                                                    eax_77 = ((eax_77 - 1) | 0xfffffffe) + 1
                                                
                                                int32_t var_28_12 = esi_1 - eax_77
                                                i_1 = edi_2 + (i_15 << 2)
                                                esi_1 = var_14_1
                                                
                                                do
                                                    i_15 += 2
                                                    *i_1 = _mm_add_ps(zx.o(*(ecx_4 - edi_2 + i_1)), 
                                                        zx.o(*i_1))
                                                    i_1 += 8
                                                while (i_15 s< var_28_12)
                                                
                                                edi_2 = var_18_1
                                            else
                                                int32_t eax_72 = esi_1 & 0x8000000f
                                                
                                                if (eax_72 s< 0)
                                                    eax_72 = ((eax_72 - 1) | 0xfffffff0) + 1
                                                
                                                int32_t var_28_10 = esi_1 - eax_72
                                                int128_t* esi_10 = ecx_4 - edi_2
                                                void* eax_75 = edi_2 + 0x10
                                                esi_1 = var_14_1
                                                void* edi_10 = ecx_4 + 0x30
                                                
                                                do
                                                    i_15 += 0x10
                                                    *(eax_75 - 0x10) = _mm_add_ps(*(edi_10 - 0x30), 
                                                        *(eax_75 - 0x10))
                                                    ecx_4 = var_1c_1
                                                    *eax_75 =
                                                        _mm_add_ps(*(esi_10 + eax_75), *eax_75)
                                                    *(eax_75 + 0x10) = _mm_add_ps(*(edi_10 - 0x10), 
                                                        *(eax_75 + 0x10))
                                                    float xmm0_72[0x4] = *edi_10
                                                    edi_10 += 0x40
                                                    *(eax_75 + 0x20) =
                                                        _mm_add_ps(*(eax_75 + 0x20), xmm0_72)
                                                    eax_75 += 0x40
                                                while (i_15 s< var_28_10)
                                                
                                                edi_2 = var_18_1
                                                i_1.b = esi_1.b & 0xf
                                                
                                                if (i_1.b u>= 2)
                                                    goto label_716a4a
                                            
                                            if (i_15 s< esi_1)
                                                goto label_716a9a
                                else
                                    switch (i_63)
                                        case 0
                                            int32_t i_19 = 0
                                            i_1 = *(var_20 + 0x1c)
                                            
                                            if (*(i_1 + 0x18) == 0)
                                                i_1 = *(i_1 + 0x20)
                                                uint32_t i_58 = i_1
                                                
                                                if (esi_1 s> 0)
                                                    if (esi_1 u< 0x10)
                                                    label_716c92:
                                                        
                                                        if (esi_1 - i_19 s< 4)
                                                        label_716d6b:
                                                            void* var_24_1 = i_58 - ecx_4
                                                            float* eax_110 = ecx_4 + (i_19 << 2)
                                                            int32_t i_70 = esi_1 - i_19
                                                            int32_t i_18
                                                            
                                                            do
                                                                *(edi_2 - ecx_4 + eax_110) = (
                                                                    *eax_110 f- *(eax_110 + var_24_1))
                                                                    f* xmm3 f+ *(eax_110 + var_24_1)
                                                                eax_110 = &eax_110[1]
                                                                i_18 = i_70
                                                                i_70 -= 1
                                                            while (i_18 != 1)
                                                            return eax_110
                                                        
                                                        i_1 = i_58
                                                        void* esi_21 = i_1 - ecx_4
                                                        void* ecx_16 = i_1 - edi_2
                                                        void* esi_24 = ecx_4 + ((i_19 + 1) << 2)
                                                        void* edi_19 = edi_2 + ((i_19 + 2) << 2)
                                                        void* ecx_17 = esi_21
                                                        
                                                        do
                                                            *(edi_19 - 8) = (*(esi_24 - 4) f-
                                                                *(i_1 + (i_19 << 2))) f* xmm3 f+
                                                                *(i_1 + (i_19 << 2))
                                                            *(edi_2 - ecx_4 + esi_24) = (*esi_24 f-
                                                                *(esi_24 + ecx_17)) f* xmm3 f+
                                                                *(esi_24 + ecx_17)
                                                            ecx_17 = esi_21
                                                            *edi_19 = (*(esi_24 + 4) f-
                                                                *(edi_19 + ecx_16)) f* xmm3 f+
                                                                *(edi_19 + ecx_16)
                                                            float xmm0_113 = *(esi_24 + 8)
                                                            esi_24 += 0x10
                                                            float xmm0_116 = (xmm0_113 f-
                                                                *(i_1 + (i_19 << 2) + 0xc)) f* xmm3 f+
                                                                *(i_1 + (i_19 << 2) + 0xc)
                                                            i_19 += 4
                                                            *(edi_19 + 4) = xmm0_116
                                                            edi_19 += 0x10
                                                        while (i_19 s< esi_1 - 3)
                                                        
                                                        esi_1 = var_14_1
                                                        edi_2 = var_18_1
                                                        ecx_4 = var_1c_1
                                                        int32_t i_36 = i_19
                                                        
                                                        if (i_19 s< esi_1)
                                                            goto label_716d6b
                                                    else
                                                        if (edi_2 u> ecx_4 + ((esi_1 - 1) << 2))
                                                            if (edi_2 u> i_58 + (esi_1 << 2) - 4
                                                                    || edi_2 + ((esi_1 - 1) << 2) u< i_58)
                                                                goto label_716bd7
                                                            
                                                            goto label_716c92
                                                        
                                                        if (edi_2 + ((esi_1 - 1) << 2) u>= ecx_4 ||
                                                                (edi_2 u<= i_58 + (esi_1 << 2) - 4
                                                                && edi_2 + ((esi_1 - 1) << 2)
                                                                u>= i_58))
                                                            goto label_716c92
                                                        
                                                    label_716bd7:
                                                        int32_t eax_99 = esi_1 & 0x8000000f
                                                        
                                                        if (eax_99 s< 0)
                                                            eax_99 = ((eax_99 - 1) | 0xfffffff0) + 1
                                                        
                                                        i_1 = i_58
                                                        void* esi_14 = i_1 - ecx_4
                                                        void* esi_16 = edi_2 - ecx_4
                                                        void* edi_18 = edi_2 + 0x20
                                                        void* esi_19 = ecx_4 + 0x10
                                                        
                                                        do
                                                            float xmm1_36[0x4] =
                                                                *(i_1 + (i_19 << 2))
                                                            *(edi_18 - 0x20) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*(esi_19 - 0x10), xmm1_36), 
                                                                    xmm4_1), 
                                                                xmm1_36)
                                                            float xmm1_37[0x4] = *(esi_14 + esi_19)
                                                            *(esi_16 + esi_19) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*esi_19, xmm1_37), xmm4_1), 
                                                                xmm1_37)
                                                            float xmm1_38[0x4] =
                                                                *(i_1 - edi_2 + edi_18)
                                                            ecx_4 = var_1c_1
                                                            *edi_18 = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*(esi_19 + 0x10), xmm1_38), 
                                                                    xmm4_1), 
                                                                xmm1_38)
                                                            float xmm1_39[0x4] =
                                                                *(i_1 + (i_19 << 2) + 0x30)
                                                            i_19 += 0x10
                                                            float xmm0_97[0x4] = *(esi_19 + 0x20)
                                                            esi_19 += 0x40
                                                            *(edi_18 + 0x10) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(xmm0_97, xmm1_39), xmm4_1), 
                                                                xmm1_39)
                                                            edi_18 += 0x40
                                                        while (i_19 s< esi_1 - eax_99)
                                                        
                                                        esi_1 = var_14_1
                                                        edi_2 = var_18_1
                                                        int32_t i_44 = i_19
                                                        
                                                        if (i_19 s< esi_1)
                                                            goto label_716c92
                                            else if (esi_1 s> 0)
                                                if (esi_1 u< 0x10)
                                                label_716e43:
                                                    
                                                    if (esi_1 - i_19 s< 4)
                                                    label_716ed1:
                                                        void* eax_124 = edi_2 + (i_19 << 2)
                                                        int32_t i_71 = esi_1 - i_19
                                                        int32_t i_20
                                                        
                                                        do
                                                            eax_124 += 4
                                                            *(eax_124 - 4) = xmm3[0] f*
                                                                *(ecx_4 - edi_2 + eax_124 - 4)
                                                            i_20 = i_71
                                                            i_71 -= 1
                                                        while (i_20 != 1)
                                                        return eax_124
                                                    
                                                    void* eax_122 = ecx_4 + 0xc + (i_19 << 2)
                                                    i_1 = edi_2 + ((i_19 + 1) << 2)
                                                    int32_t i_51 = ((var_14_1 - i_19 - 4) u>> 2) + 1
                                                    i_19 += (((var_14_1 - i_19 - 4) u>> 2) + 1) << 2
                                                    void* esi_35 = eax_122
                                                    int32_t i_21
                                                    
                                                    do
                                                        i_21 = i_51
                                                        i_51 -= 1
                                                        i_1 += 0x10
                                                        esi_35 += 0x10
                                                        *(i_1 - 0x14) = xmm3[0] f* *(esi_35 - 0x1c)
                                                        *(i_1 - 0x10) =
                                                            xmm3[0] f* *(ecx_4 - edi_2 + i_1 - 0x10)
                                                        *(i_1 - 0xc) = xmm3[0] f* *(esi_35 - 0x14)
                                                        *(i_1 - 8) = xmm3[0] f* *(esi_35 - 0x10)
                                                    while (i_21 != 1)
                                                    esi_1 = var_14_1
                                                    ecx_4 = var_1c_1
                                                    
                                                    if (i_19 s< esi_1)
                                                        goto label_716ed1
                                                else
                                                    i_19 = 0
                                                    
                                                    if (edi_2 u<= ecx_4 + ((esi_1 - 1) << 2)
                                                            && edi_2 + ((esi_1 - 1) << 2)
                                                            u>= ecx_4)
                                                        goto label_716e43
                                                    
                                                    int32_t eax_116 = esi_1 & 0x8000000f
                                                    
                                                    if (eax_116 s< 0)
                                                        eax_116 = ((eax_116 - 1) | 0xfffffff0) + 1
                                                    
                                                    i_1 = edi_2 + 0x10
                                                    void* esi_27 = ecx_4 + 0x30
                                                    
                                                    do
                                                        float xmm0_121[0x4] = *(esi_27 - 0x30)
                                                        i_19 += 0x10
                                                        i_1 += 0x40
                                                        esi_27 += 0x40
                                                        *(i_1 - 0x50) = _mm_mul_ps(xmm0_121, xmm4_1)
                                                        *(i_1 - 0x40) = _mm_mul_ps(
                                                            *(ecx_4 - edi_2 + i_1 - 0x40), xmm4_1)
                                                        *(i_1 - 0x30) =
                                                            _mm_mul_ps(*(esi_27 - 0x50), xmm4_1)
                                                        *(i_1 - 0x20) =
                                                            _mm_mul_ps(*(esi_27 - 0x40), xmm4_1)
                                                    while (i_19 s< esi_1 - eax_116)
                                                    
                                                    esi_1 = var_14_1
                                                    edi_2 = var_18_1
                                                    int32_t i_37 = i_19
                                                    
                                                    if (i_19 s< esi_1)
                                                        goto label_716e43
                                        case 1, 2
                                            int32_t edx_20 = 0
                                            
                                            if (esi_1 s> 0)
                                                if (esi_1 u< 0x10 || (
                                                    edi_2 u<= ecx_4 + ((esi_1 - 1) << 2)
                                                    && edi_2 + ((esi_1 - 1) << 2) u>= ecx_4))
                                                label_716fc5:
                                                    
                                                    if (esi_1 - edx_20 s< 4)
                                                    label_717072:
                                                        esi_1 = var_14_1
                                                        float* eax_138 = edi_2 + (edx_20 << 2)
                                                        void* ecx_25 = ecx_4 - edi_2
                                                        int32_t i_66 = esi_1 - edx_20
                                                        void* var_38_8 = ecx_25
                                                        int32_t i_22
                                                        
                                                        do
                                                            *eax_138 =
                                                                (*(ecx_25 + eax_138) - *eax_138) f* xmm3
                                                                + *eax_138
                                                            eax_138 = &eax_138[1]
                                                            i_22 = i_66
                                                            i_66 -= 1
                                                        while (i_22 != 1)
                                                        ecx_4 = var_1c_1
                                                    else
                                                        void* var_28_21 = ecx_4 - edi_2
                                                        void* ecx_24 = ecx_4 + ((edx_20 + 3) << 2)
                                                        void* eax_137 = edi_2 + ((edx_20 + 1) << 2)
                                                        int32_t i_48 =
                                                            ((var_14_1 - edx_20 - 4) u>> 2) + 1
                                                        edx_20 += (((var_14_1 - edx_20 - 4) u>> 2)
                                                            + 1) << 2
                                                        edi_2 = var_18_1
                                                        int32_t i_23
                                                        
                                                        do
                                                            *(eax_137 - 4) = (*(ecx_24 - 0xc) f-
                                                                *(eax_137 - 4)) f* xmm3 f+
                                                                *(eax_137 - 4)
                                                            *eax_137 = (*(var_28_21 + eax_137) f-
                                                                *eax_137) f* xmm3 f+ *eax_137
                                                            *(eax_137 + 4) = (*(ecx_24 - 4) f-
                                                                *(eax_137 + 4)) f* xmm3 f+
                                                                *(eax_137 + 4)
                                                            float xmm0_167 = *ecx_24
                                                            ecx_24 += 0x10
                                                            *(eax_137 + 8) =
                                                                (xmm0_167 f- *(eax_137 + 8)) f* xmm3 f+
                                                                *(eax_137 + 8)
                                                            eax_137 += 0x10
                                                            i_23 = i_48
                                                            i_48 -= 1
                                                        while (i_23 != 1)
                                                        esi_1 = var_14_1
                                                        ecx_4 = var_1c_1
                                                        
                                                        if (edx_20 s< esi_1)
                                                            goto label_717072
                                                else
                                                    int32_t eax_130 = esi_1 & 0x8000000f
                                                    
                                                    if (eax_130 s< 0)
                                                        eax_130 = ((eax_130 - 1) | 0xfffffff0) + 1
                                                    
                                                    int32_t var_28_19 = esi_1 - eax_130
                                                    void* esi_37 = ecx_4 - edi_2
                                                    void* eax_133 = edi_2 + 0x10
                                                    esi_1 = var_14_1
                                                    void* edi_22 = ecx_4 + 0x30
                                                    
                                                    do
                                                        float xmm1_40[0x4] = *(eax_133 - 0x10)
                                                        edx_20 += 0x10
                                                        *(eax_133 - 0x10) = _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(*(edi_22 - 0x30), xmm1_40), 
                                                                xmm4_1), 
                                                            xmm1_40)
                                                        float xmm1_41[0x4] = *eax_133
                                                        ecx_4 = var_1c_1
                                                        *eax_133 = _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(*(esi_37 + eax_133), 
                                                                    xmm1_41), 
                                                                xmm4_1), 
                                                            xmm1_41)
                                                        float xmm1_42[0x4] = *(eax_133 + 0x10)
                                                        *(eax_133 + 0x10) = _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(*(edi_22 - 0x10), xmm1_42), 
                                                                xmm4_1), 
                                                            xmm1_42)
                                                        float xmm1_43[0x4] = *(eax_133 + 0x20)
                                                        float xmm0_151[0x4] = *edi_22
                                                        edi_22 += 0x40
                                                        *(eax_133 + 0x20) = _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(xmm0_151, xmm1_43), xmm4_1), 
                                                            xmm1_43)
                                                        eax_133 += 0x40
                                                    while (edx_20 s< var_28_19)
                                                    
                                                    edi_2 = var_18_1
                                                    int32_t var_38_6 = edx_20
                                                    
                                                    if (edx_20 s< esi_1)
                                                        goto label_716fc5
                                            
                                            goto label_7170b3
                                        case 3
                                        label_7170b3:
                                            uint32_t i_25 = 0
                                            i_1 = *(var_20 + 0x1c)
                                            
                                            if (*(i_1 + 0x18) == 0)
                                                i_1 = *(i_1 + 0x20)
                                                uint32_t i_60 = i_1
                                                
                                                if (esi_1 s> 0)
                                                    if (esi_1 u< 0x10)
                                                    label_7171d6:
                                                        
                                                        if (esi_1 - i_25 s< 4)
                                                        label_71729b:
                                                            void* eax_171 = edi_2 + (i_25 << 2)
                                                            uint32_t i_72 = esi_1 - i_25
                                                            void* var_30_10 = eax_171
                                                            uint32_t i_24
                                                            
                                                            do
                                                                int32_t* eax_172 =
                                                                    eax_171 + i_60 - edi_2
                                                                float* eax_173 = var_30_10
                                                                *eax_173 = (
                                                                    *(eax_172 + ecx_4 - i_60) f- *eax_172)
                                                                    f* xmm3 + *eax_173
                                                                eax_171 = &eax_173[1]
                                                                var_30_10 = eax_171
                                                                i_24 = i_72
                                                                i_72 -= 1
                                                            while (i_24 != 1)
                                                            return eax_171
                                                        
                                                        void* esi_42 = edi_2 + ((i_25 + 1) << 2)
                                                        void* edi_30 = ecx_4 - i_60
                                                        void* edi_31 = i_60 + (i_25 << 2) + 8
                                                        
                                                        do
                                                            float* eax_169 = i_60 - edi_2 + esi_42
                                                            *(esi_42 - 4) = (
                                                                *(ecx_4 + (i_25 << 2)) f- *(edi_31 - 8))
                                                                f* xmm3 f+ *(esi_42 - 4)
                                                            ecx_4 = var_1c_1
                                                            *esi_42 = (*(edi_30 + eax_169)
                                                                - *eax_169) f* xmm3 f+ *esi_42
                                                            *(esi_42 + 4) = (*(edi_30 + edi_31) f-
                                                                *edi_31) f* xmm3 f+ *(esi_42 + 4)
                                                            float xmm0_195 =
                                                                *(ecx_4 + (i_25 << 2) + 0xc)
                                                            i_25 += 4
                                                            float xmm0_196 =
                                                                xmm0_195 f- *(edi_31 + 4)
                                                            edi_31 += 0x10
                                                            i_1 = i_25
                                                            *(esi_42 + 8) =
                                                                xmm0_196 f* xmm3 f+ *(esi_42 + 8)
                                                            esi_42 += 0x10
                                                        while (i_25 s< esi_1 - 3)
                                                        
                                                        esi_1 = var_14_1
                                                        edi_2 = var_18_1
                                                        
                                                        if (i_1 s< esi_1)
                                                            goto label_71729b
                                                    else
                                                        ecx_4 = var_1c_1
                                                        
                                                        if (edi_2 u> i_1 + (esi_1 << 2) - 4)
                                                            if (edi_2 u> ecx_4 - 4 + (esi_1 << 2)
                                                                    || edi_2 + ((esi_1 - 1) << 2) u< ecx_4)
                                                                goto label_71710e
                                                            
                                                            goto label_7171d6
                                                        
                                                        if (edi_2 + ((esi_1 - 1) << 2) u>= i_60 || (
                                                                edi_2 u<= ecx_4 - 4 + (esi_1 << 2)
                                                                && edi_2 + ((esi_1 - 1) << 2)
                                                                u>= ecx_4))
                                                            goto label_7171d6
                                                        
                                                    label_71710e:
                                                        int32_t eax_149 = esi_1 & 0x8000000f
                                                        
                                                        if (eax_149 s< 0)
                                                            eax_149 =
                                                                ((eax_149 - 1) | 0xfffffff0) + 1
                                                        
                                                        uint32_t i_82 = i_60
                                                        void* edi_28 = edi_2 + 0x10
                                                        void* eax_157 = i_82 - ecx_4
                                                        void* ecx_26 = ecx_4 + 0x20
                                                        
                                                        do
                                                            int128_t* eax_159 =
                                                                ecx_4 - edi_2 + edi_28
                                                            *(edi_28 - 0x10) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*(ecx_26 - 0x20), 
                                                                        *(i_82 + (i_25 << 2))), 
                                                                    xmm4_1), 
                                                                *(edi_28 - 0x10))
                                                            i_82 = i_60
                                                            *edi_28 = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*eax_159, 
                                                                        *(eax_159 + eax_157)), 
                                                                    xmm4_1), 
                                                                *edi_28)
                                                            *(edi_28 + 0x10) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*ecx_26, 
                                                                        *(eax_157 + ecx_26)), 
                                                                    xmm4_1), 
                                                                *(edi_28 + 0x10))
                                                            float xmm0_181[0x4] =
                                                                *(i_82 + (i_25 << 2) + 0x30)
                                                            i_25 += 0x10
                                                            float xmm1_56[0x4] = *(ecx_26 + 0x10)
                                                            ecx_26 += 0x40
                                                            i_1 = i_25
                                                            *(edi_28 + 0x20) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(xmm1_56, xmm0_181), xmm4_1), 
                                                                *(edi_28 + 0x20))
                                                            edi_28 += 0x40
                                                        while (i_25 s< esi_1 - eax_149)
                                                        
                                                        esi_1 = var_14_1
                                                        edi_2 = var_18_1
                                                        ecx_4 = var_1c_1
                                                        
                                                        if (i_1 s< esi_1)
                                                            goto label_7171d6
                                            else if (esi_1 s> 0)
                                                if (esi_1 u< 0x10)
                                                label_71739b:
                                                    
                                                    if (esi_1 - i_25 s< 4)
                                                    label_717431:
                                                        float* eax_187 = edi_2 + (i_25 << 2)
                                                        uint32_t i_73 = esi_1 - i_25
                                                        uint32_t i_26
                                                        
                                                        do
                                                            *eax_187 =
                                                                xmm3[0] f* *(eax_187 + ecx_4 - edi_2)
                                                                + *eax_187
                                                            eax_187 = &eax_187[1]
                                                            i_26 = i_73
                                                            i_73 -= 1
                                                        while (i_26 != 1)
                                                        return eax_187
                                                    
                                                    esi_1 = var_14_1
                                                    void* eax_185 = ecx_4 + ((i_25 + 3) << 2)
                                                    void* ecx_30 = ecx_4 - edi_2
                                                    i_1 = edi_2 + ((i_25 + 1) << 2)
                                                    void* var_34_15 = ecx_30
                                                    int32_t i_49 = ((esi_1 - i_25 - 4) u>> 2) + 1
                                                    i_25 += (((esi_1 - i_25 - 4) u>> 2) + 1) << 2
                                                    void* edi_38 = eax_185
                                                    int32_t i_27
                                                    
                                                    do
                                                        *(i_1 - 4) =
                                                            xmm3[0] f* *(edi_38 - 0xc) f+ *(i_1 - 4)
                                                        *i_1 = xmm3[0] f* *(ecx_30 + i_1) f+ *i_1
                                                        *(i_1 + 4) =
                                                            xmm3[0] f* *(edi_38 - 4) f+ *(i_1 + 4)
                                                        float xmm0_217 = xmm3[0] f* *edi_38
                                                        edi_38 += 0x10
                                                        *(i_1 + 8) = xmm0_217 f+ *(i_1 + 8)
                                                        i_1 += 0x10
                                                        i_27 = i_49
                                                        i_49 -= 1
                                                    while (i_27 != 1)
                                                    edi_2 = var_18_1
                                                    ecx_4 = var_1c_1
                                                    
                                                    if (i_25 s< esi_1)
                                                        goto label_717431
                                                else
                                                    i_25 = 0
                                                    
                                                    if (edi_2 u<= ecx_4 + ((esi_1 - 1) << 2)
                                                            && edi_2 + ((esi_1 - 1) << 2)
                                                            u>= ecx_4)
                                                        goto label_71739b
                                                    
                                                    int32_t eax_179 = esi_1 & 0x8000000f
                                                    
                                                    if (eax_179 s< 0)
                                                        eax_179 = ((eax_179 - 1) | 0xfffffff0) + 1
                                                    
                                                    int32_t var_28_29 = esi_1 - eax_179
                                                    void* esi_44 = ecx_4 - edi_2
                                                    i_1 = edi_2 + 0x10
                                                    esi_1 = var_14_1
                                                    void* edi_32 = ecx_4 + 0x30
                                                    
                                                    do
                                                        i_25 += 0x10
                                                        *(i_1 - 0x10) = _mm_add_ps(
                                                            _mm_mul_ps(*(edi_32 - 0x30), xmm4_1), 
                                                            *(i_1 - 0x10))
                                                        ecx_4 = var_1c_1
                                                        *i_1 = _mm_add_ps(
                                                            _mm_mul_ps(*(esi_44 + i_1), xmm4_1), 
                                                            *i_1)
                                                        *(i_1 + 0x10) = _mm_add_ps(
                                                            _mm_mul_ps(*(edi_32 - 0x10), xmm4_1), 
                                                            *(i_1 + 0x10))
                                                        float xmm1_69[0x4] = *edi_32
                                                        edi_32 += 0x40
                                                        *(i_1 + 0x20) = _mm_add_ps(
                                                            _mm_mul_ps(xmm1_69, xmm4_1), 
                                                            *(i_1 + 0x20))
                                                        i_1 += 0x40
                                                    while (i_25 s< var_28_29)
                                                    
                                                    edi_2 = var_18_1
                                                    uint32_t i_38 = i_25
                                                    
                                                    if (i_25 s< esi_1)
                                                        goto label_71739b
                        else
                            if (i_63 == 0)
                                *(ecx_1 + 0x24) = 0
                                return i_1
                            
                            if (i_63 == 1)
                                xmm3 f- 1f
                                i_1:1.b = (xmm3 f== 1f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm3, 1f) ? 1 : 0) << 2
                                    | (xmm3 f< 1f ? 1 : 0)
                                bool p_2 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_2))
                                    *(ecx_1 + 0x24) = 0
                                    return i_1
                                
                                i_1 = *(ecx_1 + 0x1c)
                                *(ecx_1 + 0x24) = esi_1
                                int32_t i_28 = 0
                                
                                if (*(i_1 + 0x18) != 0)
                                    float xmm2_2[0x4] = 1f f- xmm3
                                    float xmm2_3[0x4] = _mm_shuffle_ps(xmm2_2, xmm2_2, 0)
                                    float xmm3_2[0x4] = _mm_shuffle_ps(xmm2_3, xmm2_3, 0)
                                    
                                    if (esi_1 s> 0)
                                        if (esi_1 u>= 0x10)
                                            i_28 = 0
                                            int32_t eax_18 = esi_1 & 0x8000000f
                                            
                                            if (eax_18 s< 0)
                                                eax_18 = ((eax_18 - 1) | 0xfffffff0) + 1
                                            
                                            i_1 = edi_2 + 0x20
                                            
                                            do
                                                float xmm0_38[0x4] = *(i_1 - 0x20)
                                                i_1 += 0x40
                                                i_28 += 0x10
                                                *(i_1 - 0x60) = _mm_mul_ps(xmm3_2, xmm0_38)
                                                *(i_1 - 0x50) = _mm_mul_ps(xmm3_2, *(i_1 - 0x50))
                                                *(i_1 - 0x40) = _mm_mul_ps(xmm3_2, *(i_1 - 0x40))
                                                *(i_1 - 0x30) = _mm_mul_ps(xmm3_2, *(i_1 - 0x30))
                                            while (i_28 s< esi_1 - eax_18)
                                        
                                        if (esi_1 u< 0x10 || i_28 s< esi_1)
                                            i_1 = esi_1 - i_28
                                            
                                            if (i_1 s< 4)
                                            label_7166d0:
                                                
                                                do
                                                    *(edi_2 + (i_28 << 2)) =
                                                        xmm2_3[0] f* *(edi_2 + (i_28 << 2))
                                                    i_28 += 1
                                                while (i_28 s< esi_1)
                                                
                                                return i_1
                                            
                                            i_1 = edi_2 + ((i_28 + 2) << 2)
                                            int32_t i_65 = ((esi_1 - i_28 - 4) u>> 2) + 1
                                            i_28 += i_65 << 2
                                            int32_t i_29
                                            
                                            do
                                                i_1 += 0x10
                                                *(i_1 - 0x18) = _mm_mul_ps(*(i_1 - 0x18), xmm2_3)
                                                i_29 = i_65
                                                i_65 -= 1
                                            while (i_29 != 1)
                                            
                                            if (i_28 s< esi_1)
                                                goto label_7166d0
                                else
                                    void* edx_5 = *(i_1 + 0x20)
                                    void* var_30_1 = edx_5
                                    
                                    if (esi_1 s> 0)
                                        if (esi_1 u< 0x10 || (edi_2 u<= edx_5 + ((esi_1 - 1) << 2)
                                            && edi_2 + ((esi_1 - 1) << 2) u>= edx_5))
                                        label_716515:
                                            i_1 = esi_1 - i_28
                                            
                                            if (i_1 s>= 4)
                                                int32_t i_64 = ((esi_1 - i_28 - 4) u>> 2) + 1
                                                i_1 = edi_2 + ((i_28 + 1) << 2)
                                                void* edi_4 = edx_5 + ((i_28 + 3) << 2)
                                                i_28 += i_64 << 2
                                                int32_t i_30
                                                
                                                do
                                                    *(i_1 - 4) =
                                                        (*(edi_4 - 0xc) f- *(i_1 - 4)) f* xmm3 f+
                                                        *(i_1 - 4)
                                                    *i_1 =
                                                        (*(edx_5 - edi_2 + i_1) f- *i_1) f* xmm3 f+
                                                        *i_1
                                                    *(i_1 + 4) =
                                                        (*(edi_4 - 4) f- *(i_1 + 4)) f* xmm3 f+
                                                        *(i_1 + 4)
                                                    float xmm0_30 = *edi_4
                                                    edi_4 += 0x10
                                                    *(i_1 + 8) = (xmm0_30 f- *(i_1 + 8)) f* xmm3 f+
                                                        *(i_1 + 8)
                                                    i_1 += 0x10
                                                    i_30 = i_64
                                                    i_64 -= 1
                                                while (i_30 != 1)
                                                esi_1 = var_14_1
                                                edi_2 = var_18_1
                                                edx_5 = var_30_1
                                            
                                            if (i_28 s< esi_1)
                                                float* eax_16 = edi_2 + (i_28 << 2)
                                                int32_t i_67 = esi_1 - i_28
                                                int32_t i_31
                                                
                                                do
                                                    *eax_16 = (*(edx_5 - edi_2 + eax_16) - *eax_16)
                                                        f* xmm3 + *eax_16
                                                    eax_16 = &eax_16[1]
                                                    i_31 = i_67
                                                    i_67 -= 1
                                                while (i_31 != 1)
                                                return eax_16
                                        else
                                            int32_t eax_9 = esi_1 & 0x8000000f
                                            
                                            if (eax_9 s< 0)
                                                eax_9 = ((eax_9 - 1) | 0xfffffff0) + 1
                                            
                                            int32_t var_28_2 = esi_1 - eax_9
                                            void* esi_3 = edx_5 - edi_2
                                            i_1 = edi_2 + 0x10
                                            esi_1 = var_14_1
                                            void* edi_3 = edx_5 + 0x30
                                            
                                            do
                                                float xmm1_1[0x4] = *(i_1 - 0x10)
                                                i_28 += 0x10
                                                *(i_1 - 0x10) = _mm_add_ps(
                                                    _mm_mul_ps(_mm_sub_ps(*(edi_3 - 0x30), xmm1_1), 
                                                        xmm4_1), 
                                                    xmm1_1)
                                                float xmm1_2[0x4] = *i_1
                                                edx_5 = var_30_1
                                                *i_1 = _mm_add_ps(
                                                    _mm_mul_ps(_mm_sub_ps(*(esi_3 + i_1), xmm1_2), 
                                                        xmm4_1), 
                                                    xmm1_2)
                                                float xmm1_3[0x4] = *(i_1 + 0x10)
                                                *(i_1 + 0x10) = _mm_add_ps(
                                                    _mm_mul_ps(_mm_sub_ps(*(edi_3 - 0x10), xmm1_3), 
                                                        xmm4_1), 
                                                    xmm1_3)
                                                float xmm1_4[0x4] = *(i_1 + 0x20)
                                                float xmm0_14[0x4] = *edi_3
                                                edi_3 += 0x40
                                                *(i_1 + 0x20) = _mm_add_ps(
                                                    _mm_mul_ps(_mm_sub_ps(xmm0_14, xmm1_4), 
                                                        xmm4_1), 
                                                    xmm1_4)
                                                i_1 += 0x40
                                            while (i_28 s< var_28_2)
                                            
                                            edi_2 = var_18_1
                                            int32_t i_43 = i_28
                                            
                                            if (i_28 s< esi_1)
                                                goto label_716515

return i_1
