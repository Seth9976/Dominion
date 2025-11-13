// 函数: sub_6e5cc0
// 地址: 0x6e5cc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm3 = arg1[5]
float xmm0 = arg1[1]
float i = xmm3 * arg4 + xmm0
arg1[2] = xmm0
arg1[1] = i

if (not(xmm3 <= 0f))
    int32_t eax_2 = arg1[6]
    
    if (eax_2 != 0)
        if (eax_2 != 1)
            if (eax_2 == 2 && not(i <= 1f))
                arg1[1] = 0x3f800000
                arg1[7] = 1
        else if (not(i <= 1f))
            arg1[1] = 0x3f800000
            arg1[0x1f].b = eax_2.b
            arg1[7] = 1
    else if (not(i <= 1f))
        int32_t eax_3 = arg1[7]
        
        do
            i = i - 1f
            eax_3 += 1
        while (i > 1f)
        
        arg1[1] = i
        arg1[7] = eax_3
else if (not(0 f<= xmm3))
    int32_t eax_4 = arg1[6]
    
    if (eax_4 != 0)
        if (eax_4 != 1)
            if (eax_4 == 2 && not(0 f<= i))
                arg1[1] = 0
                arg1[7] = 1
        else if (not(0 f<= i))
            arg1[0x1f].b = eax_4.b
            arg1[1] = 0
            arg1[7] = 1
    else if (not(0 f<= i))
        int32_t eax_5 = arg1[7]
        
        do
            i = i + 1f
            eax_5 += 1
        while (0 f> i)
        
        arg1[1] = i
        arg1[7] = eax_5

int32_t eax_6 = arg1[0x1d]

if (eax_6 s> 0)
    eax_6 -= 1
    arg1[0x1d] = eax_6

int32_t* ecx = *arg1

if (ecx[1] != 0x18)
    sub_63b870(eax_6, &data_801800, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
        "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2ed, "FlanimGetDef")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t result = sub_5af880(ecx)
int32_t i_1 = 0
uint32_t result_1 = result
int32_t i_2 = 0

if (*(result + 0x28) s> 0)
    int32_t ecx_1 = 0
    int32_t var_168_1 = 0
    
    do
        int32_t* eax_9 = arg1[0x1a] + 0x64 + ecx_1
        
        if (*eax_9 != 0)
            void var_10c
            sub_6e69b0(&var_10c, arg1[4], arg1[3], arg1[1], &var_10c)
            
            if (*(arg1 + 0x8d) != 0)
                int32_t var_104_1 = 0
            
            float var_80
            sub_6e7700(&var_10c, i_1, result_1, &var_10c, &var_80)
            float var_70
            double xmm0_2 = _mm_cvtps_pd(var_70)
            _libm_sse2_cos_precise()
            double xmm0_6 = _mm_cvtps_pd(var_70)
            _libm_sse2_sin_precise()
            float var_78
            float xmm0_8 = fconvert.s(xmm0_6) * var_78
            float var_6c
            double xmm0_10 = _mm_cvtps_pd(var_6c)
            _libm_sse2_sin_precise()
            float var_74
            float xmm0_13 = (fconvert.s(xmm0_10) ^ (data_8937c0.o).d) * var_74
            double xmm0_15 = _mm_cvtps_pd(var_6c)
            _libm_sse2_cos_precise()
            int32_t var_148_1 = 0
            int32_t var_138_1 = 0
            void* edx_3 = &arg1[8]
            float var_14c_1 = xmm0_13
            float var_144_1 = var_80
            float var_7c
            float var_134_1 = var_7c
            int128_t var_d0 = (fconvert.s(xmm0_2) * var_78).o
            float var_13c_1 = fconvert.s(xmm0_15) * var_74
            int128_t var_c0_1 = xmm0_8.o
            int128_t var_b0
            __builtin_memcpy(&var_b0, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            float* eax_13 = sub_642ae0(&var_80, edx_3, &var_d0, &var_80)
            float xmm3_1[0x4] = *eax_13
            float xmm2_3[0x4] = *(eax_13 + 0x10)
            float xmm1_2[0x4] = *(eax_13 + 0x20)
            int128_t var_a0_1 = *(eax_13 + 0x30)
            int32_t var_13c_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff)
            int32_t var_138_2 = _mm_shuffle_ps(xmm2_3, xmm2_3, 0xff)
            int32_t xmm0_29 = _mm_shuffle_ps(xmm1_2, xmm1_2, 0xff)
            float xmm1_3 = xmm3_1[0]
            float xmm2_5 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55)
            int32_t var_134_2 = xmm0_29
            float xmm2_7 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
            double xmm0_34 = fconvert.d(xmm1_3 f* xmm3_1 + xmm2_5 * xmm2_5 + xmm2_7 * xmm2_7)
            void var_178
            
            if (0 f> xmm0_34)
                edx_3 = _libm_sse2_sqrt_precise(arg3, arg2, var_178)
            else
                xmm0_34 = _mm_sqrt_sd(xmm0_34, xmm0_34)
            float xmm0_35 = fconvert.s(xmm0_34)
            float xmm4_1 = 1f / xmm0_35
            float xmm0_36[0x4] = *(eax_13 + 0x10)
            float xmm7_2 = (*eax_13).d * xmm4_1
            float xmm2_9 = _mm_shuffle_ps(xmm0_36, xmm0_36, 0x55)
            float xmm3_2 = xmm0_36[0]
            float xmm0_38 = _mm_shuffle_ps(xmm0_36, xmm0_36, 0xaa) * xmm4_1
            float xmm7_3[0x4] = *(eax_13 + 0x20)
            float xmm0_39[0x4] = *(eax_13 + 0x20)
            float xmm1_7 = xmm0_39[0]
            float xmm0_40 = _mm_shuffle_ps(xmm0_39, xmm7_3, 0x55)
            float xmm7_5 = _mm_shuffle_ps(xmm7_3, xmm7_3, 0xaa) * xmm4_1
            var_70 = xmm2_9 * xmm4_1
            float var_64_1 = xmm0_40 * xmm4_1
            var_80 = xmm7_2
            var_7c = xmm2_5 * xmm4_1
            var_78 = xmm2_7 * xmm4_1
            var_74 = xmm3_2 * xmm4_1
            var_6c = xmm0_38
            float var_68_1 = xmm1_7 * xmm4_1
            float var_60_1 = xmm7_5
            float var_90[0x4]
            var_14c_1.o = *sub_4ac5b0(&var_90, edx_3, &var_80, eax_13, &var_90)
            int128_t var_40 = xmm0_35.o
            int128_t var_30_1 = xmm0_8.o
            sub_6fe2f0(eax_9, &var_40)
            i_1 = i_2
            ecx_1 = var_168_1
        
        result = result_1
        i_1 += 1
        ecx_1 += 0x68
        i_2 = i_1
        var_168_1 = ecx_1
    while (i_1 s< *(result + 0x28))

CookieCheckFunction(result)
return result
