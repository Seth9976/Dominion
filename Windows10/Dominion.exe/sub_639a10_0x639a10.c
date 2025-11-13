// 函数: sub_639a10
// 地址: 0x639a10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* result = arg4
*result = *arg3
result[1] = arg3[1]
*result = 1f f/ *result
float xmm3_1 = *(result + 4) ^ 0x80000000
float xmm2_1 = *(result + 8) ^ 0x80000000
float xmm6_1 = *(result + 0xc) ^ 0x80000000
*(result + 4) = xmm3_1
*(result + 8) = xmm2_1
float xmm0_4 = xmm3_1 * xmm3_1
*(result + 0xc) = xmm6_1
float xmm4 = result[1].d
float xmm5 = *(result + 0x18)
float xmm0_6 = xmm2_1 * xmm2_1
float xmm1_1 = xmm4 * xmm4
float xmm0_8 = xmm6_1 * xmm6_1
float xmm0_10 = xmm2_1 * xmm3_1
float xmm7_1 = xmm4 * xmm2_1
float xmm0_12 = xmm4 * xmm6_1
float xmm2_3 = xmm6_1 * xmm3_1
float xmm0_14 = xmm5 + xmm5
float xmm3_2 = *(result + 0x1c)
float xmm6_3 = xmm1_1 - xmm0_4
float xmm0_15 = *(result + 0x14)
float xmm4_2 = xmm0_15 + xmm0_15
float xmm2_5 = xmm3_2 + xmm3_2
float xmm3_4 = xmm6_1 * xmm2_1
float xmm3_6 = xmm4 * xmm3_1
float xmm3_8 = *result ^ (data_8937c0.o).d
*(result + 0x14) = ((xmm0_4 + xmm1_1 - xmm0_6 - xmm0_8) * xmm0_15 + (xmm0_10 - xmm0_12) * xmm0_14
    + (xmm7_1 + xmm2_3) * xmm2_5) * xmm3_8
*(result + 0x18) = ((xmm6_3 + xmm0_6 - xmm0_8) * xmm5 + (xmm0_12 + xmm0_10) * xmm4_2
    + (xmm3_4 - xmm3_6) * xmm2_5) * xmm3_8
*(result + 0x1c) = ((xmm2_3 - xmm7_1) * xmm4_2 + (xmm3_6 + xmm3_4) * xmm0_14
    + (xmm6_3 - xmm0_6 + xmm0_8) * xmm3_2) * xmm3_8
return result
