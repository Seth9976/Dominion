// 函数: sub_67a300
// 地址: 0x67a300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
uint128_t xmm0 = zx.o(*(arg3 + 0x14c0))
float xmm1_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x14bc)))
float xmm0_1 = _mm_cvtepi32_ps(xmm0)
float var_6c = xmm1_1
float var_70 = xmm0_1

if (arg2 != 0)
    uint128_t xmm0_2 = zx.o(arg2[1])
    xmm1_1 = _mm_cvtepi32_ps(zx.o(*arg2))
    xmm0_1 = _mm_cvtepi32_ps(xmm0_2)
    var_6c = xmm1_1
    var_70 = xmm0_1

xmm1_1 f- 0
float var_80 = xmm1_1
float var_7c = xmm0_1
int32_t* eax_2
eax_2:1.b =
    (xmm1_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2 | (xmm1_1 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    xmm1_1 = 1f
    var_6c = 1f
    var_80 = 1f

xmm0_1 f- 0
eax_2:1.b =
    (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2 | (xmm0_1 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}

if (not(p_3))
    xmm0_1 = 1f
    var_70 = 1f
    var_7c = 1f

float xmm0_3 = xmm0_1 * xmm1_1
xmm0_3 f- 0
eax_2:1.b =
    (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2 | (xmm0_3 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (p_5)
    eax_2 = *(arg3 + 0x189c)
    
    if (eax_2 s< 0)
        sub_63b870(eax_2, &data_801800, "numChildren >= 0", "C:\x\ax2017\Engine\UI2.cpp", 0xba8, 
            "UI2::countChildren")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (eax_2 != 0)
        float var_20 = *(arg3 + 0x16cc)
        int32_t xmm0_5 = *(arg3 + 0x16d0)
        float var_28 = 0f
        int32_t var_24_1 = 0
        int32_t var_1c_1 = xmm0_5
        var_28.o = var_28.o
        int128_t var_b8
        float xmm3_1[0x4] = *sub_655430(&var_b8, &var_28, arg3 + 0x1620, &var_b8)
        int32_t var_114_2 = 0
        float xmm2_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
        void var_38
        int32_t* var_118_1 = &var_38
        float xmm1_5 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff) - _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55)
        void var_48
        int128_t* var_11c_1 = &var_48
        void var_c8
        int128_t* var_120_1 = &var_c8
        var_20 = xmm2_2 f- xmm3_1
        float var_1c_2 = xmm1_5
        int128_t* eax_6 = sub_656980(&var_c8, 0, arg3, var_120_1, var_11c_1, var_118_1)
        int32_t var_124_1 = 0
        int128_t var_68 = *eax_6
        float xmm0_10[0x4] = eax_6[1]
        int32_t* var_128_1 = &var_38
        int128_t* var_12c_1 = &var_48
        int128_t* var_130_1 = &var_c8
        float var_a8[0x4] = xmm0_10
        float var_58_1[0x4] = xmm0_10
        int128_t* eax_8 = sub_656980(&var_c8, 1, arg3, var_130_1, var_12c_1, var_128_1)
        float xmm1_6[0x4] = var_a8
        int128_t* ecx_3 = &var_68
        int32_t* edx_1 = &data_bf21e8
        int32_t i_1 = 0x1c
        float xmm3_2[0x4] = eax_8[1]
        int128_t var_100_1 = *eax_8
        float xmm2_5 = _mm_shuffle_ps(xmm3_2, xmm3_2, 0x55)
        float xmm0_13 = _mm_shuffle_ps(xmm1_6, xmm1_6, 0x55)
        uint32_t xmm3_4[0x4] =
            _mm_shuffle_ps(xmm3_2, xmm3_2, 0xaa) - _mm_shuffle_ps(xmm1_6, xmm1_6, 0xaa)
        float xmm2_7 = _mm_and_ps(xmm2_5 - xmm0_13, 0x7fffffff)
        float xmm3_5 = _mm_and_ps(xmm3_4, 0x7fffffff)
        int32_t i
        
        do
            if (*ecx_3 != *edx_1)
                float xmm0_14 = *(arg3 + 0x14cc)
                float xmm0_15 = *(arg3 + 0x14d0)
                int32_t ecx_6 = *(arg3 + 0x13fc)
                float xmm0_16 = *(arg3 + 0x14d4)
                float xmm0_17 = *(arg3 + 0x14d8)
                var_b8 = xmm3_5 * var_70
                float var_140[0x4] = xmm3_1
                float eax_10
                float edx_2
                eax_10, edx_2 = sub_6565b0(&var_140, edx_1, ecx_6, var_140, xmm2_7, xmm3_5, 
                    xmm0_14, xmm0_15, xmm0_16, xmm0_17, var_80, var_7c)
                float xmm0_22 = (var_70 - 1f) * edx_2 f+ var_b8.d
                var_a8[2] = xmm2_7 * var_6c + (var_6c - 1f) * eax_10
                var_a8[3] = xmm0_22
                int32_t* eax_12 = sub_67a1c0(&var_a8[2], &var_20, arg3, &var_a8[2], arg4)
                CookieCheckFunction(eax_12)
                return eax_12
            
            ecx_3 += 4
            edx_1 = &edx_1[1]
            i = i_1
            i_1 -= 4
        while (i u>= 4)

eax_2.b = 0
CookieCheckFunction(eax_2)
return eax_2
