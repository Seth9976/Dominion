// 函数: sub_734d50
// 地址: 0x734d50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t xmm2[0x4] = data_891410
int32_t xmm3[0x4] = data_891500
int32_t i = 0
void* ecx = arg4 + 0xc
uint32_t xmm1[0x4] = _mm_shuffle_epi32(zx.o(arg4), 0)

do
    int32_t eax = i + 4
    ecx += 0x40
    int32_t xmm0_3[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), xmm2)
    i += 8
    int32_t xmm0_6[0x4] = _mm_add_epi32(_mm_add_epi32(_mm_slli_epi32(xmm0_3, 3), xmm1), xmm3)
    *(ecx - 0x48) = xmm0_6
    uint128_t xmm0_7 = _mm_bsrli_si128(xmm0_6, 4)
    *(ecx - 0x40) = xmm0_7
    uint128_t xmm0_8 = _mm_bsrli_si128(xmm0_7, 4)
    *(ecx - 0x38) = xmm0_8
    *(ecx - 0x30) = _mm_bsrli_si128(xmm0_8, 4)
    int32_t xmm0_15[0x4] = _mm_add_epi32(
        _mm_add_epi32(_mm_slli_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(eax), 0), xmm2), 3), 
            xmm1), 
        xmm3)
    *(ecx - 0x28) = xmm0_15
    uint128_t xmm0_16 = _mm_bsrli_si128(xmm0_15, 4)
    *(ecx - 0x20) = xmm0_16
    uint128_t xmm0_17 = _mm_bsrli_si128(xmm0_16, 4)
    *(ecx - 0x18) = xmm0_17
    *(ecx - 0x10) = _mm_bsrli_si128(xmm0_17, 4)
while (i s< 0xff8)

if (i s< 0xfff)
    int32_t* eax_2 = arg4 + 4 + (i << 3)
    int32_t i_2 = 0xfff - i
    i = 0xfff
    int32_t i_1
    
    do
        *eax_2 = &eax_2[1]
        eax_2 = &eax_2[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

*(arg4 + (i << 3) + 4) = 0
arg3[6] = &arg3[8]
arg3[7] = arg4
arg3[3] = 1
arg3[4] = 0
*arg3 = 0x1000
arg3[1] = 0x1000
arg3[5] = 0x1000
arg3[2] = 1
arg3[8].w = 0
*(arg3 + 0x22) = 0
arg3[0xb] = 0
arg3[0xa].w = 0x1000
arg3[9] = &arg3[0xa]
*(arg3 + 0x2a) = 0xffff
return 0xffff
