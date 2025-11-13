// 函数: __87except
// 地址: 0x5a8a20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
void* eax_2 = data_147b06c
int128_t var_64
__builtin_memcpy(&var_64, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x20)
float xmm4 = *(eax_2 + 0x124)
float xmm1_1 = *(eax_2 + 0x12c) * 0f
float xmm3_1 = *(eax_2 + 0x14c) * 0f
float xmm1_3 = *(eax_2 + 0x13c) * 0f
float xmm7 = *(eax_2 + 0x138)
float xmm2 = *(eax_2 + 0x134)
float xmm5 = *(eax_2 + 0x148)
float xmm6 = *(eax_2 + 0x144)
float xmm0_3 = xmm2 * *arg3
float var_80[0x4] = *(eax_2 + 0x128) * arg3[1] + xmm4 * *arg3 + xmm1_1 f+ *(eax_2 + 0x130)
float xmm0_6 = arg3[2]
float xmm3_3 = xmm0_6 * xmm4
float xmm2_1 = *(eax_2 + 0x128)
float xmm4_2 = xmm2 * xmm0_6
float xmm0_7 = xmm0_6 * xmm6
float xmm1_19 = arg3[1]
float var_38 = xmm2_1 * xmm1_19 + xmm3_3 + xmm1_1 f+ *(eax_2 + 0x130)
float var_34 = xmm7 * xmm1_19 + xmm4_2 + xmm1_3 f+ *(eax_2 + 0x140)
float var_30 = xmm5 * xmm1_19 + xmm0_7 + xmm3_1 f+ *(eax_2 + 0x150)
float xmm0_23 = arg3[3]
float xmm1_21 = xmm0_23 * xmm2_1
float xmm0_24 = xmm0_23 * xmm5
float xmm5_1 = *arg3
float xmm2_3 = xmm0_23 * xmm7
float xmm7_1 = *(eax_2 + 0x140)
int32_t var_b4 = 0
int32_t var_b8 = data_171d8d4
float var_2c = xmm5_1 f* *(eax_2 + 0x124) + xmm1_21 + xmm1_1 f+ *(eax_2 + 0x130)
float var_20 = xmm1_21 + xmm3_3 + xmm1_1 f+ *(eax_2 + 0x130)
float var_28 = xmm5_1 f* *(eax_2 + 0x134) + xmm2_3 + xmm1_3 + xmm7_1
float xmm0_35 = *(eax_2 + 0x150)
float var_1c = xmm2_3 + xmm4_2 + xmm1_3 + xmm7_1
int64_t xmm0_36 = xmm7 * arg3[1] + xmm0_3 + xmm1_3 f+ *(eax_2 + 0x140)
int32_t var_98_1 = 0
float var_18 = xmm0_24 + xmm0_7 + xmm3_1 + xmm0_35
float xmm1_29[0x4] = var_80
var_80[3] = xmm5 * arg3[1] + xmm6 * *arg3 + xmm3_1 f+ *(eax_2 + 0x150)
int32_t var_a4 = 0x3f800000
int32_t var_9c = data_8d2fcc
int64_t xmm1_30 = _mm_unpacklo_ps(xmm1_29, xmm0_36)
float var_24 = xmm5_1 * xmm6 + xmm0_24 + xmm3_1 + xmm0_35
int64_t var_44 = xmm1_30
var_80[1].q = xmm1_30
int64_t var_ac = 0
uint32_t result =
    sub_646580(&var_9c, &var_64, &var_44, &var_9c, 0, &var_80[1], &var_ac, arg2, arg4, var_b8)
CookieCheckFunction(result)
return result
