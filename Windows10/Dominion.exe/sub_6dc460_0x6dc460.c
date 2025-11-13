// 函数: sub_6dc460
// 地址: 0x6dc460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
float xmm5 = arg3[8]
float xmm4 = arg3[0xa]
float xmm1_3 = (arg3[2] - *arg3) * (*arg2 - arg3[4]) / (arg3[6] - arg3[4]) + *arg3
float xmm0_5 = xmm5 * xmm4
float xmm2_3 = arg3[9]
float xmm0_7 = xmm4 * xmm2_3
float xmm1_7 = (arg3[3] - arg3[1]) * (arg2[1] f- arg3[5]) / (arg3[7] - arg3[5]) + arg3[1]
float xmm1_8 = arg3[0xb]
float xmm7_1 = xmm5 * xmm1_8
float xmm3_4 = xmm2_3 * xmm1_8
float xmm7_3 = xmm0_7 - xmm7_1
float xmm6_1 = xmm0_5 + xmm3_4
float xmm7_5 = xmm4 * xmm4
float xmm4_1 = xmm4 * xmm1_8
float xmm7_7 = xmm2_3 * xmm2_3
float xmm7_9 = xmm5 * xmm5
float xmm5_1 = xmm5 * xmm2_3
float xmm2_5 = xmm0_5 - xmm3_4
float xmm7_11 = xmm1_8 * xmm1_8
float xmm5_2 = xmm5_1 - xmm4_1
float xmm1_10 = xmm5_1 + xmm4_1
float xmm4_3 = xmm7_1 + xmm0_7
float xmm5_5 = (xmm7_11 + xmm7_9 - xmm7_5 - xmm7_7) * xmm1_3 + xmm5_2 + xmm5_2
    + ((xmm6_1 + xmm6_1) ^ 0x80000000) * xmm1_7
int32_t eax = arg3[0xe]
float xmm3_7 = xmm7_7 - xmm7_5 + xmm7_11 - xmm7_9 + (xmm1_10 + xmm1_10) * xmm1_3
    + ((xmm7_3 + xmm7_3) ^ 0x80000000) * xmm1_7
*arg4 = *(arg3 + 0x30)
arg4[1].d = eax
float xmm1_21 = (xmm2_5 + xmm2_5) * xmm1_3 + xmm4_3 + xmm4_3
    + ((xmm7_5 - xmm7_7 - xmm7_9 + xmm7_11) ^ 0x80000000) * xmm1_7
float xmm0_19 = sub_4ac580(ebp_1, xmm3_7 * xmm3_7 + xmm5_5 * xmm5_5 + xmm1_21 * xmm1_21)

if (not(9.99999975e-06f <= xmm0_19))
    *(arg4 + 0xc) = 0
    *(arg4 + 0x14) = 0
    return arg4

float xmm3_8 = 1f / (xmm0_19 + 9.99999975e-06f)
float xmm1_27 = xmm3_8 * xmm3_7
float xmm2_8 = xmm3_8 * xmm5_5
float xmm3_9 = xmm3_8 * xmm1_21
float xmm1_32 = 1f / sub_4ac580(ebp_1, xmm1_27 * xmm1_27 + xmm2_8 * xmm2_8 + xmm3_9 * xmm3_9)
float var_3c = xmm1_32 * xmm1_27
*(arg4 + 0xc) = (xmm1_32 * xmm2_8).q
*(arg4 + 0x14) = xmm1_32 * xmm3_9
return arg4
