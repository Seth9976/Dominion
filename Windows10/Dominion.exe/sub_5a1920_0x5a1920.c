// 函数: sub_5a1920
// 地址: 0x5a1920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = *arg1
int32_t edx = arg1[6]
float xmm1 = *arg2
float xmm4 = **(esi + 8)
int32_t ebx
ebx.b = xmm1 > xmm4

if (ebx == 0)
    if (edx == 1)
        return 0
else if (edx == 0)
    return edx + 1

float xmm0 = *(esi + 0x1c)
float xmm2_1 = xmm1 - xmm4
xmm0 - 1f
int32_t ecx = 0
bool p = unimplemented  {test ah, 0x44}
void* eax_3 = *(esi + 8)

if (p)
    float xmm1_6 = *(esi + 0x24) - xmm0 * xmm1
    float xmm0_12 = arg2[1] f- xmm1_6
    float xmm1_7 = xmm1_6 f- *(eax_3 + 4)
    ecx.b = xmm0_12 * xmm0_12 > xmm1_7 * xmm1_7 + xmm2_1 * xmm2_1
else
    float xmm0_1 = arg2[1]
    float xmm3_1 = *(esi + 0x20)
    float xmm5_2 = xmm0_1 f- *(eax_3 + 4)
    
    if (0 f> xmm3_1)
        ecx = ebx ^ 1
    
    int32_t eax_6
    eax_6.b = xmm3_1 f>= 0
    
    if ((ecx | (eax_6 & ebx)) == 0)
        int32_t eax_8
        eax_8.b = xmm0_1 * xmm3_1 + xmm1 f> *(esi + 0x24)
        ecx = eax_8 ^ 1
        
        if (0 f<= xmm3_1)
            ecx = eax_8
        
        if (ecx != 0)
            goto label_5a19ff
    else
        ecx.b = xmm5_2 >= xmm3_1 * xmm2_1
        
        if (ecx == 0)
        label_5a19ff:
            float xmm4_1 = xmm4 - **(esi + 4)
            ecx.b = ((xmm2_1 + xmm2_1) / xmm4_1 + 1f + xmm3_1 * xmm3_1) * xmm4_1 * xmm5_2
                > (xmm2_1 * xmm2_1 - xmm5_2 * xmm5_2) * xmm3_1
            
            if (not(0 f<= xmm3_1))
                int32_t ecx_3 = ecx ^ 1
                
                if (edx == 0)
                    return ecx_3
                
                return ecx_3 ^ 1

if (edx == 0)
    return ecx

return ecx ^ 1
