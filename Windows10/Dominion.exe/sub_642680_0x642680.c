// 函数: sub_642680
// 地址: 0x642680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t ebx = arg2
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_18 = ebx
char const* const var_94_1
int32_t var_90_1
char const* const var_8c
char* ecx

if (arg3[1] != 0x25)
    var_8c = "TTFontGet"
    var_90_1 = 0x1ef
    ecx = "ttf->assetType == ASSET_TYPE_TRUETYPE"
label_642abc:
    var_94_1 = "C:\x\ax2017\Engine\TTFont.cpp"
label_642ac6:
    sub_63b870(arg1, &data_801800, ecx, var_94_1, var_90_1, var_8c)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

void* eax = sub_5af880(arg3)
void* eax_1 = sub_6423c0(arg3)
int32_t* ecx_2 = 1
void* eax_2 = *(eax + 0x38)

if (not(arg4 f<= _mm_cvtepi32_ps(zx.o(data_bf21a8))))
    float xmm1_1 = arg4 / _mm_cvtepi32_ps(zx.o(*(eax_1 + 0x84)))
    float xmm1_2
    
    if (0 f<= xmm1_1)
        xmm1_2 = xmm1_1 + 0.5f
    else
        xmm1_2 = xmm1_1 - 0.5f
    
    int32_t ecx_5 = (int.d(xmm1_2) - 1) | (int.d(xmm1_2) - 1) u>> 1
    int32_t ecx_6 = ecx_5 | ecx_5 u>> 2
    int32_t ecx_7 = ecx_6 | ecx_6 u>> 4
    int32_t ecx_8 = ecx_7 | ecx_7 u>> 8
    int32_t eax_13 = ecx_8 u>> 0x10 | ecx_8
    arg1 = eax_13 + 1
    
    if (eax_13 != 0xffffffff)
        void* ecx_9 = nullptr
        
        while (arg1 u> 1)
            arg1 u>>= 1
            ecx_9 += 1
        
        ecx_2 = ecx_9 + 1
        
        if (ecx_2 s>= 1)
            goto label_642772
        
        var_8c = "TTFontUnicodeToGlyph"
        var_90_1 = 0x3b9
        ecx = "mip >= 1"
        goto label_642abc
    
    var_8c = "LogBase2"
    var_90_1 = 0xa7
    var_94_1 = "C:\x\ax2017\Engine\MathFunctions.cpp"
    ecx = "n > 0"
    goto label_642ac6

label_642772:
int32_t* edi_1 = *(eax + 0x2c)
int32_t var_2c = ebx

if (ecx_2 s< edi_1)
    edi_1 = ecx_2

int32_t* var_28 = arg3
int32_t ecx_10 = *(eax_1 + 0xcc)
int32_t eax_16 = edi_1 << 8 | ebx
int32_t* var_30 = edi_1
int32_t* eax_18 = *(*(eax_1 + 0xc8) + ((ecx_10 & eax_16) << 2))
void* eax_19

if (eax_18 == 0)
label_6427bb:
    eax_19 = nullptr
else
    while (edi_1 != *eax_18 || ebx != eax_18[1] || arg3 != eax_18[2])
        eax_18 = eax_18[0x14]
        
        if (eax_18 == 0)
            goto label_6427bb
    
    eax_19 = &eax_18[3]

void* const var_a0
void* eax_50

if (eax_19 != 0)
    if (sub_6406e0(eax_1 + 0x80, &var_30) != 0)
        return eax_19
    
    eax_50 = eax_19
