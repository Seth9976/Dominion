// 函数: sub_654660
// 地址: 0x654660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
memset(arg4, 0, 0x34)
*(arg4 + 4) = *arg5
float xmm6_1 = arg3[2] - *arg3
float xmm5_1 = arg3[3] - arg3[1]
xmm6_1 f- 0
int32_t eax_2
eax_2:1.b =
    (xmm6_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_1, 0f) ? 1 : 0) << 2 | (xmm6_1 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
bool p_3

if (not(p_1))
    xmm5_1 f- 0
    eax_2:1.b = (xmm5_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_1, 0f) ? 1 : 0) << 2
        | (xmm5_1 < 0f ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

if (p_1 || p_3)
    float xmm4_4 = _mm_min_ss(
        _mm_max_ss(xmm6_1 / (*(arg5 + 8) f- *arg5), xmm5_1 / (*(arg5 + 0xc) f- *(arg5 + 4))), 
        _mm_min_ss(xmm6_1 / (arg6[2] - *arg6), xmm5_1 / (arg6[3] - arg6[1])))
    float xmm0_3 = 1f / xmm4_4
    *arg4 = xmm4_4
    float xmm1_7 = (arg3[2] - *arg3) * xmm0_3
    float xmm2_5 = (arg3[3] - arg3[1]) * xmm0_3
    float eax_4
    float edx
    eax_4, edx = sub_6b7590(5)
    float xmm2_10 = (*(arg5 + 8) f- *arg5) * eax_4 f+ *arg5 - ((xmm1_7 - 0f) * eax_4 + 0f)
    float xmm2_15 = (*(arg5 + 0xc) f- *(arg5 + 4)) * edx f+ *(arg5 + 4) - ((xmm2_5 - 0f) * edx + 0f)
    float xmm0_12 = 1f / *arg4
    float xmm1_10 = (arg2[2] - *arg2) * xmm0_12
    float xmm2_18 = (arg2[3] - arg2[1]) * xmm0_12
    float eax_6
    float edx_1
    eax_6, edx_1 = sub_6b7590(5)
    float xmm2_19 = *arg5
    float xmm4_9 = (*(arg5 + 8) - xmm2_19) * eax_6 + xmm2_19 - ((xmm1_10 - 0f) * eax_6 + 0f)
    float xmm3_7 =
        (*(arg5 + 0xc) f- *(arg5 + 4)) * edx_1 f+ *(arg5 + 4) - ((xmm2_18 - 0f) * edx_1 + 0f)
    arg4[5] = xmm2_10 - xmm2_19
    arg4[6] = xmm2_15 f- *(arg5 + 4)
    arg4[7] = xmm1_7 + xmm2_10 f- *(arg5 + 8)
    arg4[8] = xmm2_5 + xmm2_15 f- *(arg5 + 0xc)
    arg4[9] = xmm4_9 f- *arg5
    arg4[0xa] = xmm3_7 f- *(arg5 + 4)
    arg4[0xb] = xmm1_10 + xmm4_9 f- *(arg5 + 8)
    arg4[0xc] = xmm2_18 + xmm3_7 f- *(arg5 + 0xc)

CookieCheckFunction(arg4)
return arg4
