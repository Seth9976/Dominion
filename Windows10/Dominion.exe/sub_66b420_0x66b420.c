// 函数: sub_66b420
// 地址: 0x66b420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ecx
uint32_t eax_2 = sub_64e7a0(ecx)
int32_t var_8c = 0
void var_80
void var_40
void var_30
int128_t* eax_4 = sub_656980(&var_80, 0, eax_2, &var_80, &var_40, &var_30)
int32_t var_9c = 0
int128_t var_60 = *eax_4
float var_20[0x4] = eax_4[1]
int128_t* eax_6 = sub_656980(&var_80, 1, eax_2, &var_80, &var_40, &var_30)
float xmm1[0x4] = var_20
float xmm2[0x4] = eax_6[1]
int32_t eax_7 = *(eax_2 + 0x14e8)
int128_t var_60_1 = *eax_6
float xmm3_1 = _mm_shuffle_ps(xmm2, xmm2, 0x55)
float xmm0_4 = _mm_shuffle_ps(xmm1, xmm1, 0x55)
float xmm2_2 = _mm_shuffle_ps(xmm2, xmm2, 0xaa) - _mm_shuffle_ps(xmm1, xmm1, 0xaa)
int32_t var_90_1
float* eax_10
char const* const ecx_3
int32_t ecx_4

if (eax_7 != 0 && eax_7 != 1)
    eax_10 = eax_7 - 2
    
    if (eax_7 == 2)
        ecx_4 = *arg2
        *(eax_2 + 0x138c) = _mm_cvtepi32_ps(zx.o(neg.d(ecx_4))) * (xmm3_1 - xmm0_4)
        goto label_66b50c
    
    char const* const var_8c_1 = "UI2TableSetRange"
    var_90_1 = 0x3f40
    ecx_3 = "Halt"
label_66b5e5:
    sub_63b870(eax_10, &data_801800, ecx_3, "C:\x\ax2017\Engine\UI2.cpp", var_90_1, 
        "UI2TableSetRange")
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

ecx_4 = *arg2
*(eax_2 + 0x1390) = _mm_cvtepi32_ps(zx.o(neg.d(ecx_4))) * xmm2_2
label_66b50c:

if (arg3 == 0 || ecx_4 == 0)
    goto label_66b5b7

var_20[2] = *(eax_2 + 0x16cc)
int32_t xmm0_12 = *(eax_2 + 0x16d0)
var_20[0] = 0
var_20[1] = 0
var_20[3] = xmm0_12
var_20 = var_20
float var_70[0x4]
eax_10 = sub_655430(&var_70, &var_20, eax_2 + 0x1620, &var_70)
bool cond:0_1 = *(eax_2 + 0x14e8) != 1
float xmm0_14[0x4] = *eax_10
float xmm1_5 =
    (_mm_shuffle_ps(xmm0_14, xmm0_14, 0xff) - _mm_shuffle_ps(xmm0_14, xmm0_14, 0x55)) / xmm2_2

if (cond:0_1)
    char const* const var_8c_3 = "UI2TableSetRange"
    var_90_1 = 0x3f49
    ecx_3 = "ui.propsStatic.scrollType == UISCROLL_VERT"
    goto label_66b5e5

float xmm1_6 = xmm1_5 - _mm_cvtepi32_ps(zx.o(int.d(xmm1_5)))
*(eax_2 + 0x1390) = *(eax_2 + 0x1390) - (xmm1_6 + 1f) * xmm2_2
label_66b5b7:
uint32_t result = sub_65bf00(eax_2)
CookieCheckFunction(result)
return result
