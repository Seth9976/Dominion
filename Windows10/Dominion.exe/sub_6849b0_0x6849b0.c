// 函数: sub_6849b0
// 地址: 0x6849b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
float xmm7[0x4] = *arg2
float xmm6 = *arg3
float xmm3 = arg3[1]
float xmm0_1 = _mm_shuffle_ps(xmm7, xmm7, 0x55)
int128_t xmm1_1 = arg3[9] f* xmm0_1
float xmm3_1 = xmm3 * xmm0_1
int32_t* esi = arg7
float xmm2_1 = arg3[5] f* xmm0_1
float xmm6_1 = xmm6 f* xmm7
float xmm4_1 = arg3[8] f* xmm7
float xmm5_1 = arg3[4] f* xmm7
int128_t var_60 = xmm1_1
float xmm0_4[0x4] = xmm6_1 + xmm3_1 f+ arg3[3]
float xmm7_3 = xmm5_1 + xmm2_1 f+ arg3[7]
float xmm0_7 = xmm4_1 f+ xmm1_1 f+ arg3[0xb]
float xmm0_8 = *(arg2 + 8)
float xmm7_5 = *arg3 * xmm0_8
float xmm7_7 = arg3[4] f* xmm0_8
float xmm7_9 = arg3[8] f* xmm0_8
float var_38 = xmm7_5 + xmm3_1 f+ arg3[3]
float var_34 = xmm7_7 + xmm2_1 f+ arg3[7]
float var_30 = xmm7_9 f+ var_60.d f+ arg3[0xb]
float xmm0_18 = *(arg2 + 0xc)
float xmm1_4 = arg3[1] f* xmm0_18
float xmm7_11 = arg3[5] f* xmm0_18
float xmm1_6 = arg3[9] f* xmm0_18
float var_2c = xmm1_4 + xmm6_1 f+ arg3[3]
float var_28 = xmm7_11 + xmm5_1 f+ arg3[7]
float var_24 = xmm1_6 + xmm4_1 f+ arg3[0xb]
float var_20 = xmm1_4 + xmm7_5 f+ arg3[3]
int64_t var_80 = 0
int32_t var_78 = 0x3f800000
var_60:0xc.d = xmm0_7
float var_1c = xmm7_11 + xmm7_7 f+ arg3[7]
int64_t xmm0_33 = _mm_unpacklo_ps(xmm0_4, xmm7_3)
int64_t var_44 = xmm0_33
var_60:4.q = xmm0_33
float var_18 = xmm1_6 + xmm7_9 f+ arg3[0xb]

if (esi == 0)
    void* eax_5 = *(sub_5af880(arg8) + 8)
    esi = sub_6dd280(eax_5, *(eax_5 + 8) + 8, &data_8ce7bc, 0x53)
    
    if (esi == 0)
        esi = data_1724a58

void* eax_8 = *(sub_5af880(arg8) + 8)
int32_t eax_9 = sub_6dd280(eax_8, *(eax_8 + 8) + 8, &data_8ce7bc, 0x54)
uint32_t result =
    sub_646580(&var_60:4, arg4, &var_44, arg5, arg6, &var_60:4, &var_80, esi, eax_9, arg8)
CookieCheckFunction(result)
return result