else
    int32_t var_78_1 = ebx
    int32_t* var_74_1 = edi_1
    uint32_t eax_20 = sub_6d1fd0(eax_2, ebx)
    int32_t edx_2 = *(eax_2 + 0x14)
    int32_t eax_25 = *(eax_2 + 4)
    float xmm0_6 = _mm_cvtepi32_ps(zx.o(*(eax_1 + 0x84) << (edi_1.b - 1)))
    float xmm0_8 = _mm_cvtepi32_ps(zx.o((zx.d(*(edx_2 + eax_25 + 0x12)) << 8)
        + zx.d(*(edx_2 + eax_25 + 0x13))))
    int32_t eax_27 = *(eax_2 + 0x1c)
    int32_t edx_3 = *(eax_2 + 4)
    int128_t xmm2_3 = (xmm0_6 - 1f) / xmm0_8
    uint32_t eax_29 = zx.d(*(eax_27 + edx_3 + 0x23)) + (zx.d(*(eax_27 + edx_3 + 0x22)) << 8)
    int32_t eax_31 = *(eax_2 + 0x20)
    float var_6c_1 = xmm2_3
    uint16_t eax_34
    
    if (eax_20 s>= eax_29)
        int32_t eax_35 = eax_31 + (eax_29 << 2)
        ebx = var_18
        eax_34 = zx.w(*(eax_35 + edx_3 - 3)) + zx.w(*(eax_35 + *(eax_2 + 4) - 4)) * 0x100
    else
        char* edx_5 = eax_31 + (eax_20 << 2) + *(eax_2 + 4)
        eax_34 = zx.w(*edx_5) * 0x100 + zx.w(edx_5[1])
    
    int32_t var_4c
    int32_t* var_8c_1 = &var_4c
    int32_t var_50
    int32_t* var_90_2 = &var_50
    int32_t var_54
    int32_t* var_94_2 = &var_54
    int32_t var_58
    int32_t* var_98_1 = &var_58
    int32_t var_9c_1 = 0
    var_a0 = nullptr
    sub_6d4820(&var_58, eax_20, eax_2, xmm2_3, xmm2_3)
    float xmm1_3 = 1f / xmm0_6
    void* edx_8 = eax_1
    int32_t ecx_32 = *(edx_8 + 0xcc) & eax_16
    float xmm0_11 = _mm_cvtepi32_ps(zx.o(var_58)) * xmm1_3
    float var_44_1 = _mm_cvtepi32_ps(zx.o(var_54)) * xmm1_3
    float var_40_1 = _mm_cvtepi32_ps(zx.o(var_50)) * xmm1_3
    float var_3c_1 = _mm_cvtepi32_ps(zx.o(var_4c)) * xmm1_3
    int32_t eax_39 = *(edx_8 + 0xc8)
    float xmm0_22 = _mm_cvtepi32_ps(zx.o(sx.d(eax_34)))
    int32_t* ecx_33 = *(eax_39 + (ecx_32 << 2))
    float xmm0_24 = xmm0_22 * var_6c_1 * xmm1_3
    int128_t var_68
    
    if (ecx_33 == 0)
    label_64298a:
        int32_t* edx_9 = sub_64bfd0(0x54)
        edx_9[3] += 1
        
        if (*edx_9 == 0)
            sub_64be70(edx_9)
        
        int32_t* ecx_35 = *edx_9
        int64_t xmm0_25 = var_30.q
        *edx_9 = *ecx_35
        edx_8 = eax_1
        *ecx_35 = xmm0_25
        ecx_35[2] = arg3
        *(ecx_35 + 0xc) = var_78_1.o
        *(ecx_35 + 0x1c) = var_68
        *(ecx_35 + 0x2c) = var_58.o
        *(ecx_35 + 0x3c) = xmm0_11.o
        ecx_35[0x13] = xmm0_24
        ecx_35[0x14] = *(*(edx_8 + 0xc8) + (ecx_32 << 2))
        *(*(edx_8 + 0xc8) + (ecx_32 << 2)) = ecx_35
        *(edx_8 + 0xd0) += 1
        ebx = var_18
    else
        while (edi_1 != *ecx_33 || ebx != ecx_33[1] || arg3 != ecx_33[2])
            ecx_33 = ecx_33[0x14]
            
            if (ecx_33 == 0)
                goto label_64298a
        
        *(ecx_33 + 0xc) = var_78_1.o
        *(ecx_33 + 0x1c) = var_68
        *(ecx_33 + 0x2c) = var_58.o
        *(ecx_33 + 0x3c) = xmm0_11.o
        ecx_33[0x13] = xmm0_24
    int32_t* eax_47 = *(*(edx_8 + 0xc8) + ((*(edx_8 + 0xcc) & eax_16) << 2))
    
    if (eax_47 == 0)
    label_642a28:
        eax_50 = nullptr
    else
        while (edi_1 != *eax_47 || ebx != eax_47[1] || arg3 != eax_47[2])
            eax_47 = eax_47[0x14]
            
            if (eax_47 == 0)
                goto label_642a28
        
        eax_50 = &eax_47[3]

if (arg5 == 0)
    return eax_50

int32_t var_8c_2 = ebx
void* var_90_3 = eax_2
void* var_94_3 = eax
int64_t var_a4 = var_30.q
return sub_642450(&var_a4, edi_1, eax_1, var_a4.d, var_a0, arg3, eax_50)
