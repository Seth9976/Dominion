// 函数: sub_5c3d60
// 地址: 0x5c3d60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t esi = arg2
int32_t edx = arg4[1]
void* edi = *arg4
int32_t var_28 = esi
void* var_1c = edi
int32_t eax_2 = 0

if (edx << 2 u<= 0x7d00)
    eax_2 = arg3 - 7

int32_t var_2c = edx
int32_t ecx_2 = 0
int32_t var_24 = 0
int32_t result_1
int32_t result

if (eax_2 s<= 0)
    result = arg7 << 4
    result_1 = result
else
    int32_t eax_5 = edx << 3
    int32_t var_40_1 = edx * 3
    int32_t var_50_1 = edx * 2
    int32_t var_b8_1 = 0
    int32_t var_90_1 = edx * 7
    int32_t var_94_1 = edx * 6
    int32_t var_98_1 = edx * 5
    float* var_58_1 = arg6
    int32_t ecx_4 = arg7 << 5
    int32_t var_88_1 = ecx_4
    void* var_9c_1 = edi
    float* var_18_1 = &arg6[arg7 * 7]
    float* var_34_1 = &arg6[arg7 * 6]
    float* var_38_1 = &arg6[arg7 * 5]
    result_1 = arg7 << 4
    float* var_3c_1 = &arg6[arg7 * 4]
    float* var_30_1 = &arg6[arg7 * 3]
    float* var_70_1 = &arg6[arg7 * 2]
    float* var_5c_1 = &arg6[arg7]
    int128_t* var_a0_1 = edi + (edx << 2)
    void* var_a4_1 = edi + (edx << 3)
    int128_t* var_a8_1 = edi + edx * 0xc
    int128_t* var_ac_1 = (edx << 4) + edi
    int128_t* var_bc_1 = edi + edx * 0x14
    int128_t* var_b0_1 = edi + edx * 0x18
    float (* var_b4_1)[0x4] = edi + edx * 0x1c
    int32_t i_6 = ((eax_2 - 1) u>> 3) + 1
    var_24 = (((eax_2 - 1) u>> 3) + 1) << 3
    esi = var_28
    int32_t i
    
    do
        int32_t edx_1 = 0
        float xmm3_1[0x4] = zx.o(0)
        float xmm2_1[0x4] = zx.o(0)
        float var_100_1[0x4]
        __builtin_memset(&var_100_1, 0, 0x40)
        float xmm4_1[0x4] = zx.o(0)
        float xmm5_1[0x4] = zx.o(0)
        int32_t var_14_1 = 0
        float xmm6_1[0x4] = zx.o(0)
        float var_f0_1[0x4]
        float var_e0_1[0x4]
        float var_d0_1[0x4]
        
        if (esi s>= 4)
            int32_t eax_55 = 4
            float (* var_6c_1)[0x4] = var_b4_1
            int128_t* var_68_1 = var_b0_1
            int128_t* ecx_6 = *arg5
            int128_t* var_54_1 = var_bc_1
            int128_t* var_60_1 = var_ac_1
            int128_t* var_80_1 = var_a8_1
            void* var_48_1 = var_a4_1
            int128_t* var_20_1 = var_a0_1
            void* var_4c_1 = var_9c_1
            
            do
                float xmm1_1[0x4] = *ecx_6
                int128_t* edi_9 = var_4c_1
                eax_55 += 4
                int128_t* esi_2 = var_20_1
                ecx_6 = &ecx_6[1]
                int128_t* edx_2 = var_80_1
                var_20_1 = &var_20_1[1]
                var_80_1 = &var_80_1[1]
                var_4c_1 = &edi_9[1]
                edi = var_1c
                xmm2_1 = _mm_add_ps(xmm2_1, _mm_mul_ps(*edi_9, xmm1_1))
                int128_t* esi_3 = var_48_1
                xmm4_1 = _mm_add_ps(xmm4_1, _mm_mul_ps(*esi_2, xmm1_1))
                var_48_1 = &esi_3[1]
                esi = var_28
                xmm5_1 = _mm_add_ps(xmm5_1, _mm_mul_ps(*esi_3, xmm1_1))
                int128_t* edx_3 = var_60_1
                var_60_1 = &var_60_1[1]
                xmm6_1 = _mm_add_ps(xmm6_1, _mm_mul_ps(*edx_2, xmm1_1))
                int128_t* edx_4 = var_54_1
                var_54_1 = &var_54_1[1]
                xmm3_1 = _mm_add_ps(xmm3_1, _mm_mul_ps(*edx_3, xmm1_1))
                int128_t* edx_5 = var_68_1
                var_68_1 = &var_68_1[1]
                var_d0_1 = __addps_xmmps_memps(_mm_mul_ps(*edx_4, xmm1_1), var_d0_1)
                float (* edx_6)[0x4] = var_6c_1
                var_6c_1 = &var_6c_1[1]
                var_100_1 = __addps_xmmps_memps(_mm_mul_ps(*edx_5, xmm1_1), var_100_1)
                edx_1 = var_14_1 + 4
                var_14_1 = edx_1
                var_e0_1 = __addps_xmmps_memps(_mm_mul_ps(*edx_6, xmm1_1), var_e0_1)
            while (eax_55 s<= esi)
            
            ecx_4 = var_88_1
            var_f0_1 = xmm3_1
        
        float xmm3_3[0x4] = _mm_add_ps(xmm2_1 u>> 0x40, xmm2_1)
        float xmm1_3[0x4] = _mm_add_ps(xmm4_1 u>> 0x40, xmm4_1)
        float xmm4_3[0x4] = _mm_add_ps(xmm5_1 u>> 0x40, xmm5_1)
        float xmm5_3[0x4] = _mm_add_ps(xmm6_1 u>> 0x40, xmm6_1)
        float xmm3_4[0x4] = xmm3_3 f+ _mm_shuffle_ps(xmm3_3, xmm3_3, 1)
        float xmm1_4[0x4] = xmm1_3 f+ _mm_shuffle_ps(xmm1_3, xmm1_3, 1)
        int64_t xmm4_4 = xmm4_3 f+ _mm_shuffle_ps(xmm4_3, xmm4_3, 1)
        int64_t xmm5_4 = xmm5_3 f+ _mm_shuffle_ps(xmm5_3, xmm5_3, 1)
        float xmm2_3[0x4] = _mm_add_ps(var_f0_1 u>> 0x40, var_f0_1)
        float xmm2_4 = xmm2_3 f+ _mm_shuffle_ps(xmm2_3, xmm2_3, 1)
        float xmm6_3[0x4] = _mm_add_ps(var_d0_1 u>> 0x40, var_d0_1)
        float xmm2_5[0x4] = var_100_1
        float xmm6_4[0x4] = xmm6_3 f+ _mm_shuffle_ps(xmm6_3, xmm6_3, 1)
        float xmm0_35[0x4] = _mm_add_ps(xmm2_5 u>> 0x40, xmm2_5)
        float xmm2_7 = xmm0_35 f+ _mm_shuffle_ps(xmm0_35, xmm0_35, 1)
        float xmm2_9[0x4] = _mm_add_ps(var_e0_1 u>> 0x40, var_e0_1)
        float var_e0_2 = xmm2_9 f+ _mm_shuffle_ps(xmm2_9, xmm2_9, 1)
        float xmm2_11 = xmm2_4
        float xmm0_49
        
        if (edx_1 s>= esi)
            xmm0_49 = xmm2_7
        else
            int64_t xmm1_5 = _mm_unpacklo_ps(xmm1_4, xmm5_4)
            int32_t eax_57 = *arg5
            float xmm5_7[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(xmm3_4, xmm4_4), xmm1_5)
            float* ecx_7 = eax_57 + (edx_1 << 2)
            float xmm6_7[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(xmm2_4, xmm2_7), _mm_unpacklo_ps(xmm6_4, var_e0_2))
            float* edx_8 = edi + ((var_2c + var_40_1 + edx_1) << 2)
            float* var_48_2 = edi + ((var_14_1 + var_98_1) << 2)
            float* var_60_2 = edi + ((var_14_1 + var_b8_1) << 2)
            float* var_54_2 = edi + ((var_2c + var_b8_1 + var_14_1) << 2)
            float* var_68_2 = edi + ((var_14_1 + var_50_1) << 2)
            int32_t var_4c_2 = var_28 - var_14_1
            float* esi_7 = edi + ((var_14_1 + var_94_1) << 2)
            float* eax_82 = edi + ((var_14_1 + var_40_1) << 2)
            float* edi_11 = edi + ((var_14_1 + var_90_1) << 2)
            float* var_6c_2 = eax_82
            
            while (true)
                float xmm4_5 = *ecx_7
                ecx_7 = &ecx_7[1]
                var_6c_2 = &var_6c_2[1]
                float* eax_83 = var_68_2
                var_68_2 = &var_68_2[1]
                int64_t xmm0_43 = xmm4_5 * *eax_83
                float* eax_84 = var_54_2
                var_54_2 = &var_54_2[1]
                float* eax_85 = var_60_2
                var_60_2 = &var_60_2[1]
                int64_t xmm1_10 = _mm_unpacklo_ps(xmm4_5 * *eax_84, xmm4_5 * *eax_82)
                int64_t xmm3_8 = xmm4_5 * *edi_11
                edi_11 = &edi_11[1]
                float xmm2_16[0x4] = _mm_unpacklo_ps(xmm4_5 * *eax_85, xmm0_43)
                int64_t xmm0_45 = xmm4_5 * *esi_7
                esi_7 = &esi_7[1]
                float xmm2_17[0x4] = _mm_unpacklo_ps(xmm2_16, xmm1_10)
                float xmm1_12[0x4] = xmm4_5 * *var_48_2
                float xmm2_18[0x4] = _mm_add_ps(xmm2_17, xmm5_7)
                var_48_2 = &var_48_2[1]
                int64_t xmm1_13 = _mm_unpacklo_ps(xmm1_12, xmm3_8)
                xmm5_7 = xmm2_18
                float xmm2_20[0x4] = xmm4_5 * *edx_8
                edx_8 = &edx_8[1]
                int32_t temp1_1 = var_4c_2
                var_4c_2 -= 1
                xmm6_7 =
                    _mm_add_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(xmm2_20, xmm0_45), xmm1_13), xmm6_7)
                
                if (temp1_1 == 1)
                    break
                
                eax_82 = var_6c_2
            
            esi = var_28
            edi = var_1c
            xmm2_11 = xmm6_7[0]
            ecx_4 = var_88_1
            int32_t xmm0_47 = _mm_shuffle_ps(xmm6_7, xmm6_7, 0x55)
            xmm3_4 = xmm5_7
            xmm1_4 = _mm_shuffle_ps(xmm5_7, xmm5_7, 0x55)
            xmm0_49 = _mm_shuffle_ps(xmm6_7, xmm6_7, 0xaa)
            float xmm6_8 = _mm_shuffle_ps(xmm6_7, xmm6_7, 0xff)
            xmm4_4 = _mm_shuffle_ps(xmm5_7, xmm5_7, 0xaa)
            var_e0_2 = xmm6_8
            xmm6_4 = xmm0_47.o
            xmm5_4 = _mm_shuffle_ps(xmm5_7, xmm5_7, 0xff)
        
        var_b8_1 += eax_5
        var_98_1 += eax_5
        var_94_1 += eax_5
        *var_58_1 = xmm3_4 f* arg8 + *var_58_1
        float* eax_89 = var_5c_1
        var_90_1 += eax_5
        var_50_1 += eax_5
        var_40_1 += eax_5
        var_58_1 += ecx_4
        var_5c_1 += ecx_4
        *eax_89 = xmm1_4 f* arg8 + *eax_89
        float* eax_90 = var_70_1
        var_70_1 += ecx_4
        *eax_90 = xmm4_4 f* arg8 + *eax_90
        float* eax_91 = var_30_1
        var_30_1 += ecx_4
        *eax_91 = xmm5_4 f* arg8 + *eax_91
        float* eax_92 = var_3c_1
        var_3c_1 += ecx_4
        *eax_92 = xmm2_11 * arg8 + *eax_92
        float* eax_93 = var_38_1
        var_38_1 += ecx_4
        *eax_93 = xmm6_4 f* arg8 + *eax_93
        float* eax_94 = var_34_1
        var_34_1 += ecx_4
        *eax_94 = xmm0_49 * arg8 + *eax_94
        float* eax_95 = var_18_1
        var_18_1 += ecx_4
        *eax_95 = var_e0_2 * arg8 + *eax_95
        result = edx << 5
        var_b4_1 += result
        var_b0_1 += result
        var_bc_1 += result
        var_ac_1 += result
        var_a8_1 += result
        var_a4_1 += result
        var_a0_1 += result
        var_9c_1 += result
        i = i_6
        i_6 -= 1
    while (i != 1)
    edx = var_2c
    ecx_2 = var_24

