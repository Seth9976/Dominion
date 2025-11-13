// 函数: sub_5a41c0
// 地址: 0x5a41c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = *arg1
int32_t edi = arg1[1]
int32_t var_10 = 0
int32_t esi_2 = (ebx u>> 0x1b | edi << 5) ^ edi u>> 0xd
uint32_t edx_1 = edi u>> 0x1b
int32_t eax_6
int32_t edx_2
eax_6, edx_2 = __allmul(ebx, edi, 0x4c957f2d, 0x5851f42d)
int32_t ebx_1 = arg1[2]
int32_t edi_2 = eax_6 + ebx_1
int32_t esi_5 = adc.d(edx_2, arg1[3], eax_6 + ebx_1 u< eax_6)
int32_t eax_8
int32_t edx_3
eax_8, edx_3 = __allmul(edi_2, esi_5, 0x4c957f2d, 0x5851f42d)
int32_t var_8_1 = 0
int32_t edx_4 = adc.d(edx_3, arg1[3], eax_8 + ebx_1 u< eax_8)
*arg1 = eax_8 + ebx_1
arg1[1] = edx_4
int32_t edi_4 = (edi_2 u>> 0x1b | esi_5 << 5) ^ esi_5 u>> 0xd
uint32_t esi_6 = esi_5 u>> 0x1b
float var_10_2 = ((((esi_2 << ((neg.d(edx_1)).b & 0x1f) | esi_2 u>> edx_1.b) & 0x7fffff)
    | 0x3f800000) - 1f) * 0.99000001f + 0.00499999989f
return ((((edi_4 << ((neg.d(esi_6)).b & 0x1f) | edi_4 u>> esi_6.b) & 0x7fffff) | 0x3f800000) - 1f)
    * 1.99000001f + 0.00499999989f
