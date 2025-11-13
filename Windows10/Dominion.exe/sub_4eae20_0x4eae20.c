// 函数: sub_4eae20
// 地址: 0x4eae20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
float xmm4 = *(arg3 + 0x14)
float xmm3_1 = *(arg3 + 0x18) - arg6[6]
float xmm2_1 = xmm4 - arg6[5]
float xmm0_1 = *(arg3 + 0x1c) - arg6[7]
float xmm1_1 = *arg3 - *arg6
int32_t* var_58 = arg4

if (not(0.00999999978f <= xmm3_1 * xmm3_1 + xmm2_1 * xmm2_1 + xmm0_1 * xmm0_1 + xmm1_1 * xmm1_1))
    *arg8 = 1
    *arg3 = *arg6
    arg3[1] = *(arg6 + 0x10)
    *arg2 = 0
    arg2[1].d = 0
    *arg5 = 0
    arg5[1].d = 0
    int32_t* eax_4 = var_58
    *eax_4 = 0
    CookieCheckFunction(eax_4)
    return eax_4

*(arg3 + 4) = *(arg6 + 4)
int32_t* eax_6 = var_58
float xmm1_4 = arg7 * 13.861557f
float xmm4_1 = xmm4 - arg6[5]
float xmm4_3 = xmm4_1 * 13.861557f f+ *arg2
float xmm5 =
    1f / (xmm1_4 * 0.479999989f * xmm1_4 + xmm1_4 + 1f + xmm1_4 * 0.234999999f * xmm1_4 * xmm1_4)
*(arg3 + 0x14) = (xmm4_3 * arg7 + xmm4_1) * xmm5 + arg6[5]
*arg2 = (*arg2 - xmm4_3 * 13.861557f * arg7) * xmm5
float xmm1_6 = *(arg3 + 0x18) - arg6[6]
float xmm3_8 = xmm1_6 * 13.861557f f+ *(arg2 + 4)
*(arg3 + 0x18) = (xmm3_8 * arg7 + xmm1_6) * xmm5 + arg6[6]
*(arg2 + 4) = (*(arg2 + 4) - xmm3_8 * 13.861557f * arg7) * xmm5
float xmm1_8 = *(arg3 + 0x1c) - arg6[7]
float xmm3_13 = xmm1_8 * 13.861557f f+ arg2[1].d
*(arg3 + 0x1c) = (xmm3_13 * arg7 + xmm1_8) * xmm5 + arg6[7]
arg2[1].d = (arg2[1].d f- xmm3_13 * 13.861557f * arg7) * xmm5
float xmm1_10 = *arg3 - *arg6
float xmm3_18 = xmm1_10 * 13.861557f f+ *eax_6
*arg3 = (xmm3_18 * arg7 + xmm1_10) * xmm5 + *arg6
*eax_6 = (*eax_6 - xmm3_18 * 13.861557f * arg7) * xmm5
float xmm0_46 = arg6[1]
xmm0_46 f- 0
eax_6:1.b = (xmm0_46 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_46, 0f) ? 1 : 0) << 2
    | (xmm0_46 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int32_t var_68
char* ecx_2

if (not(p_1))
    float xmm0_47 = arg6[2]
    xmm0_47 f- 0
    eax_6:1.b = (xmm0_47 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_47, 0f) ? 1 : 0) << 2
        | (xmm0_47 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        int64_t var_30
        int64_t* eax_8
        int32_t edx
        int80_t st0
        st0, eax_8, edx = sub_4eb460(&var_30, arg2, arg3 + 4, arg3 + 4, arg5, &var_30)
        int64_t xmm0_48 = *eax_8
        float eax_9 = eax_8[1].d
        float var_40
        int64_t* eax_11
        int80_t st0_1
        st0_1, eax_11 = sub_4eb460(&var_40, edx, arg3 + 4, arg3 + 4, arg5, &var_40)
        float xmm3_21 = arg5[1].d
        float eax_12 = eax_11[1].d
        var_30 = *eax_11
        float xmm0_51 = eax_9 - eax_12
        float xmm2_10 = xmm0_51 * 13.861557f + xmm3_21
        float xmm4_10 = (xmm2_10 * arg7 + xmm0_51) * xmm5 + eax_12
        arg5[1].d = (xmm3_21 - xmm2_10 * 13.861557f * arg7) * xmm5
        float xmm4_14 = (xmm4_10 + xmm4_10) * 3.14159274f * 0.00277777785f * 0.5f
        float xmm0_53 = sub_4ae0f0(ebp, xmm4_14)
        float xmm0_55 = sub_4ae0d0(ebp, xmm4_14)
        float xmm0_56 = xmm0_48.d
        float xmm0_60 = (xmm0_56 + xmm0_56) * 3.14159274f * 0.00277777785f * 0.5f
        var_58 = sub_4ae0f0(ebp, xmm0_60)
        float xmm0_63 = sub_4ae0d0(ebp, xmm0_60)
        float xmm0_64 = xmm0_48:4.d
        float xmm0_68 = (xmm0_64 + xmm0_64) * 3.14159274f * 0.00277777785f * 0.5f
        float xmm0_69 = sub_4ae0f0(ebp, xmm0_68)
        double* eax_13
        float xmm0_71
        eax_13, xmm0_71 = sub_4ae0d0(ebp, xmm0_68)
        float xmm2_14 = var_58 f* xmm0_53
        float xmm3_25 = xmm0_63 * xmm0_55
        float xmm0_75 = var_58 f* xmm0_55
        float var_34 = xmm3_25 * xmm0_71 + xmm2_14 * xmm0_69
        float xmm6_1 = xmm0_63 * xmm0_53
        var_40 = xmm0_75 * xmm0_71 - xmm6_1 * xmm0_69
        float var_3c = xmm3_25 * xmm0_69 + xmm2_14 * xmm0_71
        float var_38 = xmm6_1 * xmm0_71 - xmm0_75 * xmm0_69
        *(arg3 + 4) = var_40.o
        CookieCheckFunction(eax_13)
        return eax_13
    
    char const* const var_64_3 = "MoveToDampened"
    var_68 = 0x11d
    ecx_2 = "tar.r.y == 0"
else
    char const* const var_64 = "MoveToDampened"
    var_68 = 0x11c
    ecx_2 = "tar.r.x == 0"

sub_63b870(eax_6, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\CardMotion.cpp", var_68, 
    "MoveToDampened")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
