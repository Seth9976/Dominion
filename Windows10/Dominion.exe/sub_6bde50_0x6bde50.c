// 函数: sub_6bde50
// 地址: 0x6bde50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
uint32_t var_14 = __security_cookie ^ &__saved_ebp
int32_t xmm1 = (zx.o(0)).d
float xmm2[0x2] = *(arg2 + 0x10)

if (not(xmm2 f<= 0))
    double var_68_1 = _mm_cvtps_pd(*(arg3 + 0x14))
    long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm2))
    _CIfmod()
    xmm1 = (zx.o(0)).d
    float xmm0_4 = fconvert.s(x87_r6_1)
    
    if (not(0f f<= *(arg3 + 0x14)))
        xmm0_4 = xmm0_4 f+ *(arg2 + 0x10)
    
    *(arg3 + 0x14) = xmm0_4

float xmm2_1[0x2] = *(arg2 + 0x14)
xmm2_1 f- 0
uint32_t result
result:1.b = (xmm2_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
    | (xmm2_1 f< 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    int64_t var_68_3 = _mm_cvtps_pd(*(arg3 + 0x18))
    unimplemented  {fld st0, qword [ebp-0x58]}
    int64_t var_68_4 = _mm_cvtps_pd(xmm2_1)
    unimplemented  {fld st0, qword [ebp-0x58]}
    _CIfmod()
    xmm1 = (zx.o(0)).d
    float var_60_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x50], st0})
    unimplemented  {fstp dword [ebp-0x50], st0}
    float xmm0_8 = var_60_2
    
    if (not(0f f<= *(arg3 + 0x18)))
        xmm0_8 = xmm0_8 f+ *(arg2 + 0x14)
    
    *(arg3 + 0x18) = xmm0_8

float xmm2_2[0x2] = *(arg2 + 0x18)
xmm2_2 f- 0
result:1.b = (xmm2_2 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_2, 0f) ? 1 : 0) << 2
    | (xmm2_2 f< 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}

if (p_3)
    int64_t var_68_5 = _mm_cvtps_pd(*(arg3 + 0x1c))
    unimplemented  {fld st0, qword [ebp-0x58]}
    int64_t var_68_6 = _mm_cvtps_pd(xmm2_2)
    unimplemented  {fld st0, qword [ebp-0x58]}
    result = _CIfmod()
    xmm1 = (zx.o(0)).d
    float var_60_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x50], st0})
    unimplemented  {fstp dword [ebp-0x50], st0}
    float xmm0_12 = var_60_3
    
    if (not(0f f<= *(arg3 + 0x1c)))
        xmm0_12 = xmm0_12 f+ *(arg2 + 0x18)
    
    *(arg3 + 0x1c) = xmm0_12

float xmm4 = *(arg2 + 0x20)
void* ecx_1

if (xmm4 <= 0f)
    ecx_1 = arg4
else
    float xmm3_1[0x4] = data_cf6668
    float eax_1 = data_cf6680
    float xmm1_2 = *(arg2 + 0x1c) * 0.5f
    float xmm5_2 = xmm4 * 0.5f
    int64_t xmm0_13 = data_cf6678
    float xmm6_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55)
    float xmm2_4 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff)
    float xmm1_4 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
    float xmm7_3 = xmm6_2 f* xmm3_1 - xmm2_4 * xmm1_4
    float xmm5_4 = xmm1_4 * xmm6_2 + xmm2_4 f* xmm3_1
    float xmm7_6 = (xmm7_3 + xmm7_3) * xmm5_2 f+ xmm0_13.d
    float xmm0_23 = (xmm5_4 + xmm5_4) * xmm5_2 + eax_1
    float xmm6_8 = (xmm6_2 * xmm6_2 - xmm1_4 * xmm1_4 + xmm2_4 * xmm2_4 - xmm3_1 f* xmm3_1)
        * xmm5_2 f+ xmm0_13:4.d
    float xmm0_25 = *(arg3 + 0x18) - xmm6_8
    float xmm0_27 = sub_4d5cb0(xmm0_25 / xmm4)
    float xmm2_8[0x2] = *(arg3 + 0x14) - xmm7_6 + xmm0_27 * 27.7700005f
    float xmm1_10 = *(arg3 + 0x1c) - xmm0_23 + xmm0_27 * 36.1300011f
    int64_t var_68_7 = _mm_cvtps_pd(*(arg2 + 0x20))
    int64_t var_78_1 = _mm_cvtps_pd(xmm2_8)
    unimplemented  {fld st0, qword [ebp-0x68]}
    unimplemented  {fld st0, qword [ebp-0x58]}
    _CIfmod()
    var_78_1:4.d = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
    unimplemented  {fstp dword [ebp-0x64], st0}
    float xmm0_32 = var_78_1:4.d
    
    if (not(0f <= xmm2_8))
        xmm0_32 = xmm0_32 f+ *(arg2 + 0x20)
    
    float xmm0_33 = xmm0_32 - xmm5_2
    int64_t var_78_2 = _mm_cvtps_pd(xmm0_25)
    unimplemented  {fld st0, qword [ebp-0x68]}
    unimplemented  {fld st0, qword [ebp-0x58]}
    _CIfmod()
    var_78_2:4.d = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
    unimplemented  {fstp dword [ebp-0x64], st0}
    float xmm0_36 = var_78_2:4.d
    
    if (not(0f <= xmm0_25))
        xmm0_36 = xmm0_36 f+ *(arg2 + 0x20)
    
    var_78_2:4.d = xmm0_36 - xmm5_2
    int64_t var_80_1 = _mm_cvtps_pd(xmm1_10)
    unimplemented  {fld st0, qword [ebp-0x70]}
    unimplemented  {fld st0, qword [ebp-0x58]}
    _CIfmod()
    float var_7c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
    unimplemented  {fstp dword [ebp-0x6c], st0}
    float xmm1_11 = var_7c_2
    
    if (not(0f <= xmm1_10))
        xmm1_11 = xmm1_11 f+ *(arg2 + 0x20)
    
    float xmm1_12 = xmm1_11 - xmm5_2
    *(arg3 + 0x14) = xmm7_6 + xmm0_33
    float xmm0_42 = var_78_2:4.d
    *(arg3 + 0x18) = xmm6_8 + xmm0_42
    *(arg3 + 0x1c) = xmm0_23 + xmm1_12
    float xmm0_48 = (sub_4ac580(ebp_1, xmm0_42 * xmm0_42 + xmm0_33 * xmm0_33 + xmm1_12 * xmm1_12)
        - xmm1_2) / (xmm5_2 - xmm1_2)
    xmm1 = (zx.o(0)).d
    float xmm0_49
    
    if (not(0 f< xmm0_48))
        xmm0_49 = 1f
    else if (xmm0_48 < 1f)
        xmm0_49 = sub_4ae110(1, xmm0_48, 1f, (zx.o(0)).d)
        xmm1 = (zx.o(0)).d
    else
        xmm0_49 = (zx.o(0)).d
    
    ecx_1 = arg4
    float xmm2_14 = _mm_cvtepi32_ps(zx.o(*(ecx_1 + 3))) * xmm0_49
    
    if (not(xmm2_14 <= 0.999000013f))
        result.b = 0xff
        *(ecx_1 + 3) = 0xff
    else if (0.00100000005f <= xmm2_14)
        result = int.d(xmm2_14 * 255f + 0.5f)
        *(ecx_1 + 3) = result.b
    else
        result.b = 0
        *(ecx_1 + 3) = 0

