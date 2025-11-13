// 函数: sub_4f3390
// 地址: 0x4f3390
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
uint32_t edx
ecx, edx = __chkstk(0x14710)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
*(edx + 0xb0) += 1
int16_t* ecx_1 = *(edx + 0xb4)
uint32_t eax_2 = ecx_1 * 0x84

if (*(eax_2 + 0x177764c) == 0)
    int128_t var_14708[0x146b]
    sub_4ee440(&var_14708, arg2, ecx, ecx_1, &var_14708)
    int32_t ecx_4 = *(arg2 + 0x54)
    uint32_t eax_6 = 0
    
    if (ecx_4 == 2)
        eax_6 = *(arg2 + 0x58)
    else if (ecx_4 == 3)
        eax_6 = sub_5916b0(*(arg2 + 0x58))
    
    *(edx + 0xb4)
    int32_t _X = *(arg2 + 0x40)
    int32_t var_1c_1 = *(arg2 + 0x50)
    float var_20_1 = *(ecx + 0xd38)
    int32_t var_3c[0x4]
    float var_24 = &var_3c
    int32_t var_54[0x6]
    sub_5b1ce0(arg2, edx, &var_54, var_24, var_20_1, var_1c_1, _X, eax_6)
    sub_4f3110(arg2, edx)
    sub_4f2b60(arg2, edx)
    int32_t esi_1 = 0
    *(edx + (*(ecx + 0x19cc) << 2) + 0x30) = 0x3f800000
    int32_t eax_8 = *(ecx + 0xd38)
    
    if (eax_8 s> 0)
        float* ebx_1 = edx + 0x48
        
        do
            _X.q = _mm_cvtps_pd(var_54[esi_1]) / 10.0
            asinh(_X)
            unimplemented  {fmul st0, qword [0x890e58]}
            esi_1 += 1
            *ebx_1 = fconvert.s(unimplemented  {fstp dword [ebx], st0})
            unimplemented  {fstp dword [ebx], st0}
            int16_t top = top + 1
            eax_8 = *(ecx + 0xd38)
            ebx_1 = &ebx_1[1]
        while (esi_1 s< eax_8)
    
    int32_t count = eax_8 << 2
    memcpy(&var_24, &var_3c, count)
    int32_t eax_11 = count s>> 2
    sub_4f6060(eax_11, &(&var_24)[eax_8], &var_24, eax_11, eax_2)
    int32_t i = 0
    
    if (*(ecx + 0xd38) s> 0)
        void* edx_3 = edx + 0x60
        float xmm3_1 = var_24
        
        do
            float xmm0_6 = var_3c[i]
            float xmm1_2 = xmm3_1
            xmm0_6 - xmm1_2
            void* eax_12
            eax_12:1.b = (xmm0_6 == xmm1_2 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_6, xmm1_2) ? 1 : 0) << 2 | (xmm0_6 < xmm1_2 ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                xmm1_2 = var_20_1
            
            i += 1
            *edx_3 = xmm0_6 - xmm1_2
            edx_3 += 4
        while (i s< *(ecx + 0xd38))
else
    int32_t ecx_2 = *(ecx + 0xd38)
    int32_t eax_3 = 0
    
    if (ecx_2 s> 0)
        do
            *(edx + (eax_3 << 2)) = 1f / _mm_cvtepi32_ps(zx.o(ecx_2))
            eax_3 += 1
            ecx_2 = *(ecx + 0xd38)
        while (eax_3 s< ecx_2)
    
    *(edx + (*(ecx + 0x19cc) << 2) + 0x30) = 0x3f800000

int32_t i_1 = 0
uint32_t result = data_183ad10 + 1
data_183ad10 = result

if (*(ecx + 0xd38) s> 0)
    void* ecx_10 = edx + 0x30
    
    do
        float xmm1_3 = *(ecx_10 - 0x30)
        xmm1_3 - 1f
        float xmm2_7 = *(ecx_10 - 0x18) f* *(eax_2 + 0x1777660) + xmm1_3
            + *(eax_2 + 0x1777668) f* *ecx_10 + *(ecx_10 + 0x18) f* *(eax_2 + 0x177766c)
            + *(edx + 0x78) f* *(eax_2 + 0x1777664)
        result:1.b = (xmm1_3 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_3, 1f) ? 1 : 0) << 2
            | (xmm1_3 < 1f ? 1 : 0)
        float xmm2_8 = xmm2_7 + *(ecx_10 + 0x30) f* *(eax_2 + 0x1777670)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (not(p_4))
            xmm2_8 = xmm2_8 + 0.100000001f
        
        *(ecx_10 + 0x4c) = xmm2_8
        i_1 += 1
        *(ecx_10 + 0x64) = xmm2_8
        ecx_10 += 4
    while (i_1 s< *(ecx + 0xd38))

CookieCheckFunction(result)
return result
