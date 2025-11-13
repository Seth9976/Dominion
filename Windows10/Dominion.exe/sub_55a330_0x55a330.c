// 函数: sub_55a330
// 地址: 0x55a330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1908)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_4 + 0x17558) |= 2
int32_t var_c88[0x4]
uint32_t eax_5 = sub_56d740(arg1, &var_c88)
uint32_t edx_1 = eax_5
uint32_t esi = 0
int32_t i = 0

if (edx_1 s> 0)
    if (edx_1 u>= 8)
        int32_t eax_6 = eax_5 & 0x80000007
        
        if (eax_6 s< 0)
            eax_6 = ((eax_6 - 1) | 0xfffffff8) + 1
        
        int32_t xmm3_1[0x4] = data_891390
        int32_t xmm2_1[0x4] = zx.o(0)
        int32_t xmm1_1[0x4] = zx.o(0)
        eax_5 = &var_c88
        
        do
            xmm2_1 = _mm_sub_epi32(xmm2_1, _mm_cmpeq_epi32(*(&var_c88 + (i << 2)), xmm3_1))
            void var_c78
            int32_t xmm0_3[0x4] = *(&var_c78 + (i << 2))
            i += 8
            xmm1_1 = _mm_sub_epi32(xmm1_1, _mm_cmpeq_epi32(xmm0_3, xmm3_1))
        while (i s< edx_1 - eax_6)
        
        int32_t xmm1_2[0x4] = _mm_add_epi32(xmm1_1, xmm2_1)
        int32_t xmm1_3[0x4] = _mm_add_epi32(xmm1_2, _mm_bsrli_si128(xmm1_2, 8))
        esi = _mm_add_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 4))
    
    if (edx_1 u< 8 || i s< edx_1)
        do
            eax_5 = esi + 1
            
            if (var_c88[i] != 1)
                eax_5 = esi
            
            i += 1
            esi = eax_5
        while (i s< edx_1)

int32_t i_1 = i
uint32_t result = sub_561e00(eax_5, 0, esi, 0)
CookieCheckFunction(result)
return result
