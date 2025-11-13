// 函数: sub_681e50
// 地址: 0x681e50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg5 = *arg3
int32_t edx = arg4[4]
*arg6 = *arg2
int128_t* result

if (edx != 0)
    float xmm5_1 = 1f
    int32_t xmm4_1 = (zx.o(0)).d
    int32_t xmm6_1 = (zx.o(0)).d
    float xmm3_1 = 1f
    
    if ((edx.b & 1) != 0)
        float xmm2_1 = *arg3
        float xmm0_2 = arg4[2]
        
        if (xmm2_1 > xmm0_2)
            result.b = 0
            return result
        
        float xmm1_1 = *(arg3 + 8)
        
        if (not(xmm1_1 <= xmm0_2))
            *(arg5 + 8) = xmm0_2
            xmm5_1 = (xmm0_2 - xmm2_1) / (xmm1_1 - xmm2_1)
    
    if ((edx.b & 2) != 0)
        float xmm1_3 = *(arg3 + 8)
        float xmm0_3 = *arg4
        
        if (xmm0_3 > xmm1_3)
            result.b = 0
            return result
        
        float xmm2_2 = *arg3
        
        if (not(xmm0_3 <= xmm2_2))
            *arg5 = xmm0_3
            xmm4_1 = (xmm0_3 - xmm2_2) / (xmm1_3 - xmm2_2)
    
    if ((edx.b & 4) != 0)
        float xmm1_5 = *(arg3 + 0xc)
        float xmm0_4 = arg4[1]
        
        if (xmm0_4 > xmm1_5)
            result.b = 0
            return result
        
        float xmm2_3 = *(arg3 + 4)
        
        if (not(xmm0_4 <= xmm2_3))
            *(arg5 + 4) = xmm0_4
            xmm6_1 = (xmm0_4 - xmm2_3) / (xmm1_5 - xmm2_3)
    
    if ((edx.b & 8) != 0)
        float xmm2_4 = *(arg3 + 4)
        float xmm1_7 = arg4[3]
        
        if (xmm2_4 > xmm1_7)
            result.b = 0
            return result
        
        float xmm0_5 = *(arg3 + 0xc)
        
        if (not(xmm0_5 <= xmm1_7))
            *(arg5 + 0xc) = xmm1_7
            xmm3_1 = (xmm1_7 - xmm2_4) / (xmm0_5 - xmm2_4)
    
    if (*arg5 f> *(arg5 + 8) || *(arg5 + 4) f> *(arg5 + 0xc))
        result.b = 0
        return result
    
    float xmm2_5 = *arg2
    float xmm1_9 = *(arg2 + 8) - xmm2_5
    float xmm2_6 = *(arg2 + 4)
    *(arg6 + 8) = xmm1_9 * xmm5_1 + xmm2_5
    float xmm1_13 = *(arg2 + 0xc) - xmm2_6
    *arg6 = xmm1_9 f* xmm4_1 + xmm2_5
    *(arg6 + 0xc) = xmm1_13 * xmm3_1 + xmm2_6
    *(arg6 + 4) = xmm1_13 f* xmm6_1 + xmm2_6

result.b = 1
return result
