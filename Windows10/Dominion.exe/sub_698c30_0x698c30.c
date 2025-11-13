// 函数: sub_698c30
// 地址: 0x698c30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result

if (data_cf65b4[6].b != 0)
    int128_t var_20
    float* eax_2 = sub_697400(&var_20, arg3 + 0x10, arg2, &var_20, arg3 + 0x20)
    float xmm5_1 = *(arg3 + 0x168)
    float xmm4_1 = *(arg3 + 0x170)
    float xmm3_1 = *(arg3 + 0x16c)
    float xmm0_1[0x4] = *eax_2
    float xmm1_3 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xaa) f- xmm0_1
    float xmm6_2 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xff)
    int128_t xmm1_5 = xmm1_3 f* *(arg3 + 0xa0) f+ xmm0_1
    float xmm2_3 = xmm1_3 f* *(arg3 + 0x98) f+ xmm0_1
    float xmm0_2 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55)
    float xmm6_3 = xmm6_2 - xmm0_2
    var_20 = xmm1_5
    float xmm1_6 = arg2[3]
    float xmm7_3 = xmm6_3 f* *(arg3 + 0x9c) + xmm0_2
    float xmm6_5 = xmm6_3 f* *(arg3 + 0xa4) + xmm0_2
    int32_t xmm0_3 = var_20.d
    int32_t var_38_2
    char const* const var_34_2
    
    if (xmm0_3 f< xmm2_3 || xmm6_5 < xmm7_3)
        var_34_2 = "RectInflate"
        var_38_2 = 0xb3
    label_698daa:
        sub_63b870(eax_2, &data_801800, "RectIsNormalized(r)", "C:\x\ax2017\Engine\Rect.cpp", 
            var_38_2, var_34_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm5_5 = (xmm5_1 - 0f) * xmm1_6 + 0f + xmm2_3
    float xmm4_5 = (xmm4_1 - 0f) * xmm1_6 + 0f f+ xmm0_3
    float xmm3_5 = (xmm3_1 - 0f) * xmm1_6 + 0f + xmm7_3
    float xmm2_8 = (*(arg3 + 0x174) - 0f) * xmm1_6 + 0f + xmm6_5
    
    if (xmm4_5 < xmm5_5 || xmm2_8 < xmm3_5)
        var_34_2 = "RectContains"
        var_38_2 = 0xa4
        goto label_698daa
    
    int32_t xmm1_8 = *arg4
    
    if (not(xmm1_8 f< xmm5_5))
        int32_t xmm0_4 = arg4[1]
        
        if (not(xmm0_4 f< xmm3_5) && not(xmm4_5 f< xmm1_8) && not(xmm2_8 f< xmm0_4))
            result.b = 1
            return result

result.b = 0
return result
