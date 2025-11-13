// 函数: sub_699790
// 地址: 0x699790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_1

if (*(arg3 + 4) != 6)
    sub_63b870(eax_1, &data_801800, "el.type == UI_GROUP", "C:\x\ax2017\Engine\UIDef.cpp", 0x835, 
        "UIElementGroupTransform")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

float xmm0 = *(arg2 + 0x10)
xmm0 - 1f
eax_1:1.b =
    (xmm0 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 1f) ? 1 : 0) << 2 | (xmm0 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    *arg4 = *arg5
    arg4[1] = arg5[1]
    arg4[2] = arg5[2]
    arg4[3] = arg5[3]
    arg4[4] = arg5[4]
    arg4[5] = arg5[5]
    CookieCheckFunction(arg4)
    return arg4

int32_t ecx_2 = *(arg3 + 0x84)
float xmm0_7 = xmm0 - 0f
int32_t xmm5

if (not(0 f< xmm0_7))
    xmm5 = (zx.o(0)).d
else if (xmm0_7 < 1f)
    xmm5 = sub_4ae110(ecx_2, xmm0_7, (zx.o(0)).d, 1f)
else if (ecx_2 == 0xa || ecx_2 == 0xc || ecx_2 == 0xb || ecx_2 == 0xd || ecx_2 == 0xe
        || ecx_2 == 0xf || ecx_2 == 0x13)
    xmm5 = (zx.o(0)).d
else
    xmm5 = 0x3f800000

float xmm0_9 = *(arg3 + 0x80)
float xmm7[0x4] = *arg5
float xmm6[0x4] = arg5[1]
int128_t xmm0_10 = arg5[2]
float xmm1_5 = ((0f - xmm0_9) f* xmm5 + xmm0_9) f* *(arg5 + 0xc)
int128_t xmm0_11 = arg5[3]
int128_t xmm0_12 = arg5[4]
int128_t xmm0_13 = arg5[5]
float xmm2_5 = ((0f f- *(arg3 + 0x7c)) f* xmm5 f+ *(arg3 + 0x7c)) f* *(arg5 + 0xc)
float xmm7_1 = xmm7 f+ xmm2_5
float xmm0_15 = xmm7[1] + xmm1_5
float xmm6_2 = _mm_shuffle_ps(xmm6, xmm6, 0xaa) + xmm2_5
xmm7[1] = xmm0_15
float xmm0_17 = xmm6[3] + xmm1_5
xmm7[0] = xmm7_1
xmm6[2] = xmm6_2
float xmm1_6 = 1f f- *(arg3 + 0x74)
xmm6[3] = xmm0_17
float xmm1_8 = xmm1_6 f* xmm5 f+ *(arg3 + 0x74)
int32_t xmm0_18

if (0 f<= xmm1_8)
    xmm0_18 = _mm_min_ss(0x3f800000, xmm1_8)
else
    xmm0_18 = (zx.o(0)).d

float xmm0_19 = xmm0_18 f* xmm7[2]
xmm7[2] = xmm0_19
float xmm0_20 = *(arg3 + 0x78)
float var_1b8[0x4]
float xmm1_9[0x4] = *sub_697400(&var_1b8, arg3 + 0x10, arg5, &var_1b8, arg3 + 0x20)
float xmm0_22 = _mm_shuffle_ps(xmm1_9, xmm1_9, 0xaa)
float xmm6_5 = (xmm1_9[0] + xmm0_22) * 0.5f
float xmm5_4 = (_mm_shuffle_ps(xmm1_9, xmm1_9, 0x55) + _mm_shuffle_ps(xmm1_9, xmm1_9, 0xff)) * 0.5f
int128_t var_c8 = xmm0_10
int128_t var_c8_1 = xmm0_10
int128_t var_b8 = xmm0_11
float xmm1_14 = (1f - xmm0_20) f* xmm5 + xmm0_20
int128_t var_b8_1 = xmm0_11
int128_t var_98 = xmm0_13
int128_t var_128 = xmm0_13
int128_t var_a8 = xmm0_12
int128_t var_a8_1 = xmm0_12
float var_e8[0x4] = xmm7
float xmm0_30 = xmm1_14 * ((xmm5_4 ^ (data_8937c0.o).d) + xmm7[1]) + 0f + xmm5_4
float xmm1_16 = xmm1_14 * ((xmm6_5 ^ (data_8937c0.o).d) + xmm7_1) + 0f
float var_178[0x4] = xmm7
float xmm4_1 = _mm_shuffle_ps(xmm7, xmm7, 0xff)
xmm7[1] = xmm0_30
xmm7[3] = xmm1_14 * xmm4_1
xmm7[0] = xmm1_16 + xmm6_5
xmm7[2] = xmm0_19
float xmm0_36 = xmm6[0] f* xmm6
float xmm6_7 = _mm_shuffle_ps(xmm6, xmm6, 0x55)
float xmm1_21 = xmm6_7 * _mm_shuffle_ps(xmm6, xmm6, 0x55) * _mm_shuffle_ps(xmm6, xmm6, 0x55)
    * _mm_shuffle_ps(xmm6, xmm6, 0x55)
int32_t var_d0 = _mm_shuffle_ps(xmm6, xmm6, 0xaa)
int32_t var_cc = _mm_shuffle_ps(xmm6, xmm6, 0xff)
float var_d4 = xmm1_21
int128_t var_168 = (xmm0_36 f* xmm6 f* xmm6).o
var_168.d = xmm6
var_168:8.d = xmm6_2
var_168:4.d = xmm6_7
var_168:0xc.d = xmm6[3]
*arg4 = xmm7
arg4[1] = var_168
arg4[2] = xmm0_10
arg4[3] = xmm0_11
arg4[4] = xmm0_12
arg4[5] = xmm0_13
CookieCheckFunction(arg4)
return arg4