float xmm4_1 = *(arg2 + 0x44)
float xmm2_17 = *(arg2 + 0x48)

if (not(xmm2_17 <= xmm4_1))
    float xmm0_52 = (*(arg3 + 0x1c) - xmm4_1) / (xmm2_17 - xmm4_1)
    int32_t xmm0_53
    
    if (not(0 f< xmm0_52))
        xmm0_53 = (zx.o(0)).d
    else if (xmm0_52 < 1f)
        xmm0_53 = sub_4ae110(1, xmm0_52, xmm1, 1f)
        ecx_1 = arg4
    else
        xmm0_53 = 0x3f800000
    
    float xmm2_22 = _mm_cvtepi32_ps(zx.o(*(ecx_1 + 3))) f* xmm0_53
    float xmm2_23
    
    if (0 f<= xmm2_22)
        xmm2_23 = xmm2_22 + 0.5f
    else
        xmm2_23 = xmm2_22 - 0.5f
    
    result = int.d(xmm2_23)
    *(ecx_1 + 3) = result.b

if (not(*(arg2 + 0x50) f<= *(arg2 + 0x4c)))
    int128_t var_40_2 = data_cf6668
    int64_t xmm0_56 = data_cf6678
    float xmm1_18 = *(arg3 + 0x1c) - data_cf6680
    float xmm0_58 = *(arg3 + 0x18) f- xmm0_56:4.d
    float xmm2_25 = *(arg3 + 0x14) f- xmm0_56.d
    float xmm3_9 = (sub_4ac580(ebp_1, xmm0_58 * xmm0_58 + xmm2_25 * xmm2_25 + xmm1_18 * xmm1_18) f-
        *(arg2 + 0x4c)) / (*(arg2 + 0x50) f- *(arg2 + 0x4c))
    int32_t xmm0_65 = 0x3f800000
    
    if (not(0 f>= xmm3_9))
        if (xmm3_9 < 1f)
            xmm0_65 = sub_4ae110(1, xmm3_9, 1f, (zx.o(0)).d)
        else
            xmm0_65 = (zx.o(0)).d
    
    float xmm2_30 = _mm_cvtepi32_ps(zx.o(*(arg4 + 3))) f* xmm0_65
    float xmm2_31
    
    if (0 f<= xmm2_30)
        xmm2_31 = xmm2_30 + 0.5f
    else
        xmm2_31 = xmm2_30 - 0.5f
    
    result = int.d(xmm2_31)
    *(arg4 + 3) = result.b

if (not(*(arg2 + 0x58) f<= *(arg2 + 0x54)))
    int128_t var_40_3 = data_cf6668
    int64_t xmm0_69 = data_cf6678
    float xmm1_22 = *(arg3 + 0x1c) - data_cf6680
    float xmm0_71 = *(arg3 + 0x18) f- xmm0_69:4.d
    float xmm2_33 = *(arg3 + 0x14) f- xmm0_69.d
    float xmm3_12 = (
        sub_4ac580(ebp_1, xmm0_71 * xmm0_71 + xmm2_33 * xmm2_33 + xmm1_22 * xmm1_22) f-
        *(arg2 + 0x54)) / (*(arg2 + 0x58) f- *(arg2 + 0x54))
    int32_t xmm1_24
    
    if (0 f< xmm3_12)
        xmm1_24 = 0x3f800000
        
        if (not(xmm3_12 >= 1f))
            xmm1_24 = sub_4ae110(1, xmm3_12, (zx.o(0)).d, 1f)
    else
        xmm1_24 = (zx.o(0)).d
    
    float xmm2_38 = _mm_cvtepi32_ps(zx.o(*(arg4 + 3))) f* xmm1_24
    float xmm2_39
    
    if (0 f<= xmm2_38)
        xmm2_39 = xmm2_38 + 0.5f
    else
        xmm2_39 = xmm2_38 - 0.5f
    
    result = int.d(xmm2_39)
    *(arg4 + 3) = result.b

CookieCheckFunction(result)
return result
