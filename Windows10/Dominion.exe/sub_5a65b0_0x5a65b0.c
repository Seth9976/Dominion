// 函数: sub_5a65b0
// 地址: 0x5a65b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

memset(&arg4[1], 0, 0x1cc)
int32_t eax_1 = arg4[0x71]
*arg4 = 2
int32_t var_20 = 0
int32_t ecx_1 = eax_1 * 7
arg4[0x71] = eax_1 + 1
arg4[ecx_1 + 1] = 1
int32_t edi_1 = arg3[1]
int32_t ebx = *arg3
int32_t esi_3 = (ebx u>> 0x1b | edi_1 << 5) ^ edi_1 u>> 0xd
uint32_t edx_1 = edi_1 u>> 0x1b
float xmm0_1 =
    (((esi_3 << ((neg.d(edx_1)).b & 0x1f) | esi_3 u>> edx_1.b) & 0x7fffff) | 0x3f800000) - 1f
int32_t eax_9
int32_t edx_2
eax_9, edx_2 = __allmul(ebx, edi_1, 0x4c957f2d, 0x5851f42d)
int32_t var_18 = 0
int32_t ebx_2 = eax_9 + arg3[2]
int32_t edi_3 = adc.d(edx_2, arg3[3], eax_9 + arg3[2] u< eax_9)
int32_t esi_7 = (ebx_2 u>> 0x1b | edi_3 << 5) ^ edi_3 u>> 0xd
uint32_t edx_4 = edi_3 u>> 0x1b
int32_t eax_17
int32_t edx_5
eax_17, edx_5 = __allmul(ebx_2, edi_3, 0x4c957f2d, 0x5851f42d)
int32_t ebx_3 = arg3[2]
int32_t edi_5 = eax_17 + ebx_3
int32_t esi_10 = adc.d(edx_5, arg3[3], eax_17 + ebx_3 u< eax_17)
int32_t eax_19
int32_t edx_6
eax_19, edx_6 = __allmul(edi_5, esi_10, 0x4c957f2d, 0x5851f42d)
int32_t var_10_1 = 0
int32_t edx_7 = adc.d(edx_6, arg3[3], eax_19 + ebx_3 u< eax_19)
*arg3 = eax_19 + ebx_3
int32_t edi_7 = (edi_5 u>> 0x1b | esi_10 << 5) ^ esi_10 u>> 0xd
uint32_t esi_11 = esi_10 u>> 0x1b
arg3[1] = edx_7
float xmm1_1 =
    (((edi_7 << ((neg.d(esi_11)).b & 0x1f) | edi_7 u>> esi_11.b) & 0x7fffff) | 0x3f800000) - 1f
arg4[ecx_1 + 4] = xmm0_1
    * ((((esi_7 << ((neg.d(edx_4)).b & 0x1f) | esi_7 u>> edx_4.b) & 0x7fffff) | 0x3f800000) - 1f)
    * 0.25f
arg4[ecx_1 + 2] = 0x40000000
arg4[ecx_1 + 3] = xmm0_1 * (xmm1_1 + xmm1_1) * 0.25f
int32_t eax_28 = arg4[0x71]
int32_t ecx_21 = eax_28 * 7
arg4[0x71] = eax_28 + 1
arg4[ecx_21 + 1] = 3
arg4[ecx_21 + 2] = 0x19
arg4[ecx_21 + 3] = 0x3ccccccd
arg4[ecx_21 + 4] = 0x3dcccccd
arg4[ecx_21 + 5] = 0x3e800000
arg4[ecx_21 + 6] = 0x3f800000
int32_t ecx_22 = arg4[0x71]
arg4[0x71] = ecx_22 + 1
arg4[ecx_22 * 7 + 1] = 4
int32_t eax_33 = arg4[0x71]
int32_t ecx_24 = eax_33 * 7
arg4[0x71] = eax_33 + 1
arg4[ecx_24 + 1] = 7
arg4[ecx_24 + 2] = 0x3e4ccccd
int32_t eax_35 = arg4[0x71]
int32_t ecx_26 = eax_35 * 7
arg4[0x71] = eax_35 + 1
arg4[ecx_26 + 1] = 2
arg4[ecx_26 + 2] = 0x3e4ccccd
arg4[ecx_26 + 3] = 0x3f800000
int32_t ecx_27 = arg4[0x71]
arg4[0x71] = ecx_27 + 1
arg4[ecx_27 * 7 + 1] = 8
int32_t eax_40 = arg4[0x71]
int32_t ecx_29 = eax_40 * 7
arg4[0x71] = eax_40 + 1
arg4[ecx_29 + 1] = 2
arg4[ecx_29 + 2] = 0x3dcccccd
arg4[ecx_29 + 3] = 0x3dcccccd
int32_t ecx_30 = arg4[0x71]
int32_t edx_9 = ecx_30 * 7
arg4[0x71] = ecx_30 + 1
arg4[edx_9 + 1] = 7
arg4[edx_9 + 2] = 0x3e4ccccd
int32_t edx_10 = arg4[0x71]
arg4[0x71] = edx_10 + 1
arg4[edx_10 * 7 + 1] = 9
return arg4
