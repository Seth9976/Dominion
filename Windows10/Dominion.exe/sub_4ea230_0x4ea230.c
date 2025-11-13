// 函数: sub_4ea230
// 地址: 0x4ea230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
float* var_174 = arg3
int32_t ecx = *arg8
arg8[0x25] = arg9 f+ arg8[0x25]
sub_6a85f0(arg10, &data_7ffb14, ecx, arg9, &data_7ffb1c, 1f)
int32_t* esi = *arg8

if (esi != 0)
    uint32_t eax_4 = zx.d(esi.w)
    
    if (eax_4 u< data_caf770 && *(data_caf76c + eax_4 * 0x18 + 0x14) == esi
            && not(arg8[0x25] f>= arg8[0x24]))
        float var_60
        int32_t* var_174_1 = &var_60
        sub_6a8d00(&var_60, arg8[1], esi, arg8, esi)
        float xmm6_2 = (arg8[0x25] f- 0f) / (arg8[0x24] f- 0f)
        int32_t* esi_1 = arg7
        float xmm3_9 = (esi_1[5] f- arg3[5]) * xmm6_2 + arg3[5] + var_60
            - ((arg8[0x13] f- arg8[2]) * xmm6_2 f+ arg8[2])
        float var_5c
        float xmm0_11 = (esi_1[6] f- arg3[6]) * xmm6_2 + arg3[6] + var_5c
            - ((arg8[0x14] f- arg8[3]) * xmm6_2 f+ arg8[3])
        float xmm0_16 = (esi_1[7] f- arg3[7]) * xmm6_2 + arg3[7] + 0f
        float var_54
        double xmm0_19 = _mm_cvtps_pd((1f - var_54) * 0.5f)
        void var_168
        
        if (0 f> xmm0_19)
            _libm_sse2_sqrt_precise(arg5, arg4, var_168)
        else
            xmm0_19 = _mm_sqrt_sd(xmm0_19, xmm0_19)
        
        float xmm0_20 = fconvert.s(xmm0_19)
        double xmm0_24 = _mm_cvtps_pd((var_54 + 1f) * 0.5f)
        
        if (0 f> xmm0_24)
            _libm_sse2_sqrt_precise(arg5, arg4, var_168)
        else
            xmm0_24 = _mm_sqrt_sd(xmm0_24, xmm0_24)
        
        float xmm1_6 = fconvert.s(xmm0_24)
        float var_144 = xmm1_6
        float var_58
        
        if (not(0f <= var_58))
            var_144 = xmm1_6 ^ (data_8937c0.o).d
        
        float xmm1_9 = xmm0_20 * 0f
        double xmm0_27 = _mm_cvtps_pd((1f f- arg8[0x16]) * 0.5f)
        
        if (0 f> xmm0_27)
            _libm_sse2_sqrt_precise(arg5, arg4, var_168)
        else
            xmm0_27 = _mm_sqrt_sd(xmm0_27, xmm0_27)
        
        float xmm0_28 = fconvert.s(xmm0_27)
        double xmm0_32 = _mm_cvtps_pd((arg8[0x16] f+ 1f) * 0.5f)
        
        if (0 f> xmm0_32)
            _libm_sse2_sqrt_precise(arg5, arg4, var_168)
        else
            xmm0_32 = _mm_sqrt_sd(xmm0_32, xmm0_32)
        
        float xmm0_33 = fconvert.s(xmm0_32)
        float var_148 = xmm0_33
        
        if (not(0f f<= arg8[0x15]))
            var_148 = xmm0_33 ^ (data_8937c0.o).d
        
        double xmm0_39 = _mm_cvtps_pd((1f f- arg8[5]) * 0.5f)
        
        if (0 f> xmm0_39)
            _libm_sse2_sqrt_precise(arg5, arg4, var_168)
        else
            xmm0_39 = _mm_sqrt_sd(xmm0_39, xmm0_39)
        
        float xmm0_40 = fconvert.s(xmm0_39)
        double xmm0_44 = _mm_cvtps_pd((arg8[5] f+ 1f) * 0.5f)
        
        if (0 f> xmm0_44)
            _libm_sse2_sqrt_precise(arg5, arg4, var_168)
        else
            xmm0_44 = _mm_sqrt_sd(xmm0_44, xmm0_44)
        
        int128_t xmm1_10 = fconvert.s(xmm0_44)
        float var_158_2 = xmm1_10
        
        if (not(0f f<= arg8[4]))
            xmm1_10 ^= data_8937c0.o
            var_158_2 = xmm1_10
        
        float xmm0_45 = -0f * xmm0_40
        float xmm2 = -1f * xmm0_40
        float xmm3_10 = -0f * xmm0_28
        float xmm4 = -1f * xmm0_28
        float xmm6_3 = xmm3_10
        float xmm2_1 = var_148
        float xmm0_46 = xmm0_45 * xmm3_10
        
        if (not(0 f<= xmm1_10 f* xmm2_1 + xmm0_46 + xmm0_46 + xmm4 * xmm2))
            xmm3_10 = xmm3_10 * -1f
            xmm4 = xmm4 * -1f
            xmm6_3 = xmm3_10
            xmm2_1 = xmm2_1 * -1f
        
        float xmm2_4 = (xmm2_1 - var_158_2) * xmm6_2 + var_158_2
        float xmm3_13 = (xmm3_10 - xmm0_45) * xmm6_2 + xmm0_45
        float xmm6_6 = (xmm6_3 - xmm0_45) * xmm6_2 + xmm0_45
        float xmm4_3 = (xmm4 - xmm2) * xmm6_2 + xmm2
        float xmm0_55 =
            sub_4ac580(ebp, xmm3_13 * xmm3_13 + xmm2_4 * xmm2_4 + xmm6_6 * xmm6_6 + xmm4_3 * xmm4_3)
        float xmm1_22 = xmm2_4 / xmm0_55
        float xmm2_5[0x4] = *(esi_1 + 4)
        float xmm7 = arg3[4]
        float xmm4_5 = _mm_shuffle_ps(xmm2_5, xmm2_5, 0xff)
        float xmm5_2 = _mm_shuffle_ps(xmm2_5, xmm2_5, 0x55)
        float xmm1_30 = xmm2_5[0] * arg3[1]
        float xmm6_8 = _mm_shuffle_ps(xmm2_5, xmm2_5, 0xaa)
        int128_t var_e0
        
        if (not(0 f<= xmm1_30 + xmm4_5 * xmm7 + xmm5_2 * arg3[2] + xmm6_8 * arg3[3]))
            var_e0:0xc.d = xmm4_5 * -1f
            var_e0.d = xmm2_5 f* -1f
            var_e0:4.d = xmm5_2 * -1f
            var_e0:8.d = xmm6_8 * -1f
            var_e0 = var_e0
            xmm4_5 = var_e0:0xc.d
            xmm6_8 = var_e0:8.d
            xmm5_2 = var_e0:4.d
            xmm2_5 = var_e0.d
        
        int128_t xmm2_9 = (xmm2_5 f- arg3[1]) * xmm6_2 + arg3[1]
        float xmm6_11 = (xmm6_8 - arg3[3]) * xmm6_2
        int128_t xmm4_9 = (xmm4_5 - xmm7) * xmm6_2 + xmm7
        int128_t xmm5_6 = (xmm5_2 - arg3[2]) * xmm6_2 + arg3[2]
        int128_t var_a0 = xmm2_9
        int128_t xmm6_12 = xmm6_11 + arg3[3]
        int128_t var_100 = xmm5_6
        var_e0 = xmm6_12
        int128_t var_c0 = xmm4_9
        float xmm0_69 = sub_4ac580(ebp, 
            xmm2_9.d f* xmm2_9 + xmm4_9.d f* xmm4_9 + xmm5_6.d f* xmm5_6 + xmm6_12.d f* xmm6_12)
        var_c0 = var_c0.d f/ xmm0_69
        var_a0 = var_a0.d f/ xmm0_69
        var_100 = var_100.d / xmm0_69
        var_e0 = var_e0.d / xmm0_69
        float xmm4_11 = (xmm3_13 / xmm0_55) ^ 0x80000000
        float xmm0_71 = (xmm6_6 / xmm0_55) ^ 0x80000000
        float xmm3_15 = xmm1_9 * xmm4_11
        float xmm5_8 = (xmm4_3 / xmm0_55) ^ 0x80000000
        float xmm2_11 = xmm1_9 * xmm0_71
        float xmm6_17 = var_144 * xmm1_22 - xmm3_15 - xmm2_11 - xmm0_20 * xmm5_8
        float xmm0_75 = xmm1_9 * xmm5_8
        float xmm1_49 = xmm1_9 * xmm1_22
        float xmm5_13 = var_144 * xmm4_11 + xmm1_49 + xmm0_20 * xmm0_71 - xmm0_75
        float xmm4_16 = var_144 * xmm0_71 + xmm1_49 + xmm0_75 - xmm0_20 * xmm4_11
        int32_t var_ec = 0x43678000
        float xmm7_2 = var_100.d
        var_100.d = 0x3f800000
        int32_t var_e8 = 0x43b20000
        int32_t var_e4 = 0
        float xmm3_16 = var_c0.d
        float xmm1_53 = xmm0_20 * xmm1_22 + var_144 * xmm5_8 + xmm3_15 - xmm2_11
        float xmm2_12 = var_a0.d
        var_c0:0xc.d =
            xmm6_17 * xmm3_16 - xmm5_13 * xmm2_12 - xmm4_16 * xmm7_2 - xmm1_53 f* var_e0.d
        var_c0.d = xmm6_17 * xmm2_12 + xmm5_13 * xmm3_16 + xmm1_53 * xmm7_2 - xmm4_16 f* var_e0.d
        var_c0:4.d = xmm6_17 * xmm7_2 + xmm4_16 * xmm3_16 + xmm5_13 f* var_e0.d - xmm1_53 * xmm2_12
        var_c0:8.d = xmm6_17 f* var_e0.d + xmm1_53 * xmm3_16 + xmm4_16 * xmm2_12 - xmm5_13 * xmm7_2
        float var_50
        float xmm1_71 = 1f / ((arg8[0x17] f- arg8[6]) * xmm6_2 f+ arg8[6]) * var_50
            * ((*esi_1 - *arg3) * xmm6_2 + *arg3)
        int128_t xmm1_72 = data_800248
        var_100 = xmm1_72
        int128_t var_80 = var_100
        int128_t var_f0
        int128_t var_70 = var_f0
        var_100.d = 0x3f800000
        int32_t var_e4_1 = 0
        var_100 = var_c0
        var_ec.q = 0
        var_a0 = var_100
        int128_t var_90 = var_f0
        var_100 = xmm1_72
        var_100.d = 0x3f800000
        var_c0 = var_100
        int32_t var_ec_1 = 0xc3678000
        int32_t var_e8_1 = 0xc3b20000
        int32_t var_e4_2 = 0x80000000
        int128_t var_b0 = var_f0
        sub_4eb600(&var_a0, &var_c0, &var_e0, &var_a0)
        var_100 = var_e0
        int128_t var_d0
        int128_t var_f0_1 = var_d0
        int128_t var_120
        sub_4eb600(&var_80, &var_100, &var_120, &var_80)
        var_80 = var_120
        int128_t var_110
        int128_t var_70_1 = var_110
        float var_ec_2 = xmm3_9
        float var_e8_2 = xmm0_11
        float var_e4_3 = xmm0_16
        var_100 = data_800248
        var_100.d = xmm1_71
        sub_4eb600(&var_100, &var_80, &var_120, &var_100)
        int128_t xmm0_129 = var_120
        *arg10 = 0
        *arg6 = xmm0_129
        arg6[1] = var_110
        CookieCheckFunction(arg6)
        return arg6

uint32_t eax_14 = sub_6a82e0(esi)
sub_7112e0(*(eax_14 + 8))
sub_713890(*(eax_14 + 4))
int32_t edx_4 = data_caf778
data_caf778 = zx.d(*(eax_14 + 0x14))
*(eax_14 + 0x14) = edx_4
data_caf77c -= 1
*arg8 = 0
*arg10 = 1
*arg6 = *arg7
arg6[1] = arg7[1]
CookieCheckFunction(arg6)
return arg6
