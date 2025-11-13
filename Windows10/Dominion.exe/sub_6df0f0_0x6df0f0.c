// 函数: sub_6df0f0
// 地址: 0x6df0f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
int128_t* result = *arg3 * 0xd8
int32_t* esi = arg6
int32_t* var_104 = esi
int32_t* ecx_3 = (*(result + arg5 + 0x6c) << 6) + arg7
float xmm0 = ecx_3[0xe]
float xmm0_1 = ecx_3[0xb]
float xmm0_2 = ecx_3[5]
float xmm2 = ecx_3[1]
float xmm6 = ecx_3[6]
float xmm2_1 = xmm2 f* ecx_3[7]
float xmm3_1 = ecx_3[2] f* ecx_3[7]
float xmm4_1 = ecx_3[5] f* ecx_3[2]
float xmm5_1 = xmm0_2 f* ecx_3[3]
float xmm7_1 = xmm2 * xmm6
float xmm1_5 = xmm0_2 f* ecx_3[0xa] f* ecx_3[0xf] - xmm0_2 * xmm0_1 * xmm0
    + ecx_3[6] f* ecx_3[0xb] f* ecx_3[0xd] - ecx_3[9] f* ecx_3[6] f* ecx_3[0xf]
float xmm6_1 = xmm6 f* ecx_3[3]
float xmm0_17 = ecx_3[1]
float xmm1_14 = xmm0_17 f* ecx_3[0xa] f* ecx_3[0xf] - xmm0_17 * xmm0_1 * xmm0
    + ecx_3[2] f* ecx_3[0xb] f* ecx_3[0xd] - ecx_3[9] f* ecx_3[2] f* ecx_3[0xf]
float xmm7_2 = ecx_3[0xa]
float xmm2_2 = ecx_3[9]

