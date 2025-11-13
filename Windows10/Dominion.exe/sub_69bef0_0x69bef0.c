// 函数: sub_69bef0
// 地址: 0x69bef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t result = 0
char const* const var_20
int32_t var_1c
char const* const var_18
uint32_t eax
char* ecx

if (arg1 != 0)
    eax = zx.d(arg1.w)
    
    if (eax u>= data_caf264)
    label_69c164:
        var_18 = "DataArray<struct UIState>::DataArrayGet"
        var_1c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
        var_20 = "C:\x\ax2017\Engine\DataArray.h"
    else
        int32_t ecx_1 = eax * 0x438
        eax = data_caf260
        
        if (*(ecx_1 + eax + 0x434) != arg1)
            goto label_69c164
        
        int32_t* ecx_2 = *(ecx_1 + eax + 4)
        
        if (ecx_2[1] == 0x1e)
            int32_t* eax_1 = sub_5af880(ecx_2)
            int32_t i = 0
            int32_t edi = eax_1[2]
            
            if (edi s> 0)
                if (edi u>= 8 && data_cc8d30 s>= 2)
                    int32_t eax_3 = edi & 0x80000007
                    
                    if (eax_3 s< 0)
                        eax_3 = ((eax_3 - 1) | 0xfffffff8) + 1
                    
                    uint32_t xmm6_1[0x4] = zx.o(0)
                    int32_t xmm7_1[0x4] = zx.o(0)
                    void* ecx_4 = *eax_1 + 0x2f4
                    
                    do
                        uint64_t xmm2_1 = zx.q(*(ecx_4 + 0x178))
                        ecx_4 += 0xbc0
                        i += 8
                        uint128_t xmm1_1 = zx.o(*(ecx_4 - 0xd38))
                        uint128_t xmm4_1 = zx.o(*(ecx_4 - 0xe48))
                        uint64_t xmm3_1 = zx.q(*(ecx_4 - 0x9dc))
                        int32_t xmm5_2[0x4] =
                            _mm_unpacklo_epi32(zx.o(*(ecx_4 - 0xeb0)), zx.q(*(ecx_4 - 0xbc0)))
                        int64_t xmm0_2 = zx.q(*(ecx_4 - 0xb58))
                        int64_t xmm1_2 = _mm_unpacklo_epi32(xmm1_1, xmm2_1)
                        uint64_t xmm2_2 = zx.q(*(ecx_4 - 0x9e0))
                        int32_t xmm5_3[0x4] = _mm_unpacklo_epi32(xmm5_2, xmm1_2)
                        int32_t xmm1_3[0x4] = zx.o(*(ecx_4 - 0xcd0))
                        int32_t xmm5_4[0x4] = __pcmpeqd_xmmdq_memdq(xmm5_3, data_8914b0)
                        int32_t xmm4_2[0x4] = _mm_unpacklo_epi32(xmm4_1, xmm0_2)
                        uint64_t xmm0_3 = zx.q(*(ecx_4 - 0xb54))
                        int64_t xmm1_4 = _mm_unpacklo_epi32(xmm1_3, xmm2_2)
                        int32_t xmm2_4[0x4] = _mm_unpacklo_epi32(zx.o(*(ecx_4 - 0xe44)), xmm0_3)
                        int32_t xmm4_3[0x4] = _mm_unpacklo_epi32(xmm4_2, xmm1_4)
                        int32_t xmm2_5[0x4] = _mm_unpacklo_epi32(xmm2_4, 
                            _mm_unpacklo_epi32(zx.o(*(ecx_4 - 0xccc)), xmm3_1))
                        uint128_t xmm1_7 = zx.o(*(ecx_4 - 0x758))
                        int32_t xmm4_4[0x4] = _mm_add_epi32(xmm4_3, xmm2_5)
                        uint64_t xmm3_2 = zx.q(*(ecx_4 - 0x400))
                        int64_t xmm1_8 = _mm_unpacklo_epi32(xmm1_7, zx.q(*(ecx_4 - 0x468)))
                        uint64_t xmm2_7 = zx.q(*(ecx_4 - 0x3fc))
                        int32_t xmm0_5[0x4] = _mm_max_epi32(xmm6_1, xmm4_4)
                        uint128_t xmm4_5 = zx.o(*(ecx_4 - 0x864))
                        xmm6_1 =
                            _mm_or_ps(_mm_and_ps(xmm0_5, xmm5_4), _mm_andnot_ps(xmm5_4, xmm6_1))
                        int32_t xmm5_7[0x4] =
                            _mm_unpacklo_epi32(zx.o(*(ecx_4 - 0x8d0)), zx.q(*(ecx_4 - 0x5e0)))
                        int64_t xmm0_9 = zx.q(*(ecx_4 - 0x574))
                        int32_t xmm5_8[0x4] = _mm_unpacklo_epi32(xmm5_7, xmm1_8)
                        int32_t xmm1_9[0x4] = zx.o(*(ecx_4 - 0x6ec))
                        int32_t xmm5_9[0x4] = __pcmpeqd_xmmdq_memdq(xmm5_8, data_8914b0)
                        xmm7_1 = _mm_or_ps(
                            _mm_and_ps(
                                _mm_max_epi32(xmm7_1, 
                                    _mm_add_epi32(
                                        _mm_unpacklo_epi32(_mm_unpacklo_epi32(xmm4_5, xmm0_9), 
                                            _mm_unpacklo_epi32(xmm1_9, xmm2_7)), 
                                        _mm_unpacklo_epi32(
                                        _mm_unpacklo_epi32(zx.o(*(ecx_4 - 0x868)), 
                                            zx.q(*(ecx_4 - 0x578))), 
                                        _mm_unpacklo_epi32(zx.o(*(ecx_4 - 0x6f0)), xmm3_2)))), 
                                xmm5_9), 
                            _mm_andnot_ps(xmm5_9, xmm7_1))
                    while (i s< edi - eax_3)
                    
                    int32_t xmm6_2[0x4] = _mm_max_epi32(xmm6_1, xmm7_1)
                    int32_t xmm6_3[0x4] = _mm_max_epi32(xmm6_2, _mm_bsrli_si128(xmm6_2, 8))
                    result = _mm_max_epi32(xmm6_3, _mm_bsrli_si128(xmm6_3, 4))
                
                if (edi u< 8 || data_cc8d30 s< 2 || i s< edi)
                    int32_t* edx_4 = *eax_1 + 0x70 + i * 0x178
                    int32_t i_2 = edi - i
                    int32_t i_1
                    
                    do
                        if (edx_4[-0x1b] == 6)
                            int32_t result_1 = *edx_4 + edx_4[-1]
                            
                            if (result s<= result_1)
                                result = result_1
                        
                        edx_4 = &edx_4[0x5e]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
            
            return result
        
        var_18 = "UIDefGet"
        var_1c = 0x127
        var_20 = "C:\x\ax2017\Engine\UIDef.cpp"
        ecx = "ptr->assetType == ASSET_TYPE_UI"
else
    var_18 = "DataArray<struct UIState>::DataArrayGet"
    var_1c = 0x6c
    ecx = "id != DATAID_NULL"
    var_20 = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(eax, &data_801800, ecx, var_20, var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
