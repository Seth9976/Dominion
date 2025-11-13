// 函数: sub_5a8d20
// 地址: 0x5a8d20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
float xmm2 = data_b4a5ac
float xmm3 = data_b4a5b0
void* eax_2 = data_147b06c
float xmm5 = arg3[4]
float xmm4 = arg3[5]
float xmm0_1 = arg3[1] f* xmm3
float var_34 = *arg3 * xmm2
float var_30 = xmm0_1
float var_2c = arg3[2] f* xmm2
float xmm1_5 = xmm5 * xmm2
float var_28 = arg3[3] f* xmm3
float xmm0_5 = xmm4 * xmm3
float var_24 = xmm1_5
float var_1c = xmm1_5
float var_20 = xmm0_5
float var_18 = xmm0_5
int128_t xmm1_7 = *(eax_2 + 0x13c) * 0f
float xmm5_2 = *(eax_2 + 0x12c) * 0f
float xmm4_2 = *(eax_2 + 0x14c) * 0f
float xmm7 = *(eax_2 + 0x130)
float var_90 = xmm1_7
float var_80[0x4] = *(eax_2 + 0x128) f* arg3[1]
float xmm0_9 = *(eax_2 + 0x124) f* *arg3
int128_t var_a0 = xmm1_7
float xmm6 = *(eax_2 + 0x144)
float xmm2_1 = *(eax_2 + 0x150)
float xmm3_1 = *(eax_2 + 0x140)
var_80 = var_80.d f+ xmm0_9
float xmm5_4 = *(eax_2 + 0x138) f* arg3[1]
int32_t xmm1_10 = var_a0.d
var_80 = var_80.d + xmm5_2 + xmm7
int64_t xmm5_7 = xmm5_4 + *(eax_2 + 0x134) f* *arg3 f+ xmm1_10 + xmm3_1
float var_58 = *(eax_2 + 0x124) f* arg3[2] + *(eax_2 + 0x128) f* arg3[3] + xmm5_2 + xmm7
int32_t* var_a4 = arg3
int32_t var_a8 = data_171d8d8
int32_t* var_b0 = data_171d8c0
float var_54 = *(eax_2 + 0x134) f* arg3[2] + *(eax_2 + 0x138) f* arg3[3] + var_90 + xmm3_1
float var_50 = xmm6 f* arg3[2] + *(eax_2 + 0x148) f* arg3[3] + xmm4_2 + xmm2_1
float xmm1_35 = *(eax_2 + 0x128) * xmm4 + *(eax_2 + 0x124) * xmm5 + xmm5_2 + xmm7
float xmm1_40 = *(eax_2 + 0x138) * xmm4 + *(eax_2 + 0x134) * xmm5 + var_90 + xmm3_1
float var_48 = xmm1_40
float xmm0_31 = *(eax_2 + 0x148) * xmm4 + xmm6 f* arg3[4] + xmm4_2 + xmm2_1
float var_3c = xmm1_40
float var_4c = xmm1_35
float var_40 = xmm1_35
float var_44 = xmm0_31
float var_38 = xmm0_31
float xmm0_32[0x4] = var_80
var_80[3] = xmm6 f* *arg3 + *(eax_2 + 0x148) f* arg3[1] + xmm4_2 + xmm2_1
var_a0:0xc.d = 0x3f800000
int64_t xmm0_33 = _mm_unpacklo_ps(xmm0_32, xmm5_7)
int64_t var_64 = xmm0_33
var_80[1].q = xmm0_33
var_a0:4.q = 0
uint32_t result = sub_646580(&var_80[1], &var_34, &var_64, &data_bf23ac, 0, &var_80[1], &var_a0:4, 
    var_b0, arg4, var_a8)
CookieCheckFunction(result)
return result
