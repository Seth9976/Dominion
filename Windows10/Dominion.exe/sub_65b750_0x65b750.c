// 函数: sub_65b750
// 地址: 0x65b750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1

if (arg5 != 0)
    int32_t esi = *(arg3 + 0x1350) * 0x88
    int128_t xmm1_1 = *(data_147abe8 + 0x2c)
    int128_t var_70 = *arg2
    float var_24
    float* var_104_1 = &var_24
    float var_88_1 = xmm1_1
    int128_t var_60_1 = arg2[1]
    sub_64c550(arg3 + 0x14, xmm1_1)
    uint128_t var_d0
    float xmm0_5[0x4] = *sub_65b1b0(&var_d0, &arg2[2], &var_24, &var_d0, *(esi + arg3 + 0x1124), 
        *(esi + arg3 + 0x1134))
    int128_t var_c0
    int128_t* eax_5 = sub_65b1b0(&var_c0, &arg2[2], &var_24, &var_c0, *(esi + arg3 + 0x1144), 
        *(esi + arg3 + 0x1154))
    int32_t var_a4_1 = 0
    float xmm1_2 = *(esi + arg3 + 0x1164)
    float xmm6_1[0x4] = *eax_5
    float xmm0_9 = _mm_shuffle_ps(xmm0_5, xmm0_5, 0xaa)
    float xmm3_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xaa)
    float xmm4_2 = xmm6_1[0] f- xmm0_5
    float xmm5_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0x55)
    float xmm6_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xff)
    float xmm0_11 = _mm_shuffle_ps(xmm0_5, xmm0_5, 0x55)
    float xmm2_3 = _mm_shuffle_ps(xmm0_5, xmm0_5, 0xff)
    int32_t xmm1_3 = *(arg2 + 0xac)
    float xmm0_12 = arg2[0xa].d
    int32_t xmm0_13 = arg2[0xb].d
    int32_t xmm2_4 = *(arg2 + 0x9c)
    uint128_t xmm5_6 = *(esi + arg3 + 0x1188)
    int128_t xmm0_14 = *(esi + arg3 + 0x1198)
    var_c0 = (xmm6_2 - xmm2_3) * xmm1_2 + xmm2_3
    var_d0 = xmm5_6
    int32_t var_104_2 = xmm1_3
    int128_t var_110_2
    var_110_2:8.d = var_a4_1
    int32_t var_ac_1 = 0
    var_110_2:4.d = xmm2_4
    var_110_2.d = 0
    int128_t var_120_2
    var_120_2:0xc.d = (xmm3_2 - xmm0_9) * xmm1_2 + xmm0_9
    var_120_2:8.d = xmm4_2 * xmm1_2 f+ xmm0_5
    int32_t eax_7
    int32_t edx_3
    eax_7, edx_3 = sub_65b5f0(arg2, _mm_bsrli_si128(xmm5_6, 8), xmm5_6, 0x3f800000)
    var_120_2:4.d = xmm0_13
    int32_t xmm0_21 = var_c0.d
    int32_t var_84_2 = 0
    var_120_2.d = 0
    uint128_t xmm0_22 = var_d0
    int32_t var_ac_2 = 0
    int32_t var_128_1 = 0
    xmm0_5[3] = edx_3
    int32_t xmm0_23 = _mm_bsrli_si128(xmm0_22, 4)
    int32_t xmm1_5 = _mm_bsrli_si128(xmm0_22, 0xc)
    xmm0_5[2] = eax_7
    float eax_8
    int32_t edx_5
    eax_8, edx_5 = sub_65b5f0(eax_7, xmm1_5, xmm0_23, 0x3f800000, 
        (xmm5_2 - xmm0_11) * xmm1_2 + xmm0_11, xmm0_21, 0f, xmm0_12, 0, 0)
    float xmm2_5 = xmm0_5[2]
    float xmm3_6 = xmm0_5[3]
    float xmm0_25[0x4]
    
    if (xmm2_5 > xmm3_6 || eax_8 f> edx_5)
        xmm0_25 = data_7ff530
    else
        xmm0_5[0] = xmm2_5
        xmm0_5[1] = eax_8
        xmm0_5[2] = xmm3_6
        xmm0_5[3] = edx_5
        xmm0_25 = xmm0_5
    
    float xmm0_26 = var_24
    float xmm3_7 = xmm0_25[0]
    *(arg3 + 0x16b4) = xmm0_26
    float var_20
    *(arg3 + 0x16b8) = var_20
    float xmm1_8 = xmm0_25[2]
    float var_1c
    *(arg3 + 0x16bc) = var_1c - xmm0_26
    float xmm2_8 = xmm0_25[1]
    *(arg3 + 0x16c8) = xmm2_8
    float var_18
    *(arg3 + 0x16c0) = var_18 - var_20
    float xmm0_30 = xmm0_25[3] - xmm2_8
    *(arg3 + 0x16cc) = xmm1_8 - xmm3_7
    *(arg3 + 0x16c4) = xmm3_7
    *(arg3 + 0x16d0) = xmm0_30
    *(arg3 + 0x1640) = arg2[2]
    *(arg3 + 0x1650) = arg2[3]
    *(arg3 + 0x1660) = arg2[4]
    *(arg3 + 0x1670) = arg2[5].d
    int128_t var_50 = data_bf21e8
    int128_t var_40_2 = data_bf21f8
    var_40_2:0xc.d = 0
    var_40_2:8.d = xmm2_8
    float xmm2_10 = var_88_1 f- *(arg3 + 0x490)
    var_40_2:4.d = xmm3_7
    float xmm2_11
    
    if (*(arg3 + 0x480) f+ *(arg3 + 0x47c) > xmm2_10 || *(arg3 + 0x470) s> 1)
        float xmm0_38 = sub_67f6b0(arg3 + 0x404, var_88_1 f- *(arg3 + 0x48c))
        float xmm0_39 = sub_67f6b0(arg3 + 0x440, xmm2_10)
        xmm2_11 = sub_64c3c0(arg3 + 0x47c, xmm2_10) * (xmm0_39 - xmm0_38) + xmm0_38
    else
        xmm2_11 = *(arg3 + 0x440)
    
    float xmm2_14 = xmm2_11 * 0.5f
    float xmm0_44 = sub_4ae0f0(ebp_1, xmm2_14)
    var_50:0xc.d = xmm0_44
    float xmm1_15 = xmm0_44 * 0f
    var_50:4.d = xmm1_15
    var_50:8.d = xmm1_15
    var_40_2.d = sub_4ae0d0(ebp_1, xmm2_14)
    int128_t* var_104_3 = &var_70
    int128_t var_f0
    result = sub_4eb600(&var_70, &var_50, &var_f0)
    *(arg3 + 0x1620) = var_f0
    *(arg3 + 0x1630) = xmm0_14
    char const* const ecx_11
    
    if (not(1000000f f> __andps_xmmxud_memxud(*(arg3 + 0x1634), data_8937a0.o)))
        char const* const var_104_4 = "UI2UpdateComponents"
        var_110_2:8.d = 0x2515
        ecx_11 = "Abs(ui.worldInfo.transform.t.x) < 1000000.0f"
    label_65bda2:
        var_110_2:4.d = "C:\x\ax2017\Engine\UI2.cpp"
        sub_63b870(result, &data_801800, ecx_11)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm3_8 = var_88_1
    float xmm1_19 = xmm3_8 f- *(arg3 + 0x2e0)
    float xmm2_15
    
    if (*(arg3 + 0x2d0) f+ *(arg3 + 0x2cc) > xmm1_19 || *(arg3 + 0x2c0) s> 1)
        float xmm0_51 = sub_67f6b0(arg3 + 0x254, xmm3_8 f- *(arg3 + 0x2dc))
        float xmm0_52 = sub_67f6b0(arg3 + 0x290, xmm1_19)
        xmm3_8 = var_88_1
        xmm2_15 = sub_64c3c0(arg3 + 0x2cc, xmm1_19) * (xmm0_52 - xmm0_51) + xmm0_51
    else
        xmm2_15 = *(arg3 + 0x290)
    
    *(arg3 + 0x1674) = *(arg2 + 0x54)
    *(arg3 + 0x1678) = *(arg2 + 0x58)
    *(arg3 + 0x167c) = *(arg2 + 0x5c)
    *(arg3 + 0x1680) = xmm2_15 f* arg2[6].d
    bool cond:4_1 = *(arg3 + 0x11) == 0
    *(arg3 + 0x1684) = *(arg2 + 0x64)
    
    if (not(cond:4_1) && arg4 != 0)
        *(arg3 + 0x1680) = 0
    
    uint32_t eax_15 = sub_67d310(arg3 + 0xaf4, xmm3_8)
    int32_t eax_16 = sub_67d310(arg3 + 0xb84, var_88_1)
    int32_t ecx_18
    
    if (eax_15 == 0)
        ecx_18 = *(arg2 + 0x74) + eax_16
    else if (eax_15 s>= 0)
        ecx_18 = eax_16 + eax_15
    else
        ecx_18 = *(arg2 + 0x74) + eax_16 + eax_15
    
    *(arg3 + 0x1694) = ecx_18
    int32_t ecx_21 = *(arg2 + 0x78)
    *(arg3 + 0x1698) = ecx_21
    
    if (*(arg2 + 0xcc) != 0 || *(arg3 + 0x15f4) != 0)
        result.b = 1
    else
        result.b = 0
    
    *(arg3 + 0x16ec) = result.b
    
    if (ecx_21 == 0xffffffff)
        char const* const var_104_5 = "UI2UpdateComponents"
        var_110_2:8.d = 0x252e
        ecx_11 = "ui.worldInfo.sublayer != -1"
        goto label_65bda2

CookieCheckFunction(result)
return result
