// 函数: sub_7249c0
// 地址: 0x7249c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i = nullptr
void* esi = arg4

if (esi s<= 0)
    return arg1

void* ecx = arg3
void* ebx = arg1

if (esi u>= 0x10 && data_cc8d30 s>= 2 && (ebx u> esi - 1 + ecx || esi - 1 + ebx u< ecx)
        && (ebx u> esi - 1 + arg2 || esi - 1 + ebx u< arg2))
    int32_t xmm2_1[0x4] = data_891420
    int32_t xmm3_1[0x4] = data_8913e0
    uint32_t xmm4_1[0x4] = data_891990
    void* esi_4 = ebx - ecx
    void* eax_11 = ecx + 4
    void* esi_5 = ebx + 8
    void* ecx_2 = arg2 - ebx
    
    do
        uint32_t xmm1_1[0x4] = __pmovzxbd_xmmdq_memd(*(arg2 + i))
        uint32_t xmm0_1[0x4] = __pmovzxbd_xmmdq_memd(*(eax_11 - 4))
        eax_11 += 0x10
        esi_5 += 0x10
        uint32_t xmm1_6[0x4] = _mm_and_ps(
            _mm_srai_epi32(
                _mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(xmm1_1, xmm2_1), xmm0_1), xmm3_1), 2), 
            xmm4_1)
        int16_t xmm1_7[0x8] = _mm_packus_epi16(xmm1_6, xmm1_6)
        *(esi_5 - 0x18) = _mm_packus_epi16(xmm1_7, xmm1_7)
        uint32_t xmm1_9[0x4] = __pmovzxbd_xmmdq_memd(*(eax_11 + arg2 - ecx - 0x10))
        uint32_t xmm0_2[0x4] = __pmovzxbd_xmmdq_memd(*(eax_11 - 0x10))
        uint32_t xmm1_14[0x4] = _mm_and_ps(
            _mm_srai_epi32(
                _mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(xmm1_9, xmm2_1), xmm0_2), xmm3_1), 2), 
            xmm4_1)
        int16_t xmm1_15[0x8] = _mm_packus_epi16(xmm1_14, xmm1_14)
        *(esi_4 + eax_11 - 0x10) = _mm_packus_epi16(xmm1_15, xmm1_15)
        uint32_t xmm0_3[0x4] = __pmovzxbd_xmmdq_memd(*(eax_11 - 0xc))
        ebx = arg1
        uint32_t xmm1_22[0x4] = _mm_and_ps(
            _mm_srai_epi32(
                _mm_add_epi32(
                    _mm_add_epi32(
                        _mm_mullo_epi32(__pmovzxbd_xmmdq_memd(*(esi_5 + ecx_2 - 0x10)), xmm2_1), 
                        xmm0_3), 
                    xmm3_1), 
                2), 
            xmm4_1)
        int16_t xmm1_23[0x8] = _mm_packus_epi16(xmm1_22, xmm1_22)
        *(esi_5 - 0x10) = _mm_packus_epi16(xmm1_23, xmm1_23)
        uint32_t xmm1_25[0x4] = __pmovzxbd_xmmdq_memd(*(arg2 + i + 0xc))
        uint32_t xmm0_4[0x4] = __pmovzxbd_xmmdq_memd(*(eax_11 - 8))
        i += 0x10
        uint32_t xmm1_30[0x4] = _mm_and_ps(
            _mm_srai_epi32(
                _mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(xmm1_25, xmm2_1), xmm0_4), xmm3_1), 2), 
            xmm4_1)
        int16_t xmm1_31[0x8] = _mm_packus_epi16(xmm1_30, xmm1_30)
        *(esi_5 - 0xc) = _mm_packus_epi16(xmm1_31, xmm1_31)
    while (i s< (esi & 0xfffffff0))
    
    esi = arg4
    ecx = arg3
    void* i_2 = i
    
    if (i s>= esi)
        return ebx

arg4 = ebx
void* eax_13 = i + ecx
void* i_3 = esi - i
void* i_1

do
    uint32_t ecx_4 = zx.d(*(eax_13 + arg2 - ecx))
    eax_13 += 1
    *(ebx - ecx + eax_13 - 1) = ((zx.d(*(eax_13 - 1)) + 2 + ecx_4 * 3) u>> 2).b
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return arg1
