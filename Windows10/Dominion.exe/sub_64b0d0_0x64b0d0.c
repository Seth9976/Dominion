// 函数: sub_64b0d0
// 地址: 0x64b0d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result

if (_finite(_mm_cvtps_pd(*arg1)) != 0 && _finite(_mm_cvtps_pd(*(arg1 + 4))) != 0
        && _finite(_mm_cvtps_pd(arg1[1].d)) != 0 && _finite(_mm_cvtps_pd(*(arg1 + 0xc))) != 0)
    float xmm2_1 = *(arg1 + 0xc)
    float xmm0_8 = *arg1
    float xmm1_1 = *(arg1 + 4)
    float xmm3_1 = arg1[1].d
    int32_t __saved_ebp
    int32_t xmm0_13
    result, xmm0_13 = sub_4ac580(&__saved_ebp, 
        xmm0_8 * xmm0_8 + xmm2_1 * xmm2_1 + xmm1_1 * xmm1_1 + xmm3_1 * xmm3_1)
    
    if (not(0.899999976f f> xmm0_13) && not(xmm0_13 f> 1.10000002f))
        result.b = 1
        return result

result.b = 0
return result
