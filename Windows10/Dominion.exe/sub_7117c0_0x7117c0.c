// 函数: sub_7117c0
// 地址: 0x7117c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float var_10 = arg2
int32_t result = 0

if (*(arg1 + 0x34) != 0)
    int32_t eax_1 = *(arg1 + 4)
    void* edx = arg1 + 8
    int32_t edi_1 = 0
    *(arg1 + 0x34) = 0
    *(arg1 + 0x2c) = 0
    void* var_1c_1 = edx
    
    if (eax_1 s<= 0)
        var_1c_1 = edx
    else
        do
            int32_t* i_1 = *(*edx + (edi_1 << 2))
            
            if (i_1 != 0)
                for (int32_t* i = i_1[2]; i != 0; i = i_1[2])
                    i_1 = i
                
                do
                    if (i_1[3] == 0 || i_1[0x1a] != 3)
                        sub_712e80(i_1, arg1)
                    
                    i_1 = i_1[3]
                while (i_1 != 0)
                
                edx = arg1 + 8
            
            edi_1 += 1
        while (edi_1 s< eax_1)
    
    int32_t ecx_1 = *(arg1 + 4)
    int32_t ecx_2 = ecx_1 - 1
    *(arg1 + 0x2c) = 0
    int32_t var_18_1 = ecx_2
    
    if (ecx_1 - 1 s>= 0)
        bool cond:1_1
        
        do
            int32_t* i_2 = *(*edx + (ecx_2 << 2))
            int32_t* i_3 = i_2
            
            if (i_2 != 0)
                do
                    void* eax_4 = *i_2
                    int32_t j_1 = *(eax_4 + 8)
                    int32_t* esi_2 = *(i_2[0x1b] + 8)
                    
                    if (j_1 s> 0)
                        void* ebx_2 = *(eax_4 + 0xc) - esi_2
                        int32_t j
                        
                        do
                            int32_t* edx_2 = *(esi_2 + ebx_2)
                            
                            if (*edx_2 == 4 && sub_712da0(arg1, edx_2[4]) == 0)
                                *esi_2 |= 4
                            
                            esi_2 = &esi_2[1]
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        i_2 = i_3
                    
                    i_2 = i_2[2]
                    i_3 = i_2
                while (i_2 != 0)
                
                edx = var_1c_1
            
            ecx_2 = var_18_1 - 1
            cond:1_1 = var_18_1 - 1 s>= 0
            var_18_1 = ecx_2
        while (cond:1_1)
    
    arg2 = var_10

int32_t eax_7 = *(arg1 + 4)
int32_t edi_2 = 0
int32_t var_28_2 = 0

