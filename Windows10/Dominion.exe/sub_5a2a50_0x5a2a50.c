// 函数: sub_5a2a50
// 地址: 0x5a2a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = arg1[5]
void* edx = *(ecx + 8)
int32_t* eax = *(edx + 4)
*(ecx + 4) -= 1
*(edx + 4) = *(edx + (*(ecx + 4) << 2))
sub_5a1af0(ecx, 1)
int32_t* esi = eax[2]
int32_t* ebx = eax[1]
int32_t* eax_3 = esi[2]
void* eax_4 = *eax
float* eax_5 = *(eax_4 + (eax[6] << 2) + 4)
void* var_30 = &esi[6]
float* eax_7

if (*esi == 0)
    eax_7 = nullptr
    var_30 = &esi[6]
else
    eax_7 = *(*esi + ((2 - esi[6]) << 2))

int32_t xmm0 = eax[3]
int32_t xmm1 = eax[4]
int32_t eax_9 = eax[6] << 3
void* ecx_5 = eax_4 - eax_9
*(eax_9 + eax_4 + 0x10) = xmm1
*(eax_9 + eax_4 + 0xc) = xmm0
float xmm0_1 = *(ecx_5 + 0x14)
xmm0_1 - -3.40282347e+38f
eax_9:1.b = (xmm0_1 == -3.40282347e+38f ? 1 : 0) << 6
    | (is_unordered.d(xmm0_1, -3.40282347e+38f) ? 1 : 0) << 2 | (xmm0_1 < -3.40282347e+38f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
bool p_3

if (not(p_1))
    float xmm0_2 = *(ecx_5 + 0x18)
    xmm0_2 - -3.40282347e+38f
    eax_9:1.b = (xmm0_2 == -3.40282347e+38f ? 1 : 0) << 6
        | (is_unordered.d(xmm0_2, -3.40282347e+38f) ? 1 : 0) << 2
        | (xmm0_2 < -3.40282347e+38f ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

if (p_1 || p_3)
    sub_5a2040(arg1, eax_4)

void* edx_3 = *esi
int32_t eax_12 = *var_30 << 3
void* ecx_8 = edx_3 - eax_12
*(eax_12 + edx_3 + 0xc) = xmm0
*(eax_12 + edx_3 + 0x10) = xmm1
float xmm0_5 = *(ecx_8 + 0x14)
xmm0_5 - -3.40282347e+38f
eax_12:1.b = (xmm0_5 == -3.40282347e+38f ? 1 : 0) << 6
    | (is_unordered.d(xmm0_5, -3.40282347e+38f) ? 1 : 0) << 2 | (xmm0_5 < -3.40282347e+38f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}
bool p_7

if (not(p_5))
    float xmm0_6 = *(ecx_8 + 0x18)
    xmm0_6 - -3.40282347e+38f
    eax_12:1.b = (xmm0_6 == -3.40282347e+38f ? 1 : 0) << 6
        | (is_unordered.d(xmm0_6, -3.40282347e+38f) ? 1 : 0) << 2
        | (xmm0_6 < -3.40282347e+38f ? 1 : 0)
    p_7 = unimplemented  {test ah, 0x44}

if (p_5 || p_7)
    sub_5a2040(arg1, edx_3)

arg1[4] = eax_3
void* eax_14 = arg1[5]
float var_14

if (*(eax_14 + 4) != 1)
    int32_t edx_4 = esi[7]
    
    if (edx_4 != 0)
        int32_t ecx_10 = *(eax_14 + 8)
        int32_t eax_16 = *(eax_14 + 4) - 1
        *(eax_14 + 4) = eax_16
        float eax_17 = *(ecx_10 + (eax_16 << 2))
        var_14 = eax_17
        *(ecx_10 + (edx_4 << 2)) = eax_17
        float xmm0_7 = *(eax_17 i+ 0x14)
        float xmm1_1 = esi[5]
        xmm1_1 - xmm0_7
        eax_17:1.b = (xmm1_1 == xmm0_7 ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, xmm0_7) ? 1 : 0) << 2
            | (xmm1_1 < xmm0_7 ? 1 : 0)
        bool p_9 = unimplemented  {test ah, 0x44}
        bool cond:3_1
        
        if (p_9)
            cond:3_1 = xmm1_1 > xmm0_7
        else
            cond:3_1 = esi[3] f> *(var_14 i+ 0xc)
        
        int32_t eax_18
        eax_18.b = cond:3_1
        
        if (eax_18 == 0)
            sub_5a1af0(eax_14, edx_4)
        else
            sub_5a1a90(eax_14, edx_4)
        
        esi[7] = edx_4

*(eax[1] + 8) = eax[2]
*(eax[2] + 4) = eax[1]
eax[2] = 0
eax[1] = 0
*(esi[1] + 8) = esi[2]
*(esi[2] + 4) = esi[1]
esi[2] = 0
esi[1] = 0
eax[2] = arg1[0xd]
esi[2] = eax
float* edx_8 = eax_5
arg1[0xd] = esi
float xmm1_2 = edx_8[1]
float temp0 = eax_7[1]
xmm1_2 - temp0
float eax_25
eax_25.b = xmm1_2 > temp0
var_14 = eax_25
float* eax_26 = eax_7

if (xmm1_2 <= temp0)
    eax_26 = edx_8

if (xmm1_2 <= temp0)
    edx_8 = eax_7

float* var_44 = edx_8
int32_t* edx_10 = sub_5a1830(eax_26, eax_26, arg1)
*edx_10 = arg1[1]
int32_t** esi_1 = arg1[0xd]
arg1[1] = edx_10

if (esi_1 == 0)
    esi_1 = sub_5a1410(arg1, 0x20)
else
    arg1[0xd] = esi_1[2]

float ecx_21 = var_14
esi_1[6] = ecx_21
esi_1[2] = 0
*esi_1 = edx_10
esi_1[7] = 0
esi_1[1] = ebx
esi_1[2] = ebx[2]
*(ebx[2] + 4) = esi_1
ebx[2] = esi_1
int32_t eax_33 = (1 i- ecx_21) << 3
void* ecx_23 = edx_10 - eax_33
*(eax_33 + edx_10 + 0xc) = xmm0
*(eax_33 + edx_10 + 0x10) = xmm1
float xmm0_11 = *(ecx_23 + 0x14)
xmm0_11 - -3.40282347e+38f
eax_33:1.b = (xmm0_11 == -3.40282347e+38f ? 1 : 0) << 6
    | (is_unordered.d(xmm0_11, -3.40282347e+38f) ? 1 : 0) << 2
    | (xmm0_11 < -3.40282347e+38f ? 1 : 0)
bool p_11 = unimplemented  {test ah, 0x44}
bool p_13

if (not(p_11))
    float xmm0_12 = *(ecx_23 + 0x18)
    xmm0_12 - -3.40282347e+38f
    eax_33:1.b = (xmm0_12 == -3.40282347e+38f ? 1 : 0) << 6
        | (is_unordered.d(xmm0_12, -3.40282347e+38f) ? 1 : 0) << 2
        | (xmm0_12 < -3.40282347e+38f ? 1 : 0)
    p_13 = unimplemented  {test ah, 0x44}

if (p_11 || p_13)
    sub_5a2040(arg1, edx_10)

float var_10
int32_t entry_ebx

if (sub_5a1c20(&var_14, esi_1, ebx, &var_14) != 0)
    void* eax_36 = arg1[5]
    
    if (*(eax_36 + 4) != 1)
        int32_t edx_12 = ebx[7]
        
        if (edx_12 != 0)
            int32_t ecx_26 = *(eax_36 + 8)
            int32_t eax_38 = *(eax_36 + 4) - 1
            *(eax_36 + 4) = eax_38
            void* eax_39 = *(ecx_26 + (eax_38 << 2))
            void* var_c_2 = eax_39
            *(ecx_26 + (edx_12 << 2)) = eax_39
            float xmm0_13 = *(eax_39 + 0x14)
            float xmm1_3 = ebx[5]
            xmm1_3 - xmm0_13
            eax_39:1.b = (xmm1_3 == xmm0_13 ? 1 : 0) << 6
                | (is_unordered.d(xmm1_3, xmm0_13) ? 1 : 0) << 2 | (xmm1_3 < xmm0_13 ? 1 : 0)
            bool p_15 = unimplemented  {test ah, 0x44}
            bool cond:4_1
            
            if (p_15)
                cond:4_1 = xmm1_3 > xmm0_13
            else
                cond:4_1 = ebx[3] f> *(var_c_2 + 0xc)
            
            int32_t eax_40
            eax_40.b = cond:4_1
            
            if (eax_40 == 0)
                sub_5a1af0(eax_36, edx_12)
            else
                sub_5a1a90(eax_36, edx_12)
            
            ebx[7] = edx_12
    
    float xmm0_15 = var_14
    ebx[3] = xmm0_15
    ebx[4] = var_10
    float xmm1_5 = *eax_26 - xmm0_15
    float xmm0_17 = eax_26[1] - var_10
    double xmm0_20 = _mm_cvtps_pd(xmm0_17 * xmm0_17 + xmm1_5 * xmm1_5)
    
    if (0 f> xmm0_20)
        _libm_sse2_sqrt_precise(arg3, arg2, entry_ebx)
    else
        xmm0_20 = _mm_sqrt_sd(xmm0_20, xmm0_20)
    
    ebx[5] = fconvert.s(xmm0_20) + var_10
    void* ecx_29 = arg1[5]
    int32_t edx_15 = *(ecx_29 + 4)
    *(ecx_29 + 4) = edx_15 + 1
    *(*(ecx_29 + 8) + (edx_15 << 2)) = ebx
    sub_5a1a90(ecx_29, edx_15)

int32_t result = sub_5a1c20(&var_14, eax_3, esi_1, &var_14)

if (result == 0)
    return result

float xmm0_23 = var_14
esi_1[3] = xmm0_23
esi_1[4] = var_10
float xmm1_8 = *eax_26 - xmm0_23
float xmm0_25 = eax_26[1] - var_10
double xmm0_28 = _mm_cvtps_pd(xmm0_25 * xmm0_25 + xmm1_8 * xmm1_8)

if (0 f> xmm0_28)
    _libm_sse2_sqrt_precise(arg3, arg2, entry_ebx)
else
    xmm0_28 = _mm_sqrt_sd(xmm0_28, xmm0_28)

esi_1[5] = fconvert.s(xmm0_28) + var_10
void* ecx_31 = arg1[5]
int32_t edx_17 = *(ecx_31 + 4)
*(ecx_31 + 4) = edx_17 + 1
*(*(ecx_31 + 8) + (edx_17 << 2)) = esi_1
return sub_5a1a90(ecx_31, edx_17)
