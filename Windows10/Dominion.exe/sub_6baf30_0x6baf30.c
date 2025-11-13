// 函数: sub_6baf30
// 地址: 0x6baf30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg1
void* ecx = nullptr
void* result_1 = result
int32_t i = 0
void* var_8 = nullptr

if (arg2 s> 0 && arg2 u>= 8)
    int32_t xmm5_1[0x4] = zx.o(0)
    int32_t xmm4_1[0x4] = zx.o(0)
    result += 0x2c
    
    do
        uint64_t xmm2_1 = zx.q(*(result + 0x10))
        result += 0x80
        i += 8
        uint128_t xmm1_1 = zx.o(*(result - 0x90))
        int32_t xmm3_2[0x4] = _mm_unpacklo_epi32(zx.o(*(result - 0xa0)), zx.q(*(result - 0x80)))
        uint64_t xmm0_2 = zx.q(*(result - 0x40))
        int64_t xmm1_2 = _mm_unpacklo_epi32(xmm1_1, xmm2_1)
        uint64_t xmm2_2 = zx.q(*(result - 0x30))
        int32_t xmm3_3[0x4] = _mm_unpacklo_epi32(xmm3_2, xmm1_2)
        int32_t xmm1_3[0x4] = zx.o(*(result - 0x50))
        xmm5_1 = _mm_add_epi32(xmm5_1, xmm3_3)
        xmm4_1 = _mm_add_epi32(xmm4_1, 
            _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(result - 0x60)), xmm0_2), 
                _mm_unpacklo_epi32(xmm1_3, xmm2_2)))
    while (i s< (arg2 & 0xfffffff8))
    
    int32_t xmm4_2[0x4] = _mm_add_epi32(xmm4_1, xmm5_1)
    int32_t xmm4_3[0x4] = _mm_add_epi32(xmm4_2, _mm_bsrli_si128(xmm4_2, 8))
    ecx = _mm_add_epi32(xmm4_3, _mm_bsrli_si128(xmm4_3, 4))
    var_8 = ecx

int32_t edx = 0
void* ebx = nullptr

if (i s< arg2)
    if (arg2 - i s< 2)
        ecx += *(result_1 + i * 0x10 + 0xc)
    else
        void* eax_4 = (i << 4) + result_1 + 0x1c
        int32_t i_2 = ((arg2 - i - 2) u>> 1) + 1
        i += i_2 << 1
        int32_t i_1
        
        do
            edx += *(eax_4 - 0x10)
            eax_4 += 0x20
            ebx += *(eax_4 - 0x20)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        ecx = var_8
        
        if (i s< arg2)
            ecx += *(result_1 + i * 0x10 + 0xc)
    
    result = ebx + edx
    ecx += result
    var_8 = ecx

int32_t var_24
char const* const ecx_9

if (ecx s> 0)
    int32_t esi_1 = 0
    uint32_t temp1_1 = modu.dp.d(0:(sub_63eb70()), var_8)
    result = nullptr
    
    if (arg2 s> 0)
        void* ecx_11 = result_1 + 0xc
        
        do
            esi_1 += *ecx_11
            
            if (temp1_1 s< esi_1)
                return result
            
            result += 1
            ecx_11 += 0x10
        while (result s< arg2)
    
    char const* const var_20_1 = "ParticlePickColorFromArray"
    var_24 = 0x477
    ecx_9 = "Halt"
else
    char const* const var_20 = "ParticlePickColorFromArray"
    var_24 = 0x467
    ecx_9 = "totalWeight > 0"

sub_63b870(result, &data_801800, ecx_9, "C:\x\ax2017\Engine\Particle.cpp", var_24, 
    "ParticlePickColorFromArray")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