if (ecx_2 s< arg3 - 3)
    int32_t var_14_2 = edx * ecx_2
    int32_t eax_99 = edx << 2
    int32_t var_20_3 = var_2c * (ecx_2 + 2)
    int32_t var_40_2 = var_2c * (var_24 + 3)
    edi = var_1c
    void* var_48_3 = &arg6[var_24 * arg7]
    int128_t* var_5c_2 = edi + (var_14_2 << 2)
    void* var_4c_3 = &arg6[(var_24 + 3) * arg7]
    void* var_50_2 = &arg6[(ecx_2 + 2) * arg7]
    float (* var_30_2)[0x4] = edi + (var_20_3 << 2)
    void* edx_14 = ((var_24 << 2) + 4) * arg7 + arg6
    void* var_58_2 = edx_14
    int128_t* var_70_2 = var_2c * ((var_24 << 2) + 4) + edi
    float (* var_3c_2)[0x4] = edi + (var_40_2 << 2)
    int32_t i_4 = ((arg3 - 3 - var_24 - 1) u>> 2) + 1
    var_24 += (((arg3 - 3 - var_24 - 1) u>> 2) + 1) << 2
    esi = var_28
    int32_t i_1
    
    do
        int32_t ecx_16 = 0
        float xmm3_11[0x4] = zx.o(0)
        float xmm4_9[0x4] = zx.o(0)
        float xmm5_10[0x4] = zx.o(0)
        float xmm6_11[0x4] = zx.o(0)
        
        if (esi s>= 4)
            int32_t eax_121 = 4
            float (* var_38_2)[0x4] = var_3c_2
            float (* var_34_2)[0x4] = var_30_2
            float (* edx_16)[0x4] = *arg5
            int128_t* var_18_2 = var_70_2
            int128_t* edi_16 = var_5c_2
            
            do
                float xmm1_17[0x4] = *edx_16
                int128_t* esi_12 = var_18_2
                eax_121 += 4
                float xmm0_55[0x4] = *edi_16
                var_18_2 = &var_18_2[1]
                ecx_16 += 4
                edx_16 = &edx_16[1]
                edi_16 = &edi_16[1]
                xmm3_11 = _mm_add_ps(xmm3_11, _mm_mul_ps(xmm0_55, xmm1_17))
                float (* esi_13)[0x4] = var_34_2
                var_34_2 = &var_34_2[1]
                xmm4_9 = _mm_add_ps(xmm4_9, _mm_mul_ps(*esi_12, xmm1_17))
                float (* esi_14)[0x4] = var_38_2
                var_38_2 = &var_38_2[1]
                xmm5_10 = _mm_add_ps(xmm5_10, _mm_mul_ps(*esi_13, xmm1_17))
                esi = var_28
                xmm6_11 = _mm_add_ps(xmm6_11, _mm_mul_ps(*esi_14, xmm1_17))
            while (eax_121 s<= esi)
            
            edi = var_1c
            edx_14 = var_58_2
        
        float xmm2_27[0x4] = _mm_add_ps(xmm3_11 u>> 0x40, xmm3_11)
        float xmm3_13[0x4] = _mm_add_ps(xmm4_9 u>> 0x40, xmm4_9)
        float xmm4_11[0x4] = _mm_add_ps(xmm5_10 u>> 0x40, xmm5_10)
        float xmm0_64 = _mm_shuffle_ps(xmm2_27, xmm2_27, 1)
        float xmm5_12[0x4] = _mm_add_ps(xmm6_11 u>> 0x40, xmm6_11)
        float xmm2_28 = xmm2_27 f+ xmm0_64
        float xmm3_14 = xmm3_13 f+ _mm_shuffle_ps(xmm3_13, xmm3_13, 1)
        float xmm4_12 = xmm4_11 f+ _mm_shuffle_ps(xmm4_11, xmm4_11, 1)
        float xmm5_13 = xmm5_12 f+ _mm_shuffle_ps(xmm5_12, xmm5_12, 1)
        
        if (ecx_16 s< esi)
            float* edx_17 = *arg5 + (ecx_16 << 2)
            float* edi_17 = edi + ((var_40_2 + ecx_16) << 2)
            float* eax_136 = var_1c + ((var_20_3 + ecx_16) << 2)
            float* ecx_17 = var_1c + ((var_2c + var_14_2 + ecx_16) << 2)
            int32_t j_3 = var_28 - ecx_16
            float* esi_18 = var_1c + ((var_14_2 + ecx_16) << 2)
            int32_t j
            
            do
                float xmm1_18 = *edx_17
                edx_17 = &edx_17[1]
                float xmm0_72 = xmm1_18 * *esi_18
                esi_18 = &esi_18[1]
                xmm2_28 = xmm2_28 + xmm0_72
                float xmm0_74 = xmm1_18 * *ecx_17
                ecx_17 = &ecx_17[1]
                xmm3_14 = xmm3_14 + xmm0_74
                float xmm0_76 = xmm1_18 * *eax_136
                eax_136 = &eax_136[1]
                float xmm1_19 = xmm1_18 * *edi_17
                edi_17 = &edi_17[1]
                j = j_3
                j_3 -= 1
                xmm4_12 = xmm4_12 + xmm0_76
                xmm5_13 = xmm5_13 + xmm1_19
            while (j != 1)
            esi = var_28
            edx_14 = var_58_2
        
        *var_48_3 = xmm2_28 * arg8 f+ *var_48_3
        *edx_14 = xmm3_14 * arg8 f+ *edx_14
        *var_50_2 = xmm4_12 * arg8 f+ *var_50_2
        var_14_2 += eax_99
        var_3c_2 = &var_3c_2[var_2c]
        var_30_2 = &var_30_2[var_2c]
        var_70_2 = &var_70_2[var_2c]
        var_5c_2 = &var_5c_2[var_2c]
        var_40_2 += eax_99
        var_20_3 += eax_99
        result = result_1
        var_50_2 += result
        edx_14 += result
        *var_4c_3 = xmm5_13 * arg8 f+ *var_4c_3
        i_1 = i_4
        i_4 -= 1
        var_4c_3 += result
        edi = var_1c
        var_48_3 += result
        var_58_2 = edx_14
    while (i_1 != 1)
    ecx_2 = var_24