if (not(9.99999975e-06f f> __andps_xmmxud_memxud(
        (xmm1_5 + ecx_3[9] f* ecx_3[7] f* ecx_3[0xe] - ecx_3[0xa] f* ecx_3[7] f* ecx_3[0xd]) f*
            *ecx_3
            - (xmm1_14 + ecx_3[9] f* ecx_3[3] f* ecx_3[0xe] - ecx_3[0xa] f* ecx_3[3] f* ecx_3[0xd])
            f* ecx_3[4] + (ecx_3[0xf] f* xmm7_1 - ecx_3[0xe] f* xmm2_1 + ecx_3[0xd] f* xmm3_1
            - ecx_3[0xf] f* xmm4_1 + ecx_3[0xe] f* xmm5_1 - ecx_3[0xd] f* xmm6_1) f* ecx_3[8] - (
            ecx_3[0xb] f* xmm7_1 - xmm7_2 * xmm2_1 + xmm2_2 * xmm3_1 - ecx_3[0xb] f* xmm4_1
            + xmm7_2 * xmm5_1 - xmm2_2 * xmm6_1) f* ecx_3[0xc] - 0f, 
        data_8937a0.o)))
    float var_70[0xc]
    float* eax_4 = sub_6e0f70(&var_70, arg2, ecx_3, &var_70)
    int32_t edx = arg4
    int32_t var_164_1 = 0
    float xmm5_2[0x4] = *eax_4
    int32_t ecx_4 = edx - 1
    float xmm6_2[0x4] = *(eax_4 + 0x10)
    int32_t var_174_1 = ecx_4
    float xmm7_4[0x4] = *(eax_4 + 0x20)
    int128_t var_40_1 = *(eax_4 + 0x30)
    float xmm1_34 = arg2[5]
    float xmm3_2 = arg2[4]
    float xmm2_4 = arg2[6]
    float xmm7_6 = _mm_shuffle_ps(xmm5_2, xmm5_2, 0x55)
    int32_t* eax_6 = arg3
    float var_d0_1 = xmm5_2[0]
    float xmm7_8 = _mm_shuffle_ps(xmm5_2, xmm5_2, 0xaa)
    float var_a0_1 = xmm6_2[0]
    float xmm7_10 = _mm_shuffle_ps(xmm6_2, xmm6_2, 0x55)
    float xmm4_6 =
        xmm3_2 f* xmm5_2 + xmm1_34 * xmm7_6 + xmm2_4 * xmm7_8 + _mm_shuffle_ps(xmm5_2, xmm5_2, 0xff)
    float var_148_1 = xmm4_6
    float xmm7_12 = _mm_shuffle_ps(xmm6_2, xmm6_2, 0xaa)
    float xmm5_7 = xmm3_2 f* xmm6_2 + xmm1_34 * xmm7_10 + xmm2_4 * xmm7_12
        + _mm_shuffle_ps(xmm6_2, xmm6_2, 0xff)
    float xmm0_70 = _mm_shuffle_ps(xmm7_4, xmm7_4, 0x55)
    float var_144_1 = xmm5_7
    float xmm0_72[0x4] = _mm_shuffle_ps(xmm7_4, xmm7_4, 0xaa)
    float var_100[0x4] = xmm0_72
    int128_t xmm3_6 = xmm3_2 f* xmm7_4 + xmm1_34 * xmm0_70 + xmm2_4 f* xmm0_72
        + _mm_shuffle_ps(xmm7_4, xmm7_4, 0xff)
    int32_t var_14c_1 = xmm3_6
    int128_t var_30
    int64_t var_20
    
    while (true)
        float xmm1_36 = xmm4_6
        int128_t xmm6_3 = xmm3_6
        float var_1b0_1 = xmm1_36
        int32_t edi_1 = 0
        float var_1a0_1 = xmm5_7
        var_30 = xmm6_3
        
        if (ecx_4 s> 0)
            do
                if (edi_1 != 0)
                    int32_t eax_7 = eax_6[edi_1 - 1]
                    esi = var_104
                    
                    if (eax_7 != *(eax_6[edi_1] * 0xd8 + arg5 + 0x6c))
                        sub_63b870(eax_7, &data_801800, 
                            "i == 0 || boneIndicies[i-1] == defBones[boneIndicies[i]].parentBoneIndex", 
                            "C:\x\ax2017\Engine\Animation.cpp", 0x514, 0x881a7c)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    eax_6 = arg3
                    ecx_4 = var_174_1
                
                int128_t* eax_8 = eax_6[edi_1] * 0x2c
                int128_t xmm4_7 = *(eax_8 + esi)
                float xmm6_4 = xmm6_3 f- *(eax_8 + esi + 0x18)
                float xmm1_37 = xmm1_36 f- *(eax_8 + esi + 0x10)
                int128_t xmm4_8 = xmm4_7 ^ 0x80000000
                float xmm7_15 = xmm4_7:4.d ^ 0x80000000
                float xmm3_8 = xmm4_7:8.d ^ 0x80000000
                float xmm2_7 = xmm4_8.d f* xmm4_8
                float xmm0_75 = xmm4_7:0xc.d
                float xmm2_9 = xmm7_15 * xmm7_15
                float xmm2_11 = xmm3_8 * xmm3_8
                float xmm1_39 = xmm0_75 * xmm0_75
                float xmm2_13 = xmm3_8 * xmm0_75
                float xmm6_6 = xmm7_15 f* xmm4_8
                var_30 = xmm4_8
                int128_t var_140_1
                var_140_1:8.d = xmm3_8
                float xmm3_9 = xmm3_8 f* xmm4_8
                float xmm4_10 = xmm7_15 * xmm0_75
                float xmm0_77 = xmm6_4 + xmm6_4
                float xmm5_8 = xmm5_7 f- *(eax_8 + esi + 0x14)
                var_140_1:4.d = xmm7_15
                float xmm3_11 = xmm1_39 - xmm2_7
                float xmm0_79 = xmm1_37 + xmm1_37
                float xmm5_9 = xmm5_8 + xmm5_8
                float xmm0_81 = xmm3_8 * xmm7_15
                var_30 = var_30.d f* var_140_1:0xc.d
                var_1b0_1 = (xmm2_7 + xmm1_39 - xmm2_9 - xmm2_11) * xmm1_37
                    + (xmm6_6 - xmm2_13) * xmm5_9 + (xmm3_9 + xmm4_10) * xmm0_77
                float xmm6_9 = var_30.d
                edi_1 += 1
                eax_6 = arg3
                float xmm7_21 = (xmm2_9 + xmm3_11 - xmm2_11) * xmm5_8 + (xmm6_6 + xmm2_13) * xmm0_79
                    + (xmm0_81 - xmm6_9) * xmm0_77
                xmm1_36 = var_1b0_1
                var_1a0_1 = xmm7_21
                xmm5_7 = xmm7_21
                xmm6_3 = (xmm6_9 + xmm0_81) * xmm5_9 + (xmm3_9 - xmm4_10) * xmm0_79
                    + (xmm3_11 - xmm2_9 + xmm2_11) * xmm6_4
                var_30 = xmm6_3
            while (edi_1 s< ecx_4)
            
            edx = arg4
        
        int32_t ecx_6 = eax_6[edx - 2]
        float eax_10 = esi[*(&eax_6[edx] - 4) * 0xb + 6]
        var_20 = *(eax_6[edx - 1] * 0x2c + esi + 0x10)
        float var_19c_1 = eax_10
        float var_180_1 = var_20:4.d
        float var_1ac_4 = var_20.d
        float xmm0_122
        float xmm0_135
        int128_t xmm3_35
        
        while (true)
            float xmm6_13 = xmm6_3 f* esi[ecx_6 * 0xb + 9]
            float xmm7_22 = esi[ecx_6 * 0xb + 2]
            float xmm5_10 = xmm5_7 f* esi[ecx_6 * 0xb + 8]
            float xmm2_14 = esi[ecx_6 * 0xb + 7]
            float xmm3_15 = esi[ecx_6 * 0xb + 3]
            float xmm6_14 = esi[ecx_6 * 0xb + 1]
            float xmm1_45 = xmm1_36 * xmm2_14
            float xmm0_106 = xmm6_14 * xmm6_14
            float xmm5_11 = esi[ecx_6 * 0xb]
            float xmm1_47 = xmm5_11 * xmm5_11
            float xmm0_108 = xmm7_22 * xmm7_22
            float xmm4_12 = xmm3_15 * xmm3_15
            float xmm0_110 = xmm7_22 * xmm3_15
            float xmm2_16 = xmm6_14 * xmm5_11
            float xmm0_112 = xmm4_12 - xmm1_47
            float xmm6_16 = esi[ecx_6 * 0xb + 2] f* xmm5_11
            float xmm5_13 = esi[ecx_6 * 0xb + 2] f* esi[ecx_6 * 0xb + 1]
            float xmm0_113 = esi[ecx_6 * 0xb + 4]
            float xmm7_24 = xmm6_14 * xmm3_15
            float xmm5_16 = (xmm5_10 + xmm5_10) * (xmm2_16 - xmm0_110)
            float xmm3_17 = esi[ecx_6 * 0xb] f* esi[ecx_6 * 0xb + 3]
            float var_194_3 = xmm5_16
            xmm0_122 = xmm5_16 + (xmm1_47 + xmm4_12 - xmm0_106 - xmm0_108) * xmm1_45
                + (xmm6_13 + xmm6_13) * (xmm6_16 + xmm7_24) + xmm0_113
            xmm0_135 = (xmm0_110 + xmm2_16) * (xmm1_45 + xmm1_45)
                + (xmm0_112 + xmm0_106 - xmm0_108) * xmm5_10
                + (xmm5_13 - xmm3_17) * (xmm6_13 + xmm6_13) f+ esi[ecx_6 * 0xb + 5]
            float xmm3_19 = var_180_1
            float xmm2_21 = var_19c_1
            float xmm1_66 = (xmm1_45 + xmm1_45) * (xmm6_16 - xmm7_24)
                + (xmm5_10 + xmm5_10) * (xmm3_17 + xmm5_13)
                + (xmm0_112 - xmm0_106 + xmm0_108) * xmm6_13 f+ esi[ecx_6 * 0xb + 6]
            float xmm5_20 = xmm3_19 * xmm3_19 + var_1ac_4 * var_1ac_4 + xmm2_21 * xmm2_21
            
            if (not(xmm5_20 <= 9.99999975e-06f))
                int32_t xmm0_143 = var_30.d
                float xmm4_17 = var_1a0_1 * var_1a0_1 + var_1b0_1 * var_1b0_1 + xmm0_143 f* xmm0_143
                
                if (not(xmm4_17 <= 9.99999975e-06f))
                    float xmm2_22 = 1f / sub_4ac580(ebp, xmm5_20)
                    float xmm5_21 = 1f / sub_4ac580(ebp, xmm4_17)
                    uint32_t xmm4_20[0x4] = xmm2_22 * var_1ac_4
                    float xmm6_19 = xmm5_21 * var_1a0_1
                    float xmm0_149 = xmm5_21 * var_1b0_1
                    float xmm2_24 = xmm2_22 * var_19c_1
                    float xmm5_22 = xmm5_21 * var_30.d
                    uint32_t xmm7_26[0x4] = xmm2_22 * var_180_1
                    float xmm3_24 =
                        xmm6_19 f* xmm7_26 + xmm0_149 f* xmm4_20 + xmm5_22 * xmm2_24 + 1f
                    float var_1a0_3
                    float var_128_1
                    float xmm5_23
                    
                    if (9.99999975e-06f <= xmm3_24)
                        float xmm1_77 = xmm5_22 f* xmm7_26 - xmm6_19 * xmm2_24
                        float xmm2_27 = xmm2_24 * xmm0_149 - xmm5_22 f* xmm4_20
                        float xmm4_23 = xmm4_20 f* xmm6_19 - xmm0_149 f* xmm7_26
                        float xmm0_166 = sub_4ac580(ebp, 
                            xmm1_77 * xmm1_77 + xmm3_24 * xmm3_24 + xmm2_27 * xmm2_27
                                + xmm4_23 * xmm4_23)
                        xmm5_23 = xmm1_77 / xmm0_166
                        xmm2_24 = xmm2_27 / xmm0_166
                        xmm3_24 = xmm3_24 / xmm0_166
                        xmm4_20 = xmm4_23 / xmm0_166
                        var_1a0_3 = xmm2_24
                        var_128_1 = xmm5_23
                    else
                        if (_mm_and_ps(xmm4_20, 0x7fffffff) f<= _mm_and_ps(xmm7_26, 0x7fffffff))
                            xmm5_23 = (zx.o(0)).d
                            xmm4_20 = xmm7_26 ^ data_8937c0.o
                        else
                            xmm5_23 = xmm2_24 ^ (data_8937c0.o).d
                            xmm2_24 = (zx.o(0)).d
                        
                        var_1a0_3 = xmm2_24
                        var_128_1 = xmm5_23
                    
                    float var_12c_1 = xmm3_24
                    float var_198_4 = xmm3_24
                    float xmm2_29 = esi[ecx_6 * 0xb + 2]
                    int32_t var_15c_2 = xmm4_20
                    int32_t var_124_1 = xmm4_20
                    int32_t var_1a4_5 = xmm4_20
                    float var_e4_1 = xmm3_15 * xmm3_24 - xmm5_11 * xmm5_23 - xmm6_14 * xmm2_24
                        - xmm2_29 f* xmm4_20
                    xmm2_21 = var_19c_1
                    xmm3_19 = var_180_1
                    float var_ec_1 = xmm3_15 * xmm2_24 + xmm6_14 * xmm3_24 + var_128_1 * xmm2_29
                        - xmm5_11 f* xmm4_20
                    float var_e8_1 = xmm3_24 * xmm2_29 + xmm3_15 f* xmm4_20 + xmm5_11 * xmm2_24
                        - xmm6_14 * xmm5_23
                    *(esi + ecx_6 * 0x2c) = (xmm3_15 * xmm5_23 + xmm5_11 * xmm3_24
                        + xmm6_14 f* xmm4_20 - var_1a0_3 * xmm2_29).o
            
            float xmm0_187 = xmm2_14 * var_1ac_4
            float xmm2_30 = xmm2_21 f* esi[ecx_6 * 0xb + 9]
            float xmm6_25 = esi[ecx_6 * 0xb + 2]
            float xmm1_99 = esi[ecx_6 * 0xb + 3]
            float xmm3_28 = xmm3_19 f* esi[ecx_6 * 0xb + 8]
            float xmm7_29 = esi[ecx_6 * 0xb]
            float xmm0_188 = esi[ecx_6 * 0xb + 1]
            float xmm5_29 = xmm6_25 * xmm1_99
            float xmm2_32 = xmm0_188 * xmm0_188
            float xmm4_26 = xmm1_99 * xmm1_99
            float xmm5_31 = xmm0_188 * xmm1_99
            float xmm2_34 = xmm6_25 * xmm6_25
            float xmm3_30 = xmm7_29 * xmm7_29
            float xmm5_33 = esi[ecx_6 * 0xb + 2] f* xmm0_188
            float xmm0_190 = xmm7_29 * xmm1_99
            float xmm2_36 = xmm0_188 * xmm7_29
            float xmm6_26 = xmm6_25 * xmm7_29
            float xmm7_31 = xmm4_26 - xmm3_30
            float xmm5_37 = (xmm2_36 - xmm5_29) * (xmm3_28 + xmm3_28)
                + (xmm3_30 + xmm4_26 - xmm2_32 - xmm2_34) * xmm0_187
            float var_1ac_5 = xmm5_37
            var_1ac_4 = xmm5_37 + (xmm6_26 + xmm5_31) * (xmm2_30 + xmm2_30) + xmm0_113
            var_180_1 = (xmm5_29 + xmm2_36) * (xmm0_187 + xmm0_187)
                + (xmm7_31 + xmm2_32 - xmm2_34) * xmm3_28
                + (xmm5_33 - xmm0_190) * (xmm2_30 + xmm2_30) f+ esi[ecx_6 * 0xb + 5]
            eax_6 = arg3
            xmm3_35 = xmm1_66
            xmm5_7 = xmm0_135
            xmm6_3 = xmm3_35
            var_1a0_1 = xmm5_7
            var_30 = xmm6_3
            var_19c_1 = (xmm0_190 + xmm5_33) * (xmm3_28 + xmm3_28)
                + (xmm6_26 - xmm5_31) * (xmm0_187 + xmm0_187)
                + (xmm7_31 - xmm2_32 + xmm2_34) * xmm2_30 f+ esi[ecx_6 * 0xb + 6]
            xmm1_36 = xmm0_122
            var_1b0_1 = xmm1_36
            
            if (ecx_6 == *eax_6)
                break
            
            ecx_6 = *(ecx_6 * 0xd8 + arg5 + 0x6c)
        
        float xmm2_38 = var_1ac_4 - xmm0_122
        float xmm1_117 = var_180_1 - xmm0_135
        float xmm0_215 = var_19c_1 f- xmm3_35
        
        if (9.99999975e-06f > xmm1_117 * xmm1_117 + xmm2_38 * xmm2_38 + xmm0_215 * xmm0_215)
            break
        
        int32_t ecx_9 = var_164_1 + 1
        var_164_1 = ecx_9
        
        if (ecx_9 s>= 0x64)
            break
        
        xmm3_6 = var_14c_1
        xmm4_6 = var_148_1
        xmm5_7 = var_144_1
        ecx_4 = var_174_1
        edx = arg4
    
    float xmm6_29 = *arg2
    float xmm4_29 = arg2[2]
    float xmm2_40 = arg2[1]
    float xmm1_121 = arg2[3]
    float xmm7_36 = xmm2_40 * xmm2_40
    float xmm3_38 = xmm6_29 * xmm2_40 - xmm4_29 * xmm1_121
    float xmm5_39 = xmm1_121 * xmm1_121
    float xmm0_220 = xmm4_29 * xmm4_29
    float xmm4_31 = xmm6_29 * xmm6_29
    float xmm3_39 = xmm3_38 + xmm3_38
    float xmm2_44 = xmm1_121 * xmm6_29
    float xmm0_223 = xmm7_36 - xmm0_220 + xmm5_39 - xmm4_31
    float xmm0_225 = arg2[2] f* arg2[1]
    float xmm1_123 = xmm2_44 + xmm0_225
    float xmm1_124 = xmm1_123 + xmm1_123
    float var_1a0_5 = xmm0_223 * xmm7_6 + xmm3_39 * var_d0_1 + xmm1_124 * xmm7_8
    float var_19c_4 = xmm0_223 * xmm7_10 + xmm3_39 * var_a0_1 + xmm1_124 * xmm7_12
    float xmm1_127 = xmm0_225 - xmm2_44
    float var_1b0_7 = xmm0_223 * xmm0_70 + xmm3_39 * xmm7_4[0] + xmm1_124 * var_100[0]
    float xmm1_128 = xmm1_127 + xmm1_127
    float xmm3_43 = arg2[2] f* xmm6_29 + arg2[3] f* xmm2_40
    float xmm2_48 = xmm0_220 - xmm7_36 - xmm4_31 + xmm5_39
    float xmm3_44 = xmm3_43 + xmm3_43
    int32_t i = 0
    float xmm5_43 = xmm1_128 * xmm7_6 + xmm3_44 * var_d0_1 + xmm2_48 * xmm7_8
    float var_18c_5 = xmm5_43
    float xmm4_35 = xmm1_128 * xmm7_10 + xmm3_44 * var_a0_1 + xmm2_48 * xmm7_12
    float xmm3_47 = xmm3_44 * xmm7_4[0] + xmm1_128 * xmm0_70 + xmm2_48 * var_100[0]
    float var_1ac_6 = xmm4_35
    float var_194_6 = xmm3_47
    
    if (arg4 - 1 s> 0)
        float xmm1_162
        
        do
            int128_t* eax_12 = eax_6[i] * 0x2c
            int128_t xmm7_44 = *(eax_12 + esi)
            var_30 = xmm7_44
            float xmm7_45 = xmm7_44.d ^ 0x80000000
            float xmm2_51 = var_30:4.d ^ 0x80000000
            float xmm3_49 = xmm7_45 * xmm7_45
            float xmm4_37 = var_30:8.d ^ 0x80000000
            float xmm0_250 = var_30:0xc.d
            float xmm6_31 = xmm2_51 * xmm7_45
            float xmm1_131[0x4] = xmm0_250 * xmm0_250
            float xmm3_51 = xmm2_51 * xmm2_51
            var_100 = xmm1_131
            float xmm3_53 = xmm4_37 * xmm4_37
            float xmm5_45 = xmm4_37 * xmm0_250
            float xmm3_55 = var_19c_4 + var_19c_4
            var_30.d = xmm7_45
            var_30:8.d = xmm4_37
            var_30:4.d = xmm2_51
            float xmm3_57 = xmm4_37 * xmm7_45
            float xmm1_133 = xmm7_45 f* var_30:0xc.d
            float xmm7_47 = xmm2_51 * xmm0_250
            float xmm0_252 = xmm4_37 f* var_30:4.d
            float xmm4_39 = xmm1_131[0] - xmm3_49
            float xmm0_254 = xmm3_49 f+ var_100.d
            float xmm2_53 = var_1b0_7 + var_1b0_7
            float xmm3_59 = var_1a0_5 + var_1a0_5
            float var_178_2 = xmm0_254
            var_1a0_5 = (xmm0_254 - xmm3_51 - xmm3_53) * var_1a0_5 + (xmm6_31 - xmm5_45) * xmm3_55
                + (xmm3_57 + xmm7_47) * xmm2_53
            var_19c_4 = (xmm4_39 + xmm3_51 - xmm3_53) * var_19c_4 + (xmm5_45 + xmm6_31) * xmm3_59
                + (xmm0_252 - xmm1_133) * xmm2_53
            var_1b0_7 = (xmm1_133 + xmm0_252) * xmm3_55 + (xmm3_57 - xmm7_47) * xmm3_59
                + (xmm4_39 - xmm3_51 + xmm3_53) * var_1b0_7
            int128_t xmm6_37 = *(eax_12 + esi)
            float xmm6_38 = xmm6_37.d ^ 0x80000000
            float xmm2_55 = xmm6_37:8.d ^ 0x80000000
            float xmm1_148 = xmm6_37:4.d ^ 0x80000000
            float xmm7_48 = xmm6_37:0xc.d
            int128_t var_140_2
            var_140_2:4.d = xmm1_148
            float xmm0_268 = xmm7_48 * xmm7_48
            float xmm5_49 = xmm6_38 * xmm1_148
            float xmm0_270 = xmm1_148 * xmm1_148
            float xmm3_61 = xmm6_38 * xmm6_38
            float xmm0_272 = xmm2_55 * xmm2_55
            float xmm4_44 = xmm2_55 * xmm7_48
            float xmm0_274 = var_1ac_6 + var_1ac_6
            var_140_2:8.d = xmm2_55
            float xmm0_276 = xmm2_55 * xmm6_38
            float xmm6_40 = xmm7_48 * xmm1_148
            float xmm2_57 = var_194_6 + var_194_6
            float xmm1_156 = xmm6_38 * xmm7_48
            var_18c_5 = (xmm6_40 + xmm0_276) * xmm2_57
                + (xmm3_61 + xmm0_268 - xmm0_270 - xmm0_272) * var_18c_5
                + (xmm5_49 - xmm4_44) * xmm0_274
            float xmm0_285 = xmm5_43 + xmm5_43
            float xmm0_287 = xmm0_268 - xmm3_61
            float xmm0_289 = xmm2_55 f* var_140_2:4.d
            eax_6 = arg3
            xmm5_43 = var_18c_5
            i += 1
            xmm1_162 = (xmm0_270 + xmm0_287 - xmm0_272) * var_1ac_6 + (xmm4_44 + xmm5_49) * xmm0_285
                + (xmm0_289 - xmm1_156) * xmm2_57
            var_1ac_6 = xmm1_162
            xmm3_47 = (xmm0_272 + xmm0_287 - xmm0_270) * var_194_6
                + (xmm1_156 + xmm0_289) * xmm0_274 + (xmm0_276 - xmm6_40) * xmm0_285
            var_194_6 = xmm3_47
        while (i s< arg4 - 1)
        
        xmm4_35 = xmm1_162
        var_18c_5 = xmm5_43
        var_1ac_6 = xmm4_35
        var_194_6 = xmm3_47
    
    float xmm1_167 = 1f / sub_4ac580(ebp, xmm5_43 * xmm5_43 + xmm4_35 * xmm4_35 + xmm3_47 * xmm3_47)
    var_20.d = var_18c_5 * xmm1_167
    var_20:4.d = var_1ac_6 * xmm1_167
    float var_18_2 = var_194_6 * xmm1_167
    float xmm1_172 =
        1f / sub_4ac580(ebp, var_19c_4 * var_19c_4 + var_1a0_5 * var_1a0_5 + var_1b0_7 * var_1b0_7)
    var_30.d = var_1a0_5 * xmm1_172
    var_30:4.d = var_19c_4 * xmm1_172
    var_30:8.d = var_1b0_7 * xmm1_172
    int128_t xmm0_319 = *sub_4ac9c0(&var_100, &var_20, &var_30, &var_100)
    result = arg3[arg4 - 1] * 0x2c
    *(result + esi) = xmm0_319

CookieCheckFunction(result)
return result
