// 函数: sub_7363f0
// 地址: 0x7363f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *(arg1 + 0x24)
int32_t eax_2 = *(arg1 + 0x14) - *(arg1 + 0xc) + esi
int32_t var_30 = _mm_cvtepi32_ps(zx.o(esi))
int32_t var_2c = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x28)))
int32_t eax_5 = *(arg1 + 0x18) - *(arg1 + 0x10) + *(arg1 + 0x28)
int32_t var_28 = _mm_cvtepi32_ps(zx.o(eax_2))
void* eax_6 = *(arg1 + 8)
int32_t var_24 = _mm_cvtepi32_ps(zx.o(eax_5))
*(eax_6 + 4) = var_30.o
*(*(arg1 + 8) + 0x14) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1c)))
int32_t result = *(arg1 + 8)
*(result + 0x18) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x20)))

if (*(arg1 + 0x14) == 0 || *(arg1 + 0x34) == 0)
    return result

int32_t ecx = *(arg1 + 0x2c)
int32_t var_2c_1 = ecx
int32_t edx_1 = *(arg2 + 0x30)
int32_t var_28_1 = *(arg1 + 0x30)
int32_t var_20_1 = edx_1
int32_t var_24_1 = sub_6a9570(ecx, edx_1)
int32_t eax_10 = *(arg1 + 0x34)
var_30 = eax_10
return sub_735af0(eax_10, arg1 + 0x38, &var_30, arg2)
