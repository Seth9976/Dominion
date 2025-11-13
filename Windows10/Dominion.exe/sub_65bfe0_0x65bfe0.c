// 函数: sub_65bfe0
// 地址: 0x65bfe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float var_3c[0x5]
float* eax_3 = sub_64c550(arg3 + 0x14, *(data_147abe8 + 0x2c), &var_3c)
float xmm2_3 = (eax_3[3] - eax_3[1]) / 100f
*arg2 = (eax_3[2] - *eax_3) / 100f
arg2[1] = xmm2_3
float xmm2_4 = *(arg3 + 0x1620)
float xmm4 = *(arg3 + 0x1630)
float xmm1_5 = *(arg3 + 0x16cc) * 0.5f * xmm2_4
float xmm7 = *(arg3 + 0x1628)
float xmm0_1 = xmm4 * xmm4
float xmm0_2 = *(arg3 + 0x1624)
float xmm1_8 = *(arg3 + 0x16d0) * 0.5f * xmm2_4
float xmm2_5 = xmm2_4 * 0f
float xmm6_1 = xmm0_2 * xmm0_2
float xmm1_9 = *(arg3 + 0x162c)
float xmm2_7 = xmm7 * xmm0_2
float xmm0_4 = xmm1_9 * xmm4
float xmm3_1 = xmm1_9 * xmm1_9
float xmm5_1 = xmm7 * xmm7
float xmm4_5 = (xmm2_7 - xmm0_4) * (xmm1_8 + xmm1_8) + (xmm6_1 + xmm0_1 - xmm5_1 - xmm3_1) * xmm1_5
    + (xmm1_9 f* *(arg3 + 0x1624) + xmm7 f* *(arg3 + 0x1630)) * (xmm2_5 + xmm2_5)
float xmm4_6 = xmm4_5 f+ *(arg3 + 0x1634)
float xmm0_20 = (xmm0_4 + xmm2_7) * (xmm1_5 + xmm1_5) + (xmm0_1 - xmm6_1 + xmm5_1 - xmm3_1) * xmm1_8
    + (*(arg3 + 0x162c) * xmm7 - *(arg3 + 0x1624) * xmm4) * (xmm2_5 + xmm2_5)
float var_50_1 = xmm0_20 f+ *(arg3 + 0x1638)
float var_54 = xmm4_6
float* result = sub_655800(&var_3c)
*arg4 = (*result).d
arg4[1] = xmm4_6
float xmm0_25 = *(arg3 + 0x1620)
float xmm1_27 = arg2[1] * 0.0500000007f * xmm0_25 f* data_cf65e0:0xc
*arg2 = *arg2 * 0.0500000007f * xmm0_25 f* data_cf65e0:0xc
arg2[1] = xmm1_27
CookieCheckFunction(result)
return result
