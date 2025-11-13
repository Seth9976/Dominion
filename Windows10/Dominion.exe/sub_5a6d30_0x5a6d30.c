// 函数: sub_5a6d30
// 地址: 0x5a6d30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

memset(arg4, 0, 0x1c8)
int32_t eax = *(arg4 + 0x1c4)
*(arg4 + 0x1c8) = 0x40000000
*(arg4 + 0x1cc) = 0x40000000
int32_t ecx_1 = eax * 7
*(arg4 + 0x1c4) = eax + 1
*(arg4 + (ecx_1 << 2) + 4) = 0
int32_t edi_1 = arg3[1]
int32_t ebx = *arg3
int32_t eax_2
int32_t edx
eax_2, edx = __allmul(ebx, edi_1, 0x4c957f2d, 0x5851f42d)
bool c = eax_2 + arg3[2] u< eax_2
*arg3 = eax_2 + arg3[2]
int32_t ebx_2 = (ebx u>> 0x1b | edi_1 << 5) ^ edi_1 u>> 0xd
uint32_t edi_2 = edi_1 u>> 0x1b
arg3[1] = adc.d(edx, arg3[3], c)
int32_t var_8 = 0
*(arg4 + (ecx_1 << 2) + 0xc) = 0
*(arg4 + (ecx_1 << 2) + 0x10) = 0
*(arg4 + (ecx_1 << 2) + 0x14) = 0x40000000
*(arg4 + (ecx_1 << 2) + 8) = ((((ebx_2 << ((neg.d(edi_2)).b & 0x1f) | ebx_2 u>> edi_2.b) & 0x7fffff)
    | 0x3f800000) - 1f) * 6.28318548f
int32_t eax_11 = *(arg4 + 0x1c4)
int32_t ecx_9 = eax_11 * 7
*(arg4 + 0x1c4) = eax_11 + 1
*(arg4 + (ecx_9 << 2) + 4) = 3
*(arg4 + (ecx_9 << 2) + 8) = 0x28
*(arg4 + (ecx_9 << 2) + 0xc) = 0x3ccccccd
*(arg4 + (ecx_9 << 2) + 0x10) = 0x3dcccccd
*(arg4 + (ecx_9 << 2) + 0x14) = 0x3e800000
*(arg4 + (ecx_9 << 2) + 0x18) = 0x3dcccccd
int32_t ecx_10 = *(arg4 + 0x1c4)
*(arg4 + 0x1c4) = ecx_10 + 1
*(arg4 + ecx_10 * 0x1c + 4) = 6
int32_t ecx_11 = *(arg4 + 0x1c4)
*(arg4 + 0x1c4) = ecx_11 + 1
*(arg4 + ecx_11 * 0x1c + 4) = 4
int32_t ecx_12 = *(arg4 + 0x1c4)
*(arg4 + 0x1c4) = ecx_12 + 1
*(arg4 + ecx_12 * 0x1c + 4) = 5
int32_t eax_22 = *(arg4 + 0x1c4)
int32_t ecx_14 = eax_22 * 7
*(arg4 + 0x1c4) = eax_22 + 1
*(arg4 + (ecx_14 << 2) + 4) = 7
*(arg4 + (ecx_14 << 2) + 8) = 0xbf800000
int32_t ecx_15 = *(arg4 + 0x1c4)
*(arg4 + 0x1c4) = ecx_15 + 1
*(arg4 + ecx_15 * 0x1c + 4) = 8
int32_t ecx_16 = *(arg4 + 0x1c4)
int32_t edx_3 = ecx_16 * 7
*(arg4 + 0x1c4) = ecx_16 + 1
*(arg4 + (edx_3 << 2) + 4) = 7
*(arg4 + (edx_3 << 2) + 8) = 0xbf800000
int32_t edx_4 = *(arg4 + 0x1c4)
*(arg4 + 0x1c4) = edx_4 + 1
*(arg4 + edx_4 * 0x1c + 4) = 9
return arg4
