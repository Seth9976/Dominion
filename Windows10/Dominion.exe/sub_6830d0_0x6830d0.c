// 函数: sub_6830d0
// 地址: 0x6830d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
int128_t var_f0
int32_t edx
float* eax_3 = sub_64b1b0(&var_f0, edx, arg1, &var_f0)
int128_t var_b0 = *eax_3
int128_t var_a0 = *(eax_3 + 0x10)
int128_t var_90 = *(eax_3 + 0x20)
int128_t var_80 = *(eax_3 + 0x30)
int32_t var_24 = sub_4ae0d0(ebp, -0.785398185f)
int32_t edx_1
float xmm0_5
edx_1, xmm0_5 = sub_4ae0f0(ebp, -0.785398185f)
float var_30 = xmm0_5
float xmm1_1 = xmm0_5 * 0f
float var_2c = xmm1_1
float var_28 = xmm1_1
var_30.o = var_30.o
float var_70[0x10]
float* eax_5 = sub_6875e0(&var_70, edx_1, &var_30, &var_70)
var_f0 = *eax_5
int128_t var_e0 = *(eax_5 + 0x10)
int128_t var_d0 = *(eax_5 + 0x20)
int128_t var_c0 = *(eax_5 + 0x30)
float* eax_7 = sub_642ae0(&var_70, &var_f0, &var_b0, &var_70)
int128_t xmm1_2 = *(eax_7 + 0x10)
int128_t xmm2 = *(eax_7 + 0x20)
int128_t xmm3 = *(eax_7 + 0x30)
void* eax_8 = data_147b06c
*(eax_8 + 0x124) = *eax_7
*(eax_8 + 0x164) = 1
*(eax_8 + 0x134) = xmm1_2
*(eax_8 + 0x144) = xmm2
*(eax_8 + 0x154) = xmm3
uint32_t result = sub_649cc0(&arg1[5])
CookieCheckFunction(result)
return result
