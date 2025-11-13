// 函数: sub_71d730
// 地址: 0x71d730
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t eax_1
int32_t edx
long double x87_r0
edx:eax_1 = sx.q(sub_719800(*(arg1 + 0x50), *(arg1 + 0x38), x87_r0))
long double x87_r1
int32_t eax_4 = sub_719800(*(arg1 + 0x54), *(arg1 + 0x3c), x87_r1)
float xmm1_2 = *(arg1 + 0x38)
int32_t esi = *(arg1 + 4)
int32_t ecx_2
ecx_2.b = xmm1_2 > 1f
int32_t eax_5

if (ecx_2 == 0)
    int32_t eax_7
    int32_t edx_1
    long double x87_r2
    edx_1:eax_7 = sx.q(sub_719800(*(arg1 + 0x50), xmm1_2, x87_r2))
    eax_5 = esi + ((eax_7 - edx_1) s>> 1 << 1)
else
    eax_5 = *(arg1 + 0x14)

float xmm1_3 = *(arg1 + 0x3c)
int32_t esi_1 = *(arg1 + 8)
*(arg1 + 0x98) = eax_5
int32_t eax_10
eax_10.b = xmm1_3 > 1f
int32_t eax_11

if (eax_10 == 0)
    int32_t eax_13
    int32_t edx_2
    edx_2:eax_13 = sx.q(sub_719800(*(arg1 + 0x54), xmm1_3))
    eax_11 = esi_1 + ((eax_13 - edx_2) s>> 1 << 1)
else
    eax_11 = *(arg1 + 0x18)

int128_t xmm1_4 = *(arg1 + 0x38)
int32_t ecx_5 = *(arg1 + 0x50)
int32_t esi_2 = *(arg1 + 0x98)
*(arg1 + 0x9c) = eax_11
*(arg1 + 0xa4) = eax_4 + 1
*(arg1 + 0xbc) = *(arg1 + 0x98) << 3
int32_t eax_19 = sub_7198c0(ecx_5, xmm1_4)
int128_t xmm1_5 = *(arg1 + 0x3c)
int32_t ecx_6 = *(arg1 + 0x54)
int32_t esi_3 = *(arg1 + 0x9c)
*(arg1 + 0xc0) = (eax_19 * esi_2) << 2
*(arg1 + 0xc4) = *(arg1 + 0x9c) << 3
int32_t eax_24 = sub_7198c0(ecx_6, xmm1_5)
int32_t edx_3 = *(arg1 + 0x40)
float xmm0 = *(arg1 + 0x3c)
int32_t ecx_9 = edx_3 * *(arg1 + 0x14)
int32_t esi_5 = (*(arg1 + 4) + ((eax_1 - edx) s>> 1 << 1)) * edx_3
int32_t edx_4 = edx_3 * *(arg1 + 0x14)
int32_t ebx_3 = (eax_24 * esi_3) << 2
*(arg1 + 0xc8) = ebx_3
int32_t ecx_10 = ecx_9 << 2
int32_t esi_6 = esi_5 << 2
int32_t edx_5 = edx_4 * *(arg1 + 0xa4)
*(arg1 + 0xcc) = esi_6
*(arg1 + 0xd0) = ecx_10
*(arg1 + 0xd8) = ecx_10
int32_t edx_6 = edx_5 << 2
*(arg1 + 0xd4) = edx_6
int32_t eax_26
eax_26.b = xmm0 > 1f

if (eax_26 == 0)
    *(arg1 + 0xd8) = 0
else
    *(arg1 + 0xd0) = 0

return *(arg1 + 0xbc) + edx_6 + esi_6 + ebx_3 + ecx_10 + *(arg1 + 0xc4) + *(arg1 + 0xc0)
