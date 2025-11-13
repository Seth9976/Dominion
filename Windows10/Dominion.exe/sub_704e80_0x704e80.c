// 函数: sub_704e80
// 地址: 0x704e80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t mask = 0
void* ecx_7

if (arg3 != 0 || *(data_147b06c + 0x9c) == 0)
    ecx_7 = data_147ded4
else
    mask = 0x4000
    float red = _mm_cvtepi32_ps(zx.o(arg2.b)) / 255f
    ecx_7 = data_147ded4
    float green = _mm_cvtepi32_ps(zx.o((arg2 u>> 8).b)) / 255f
    float blue = _mm_cvtepi32_ps(zx.o((arg2 u>> 0x10).b)) / 255f
    float alpha = _mm_cvtepi32_ps(zx.o(arg2 u>> 0x18)) / 255f
    float xmm0_1 = *(ecx_7 + 0x423c)
    xmm0_1 - red
    uint32_t eax_4
    eax_4:1.b = (xmm0_1 == red ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, red) ? 1 : 0) << 2
        | (xmm0_1 < red ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
    label_704f7c:
        glClearColor(red, green, blue, alpha)
        ecx_7 = data_147ded4
        *(ecx_7 + 0x423c) = red
        *(ecx_7 + 0x4240) = green
        *(ecx_7 + 0x4244) = blue
        *(ecx_7 + 0x4248) = alpha
    else
        float xmm0_2 = *(ecx_7 + 0x4240)
        xmm0_2 - green
        eax_4:1.b = (xmm0_2 == green ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, green) ? 1 : 0) << 2
            | (xmm0_2 < green ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            goto label_704f7c
        
        float xmm0_3 = *(ecx_7 + 0x4244)
        xmm0_3 - blue
        eax_4:1.b = (xmm0_3 == blue ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, blue) ? 1 : 0) << 2
            | (xmm0_3 < blue ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6)
            goto label_704f7c
        
        float xmm0_4 = *(ecx_7 + 0x4248)
        xmm0_4 - alpha
        eax_4:1.b = (xmm0_4 == alpha ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, alpha) ? 1 : 0) << 2
            | (xmm0_4 < alpha ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            goto label_704f7c

uint32_t result = data_cf65b8

if (*(result + 0x20) != 0 || *(arg1 + 0x426d) != 0)
    mask |= 0x100
    
    if (*(ecx_7 + 0x405c) != 1)
        *(ecx_7 + 0x405c) = 1
        result = glDepthMask(1)

if (mask != 0)
    result = glClear(mask)

CookieCheckFunction(result)
return result
