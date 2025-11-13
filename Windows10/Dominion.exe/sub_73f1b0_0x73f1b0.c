// 函数: sub_73f1b0
// 地址: 0x73f1b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
float xmm0 = arg3[6]
float temp0 = arg2[6]
xmm0 - temp0
int32_t eax_1
eax_1:1.b = (xmm0 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp0) ? 1 : 0) << 2
    | (xmm0 < temp0 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    float xmm0_1 = arg3[3]
    float temp1_1 = arg2[3]
    xmm0_1 - temp1_1
    eax_1:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        float xmm0_2 = arg3[4]
        float temp2_1 = arg2[4]
        xmm0_2 - temp2_1
        eax_1:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2 | (xmm0_2 < temp2_1 ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (not(p_5))
            float xmm0_3 = arg3[5]
            float temp3_1 = arg2[5]
            xmm0_3 - temp3_1
            eax_1:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2 | (xmm0_3 < temp3_1 ? 1 : 0)
            bool p_7 = unimplemented  {test ah, 0x44}
            
            if (not(p_7))
                float xmm0_7 = arg3[8] * 0.5f
                float xmm0_9 = arg3[9] * 0.5f
                float xmm0_11 = arg3[7] * 0.5f * 0.5f
                float xmm5_2 = arg2[7] * 0.5f * 0.5f
                float xmm6_2 = arg2[8] * 0.5f * 0.5f
                float xmm3_2 = arg2[9] * 0.5f * 0.5f
                float xmm5_3 = xmm5_2 + *arg2
                float xmm7_2 = _mm_min_ss(*arg3 - xmm0_11, *arg2 - xmm5_2)
                float xmm3_3 = arg3[2]
                float xmm6_3 = xmm6_2 + arg2[1]
                float xmm7_4 = xmm0_7 * 0.5f
                float xmm7_7 = _mm_min_ss(arg3[1] - xmm7_4, arg2[1] - xmm6_2)
                float xmm7_9 = xmm0_9 * 0.5f
                float xmm7_11 = xmm0_11 + *arg3
                float xmm3_5 = _mm_min_ss(xmm3_3 - xmm7_9, arg2[2] - xmm3_2)
                float xmm0_19 = xmm3_2 + arg2[2]
                float xmm7_12 = _mm_max_ss(xmm7_11, xmm5_3)
                float xmm5_6 = _mm_max_ss(xmm7_4 + arg3[1], xmm6_3)
                float xmm6_6 = _mm_max_ss(xmm7_9 + arg3[2], xmm0_19)
                *arg4 = (xmm7_12 + xmm7_2) * 0.5f
                arg4[1] = (xmm5_6 + xmm7_7) * 0.5f
                arg4[2] = (xmm6_6 + xmm3_5) * 0.5f
                *(arg4 + 0xc) = *(arg3 + 0xc)
                arg4[7] = xmm7_12 - xmm7_2
                arg4[8] = xmm5_6 - xmm7_7
                arg4[9] = xmm6_6 - xmm3_5
                CookieCheckFunction(arg4)
                return arg4

float var_28[0x4]
float* eax_3 = sub_6dbcb0(&var_28)
float xmm0_32[0x4] = *eax_3
int64_t xmm0_33 = *(eax_3 + 0x10)
float* eax_4 = sub_6dbcb0(&var_28)
float xmm1[0x4] = *eax_4
int64_t xmm0_34 = *(eax_4 + 0x10)
float xmm6_8 = xmm0_32[0]
float xmm2_1 = __maxss_xmmss_memss(xmm0_33.d, xmm0_34.d)
float xmm6_9 = _mm_min_ss(xmm6_8, xmm1)
int32_t xmm0_36 = _mm_shuffle_ps(xmm1, xmm1, 0x55)
float xmm3_7 = __maxss_xmmss_memss(xmm0_33:4.d, xmm0_34:4.d)
float xmm5_10 = _mm_min_ss(_mm_shuffle_ps(xmm0_32, xmm0_32, 0x55), xmm0_36)
int32_t xmm4_1 = _mm_shuffle_ps(xmm0_32, xmm0_32, 0xaa)
int32_t xmm7_14 = _mm_shuffle_ps(xmm0_32, xmm0_32, 0xff)
float xmm4_2 = _mm_min_ss(xmm4_1, _mm_shuffle_ps(xmm1, xmm1, 0xaa))
float xmm7_15 = _mm_max_ss(xmm7_14, _mm_shuffle_ps(xmm1, xmm1, 0xff))
*arg4 = (xmm7_15 + xmm6_9) * 0.5f
arg4[1] = (xmm2_1 + xmm5_10) * 0.5f
arg4[2] = (xmm3_7 + xmm4_2) * 0.5f
*(arg4 + 0xc) = data_800248
arg4[7] = xmm7_15 - xmm6_9
arg4[8] = xmm2_1 - xmm5_10
arg4[9] = xmm3_7 - xmm4_2
CookieCheckFunction(arg4)
return arg4
