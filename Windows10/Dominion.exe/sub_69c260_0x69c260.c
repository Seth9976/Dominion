// 函数: sub_69c260
// 地址: 0x69c260
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
memset(arg4, 0, 0x60)
float xmm2_1 = arg3[2] - *arg3
float xmm3_1 = arg3[3] - arg3[1]
xmm2_1 f- 0
int32_t eax_2
eax_2:1.b =
    (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2 | (xmm2_1 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
bool p_3

if (not(p_1))
    xmm3_1 f- 0
    eax_2:1.b = (xmm3_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2
        | (xmm3_1 < 0f ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

if (p_1 || p_3)
    float* eax_3 = arg2
    float xmm1_2 = eax_3[2] - *eax_3
    float xmm0_2 = eax_3[3] - eax_3[1]
    float xmm2_3 = _mm_max_ss(xmm2_1 / xmm1_2, xmm3_1 / xmm0_2)
    float xmm1_3 = xmm1_2 * xmm2_3
    float xmm0_3 = xmm0_2 * xmm2_3
    float eax_4
    float edx
    eax_4, edx = sub_6b7590(5)
    float xmm1_5 = arg3[2] - *arg3
    arg4[2] = 0x3f800000
    float xmm1_7 = arg3[3] - arg3[1]
    float xmm4_4 = xmm1_5 * eax_4 + *arg3 - ((xmm1_3 - 0f) * eax_4 + 0f)
    float xmm3_5 = xmm1_7 * edx + arg3[1]
    *arg4 = xmm4_4
    float xmm3_6 = xmm3_5 - ((xmm0_3 - 0f) * edx + 0f)
    xmm2_3 f- 0
    arg4[1] = xmm3_6
    eax_4:1.b = (xmm2_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_3, 0f) ? 1 : 0) << 2
        | (xmm2_3 < 0f ? 1 : 0)
    arg4[6] = (xmm4_4 + xmm1_3 + xmm4_4) * 0.5f
    arg4[3] = xmm2_3
    arg4[7] = (xmm3_6 + xmm0_3 + xmm3_6) * 0.5f
    bool p_5 = unimplemented  {test ah, 0x44}
    int128_t* eax_5
    
    if (p_5)
        float xmm1_12 = 1f / xmm2_3
        float xmm0_14 = xmm1_5 * xmm1_12
        float xmm0_16 = xmm1_7 * xmm1_12
        float eax_6
        float edx_1
        eax_6, edx_1 = sub_6b7590(5)
        eax_5 = arg2
        float xmm3_11 = (*(eax_5 + 8) f- *eax_5) * eax_6 f+ *eax_5 - ((xmm0_14 - 0f) * eax_6 + 0f)
        float var_28_1 = xmm3_11 + xmm0_14
        float xmm2_12 =
            (*(eax_5 + 0xc) f- *(eax_5 + 4)) * edx_1 f+ *(eax_5 + 4) - ((xmm0_16 - 0f) * edx_1 + 0f)
        float var_2c_1 = xmm2_12
        float var_24_1 = xmm2_12 + xmm0_16
        *(arg4 + 0x2c) = xmm3_11.o
    else
        eax_5 = arg2
        __builtin_memset(&arg4[0xb], 0, 0x20)
    
    *(arg4 + 0x4c) = *eax_5

CookieCheckFunction(arg4)
return arg4
