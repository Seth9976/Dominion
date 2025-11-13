// 函数: sub_67f6b0
// 地址: 0x67f6b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg1[0xc]

if (result == 0)
    *arg1
    return result

if (result != 1)
    if (result != 2)
        sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x7f8, "GraphEval")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm1_4[0x2] = arg1[3]
    xmm1_4 f- 0
    float xmm0_16 = (zx.o(0)).d
    result:1.b = (xmm1_4 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2
        | (xmm1_4 f< 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        double var_14_2 = fconvert.d(arg2)
        long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(xmm1_4))
        result = _CIfmod()
        xmm0_16 = fconvert.s(x87_r6_2)
    
    float xmm0_19 = xmm0_16 - 0f
    float xmm0_20
    
    if (not(0 f>= xmm0_19) && xmm0_19 < 1f)
        result, xmm0_20 = sub_4ae110(0x18, xmm0_19, (zx.o(0)).d, 1f)
    arg1[4] f- *arg1
    *arg1
    return result

float xmm1[0x2] = arg1[3]
xmm1 f- 0
result:1.b =
    (xmm1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 f< 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int32_t xmm4

if (p_1)
    double var_14_1 = fconvert.d(arg2)
    long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm1))
    result = _CIfmod()
    xmm4 = fconvert.s(x87_r6_1)
else
    xmm4 = (zx.o(0)).d

int32_t ecx = arg1[2]
float xmm4_1 = xmm4 f- 0f
double var_14
var_14:4.d = xmm4_1

if (not(0f < xmm4_1))
    float var_8 = 0f
else if (xmm4_1 < 1f)
    float xmm0_5
    result, xmm0_5 = sub_4ae110(ecx, xmm4_1, (zx.o(0)).d, 1f)
    xmm4_1 = var_14:4.d
    var_8 = xmm0_5
else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
        || ecx == 0x13)
    var_8 = 0f
else
    var_8 = 1f

int32_t xmm0_7

if (not(0f >= xmm4_1) && xmm4_1 < 1f)
    result, xmm0_7 = sub_4ae110(arg1[2], xmm4_1, (zx.o(0)).d, 1f)
*arg1
arg1[1]
return result
