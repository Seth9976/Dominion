// 函数: sub_6fde90
// 地址: 0x6fde90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
*arg3 = 0x3f800000
*(arg3 + 0x14) = *arg4
arg3[7] = arg4[1].d
float xmm1_1 = arg2[1] f- *(arg4 + 4)
float xmm2_1 = *arg2 f- *arg4
float xmm3_1 = arg2[2] f- arg4[1].d
int32_t __saved_ebp
float xmm1_6 = 1f / sub_4ac580(&__saved_ebp, xmm1_1 * xmm1_1 + xmm2_1 * xmm2_1 + xmm3_1 * xmm3_1)
float var_18 = xmm1_6 * xmm2_1
float var_14 = xmm1_6 * xmm1_1
float var_10 = xmm1_6 * xmm3_1
void var_28
int128_t* result = sub_4ac9c0(&var_28, arg5, &var_18, &var_28)
*(arg3 + 4) = *result
CookieCheckFunction(result)
return result
