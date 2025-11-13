// 函数: sub_6cef10
// 地址: 0x6cef10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_8 = eax_1
int32_t var_74
char const* const ecx

if (arg2 == 0)
    int32_t ecx_5 = *arg3
    *(arg4 + 4) = *(arg6 + 0xc)
    float xmm0_72 = arg6[8]
    float xmm4_7 = arg6[7]
    xmm0_72 f- 0
    eax_1:1.b = (xmm0_72 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_72, 0f) ? 1 : 0) << 2
        | (xmm0_72 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    float xmm4_9
    
    if (p_2)
        xmm4_9 = xmm4_7 / (float.s(ecx_5) f* *(arg7 + 0x1c))
        float xmm2_24 = _mm_min_ss(arg6[8] / (float.s(arg3[1]) f* *(arg7 + 0x20)), 
            arg6[9] / (float.s(arg3[2]) f* *(arg7 + 0x24)))
        
        if (not(xmm2_24 > xmm4_9))
            xmm4_9 = xmm2_24
        
        *arg4 = xmm4_9
        goto label_6cf385
    
    uint128_t xmm0_73 = zx.o(arg3[2])
    float xmm2_20 = *(arg7 + 0x24)
    float xmm1_26 = arg6[9]
    float xmm3_12 = _mm_cvtepi32_ps(zx.o(ecx_5))
    float xmm0_74 = _mm_cvtepi32_ps(xmm0_73)
    xmm4_9 = _mm_min_ss(xmm4_7 / (xmm3_12 f* *(arg7 + 0x1c)), xmm1_26 / (xmm2_20 * xmm0_74))
    *arg4 = xmm4_9
    
    if (xmm4_9 > 0f)
    label_6cf385:
        float xmm7_13 = arg4[1]
        float xmm6_4 = xmm7_13 * xmm7_13
        eax_1 = arg3[2] - 1
        float xmm2_28 = (float.s(*arg5) - float.s(*arg3 - 1) * 0.5f) f* *(arg7 + 0x1c) * xmm4_9
        float xmm2_32 = (float.s(arg5[1]) - float.s(arg3[1] - 1) * 0.5f) f* *(arg7 + 0x20) * xmm4_9
        float xmm1_30 = arg4[4]
        float xmm3_15 = xmm1_30 * xmm1_30
        float xmm0_87 = arg4[2]
        float xmm3_16 = xmm3_15 - xmm6_4
        float xmm2_36 = (float.s(arg5[2]) - float.s(eax_1) * 0.5f) f* *(arg7 + 0x24) * xmm4_9
        float xmm4_10 = arg4[3]
        float xmm5_6 = xmm1_30 * xmm4_10
        float xmm2_38 = xmm0_87 * xmm0_87
        float xmm2_40 = xmm4_10 * xmm4_10
        float xmm2_42 = xmm7_13 * xmm0_87
        float xmm2_44 = xmm1_30 * xmm0_87
        float xmm2_46 = xmm7_13 * xmm4_10
        float xmm4_11 = xmm4_10 * xmm0_87
        float xmm7_14 = xmm7_13 * xmm1_30
        float xmm6_10 = (xmm5_6 + xmm2_42) * (xmm2_28 + xmm2_28)
            + (xmm2_38 + xmm3_16 - xmm2_40) * xmm2_32 + (xmm4_11 - xmm7_14) * (xmm2_36 + xmm2_36)
            + arg6[1]
        float xmm2_52 = (xmm2_32 + xmm2_32) * (xmm7_14 + xmm4_11)
            + (xmm2_28 + xmm2_28) * (xmm2_46 - xmm2_44) + (xmm3_16 - xmm2_38 + xmm2_40) * xmm2_36
            + arg6[2]
        arg4[5] = (xmm2_42 - xmm5_6) * (xmm2_32 + xmm2_32)
            + (xmm6_4 + xmm3_15 - xmm2_38 - xmm2_40) * xmm2_28
            + (xmm2_46 + xmm2_44) * (xmm2_36 + xmm2_36) + *arg6
        arg4[6] = xmm6_10
        arg4[7] = xmm2_52
        
        if (*arg4 f> 0f)
            CookieCheckFunction(arg4)
            return arg4
        
        char const* const var_70_4 = "DistBox"
        var_74 = 0x40e
        ecx = "retval.s > 0"
    else
        char const* const var_70_3 = "DistBox"
        var_74 = 0x403
        ecx = "retval.s > 0"
else
    if (arg2 == 1)
        float xmm1_1 = arg6[7]
        float xmm0_2 = xmm1_1 * 0.5f
        float xmm0_3 = arg6[8]
        float xmm2_2 = xmm0_3 * 0.5f
        
        if (not(xmm0_3 > xmm1_1))
            xmm1_1 = xmm0_3
        
        int32_t ecx_1 = arg3[2]
        int32_t* edx_2 = arg5
        float xmm0_5 = _mm_cvtepi32_ps(zx.o(arg3[1]))
        uint128_t xmm2_3 = zx.o(edx_2[2])
        float xmm1_3 = xmm1_1 * 0.25f / xmm0_5
        float xmm0_7 = _mm_cvtepi32_ps(zx.o(ecx_1 - 1))
        float xmm2_4 = _mm_cvtepi32_ps(xmm2_3)
        float xmm1_4 = arg6[9]
        *arg4 = 0x3f800000
        float xmm2_6 = (xmm2_4 - xmm0_7 * 0.5f) * xmm1_4 / _mm_cvtepi32_ps(zx.o(ecx_1))
        float xmm1_9 = _mm_cvtepi32_ps(zx.o(*edx_2)) * 6.28318548f / _mm_cvtepi32_ps(zx.o(*arg3))
        float xmm0_14 = sub_4ae0f0(ebp, xmm1_9)
        float xmm0_17 = (xmm0_2 - xmm1_3) * xmm0_14
        float xmm0_19 = sub_4ae0d0(ebp, xmm1_9)
        float xmm2_7 = arg6[3]
        float xmm4_1 = arg6[4]
        float xmm6_1 = arg6[6]
        float xmm1_12 = (xmm2_2 - xmm1_3) * xmm0_19
        float xmm3_6 = (xmm0_14 * xmm0_2 - xmm0_17) * 0.5f + xmm0_17
        float xmm3_7 = arg6[5]
        float xmm0_23 = (xmm0_19 * xmm2_2 - xmm1_12) * 0.5f + xmm1_12
        float xmm5_2 = xmm3_7 * xmm6_1
        float xmm1_14 = xmm2_7 * xmm4_1
        float xmm7_2 = xmm3_7 * xmm3_7
        float xmm0_25 = xmm1_14 - xmm5_2
        float xmm6_2 = xmm6_1 * xmm6_1
        float xmm5_4 = xmm2_7 * xmm2_7
        float xmm0_27 = xmm4_1 * xmm4_1
        float xmm0_29 = xmm3_7 * xmm4_1
        float xmm0_31 = xmm6_1 * xmm2_7
        float xmm7_4 = xmm0_31 + xmm0_29
        float xmm3_8 = xmm3_7 * xmm2_7
        float xmm2_9 = xmm6_1 * xmm4_1
        float xmm7_6 = xmm5_2 + xmm1_14
        float xmm1_16 = xmm0_29 - xmm0_31
        float xmm4_3 = xmm3_8 - xmm2_9
        float xmm2_10 = xmm2_9 + xmm3_8
        float xmm1_17 = xmm1_16 + xmm1_16
        float xmm2_11 = xmm2_10 + xmm2_10
        float var_10_1 = xmm1_17
        float var_14 = xmm2_11
        float xmm0_35 = xmm7_2 - xmm0_27 - xmm5_4 + xmm6_2
        float var_c_1 = xmm0_35
        float xmm2_17 =
            (xmm5_4 + xmm6_2 - xmm7_2 - xmm0_27) * xmm3_6 + (xmm0_25 + xmm0_25) * xmm0_23
        float xmm7_12 = (xmm0_27 - xmm7_2 + xmm6_2 - xmm5_4) * xmm0_23 + (xmm7_6 + xmm7_6) * xmm3_6
        float xmm4_6 = (xmm4_3 + xmm4_3) * xmm3_6 + (xmm7_4 + xmm7_4) * xmm0_23
        float xmm1_23 =
            1f / sub_4ac580(ebp, xmm7_12 * xmm7_12 + xmm2_17 * xmm2_17 + xmm4_6 * xmm4_6)
        float var_20 = xmm1_23 * xmm2_17
        float var_1c_1 = xmm1_23 * xmm7_12
        float var_18_1 = xmm1_23 * xmm4_6
        void var_5c
        *(arg4 + 4) = *sub_4ac9c0(&var_5c, &var_14, &var_20, &var_5c)
        float xmm1_25 = arg6[1]
        float xmm2_19 = arg6[2] - arg6[9] * 0.5f
        arg4[5] = xmm2_11 * xmm2_6 + xmm2_17 + *arg6
        arg4[6] = xmm1_17 * xmm2_6 + xmm7_12 + xmm1_25
        arg4[7] = xmm0_35 * xmm2_6 + xmm4_6 + xmm2_19
        CookieCheckFunction(arg4)
        return arg4
    
    char const* const var_70_1 = "DistBox"
    var_74 = 0x48a
    ecx = "Halt"

sub_63b870(eax_1, &data_801800, ecx, "C:\x\ax2017\Engine\FabDef.cpp", var_74, "DistBox")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
