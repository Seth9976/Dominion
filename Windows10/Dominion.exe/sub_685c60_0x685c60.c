// 函数: sub_685c60
// 地址: 0x685c60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = arg3[1].d

if (edx == 0)
    int32_t ecx = arg2[1].d
    *arg4 = *arg2
    arg4[1].d = ecx
    return arg4

int32_t eax_1 = arg2[1].d

if (eax_1 == 0)
    *arg4 = *arg3
    arg4[1].d = edx
    return arg4

float xmm0_2 = *arg3
float var_14

if (edx != eax_1)
    float xmm1_3 = *arg2
    int32_t edi_2 = eax_1 & 2
    
    if ((edx.b & 2) == 0)
        if (edi_2 == 0)
            xmm0_2 = (zx.o(0)).d
        else
            xmm0_2 = xmm1_3
    else if (edi_2 != 0)
        xmm0_2 = _mm_min_ss(xmm0_2, xmm1_3)
    
    int32_t xmm1_4 = *(arg2 + 8)
    int32_t edi_4 = eax_1 & 1
    var_14 = xmm0_2
    int32_t xmm0_5 = *(arg3 + 8)
    
    if ((edx.b & 1) == 0)
        if (edi_4 == 0)
            xmm0_5 = (zx.o(0)).d
        else
            xmm0_5 = xmm1_4
    else if (edi_4 != 0)
        xmm0_5 = _mm_max_ss(xmm0_5, xmm1_4)
    
    int32_t xmm1_5 = *(arg2 + 4)
    int32_t edi_6 = eax_1 & 4
    int32_t var_c_1 = xmm0_5
    int32_t xmm0_6 = *(arg3 + 4)
    
    if ((edx.b & 4) == 0)
        if (edi_6 == 0)
            xmm0_6 = (zx.o(0)).d
        else
            xmm0_6 = xmm1_5
    else if (edi_6 != 0)
        xmm0_6 = _mm_max_ss(xmm0_6, xmm1_5)
    
    int32_t xmm1_6 = *(arg2 + 0xc)
    int32_t var_10_1 = xmm0_6
    int32_t xmm0_7 = *(arg3 + 0xc)
    int32_t ecx_3 = eax_1 & 8
    
    if ((edx.b & 8) == 0)
        if (ecx_3 == 0)
            xmm0_7 = (zx.o(0)).d
        else
            xmm0_7 = xmm1_6
    else if (ecx_3 != 0)
        xmm0_7 = _mm_min_ss(xmm0_7, xmm1_6)
    
    int32_t var_8_1 = xmm0_7
    edx |= eax_1
else
    int32_t xmm3_1 = *(arg3 + 8)
    int32_t xmm1_1
    int32_t xmm2_1
    
    if (not(xmm3_1 f< xmm0_2))
        xmm2_1 = *(arg3 + 4)
        xmm1_1 = *(arg3 + 0xc)
    
    if (xmm3_1 f< xmm0_2 || xmm1_1 f< xmm2_1)
        sub_63b870(eax_1, &data_801800, "RectIsNormalized(r0)", "C:\x\ax2017\Engine\Rect.cpp", 
            0xe9, "RectIntersect")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm0_3 = __maxss_xmmss_memss(xmm0_2, *arg2)
    float xmm3_2 = __minss_xmmss_memss(xmm3_1, *(arg2 + 8))
    int32_t xmm2_2 = __maxss_xmmss_memss(xmm2_1, *(arg2 + 4))
    int32_t xmm1_2 = __minss_xmmss_memss(xmm1_1, *(arg2 + 0xc))
    var_14 = xmm0_3
    float var_c = xmm3_2
    int32_t var_10 = xmm2_2
    int32_t var_8 = xmm1_2
    
    if (xmm0_3 > xmm3_2 || not(xmm2_2 f<= xmm1_2))
        *arg4 = data_7ff530
        arg4[1].d = edx
        return arg4

*arg4 = var_14.o
arg4[1].d = edx
return arg4
