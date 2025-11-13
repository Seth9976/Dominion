// 函数: sub_6ac380
// 地址: 0x6ac380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

FILE* esi = arg4
int32_t eax = sub_6aa0d0(esi)
int32_t edx = arg3[1]
uint128_t var_2c = zx.o(0)
char eax_1 = sub_6aacf0(&var_2c, esi)
int32_t edx_2 = eax
int32_t ecx_2 = 0xb

if (edx_2 != 6)
    ecx_2 = 8

*arg3 = ecx_2

if (eax_1 == 0)
    return eax_1

float xmm1 = arg3[7]
xmm1 - 1f
bool p_1 = unimplemented  {test ah, 0x44}
int32_t ecx_8

if (not(p_1))
    ecx_8 = var_2c.d
else
    uint128_t xmm0_1 = var_2c
    int32_t var_40_1 = xmm0_1.d
    void* xmm0_2 = _mm_bsrli_si128(xmm0_1, 8)
    float xmm0_6 = sub_4d5cf0(_mm_cvtepi32_ps(zx.o(xmm0_2)) * xmm1)
    float xmm0_7
    
    if (0 f<= xmm0_6)
        xmm0_7 = xmm0_6 + 0.5f
    else
        xmm0_7 = xmm0_6 - 0.5f
    
    int32_t eax_3 = int.d(xmm0_7)
    float xmm0_11 = sub_4d5cf0(_mm_cvtepi32_ps(zx.o(var_2c:4.d)) f* arg3[7])
    float xmm0_12
    
    if (0 f<= xmm0_11)
        xmm0_12 = xmm0_11 + 0.5f
    else
        xmm0_12 = xmm0_11 - 0.5f
    
    int32_t edi_1 = int.d(xmm0_12)
    int32_t eax_4 = sub_6a9570(edi_1, edx)
    int32_t eax_6 = sub_687730(sub_6a9660(eax_4, eax_3, edi_1, edx))
    int32_t eax_7
    int32_t ecx_7
    eax_7, ecx_7 = sub_6a9450(edx)
    int32_t var_70_1 = eax_7
    int32_t var_78_1 = 0x3f800000
    int32_t var_7c_1 = 0x3f800000
    void var_88
    sub_71dda0(eax_7, var_2c.d, ecx_7, var_2c:4.d, xmm0_2, ecx_7, eax_6, edi_1, eax_3, var_88, 0f, 
        0)
    ecx_8 = eax_6
    var_2c:8.d = eax_3
    var_2c.d = ecx_8
    var_2c:4.d = edi_1
    var_2c:0xc.d = eax_4
    
    if (var_40_1 != 0)
        _aligned_free(var_40_1)
        ecx_8 = eax_6
    
    edx_2 = eax
    esi = arg4

int32_t eax_10 = *arg3
uint128_t* eax_11
int32_t* ecx_9

if (eax_10 != 8)
    if (eax_10 == 0xb)
        sub_6abe10(&var_2c, arg2, arg3, &var_2c, esi)
        int32_t eax_14
        eax_14.b = 1
        return eax_14
    
    if (eax_10 != 0)
        if (eax_10 != 6)
            if (ecx_8 != 0)
                _aligned_free(ecx_8)
            
            FILE* var_50_7 = esi
            sub_63b5f0("texture encoding not supported %s")
            uint32_t eax_17
            eax_17.b = 1
            return eax_17
    else if (edx_2 == 2)
        sub_6ab350(&var_2c, arg2, arg3, &var_2c, esi, edx_2)
        uint32_t eax_16
        eax_16.b = 1
        return eax_16
    
    eax_11 = &var_2c
    ecx_9 = arg3
else
    eax_11 = &var_2c
    ecx_9 = arg3
    
    if (arg3[4] != 1)
        sub_6ab350(eax_11, arg2, ecx_9, &var_2c, esi, edx_2)
        uint32_t eax_12
        eax_12.b = 1
        return eax_12

sub_6abfd0(eax_11, arg2, ecx_9, &var_2c, esi)
int32_t eax_18
eax_18.b = 1
return eax_18
