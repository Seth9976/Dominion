// 函数: sub_6db800
// 地址: 0x6db800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const i = &data_8008d8
void* esi = arg2 + 8

do
    float xmm4_1 = arg1[5]
    float xmm7_1 = arg1[3]
    float xmm5_2 = xmm7_1 * xmm7_1
    float xmm0_3 = (*(i - 8) - 0.5f) * arg1[7]
    float xmm0_6 = (*(i - 4) - 0.5f) * arg1[8]
    float xmm1_1 = arg1[6]
    float xmm6_2 = xmm4_1 * xmm1_1
    float xmm0_9 = (*i - 0.5f) * arg1[9]
    float xmm0_11 = xmm1_1 * xmm1_1
    float xmm0_12 = arg1[4]
    float xmm2_2 = xmm0_12 * xmm0_12
    float xmm3_2 = xmm0_12 * xmm1_1
    float xmm2_4 = xmm4_1 * xmm4_1
    float xmm3_4 = xmm4_1 * xmm7_1
    float xmm4_2 = xmm4_1 * xmm0_12
    float xmm2_6 = xmm0_12 * xmm7_1
    float xmm3_6 = xmm0_11 - xmm5_2
    float xmm7_2 = xmm7_1 * xmm1_1
    float xmm5_8 = (xmm6_2 + xmm2_6) * (xmm0_3 + xmm0_3) + (xmm3_6 + xmm2_2 - xmm2_4) * xmm0_6
        + (xmm0_9 + xmm0_9) * (xmm4_2 - xmm7_2) + arg1[1]
    float xmm2_12 = (xmm0_6 + xmm0_6) * (xmm7_2 + xmm4_2) + (xmm0_3 + xmm0_3) * (xmm3_4 - xmm3_2)
        + (xmm3_6 - xmm2_2 + xmm2_4) * xmm0_9 + arg1[2]
    *(arg2 - &data_8008d8 + i) = (xmm0_6 + xmm0_6) * (xmm2_6 - xmm6_2)
        + (xmm5_2 + xmm0_11 - xmm2_2 - xmm2_4) * xmm0_3 + (xmm0_9 + xmm0_9) * (xmm3_4 + xmm3_2)
        + *arg1
    i += 0xc
    *(esi - 4) = xmm5_8
    *esi = xmm2_12
    esi += 0xc
while (i s< &data_800930:8)

return i
