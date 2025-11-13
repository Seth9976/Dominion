// 函数: sub_75b0e0
// 地址: 0x75b0e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* edi = arg1
int32_t j_8 = arg8
void* var_10 = edi

if (arg3 != 0)
    int32_t* esi = arg2
    int32_t i_3 = arg3
    int32_t i
    
    do
        if (j_8 != 0)
            int32_t* eax_2 = esi
            int32_t j
            
            do
                *eax_2 = 0
                eax_2 = &eax_2[arg4]
                j = j_8
                j_8 -= 1
            while (j != 1)
            j_8 = arg8
        
        esi = &esi[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    edi = var_10

int32_t i_1 = 0
int32_t i_2 = 0

if (*(edi + 0x1cdbc) u> 0)
    float xmm1_1 = arg7
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    
    do
        int32_t* esi_1 = *(edi + (*(edi + (i_1 << 2) + 0x1bdbc) << 2) + 0x50)
        int32_t* var_18_1 = esi_1
        
        if (esi_1 != 0 && esi_1[0x60] == arg6)
            int32_t var_58
            double var_50_1
            
            if ((esi_1[4].b & 0x24) == 0)
                float xmm0_2 = esi_1[0x11] f/ xmm1_1
                
                if (not(xmm0_2 <= 4096f))
                    xmm0_2 = (zx.o(0)).d
                
                long double x87_r7_1 = fconvert.t(fconvert.d(xmm0_2 * 1048576f))
                floor(fconvert.d(x87_r7_1))
                int32_t eax_5 = esi_1[0x6d]
                int32_t ecx = 0
                double var_3c_2 = fconvert.d(x87_r7_1)
                int32_t ebx = int.d(fconvert.t(var_3c_2))
                int32_t var_c_1 = 0
                
                if (eax_5 != 0)
                    var_c_1 = arg3
                    
                    if (eax_5 u<= arg3)
                        var_c_1 = eax_5
                    
                    int32_t j_1 = 0
                    *(0x1b4 + esi_1) = sbb.d(eax_5, eax_5, arg3 u< eax_5) & (eax_5 - arg3)
                    
                    if (esi_1[0x12] u> 0)
                        int32_t edi_1 = arg5
                        int32_t eax_9 = var_c_1 << 2
                        int32_t var_34_1 = eax_9
                        
                        do
                            var_50_1:4.d = eax_9
                            var_50_1.d = 0
                            memset(edi_1, 0)
                            j_1 += 1
                            edi_1 += arg4 << 2
                            eax_9 = var_34_1
                        while (j_1 u< esi_1[0x12])
                    
                    ecx = var_c_1
                    edi = var_10
                    ebx = int.d(fconvert.t(var_3c_2))
                
                int32_t edx_3 = arg3
                
                if (ebx != 0)
                    while (ecx u< edx_3)
                        if (esi_1[0x6c] != 0)
                            esi_1[0x6c] = 0
                        else
                            int32_t ecx_4 = esi_1[0x69]
                            int32_t j_2 = 0
                            esi_1[0x69] = esi_1[0x6a]
                            esi_1[0x6a] = ecx_4
                            
                            if ((*(*esi_1 + 8))() == 0 || (esi_1[4].b & 1) != 0)
                                var_50_1:4.d = 0x200
                                var_50_1.d = 0x200
                                int32_t var_54_2 = esi_1[0x69]
                                j_2 = (*(*esi_1 + 4))(var_54_2, 0x20000000200)
                                
                                if (j_2 s< 0x200)
                                    if ((esi_1[4].b & 1) == 0)
                                        goto label_75b30b
                                    
                                    do
                                        var_50_1:4.d = *(var_10 + 0x2c)
                                        var_50_1.d = *(var_10 + 0x20)
                                        var_58.q = *(esi_1 + 0x1b8)
                                        
                                        if ((*(*esi_1 + 0xc))(var_58, var_54_2, var_50_1) != 0)
                                            goto label_75b30b
                                        
                                        int32_t edx_4 = *esi_1
                                        esi_1[3] += 1
                                        var_50_1:4.d = 0x200
                                        var_50_1.d = 0x200 - j_2
                                        var_54_2 = esi_1[0x69] + (j_2 << 2)
                                        int32_t eax_22 = (*(edx_4 + 4))(var_54_2, var_50_1)
                                        j_2 += eax_22
                                        
                                        if (eax_22 == 0)
                                            break
                                    while (j_2 s< 0x200)
                                    
                                    if (j_2 s< 0x200)
                                        goto label_75b30b
                            else
                            label_75b30b:
                                int32_t j_3 = 0
                                
                                if (esi_1[0x12] u> 0)
                                    int32_t edi_2 = j_2 << 2
                                    int32_t eax_23 = 0x800 - edi_2
                                    int32_t var_34_2 = eax_23
                                    
                                    do
                                        var_50_1:4.d = eax_23
                                        var_50_1.d = 0
                                        memset(esi_1[0x69] + edi_2, 0)
                                        eax_23 = var_34_2
                                        j_3 += 1
                                        edi_2 += 0x800
                                    while (j_3 u< esi_1[0x12])
                            
                            int32_t edx_5 = esi_1[0x6b]
                            int32_t ecx_10 = 0
                            
                            if (edx_5 u>= 0x20000000)
                                ecx_10 = edx_5 - 0x20000000
                            
                            *(0x1ac + esi_1) = ecx_10
                            void* edi_4 = &esi_1[0x61]
                            int32_t j_9 = 8
                            int32_t j_4
                            
                            do
                                int32_t* ecx_11 = *edi_4
                                
                                if (ecx_11 != 0)
                                    int32_t var_5c_1 = 0x200
                                    int32_t var_60_1 = 0x200
                                    (*(*ecx_11 + 8))(esi_1[0x69], 0x200, 0x200, esi_1[0x12], 
                                        esi_1[0x11], *(var_10 + 0x10b0))
                                
                                edi_4 += 4
                                j_4 = j_9
                                j_9 -= 1
                            while (j_4 != 1)
                            ebx = int.d(fconvert.t(var_3c_2))
                            ecx = var_c_1
                            edx_3 = arg3
                        
                        int32_t edi_5 = esi_1[0x6b]
                        uint32_t k_9 = 0
                        uint32_t k_10
                        
                        if (edi_5 u>= 0x20000000)
                            k_10 = 0
                        else
                            uint32_t k_11 = divu.dp.d(0:(0x20000000 - edi_5), ebx)
                            edx_3 = arg3
                            k_10 = k_11 + 1
                            ecx = var_c_1
                            
                            if ((((k_11 + 1) * ebx + edi_5) & 0xfff00000) u>= 0x20000000)
                                k_10 = k_11
                            
                            k_9 = k_10
                        
                        if (k_10 + ecx u> edx_3)
                            esi_1[0x6c] = k_10 - edx_3 + ecx
                            k_10 = edx_3 - ecx
                            k_9 = k_10
                        
                        if (k_10 != 0)
                            int32_t j_7 = 0
                            
                            if (esi_1[0x12] u> 0)
                                int32_t eax_31 = 0
                                int32_t edx_9 = arg4 << 2
                                int32_t var_2c_1 = 0
                                int32_t var_1c_1 = 0
                                float* ebx_2 = arg5 + (ecx << 2)
                                int32_t ecx_16 = edx_9
                                float* var_20_1 = ebx_2
                                int32_t j_5
                                
                                do
                                    int32_t edx_12 = esi_1[0x69] + eax_31
                                    
                                    if (arg9 == 0)
                                        int32_t ecx_21 = esi_1[0x6b]
                                        int32_t eax_46 = 0
                                        int32_t var_28_3 = 0
                                        
                                        if (k_10 s>= 4)
                                            int32_t esi_3 = int.d(fconvert.t(var_3c_2))
                                            void* edi_14 = &ebx_2[2]
                                            int32_t k_6 = ((k_9 - 4) u>> 2) + 1
                                            var_28_3 = k_6 << 2
                                            int32_t k
                                            
                                            do
                                                edi_14 += 0x10
                                                int32_t ecx_22 = ecx_21 + esi_3
                                                *(edi_14 - 0x18) =
                                                    *(edx_12 + (ecx_21 s>> 0x14 << 2))
                                                int32_t ecx_23 = ecx_22 + esi_3
                                                *(edi_14 - 0x14) =
                                                    *(edx_12 + (ecx_22 s>> 0x14 << 2))
                                                int32_t ecx_24 = ecx_23 + esi_3
                                                *(edi_14 - 0x10) =
                                                    *(edx_12 + (ecx_23 s>> 0x14 << 2))
                                                ecx_21 = ecx_24 + esi_3
                                                *(edi_14 - 0xc) = *(edx_12 + (ecx_24 s>> 0x14 << 2))
                                                k = k_6
                                                k_6 -= 1
                                            while (k != 1)
                                            eax_46 = var_28_3
                                            k_10 = k_9
                                            esi_1 = var_18_1
                                            
                                            if (eax_46 s< k_10)
                                                goto label_75b6fc
                                            
                                            ecx_16 = edx_9
                                        else if (k_10 s<= 0)
                                            ecx_16 = edx_9
                                        else
                                        label_75b6fc:
                                            void* edi_15 =
                                                arg5 + ((eax_46 + var_2c_1 + var_c_1) << 2)
                                            int32_t k_7 = k_9 - var_28_3
                                            int32_t k_1
                                            
                                            do
                                                edi_15 += 4
                                                int32_t eax_63 = ecx_21 s>> 0x14
                                                ecx_21 += int.d(fconvert.t(var_3c_2))
                                                *(edi_15 - 4) = *(edx_12 + (eax_63 << 2))
                                                k_1 = k_7
                                                k_7 -= 1
                                            while (k_1 != 1)
                                        label_75b4f8:
                                            k_10 = k_9
                                            esi_1 = var_18_1
                                            ecx_16 = edx_9
                                    else if (arg9 == 2)
                                        int32_t edi_13 = esi_1[0x6a] + var_1c_1
                                        int32_t ebx_4 = esi_1[0x6b]
                                        
                                        if (k_9 s> 0)
                                            float* var_28_2 = var_20_1
                                            uint32_t k_5 = k_9
                                            uint32_t k_2
                                            
                                            do
                                                int32_t eax_43 = ebx_4 s>> 0x14
                                                int32_t ecx_20 = ebx_4 & 0xfffff
                                                float xmm5_1
                                                float xmm6_1
                                                float xmm7_1
                                                
                                                if (eax_43 s>= 3)
                                                    xmm6_1 = *(edx_12 + (eax_43 << 2) - 0xc)
                                                    xmm5_1 = *(edx_12 + (eax_43 << 2) - 8)
                                                    xmm7_1 = *(edx_12 + (eax_43 << 2) - 4)
                                                else
                                                    xmm6_1 = *(edi_13 + (eax_43 << 2) + 0x7f4)
                                                    
                                                    if (eax_43 s>= 2)
                                                        xmm5_1 = *(edx_12 + (eax_43 << 2) - 8)
                                                        xmm7_1 = *(edx_12 + (eax_43 << 2) - 4)
                                                    else
                                                        xmm5_1 = *(edi_13 + (eax_43 << 2) + 0x7f8)
                                                        
                                                        if (eax_43 s>= 1)
                                                            xmm7_1 = *(edx_12 + (eax_43 << 2) - 4)
                                                        else
                                                            xmm7_1 =
                                                                *(edi_13 + (eax_43 << 2) + 0x7fc)
                                                
                                                ebx_4 += int.d(fconvert.t(var_3c_2))
                                                float xmm3_2 = float.s(ecx_20) * 9.53674316e-07f
                                                float xmm4_9 = (xmm6_1 + xmm6_1 - xmm5_1 * 5f
                                                    + xmm7_1 * 4f f- *(edx_12 + (eax_43 << 2)))
                                                    * xmm3_2 * xmm3_2 + (xmm7_1 - xmm6_1) * xmm3_2
                                                    + xmm5_1 + xmm5_1 + (xmm5_1 * 3f - xmm6_1
                                                    - xmm7_1 * 3f f+ *(edx_12 + (eax_43 << 2)))
                                                    * xmm3_2 * xmm3_2 * xmm3_2
                                                *var_28_2 = xmm4_9 * 0.5f
                                                k_2 = k_5
                                                k_5 -= 1
                                                var_28_2 = &var_28_2[1]
                                            while (k_2 != 1)
                                            goto label_75b4f8
                                        
                                        k_10 = k_9
                                    else
                                        void* eax_36 = esi_1[0x6a] + var_1c_1
                                        int32_t ecx_17 = esi_1[0x6b]
                                        
                                        if (k_10 s> 0)
                                            uint32_t k_8 = k_10
                                            uint32_t k_3
                                            
                                            do
                                                int32_t eax_38 = ecx_17 s>> 0x14
                                                float xmm2_1 = *(eax_36 + 0x7fc)
                                                
                                                if (eax_38 != 0)
                                                    xmm2_1 = *(edx_12 + (eax_38 << 2) - 4)
                                                
                                                float xmm1_3 = *(edx_12 + (eax_38 << 2)) - xmm2_1
                                                float xmm0_9 =
                                                    _mm_cvtepi32_ps(zx.o(ecx_17) & 0xfffff)
                                                ecx_17 += int.d(fconvert.t(var_3c_2))
                                                *ebx_2 = xmm1_3 * xmm0_9 * 9.53674316e-07f + xmm2_1
                                                ebx_2 = &ebx_2[1]
                                                k_3 = k_8
                                                k_8 -= 1
                                            while (k_3 != 1)
                                            goto label_75b4f8
                                        
                                        ecx_16 = edx_9
                                    
                                    j_5 = j_7 + 1
                                    eax_31 = var_1c_1 + 0x800
                                    var_2c_1 += arg4
                                    var_20_1 += ecx_16
                                    ebx_2 = var_20_1
                                    j_7 = j_5
                                    var_1c_1 = eax_31
                                while (j_5 u< esi_1[0x12])
                                ebx = int.d(fconvert.t(var_3c_2))
                                ecx = var_c_1
                                edx_3 = arg3
                        
                        ecx += k_10
                        var_c_1 = ecx
                        esi_1[0x6b] += k_10 * ebx
                    
                    edi = var_10
                
                var_50_1:4.d = arg8
                var_50_1.d = arg5
                sub_75c100(esi_1, arg2, edx_3, arg4, var_50_1)
                goto label_75b928
            
            char eax_65 = (esi_1[4]).b
            
            if ((eax_65 & 4) == 0 && (eax_65 & 0xa0) == 0xa0)
                long double x87_r7_2 = fconvert.t(_mm_cvtps_pd(esi_1[0x11] f/ xmm1_1 * 1048576f))
                floor(fconvert.d(x87_r7_2))
                int32_t j_12 = esi_1[0x6d]
                int32_t j_10 = 0
                int32_t j_6 = arg3
                int32_t j_11 = 0
                double var_3c_4 = fconvert.d(x87_r7_2)
                int32_t ecx_25 = int.d(fconvert.t(var_3c_4))
                int32_t var_34_3 = ecx_25
                
                if (j_12 != 0)
                    if (j_12 u<= j_6)
                        j_10 = j_12
                        esi_1[0x6d] = 0
                    else
                        j_10 = j_6
                        esi_1[0x6d] = j_12 - j_6
                    
                    j_11 = j_10
                
                if (ecx_25 != 0)
                    for (; j_10 u< j_6; j_6 = arg3)
                        if (esi_1[0x6c] != 0)
                            esi_1[0x6c] = 0
                        else
                            int32_t ecx_26 = esi_1[0x69]
                            esi_1[0x69] = esi_1[0x6a]
                            esi_1[0x6a] = ecx_26
                            
                            if ((*(*esi_1 + 8))() == 0 || (esi_1[4].b & 1) != 0)
                                var_50_1:4.d = 0x200
                                var_50_1.d = 0x200
                                int32_t var_54_6 = esi_1[0x69]
                                int32_t k_4 = (*(*esi_1 + 4))(var_54_6, 0x20000000200)
                                
                                if (k_4 s< 0x200 && (esi_1[4].b & 1) != 0)
                                    do
                                        var_50_1:4.d = *(var_10 + 0x2c)
                                        var_50_1.d = *(var_10 + 0x20)
                                        var_58.q = *(esi_1 + 0x1b8)
                                        
                                        if ((*(*esi_1 + 0xc))(var_58, var_54_6, var_50_1) != 0)
                                            break
                                        
                                        int32_t edx_16 = *esi_1
                                        esi_1[3] += 1
                                        var_50_1:4.d = 0x200
                                        var_50_1.d = 0x200 - k_4
                                        var_54_6 = esi_1[0x69] + (k_4 << 2)
                                        k_4 += (*(edx_16 + 4))(var_54_6, var_50_1)
                                    while (k_4 s< 0x200)
                                    
                                    j_10 = j_11
                            
                            int32_t edx_17 = esi_1[0x6b]
                            int32_t ecx_31 = 0
                            
                            if (edx_17 u>= 0x20000000)
                                ecx_31 = edx_17 - 0x20000000
                            
                            *(0x1ac + esi_1) = ecx_31
                            ecx_25 = int.d(fconvert.t(var_3c_4))
                        
                        int32_t edi_17 = esi_1[0x6b]
                        uint32_t edx_18 = 0
                        
                        if (edi_17 u< 0x20000000)
                            uint32_t temp0_1 = divu.dp.d(edx_18:(0x20000000 - edi_17), ecx_25)
                            edx_18 = temp0_1 + 1
                            
                            if (((edx_18 * var_34_3 + edi_17) & 0xfff00000) u>= 0x20000000)
                                edx_18 = temp0_1
                        
                        if (edx_18 + j_10 u> arg3)
                            esi_1[0x6c] = edx_18 - arg3 + j_10
                            edx_18 = arg3 - j_10
                        
                        ecx_25 = int.d(fconvert.t(var_3c_4))
                        j_10 += edx_18
                        j_11 = j_10
                        esi_1[0x6b] = edx_18 * ecx_25 + edi_17
                    
                    edi = var_10
                
            label_75b928:
                
                if ((esi_1[4] & 0x101) == 0 && (*(*esi_1 + 8))() != 0)
                    var_50_1:4.d = *(edi + (i_2 << 2) + 0x1bdbc)
                    sub_760f30(edi)
                
                xmm1_1 = arg7
        
        i_1 = i_2 + 1
        i_2 = i_1
    while (i_1 u< *(edi + 0x1cdbc))

return i_1
