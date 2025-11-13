// 函数: sub_55a4a0
// 地址: 0x55a4a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1908)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
uint32_t esi_1 = zx.d(sub_56b800())
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_5 = *(esi_1 * 0x64 + edi + 0x1a50)
int32_t var_c88[0x4]
uint32_t edx

if (eax_5 == 0x3ea || eax_5 == 0x3ec || eax_5 == 0x45c || eax_5 == 0x469 || eax_5 == 0x46a
        || eax_5 == 0x46b)
    edx = sub_56d740(esi_1, &var_c88)
    int32_t eax_8 = 0
    int32_t var_1908[0x320]
    
    if (edx s> 0)
        while (var_1908[eax_8] != 0x120c)
            eax_8 += 1
            
            if (eax_8 s>= edx)
                goto label_55a566
    
    if (edx s<= 0 || eax_8 == 0xffffffff)
    label_55a566:
        uint32_t eax_9 = edx
        edx += 1
        var_c88[eax_9] = 1
    else
        var_c88[eax_8] += 1
else
    edx = sub_56d740(esi_1, &var_c88)

uint32_t result = 0
int32_t i = 0

if (edx s> 0)
    if (edx u>= 8)
        int32_t eax_11 = edx & 0x80000007
        
        if (eax_11 s< 0)
            eax_11 = ((eax_11 - 1) | 0xfffffff8) + 1
        
        int32_t xmm3_1[0x4] = data_891390
        int32_t xmm2_1[0x4] = zx.o(0)
        int32_t xmm1_1[0x4] = zx.o(0)
        
        do
            xmm2_1 = _mm_sub_epi32(xmm2_1, _mm_cmpeq_epi32(*(&var_c88 + (i << 2)), xmm3_1))
            void var_c78
            int32_t xmm0_3[0x4] = *(&var_c78 + (i << 2))
            i += 8
            xmm1_1 = _mm_sub_epi32(xmm1_1, _mm_cmpeq_epi32(xmm0_3, xmm3_1))
        while (i s< edx - eax_11)
        
        int32_t xmm1_2[0x4] = _mm_add_epi32(xmm1_1, xmm2_1)
        int32_t xmm1_3[0x4] = _mm_add_epi32(xmm1_2, _mm_bsrli_si128(xmm1_2, 8))
        result = _mm_add_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 4))
    
    if (edx u< 8 || i s< edx)
        do
            uint32_t result_1 = result + 1
            
            if (var_c88[i] != 1)
                result_1 = result
            
            i += 1
            result = result_1
        while (i s< edx)

CookieCheckFunction(result)
return result