if (eax_7 s> 0)
    do
        int32_t* esi_3 = *(*(arg1 + 8) + (edi_2 << 2))
        
        if (esi_3 != 0 && not(esi_3[0xf] f> 0))
            result = 0xffffffff
            int32_t eax_9 = 1
            
            if (edi_2 != 0)
                eax_9 = esi_3[0x1a]
            
            int32_t var_14_1 = eax_9
            float var_8_1 = esi_3[0x15]
            float xmm1_1[0x2]
            
            if (esi_3[2] == 0)
                float xmm0_5[0x2] = esi_3[0x10]
                xmm1_1 = xmm0_5
                
                if (not(xmm0_5 f< esi_3[0x13]) && esi_3[1] == 0)
                    var_8_1 = 0f
            else
                float xmm0_3
                eax_9, xmm0_3 = sub_711b80(eax_9, esi_3, arg1, arg2, eax_9)
                xmm1_1 = esi_3[0x10]
                var_8_1 = xmm0_3 * var_8_1
            
            int32_t xmm3_1 = esi_3[0xd]
            float xmm0_6 = esi_3[0xb]
            float xmm2_1 = esi_3[0xc]
            int32_t var_1c_2 = xmm3_1
            float var_c_1 = xmm0_6
            double var_3c
            
            if (esi_3[6] == 0)
                xmm0_6 = _mm_min_ss(xmm0_6 f+ xmm1_1, xmm2_1)
                var_c_1 = xmm0_6
            else
                float xmm2_2[0x2] = xmm2_1 - xmm0_6
                xmm2_2 f- 0
                eax_9:1.b = (xmm2_2 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_2, 0f) ? 1 : 0) << 2
                    | (xmm2_2 f< 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    int64_t var_3c_1 = _mm_cvtps_pd(xmm1_1)
                    unimplemented  {fld st0, qword [ebp-0x38]}
                    int64_t var_3c_2 = _mm_cvtps_pd(xmm2_2)
                    unimplemented  {fld st0, qword [ebp-0x38]}
                    _CIfmod()
                    xmm3_1 = var_1c_2
                    var_3c = fconvert.d(unimplemented  {fstp qword [ebp-0x38], st0})
                    unimplemented  {fstp qword [ebp-0x38], st0}
                    int16_t top = top - 1
                    xmm0_6 = _mm_cvtpd_ps(zx.o(var_3c)) + var_c_1
                    var_c_1 = xmm0_6
            
            void* eax_10 = *esi_3
            float xmm1_2 = var_8_1
            int32_t ecx_6 = *(eax_10 + 8)
            int32_t var_18_2 = ecx_6
            int32_t var_20_1 = *(eax_10 + 0xc)
            bool p_4
            
            if (edi_2 == 0)
                xmm1_2 - 1f
                int32_t eax_11
                eax_11:1.b = (xmm1_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, 1f) ? 1 : 0) << 2
                    | (xmm1_2 < 1f ? 1 : 0)
                p_4 = unimplemented  {test ah, 0x44}
            
            int32_t edx_5
            
            if (edi_2 == 0 && not(p_4))
                edx_5 = var_14_1
            label_711a92:
                int32_t edi_4 = 0
                
                if (ecx_6 s> 0)
                    do
                        void* eax_20 = *(var_20_1 + (edi_4 << 2))
                        int32_t* ecx_9 = *(eax_20 + 4)
                        int32_t* var_58_2 = ecx_9
                        (*ecx_9)(eax_20, var_10, xmm3_1, xmm0_6, *(arg1 + 0x20), arg1 + 0x1c, 
                            xmm1_2, edx_5, 0)
                        xmm0_6 = var_c_1
                        edi_4 += 1
                        xmm1_2 = var_8_1
                        xmm3_1 = var_1c_2
                        edx_5 = var_14_1
                    while (edi_4 s< var_18_2)
            else
                edx_5 = var_14_1
                
                if (edx_5 == 3)
                    goto label_711a92
                
                void* eax_12 = esi_3[0x1b]
                int32_t eax_13 = esi_3[0x1e]
                int32_t edx_6
                edx_6.b = eax_13 == 0
                
                if (eax_13 == 0)
                    sub_712d20(esi_3, ecx_6 * 2)
                    ecx_6 = var_18_2
                
                int32_t edi_3 = 0
                var_3c:4.d = esi_3[0x1d]
                
                if (ecx_6 s> 0)
                    do
                        int32_t edx_8 = 0
                        int32_t* ecx_8 = *(var_20_1 + (edi_3 << 2))
                        
                        if ((*(*(eax_12 + 8) + (edi_3 << 2)) & 3) == 0)
                            edx_8 = var_14_1
                        
                        if (*ecx_8 != 0)
                            int32_t* ecx_10 = ecx_8[1]
                            int32_t* var_58_4 = ecx_10
                            (*ecx_10)(*(var_20_1 + (edi_3 << 2)), var_10, var_1c_2, var_c_1, 
                                *(arg1 + 0x20), arg1 + 0x1c, var_8_1, edx_8, 0)
                        else
                            int32_t var_50_2 = edx_6
                            int32_t eax_18 = edi_3 * 2
                            int32_t* var_60_1 = ecx_8
                            sub_711f40(eax_18, ecx_8, var_c_1, ecx_8, var_10, var_8_1, edx_8, 
                                var_3c:4.d, eax_18)
                        
                        edi_3 += 1
                    while (edi_3 s< var_18_2)
            sub_712420(arg1, esi_3, var_c_1)
            edi_2 = var_28_2
            *(arg1 + 0x1c) = 0
            int32_t eax_25 = esi_3[0x10]
            esi_3[0xe] = var_c_1
            esi_3[0x12] = eax_25
        
        arg2 = var_10
        edi_2 += 1
        var_28_2 = edi_2
    while (edi_2 s< eax_7)

sub_710fd0(*(arg1 + 0x24))
return result
