// 函数: sub_620000
// 地址: 0x620000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* eax_2 = data_171ecd4

if (arg2 s> 0xa)
    sub_63b870(eax_2, &data_801800, "nDraw <= nTotal", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xe253, "DrawPath")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

float var_10c
void* edx = &var_10c - arg3
float* ecx = &arg3[1]
int32_t* eax_3 = ecx
int32_t i_2 = 8
int32_t i

do
    float xmm0_3 = (eax_3[4] f- *eax_3) * 0.5f
    *(eax_3 + edx) = (eax_3[3] f- eax_3[-1]) * 0.5f
    void var_108
    *(eax_3 + &var_108 - arg3) = xmm0_3
    eax_3 = &eax_3[2]
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t i_3 = i_2
float xmm1_6 = (arg3[2] - *arg3) * 0.5f
int32_t result = arg2 - 1
int32_t i_1 = result
var_10c = (arg3[3] - *ecx) * 0.5f
float xmm0_7 = arg3[0x13]
float var_110 = xmm1_6
float var_c4 = (xmm0_7 - arg3[0x11]) * 0.5f
float var_c8 = (arg3[0x12] - arg3[0x10]) * 0.5f
float xmm1_11 = arg4 * 90f

if (result s> 0)
    int32_t eax_5 = &var_110 - arg3
    int32_t i_4
    
    do
        float xmm0_12 = ecx[-1]
        float xmm2_1 = ecx[1]
        float xmm0_13 = *ecx
        float xmm1_13 = xmm0_12 - xmm2_1
        float xmm2_2 = ecx[2]
        float xmm0_14 = xmm0_13 - xmm2_2
        float var_16c = xmm2_2
        int32_t __saved_ebp
        float xmm0_18 =
            sub_4ac580(&__saved_ebp, xmm0_14 * xmm0_14 + xmm1_13 * xmm1_13) / (arg4 * 25f)
        float xmm0_19
        
        if (0 f<= xmm0_18)
            xmm0_19 = xmm0_18 + 0.5f
        else
            xmm0_19 = xmm0_18 - 0.5f
        
        float xmm7_1 = var_16c
        int32_t result_1 = int.d(xmm0_19)
        float xmm4_3 = *(ecx + eax_5)
        float xmm0_23 = (&var_110)[i_3 * 2] + xmm0_12 + xmm0_12 - (xmm2_1 + xmm2_1)
        float xmm1_17 = (&var_110)[i_3 * 2]
        var_16c = xmm0_13 + xmm0_13 + xmm4_3 - (xmm7_1 + xmm7_1)
        float xmm3_5 = *(edx + ecx)
        var_16c = var_16c f+ *(ecx + eax_5 + 8)
        float xmm5_5 = xmm0_13 * -3f + xmm7_1 * 3f - (xmm4_3 + xmm4_3) f- *(ecx + eax_5 + 8)
        float xmm0_30 = _mm_cvtepi32_ps(zx.o(result_1))
        float xmm0_32 = sub_4d5cb0(xmm0_30 * arg6)
        float xmm1_21
        
        if (0f <= xmm0_32)
            xmm1_21 = xmm0_32 + 0.5f
        else
            xmm1_21 = xmm0_32 - 0.5f
        
        i_4 = i_3
        
        if (i_4 == arg2 - 2)
            result_1 = int.d(xmm1_21)
        
        int32_t edi_1 = 0
        result = result_1
        
        if (result s> 0)
            void* edx_4 = &ecx[-1]
            float xmm7_4 = xmm1_11 * xmm1_11
            float var_124_1 = xmm7_4
            
            do
                float xmm2_7 = (float.s(edi_1) + 0.5f) / xmm0_30
                result = result_1
                float xmm5_11 = (xmm0_23 + xmm3_5) * xmm2_7 * xmm2_7 * xmm2_7
                    + (xmm0_12 * -3f + xmm2_1 * 3f - (xmm1_17 + xmm1_17) - xmm3_5) * xmm2_7
                    * xmm2_7 + (&var_110)[i_4 * 2] * xmm2_7
                float xmm5_12 = xmm5_11 + xmm0_12
                float xmm6_9 = var_16c * xmm2_7 * xmm2_7 * xmm2_7 + xmm5_5 * xmm2_7 * xmm2_7
                    + *(ecx + eax_5) * xmm2_7 + xmm0_13
                float xmm1_26 = *edx_4 - xmm5_12
                float xmm0_37 = *ecx - xmm6_9
                
                if (not(xmm7_4 > xmm0_37 * xmm0_37 + xmm1_26 * xmm1_26))
                    float xmm1_29 = ecx[1] - xmm5_12
                    float xmm0_41 = ecx[2] - xmm6_9
                    
                    if (not(xmm7_4 > xmm0_41 * xmm0_41 + xmm1_29 * xmm1_29))
                        int32_t var_118 = arg5
                        int32_t var_114_1 = 0
                        sub_682df0(0, &var_118, eax_2, xmm5_12, xmm6_9, arg4, arg4)
                        xmm7_4 = var_124_1
                        result = result_1
                        i_4 = i_3
                        edx_4 = &ecx[-1]
                
                edi_1 += 1
            while (edi_1 s< result)
        
        i_3 = i_4 + 1
        ecx = &ecx[2]
    while (i_4 + 1 s< i_1)

CookieCheckFunction(result)
return result
