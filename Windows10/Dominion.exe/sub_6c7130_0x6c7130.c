// 函数: sub_6c7130
// 地址: 0x6c7130
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
RECT rect
GetClientRect(arg3, &rect)
RECT rect_1
GetWindowRect(arg3, &rect_1)
int32_t eax_4 = rect_1.bottom - rect.bottom - rect_1.top
int32_t esi_3 = rect_1.right - rect.right - rect_1.left
void* eax_5 = data_cf65b8
int32_t edx = *(eax_5 + 0x14)
int32_t eax_6 = *(eax_5 + 0x18)
float xmm2_1 = _mm_cvtepi32_ps(zx.o(edx))
int32_t ecx_1 = *arg4
int32_t ebx = arg4[2]
int32_t ecx_4 = ebx - *arg4 - esi_3
int32_t esi_4 = arg4[3]
int32_t eax_11 = esi_4 - arg4[1] - eax_4
float xmm2_2 = xmm2_1 / _mm_cvtepi32_ps(zx.o(eax_6))
int32_t eax_17
int32_t edx_2

if (arg2 != 1 && arg2 != 2)
    float xmm1_2
    
    if (arg2 == 3 || arg2 == 6)
        xmm1_2 = _mm_cvtepi32_ps(zx.o(eax_11))
    label_6c7215:
        float xmm1_8 = xmm1_2 * xmm2_2
        float xmm1_9
        
        if (0 f<= xmm1_8)
            xmm1_9 = xmm1_8 + 0.5f
        else
            xmm1_9 = xmm1_8 - 0.5f
        
        int32_t ecx_5 = int.d(xmm1_9)
        int32_t eax_14
        int32_t edx_1
        edx_1:eax_14 = sx.q(ecx_5 - edx)
        int32_t eax_16 = (eax_14 ^ edx_1) - edx_1
        edx_2 = eax_6
        eax_17 = edx
        
        if (eax_16 s>= 0xa)
            edx_2 = eax_11
        
        if (eax_16 s>= 0xa)
            eax_17 = ecx_5
        
        if (arg2 == 7 || arg2 == 4)
            goto label_6c7295
        
        goto label_6c7287
    
    xmm1_2 = _mm_cvtepi32_ps(zx.o(eax_11))
    
    if (_mm_cvtepi32_ps(zx.o(ecx_4)) / xmm1_2 > xmm2_2)
        goto label_6c7215

float xmm1_5 = _mm_cvtepi32_ps(zx.o(ecx_4)) / xmm2_2
float xmm1_6

if (0 f<= xmm1_5)
    xmm1_6 = xmm1_5 + 0.5f
else
    xmm1_6 = xmm1_5 - 0.5f

int32_t eax_20
int32_t edx_3
edx_3:eax_20 = sx.q(ecx_4 - edx)
int32_t eax_22 = (eax_20 ^ edx_3) - edx_3
edx_2 = eax_6
eax_17 = edx

if (eax_22 s>= 0xa)
    eax_17 = ecx_4

if (eax_22 s>= 0xa)
    edx_2 = int.d(xmm1_6)

if (arg2 == 1 || arg2 == 7 || arg2 == 4)
label_6c7295:
    *arg4 = ebx - eax_17 - esi_3
    
    if (arg2 == 4 || arg2 == 3 || arg2 == 5)
        arg4[1] = esi_4 - edx_2 - eax_4
    else
        arg4[3] = arg4[1] + edx_2 + eax_4
else
label_6c7287:
    arg4[2] = eax_17 + ecx_1 + esi_3
    
    if (arg2 == 3 || arg2 == 5)
        arg4[1] = esi_4 - edx_2 - eax_4
    else
        arg4[3] = arg4[1] + edx_2 + eax_4

CookieCheckFunction(1)
return 1
