// 函数: sub_724cf0
// 地址: 0x724cf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ecx_1 = arg3
int32_t edi = arg4
void* esi = nullptr
uint32_t edx_1 = zx.d(*arg2) * 3 + zx.d(*ecx_1)

if (edi == 1)
    uint8_t ecx_3 = ((edx_1 + 2) u>> 2).b
    arg1[1] = ecx_3
    *arg1 = ecx_3
    return arg1

int32_t eax_4 = (edi - 1) & 0xfffffff8
void* eax_6 = arg2 - ecx_1
void* var_10 = eax_6

if (eax_4 s<= 0)
    var_10 = eax_6
else
    int16_t xmm5_1[0x8] = data_893270
    uint8_t* var_14_1 = arg1
    void* var_18_1 = &ecx_1[8]
    
    do
        int32_t xmm0_2[0x4] = _mm_unpacklo_epi8(zx.o(*(arg2 + esi)), 0)
        uint32_t eax_7 = zx.d(*(eax_6 + var_18_1))
        int16_t xmm3_4[0x8] = _mm_add_epi16(
            _mm_sub_epi16(_mm_unpacklo_epi8(zx.o(*(var_18_1 - 8)), 0), xmm0_2), 
            _mm_slli_epi16(xmm0_2, 2))
        int32_t xmm2_2[0x4] = _mm_slli_si128(xmm3_4, 2)
        uint32_t ecx_8 = eax_7 * 3 + zx.d(*var_18_1)
        uint16_t xmm0_5[0x8] = _mm_slli_epi16(xmm3_4, 2)
        uint8_t* eax_10 = var_14_1
        int32_t xmm2_3[0x4] = _mm_insert_epi16(xmm2_2, edx_1, 0)
        int16_t xmm0_6[0x8] = _mm_add_epi16(xmm0_5, xmm5_1)
        int32_t xmm1_2[0x4] = _mm_bsrli_si128(xmm3_4, 2)
        var_14_1 = &var_14_1[0x10]
        int16_t xmm2_5[0x8] = _mm_add_epi16(_mm_sub_epi16(xmm2_3, xmm3_4), xmm0_6)
        int64_t xmm1_5 =
            _mm_add_epi16(_mm_sub_epi16(_mm_insert_epi16(xmm1_2, ecx_8, 7), xmm3_4), xmm0_6)
        int32_t xmm0_8[0x4] = _mm_unpacklo_epi16(xmm2_5, xmm1_5)
        int32_t xmm2_6[0x4] = _mm_unpackhi_epi16(xmm2_5, xmm1_5)
        *eax_10 = _mm_packus_epi16(_mm_srli_epi16(xmm0_8, 4), _mm_srli_epi16(xmm2_6, 4))
        uint32_t eax_12 = zx.d(*(arg2 + esi + 7))
        esi += 8
        edx_1 = eax_12 * 3 + zx.d(*(var_18_1 - 1))
        eax_6 = var_10
        var_18_1 += 8
    while (esi s< eax_4)
    
    edi = arg4
    ecx_1 = arg3

uint32_t eax_17 = zx.d(*(esi + arg2)) * 3 + zx.d(*(esi + ecx_1))
arg1[esi << 1] = ((eax_17 * 3 + edx_1 + 8) u>> 4).b
void* esi_1 = esi + 1

if (esi_1 s< edi)
    char* edi_4 = arg3 + esi_1
    
    do
        uint32_t ecx_16 = zx.d(*edi_4)
        edi_4 = &edi_4[1]
        uint32_t edx_4 = eax_17
        eax_17 = zx.d(*(var_10 + edi_4 - 1)) * 3 + ecx_16
        arg1[(esi_1 << 1) - 1] = ((eax_17 + (edx_4 << 1) + edx_4 + 8) u>> 4).b
        arg1[esi_1 << 1] = ((eax_17 * 3 + edx_4 + 8) u>> 4).b
        esi_1 += 1
    while (esi_1 s< arg4)
    
    edi = arg4

arg1[(edi << 1) - 1] = ((eax_17 + 2) u>> 2).b
return arg1
