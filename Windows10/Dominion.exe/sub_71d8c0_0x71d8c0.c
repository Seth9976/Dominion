// 函数: sub_71d8c0
// 地址: 0x71d8c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = sub_71d730(arg3)
int32_t ecx = arg3[0x10]
int32_t edi_1 = arg3[1] * ecx
int32_t ebx_1 = arg3[5] * ecx

if (ecx u> 0x40 || arg3[0x14] u>= 6 || arg3[0x15] u>= 6 || ecx s<= 0xffffffff || arg7 == 0
        || arg8 u< eax)
    return 0

memset(arg7, 0, arg8)
float xmm1 = arg3[0xe]
int32_t ecx_2 = arg3[0x14]
*arg3 = arg2
arg3[3] = edi_1
arg3[4] = arg6
arg3[7] = ebx_1
arg3[0x11] = 0xffffffff
arg3[0x12] = 3
arg3[0x13] = 0
arg3[0x16] = 1
arg3[0x17] = 1
arg3[0x18] = 0
long double x87_r0
int32_t eax_4 = sub_7198c0(ecx_2, xmm1, x87_r0)
float xmm1_1 = arg3[0xf]
int32_t ecx_3 = arg3[0x15]
arg3[0x20] = eax_4
int32_t eax_5
int32_t ecx_4
long double x87_r1
eax_5, ecx_4 = sub_7198c0(ecx_3, xmm1_1, x87_r1)
float xmm1_2 = arg3[0xe]
arg3[0x21] = eax_5
int32_t var_84_1 = ecx_4
int32_t eax_7 = (&data_cb3cb0)[arg3[0x14] * 2]
int32_t eax_8
eax_8.b = xmm1_2 > 1f
float xmm0_2[0x2]

if (eax_8 == 0)
    eax_7(xmm1_2)
    float var_54_2 = fconvert.s(arg4)
    xmm0_2 = (var_54_2 + var_54_2) / xmm1_2
else
    eax_7(1f / xmm1_2)
    float var_54_1 = fconvert.s(arg4)
    xmm0_2 = var_54_1 + var_54_1

double var_50 = _mm_cvtps_pd(xmm0_2)
int32_t ecx_5
int32_t edx_1
ecx_5, edx_1 = ceil(0f)
int32_t eax_9
int32_t ecx_6
long double x87_r2
eax_9, ecx_6 = sub_7622d0(ecx_5, edx_1, x87_r2)
float xmm1_3 = arg3[0xf]
arg3[0x22] = eax_9
int32_t var_84_4 = ecx_6
int32_t eax_11 = (&data_cb3cb0)[arg3[0x15] * 2]
int32_t eax_12
eax_12.b = xmm1_3 > 1f
float xmm0_8[0x2]

if (eax_12 == 0)
    eax_11(xmm1_3)
    float var_54_4 = fconvert.s(arg5)
    xmm0_8 = (var_54_4 + var_54_4) / xmm1_3
else
    eax_11(1f / xmm1_3)
    float var_54_3 = fconvert.s(arg5)
    xmm0_8 = var_54_3 + var_54_3

double var_50_1 = _mm_cvtps_pd(xmm0_8)
int32_t ecx_7
int32_t edx_2
ecx_7, edx_2 = ceil(0f)
long double x87_r3
int32_t eax_13 = sub_7622d0(ecx_7, edx_2, x87_r3)
float xmm1_4 = arg3[0xe]
int32_t ecx_8 = arg3[0x14]
arg3[0x23] = eax_13
long double x87_r4
int32_t eax_14 = sub_719800(ecx_8, xmm1_4, x87_r4)
float xmm1_5 = arg3[0xf]
int32_t ecx_9 = arg3[0x15]
int32_t eax_15
int32_t edx_3
edx_3:eax_15 = sx.q(eax_14)
arg3[0x24] = (eax_15 - edx_3) s>> 1
long double x87_r5
int32_t eax_18 = sub_719800(ecx_9, xmm1_5, x87_r5)
int32_t ecx_10 = arg3[5]
int32_t eax_19
int32_t edx_4
edx_4:eax_19 = sx.q(eax_18)
void* edi_3 = arg3[0x2f] + arg7
arg3[0x25] = (eax_19 - edx_4) s>> 1
void* edx_5 = arg3[0x33]
int32_t xmm0_12 = arg3[0xf]
int32_t ecx_11 = arg3[1]
arg3[0x28] = (arg3[0x10] * ecx_10) << 2
int32_t eax_25 = arg3[0x24]
arg3[0x19] = arg7
arg3[0x1a] = edi_3
void* ecx_13 = arg3[0x30] + edi_3
arg3[0x1d] = ecx_11 + (eax_25 << 1)
void* eax_28 = arg3[0x31] + ecx_13
arg3[0x1b] = ecx_13
void* ecx_15 = arg3[0x32] + eax_28
arg3[0x1c] = eax_28
arg3[0x1e] = ecx_15
void* edx_6 = edx_5 + ecx_15
int32_t eax_29
eax_29.b = xmm0_12 f> 1f
void* eax_31
void* ecx_16