if (ecx_2 s< arg3 - 1)
    int32_t ecx_21 = var_2c * var_24
    int32_t var_34_3 = ecx_21
    void* result_2 = &arg6[var_24 * arg7]
    float (* var_3c_3)[0x4] = edi + (ecx_21 << 2)
    float* var_38_3 = var_2c * ((var_24 << 2) + 4) + edi
    void* edx_22 = ((var_24 << 2) + 4) * arg7 + arg6
    esi = var_28
    void* var_30_3 = edx_22
    int32_t var_7c_1 = ((arg3 - 1 - var_24 - 1) u>> 1) + 1
    var_24 += (((arg3 - 1 - var_24 - 1) u>> 1) + 1) << 1
    
    while (true)
        int32_t ecx_30 = 0
        float xmm3_17[0x4] = zx.o(0)
        float xmm4_15[0x4] = zx.o(0)
        
        if (esi s>= 4)
            int32_t eax_150 = 4
            float* var_8c = var_38_3
            float (* edi_21)[0x4] = var_3c_3
            float (* edx_24)[0x4] = *arg5
            
            do
                float xmm1_20[0x4] = *edx_24
                float (* esi_20)[0x4] = var_8c
                eax_150 += 4
                float xmm0_77[0x4] = *edi_21
                ecx_30 += 4
                edx_24 = &edx_24[1]
                edi_21 = &edi_21[1]
                xmm3_17 = _mm_add_ps(xmm3_17, _mm_mul_ps(xmm0_77, xmm1_20))
                var_8c = &esi_20[1]
                esi = var_28
                xmm4_15 = _mm_add_ps(xmm4_15, _mm_mul_ps(*esi_20, xmm1_20))
            while (eax_150 s<= esi)
            
            edi = var_1c
            edx_22 = var_30_3
        
        float xmm2_32[0x4] = _mm_add_ps(xmm3_17 u>> 0x40, xmm3_17)
        float xmm3_19[0x4] = _mm_add_ps(xmm4_15 u>> 0x40, xmm4_15)
        float xmm2_33 = xmm2_32 f+ _mm_shuffle_ps(xmm2_32, xmm2_32, 1)
        float xmm3_20 = xmm3_19 f+ _mm_shuffle_ps(xmm3_19, xmm3_19, 1)
        
        if (ecx_30 s< esi)
            float* edx_25 = *arg5 + (ecx_30 << 2)
            float* edi_22 = edi + ((var_2c + var_34_3 + ecx_30) << 2)
            float* eax_157 = var_1c + ((var_34_3 + ecx_30) << 2)
            esi = var_28
            int32_t i_7 = esi - ecx_30
            int32_t i_2
            
            do
                float xmm1_21 = *edx_25
                edx_25 = &edx_25[1]
                float xmm1_22 = xmm1_21 * *edi_22
                edi_22 = &edi_22[1]
                float xmm0_86 = xmm1_21 * *eax_157
                eax_157 = &eax_157[1]
                xmm3_20 = xmm3_20 + xmm1_22
                xmm2_33 = xmm2_33 + xmm0_86
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
            edx_22 = var_30_3
        
        var_34_3 += var_2c * 2
        var_38_3 = &var_38_3[var_2c * 2]
        var_3c_3 = &(*var_3c_3)[var_2c * 2]
        int32_t ecx_33 = arg7 << 3
        *result_2 = xmm2_33 * arg8 f+ *result_2
        result = result_2 + ecx_33
        result_2 = result
        *edx_22 = xmm3_20 * arg8 f+ *edx_22
        edx_22 += ecx_33
        int32_t temp3_1 = var_7c_1
        var_7c_1 -= 1
        var_30_3 = edx_22
        
        if (temp3_1 == 1)
            break
        
        edi = var_1c
    
    ecx_2 = var_24

