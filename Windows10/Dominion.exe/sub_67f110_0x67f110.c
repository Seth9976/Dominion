// 函数: sub_67f110
// 地址: 0x67f110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *(arg3 + 0x78)

if (eax == 0)
    *arg5 = *arg3
    return arg5

if (eax != 1)
    if (eax != 2)
        sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x7f8, "GraphEval")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm1_8[0x2] = *(arg3 + 0x24)
    int32_t xmm5_4 = (zx.o(0)).d
    xmm1_8 f- 0
    int32_t xmm0_39 = (zx.o(0)).d
    eax:1.b = (xmm1_8 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_8, 0f) ? 1 : 0) << 2
        | (xmm1_8 f< 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        double var_20_2 = fconvert.d(arg4)
        long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(xmm1_8))
        _CIfmod()
        xmm0_39 = fconvert.s(x87_r6_2)
        xmm5_4 = (zx.o(0)).d
    
    float xmm0_42 = xmm0_39 f- 0f
    
    if (not(0 f>= xmm0_42))
        if (xmm0_42 < 1f)
            xmm5_4 = sub_4ae110(0x18, xmm0_42, (zx.o(0)).d, 1f)
        else
            xmm5_4 = 0x3f800000
    
    int32_t* eax_3 = arg5
    float xmm2_8 = (*(arg3 + 0x2c) f- *(arg3 + 4)) f* xmm5_4 f+ *(arg3 + 4)
    float xmm4_4 = (arg3[3].d f- *(arg3 + 8)) f* xmm5_4 f+ *(arg3 + 8)
    float xmm1_13 = (*(arg3 + 0x34) f- *(arg3 + 0xc)) f* xmm5_4 f+ *(arg3 + 0xc)
    *eax_3 = (*(arg3 + 0x28) f- *arg3) f* xmm5_4 f+ *arg3
    eax_3[1] = xmm2_8
    eax_3[2] = xmm4_4
    eax_3[3] = xmm1_13
    return eax_3

float xmm1[0x2] = *(arg3 + 0x24)
int32_t xmm0_1 = (zx.o(0)).d
xmm1 f- 0
eax:1.b =
    (xmm1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 f< 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int32_t xmm3

if (p_1)
    double var_20_1 = fconvert.d(arg4)
    long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm1))
    _CIfmod()
    xmm3 = fconvert.s(x87_r6_1)
    xmm0_1 = (zx.o(0)).d
else
    xmm3 = (zx.o(0)).d

float xmm3_1 = xmm3 f- 0f
int32_t ecx = arg3[2].d
int32_t var_c = 0x3f800000
double var_20
var_20:4.d = xmm3_1
float var_10

if (0f < xmm3_1)
    float xmm2
    
    if (xmm3_1 < 1f)
        float xmm0_5 = sub_4ae110(ecx, xmm3_1, (zx.o(0)).d, 1f)
        xmm3_1 = var_20:4.d
        xmm2 = xmm0_5
        xmm0_1 = (zx.o(0)).d
    else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
            || ecx == 0x13)
        xmm2 = (zx.o(0)).d
    else
        xmm2 = 1f
    
    var_10 = xmm2
else
    var_10 = 0f

int32_t ecx_1 = arg3[2].d

if (0f >= xmm3_1)
    var_c = xmm0_1
else if (xmm3_1 < 1f)
    var_c = sub_4ae110(ecx_1, xmm3_1, (zx.o(0)).d, 1f)
else if (ecx_1 == 0xa || ecx_1 == 0xc || ecx_1 == 0xb || ecx_1 == 0xd || ecx_1 == 0xe
        || ecx_1 == 0xf || ecx_1 == 0x13)
    var_c = xmm0_1

float xmm0_7 = *arg3
float xmm3_2 = *(arg3 + 0x18)
float xmm4 = *(arg3 + 0x1c)
float xmm7_3 = (xmm0_7 - xmm0_7) * var_10 + xmm0_7
float xmm0_8 = *(arg3 + 8)
float xmm0_9 = *(arg3 + 4)
var_20:4.d = (xmm0_8 - xmm0_8) * var_10 + xmm0_8
float xmm1_7 = arg3[1].d
float xmm5_3 = (xmm0_9 - xmm0_9) * var_10 + xmm0_9
float xmm0_10 = *(arg3 + 0xc)
float xmm2_4 = *(arg3 + 0x14)
float xmm6_3 = (xmm0_10 - xmm0_10) * var_10 + xmm0_10
*arg5 = ((xmm1_7 - xmm1_7) f* var_c + xmm1_7 - xmm7_3) * 0f + xmm7_3
*(arg5 + 4) = ((xmm2_4 - xmm2_4) f* var_c + xmm2_4 - xmm5_3) * 0f + xmm5_3
*(arg5 + 8) = ((xmm3_2 - xmm3_2) f* var_c + xmm3_2 f- var_20:4.d) * 0f f+ var_20:4.d
*(arg5 + 0xc) = ((xmm4 - xmm4) f* var_c + xmm4 - xmm6_3) * 0f + xmm6_3
return arg5
