// 函数: sub_5a4a90
// 地址: 0x5a4a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t* ecx
uint32_t result_1
ecx, result_1 = __chkstk(0x4430)
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
int32_t xmm1[0x4] = data_891410
int32_t i_3 = 0
void var_4418
void* var_4420 = &var_4418
int32_t var_4424 = 0xc
int32_t i

do
    int32_t ecx_1 = 8
    void var_408
    void* edx = &var_408
    int32_t j
    
    do
        edx += 0x40
        *(edx - 0x50) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(ecx_1 - 8), 0), xmm1)
        int32_t eax_5 = ecx_1 + 4
        *(edx - 0x40) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(ecx_1 - 4), 0), xmm1)
        uint128_t xmm0_7 = zx.o(ecx_1)
        ecx_1 += 0x10
        *(edx - 0x30) = _mm_add_epi32(_mm_shuffle_epi32(xmm0_7, 0), xmm1)
        j = ecx_1 - 8
        *(edx - 0x20) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(eax_5), 0), xmm1)
    while (j s< 0x100)
    
    int32_t edi_1 = 0
    int32_t var_418[0x4]
    
    for (int32_t j_1 = 0x100; j_1 s> 0; )
        if (j_1 u< 1)
            sub_63b870(j, &data_801800, "mmin <= mmax", "C:\x\ax2017\Engine\Random.cpp", 0x120, 
                "RandomPCGIntRange")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        uint32_t eax_6 = sub_63ed10(ecx, j_1)
        int32_t edx_2 = var_418[edi_1]
        j = eax_6 + edi_1
        j_1 -= 1
        var_418[edi_1] = var_418[j]
        edi_1 += 1
        var_418[j] = edx_2
    
    int32_t j_2 = 0
    void* esi = var_4420
    
    do
        uint32_t eax_7 = zx.d(j_2.b)
        esi += 4
        j_2 += 1
        int32_t eax_8 = var_418[eax_7]
        *(esi - 4) = eax_8
        *(esi + 0x7fc) = mods.dp.d(sx.q(eax_8), var_4424)
    while (j_2 s< 0x200)
    
    xmm1 = data_891410
    i = i_3 + 1
    i_3 = i
    var_4420 += 0x1000
while (i s< 4)
uint32_t result = result_1
void* esi_2 = arg2 + 8
void* var_4424_1 = esi_2
int32_t i_2 = 0x4000
int32_t i_1

do
    void* edi_4 = &var_4418
    float xmm3_2 = *(esi_2 - 8) f* *(result + 4)
    int32_t j_4 = 4
    float xmm4_2 = *(esi_2 - 4) f* *(result + 4)
    float xmm2_1 = 1f
    float var_442c_1 = xmm3_2
    float var_4434_1 = xmm4_2
    float var_441c = 1f
    float var_4420_1 = 0f
    float xmm0_15
    int32_t j_3
    
    do
        float var_443c
        int32_t* var_1c_1 = &var_443c
        var_443c = xmm3_2 * xmm2_1
        float var_4438_1 = xmm4_2 * xmm2_1
        float xmm0_13 = sub_6b2f30(edi_4, var_1c_1)
        edi_4 += 0x1000
        xmm3_2 = var_442c_1
        xmm4_2 = var_4434_1
        xmm0_15 = xmm0_13 / var_441c + var_4420_1
        var_4420_1 = xmm0_15
        xmm2_1 = var_441c + var_441c
        var_441c = xmm2_1
        j_3 = j_4
        j_4 -= 1
    while (j_3 != 1)
    result = result_1
    float* esi_3 = var_4424_1
    *esi_3 = xmm0_15 f* *result + *esi_3
    esi_2 = &esi_3[3]
    i_1 = i_2
    i_2 -= 1
    var_4424_1 = esi_2
while (i_1 != 1)
CookieCheckFunction(result)
return result
