// 函数: sub_6472e0
// 地址: 0x6472e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
int32_t eax_2 = data_1724a60
int128_t* ebx = arg6
float* esi = arg3
float* var_d8 = esi

if (1f f> *(ebx + 0xc))
    eax_2 = data_1724a68

float eax_3 = esi[3]
sub_643bc0(eax_3, data_1724a58, 0x40, *(esi + 4), eax_3, eax_2)
int32_t eax_4 = data_1476b44
int32_t edi = 0
int32_t var_b4 = 0
int32_t ecx_2 = 0
data_1476b44 = eax_4 + 0x40
int32_t var_cc = 0

while (true)
    double xmm0_5 = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(ecx_2)) * 0.125f * 3.14159274f)
    int32_t entry_ebx
    _libm_sse2_cos_precise(arg5, arg4, entry_ebx)
    float xmm0_7 = fconvert.s(xmm0_5) * *esi
    double xmm0_12 = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(var_cc + 1)) * 0.125f * 3.14159274f)
    _libm_sse2_cos_precise()
    uint32_t result_1 = 0
    float xmm0_14 = fconvert.s(xmm0_12) * *esi
    _libm_sse2_sin_precise()
    float xmm0_16 = fconvert.s(xmm0_5)
    _libm_sse2_sin_precise()
    float xmm0_18 = fconvert.s(xmm0_12)
    void* esi_2 = eax_4 * 0xc0 + 0xe76b5c + edi * 0xc0
    uint32_t result = result_1
    
    while (true)
        double xmm0_23 = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(result)) * 0.125f * 6.28318548f)
        _libm_sse2_cos_precise()
        float xmm0_25 = fconvert.s(xmm0_23) * *var_d8
        uint32_t result_2 = result_1 + 1
        result_1 = result_2
        double xmm0_26 = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(result_2)) * 0.125f * 6.28318548f)
        _libm_sse2_cos_precise()
        float xmm0_28 = fconvert.s(xmm0_26) * *var_d8
        _libm_sse2_sin_precise()
        float var_f4 = fconvert.s(xmm0_23) * *var_d8
        _libm_sse2_sin_precise()
        float xmm6_3 = xmm0_16 * xmm0_25 + var_d8[1]
        float xmm1_5 = arg2[1]
        float xmm5_3 = xmm0_16 * var_f4 + var_d8[2]
        float xmm3_2 = xmm0_7 + var_d8[3]
        double var_b0_2
        var_b0_2.d = xmm1_5
        float xmm2_2 = fconvert.s(xmm0_26) * *var_d8
        float xmm0_35 = xmm0_16 * xmm0_28 + var_d8[1]
        float xmm0_36 = *arg2
        float xmm2_3 = arg2[2]
        double var_a8_2
        var_a8_2.d = xmm2_3
        float xmm0_38 = arg2[5]
        float xmm2_4 = arg2[6]
        float xmm7_3 = xmm0_16 * xmm2_2 + var_d8[2]
        float xmm4_2 = xmm2_3 * xmm3_2
        float xmm2_5 = xmm2_4 * xmm3_2
        float xmm1_9 = xmm1_5 * xmm5_3 + xmm0_36 * xmm6_3 + xmm4_2 f+ arg2[3]
        float xmm1_10 = arg2[4]
        float xmm0_42 = arg2[8]
        float xmm0_43 = arg2[9]
        float xmm0_44 = arg2[0xa]
        float xmm1_14 = xmm0_38 * xmm5_3 + xmm1_10 * xmm6_3 + xmm2_5 f+ arg2[7]
        float xmm1_16 = xmm0_44 * xmm3_2
        float xmm6_4 = arg2[0xb]
        float xmm3_5 = arg2[9] f* xmm5_3 + arg2[8] f* xmm6_3
        float xmm5_5 = arg2[1] f* xmm7_3
        float var_3c = xmm1_9
        float var_38_1 = xmm1_14
        float xmm3_7 = xmm3_5 + xmm1_16 + xmm6_4
        float var_34_1 = xmm3_7
        float xmm3_9 = arg2[5] f* xmm7_3 + arg2[4] f* xmm0_35
        float xmm5_8 = xmm5_5 + *arg2 * xmm0_35 + xmm4_2 f+ arg2[3]
        float var_e0_2 = xmm3_9
        float xmm3_11 = var_d8[3] + xmm0_14
        float xmm0_57 = xmm3_9 + xmm2_5 f+ arg2[7]
        float var_30_1 = xmm5_8
        float xmm5_10 = arg2[2] f* xmm3_11
        float xmm4_4 = arg2[6] f* xmm3_11
        float var_2c_1 = xmm0_57
        float xmm0_61 = arg2[1]
        float xmm1_19 = xmm0_18 * xmm0_25 + var_d8[1]
        float xmm2_10 = arg2[8] f* xmm0_35 + arg2[9] f* xmm7_3 + xmm1_16 + xmm6_4
        float xmm7_5 = *arg2 * xmm1_19
        float var_28_1 = xmm2_10
        float xmm2_12 = xmm0_18 * var_f4
        var_f4 = xmm3_11
        float xmm2_13 = xmm2_12 + var_d8[2]
        float xmm7_8 = xmm7_5 + xmm0_61 * xmm2_13 + xmm5_10 f+ arg2[3]
        float xmm3_13 = arg2[0xa] f* var_f4
        float xmm5_13 = arg2[4] f* xmm1_19 + arg2[5] f* xmm2_13
        var_f4 = arg2[8] f* xmm1_19
        float xmm5_15 = xmm5_13 + xmm4_4 f+ arg2[7]
        float xmm2_16 = xmm0_18 * xmm2_2 + var_d8[2]
        float var_24_1 = xmm7_8
        float xmm0_70 = *arg2
        float xmm7_9 = arg2[8]
        float var_20_1 = xmm5_15
        float xmm1_23 = var_f4 + arg2[9] f* xmm2_13 + xmm3_13 + xmm6_4
        var_f4 = xmm1_23
        float var_1c_1 = xmm1_23
        float xmm1_26 = xmm0_18 * xmm0_28 + var_d8[1]
        float xmm5_17 = xmm0_70 * xmm1_26 + arg2[1] f* xmm2_16
        float var_e8_3 = xmm5_17
        float xmm0_76 = xmm5_17 + xmm5_10 f+ arg2[3]
        float xmm4_6 = xmm5_15 - xmm0_57
        float xmm1_28 = var_f4 - xmm2_10
        float xmm5_22 = arg2[4] f* xmm1_26 + arg2[5] f* xmm2_16 + xmm4_4 f+ arg2[7]
        float xmm2_18 = xmm7_8 - xmm5_8
        float xmm7_13 = xmm7_9 * xmm1_26 + arg2[9] f* xmm2_16 + xmm3_13 + xmm6_4
        float var_18_1 = xmm0_76
        float var_14_1 = xmm5_22
        float var_10_1 = xmm7_13
        float eax_15
        int64_t xmm0_89
        
        if (var_cc != 0)
            float xmm0_100 = xmm2_10 - xmm3_7
            float xmm6_9 = xmm0_57 - xmm1_14
            float xmm5_27 = xmm5_8 - xmm1_9
            float xmm3_22 = xmm4_6 * xmm0_100 - xmm1_28 * xmm6_9
            float xmm2_22 = xmm2_18 * xmm6_9 - xmm4_6 * xmm5_27
            float xmm1_42 = xmm1_28 * xmm5_27 - xmm2_18 * xmm0_100
            var_f4 = xmm2_22
            float xmm0_109 =
                sub_4ac580(ebp, xmm1_42 * xmm1_42 + xmm3_22 * xmm3_22 + xmm2_22 * xmm2_22)
            
            if (9.99999975e-06f <= xmm0_109)
                float xmm0_110 = 1f / (xmm0_109 + 9.99999975e-06f)
                float xmm1_50 = xmm1_42 * xmm0_110
                float xmm3_24 = xmm3_22 * xmm0_110
                float xmm2_24 = var_f4 * xmm0_110
                var_f4 = xmm2_24
                float xmm1_55 =
                    1f / sub_4ac580(ebp, xmm1_50 * xmm1_50 + xmm3_24 * xmm3_24 + xmm2_24 * xmm2_24)
                float var_54_1 = xmm1_55 * xmm1_50
                xmm0_89 = (xmm1_55 * xmm3_24).q
                eax_15 = xmm1_55 * var_f4
            else
                xmm0_89 = 0
                eax_15 = 0f
                float var_58
                var_58.q = xmm0_89
        else
            float xmm7_14 = xmm7_13 - var_f4
            float xmm5_23 = xmm5_22 - xmm5_15
            float xmm6_6 = xmm0_76 - xmm7_8
            float xmm3_17 = xmm7_14 * xmm4_6 - xmm5_23 * xmm1_28
            float xmm4_9 = xmm6_6 * xmm1_28 - xmm7_14 * xmm2_18
            float xmm5_25 = xmm5_23 * xmm2_18 - xmm6_6 * xmm4_6
            float xmm0_88 = sub_4ac580(ebp, xmm4_9 * xmm4_9 + xmm3_17 * xmm3_17 + xmm5_25 * xmm5_25)
            
            if (9.99999975e-06f <= xmm0_88)
                float xmm3_18 = 1f / (xmm0_88 + 9.99999975e-06f)
                float xmm1_34 = xmm3_18 * xmm4_9
                float xmm2_20 = xmm3_18 * xmm3_17
                float xmm3_19 = xmm3_18 * xmm5_25
                float xmm1_39 =
                    1f / sub_4ac580(ebp, xmm1_34 * xmm1_34 + xmm2_20 * xmm2_20 + xmm3_19 * xmm3_19)
                float var_64_1 = xmm1_39 * xmm1_34
                xmm0_89 = (xmm1_39 * xmm2_20).q
                eax_15 = xmm1_39 * xmm3_19
            else
                xmm0_89 = 0
                eax_15 = 0f
                float var_68
                var_68.q = xmm0_89
        
        float xmm0_120 = xmm0_89.d
        float xmm2_25 = xmm0_89:4.d
        int64_t var_48_1
        var_48_1:4.d = xmm0_38 * xmm2_25 + xmm1_10 * xmm0_120 + xmm2_4 * eax_15
        var_48_1.d = xmm0_36 * xmm0_120 + var_b0_2.d * xmm2_25 + var_a8_2.d * eax_15
        int64_t var_110_1
        
        if (edi s>= 0x40)
            char const* const var_104_1 = "Draw3DSphere"
            int32_t var_108_1 = 0x6ce
            var_110_1:4.d = "C:\x\ax2017\Engine\Draw3d.cpp"
            sub_63b870(eax_15, &data_801800, "quadIndex < totalQuads")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        float* edi_1 = &var_3c
        int32_t i_1 = 4
        int32_t i
        
        do
            int32_t eax_16 = edi_1[2]
            *(esi_2 - 0x18) = *edi_1
            *(esi_2 - 0x10) = eax_16
            *(esi_2 - 0xc) = var_48_1
            *(esi_2 - 4) = xmm0_43 * xmm2_25 + xmm0_42 * xmm0_120 + xmm0_44 * eax_15
            var_110_1.o = *ebx
            int32_t eax_18 = sub_64b360(var_110_1)
            *(esi_2 + 4) = 0
            edi_1 = &edi_1[3]
            *(esi_2 + 8) = 0x3f000000
            ebx = arg6
            *esi_2 = (((((eax_18 u>> 0x18 << 8) + zx.d(eax_18.b)) << 8) + zx.d((eax_18 u>> 8).b))
                << 8) + zx.d((eax_18 u>> 0x10).b)
            *(esi_2 + 0xc) = 0x3f000000
            esi_2 += 0x30
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = result_1
        edi = var_b4 + 1
        var_b4 = edi
        
        if (result s>= 8)
            ecx_2 = var_cc + 1
            var_cc = ecx_2
            
            if (ecx_2 s>= 8)
                CookieCheckFunction(result)
                return result
            
            esi = var_d8
            break
