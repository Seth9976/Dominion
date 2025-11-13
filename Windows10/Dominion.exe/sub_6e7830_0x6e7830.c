// 函数: sub_6e7830
// 地址: 0x6e7830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_f8
int32_t var_14 = __security_cookie ^ &var_f8
float xmm0 = arg4[2]
xmm0 - 0f
int32_t eax_1
eax_1:1.b =
    (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    void* eax_2 = *arg4
    void* eax_3 = sub_6e6fb0(eax_2, arg2, arg3, arg5.w, arg4, eax_2, arg5)
    CookieCheckFunction(eax_3)
    return eax_3

void* eax_4 = *arg4
float var_e0[0x4]
sub_6e6fb0(eax_4, arg2, arg3, arg5.w, arg4, eax_4, &var_e0)
float var_80[0x4]
void* eax_6 = sub_6e6fb0(&var_80, arg2, arg3, arg5.w, arg4, arg4[1], &var_80)
int32_t var_98
int32_t var_38
int64_t xmm0_6
float var_d0[0x4]
float var_c0[0x4]
float var_b0[0x4]
int128_t var_a0
int64_t var_90

if (var_98 == 0 || var_38 == 0)
label_6e79fe:
    *arg5 = var_e0
    *(arg5 + 0x10) = var_d0
    *(arg5 + 0x20) = var_c0
    *(arg5 + 0x30) = var_b0
    *(arg5 + 0x40) = var_a0
    xmm0_6 = var_90
else
    eax_6 = sub_6e7570(&var_e0, &var_80)
    float xmm4_1[0x4] = arg4[2]
    float xmm4_2[0x4] = _mm_shuffle_ps(xmm4_1, xmm4_1, 0)
    float var_70[0x4]
    float var_60[0x4]
    float var_50[0x4]
    int128_t var_40
    
    if (eax_6.b == 0)
        *arg5 = __addps_xmmps_memps(_mm_mul_ps(__subps_xmmps_memps(var_80, var_e0), xmm4_2), var_e0)
        *(arg5 + 0x10) =
            __addps_xmmps_memps(_mm_mul_ps(__subps_xmmps_memps(var_70, var_d0), xmm4_2), var_d0)
        *(arg5 + 0x20) =
            __addps_xmmps_memps(_mm_mul_ps(__subps_xmmps_memps(var_60, var_c0), xmm4_2), var_c0)
        *(arg5 + 0x30) =
            __addps_xmmps_memps(_mm_mul_ps(__subps_xmmps_memps(var_50, var_b0), xmm4_2), var_b0)
        float xmm2_16 = xmm4_2[0]
        arg5[0x10] = sub_5af6f0(&var_a0, &var_40, xmm2_16)
        arg5[0x11] = sub_5af6f0(&var_a0:4, &var_40:4, xmm2_16)
        arg5[0x12] = var_98
        uint32_t eax_10 = var_90.d
        int32_t var_94
        arg5[0x13] = var_94
        arg5[0x14] = eax_10
        CookieCheckFunction(eax_10)
        return eax_10
    
    if (0.5f f> xmm4_2)
        goto label_6e79fe
    
    *arg5 = var_80
    *(arg5 + 0x10) = var_70
    *(arg5 + 0x20) = var_60
    *(arg5 + 0x30) = var_50
    *(arg5 + 0x40) = var_40
    int64_t var_30
    xmm0_6 = var_30
*(arg5 + 0x50) = xmm0_6
CookieCheckFunction(eax_6)
return eax_6
