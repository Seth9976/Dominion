// 函数: sub_744940
// 地址: 0x744940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg1
sub_744b30()
DragAcceptFiles(data_147b084, 1)
data_1512450 = arg1
int32_t eax = sub_6987e0(arg1)
int32_t* ecx_1 = data_1512450
data_1512454 = eax
data_151345c = 0
data_1513460 = 0
data_1513462 = 0

if (ecx_1[1] == 0x1e)
    int32_t* eax_1 = sub_5af880(ecx_1)
    int32_t ecx_2 = 0
    int32_t i = 0
    int32_t edx_1 = eax_1[2]
    
    if (edx_1 s> 0)
        if (edx_1 u>= 8 && data_cc8d30 s>= 2)
            int32_t eax_3 = edx_1 & 0x80000007
            
            if (eax_3 s< 0)
                eax_3 = ((eax_3 - 1) | 0xfffffff8) + 1
            
            int32_t xmm4_1[0x4] = zx.o(0)
            int32_t xmm5_1[0x4] = zx.o(0)
            void* ecx_4 = *eax_1 + 0x2f0
            
            do
                uint64_t xmm2_1 = zx.q(*(ecx_4 + 0x178))
                ecx_4 += 0xbc0
                i += 8
                uint128_t xmm1_1 = zx.o(*(ecx_4 - 0xd38))
                int32_t xmm3_2[0x4] =
                    _mm_unpacklo_epi32(zx.o(*(ecx_4 - 0xeb0)), zx.q(*(ecx_4 - 0xbc0)))
                uint64_t xmm0_2 = zx.q(*(ecx_4 - 0x5e0))
                int64_t xmm1_2 = _mm_unpacklo_epi32(xmm1_1, xmm2_1)
                uint64_t xmm2_2 = zx.q(*(ecx_4 - 0x468))
                int32_t xmm3_3[0x4] = _mm_unpacklo_epi32(xmm3_2, xmm1_2)
                int64_t xmm1_4 = _mm_unpacklo_epi32(zx.o(*(ecx_4 - 0x758)), xmm2_2)
                xmm4_1 = _mm_max_epi32(xmm4_1, xmm3_3)
                xmm5_1 = _mm_max_epi32(xmm5_1, 
                    _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(ecx_4 - 0x8d0)), xmm0_2), xmm1_4))
            while (i s< edx_1 - eax_3)
            
            int32_t xmm4_2[0x4] = _mm_max_epi32(xmm4_1, xmm5_1)
            int32_t xmm4_3[0x4] = _mm_max_epi32(xmm4_2, _mm_bsrli_si128(xmm4_2, 8))
            ecx_2 = _mm_max_epi32(xmm4_3, _mm_bsrli_si128(xmm4_3, 4))
        
        if (edx_1 u< 8 || data_cc8d30 s< 2 || i s< edx_1)
            int32_t* esi_4 = i * 0x178 + *eax_1
            int32_t i_2 = edx_1 - i
            int32_t i_1
            
            do
                int32_t eax_6 = *esi_4
                esi_4 = &esi_4[0x5e]
                
                if (ecx_2 s> eax_6)
                    eax_6 = ecx_2
                
                ecx_2 = eax_6
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    
    eax = ecx_2 + 1
    data_1593c6c = 0x3f000000
    int32_t* ecx_5 = data_1512450
    data_1512458 = eax
    
    if (ecx_5[1] == 0x1e)
        void* eax_7
        char* ecx_6
        eax_7, ecx_6 = sub_5af880(ecx_5)
        ecx_6.b = 0
        float xmm2_4 = *(eax_7 + 0x10) - 100f
        data_1593c70 = *(eax_7 + 0xc) - 100f
        data_1593c74 = xmm2_4
        return sub_744ce0(ecx_6)

sub_63b870(eax, &data_801800, "ptr->assetType == ASSET_TYPE_UI", "C:\x\ax2017\Engine\UIDef.cpp", 
    0x127, "UIDefGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
