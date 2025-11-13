// 函数: sub_4aebd0
// 地址: 0x4aebd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = data_cf65b8
uint128_t xmm2 = zx.o(*(result + 0x14))
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(result + 0x18)))
float xmm2_2 = _mm_cvtepi32_ps(xmm2) - 0f
result.b = _mm_cvtepi32_ps(zx.o(data_8c40ac)) / _mm_cvtepi32_ps(zx.o(data_8c40b0)) - 0.00999999978f
    > xmm2_2 / (xmm0_1 - 0f)
return result