if (eax_29 == 0)
    eax_31 = nullptr
    ecx_16 = arg3[0x34] + edx_6
else
    ecx_16 = edx_6
    eax_31 = arg3[0x35] + edx_6
    edx_6 = nullptr

arg3[0x1f] = edx_6
arg3[0x2d] = ecx_16
arg3[0x2e] = eax_31
float xmm0_13 = arg3[0xc]
float xmm3 = arg3[0xe]
void* var_8c_1 = ecx_16
int32_t var_90 = arg3[0x14]
arg3[0x2c] = 0xffffffff
int32_t eax_32
int32_t ecx_19
long double x87_r6
long double x87_r7
eax_32, ecx_19 =
    sub_719fd0(eax_31, edi_3, arg7, xmm3, x87_r6, x87_r7, var_90, xmm0_13, ecx_11, ecx_10)
int32_t var_8c_3 = ecx_19
int32_t ecx_21 = sub_719fd0(eax_32, arg3[0x1c], arg3[0x1b], arg3[0xf], x87_r0, x87_r1, arg3[0x15], 
    arg3[0xd], arg3[2], arg3[6])
float xmm1_6 = arg3[0xf]
int32_t eax_33
eax_33.b = xmm1_6 > 1f

if (eax_33 == 0)
    sub_71d530(arg3, x87_r2)
else
    int32_t var_84_9 = ecx_21
    (&data_cb3cb0)[arg3[0x15] * 2](1f / xmm1_6)
    int32_t i = 0
    int32_t i_1 = 0
    float var_5c_2 = fconvert.s(x87_r2 * fconvert.t(xmm1_6))
    
    if (arg3[6] s> 0)
        do
            float xmm0_17 = float.s(i) + 0.5f
            var_50_1.d = xmm0_17
            long double x87_r2_2 =
                fconvert.t(_mm_cvtps_pd((xmm0_17 - var_5c_2 f+ arg3[0xd]) / xmm1_6) + 0.5)
            int32_t _X
            _X.q = fconvert.d(x87_r2_2)
            floor(_X)
            int32_t edi_4 = int.d(fconvert.t(fconvert.d(x87_r2_2)))
            long double x87_r2_3 =
                fconvert.t(_mm_cvtps_pd((var_50_1.d + var_5c_2 f+ arg3[0xd]) / xmm1_6) - 0.5)
            _X.q = fconvert.d(x87_r2_3)
            floor(_X)
            int32_t edx_9 = arg3[0x2c]
            
            if (edx_9 s< 0)
            label_71dd0b:
                sub_71bba0(arg3, edi_4)
            else
                int32_t ecx_22 = arg3[0x2a]
                
                if (edi_4 s> ecx_22)
                    do
                        if (ecx_22 == arg3[0x2b])
                            arg3[0x2c] = 0xffffffff
                            arg3[0x2a] = 0
                            arg3[0x2b] = 0
                            goto label_71dd0b_1
                        
                        ecx_22 += 1
                        arg3[0x29]
                        edx_9 = mods.dp.d(sx.q(edx_9 + 1), arg3[0x29])
                        arg3[0x2a] = ecx_22
                        arg3[0x2c] = edx_9
                    while (edi_4 s> ecx_22)
                    
                    if (edx_9 s< 0)
                    label_71dd0b_1:
                        sub_71bba0(arg3, edi_4)
            
            for (int32_t j = arg3[0x2b]; int.d(fconvert.t(fconvert.d(x87_r2_3))) s> j; 
                    j = arg3[0x2b])
                sub_71bba0(arg3, j + 1)
            
            sub_71cb00(arg3, i_1)
            i = i_1 + 1
            i_1 = i
        while (i s< arg3[6])

return 1
