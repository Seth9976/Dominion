// 函数: sub_4ac9c0
// 地址: 0x4ac9c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
float xmm1 = *arg2
float xmm6 = *arg3
float xmm7_2 = arg2[2] f* arg3[1] - arg2[1] f* arg3[2]
float xmm1_1 = xmm1 * arg3[1]
float var_3c = xmm1 * arg3[2]
float xmm2_1 = var_3c - xmm6 f* arg2[2]
float xmm6_2 = xmm6 f* arg2[1] - xmm1_1
var_3c = xmm2_1
float xmm0_10 = sub_4ac580(ebp, xmm2_1 * xmm2_1 + xmm7_2 * xmm7_2 + xmm6_2 * xmm6_2)
float var_20
float eax_2
int64_t xmm0_11

if (9.99999975e-06f <= xmm0_10)
    float xmm0_12 = 1f / (xmm0_10 + 9.99999975e-06f)
    float xmm1_9 = var_3c * xmm0_12
    float xmm3_2 = xmm7_2 * xmm0_12
    float xmm2_3 = xmm6_2 * xmm0_12
    var_3c = xmm1_9
    float xmm1_14 = 1f / sub_4ac580(ebp, xmm1_9 * xmm1_9 + xmm3_2 * xmm3_2 + xmm2_3 * xmm2_3)
    var_20 = xmm1_14 * xmm3_2
    float var_1c_1 = xmm1_14 * var_3c
    xmm0_11 = var_20.q
    eax_2 = xmm1_14 * xmm2_3
else
    xmm0_11 = 0
    eax_2 = 0f

float var_18_2 = eax_2
var_20.q = xmm0_11
void var_30
*arg4 = *sub_4ac840(&var_30, 0x7fef20, 0x7fef2c, &var_30, arg3, &var_20)
CookieCheckFunction(arg4)
return arg4
