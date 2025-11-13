// 函数: sub_4f4d70
// 地址: 0x4f4d70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = *(arg1 + 0x50)
void* ecx = eax_1 * 0x84
int32_t edi = 0
void* ebx = *((eax_1 << 2) + &data_1779f8c)
int32_t var_10 = 0
data_177750a = 0
float xmm1 = *(ecx + 0x1777640)
int32_t esi = int.d(_mm_cvtepi32_ps(zx.o(*(ecx + 0x177763c))) * arg3)

if (not(xmm1 <= 0f))
    esi = int.d((xmm1 * 0.349999994f + 1f) * _mm_cvtepi32_ps(zx.o(esi)))

data_19e178c += 1
int32_t ecx_1 = *(ebx + 0xd4)

if (ecx_1 == 1)
    esi s/= 0xa

int32_t eax_3 = *(ebx + 0xb0)
int32_t edx_2 = ecx_1 * 2
int32_t ebx_2 = edx_2 - eax_3
int32_t eax_4 = data_183ad10

if (eax_3 + esi s>= edx_2)
    ebx_2 = esi

int32_t var_c = ebx_2
int32_t result
result.b = *arg2

while (result.b == 0)
    int32_t ecx_3 = data_cc8d30
    float xmm7_1 = *(ecx + 0x1777640)
    
    if (not(xmm7_1 f<= 0))
        int32_t i = 0
        int32_t esi_3 = 0
        int32_t result_2 = *((eax_1 << 2) + &data_1779f8c)
        int32_t i_6 = 0
        int32_t xmm0_6 = _mm_cvtepi32_ps(zx.o(var_c - edi))
        int32_t edi_1 = *(result_2 + 0xd4)
        int32_t i_3 = 0
        float xmm5_1 = _mm_max_ss(0, xmm0_6)
        
        if (edi_1 s> 0 && edi_1 u>= 8 && ecx_3 s>= 2)
            int32_t eax_9 = edi_1 & 0x80000007
            
            if (eax_9 s< 0)
                eax_9 = ((eax_9 - 1) | 0xfffffff8) + 1
            
            int32_t xmm4_1[0x4] = zx.o(0)
            int32_t xmm6_1[0x4] = zx.o(0)
            void* ecx_5 = *(result_2 + 0xd0) + 0xe0
            
            do
                uint64_t xmm2 = zx.q(*(ecx_5 + 0x54))
                ecx_5 += 0x2a0
                i += 8
                uint128_t xmm1_4 = zx.o(*(ecx_5 - 0x2f4))
                int32_t xmm3_2[0x4] =
                    _mm_unpacklo_epi32(zx.o(*(ecx_5 - 0x348)), zx.q(*(ecx_5 - 0x2a0)))
                uint64_t xmm0_8 = zx.q(*(ecx_5 - 0x150))
                int64_t xmm1_5 = _mm_unpacklo_epi32(xmm1_4, xmm2)
                uint64_t xmm2_1 = zx.q(*(ecx_5 - 0xfc))
                int32_t xmm3_3[0x4] = _mm_unpacklo_epi32(xmm3_2, xmm1_5)
                int64_t xmm1_7 = _mm_unpacklo_epi32(zx.o(*(ecx_5 - 0x1a4)), xmm2_1)
                xmm4_1 = _mm_max_epi32(xmm4_1, xmm3_3)
                xmm6_1 = _mm_max_epi32(xmm6_1, 
                    _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(ecx_5 - 0x1f8)), xmm0_8), xmm1_7))
            while (i s< edi_1 - eax_9)
            
            int32_t xmm4_2[0x4] = _mm_max_epi32(xmm4_1, xmm6_1)
            i_3 = i
            i_6 = i_3
            int32_t xmm4_3[0x4] = _mm_max_epi32(xmm4_2, _mm_bsrli_si128(xmm4_2, 8))
            i = _mm_max_epi32(xmm4_3, _mm_bsrli_si128(xmm4_3, 4))
        
        int32_t result_1
        int32_t i_2
        
        if (edi_1 s<= 0 || (edi_1 u>= 8 && ecx_3 s>= 2 && i_6 s>= edi_1))
            i_2 = 0
            result = int.d(_mm_cvtepi32_ps(zx.o(i)) - xmm5_1 / xmm7_1)
            result_1 = result
            
            if (edi_1 s<= 0)
            label_4f50c1:
                sub_63b870(result, &data_801800, "numNonFutile > 0", 
                    "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0x18b4, "MCTS_Run")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        else
            int32_t* ecx_8 = *(result_2 + 0xd0) + 0x38 + i_6 * 0x54
            int32_t i_5 = edi_1 - i_3
            int32_t i_1
            
            do
                int32_t i_4 = *ecx_8
                ecx_8 = &ecx_8[0x15]
                
                if (i_4 s<= i)
                    i_4 = i
                
                i = i_4
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            i_2 = 0
            result_1 = int.d(_mm_cvtepi32_ps(zx.o(i)) - xmm5_1 / xmm7_1)
        
        result = result_2
        int32_t edi_2 = 0
        
        do
            int32_t edx_3 = *(result + 0xd0)
            edi_2 += 0x54
            int32_t ecx_9 = *(edi_2 + edx_3 - 0x1c)
            
            if (ecx_9 s>= result_1)
                esi_3 += 1
            
            int32_t eax_15
            eax_15.b = ecx_9 s< result_1
            *(edi_2 + edx_3 - 3) = eax_15.b
            i_2 += 1
            result = result_2
        while (i_2 s< *(result + 0xd4))
        
        if (esi_3 s<= 0)
            goto label_4f50c1
        
        edi = var_10
        
        if (edi s> 0xa && esi_3 s< 2)
            break
        
        ebx_2 = var_c
    
    data_19e1788 += 1
    sub_4ebd20(arg1, 0x183ad20, 0x1899da0, *(arg1 + 0x50))
    int32_t ecx_10 = data_189aad8
    
    if (ecx_10 s> 0)
        __builtin_memcpy(&data_1839fb0, &data_1839fc8, ecx_10 << 2)
        edi = var_10
    
    data_1779f88 = 0
    uint32_t eax_18
    int32_t ecx_11
    eax_18, ecx_11 = sub_4f46c0(0x1899da0, *(arg1 + 0x50))
    sub_4f4b60(ecx_11, eax_18)
    edi += 1
    var_10 = edi
    void* ecx_12 = *((eax_1 << 2) + &data_1779f8c)
    result = ebx_2 * 3
    
    if (edi s> result)
        break
    
    if (data_183ad10 - eax_4 s>= ebx_2)
        result = *(ecx_12 + 0xb0)
        
        if (result s>= ebx_2)
            break
        
        if (result s>= *(ecx_12 + 0xd4))
            break
    
    result.b = *arg2

return result
