// 函数: sub_4ec7c0
// 地址: 0x4ec7c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = data_1777938
int32_t esi = data_177793c
int32_t var_18 = 0
int32_t ebx_2 = (edx u>> 0x1b | esi << 5) ^ esi u>> 0xd
uint32_t ebx_4 = esi u>> 0x1b
int32_t eax_1
int32_t edx_1
eax_1, edx_1 = __allmul(edx, esi, 0x4c957f2d, 0x5851f42d)
int32_t eax_2 = eax_1 + data_1777940
int32_t edx_2 = adc.d(edx_1, data_1777944, eax_1 + data_1777940 u< eax_1)
int32_t eax_3
int32_t edx_3
eax_3, edx_3 = __allmul(eax_2, edx_2, 0x4c957f2d, 0x5851f42d)
int32_t edx_4 = adc.d(edx_3, data_1777944, eax_3 + data_1777940 u< eax_3)
data_1777938 = eax_3 + data_1777940
int32_t edi_2 = (eax_2 u>> 0x1b | edx_2 << 5) ^ edx_2 u>> 0xd
data_177793c = edx_4
uint32_t esi_2 = edx_2 u>> 0x1b
int32_t var_8_1 = 0
int32_t result = (edi_2 << ((neg.d(esi_2)).b & 0x1f) | edi_2 u>> esi_2.b) & 0x7fff
_mm_cvtepi32_ps(zx.o((((ebx_2 << ((neg.d(ebx_4)).b & 0x1f) | ebx_2 u>> ebx_4.b) & 0x7fff) << 0xf)
    + result))
return result
