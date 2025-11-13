// 函数: sub_6559a0
// 地址: 0x6559a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
void* esi = data_cf65b8
float xmm2 = data_cf65c0
int32_t eax_2 = data_cf65e0:0xc
float var_84 = xmm2
uint128_t xmm3 = zx.o(*(esi + 0x18))
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(esi + 0x14)))
int32_t var_9c = eax_2
float xmm3_1 = _mm_cvtepi32_ps(xmm3)
int32_t var_c4 = 0
int32_t var_c0 = 0
float var_bc = xmm0_1
float var_b8 = xmm3_1
float xmm1_2 = xmm0_1 / xmm3_1 * xmm2
float var_88 = xmm1_2
int64_t xmm1_3 = data_cf65e0:4.q
float var_90 = xmm1_2 ^ (data_8937c0.o).d
int32_t var_8c = xmm2 ^ (data_8937c0.o).d
int64_t var_a4 = xmm1_3
int128_t var_d4 = var_90.o
int128_t var_b4 = data_cf65d0:4.o
void var_98
int64_t* result = sub_6dc460(&var_98, arg3, &var_d4, &var_98)
float xmm4 = arg2[2]
float xmm5 = arg2[4]
float xmm6 = arg2[3]
int96_t xmm0_8 = (*result).12
float xmm2_1 = arg2[1]
float xmm1_5 = xmm4 f* arg2[1]
int64_t xmm0_9 = result[2]
float xmm0_11 = xmm4 * xmm4
float xmm3_3 = xmm5 * xmm5
float xmm0_13 = xmm6 * xmm5
float xmm2_2 = xmm2_1 * xmm2_1
float xmm3_5 = xmm1_5 - xmm0_13
float xmm7_1 = xmm6 * xmm6
float xmm0_17 = xmm6 f* arg2[1]
float xmm3_8 = xmm2_2 + xmm3_3 - xmm0_11 - xmm7_1
float xmm3_10 = xmm4 * xmm5
float xmm0_18 = xmm0_17 + xmm3_10
float xmm6_1 = xmm6 * xmm4
float xmm3_13 = xmm3_8 * 0f + xmm3_5 * 0f + xmm0_18 + xmm0_18
float xmm0_26 = xmm3_3 - xmm2_2
float xmm3_15 = xmm0_13 + xmm1_5
float xmm0_28 = xmm0_26 + xmm0_11 - xmm7_1
float xmm0_30 = arg2[1] f* xmm5
float xmm1_7 = xmm6_1 - xmm0_30
float xmm5_3 = xmm0_26 - xmm0_11 + xmm7_1
float xmm4_4 = xmm0_28 * 0f + xmm3_15 * 0f + xmm1_7 + xmm1_7
float xmm0_36 = xmm0_30 + xmm6_1
float xmm4_6 = xmm0_17 - xmm3_10
float xmm4_8 = *arg2 * 0f
float xmm0_39 = arg2[5]
float xmm0_40 = arg2[7]
float xmm3_17 = xmm4_8 + xmm4_8
float xmm2_7 = xmm0_36 * 0f + xmm4_6 * 0f + xmm5_3
float xmm2_9 = xmm4_8 + xmm4_8
float xmm2_12 = (xmm4_8 * xmm0_28 + xmm2_9 * xmm3_15 + xmm3_17 * xmm1_7 f+ arg2[6]) * xmm4_4
    + (xmm3_8 * xmm4_8 + xmm2_9 * xmm3_5 + xmm2_9 * xmm0_18 f+ arg2[5]) * xmm3_13
float xmm3_18 = xmm0_9.d
float xmm2_14 = (xmm2_12
    + (xmm3_17 * xmm4_6 + xmm0_36 * xmm3_17 + xmm4_8 * xmm5_3 f+ arg2[7]) * xmm2_7) ^ (data_8937c0.o).d
float xmm2_15[0x4] = *result
float xmm2_16 = _mm_shuffle_ps(xmm2_15, xmm2_15, 0xff)
uint32_t xmm1_23[0x4] = xmm4_4 * xmm3_18 + xmm2_16 * xmm3_13 + xmm2_7 f* xmm0_9:4.d
float var_5c_1 = xmm1_23

if (not(9.99999975e-06f f> __andps_xmmxud_memxud(xmm1_23, data_8937a0.o)))
    float xmm5_4 = xmm0_8.d
    float xmm1_25 = xmm0_8:4.d
    float xmm6_11 = xmm4_4 * xmm1_25 + xmm5_4 * xmm3_13 + xmm2_7 f* xmm0_8:8.d + xmm2_14
    
    if (not(0 f< xmm6_11 * var_5c_1))
        float xmm6_13 = (xmm6_11 ^ (data_8937c0.o).d) / var_5c_1
        int32_t var_e4_1 = 0
        int32_t var_e8_1 = 0
        int96_t var_30
        var_30:8.o = xmm2_16 * xmm6_13 + xmm5_4
        int64_t var_48
        float* eax_4 = sub_655800(&var_48)
        uint128_t xmm1_26 = zx.o(*(esi + 0x14))
        float xmm2_20 = _mm_cvtepi32_ps(zx.o(*(esi + 0x18)))
        int64_t xmm0_59 = *eax_4
        float xmm2_21 = xmm2_20 - 0f
        float xmm1_28 = _mm_cvtepi32_ps(xmm1_26) - 0f
        float var_e4_2 = xmm2_21
        float var_e8_2 = xmm1_28
        var_48 = *sub_655800(&var_90)
        float xmm1_29 = 1f f/ *arg2
        float xmm2_27 = (var_30:8.d f- xmm0_59.d) / (var_48.d f- xmm0_59.d) * xmm1_28 + 0f - xmm0_39
        float xmm4_13 = 0f - xmm0_40
        float xmm3_26 =
            (xmm3_18 * xmm6_13 + xmm1_25 f- xmm0_59:4.d) / (xmm1_28 f- xmm0_59:4.d) * xmm2_21
            + 0f f- arg2[6]
        float xmm3_28 = arg4[1].d
        float xmm4_16 = *arg4
        float xmm5_10 = ((xmm3_26 + xmm3_26) * xmm3_15 + xmm3_8 * xmm2_27
            + (xmm4_13 + xmm4_13) * xmm4_6) * xmm1_29
        float xmm2_32 = ((xmm2_27 + xmm2_27) * xmm3_5 + xmm3_26 * xmm0_28
            + (xmm4_13 + xmm4_13) * xmm0_36) * xmm1_29
        int32_t xmm0_70
        int32_t xmm1_30
        
        if (not(xmm3_28 < xmm4_16))
            xmm1_30 = *(arg4 + 4)
            xmm0_70 = *(arg4 + 0xc)
        
        if (xmm3_28 < xmm4_16 || xmm0_70 f< xmm1_30)
            sub_63b870(arg4, &data_801800, "RectIsNormalized(r)", "C:\x\ax2017\Engine\Rect.cpp", 
                0xa4, "RectContains")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (not(xmm5_10 < xmm4_16) && not(xmm2_32 f< xmm1_30) && not(xmm3_28 < xmm5_10)
                && not(xmm0_70 f< xmm2_32))
            result.b = 1
            CookieCheckFunction(result)
            return result

result.b = 0
CookieCheckFunction(result)
return result
