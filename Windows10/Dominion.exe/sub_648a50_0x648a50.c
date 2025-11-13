// 函数: sub_648a50
// 地址: 0x648a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1 = arg3[2]
void* result = arg2
float xmm3 = arg3[3]
float xmm2 = arg3[1]
float xmm7_1 = xmm1 + xmm1
float xmm5 = arg3[4]
int32_t i_1 = arg4
float xmm5_1 = xmm5 + xmm5
float xmm7_2 = xmm7_1 * xmm3
float xmm0_1 = xmm7_1 * xmm1
float xmm6_2 = (xmm3 + xmm3) * xmm3
float xmm0_3 = xmm2 + xmm2
float xmm5_2 = xmm5_1 * xmm1
float xmm6_4 = xmm5_1 * xmm3
float xmm4_1 = xmm0_3 * xmm1
float xmm1_2 = xmm0_3 * xmm3
float xmm1_3 = 1f - xmm0_3 * xmm2
float xmm0_6 = xmm5_1 * xmm2
float xmm0_7 = *arg3

if (i_1 s> 0)
    result += 8
    int32_t i
    
    do
        float xmm5_3 = *(result - 4)
        float xmm2_10 = *(result - 8)
        float xmm3_7 = *result
        float xmm4_6 = xmm2_10 * (xmm6_4 + xmm4_1) * xmm0_7 + xmm5_3 * (xmm1_3 - xmm6_2) * xmm0_7
            + xmm3_7 * (xmm7_2 - xmm0_6) * xmm0_7 + arg3[6]
        float xmm1_17 = xmm2_10 * (xmm1_2 - xmm5_2) * xmm0_7 + xmm5_3 * (xmm0_6 + xmm7_2) * xmm0_7
            + xmm3_7 * (xmm1_3 - xmm0_1) * xmm0_7 + arg3[7]
        *(result - 8) = xmm5_3 * (xmm4_1 - xmm6_4) * xmm0_7
            + xmm2_10 * (1f - xmm0_1 - xmm6_2) * xmm0_7 + xmm3_7 * (xmm1_2 + xmm5_2) * xmm0_7
            + arg3[5]
        *(result - 4) = xmm4_6
        *result = xmm1_17
        result += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
