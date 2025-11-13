// 函数: sub_5a1d30
// 地址: 0x5a1d30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg2
float* var_24 = ebx
int32_t* esi = arg1[4]

if (esi != 0)
    goto label_5a1dc5

if ((arg1[0x1c] f- arg1[0x1a]) * 0.5f f<= *ebx)
    esi = arg1[3]
label_5a1dc5:
    int32_t eax_4 = arg1[2]
    
    if (esi == eax_4)
        goto label_5a1d78
    
    if (esi != arg1[3])
        if (sub_5a1920(esi, arg2) != 0)
            goto label_5a1d78
        
        eax_4 = arg1[2]
    
    bool cond:0_1
    
    do
        esi = esi[1]
        
        if (esi == eax_4)
            break
        
        cond:0_1 = sub_5a1920(esi, ebx) == 0
        eax_4 = arg1[2]
    while (cond:0_1)
else
    esi = arg1[2]
label_5a1d78:
    int32_t i
    
    do
        esi = esi[2]
        
        if (esi == arg1[3])
            break
        
        i = sub_5a1920(esi, ebx)
    while (i != 0)
    esi = esi[1]

int32_t edx_1 = *esi
int32_t* eax_1 = esi[2]
int32_t* var_20 = eax_1
float* edx_2

if (edx_1 != 0)
    eax_1 = 2 - esi[6]
    edx_2 = *(edx_1 + (eax_1 << 2))

if (edx_1 == 0 || edx_2 == 0)
    edx_2 = arg1[7]

int32_t* var_3c = ebx
int32_t* eax_2 = sub_5a1830(eax_1, edx_2, arg1)
*eax_2 = arg1[1]
int32_t* ebx_1 = arg1[0xd]
arg1[1] = eax_2

if (ebx_1 == 0)
    ebx_1 = sub_5a1410(arg1, 0x20)
else
    arg1[0xd] = ebx_1[2]

*ebx_1 = eax_2
ebx_1[1] = 0
ebx_1[2] = 0
ebx_1[6] = 0
ebx_1[7] = 0
int32_t* ecx_6 = arg1[0xd]
int32_t* var_1c = ecx_6

if (ecx_6 == 0)
    int32_t* eax_10 = sub_5a1410(arg1, 0x20)
    ecx_6 = eax_10
    var_1c = eax_10
else
    arg1[0xd] = ecx_6[2]

*ecx_6 = eax_2
ecx_6[1] = 0
ecx_6[2] = 0
ecx_6[6] = 1
ecx_6[7] = 0
ebx_1[1] = esi
ebx_1[2] = esi[2]
*(esi[2] + 4) = ebx_1
esi[2] = ebx_1
ecx_6[1] = ebx_1
ecx_6[2] = ebx_1[2]
*(ebx_1[2] + 4) = ecx_6
ebx_1[2] = ecx_6
arg1[4] = var_20
void* ebx_2 = &arg1[5]
float var_10
float var_c
int32_t entry_ebx
float* edi_1

if (sub_5a1c20(&var_10, ebx_1, esi, &var_10) == 0)
    edi_1 = var_24
else
    void* eax_19 = *ebx_2
    
    if (*(eax_19 + 4) != 1)
        int32_t edx_5 = esi[7]
        
        if (edx_5 != 0)
            int32_t ecx_9 = *(eax_19 + 8)
            int32_t eax_21 = *(eax_19 + 4) - 1
            *(eax_19 + 4) = eax_21
            void* eax_22 = *(ecx_9 + (eax_21 << 2))
            *(ecx_9 + (edx_5 << 2)) = eax_22
            float xmm1_1 = esi[5]
            void* var_18_2 = eax_22
            float xmm0_4 = *(eax_22 + 0x14)
            xmm1_1 - xmm0_4
            eax_22:1.b = (xmm1_1 == xmm0_4 ? 1 : 0) << 6
                | (is_unordered.d(xmm1_1, xmm0_4) ? 1 : 0) << 2 | (xmm1_1 < xmm0_4 ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            bool cond:1_1
            
            if (p_2)
                cond:1_1 = xmm1_1 > xmm0_4
            else
                cond:1_1 = esi[3] f> *(var_18_2 + 0xc)
            
            int32_t eax_23
            eax_23.b = cond:1_1
            
            if (eax_23 == 0)
                sub_5a1af0(eax_19, edx_5)
            else
                sub_5a1a90(eax_19, edx_5)
            
            ebx_2 = &arg1[5]
            esi[7] = edx_5
    
    edi_1 = var_24
    float xmm0_6 = var_10
    esi[3] = xmm0_6
    esi[4] = var_c
    float xmm1_3 = *edi_1 - xmm0_6
    float xmm0_8 = edi_1[1] - var_c
    double xmm0_11 = _mm_cvtps_pd(xmm0_8 * xmm0_8 + xmm1_3 * xmm1_3)
    
    if (0 f> xmm0_11)
        _libm_sse2_sqrt_precise(arg4, arg3, entry_ebx)
    else
        xmm0_11 = _mm_sqrt_sd(xmm0_11, xmm0_11)
    
    esi[5] = fconvert.s(xmm0_11) + var_c
    void* ecx_12 = *ebx_2
    int32_t edx_6 = *(ecx_12 + 4)
    *(ecx_12 + 4) = edx_6 + 1
    *(*(ecx_12 + 8) + (edx_6 << 2)) = esi
    sub_5a1a90(ecx_12, edx_6)

int32_t result = sub_5a1c20(&var_10, var_20, var_1c, &var_10)

if (result == 0)
    return result

float xmm0_14 = var_10
var_1c[3] = xmm0_14
var_1c[4] = var_c
float xmm1_6 = *edi_1 - xmm0_14
float xmm0_16 = edi_1[1] - var_c
double xmm0_19 = _mm_cvtps_pd(xmm0_16 * xmm0_16 + xmm1_6 * xmm1_6)

if (0 f> xmm0_19)
    _libm_sse2_sqrt_precise(arg4, arg3, entry_ebx)
else
    xmm0_19 = _mm_sqrt_sd(xmm0_19, xmm0_19)

var_1c[5] = fconvert.s(xmm0_19) + var_c
void* ecx_14 = *ebx_2
int32_t edx_8 = *(ecx_14 + 4)
*(ecx_14 + 4) = edx_8 + 1
*(*(ecx_14 + 8) + (edx_8 << 2)) = var_1c
return sub_5a1a90(ecx_14, edx_8)
