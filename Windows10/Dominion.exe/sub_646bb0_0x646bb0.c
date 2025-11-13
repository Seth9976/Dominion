// 函数: sub_646bb0
// 地址: 0x646bb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
int32_t* esi = arg5
float xmm4 = *arg3
float xmm5 = arg3[1]
float xmm6 = arg3[2]
float xmm7_1 = arg3[3] f- xmm4
float xmm3_1 = arg3[4] f- xmm5
float xmm2_1 = arg3[5] f- xmm6
float var_18 = (xmm4 f+ arg3[9]) * 0.5f
float var_14 = (xmm5 f+ arg3[0xa]) * 0.5f
float xmm1_1 = arg3[7] f- xmm5
float var_10 = (xmm6 f+ arg3[0xb]) * 0.5f
float xmm0_10 = arg3[6] f- xmm4
float xmm4_2 = arg3[8] f- xmm6
float xmm6_3 = xmm1_1 * xmm2_1 - xmm4_2 * xmm3_1
float xmm4_4 = xmm4_2 * xmm7_1 - xmm0_10 * xmm2_1
float xmm5_3 = xmm0_10 * xmm3_1 - xmm1_1 * xmm7_1
float xmm0_19 = sub_4ac580(ebp, xmm4_4 * xmm4_4 + xmm6_3 * xmm6_3 + xmm5_3 * xmm5_3)
float var_38
float eax_3
int64_t xmm0_20

if (9.99999975e-06f <= xmm0_19)
    float xmm0_21 = 1f / (xmm0_19 + 9.99999975e-06f)
    float xmm1_10 = xmm4_4 * xmm0_21
    float xmm3_3 = xmm6_3 * xmm0_21
    float xmm2_3 = xmm5_3 * xmm0_21
    float xmm1_15 = 1f / sub_4ac580(ebp, xmm1_10 * xmm1_10 + xmm3_3 * xmm3_3 + xmm2_3 * xmm2_3)
    var_38 = xmm1_15 * xmm3_3
    float var_34_1 = xmm1_15 * xmm1_10
    xmm0_20 = var_38.q
    eax_3 = xmm1_15 * xmm2_3
else
    xmm0_20 = 0
    eax_3 = 0f

var_38.q = xmm0_20
float var_30_2 = eax_3

if (esi == 0)
    void* eax_5 = *(sub_5af880(arg6) + 8)
    esi = sub_6dd280(eax_5, *(eax_5 + 8) + 8, &data_8ce7bc, 0x53)
    
    if (esi == 0)
        esi = data_1724a58

void* eax_8 = *(sub_5af880(arg6) + 8)
uint32_t result = sub_646580(&var_18, arg2, arg3, arg4, 0, &var_18, &var_38, esi, 
    sub_6dd280(eax_8, *(eax_8 + 8) + 8, &data_8ce7bc, 0x54), arg6)
CookieCheckFunction(result)
return result
