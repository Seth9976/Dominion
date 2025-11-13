// 函数: sub_753c50
// 地址: 0x753c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float var_7c = arg2
int32_t esi = arg6
float xmm3 = *(arg3 + 0x10)
float var_84 = *(arg3 + 0xc)
void* eax_1 = *(arg3 + 0x24)
float var_78 = xmm3
void* var_9c
char const* const var_98

if (*(arg3 + 0x28) != esi + ((esi + 1) << 1))
    int32_t eax_4 = *(arg3 + 0x2c)
    
    if (eax_4 != 0)
        free(eax_4)
    
    int32_t ecx = data_147ded8
    int32_t eax_7
    
    if (ecx == 0)
        eax_7 = malloc(esi * 0xc + 8)
    else
        var_98 = "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraint.c"
        var_9c = esi * 0xc + 8
        eax_7 =
            ecx(var_9c, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x100)
    
    xmm3 = var_78
    *(arg3 + 0x2c) = eax_7
    *(arg3 + 0x28) = esi + ((esi + 1) << 1)

float ecx_11 = var_7c
void* result = *(arg3 + 0x2c)
int32_t eax_10 = *(ecx_11 i+ 0x38)
void* edi = *(ecx_11 i+ 0x24)
float eax_14 = edi s/ 6
int32_t edx_1 = 0xffffffff
float var_80 = eax_14
int32_t var_64 = 0xffffffff
int32_t entry_ebx
int16_t top

