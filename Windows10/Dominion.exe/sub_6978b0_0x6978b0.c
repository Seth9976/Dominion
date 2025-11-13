// 函数: sub_6978b0
// 地址: 0x6978b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t* eax_1 = __security_cookie ^ &__saved_ebp
int32_t* var_c = eax_1
int32_t* ecx = *(arg3 + 0xc8)
int128_t* result
int128_t xmm0_6

if (ecx != 0)
    int128_t var_d0
    int128_t var_c0_1
    int32_t* ecx_5
    int128_t xmm0_30
    
    if (ecx[1] == 0x1e)
        int128_t xmm0_7 = *(sub_5af880(ecx) + 0xc)
        float* eax_5 = sub_697400(&var_d0, arg3 + 0x10, arg5, &var_d0, arg3 + 0x20)
        float xmm1_2 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0xac)))
        int128_t xmm0_8 = *eax_5
        float var_1c_1 = xmm1_2
        float var_20_1 = xmm1_2
        float xmm0_10 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0xb0)))
        float var_10_1 = xmm0_10
        float var_24_1 = xmm0_10
        
        if (arg7 != 0)
            uint128_t xmm1_3 = zx.o(arg7[1])
            float xmm0_12 = _mm_cvtepi32_ps(zx.o(*arg7))
            float xmm1_4 = _mm_cvtepi32_ps(xmm1_3)
            var_10_1 = xmm0_12
            var_1c_1 = xmm1_4
            var_24_1 = xmm0_12
            var_20_1 = xmm1_4
        
        float var_38_1
        float var_34_1
        
        if (*(arg2 + 0x7c) == 0)
            var_38_1 = *(arg3 + 0xb8)
            var_34_1 = *(arg3 + 0xb4)
        else
            var_38_1 = *(arg2 + 0x80)
            var_34_1 = *(arg2 + 0x84)
        
        float xmm0_18 = xmm0_7:8.d f- xmm0_7.d
        float xmm0_20 = xmm0_7:0xc.d f- xmm0_7:4.d
        float eax_7
        float edx_1
        eax_7, edx_1 = sub_6976d0(*eax_5, xmm0_18, xmm0_20, var_38_1, var_34_1, *(arg3 + 0xc0), 
            *(arg3 + 0xbc), var_24_1, var_20_1)
        bool cond:1_1 = *(arg3 + 0xd9) == 0
        float xmm2_2 = xmm0_8:8.d f- xmm0_8.d
        float xmm7_2 = xmm0_8:0xc.d f- xmm0_8:4.d
        float xmm5_3 = xmm0_18 * var_10_1 + (var_10_1 - 1f) * eax_7
        float xmm6_3 = xmm0_20 * var_1c_1 + (var_1c_1 - 1f) * edx_1
        float xmm2_3 = xmm2_2 / xmm5_3
        float xmm1_11 = xmm7_2 / xmm6_3
        float var_10_2 = xmm2_3
        float xmm2_5 = _mm_min_ss(xmm2_3, xmm1_11)
        float var_10_3 = xmm2_5
        
        if (not(cond:1_1))
            xmm2_5 = *(arg5 + 0xc)
            var_10_3 = xmm2_5
        
        bool cond:0_1 = *(arg3 + 0xd8) != 0
        var_c0_1 = *arg5
        int128_t xmm0_26 = arg5[1]
        var_d0 = xmm0_26
        int128_t var_b0_1 = xmm0_26
        int128_t var_a0_1 = arg5[2]
        int128_t var_90_1 = arg5[3]
        int128_t var_80_1 = arg5[4]
        xmm0_30 = arg5[5]
        
        if (cond:0_1)
            eax_1 = arg6
            var_c0_1:0xc.d = xmm2_5
            float xmm1_18 = float.s(*eax_1) * (eax_7 * xmm2_5 + xmm2_3 * xmm0_18) f+ xmm0_8.d
            var_b0_1:8.d = xmm1_18
            var_b0_1.d = xmm2_3 / xmm2_5 - 1f
            float xmm0_42 = float.s(eax_1[1]) * (edx_1 * xmm2_5 + xmm1_11 * xmm0_20) f+ xmm0_8:4.d
            var_b0_1:4.d = xmm1_11 / xmm2_5 - 1f
            var_c0_1.d = xmm1_18
            var_c0_1:4.d = xmm0_42
            var_b0_1:0xc.d = xmm0_42
            var_d0 = var_b0_1
        else
            int32_t eax_8
            int32_t edx_2
            eax_8, edx_2 = sub_6b7590(*(arg3 + 0xd0))
            int128_t var_50_1
            var_50_1:8.d = eax_8
            eax_1 = arg6
            float xmm6_6 = xmm2_2 f* var_50_1:8.d
            var_50_1:0xc.d = edx_2
            int32_t xmm2_6[0x4] = zx.o(*eax_1)
            float xmm3_4 = _mm_cvtepi32_ps(zx.o(eax_1[1])) * (edx_1 * var_10_3 + xmm0_20 * xmm2_5)
            var_c0_1:0xc.d = var_10_3
            var_c0_1.d = xmm6_6 f+ xmm0_8.d - ((xmm5_3 * xmm2_5 - 0f) f* var_50_1:8.d + 0f)
                + _mm_cvtepi32_ps(xmm2_6) * (eax_7 * var_10_3 + xmm0_18 * xmm2_5)
            var_c0_1:4.d = xmm7_2 f* var_50_1:0xc.d f+ xmm0_8:4.d
                - ((xmm6_3 * xmm2_5 - 0f) f* var_50_1:0xc.d + 0f) + xmm3_4
        
        ecx_5 = *(arg3 + 0xc8)
    
    if (ecx[1] != 0x1e || ecx_5[1] != 0x1e)
        sub_63b870(eax_1, &data_801800, "ptr->assetType == ASSET_TYPE_UI", 
            "C:\x\ax2017\Engine\UIDef.cpp", 0x127, "UIDefGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_9 = sub_5af880(ecx_5)
    int128_t xmm0_44 = *(eax_9 + 0xc)
    int128_t xmm0_45 = *(eax_9 + 0xc)
    result = arg4
    int128_t xmm0_46 = data_7ff530
    *result = var_c0_1
    result[1] = var_d0
    result[2] = xmm0_45
    result[3] = xmm0_46
    result[4] = xmm0_44
    xmm0_6 = xmm0_30
else
    result = arg4
    *result = *arg5
    result[1] = arg5[1]
    result[2] = arg5[2]
    result[3] = arg5[3]
    result[4] = arg5[4]
    xmm0_6 = arg5[5]

result[5] = xmm0_6
CookieCheckFunction(result)
return result
