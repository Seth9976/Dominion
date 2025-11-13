// 函数: sub_5db9a0
// 地址: 0x5db9a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cf65b8
float var_14 = 0f
int32_t var_10 = 0
uint128_t xmm1 = zx.o(*(eax + 0x18))
int32_t xmm2_1 = _mm_cvtepi32_ps(zx.o(*(eax + 0x14)))
int32_t ecx = arg3[0x90]
*arg3 = arg5
int32_t xmm1_1 = _mm_cvtepi32_ps(xmm1)
int32_t var_c = xmm2_1
int32_t var_8 = xmm1_1
int128_t xmm0 = var_14.o
var_14 = 0f
int32_t var_c_1 = xmm2_1
int32_t var_8_1 = xmm1_1
int128_t var_24 = xmm0
int32_t var_10_1 = 0
var_14.o = var_14.o
void* eax_4 = *(sub_5cba00(ecx) + 4) + 1
sub_654ce0(&var_24, arg2, "hint", data_171e874, &var_24, &var_14, *arg3, eax_4, 0)
sub_666060(*arg2, arg4)
uint32_t eax_6 = sub_64e7a0(*arg2)
*(eax_6 + 0x18bc) = sub_5db060
return sub_632820(eax_6, arg3[0x8d], *arg2, arg3[0x8e], arg3[0x8f])
