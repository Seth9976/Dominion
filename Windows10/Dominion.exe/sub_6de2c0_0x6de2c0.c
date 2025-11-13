// 函数: sub_6de2c0
// 地址: 0x6de2c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* eax_2 = *(arg3 + 0x10)
int32_t esi = 0
float xmm2 = arg4
int32_t* result = eax_2[1]
int32_t var_40 = arg2
float var_44 = xmm2
int32_t* result_2 = result

if (result s> 0)
    int32_t ecx = 0
    int32_t var_60_1 = 0
    
    do
        result = eax_2[2] + ecx
        float result_1 = result
        
        if (result[4] != 0xffffffff)
            if (arg7 != 0)
                if (arg6 s<= 0)
                    sub_63b870(result, &data_801800, "maskCount > 0", 
                        "C:\x\ax2017\Engine\Animation.cpp", 0x20a, "BoneGetMaskWeight")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t eax_5 = 0
                bool cond:0_1
                
                while (true)
                    if (*(arg2 + (eax_5 << 2)) == esi)
                        cond:0_1 = arg7 == 1
                        break
                    
                    eax_5 += 1
                    
                    if (eax_5 s>= arg6)
                        cond:0_1 = arg7 == 2
                        break
                
                result.b = cond:0_1
            else
                result = 1
            
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(result))
            xmm0_2 f- 0
            result:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
                | (xmm0_2 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                float var_38
                sub_6ddc00(&var_38, esi, eax_2, xmm2, &var_38)
                int16_t top = top + 1
                float xmm0_4 = xmm0_2 * arg5
                result = *(result_1 i+ 0x10) * 0x2c
                float xmm3_2 = var_38 * xmm0_4
                float var_2c
                float xmm2_2 = var_2c * xmm0_4
                result_1 = *(result + arg8 + 4)
                float xmm1_10 = *(result + arg8 + 8)
                float var_34
                float xmm4_2 = var_34 * xmm0_4
                float var_30
                float xmm5_2 = var_30 * xmm0_4
                float xmm0_5 = *(result + arg8 + 0xc)
                
                if (not(0 f<= *(result + arg8) * xmm3_2 + xmm0_5 * xmm2_2 + xmm4_2 * result_1
                        + xmm5_2 * xmm1_10))
                    xmm2_2 = xmm2_2 * -1f
                    xmm3_2 = xmm3_2 * -1f
                    xmm4_2 = xmm4_2 * -1f
                    xmm5_2 = xmm5_2 * -1f
                
                float xmm4_3 = xmm4_2 + result_1
                *(result + arg8) = xmm3_2 f+ *(result + arg8)
                *(result + arg8 + 4) = xmm4_3
                *(result + arg8 + 8) = xmm5_2 + xmm1_10
                *(result + arg8 + 0xc) = xmm2_2 + xmm0_5
                float var_20
                float xmm0_12 = var_20 * xmm0_4 f+ *(result + arg8 + 0x18)
                float var_24
                float xmm7_3 = var_24 * xmm0_4 f+ *(result + arg8 + 0x14)
                arg2 = var_40
                float var_28
                *(result + arg8 + 0x10) = var_28 * xmm0_4 f+ *(result + arg8 + 0x10)
                *(result + arg8 + 0x14) = xmm7_3
                *(result + arg8 + 0x18) = xmm0_12
                float var_18
                float xmm1_17 = var_18 * xmm0_4 f+ *(result + arg8 + 0x20)
                float var_14
                float xmm2_5 = var_14 * xmm0_4 f+ *(result + arg8 + 0x24)
                float var_1c
                *(result + arg8 + 0x1c) = var_1c * xmm0_4 f+ *(result + arg8 + 0x1c)
                *(result + arg8 + 0x20) = xmm1_17
                *(result + arg8 + 0x24) = xmm2_5
                xmm2 = var_44
                char var_10
                *(result + arg8 + 0x28) = var_10
                ecx = var_60_1
        
        esi += 1
        ecx += 0x18
        var_60_1 = ecx
    while (esi s< result_2)

CookieCheckFunction(result)
return result
