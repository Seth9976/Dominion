// 函数: sub_544330
// 地址: 0x544330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1910)
int32_t esi
int32_t var_c = esi
void var_8
sub_561af0(__security_cookie ^ &var_8, 0, 1, 0)
uint32_t result = sub_56d740(esi, &__return_addr)
uint32_t result_2 = result
uint32_t result_1 = 0
int32_t i = 0

if (result_2 s> 0)
    if (result_2 u>= 8)
        int32_t eax_2 = result & 0x80000007
        
        if (eax_2 s< 0)
            eax_2 = ((eax_2 - 1) | 0xfffffff8) + 1
        
        int32_t xmm3_1[0x4] = data_891390
        int32_t xmm2_1[0x4] = zx.o(0)
        int32_t xmm1_1[0x4] = zx.o(0)
        result = &__return_addr
        
        do
            xmm2_1 = _mm_sub_epi32(xmm2_1, _mm_cmpeq_epi32(*(&__return_addr + (i << 2)), xmm3_1))
            void arg_10
            int32_t xmm0_3[0x4] = *(&arg_10 + (i << 2))
            i += 8
            xmm1_1 = _mm_sub_epi32(xmm1_1, _mm_cmpeq_epi32(xmm0_3, xmm3_1))
        while (i s< result_2 - eax_2)
        
        int32_t xmm1_2[0x4] = _mm_add_epi32(xmm1_1, xmm2_1)
        int32_t xmm1_3[0x4] = _mm_add_epi32(xmm1_2, _mm_bsrli_si128(xmm1_2, 8))
        result_1 = _mm_add_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 4))
    
    if (result_2 u< 8 || i s< result_2)
        do
            result = result_1 + 1
            
            if (__return_addr[i] != 1)
                result = result_1
            
            i += 1
            result_1 = result
        while (i s< result_2)
    
    if (result_1 s>= 6)
        uint32_t eax_5
        int32_t ecx_1
        eax_5, ecx_1 = sub_56b800()
        int32_t var_14_1 = ecx_1
        result = sub_5624a0(eax_5, 0x3e9)
        
        if (result.b != 0)
            void* eax_6 = sub_573400()
            uint32_t eax_7 = sub_56b800()
            int32_t ecx_4 = *(*(eax_6 + 4) + 0x1504)
            
            if (ecx_4 != 3 && ecx_4 != 5 && ecx_4 != 4 && ecx_4 != 6)
                ecx_4.b = ecx_4 == 2
                sub_61b1b0(eax_7, 0x24, ecx_4.b, *(eax_6 + 0xc), eax_7, 1, nullptr, nullptr, 
                    nullptr, 0, 0, 0, 0, 0)
            
            int32_t i_2 = 3
            int32_t i_1
            
            do
                result = sub_563590(0xd29)
                
                if (result != 0)
                    void* eax_8 = sub_573400()
                    result = sub_583720(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), result, 0x476, 
                        nullptr, 0x476, 0, 0, 4)
                
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)

CookieCheckFunction(result)
return result
