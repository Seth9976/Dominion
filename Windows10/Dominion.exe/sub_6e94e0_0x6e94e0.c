// 函数: sub_6e94e0
// 地址: 0x6e94e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
float xmm5_1 = arg2[7] - arg2[1]
float xmm6_1 = arg2[8] - arg2[2]
float xmm4_1 = arg2[6] - *arg2
float xmm1_1 = arg2[3] - *arg2
float xmm2_1 = arg2[4] - arg2[1]
float xmm7_2 = xmm6_1 f* arg3[4] - xmm5_1 f* arg3[5]
float xmm3_1 = arg2[5] - arg2[2]
float xmm6_3 = xmm4_1 f* arg3[5] - xmm6_1 f* arg3[3]
float xmm5_3 = xmm5_1 f* arg3[3] - xmm4_1 f* arg3[4]
uint32_t xmm4_5[0x4] = xmm6_3 * xmm2_1 + xmm7_2 * xmm1_1 + xmm5_3 * xmm3_1
float* result

if (not(9.99999975e-05f f> __andps_xmmxud_memxud(xmm4_5, data_8937a0.o)))
    float xmm3_3 = *arg3 - *arg2
    float xmm2_3 = arg3[1] f- arg2[1]
    float xmm1_5 = arg3[2] f- arg2[2]
    float xmm6_4 = 1f f/ xmm4_5
    float xmm4_10 = (xmm2_3 * xmm6_3 + xmm3_3 * xmm7_2 + xmm1_5 * xmm5_3) * xmm6_4
    
    if (not(-9.99999975e-05f > xmm4_10) && not(xmm4_10 > 1.00010002f))
        float xmm5_6 = xmm2_3 * xmm3_1 - xmm1_5 * xmm2_1
        float xmm3_5 = xmm3_3 * xmm2_1 - xmm2_3 * xmm1_1
        float xmm1_7 = xmm1_5 * xmm1_1 - xmm3_3 * xmm3_1
        float xmm2_9 = (xmm5_6 f* arg3[3] + xmm1_7 f* arg3[4] + xmm3_5 f* arg3[5]) * xmm6_4
        
        if (not(-9.99999975e-05f > xmm2_9) && not(xmm2_9 + xmm4_10 > 1.00010002f))
            float xmm1_11 = (xmm1_7 * xmm5_1 + xmm5_6 * xmm4_1 + xmm3_5 * xmm6_1) * xmm6_4
            *arg4 = xmm1_11
            
            if (not(0f > xmm1_11))
                result.b = 1
                return result

result.b = 0
return result
