// 函数: sub_6e9290
// 地址: 0x6e9290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t* var_14 = arg3
float xmm6 = *arg3
int32_t eax = 0

if (not(xmm6 f<= arg2[3]))
    eax = 1
else if (*arg2 f> xmm6)
    eax = 2

float xmm5 = arg3[1]
float xmm7 = arg2[4]

if (not(xmm5 <= xmm7))
    eax |= 4
else if (not(arg2[1] f<= xmm5))
    eax |= 8

float xmm4 = arg3[2]
float xmm1 = arg2[5]

if (not(xmm4 <= xmm1))
    eax |= 0x20
else if (not(arg2[2] f<= xmm4))
    eax |= 0x10

if (eax == 0)
    *arg4 = 0
    int32_t* eax_1
    eax_1.b = 1
    return eax_1

float* esi = arg4
uint128_t xmm2 = 0x7fffffffffffffff
var_14:3.b = 0

if ((eax.b & 3) != 0)
    float xmm3_1[0x2] = arg3[3]
    
    if (not(_mm_and_ps(_mm_cvtps_pd(xmm3_1), xmm2) f<= 9.9999997473787516e-06))
        float xmm2_1
        
        if ((eax.b & 1) == 0)
            xmm2_1 = *arg2
        else
            xmm2_1 = arg2[3]
        
        float xmm2_2 = xmm2_1 - xmm6
        float xmm0_9 = xmm2_2 f* arg3[4] f/ xmm3_1 + xmm5
        
        if (not(xmm7 < xmm0_9) && not(xmm0_9 f< arg2[1]))
            float xmm0_13 = xmm2_2 f* arg3[5] f/ xmm3_1 + xmm4
            
            if (not(xmm1 < xmm0_13) && not(xmm0_13 f< arg2[2]))
                float xmm2_3 = xmm2_2 f/ xmm3_1
                
                if (not(xmm2_3 f< 0))
                    *esi = xmm2_3
                    var_14:3.b = 1
        
        xmm2 = 0x7fffffffffffffff

if ((eax.b & 0xc) != 0)
    float xmm3_2[0x2] = arg3[4]
    
    if (not(_mm_and_ps(_mm_cvtps_pd(xmm3_2), xmm2) f<= 9.9999997473787516e-06))
        float xmm2_4
        
        if ((eax.b & 4) == 0)
            xmm2_4 = arg2[1]
        else
            xmm2_4 = xmm7
        
        float xmm2_5 = xmm2_4 - xmm5
        float xmm0_19 = xmm2_5 f* arg3[3] f/ xmm3_2 + xmm6
        xmm7 = arg2[4]
        
        if (not(arg2[3] f< xmm0_19) && not(xmm0_19 f< *arg2))
            float xmm0_23 = xmm2_5 f* arg3[5] f/ xmm3_2 + xmm4
            
            if (not(xmm1 < xmm0_23) && not(xmm0_23 f< arg2[2]))
                float xmm2_6 = xmm2_5 f/ xmm3_2
                
                if (not(xmm2_6 f< 0) && (var_14:3.b == 0 || not(*esi <= xmm2_6)))
                    *esi = xmm2_6
                    var_14:3.b = 1

if ((eax.b & 0x30) == 0)
    eax.b = var_14:3.b
else
    float xmm2_7[0x2] = arg3[5]
    
    if (__andps_xmmxud_memxud(_mm_cvtps_pd(xmm2_7), data_8937b0.o) f<= 9.9999997473787516e-06)
        eax.b = var_14:3.b
    else
        if ((eax.b & 0x20) == 0)
            xmm1 = arg2[2]
        
        float xmm1_1 = xmm1 - xmm4
        float xmm0_30 = xmm1_1 f* arg3[3] f/ xmm2_7 + xmm6
        
        if (arg2[3] f< xmm0_30 || xmm0_30 f< *arg2)
            eax.b = var_14:3.b
        else
            eax.b = var_14:3.b
            float xmm0_34 = xmm1_1 f* arg3[4] f/ xmm2_7 + xmm5
            
            if (not(xmm7 < xmm0_34) && not(xmm0_34 f< arg2[1]))
                float xmm1_2 = xmm1_1 f/ xmm2_7
                
                if (not(xmm1_2 f< 0) && (eax.b == 0 || not(*esi <= xmm1_2)))
                    *esi = xmm1_2
                    eax.b = 1

return eax
