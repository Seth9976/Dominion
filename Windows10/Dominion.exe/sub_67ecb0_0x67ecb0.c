// 函数: sub_67ecb0
// 地址: 0x67ecb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg1[0xc]

if (eax == 0)
    return *arg1

if (eax != 1)
    if (eax != 2)
        sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x7f8, "GraphEval")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm1_1[0x2] = arg1[3]
    xmm1_1 f- 0
    eax:1.b = (xmm1_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
        | (xmm1_1 f< 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    int32_t xmm3_3
    
    if (p_3)
        double var_14_2 = fconvert.d(arg2)
        long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(xmm1_1))
        _CIfmod()
        xmm3_3 = fconvert.s(x87_r6_2)
    else
        xmm3_3 = (zx.o(0)).d
    
    float xmm3_4 = xmm3_3 f- 0f
    int32_t xmm1_2
    
    if (0 f< xmm3_4)
        xmm1_2 = 0x3f800000
        
        if (not(xmm3_4 >= 1f))
            xmm1_2 = sub_4ae110(0x18, xmm3_4, (zx.o(0)).d, 1f)
    else
        xmm1_2 = (zx.o(0)).d
    
    int32_t ecx_4 = *arg1
    float xmm0_20 = _mm_cvtepi32_ps(zx.o(arg1[4] - ecx_4)) f* xmm1_2
    
    if (0 f<= xmm0_20)
        return int.d(xmm0_20 + 0.5f) + ecx_4
    
    return int.d(xmm0_20 - 0.5f) + ecx_4

float xmm2_1[0x2] = arg1[3]
int32_t xmm1 = (zx.o(0)).d
xmm2_1 f- 0
eax:1.b = (xmm2_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
    | (xmm2_1 f< 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int32_t xmm3_1

if (p_1)
    double var_14_1 = fconvert.d(arg2)
    long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm2_1))
    _CIfmod()
    xmm3_1 = fconvert.s(x87_r6_1)
    xmm1 = (zx.o(0)).d
else
    xmm3_1 = (zx.o(0)).d

int32_t ecx = arg1[2]
float xmm3_2 = xmm3_1 f- 0f
int32_t xmm0_3 = 0x3f800000
double var_14
var_14:4.d = xmm3_2
int32_t xmm2_2

if (not(0f < xmm3_2))
    xmm2_2 = (zx.o(0)).d
else if (xmm3_2 < 1f)
    int32_t xmm0_5 = sub_4ae110(ecx, xmm3_2, xmm1, 1f)
    xmm3_2 = var_14:4.d
    xmm2_2 = xmm0_5
    xmm0_3 = 0x3f800000
    xmm1 = (zx.o(0)).d
else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
        || ecx == 0x13)
    xmm2_2 = (zx.o(0)).d
else
    xmm2_2 = 0x3f800000

int32_t ecx_1 = arg1[2]

if (not(0f < xmm3_2))
    xmm0_3 = (zx.o(0)).d
else if (xmm3_2 < 1f)
    xmm0_3 = sub_4ae110(ecx_1, xmm3_2, xmm1, 1f)
else if (ecx_1 == 0xa || ecx_1 == 0xc || ecx_1 == 0xb || ecx_1 == 0xd || ecx_1 == 0xe
        || ecx_1 == 0xf || ecx_1 == 0x13)
    xmm0_3 = (zx.o(0)).d

float xmm2_6 = xmm2_2 f* 0f
float xmm2_7

if (0 f<= xmm2_6)
    xmm2_7 = xmm2_6 + 0.5f
else
    xmm2_7 = xmm2_6 - 0.5f

float xmm0_7 = xmm0_3 f* 0f
int32_t ecx_3 = int.d(xmm2_7) + *arg1
float xmm0_8

if (0 f<= xmm0_7)
    xmm0_8 = xmm0_7 + 0.5f
else
    xmm0_8 = xmm0_7 - 0.5f

float xmm0_11 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_8) - ecx_3 + arg1[1])) * 0f

if (0 f<= xmm0_11)
    return int.d(xmm0_11 + 0.5f) + ecx_3

return int.d(xmm0_11 - 0.5f) + ecx_3
