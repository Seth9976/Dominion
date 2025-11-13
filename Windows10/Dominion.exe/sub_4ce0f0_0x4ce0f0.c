// 函数: sub_4ce0f0
// 地址: 0x4ce0f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = data_cf65b8
void** edi = &data_8dc8a0
uint128_t xmm2 = zx.o(*(eax + 0x14))
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(eax + 0x18)))
float xmm2_2 = _mm_cvtepi32_ps(xmm2) - 0f

if (_mm_cvtepi32_ps(zx.o(data_8c40ac)) / _mm_cvtepi32_ps(zx.o(data_8c40b0)) - 0.00999999978f
        > xmm2_2 / (xmm0_1 - 0f))
    edi = &data_8dc8ac

uint32_t eax_1 = sub_64e7a0(arg1)
sub_665db0(eax_1, edi, eax_1, 0x3f800000, 0xffffffff, 0)
uint32_t eax_2 = sub_64e7a0(arg1)
return sub_665db0(eax_2, &data_8dc6ec, eax_2, 0x3f800000, 0xffffffff, 0)
