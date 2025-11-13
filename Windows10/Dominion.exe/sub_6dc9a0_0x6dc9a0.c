// 函数: sub_6dc9a0
// 地址: 0x6dc9a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int128_t xmm0 = *arg3
int128_t var_48 = xmm0
var_48.d = xmm0.d ^ 0x80000000
var_48:4.d ^= 0x80000000
var_48:8.d ^= 0x80000000
*arg4 = var_48
float xmm0_8 = arg3[1].d ^ 0x80000000
float xmm6 = *arg4
float xmm0_10 = *(arg3 + 0x14) ^ 0x80000000
float xmm4_1 = xmm6 * xmm6
float xmm0_12 = *(arg3 + 0x18) ^ 0x80000000
float xmm1 = *(arg4 + 0xc)
float xmm0_13 = *(arg4 + 4)
float xmm5_1 = xmm1 * xmm1
float xmm2_1 = xmm0_13 * xmm0_13
float xmm7_1 = xmm0_13 * xmm1
float xmm2_2 = *(arg4 + 8)
float xmm3_1 = xmm2_2 * xmm2_2
float xmm3_3 = xmm0_13 * xmm6
float xmm2_3 = xmm2_2 * xmm6
float xmm6_2 = xmm2_2 * xmm1
float xmm2_5 = xmm5_1 - xmm4_1
float xmm2_7 = xmm2_2 * xmm0_13
float xmm0_15 = xmm6 * xmm1
arg4[1].d = (xmm3_3 - xmm6_2) * (xmm0_10 + xmm0_10) + (xmm4_1 + xmm5_1 - xmm2_1 - xmm3_1) * xmm0_8
    + (xmm2_3 + xmm7_1) * (xmm0_12 + xmm0_12)
*(arg4 + 0x14) = (xmm6_2 + xmm3_3) * (xmm0_8 + xmm0_8) + (xmm2_5 + xmm2_1 - xmm3_1) * xmm0_10
    + (xmm0_12 + xmm0_12) * (xmm2_7 - xmm0_15)
*(arg4 + 0x18) = (xmm0_10 + xmm0_10) * (xmm0_15 + xmm2_7) + (xmm2_3 - xmm7_1) * (xmm0_8 + xmm0_8)
    + (xmm2_5 - xmm2_1 + xmm3_1) * xmm0_12
return arg4
