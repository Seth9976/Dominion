// 函数: sub_6842b0
// 地址: 0x6842b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* var_8 = arg3
int32_t esi = arg2[1]
*arg6 = *arg2
arg6[1] = esi
int32_t ecx = arg2[3]
arg6[2] = arg2[2]
arg6[3] = ecx
int32_t ecx_1 = arg2[5]
arg6[4] = arg2[4]
arg6[5] = ecx_1
int32_t eax_3 = arg2[6]
arg6[7] = arg2[7]
float ecx_3 = arg5
arg6[6] = eax_3
int32_t* result = arg4
*ecx_3 = *arg3

if (result[4] == 0)
    result.b = 1
    return result

int32_t xmm2 = (zx.o(0)).d
int32_t xmm7 = (zx.o(0)).d
arg5 = 1f
int32_t var_8_1 = 0
arg4 = 1f

if ((result[4].b & 1) == 0)
label_684358:
    
    if ((result[4].b & 2) == 0)
    label_68438c:
        
        if ((result[4].b & 4) == 0)
        label_6843c8:
            
            if ((result[4].b & 8) == 0)
            label_684404:
                float xmm5_1 = *arg2
                float xmm4_3 = arg2[1]
                float xmm2_8 = (arg2[2] f- xmm5_1) f* xmm7 + xmm5_1 + (arg2[4] f- xmm5_1) f* xmm2
                    + xmm5_1 - xmm5_1
                arg6[1] = (arg2[3] f- xmm4_3) f* xmm7 + xmm4_3 + (arg2[5] f- xmm4_3) f* xmm2
                    + xmm4_3 - xmm4_3
                *arg6 = xmm2_8
                float xmm6_1 = arg2[2]
                float xmm5_2 = arg2[3]
                float xmm3_15 = (xmm6_1 f- *arg2) * arg5 f+ *arg2 + (arg2[6] f- xmm6_1) f* var_8_1
                    + xmm6_1 - xmm6_1
                arg6[3] = (xmm5_2 f- arg2[1]) * arg5 f+ arg2[1] + (arg2[7] f- xmm5_2) f* var_8_1
                    + xmm5_2 - xmm5_2
                arg6[2] = xmm3_15
                float xmm5_3 = arg2[4]
                float xmm4_8 = arg2[5]
                float xmm0_20 = (arg2[7] f- xmm4_8) f* xmm7 + xmm4_8
                    + (xmm4_8 f- arg2[1]) * arg4 f+ arg2[1] - xmm4_8
                arg6[4] = (arg2[6] f- xmm5_3) f* xmm7 + xmm5_3 + (xmm5_3 f- *arg2) * arg4 f+ *arg2
                    - xmm5_3
                arg6[5] = xmm0_20
                float xmm6_2 = arg2[6]
                float xmm5_4 = arg2[7]
                float xmm1_27 = (xmm5_4 f- arg2[5]) * arg5 f+ arg2[5]
                    + (xmm5_4 f- arg2[3]) * arg4 f+ arg2[3] - xmm5_4
                arg6[6] = (xmm6_2 f- arg2[4]) * arg5 f+ arg2[4]
                    + (xmm6_2 f- arg2[2]) * arg4 f+ arg2[2] - xmm6_2
                arg6[7] = xmm1_27
                
                if (not(*ecx_3 f> *(ecx_3 i+ 8)))
                    result.b = *(ecx_3 i+ 4) f<= *(ecx_3 i+ 0xc)
                    return result
            else
                float xmm4_2 = *(arg3 + 4)
                float xmm3_5 = result[3]
                
                if (not(xmm4_2 > xmm3_5))
                    float xmm1_6 = *(arg3 + 0xc)
                    
                    if (not(xmm1_6 <= xmm3_5))
                        *(ecx_3 i+ 0xc) = xmm3_5
                        arg4 = (xmm3_5 - xmm4_2) / (xmm1_6 - xmm4_2)
                    
                    goto label_684404
        else
            float xmm1_4 = *(arg3 + 0xc)
            float xmm0_5 = result[1]
            
            if (not(xmm0_5 > xmm1_4))
                float xmm3_4 = *(arg3 + 4)
                
                if (not(xmm0_5 <= xmm3_4))
                    *(ecx_3 i+ 4) = xmm0_5
                    xmm2 = (xmm0_5 - xmm3_4) / (xmm1_4 - xmm3_4)
                    var_8_1 = xmm2
                
                goto label_6843c8
    else
        float xmm1_2 = *(arg3 + 8)
        float xmm0_4 = *result
        
        if (not(xmm0_4 > xmm1_2))
            float xmm3_3 = *arg3
            
            if (not(xmm0_4 <= xmm3_3))
                *ecx_3 = xmm0_4
                xmm7 = (xmm0_4 - xmm3_3) / (xmm1_2 - xmm3_3)
            
            goto label_68438c
else
    float xmm4_1 = *arg3
    float xmm1_1 = result[2]
    
    if (not(xmm4_1 > xmm1_1))
        float xmm3_1 = *(arg3 + 8)
        
        if (not(xmm3_1 <= xmm1_1))
            *(ecx_3 i+ 8) = xmm1_1
            arg5 = (xmm1_1 - xmm4_1) / (xmm3_1 - xmm4_1)
        
        goto label_684358

result.b = 0
return result
