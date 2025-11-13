// 函数: sub_6fe780
// 地址: 0x6fe780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg1
void* var_8 = nullptr
int32_t i = 0
int32_t i_2 = 0
void* eax

if (arg2 s> 0 && arg2 u>= 8)
    eax = result + 0x14
    int32_t xmm5_1[0x4] = zx.o(0)
    int32_t xmm4_1[0x4] = zx.o(0)
    
    do
        uint64_t xmm2_1 = zx.q(*(eax + 8))
        eax += 0x40
        i += 8
        uint128_t xmm1_1 = zx.o(*(eax - 0x48))
        int32_t xmm3_2[0x4] = _mm_unpacklo_epi32(zx.o(*(eax - 0x50)), zx.q(*(eax - 0x40)))
        uint64_t xmm0_2 = zx.q(*(eax - 0x20))
        int64_t xmm1_2 = _mm_unpacklo_epi32(xmm1_1, xmm2_1)
        uint64_t xmm2_2 = zx.q(*(eax - 0x18))
        int32_t xmm3_3[0x4] = _mm_unpacklo_epi32(xmm3_2, xmm1_2)
        int32_t xmm1_3[0x4] = zx.o(*(eax - 0x28))
        xmm5_1 = _mm_add_epi32(xmm5_1, xmm3_3)
        xmm4_1 = _mm_add_epi32(xmm4_1, 
            _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(eax - 0x30)), xmm0_2), 
                _mm_unpacklo_epi32(xmm1_3, xmm2_2)))
    while (i s< (arg2 & 0xfffffff8))
    
    int32_t xmm4_2[0x4] = _mm_add_epi32(xmm4_1, xmm5_1)
    i_2 = i
    int32_t xmm4_3[0x4] = _mm_add_epi32(xmm4_2, _mm_bsrli_si128(xmm4_2, 8))
    var_8 = _mm_add_epi32(xmm4_3, _mm_bsrli_si128(xmm4_3, 4))

int32_t edx_1 = 0
void* ebx = nullptr
void* ebx_2

if (i s>= arg2)
    ebx_2 = var_8
else
    if (arg2 - i s< 2)
        var_8 += *(result + (i << 3) + 4)
    else
        void* ecx_1 = (i << 3) + 0xc + result
        int32_t i_3 = ((arg2 - i_2 - 2) u>> 1) + 1
        int32_t esi_1 = i_2 + (i_3 << 1)
        int32_t i_1
        
        do
            edx_1 += *(ecx_1 - 8)
            ecx_1 += 0x10
            ebx += *(ecx_1 - 0x10)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        
        if (esi_1 s< arg2)
            var_8 += *(result + (esi_1 << 3) + 4)
    
    eax = ebx + edx_1
    ebx_2 = var_8 + eax

int32_t var_24
char* ecx_2

if (ebx_2 s> 0)
    int32_t ecx_3 = 0
    uint32_t temp1_1 = modu.dp.d(0:(sub_63eb70()), ebx_2)
    eax = nullptr
    
    if (arg2 s> 0)
        do
            ecx_3 += *(result + 4)
            
            if (temp1_1 s< ecx_3)
                return result
            
            eax += 1
            result += 8
        while (eax s< arg2)
    
    char const* const var_20_1 = "XWeightedArrayPick"
    var_24 = 0x31
    ecx_2 = "Halt"
else
    char const* const var_20 = "XWeightedArrayPick"
    var_24 = 0x21
    ecx_2 = "totalWeight > 0"

sub_63b870(eax, &data_801800, ecx_2, "C:\x\ax2017\Engine\MathFunctions.cpp", var_24, 
    "XWeightedArrayPick")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
