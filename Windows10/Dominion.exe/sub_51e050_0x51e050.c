// 函数: sub_51e050
// 地址: 0x51e050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg4
int32_t i = 0
int32_t ecx = 0
arg4 = 0

if (esi s> 0 && esi u>= 8)
    void* ecx_1 = arg2 + 0x10
    int32_t xmm5_1[0x4] = zx.o(0)
    int32_t xmm4_1[0x4] = zx.o(0)
    
    do
        uint64_t xmm2_1 = zx.q(*(ecx_1 + 8))
        ecx_1 += 0x40
        i += 8
        uint128_t xmm1_1 = zx.o(*(ecx_1 - 0x48))
        int32_t xmm3_2[0x4] = _mm_unpacklo_epi32(zx.o(*(ecx_1 - 0x50)), zx.q(*(ecx_1 - 0x40)))
        uint64_t xmm0_2 = zx.q(*(ecx_1 - 0x20))
        int64_t xmm1_2 = _mm_unpacklo_epi32(xmm1_1, xmm2_1)
        uint64_t xmm2_2 = zx.q(*(ecx_1 - 0x18))
        int32_t xmm3_3[0x4] = _mm_unpacklo_epi32(xmm3_2, xmm1_2)
        int32_t xmm1_3[0x4] = zx.o(*(ecx_1 - 0x28))
        xmm5_1 = _mm_add_epi32(xmm5_1, xmm3_3)
        xmm4_1 = _mm_add_epi32(xmm4_1, 
            _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(ecx_1 - 0x30)), xmm0_2), 
                _mm_unpacklo_epi32(xmm1_3, xmm2_2)))
    while (i s< (esi & 0xfffffff8))
    
    int32_t xmm4_2[0x4] = _mm_add_epi32(xmm4_1, xmm5_1)
    int32_t xmm4_3[0x4] = _mm_add_epi32(xmm4_2, _mm_bsrli_si128(xmm4_2, 8))
    ecx = _mm_add_epi32(xmm4_3, _mm_bsrli_si128(xmm4_3, 4))
    arg4 = ecx

int32_t edi = 0
int32_t edx_2 = 0

if (i s< esi)
    int32_t ecx_7
    
    if (esi - i s< 2)
        ecx_7 = arg4 + *(arg2 + (i << 3))
    else
        do
            edi += *(arg2 + (i << 3))
            edx_2 += *(arg2 + (i << 3) + 8)
            i += 2
        while (i s< esi - 1)
        
        if (i s>= esi)
            ecx_7 = arg4
        else
            ecx_7 = arg4 + *(arg2 + (i << 3))
    
    ecx = ecx_7 + edx_2 + edi

uint32_t eax_1 = sub_63ed10(arg3, ecx)
int32_t edx_4 = 0
int32_t ecx_9 = 0
uint32_t edi_1 = eax_1

if (esi s> 0)
    do
        edx_4 += *(arg2 + (ecx_9 << 3))
        eax_1 = arg2 + (ecx_9 << 3)
        
        if (edi_1 s< edx_4)
            return *(eax_1 + 4)
        
        ecx_9 += 1
    while (ecx_9 s< esi)

sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x366, "RollTable")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