if (*(ecx_11 i+ 0x3c) == 0)
    int32_t eax_16 = neg.d(eax_10)
    void* ecx_1 = *(ecx_11 i+ 0x34)
    int32_t edi_2 = var_80 i- (sbb.d(eax_16, eax_16, eax_10 != 0) + 2)
    float xmm2[0x4] = *(ecx_1 + (edi_2 << 2))
    float xmm2_1[0x4] = _mm_shuffle_ps(xmm2, xmm2, 0)
    float var_44 = xmm2_1
    float xmm4_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0)
    
    if (arg8 != 0)
        float xmm0_2 = xmm2_1[0] * xmm3
        xmm3 = xmm0_2
        var_78 = xmm0_2
    
    if (arg9 != 0)
        int32_t i_1 = 1
        
        if (esi s> 1)
            void* edi_7
            
            if (esi - 1 u< 0x10)
                edi_7 = eax_1
            label_753df2:
                
                if (esi - i_1 s< 4)
                label_753e40:
                    
                    do
                        *(edi_7 + (i_1 << 2)) = xmm2_1[0] f* *(edi_7 + (i_1 << 2))
                        i_1 += 1
                    while (i_1 s< esi)
                else
                    void* eax_25 = edi_7 + ((i_1 + 2) << 2)
                    int32_t i_4 = ((esi - i_1 - 4) u>> 2) + 1
                    i_1 += (((esi - i_1 - 4) u>> 2) + 1) << 2
                    int32_t i
                    
                    do
                        i = i_4
                        i_4 -= 1
                        eax_25 += 0x10
                        *(eax_25 - 0x18) = _mm_mul_ps(*(eax_25 - 0x18), xmm2_1)
                    while (i != 1)
                    
                    if (i_1 s< esi)
                        goto label_753e40
            else
                int32_t edi_4 = (esi - 1) & 0x8000000f
                
                if (edi_4 s< 0)
                    edi_4 = ((edi_4 - 1) | 0xfffffff0) + 1
                
                edi_7 = eax_1
                void* eax_21 = edi_7 + 0x24
                
                do
                    float xmm0_3[0x4] = *(eax_21 - 0x20)
                    eax_21 += 0x40
                    i_1 += 0x10
                    *(eax_21 - 0x60) = _mm_mul_ps(xmm4_2, xmm0_3)
                    *(eax_21 - 0x50) = _mm_mul_ps(xmm4_2, *(eax_21 - 0x50))
                    *(eax_21 - 0x40) = _mm_mul_ps(xmm4_2, *(eax_21 - 0x40))
                    *(eax_21 - 0x30) = _mm_mul_ps(xmm4_2, *(eax_21 - 0x30))
                while (i_1 s< esi - edi_4)
                
                if (i_1 s< esi)
                    goto label_753df2
    
    if (*(arg3 + 0x30) != 8)
        int32_t eax_26 = *(arg3 + 0x34)
        
        if (eax_26 != 0)
            free(eax_26)
        
        int32_t eax_27 = data_147ded8
        int32_t eax_28
        
        if (eax_27 == 0)
            eax_28 = malloc(0x20)
        else
            var_98 = "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraint.c"
            var_9c = 0x20
            eax_28 = eax_27(0x20, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x112)
        
        xmm2_1 = var_44
        edx_1 = 0xffffffff
        xmm3 = var_78
        *(arg3 + 0x34) = eax_28
        *(arg3 + 0x30) = 8
    
    void* edi_8 = *(arg3 + 0x34)
    int32_t ecx_2 = 0
    int32_t esi_1 = 0
    int32_t var_3c = 0
    int32_t var_38_1 = 0
    
    if (arg6 s<= 0)
        return result
    
    void* var_60_1 = result + 8
    
    do
        float xmm0_11 = *(eax_1 + (ecx_2 << 2))
        int32_t ecx_3 = eax_10
        float xmm0_12[0x2] = xmm0_11 + xmm3
        float var_78_1 = xmm0_12
        float xmm7_1 = xmm0_12[0]
        
        if (ecx_3 != 0)
            int64_t var_10_1 = _mm_cvtps_pd(xmm0_12)
            unimplemented  {fld st0, qword [esp+0x80]}
            double var_10_2 = fconvert.d(xmm2_1)
            unimplemented  {fld st0, qword [esp+0x80]}
            _CIfmod()
            float var_70_1 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
            unimplemented  {fstp dword [esp+0x20], st0}
            top -= 1
            xmm7_1 = var_70_1
            
            if (not(0 f<= xmm7_1))
                xmm7_1 = xmm7_1 + var_44
            
            ecx_3 = eax_10
            esi_1 = 0
            goto label_753f3b
        
        void* eax_36
        float var_a4
        void* var_a0
        
        if (not(0 f<= xmm0_12))
            if (edx_1 != 0xfffffffe)
                int32_t var_94_5 = ecx_3
                var_98 = nullptr
                var_9c = edi_8
                var_a0 = 4
                var_a4 = 2.80259693e-45f
                var_64 = 0xfffffffe
                sub_758e30(eax_1, var_84, var_7c, 2, 4, var_9c, 0)
            
            float xmm1_10 = *(edi_8 + 4)
            int64_t var_10_3 = _mm_cvtps_pd(*(edi_8 + 0xc) - xmm1_10)
            unimplemented  {fld st0, qword [esp+0x80]}
            int64_t var_10_4 = _mm_cvtps_pd(*(edi_8 + 8) f- *edi_8)
            unimplemented  {fld st0, qword [esp+0x80]}
            _CIatan2(arg5, arg4, entry_ebx, var_84, edi_2, var_7c, var_78_1)
            float var_34_1 = fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
            unimplemented  {fstp dword [esp+0x5c], st0}
            top -= 1
            double xmm0_22 = _mm_cvtps_pd(var_34_1)
            _libm_sse2_cos_precise()
            double xmm0_24 = _mm_cvtps_pd(var_34_1)
            *(var_60_1 - 8) = fconvert.s(xmm0_22) * var_78_1 f+ *edi_8
            _libm_sse2_sin_precise()
            xmm3 = var_78_1
            eax_36 = var_60_1
            *(eax_36 - 4) = fconvert.s(xmm0_24) * xmm3 + xmm1_10
            *eax_36 = var_34_1
        else if (xmm0_12 f<= xmm2_1)
        label_753f3b:
            float xmm1_9 = *(ecx_1 + (esi_1 << 2))
            
            if (not(xmm7_1 <= xmm1_9))
                do
                    xmm1_9 = *(ecx_1 + (esi_1 << 2) + 4)
                    esi_1 += 1
                while (xmm7_1 > xmm1_9)
            
            if (esi_1 != 0)
                xmm7_1 = xmm7_1 f- *(ecx_1 + (esi_1 << 2) - 4)
                xmm1_9 = xmm1_9 f- *(ecx_1 + (esi_1 << 2) - 4)
            
            if (esi_1 != var_64)
                var_64 = esi_1
                void* eax_34
                
                if (ecx_3 == 0 || esi_1 != edi_2)
                    int32_t var_94_7 = ecx_3
                    var_98 = nullptr
                    var_9c = edi_8
                    var_a0 = 8
                    eax_34 = esi_1 * 6 + 2
                    var_a4 = eax_34
                else
                    int32_t var_94_4 = ecx_3
                    eax_34 = sub_758e30(edi - 4, var_84, var_7c, edi - 4, 4, edi_8, 0)
                    var_98 = 4
                    var_9c = edi_8
                    var_a0 = 4
                    var_a4 = 0f
                
                sub_758e30(eax_34, var_84, var_7c, var_a4, var_a0, var_9c, var_98)
            
            int32_t eax_42
            
            if (arg7 != 0)
                eax_42 = 1
            else if (var_38_1 u<= 0)
                eax_42 = 0
            else
                xmm0_11 - 0f
                void* eax_41
                eax_41:1.b = (xmm0_11 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2 | (xmm0_11 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                eax_42 = not(p_2) ? 1 : 0
            
            var_a4.o = *(edi_8 + 0x10)
            sub_753a20(eax_42, var_3c, result, xmm7_1 / xmm1_9, *edi_8, *(edi_8 + 4), *(edi_8 + 8), 
                *(edi_8 + 0xc), var_a4, var_a0, var_9c, var_98, eax_42)
            top -= 1
            eax_36 = var_60_1
            xmm3 = var_78_1
        else
            if (edx_1 != 0xfffffffd)
                int32_t var_94_6 = ecx_3
                var_98 = nullptr
                var_9c = edi_8
                var_a0 = 4
                var_64 = 0xfffffffd
                sub_758e30(edi - 6, var_84, var_7c, edi - 6, 4, var_9c, 0)
                xmm2_1 = var_44
                xmm0_12 = var_78_1
            
            float xmm0_29 = xmm0_12 f- xmm2_1
            float xmm0_30 = *(edi_8 + 0xc)
            int64_t var_10_5 = _mm_cvtps_pd(xmm0_30 f- *(edi_8 + 4))
            unimplemented  {fld st0, qword [esp+0x80]}
            int64_t var_10_6 = _mm_cvtps_pd(*(edi_8 + 8) f- *edi_8)
            unimplemented  {fld st0, qword [esp+0x80]}
            _CIatan2(arg5, arg4, entry_ebx, var_84, edi_2, var_7c, var_78_1)
            float var_34_2 = fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
            unimplemented  {fstp dword [esp+0x5c], st0}
            top -= 1
            double xmm0_37 = _mm_cvtps_pd(var_34_2)
            _libm_sse2_cos_precise()
            double xmm0_39 = _mm_cvtps_pd(var_34_2)
            *(var_60_1 - 8) = fconvert.s(xmm0_37) * xmm0_29 f+ *(edi_8 + 8)
            _libm_sse2_sin_precise()
            eax_36 = var_60_1
            *(eax_36 - 4) = fconvert.s(xmm0_39) * xmm0_29 + xmm0_30
            *eax_36 = var_34_2
            xmm3 = var_78_1
        var_3c += 3
        ecx_2 = var_38_1 + 1
        xmm2_1 = var_44
        edx_1 = var_64
        var_38_1 = ecx_2
        var_60_1 = eax_36 + 0xc
    while (ecx_2 s< arg6)
    
    return result

int32_t edx_7 = *(arg3 + 0x30)
void* var_5c_1
void* var_3c_1
void* ebx_7

if (eax_10 == 0)
    float eax_49 = eax_14 i- 1
    var_80 = eax_49
    var_5c_1 = edi - 4
    
    if (edx_7 != edi - 4)
        int32_t eax_50 = *(arg3 + 0x34)
        
        if (eax_50 != 0)
            free(eax_50)
        
        int32_t ecx_13 = data_147ded8
        int32_t _Size_1 = (edi - 4) << 2
        
        if (ecx_13 == 0)
            eax_49 = malloc(_Size_1)
        else
            eax_49 = ecx_13(_Size_1, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x15b)
        
        ecx_11 = var_7c
        *(arg3 + 0x34) = eax_49
        *(arg3 + 0x30) = edi - 4
    
    ebx_7 = *(arg3 + 0x34)
    float var_94_14 = ecx_11
    var_3c_1 = ebx_7
    sub_758e30(eax_49, var_84, ecx_11, 2, edi - 4, ebx_7, 0)
else
    var_5c_1 = edi + 2
    
    if (edx_7 != edi + 2)
        int32_t eax_45 = *(arg3 + 0x34)
        
        if (eax_45 != 0)
            free(eax_45)
        
        int32_t ecx_10 = data_147ded8
        int32_t _Size = (edi + 2) << 2
        
        if (ecx_10 == 0)
            eax_14 = malloc(_Size)
        else
            eax_14 = ecx_10(_Size, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x14e)
        
        ecx_11 = var_7c
        *(arg3 + 0x34) = eax_14
        *(arg3 + 0x30) = edi + 2
    
    ebx_7 = *(arg3 + 0x34)
    float var_94_11 = ecx_11
    var_3c_1 = ebx_7
    sub_758e30(sub_758e30(eax_14, var_84, ecx_11, 2, edi - 2, ebx_7, 0), var_84, var_7c, 0, 2, 
        ebx_7, edi - 2)
    esi = arg6
    *(ebx_7 + ((edi + 2) << 2) - 8) = *ebx_7
    *(ebx_7 + ((edi + 2) << 2) - 4) = *(ebx_7 + 4)

void* edi_12 = arg3
float ecx_14 = var_80

if (*(edi_12 + 0x38) != ecx_14)
    int32_t eax_51 = *(edi_12 + 0x3c)
    
    if (eax_51 != 0)
        free(eax_51)
        ecx_14 = var_80
    
    int32_t eax_52 = data_147ded8
    int32_t _Size_2 = ecx_14 << 2
    int32_t eax_53
    
    if (eax_52 == 0)
        eax_53 = malloc(_Size_2)
    else
        eax_53 = eax_52(_Size_2, 
            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x165)
    
    ecx_14 = var_80
    *(edi_12 + 0x3c) = eax_53
    *(edi_12 + 0x38) = ecx_14

float xmm7_3 = *ebx_7
float xmm3_2 = *(ebx_7 + 4)
float xmm2_3[0x4] = zx.o(0)
int32_t eax_54 = *(edi_12 + 0x3c)
float var_34_3 = 0f
float var_24_2 = xmm7_3
float var_60_2 = xmm3_2
float var_28_1 = 0f
float var_2c_1 = 0f
float var_30_1 = 0f
float var_44_1 = 0f
float var_54_1 = 0f
float var_58_1 = 0f
int32_t var_74_1 = 0
float var_70
float var_1c

if (ecx_14 s> 0)
    void* edi_11 = ebx_7 + 0x10
    int32_t eax_56
    
    do
        float xmm4_3 = *(edi_11 - 8)
        float xmm5_1 = *edi_11
        var_44_1 = *(edi_11 + 4)
        float xmm6_1 = *(edi_11 - 4)
        var_54_1 = *(edi_11 + 8)
        var_58_1 = *(edi_11 + 0xc)
        var_30_1 = xmm5_1
        var_28_1 = xmm4_3
        var_2c_1 = xmm6_1
        float xmm3_8 = ((xmm4_3 - xmm5_1) * 3f - xmm7_3 + var_54_1) * 0.09375f
        float xmm1_22 = (xmm7_3 - (xmm4_3 + xmm4_3) + xmm5_1) * 0.1875f
        float xmm2_7 = (xmm3_2 - (xmm6_1 + xmm6_1) + var_44_1) * 0.1875f
        float xmm0_56 = xmm1_22 + xmm1_22 + xmm3_8
        float xmm5_7 = ((xmm6_1 - var_44_1) * 3f - var_60_2 + var_58_1) * 0.09375f
        float xmm0_59 = xmm2_7 + xmm2_7 + xmm5_7
        float xmm4_7 = (xmm4_3 - xmm7_3) * 0.75f + xmm1_22 + xmm3_8 * 0.166666672f
        float xmm3_13 = (xmm6_1 - var_60_2) * 0.75f + xmm2_7 + xmm5_7 * 0.166666672f
        double xmm0_66 = _mm_cvtps_pd(xmm3_13 * xmm3_13 + xmm4_7 * xmm4_7)
        
        if (0 f> xmm0_66)
            _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
        else
            xmm0_66 = _mm_sqrt_sd(xmm0_66, xmm0_66)
        
        float xmm2_9 = xmm4_7 + xmm0_56
        float xmm3_15 = xmm0_56 + xmm3_8
        float xmm0_70 = xmm3_13 + xmm0_59
        var_70 = xmm0_59 + xmm5_7
        double xmm0_73 = _mm_cvtps_pd(xmm0_70 * xmm0_70 + xmm2_9 * xmm2_9)
        
        if (0 f> xmm0_73)
            _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
        else
            xmm0_73 = _mm_sqrt_sd(xmm0_73, xmm0_73)
        
        float xmm2_11 = xmm2_9 + xmm3_15
        float xmm0_77 = xmm0_70 + var_70
        double xmm0_80 = _mm_cvtps_pd(xmm0_77 * xmm0_77 + xmm2_11 * xmm2_11)
        
        if (0 f> xmm0_80)
            _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
        else
            xmm0_80 = _mm_sqrt_sd(xmm0_80, xmm0_80)
        
        float xmm1_36 = var_70 + xmm5_7 + xmm0_77
        float xmm3_18 = xmm3_15 + xmm3_8 + xmm2_11
        var_1c = fconvert.s(xmm0_80) + fconvert.s(xmm0_73) + fconvert.s(xmm0_66) + var_34_3
        double xmm0_83 = _mm_cvtps_pd(xmm1_36 * xmm1_36 + xmm3_18 * xmm3_18)
        
        if (0 f> xmm0_83)
            _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
        else
            xmm0_83 = _mm_sqrt_sd(xmm0_83, xmm0_83)
        
        xmm3_2 = var_58_1
        edi_11 += 0x18
        xmm7_3 = var_54_1
        var_60_2 = xmm3_2
        xmm2_3 = fconvert.s(xmm0_83) + var_1c
        *(eax_54 + (var_74_1 << 2)) = xmm2_3
        eax_56 = var_74_1 + 1
        var_34_3 = xmm2_3
        var_74_1 = eax_56
    while (eax_56 s< var_80)
    ebx_7 = var_3c_1
    esi = arg6
    edi_12 = arg3
    ecx_14 = var_80
    var_24_2 = xmm7_3

float xmm2_13[0x4] = _mm_shuffle_ps(xmm2_3, xmm2_3, 0)
float xmm3_20 = xmm2_13[0]
float xmm4_9[0x4] = _mm_shuffle_ps(xmm2_13, xmm2_13, 0)

if (arg8 == 0)
    xmm3_20 = xmm3_20 f/ *(*(var_7c i+ 0x34) + (ecx_14 << 2) - 4)

float xmm3_21 = xmm3_20 * var_78
int32_t ecx_15

if (arg9 != 0)
    ecx_15 = 1

float var_74_2
void* var_48_3
int32_t var_3c_2
int32_t var_38_2
int32_t ecx_16
void* edx_15
int32_t esi_4
int32_t edi_14

if (arg9 == 0 || esi s<= 1)
    edx_15 = eax_1
label_75482d:
    var_74_2 = 0f
    ecx_16 = 0
    var_48_3 = edi_12 + 0x48
    esi_4 = 0
    var_38_2 = 0
    edi_14 = 0
    var_3c_2 = 0
    
    if (arg6 s> 0)
        goto label_754859
else
    if (esi - 1 u< 0x10)
        edx_15 = eax_1
    else
        int32_t edx_12 = (esi - 1) & 0x8000000f
        
        if (edx_12 s< 0)
            edx_12 = ((edx_12 - 1) | 0xfffffff0) + 1
        
        edx_15 = eax_1
        var_1c = esi - edx_12
        void* eax_61 = edx_15 + 0x24
        
        do
            float xmm0_84[0x4] = *(eax_61 - 0x20)
            eax_61 += 0x40
            ecx_15 += 0x10
            *(eax_61 - 0x60) = _mm_mul_ps(xmm4_9, xmm0_84)
            *(eax_61 - 0x50) = _mm_mul_ps(*(eax_61 - 0x50), xmm4_9)
            *(eax_61 - 0x40) = _mm_mul_ps(xmm4_9, *(eax_61 - 0x40))
            *(eax_61 - 0x30) = _mm_mul_ps(*(eax_61 - 0x30), xmm4_9)
        while (ecx_15 s< var_1c)
        
        if (ecx_15 s>= esi)
            goto label_75482d
    
    if (esi - ecx_15 s>= 4)
        void* eax_65 = edx_15 + ((ecx_15 + 2) << 2)
        int32_t i_3 = ((esi - ecx_15 - 4) u>> 2) + 1
        ecx_15 += (((esi - ecx_15 - 4) u>> 2) + 1) << 2
        ebx_7 = var_3c_1
        int32_t i_2
        
        do
            i_2 = i_3
            i_3 -= 1
            eax_65 += 0x10
            *(eax_65 - 0x18) = _mm_mul_ps(*(eax_65 - 0x18), xmm2_13)
        while (i_2 != 1)
        
        if (ecx_15 s>= esi)
            goto label_75482d
    
    do
        *(edx_15 + (ecx_15 << 2)) = xmm2_13[0] f* *(edx_15 + (ecx_15 << 2))
        ecx_15 += 1
    while (ecx_15 s< esi)
    
    var_38_2 = 0
    var_48_3 = edi_12 + 0x48
    esi_4 = 0
    edi_14 = 0
    ecx_16 = 0
    var_74_2 = 0f
    var_3c_2 = 0
label_754859:
    void* var_50_4 = result + 8
    
    do
        float xmm0_94 = *(edx_15 + (ecx_16 << 2))
        int64_t var_10
        var_10.d = xmm0_94
        float xmm0_95[0x2] = xmm0_94 + xmm3_21
        float var_40_2 = xmm0_95
        float xmm1_43 = xmm0_95[0]
        double var_18
        
        if (eax_10 != 0)
            int64_t var_18_1 = _mm_cvtps_pd(xmm0_95)
            unimplemented  {fld st0, qword [esp+0x78]}
            var_18 = fconvert.d(xmm2_13)
            unimplemented  {fld st0, qword [esp+0x78]}
            _CIfmod(arg5, arg4, entry_ebx, var_84, var_80, var_7c, var_78, var_74_2, var_70, eax_1, 
                result, var_64, var_60_2, var_5c_1, var_58_1, var_54_1, var_50_4, eax_10, var_48_3, 
                var_44_1, var_40_2, var_3c_2, var_38_2, var_34_3, var_30_1, var_2c_1, var_28_1, 
                var_24_2, eax_54, var_1c, var_18, var_10)
            var_70 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
            unimplemented  {fstp dword [esp+0x20], st0}
            top -= 1
            xmm1_43 = var_70
            
            if (not(0 f<= xmm1_43))
                xmm1_43 = xmm1_43 + var_34_3
            
            esi_4 = 0
            goto label_7548c7
        
        void* eax_72
        
        if (not(0 f<= xmm0_95))
            float xmm1_51 = *(ebx_7 + 4)
            var_1c = xmm1_51
            int64_t var_10_7 = _mm_cvtps_pd(*(ebx_7 + 0xc) - xmm1_51)
            unimplemented  {fld st0, qword [esp+0x80]}
            int64_t xmm0_122 = _mm_cvtps_pd(*(ebx_7 + 8) f- *ebx_7)
            unimplemented  {fld st0, qword [esp+0x80]}
            _CIatan2(arg5, arg4, entry_ebx, var_84, var_80, var_7c, var_78, var_74_2, var_70, 
                eax_1, result, var_64, var_60_2, var_5c_1, var_58_1, var_54_1, var_50_4, eax_10, 
                var_48_3, var_44_1, var_40_2, var_3c_2, var_38_2, var_34_3, var_30_1, var_2c_1, 
                var_28_1, var_24_2, eax_54, var_1c, var_18, xmm0_122)
            var_70 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
            unimplemented  {fstp dword [esp+0x20], st0}
            top -= 1
            double xmm0_124 = _mm_cvtps_pd(var_70)
            _libm_sse2_cos_precise()
            double xmm0_126 = _mm_cvtps_pd(var_70)
            *(var_50_4 - 8) = fconvert.s(xmm0_124) * var_40_2 f+ *ebx_7
            _libm_sse2_sin_precise()
            xmm3_21 = var_40_2
            eax_72 = var_50_4
            *(eax_72 - 4) = fconvert.s(xmm0_126) * xmm3_21 + var_1c
            *eax_72 = var_70
        else if (xmm0_95 f<= xmm2_13)
        label_7548c7:
            float xmm2_14 = *(eax_54 + (esi_4 << 2))
            
            if (not(xmm1_43 <= xmm2_14))
                do
                    xmm2_14 = *(eax_54 + (esi_4 << 2) + 4)
                    esi_4 += 1
                while (xmm1_43 > xmm2_14)
            
            if (esi_4 != 0)
                xmm1_43 = xmm1_43 f- *(eax_54 + (esi_4 << 2) - 4)
                xmm2_14 = xmm2_14 f- *(eax_54 + (esi_4 << 2) - 4)
            
            float xmm1_101 = xmm1_43 / xmm2_14
            var_1c = xmm1_101
            float xmm0_205
            
            if (esi_4 == var_64)
                xmm0_205 = var_74_2
            else
                var_64 = esi_4
                int32_t eax_70 = esi_4 * 6
                float xmm4_10 = *(ebx_7 + (eax_70 << 2) + 8)
                float xmm7_4 = *(ebx_7 + (eax_70 << 2))
                float xmm6_2 = *(ebx_7 + (eax_70 << 2) + 0xc)
                var_54_1 = *(ebx_7 + (eax_70 << 2) + 0x18)
                float xmm2_15 = *(ebx_7 + (eax_70 << 2) + 4)
                var_58_1 = *(ebx_7 + (eax_70 << 2) + 0x1c)
                float xmm3_22 = *(ebx_7 + (eax_70 << 2) + 0x14)
                float xmm5_8 = *(ebx_7 + (eax_70 << 2) + 0x10)
                var_60_2 = xmm2_15
                var_44_1 = xmm3_22
                var_30_1 = xmm5_8
                var_28_1 = xmm4_10
                var_24_2 = xmm7_4
                var_2c_1 = xmm6_2
                float xmm1_47 = (xmm7_4 - (xmm4_10 + xmm4_10) + xmm5_8) * 0.0299999993f
                float xmm2_18 = (xmm2_15 - (xmm6_2 + xmm6_2) + xmm3_22) * 0.0299999993f
                float xmm3_28 = ((xmm4_10 - xmm5_8) * 3f - xmm7_4 + var_54_1) * 0.00600000005f
                float xmm5_14 = ((xmm6_2 - var_44_1) * 3f - var_60_2 + var_58_1) * 0.00600000005f
                float xmm0_106 = xmm1_47 + xmm1_47 + xmm3_28
                var_70 = xmm5_14
                float xmm0_109 = xmm2_18 + xmm2_18 + xmm5_14
                float xmm4_14 = (xmm4_10 - xmm7_4) * 0.300000012f + xmm1_47 + xmm3_28 * 0.166666672f
                float xmm3_33 =
                    (xmm6_2 - var_60_2) * 0.300000012f + xmm2_18 + xmm5_14 * 0.166666672f
                double xmm0_116 = _mm_cvtps_pd(xmm3_33 * xmm3_33 + xmm4_14 * xmm4_14)
                
                if (0 f> xmm0_116)
                    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
                else
                    xmm0_116 = _mm_sqrt_sd(xmm0_116, xmm0_116)
                
                int32_t* edi_16 = var_48_3
                float xmm0_146 = fconvert.s(xmm0_116)
                float xmm2_20 = xmm4_14 + xmm0_106
                var_18.d = xmm0_146
                *edi_16 = xmm0_146
                float xmm0_148 = xmm3_33 + xmm0_109
                float xmm1_59 = xmm0_109 + var_70
                float xmm3_35 = xmm0_106 + xmm3_28
                double xmm0_151 = _mm_cvtps_pd(xmm0_148 * xmm0_148 + xmm2_20 * xmm2_20)
                
                if (0 f> xmm0_151)
                    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
                else
                    xmm0_151 = _mm_sqrt_sd(xmm0_151, xmm0_151)
                
                float xmm2_22 = xmm2_20 + xmm3_35
                float xmm0_153 = fconvert.s(xmm0_151) f+ var_18.d
                float xmm3_37 = xmm3_35 + xmm3_28
                var_18.d = xmm0_153
                edi_16[1] = xmm0_153
                float xmm0_155 = xmm0_148 + xmm1_59
                float xmm1_64 = xmm1_59 + var_70
                double xmm0_158 = _mm_cvtps_pd(xmm0_155 * xmm0_155 + xmm2_22 * xmm2_22)
                
                if (0 f> xmm0_158)
                    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
                else
                    xmm0_158 = _mm_sqrt_sd(xmm0_158, xmm0_158)
                
                float xmm2_24 = xmm2_22 + xmm3_37
                float xmm0_160 = fconvert.s(xmm0_158) f+ var_18.d
                float xmm3_39 = xmm3_37 + xmm3_28
                var_18.d = xmm0_160
                edi_16[2] = xmm0_160
                float xmm0_162 = xmm0_155 + xmm1_64
                float xmm1_69 = xmm1_64 + var_70
                double xmm0_165 = _mm_cvtps_pd(xmm0_162 * xmm0_162 + xmm2_24 * xmm2_24)
                
                if (0 f> xmm0_165)
                    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
                else
                    xmm0_165 = _mm_sqrt_sd(xmm0_165, xmm0_165)
                
                float xmm2_26 = xmm2_24 + xmm3_39
                float xmm0_167 = fconvert.s(xmm0_165) f+ var_18.d
                float xmm3_41 = xmm3_39 + xmm3_28
                var_18.d = xmm0_167
                edi_16[3] = xmm0_167
                float xmm0_169 = xmm0_162 + xmm1_69
                float xmm1_74 = xmm1_69 + var_70
                double xmm0_172 = _mm_cvtps_pd(xmm0_169 * xmm0_169 + xmm2_26 * xmm2_26)
                
                if (0 f> xmm0_172)
                    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
                else
                    xmm0_172 = _mm_sqrt_sd(xmm0_172, xmm0_172)
                
                float xmm2_28 = xmm2_26 + xmm3_41
                float xmm0_174 = fconvert.s(xmm0_172) f+ var_18.d
                float xmm3_43 = xmm3_41 + xmm3_28
                var_18.d = xmm0_174
                edi_16[4] = xmm0_174
                float xmm0_176 = xmm0_169 + xmm1_74
                float xmm1_79 = xmm1_74 + var_70
                double xmm0_179 = _mm_cvtps_pd(xmm0_176 * xmm0_176 + xmm2_28 * xmm2_28)
                
                if (0 f> xmm0_179)
                    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
                else
                    xmm0_179 = _mm_sqrt_sd(xmm0_179, xmm0_179)
                
                float xmm2_30 = xmm2_28 + xmm3_43
                float xmm0_181 = fconvert.s(xmm0_179) f+ var_18.d
                float xmm3_45 = xmm3_43 + xmm3_28
                var_18.d = xmm0_181
                edi_16[5] = xmm0_181
                float xmm0_183 = xmm0_176 + xmm1_79
                float xmm1_84 = xmm1_79 + var_70
                double xmm0_186 = _mm_cvtps_pd(xmm0_183 * xmm0_183 + xmm2_30 * xmm2_30)
                
                if (0 f> xmm0_186)
                    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
                else
                    xmm0_186 = _mm_sqrt_sd(xmm0_186, xmm0_186)
                
                float xmm2_32 = xmm2_30 + xmm3_45
                float xmm0_188 = fconvert.s(xmm0_186) f+ var_18.d
                var_18.d = xmm0_188
                edi_16[6] = xmm0_188
                float xmm0_190 = xmm0_183 + xmm1_84
                var_7c = xmm3_45 + xmm3_28
                var_78 = xmm1_84 + var_70
                double xmm0_193 = _mm_cvtps_pd(xmm0_190 * xmm0_190 + xmm2_32 * xmm2_32)
                
                if (0 f> xmm0_193)
                    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
                else
                    xmm0_193 = _mm_sqrt_sd(xmm0_193, xmm0_193)
                
                float xmm2_34 = xmm2_32 + var_7c
                var_84 = xmm2_34
                float xmm0_195 = fconvert.s(xmm0_193) f+ var_18.d
                var_18.d = xmm0_195
                edi_16[7] = xmm0_195
                float xmm0_197 = xmm0_190 + var_78
                var_80 = xmm0_197
                double xmm0_200 = _mm_cvtps_pd(xmm0_197 * xmm0_197 + xmm2_34 * xmm2_34)
                
                if (0 f> xmm0_200)
                    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
                else
                    xmm0_200 = _mm_sqrt_sd(xmm0_200, xmm0_200)
                
                float xmm1_98 = var_78 + var_70 + var_80
                float xmm3_50 = var_7c + xmm3_28 + var_84
                float xmm0_202 = fconvert.s(xmm0_200) f+ var_18.d
                var_18.d = xmm0_202
                edi_16[8] = xmm0_202
                double xmm0_203 = _mm_cvtps_pd(xmm1_98 * xmm1_98 + xmm3_50 * xmm3_50)
                
                if (0 f> xmm0_203)
                    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
                else
                    xmm0_203 = _mm_sqrt_sd(xmm0_203, xmm0_203)
                
                xmm1_101 = var_1c
                xmm0_205 = fconvert.s(xmm0_203) f+ var_18.d
                edi_16[9] = xmm0_205
                edi_14 = 0
                var_74_2 = xmm0_205
            
            void* eax_76 = var_48_3
            float xmm4_16 = xmm0_205 * xmm1_101
            float xmm1_102 = *(eax_76 + (edi_14 << 2))
            
            if (not(xmm4_16 <= xmm1_102))
                do
                    xmm1_102 = *(eax_76 + (edi_14 << 2) + 4)
                    edi_14 += 1
                while (xmm4_16 > xmm1_102)
                
                eax_76 = var_48_3
            
            float xmm4_17
            
            if (edi_14 != 0)
                xmm4_17 = (xmm4_16 f- *(eax_76 + (edi_14 << 2) - 4))
                    / (xmm1_102 f- *(eax_76 + (edi_14 << 2) - 4)) + _mm_cvtepi32_ps(zx.o(edi_14))
            else
                xmm4_17 = xmm4_16 / xmm1_102
            
            int32_t eax_77
            
            if (arg7 != 0)
                eax_77 = 1
            else if (var_3c_2 s<= 0)
                eax_77 = 0
            else
                float xmm0_208 = var_10.d
                xmm0_208 - 0f
                eax_76:1.b = (xmm0_208 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_208, 0f) ? 1 : 0) << 2 | (xmm0_208 < 0f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                eax_77 = not(p_4) ? 1 : 0
            
            sub_753a20(eax_77, var_38_2, result, xmm4_17 * 0.100000001f, var_24_2, var_60_2, 
                var_28_1, var_2c_1, var_30_1, var_44_1, var_54_1, var_58_1, eax_77)
            top -= 1
            eax_72 = var_50_4
            xmm3_21 = var_40_2
        else
            var_78 = xmm0_95 f- xmm2_13
            float xmm0_132 = *(ebx_7 + (var_5c_1 << 2) - 4)
            var_1c = xmm0_132
            int64_t var_10_8 = _mm_cvtps_pd(xmm0_132 f- *(ebx_7 + (var_5c_1 << 2) - 0xc))
            unimplemented  {fld st0, qword [esp+0x80]}
            int64_t xmm0_137 =
                _mm_cvtps_pd(*(ebx_7 + (var_5c_1 << 2) - 8) f- *(ebx_7 + (var_5c_1 << 2) - 0x10))
            unimplemented  {fld st0, qword [esp+0x80]}
            _CIatan2(arg5, arg4, entry_ebx, var_84, var_80, var_7c, var_78, var_74_2, var_70, 
                eax_1, result, var_64, var_60_2, var_5c_1, var_58_1, var_54_1, var_50_4, eax_10, 
                var_48_3, var_44_1, var_40_2, var_3c_2, var_38_2, var_34_3, var_30_1, var_2c_1, 
                var_28_1, var_24_2, eax_54, var_1c, var_18, xmm0_137)
            var_70 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
            unimplemented  {fstp dword [esp+0x20], st0}
            top -= 1
            double xmm0_139 = _mm_cvtps_pd(var_70)
            _libm_sse2_cos_precise()
            double xmm0_141 = _mm_cvtps_pd(var_70)
            *(var_50_4 - 8) = fconvert.s(xmm0_139) * var_78 f+ *(ebx_7 + (var_5c_1 << 2) - 8)
            _libm_sse2_sin_precise()
            eax_72 = var_50_4
            *(eax_72 - 4) = fconvert.s(xmm0_141) * var_78 + var_1c
            *eax_72 = var_70
            xmm3_21 = var_40_2
        
        var_38_2 += 3
        ecx_16 = var_3c_2 + 1
        xmm2_13 = var_34_3
        edx_15 = eax_1
        var_3c_2 = ecx_16
        var_50_4 = eax_72 + 0xc
    while (ecx_16 s< arg6)
return result
