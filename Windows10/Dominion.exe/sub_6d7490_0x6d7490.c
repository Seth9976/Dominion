// 函数: sub_6d7490
// 地址: 0x6d7490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* var_10
int32_t* var_68 = &var_10
int32_t eax_1 = sub_6d4740(&var_10, arg9, arg3)
int32_t esi_1
int32_t edi_1

if (*(arg3 + 0x40) != 0)
    int32_t var_54 = 1
    int32_t var_50
    __builtin_memset(&var_50, 0, 0x2c)
    int32_t* var_68_1 = &var_54
    int32_t eax_3 = sub_6d3180(&var_54, arg9, arg3)
    esi_1 = 0
    int128_t var_3c
    
    if (eax_3 != 0)
        esi_1 = var_3c.d
    
    edi_1 = 0
    
    if (eax_3 != 0)
        edi_1 = var_3c:0xc.d
    
    goto label_6d7566

int32_t eax_4 = sub_6d2320(arg3, arg9)
int32_t var_8
int32_t esi_2

if (eax_4 s< 0)
    esi_2 = 0
    var_8 = 0
else
    int32_t edx_2 = *(arg3 + 4)
    esi_1 = sx.d(zx.w(*(edx_2 + eax_4 + 2)) * 0x100 + zx.w(*(edx_2 + eax_4 + 3)))
    edi_1 = sx.d(zx.w(*(edx_2 + eax_4 + 8)) * 0x100 + zx.w(*(edx_2 + eax_4 + 9)))
label_6d7566:
    long double x87_r7_1 = fconvert.t(_mm_cvtps_pd(float.s(esi_1) * arg5 + arg7))
    floor(fconvert.d(x87_r7_1))
    esi_2 = int.d(fconvert.t(fconvert.d(x87_r7_1)))
    long double x87_r7_2 = fconvert.t(_mm_cvtps_pd(arg8 - float.s(edi_1) * arg6))
    floor(fconvert.d(x87_r7_2))
    var_8 = int.d(fconvert.t(fconvert.d(x87_r7_2)))

int32_t arg_4
int32_t ecx_7 = arg_4
int32_t arg_8
int32_t edx_3 = arg_8
int32_t var_18 = arg2
void* ebx_1 = var_10
int32_t var_24 = ecx_7
int32_t var_20 = edx_3
int32_t var_1c = arg4

if (ecx_7 != 0 && edx_3 != 0)
    int32_t var_68_2 = ecx_7
    double var_6c
    var_6c.d = &arg_4
    float xmm2_1 = 0.349999994f / __minss_xmmss_memss(arg6, arg5)
    arg_4 = 0
    arg_8 = 0
    int32_t eax_10 = sub_6d7070(&arg_8, eax_1, ebx_1, xmm2_1, &arg_8, var_6c.d)
    
    if (eax_10 != 0)
        int32_t esi_3 = arg_8
        sub_6d6770(eax_10, eax_10, &var_24, esi_3, arg_4, arg5, arg6, arg7, arg8, esi_2, var_8)
        free(esi_3)
        int32_t var_68_3 = eax_10
        free()

void* var_68_4 = ebx_1
return free()
