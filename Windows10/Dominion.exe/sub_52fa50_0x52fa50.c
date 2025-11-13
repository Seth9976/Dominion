// 函数: sub_52fa50
// 地址: 0x52fa50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1908)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void var_1908
int32_t var_c88[0x4]
uint32_t eax_2 = sub_56d830(&var_1908, &var_c88)
int32_t edx_1 = 0
int32_t i = 0

if (eax_2 s> 0)
    if (eax_2 u>= 8)
        int32_t eax_3 = eax_2 & 0x80000007
        
        if (eax_3 s< 0)
            eax_3 = ((eax_3 - 1) | 0xfffffff8) + 1
        
        int32_t xmm3_1[0x4] = data_891390
        int32_t xmm2_1[0x4] = zx.o(0)
        int32_t xmm1_1[0x4] = zx.o(0)
        
        do
            xmm2_1 = _mm_sub_epi32(xmm2_1, _mm_cmpeq_epi32(*(&var_c88 + (i << 2)), xmm3_1))
            void var_c78
            int32_t xmm0_3[0x4] = *(&var_c78 + (i << 2))
            i += 8
            xmm1_1 = _mm_sub_epi32(xmm1_1, _mm_cmpeq_epi32(xmm0_3, xmm3_1))
        while (i s< eax_2 - eax_3)
        
        int32_t xmm1_2[0x4] = _mm_add_epi32(xmm1_1, xmm2_1)
        int32_t xmm1_3[0x4] = _mm_add_epi32(xmm1_2, _mm_bsrli_si128(xmm1_2, 8))
        edx_1 = _mm_add_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 4))
    
    if (eax_2 u< 8 || i s< eax_2)
        do
            int32_t eax_6 = edx_1 + 1
            
            if (var_c88[i] != 1)
                eax_6 = edx_1
            
            i += 1
            edx_1 = eax_6
        while (i s< eax_2)

int32_t result = neg.d(edx_1 * 3)
CookieCheckFunction(result)
return result
