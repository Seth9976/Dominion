// 函数: sub_6d4820
// 地址: 0x6d4820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
float xmm1 = arg4
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
float var_c = xmm1
int32_t var_10_1
int32_t var_8_1
int32_t eax_1
int32_t ebx
int32_t edi

if (*(arg3 + 0x40) != 0)
    int32_t var_4c = 1
    int32_t var_48
    __builtin_memset(&var_48, 0, 0x2c)
    int32_t* var_60_1 = &var_4c
    eax_1 = sub_6d3180(&var_4c, arg2, arg3)
    xmm1 = var_c
    ebx = 0
    int128_t var_34
    
    if (eax_1 != 0)
        ebx = var_34.d
    
    int32_t ecx = 0
    
    if (eax_1 != 0)
        ecx = var_34:8.d
    
    int32_t edx = 0
    var_10_1 = ecx
    
    if (eax_1 != 0)
        edx = var_34:4.d
    
    edi = 0
    var_8_1 = edx
    
    if (eax_1 != 0)
        edi = var_34:0xc.d
    
    goto label_6d492d

int32_t eax_2 = sub_6d2320(arg3, arg2)

if (eax_2 s< 0)
    if (arg8 != 0)
        *arg8 = 0
    
    if (arg9 != 0)
        *arg9 = 0
    
    if (arg10 != 0)
        *arg10 = 0
    
    eax_1 = arg11
    
    if (eax_1 != 0)
        *eax_1 = 0
else
    int32_t esi_1 = *(arg3 + 4)
    ebx = sx.d(zx.w(*(esi_1 + eax_2 + 2)) * 0x100 + zx.w(*(esi_1 + eax_2 + 3)))
    var_10_1 = sx.d(zx.w(*(esi_1 + eax_2 + 5)) + zx.w(*(esi_1 + eax_2 + 4)) * 0x100)
    var_8_1 = sx.d(zx.w(*(esi_1 + eax_2 + 6)) * 0x100 + zx.w(*(esi_1 + eax_2 + 7)))
    eax_1 = zx.d(*(esi_1 + eax_2 + 9))
    edi = sx.d(zx.w(*(esi_1 + eax_2 + 8)) * 0x100 + eax_1.w)
label_6d492d:
    
    if (arg8 != 0)
        long double x87_r7_1 = fconvert.t(_mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(ebx)) * xmm1 + arg6))
        int32_t ecx_13
        int32_t edx_2
        ecx_13, edx_2 = floor(fconvert.d(x87_r7_1))
        eax_1 = sub_7622d0(ecx_13, edx_2, x87_r7_1)
        *arg8 = eax_1
    
    if (arg9 != 0)
        long double x87_r7_2 = fconvert.t(_mm_cvtps_pd(arg7 - _mm_cvtepi32_ps(zx.o(edi)) * arg5))
        int32_t ecx_14
        int32_t edx_3
        ecx_14, edx_3 = floor(fconvert.d(x87_r7_2))
        eax_1 = sub_7622d0(ecx_14, edx_3, x87_r7_2)
        *arg9 = eax_1
    
    if (arg10 != 0)
        long double x87_r7_3 =
            fconvert.t(_mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(var_8_1)) * var_c + arg6))
        int32_t ecx_15
        int32_t edx_4
        ecx_15, edx_4 = ceil(fconvert.d(x87_r7_3))
        eax_1 = sub_7622d0(ecx_15, edx_4, x87_r7_3)
        *arg10 = eax_1
    
    if (arg11 != 0)
        long double x87_r7_4 =
            fconvert.t(_mm_cvtps_pd(arg7 - _mm_cvtepi32_ps(zx.o(var_10_1)) * arg5))
        int32_t ecx_16
        int32_t edx_5
        ecx_16, edx_5 = ceil(fconvert.d(x87_r7_4))
        int32_t eax_7 = sub_7622d0(ecx_16, edx_5, x87_r7_4)
        *arg11 = eax_7
        return eax_7

return eax_1
