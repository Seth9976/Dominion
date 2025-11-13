// 函数: sub_64ac90
// 地址: 0x64ac90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
__security_cookie
float xmm0_2 = arg3.d
float xmm2_1 = arg1.d - xmm0_2
float xmm0_4 = arg1:4.d f- arg3:4.d
float xmm1_1 = arg2 - arg4
uint32_t result
float xmm0_8
result, xmm0_8 = sub_4ac580(ebp_1, xmm0_4 * xmm0_4 + xmm2_1 * xmm2_1 + xmm1_1 * xmm1_1)

if (not(9.99999975e-06f > xmm0_8))
    float xmm1_4 = arg3:4.d f- arg1:4.d
    float xmm2_4 = xmm0_2 f- arg1.d
    float xmm3_2 = arg4 - arg2
    float xmm0_13 = sub_4ac580(ebp_1, xmm1_4 * xmm1_4 + xmm2_4 * xmm2_4 + xmm3_2 * xmm3_2)
    float eax_4
    int64_t xmm0_14
    
    if (9.99999975e-06f <= xmm0_13)
        float xmm3_3 = 1f / (xmm0_13 + 9.99999975e-06f)
        float xmm1_10 = xmm3_3 * xmm1_4
        float xmm3_4 = xmm3_3 * xmm3_2
        float xmm2_6 = xmm3_3 * xmm2_4
        float xmm1_15 =
            1f / sub_4ac580(ebp_1, xmm1_10 * xmm1_10 + xmm2_6 * xmm2_6 + xmm3_4 * xmm3_4)
        float var_bc_1 = xmm1_15 * xmm1_10
        xmm0_14 = (xmm1_15 * xmm2_6).q
        eax_4 = xmm1_15 * xmm3_4
    else
        xmm0_14 = 0
        eax_4 = 0f
    
    float xmm1_19[0x4] = xmm2_4 * 0.5f f+ arg1.d
    float xmm4_3 = xmm1_4 * 0.5f f+ arg1:4.d
    float xmm3_7 = xmm3_2 * 0.5f + arg2
    float xmm2_8 = data_cf65e0:4 f- xmm1_19
    float xmm0_27 = data_cf65e0:8 f- xmm4_3
    float xmm1_21 = data_cf65e0:0xc f- xmm3_7
    float xmm0_32 = sub_4ac580(ebp_1, xmm0_27 * xmm0_27 + xmm2_8 * xmm2_8 + xmm1_21 * xmm1_21) / 10f
    int32_t* edi_1 = data_1724a58
    int32_t var_b0 = arg5
    int32_t* esi_2 = data_1724a5c
    int32_t var_ac_2 = 0
    int128_t xmm1_23 = data_7ff520
    int64_t var_90
    var_90.o = xmm1_23
    void var_70
    sub_64a400(_mm_unpacklo_ps(xmm1_19, xmm4_3), xmm3_7, data_cf65e0:4.q, data_cf65e0:0xc, 0, 1f, 
        xmm0_14, eax_4, edi_1, &var_70, xmm0_8 * 100f, xmm0_32 * 0.0299999993f * 100f, xmm1_23)
    float xmm2_12[0x4] = var_90.o
    float var_40 = xmm2_12
    int32_t xmm0_40 = _mm_shuffle_ps(xmm2_12, xmm2_12, 0xff)
    int32_t var_3c_1 = xmm0_40
    xmm1_19[0] = xmm2_12
    int32_t xmm1_26 = _mm_shuffle_ps(xmm2_12, xmm2_12, 0xaa)
    int32_t xmm2_13 = _mm_shuffle_ps(xmm2_12, xmm2_12, 0x55)
    int32_t var_38_1 = xmm1_26
    int32_t var_34_1 = xmm0_40
    xmm1_19[1] = xmm2_13
    xmm1_19[2] = xmm1_26
    xmm1_19[3] = xmm2_13
    result = sub_646bb0(&var_b0, &var_40, &var_70, &var_b0, edi_1, esi_2)

CookieCheckFunction(result)
return result
