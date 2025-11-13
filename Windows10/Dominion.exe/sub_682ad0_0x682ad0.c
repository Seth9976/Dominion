// 函数: sub_682ad0
// 地址: 0x682ad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float eax_3
float edx
eax_3, edx = sub_5a0e40()
void* ecx = data_147abe4
float xmm2_3 = (arg4[2] - *arg4) * eax_3 * 0.5f
float xmm1_3 = (arg4[3] - arg4[1]) * edx * 0.5f
float xmm0_1 = *(ecx + 0x20) - xmm2_3
float xmm7 = arg2[5]
float xmm4_1 = *(ecx + 0x20) - xmm2_3
float xmm2_4 = xmm2_3 f+ *(ecx + 0x20)
float xmm6_1 = xmm2_3 f+ *(ecx + 0x20)
float xmm3_1 = *(ecx + 0x24) - xmm1_3
float xmm5_1 = *(ecx + 0x24) - xmm1_3
float xmm0_3 = xmm1_3 f+ *(ecx + 0x24)
float xmm1_4 = xmm1_3 f+ *(ecx + 0x24)
float xmm3_2 = arg2[3]
float xmm4_2 = arg2[1]
float xmm1_7 = arg2[4] f* xmm3_1 + xmm3_2 * xmm4_1
float xmm0_9 = *arg2 * xmm6_1
float var_4c = arg2[1] f* xmm3_1 + *arg2 * xmm4_1 f+ arg2[2]
float xmm6_2 = *arg2
float var_48 = xmm1_7 + xmm7
float var_44 = xmm4_2 * xmm5_1 + xmm0_9 f+ arg2[2]
float var_40 = arg2[4] f* xmm5_1 + xmm3_2 * xmm6_1 + xmm7
float var_3c = xmm4_2 * xmm0_3 + xmm6_2 * xmm0_1 f+ arg2[2]
int32_t xmm2_17 = arg4[2]
float var_38 = arg2[4] f* xmm0_3 + xmm3_2 * xmm0_1 + xmm7
int32_t var_24 = xmm2_17
int32_t var_14 = xmm2_17
float var_30 = arg2[4] f* xmm1_4 + xmm3_2 * xmm2_4 + xmm7
int32_t xmm0_20 = arg4[1]
int32_t var_28 = xmm0_20
int32_t var_20 = xmm0_20
int32_t xmm0_21 = arg4[3]
int32_t var_18 = xmm0_21
float var_34 = xmm4_2 * xmm1_4 + xmm6_2 * xmm2_4 f+ arg2[2]
float xmm1_21 = *arg4
float var_2c = xmm1_21
float var_1c = xmm1_21
int32_t var_10 = xmm0_21
uint32_t result = sub_6867a0(arg4, &var_2c, &var_4c, arg5, 0, arg3, arg6)
CookieCheckFunction(result)
return result