if (ecx_2 s< arg3)
    int32_t ecx_35 = var_2c * var_24
    void* edi_24 = var_1c
    int32_t var_14_3 = ecx_35
    result = &arg6[var_24 * arg7]
    int32_t result_3 = result
    int128_t* var_18_6 = edi_24 + (ecx_35 << 2)
    int32_t i_5 = arg3 - var_24
    int32_t i_3
    
    do
        int32_t edx_30 = 0
        float xmm3_23[0x4] = zx.o(0)
        
        if (esi s>= 4)
            int32_t eax_163 = 4
            int128_t* edi_25 = *arg5
            int128_t* ecx_37 = var_18_6
            
            do
                float xmm1_23[0x4] = *ecx_37
                eax_163 += 4
                edx_30 += 4
                float xmm0_87[0x4] = *edi_25
                edi_25 = &edi_25[1]
                ecx_37 = &ecx_37[1]
                xmm3_23 = _mm_add_ps(xmm3_23, _mm_mul_ps(xmm1_23, xmm0_87))
            while (eax_163 s<= esi)
            
            edi_24 = var_1c
            ecx_35 = var_14_3
            result = result_3
        
        float xmm2_37[0x4] = _mm_add_ps(xmm3_23 u>> 0x40, xmm3_23)
        float xmm2_38 = xmm2_37 f+ _mm_shuffle_ps(xmm2_37, xmm2_37, 1)
        
        if (edx_30 s< esi)
            int32_t ecx_38 = *arg5
            
            if (esi - edx_30 s< 4)
            label_5c493b:
                float* ecx_41 = ecx_38 + (edx_30 << 2)
                int32_t* eax_172 = var_1c + ((var_14_3 + edx_30) << 2)
                int32_t j_5 = esi - edx_30
                int32_t j_1
                
                do
                    float xmm0_96 = *eax_172
                    eax_172 = &eax_172[1]
                    float xmm0_97 = xmm0_96 * *ecx_41
                    ecx_41 = &ecx_41[1]
                    xmm2_38 = xmm2_38 + xmm0_97
                    j_1 = j_5
                    j_5 -= 1
                while (j_1 != 1)
            else
                void* ecx_40 = ecx_38 + (edx_30 << 2) + 8
                int32_t* eax_169 = edi_24 + 8 + ((var_14_3 + edx_30) << 2)
                int32_t j_4 = ((esi - edx_30 - 4) u>> 2) + 1
                edx_30 += j_4 << 2
                int32_t j_2
                
                do
                    float xmm2_41 = xmm2_38 + eax_169[-2] f* *(ecx_40 - 8)
                        + eax_169[-1] f* *(ecx_40 - 4) + *eax_169 f* *ecx_40
                    float xmm0_95 = eax_169[1] f* *(ecx_40 + 4)
                    eax_169 = &eax_169[4]
                    ecx_40 += 0x10
                    xmm2_38 = xmm2_41 + xmm0_95
                    j_2 = j_4
                    j_4 -= 1
                while (j_2 != 1)
                
                if (edx_30 s< esi)
                    goto label_5c493b
            
            result = result_3
            ecx_35 = var_14_3
        
        var_18_6 += var_2c << 2
        ecx_35 += var_2c
        edi_24 = var_1c
        var_14_3 = ecx_35
        *result = xmm2_38 * arg8 f+ *result
        result += arg7 << 2
        i_3 = i_5
        i_5 -= 1
        result_3 = result
    while (i_3 != 1)

return result
