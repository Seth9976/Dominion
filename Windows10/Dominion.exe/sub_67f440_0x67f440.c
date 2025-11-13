// 函数: sub_67f440
// 地址: 0x67f440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg1[0x12]

if (eax == 0)
    arg1[1]
    return *arg1

double var_14
float xmm1_9
float xmm2_9

if (eax != 1)
    if (eax != 2)
        sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x7f8, "GraphEval")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm1_10[0x2] = arg1[5]
    float xmm3_4 = (zx.o(0)).d
    xmm1_10 f- 0
    eax:1.b = (xmm1_10 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_10, 0f) ? 1 : 0) << 2
        | (xmm1_10 f< 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    float xmm0_11
    
    if (p_3)
        double var_14_2 = fconvert.d(arg2)
        long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(xmm1_10))
        _CIfmod()
        xmm0_11 = fconvert.s(x87_r6_2)
        xmm3_4 = (zx.o(0)).d
    else
        xmm0_11 = (zx.o(0)).d
    
    float xmm0_14 = xmm0_11 - 0f
    
    if (not(0 f>= xmm0_14))
        if (xmm0_14 < 1f)
            xmm3_4 = sub_4ae110(0x18, xmm0_14, (zx.o(0)).d, 1f)
        else
            xmm3_4 = 1f
    
    xmm2_9 = (arg1[6] f- *arg1) * xmm3_4 f+ *arg1
    xmm1_9 = (arg1[7] f- arg1[1]) * xmm3_4 f+ arg1[1]
else
    float xmm1[0x2] = arg1[5]
    xmm1 f- 0
    eax:1.b =
        (xmm1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 f< 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    int32_t xmm0_1
    
    if (p_1)
        double var_14_1 = fconvert.d(arg2)
        long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm1))
        _CIfmod()
        xmm0_1 = fconvert.s(x87_r6_1)
    else
        xmm0_1 = (zx.o(0)).d
    
    int32_t ecx = arg1[4]
    float xmm0_4 = xmm0_1 f- 0f
    int32_t xmm6_1 = 0x3f800000
    var_14:4.d = xmm0_4
    float var_8_1
    
    if (not(0f < xmm0_4))
        var_8_1 = 0f
    else if (xmm0_4 < 1f)
        xmm6_1 = 0x3f800000
        var_8_1 = sub_4ae110(ecx, xmm0_4, (zx.o(0)).d, 1f)
        xmm0_4 = var_14:4.d
    else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
            || ecx == 0x13)
        var_8_1 = 0f
    else
        var_8_1 = 1f
    
    int32_t ecx_1 = arg1[4]
    
    if (0f >= xmm0_4)
        xmm6_1 = (zx.o(0)).d
    else if (xmm0_4 < 1f)
        xmm6_1 = sub_4ae110(ecx_1, xmm0_4, (zx.o(0)).d, 1f)
    else if (ecx_1 == 0xa || ecx_1 == 0xc || ecx_1 == 0xb || ecx_1 == 0xd || ecx_1 == 0xe
            || ecx_1 == 0xf || ecx_1 == 0x13)
        xmm6_1 = (zx.o(0)).d
    
    float xmm0_7 = *arg1
    float xmm4_4 = (xmm0_7 - xmm0_7) * var_8_1 + xmm0_7
    float xmm0_8 = arg1[1]
    float xmm3_3 = (xmm0_8 - xmm0_8) * var_8_1 + xmm0_8
    float xmm0_9 = arg1[2]
    float xmm0_10 = arg1[3]
    xmm2_9 = ((xmm0_9 - xmm0_9) f* xmm6_1 + xmm0_9 - xmm4_4) * 0f + xmm4_4
    xmm1_9 = ((xmm0_10 - xmm0_10) f* xmm6_1 + xmm0_10 - xmm3_3) * 0f + xmm3_3

var_14.d = xmm2_9
int32_t result = var_14.d
var_14:4.d = xmm1_9
return result
