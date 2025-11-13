// 函数: sub_6bb270
// 地址: 0x6bb270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
int32_t eax_3 = sub_5af880(**(arg1 + 0x2e4))
void* ecx_2 = *(arg1 + 0x2dc) * 0x168 + *eax_3
arg2[0xc] = arg1
arg2[0xb] = modu.dp.d(0:(sub_63eb70()), 0x7fffffff)
*(arg1 + 0x2ec) = 0x3f800000
*(arg1 + 0x288) = data_bf21e8
*(arg1 + 0x298) = data_bf21f8
void* ecx_3 = *(arg2[0xc] i+ 0x2e4)
int32_t edx_2 = *(ecx_3 + 0x28)

if (edx_2 s> 0)
    arg2[0xf] = sub_6baf30(*(ecx_3 + 0x24), edx_2)

int32_t* eax_8 = sub_5af880(**(arg1 + 0x2e4))
float i_1

if (*(*(arg1 + 0x2dc) * 0x168 + *eax_8 + 0xde) != 0)
    i_1 = (sub_63eb70() & 0x7fffff) | 0x3f800000
    arg2[9] = (i_1 - 1f) * 6.28318548f + 0f

int32_t* eax_14 = sub_5af880(**(arg1 + 0x2e4))

if (*(*(arg1 + 0x2dc) * 0x168 + *eax_14 + 0xe0) != 0)
    i_1 = (sub_63eb70() & 0x7fffff) | 0x3f800000
    *(arg1 + 0x2e8) = i_1 - 1f + 0f

int32_t* eax_20 = sub_5af880(**(arg1 + 0x2e4))
float var_d0
float var_c0

if (*(*(arg1 + 0x2dc) * 0x168 + *eax_20 + 0xdf) != 0)
    float* eax_22 = sub_6bb0c0(&var_d0)
    int64_t xmm0_9 = *eax_22
    float eax_23 = eax_22[2]
    i_1 = (sub_63eb70() & 0x7fffff) | 0x3f800000
    float i_2 = (i_1 - 1f) * 6.28318548f * 0.5f
    i_1 = i_2
    int32_t var_b4_1 = sub_4ae0d0(ebp, i_2)
    float xmm0_15 = sub_4ae0f0(ebp, i_1)
    var_c0 = xmm0_9.d * xmm0_15
    float var_bc_1 = xmm0_9:4.d * xmm0_15
    float var_b8_1 = eax_23 * xmm0_15
    *(arg1 + 0x28c) = var_c0.o

float var_fc = 0f
TEB* fsbase
float xmm0_18

if (sub_6b8770(&var_fc, 0x1a, arg1, &var_fc) == 0)
    xmm0_18 = var_fc
else
    if (data_19e3ba0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        sub_75970e(&data_19e3ba0)
        
        if (data_19e3ba0 == 0xffffffff)
            data_19e3b9c = 0x3c8efa35
            __Init_thread_footer(&data_19e3ba0)
    
    xmm0_18 = var_fc f* data_19e3b9c

float var_ec = xmm0_18
float var_e8 = 0f
float xmm0_20

if (sub_6b8770(&var_e8, 0x1b, arg1, &var_e8) == 0)
    xmm0_20 = var_e8
else
    if (data_19e3ba0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        sub_75970e(&data_19e3ba0)
        
        if (data_19e3ba0 == 0xffffffff)
            data_19e3b9c = 0x3c8efa35
            __Init_thread_footer(&data_19e3ba0)
    
    xmm0_20 = var_e8 f* data_19e3b9c

var_fc = xmm0_20
void var_108
float var_f8
float var_f4

if (sub_6b8770(&var_f4, 0x19, arg1, &var_f4) != 0)
    double xmm0_22 = _mm_cvtps_pd(var_fc)
    _libm_sse2_cos_precise(arg4, arg3, var_108)
    var_f8 = fconvert.s(xmm0_22)
    double xmm0_25 = _mm_cvtps_pd(var_ec)
    _libm_sse2_sin_precise()
    arg2[3] = fconvert.s(xmm0_25) * var_f8 * var_f4 * 0.00999999978f + arg2[3]
    double xmm0_26 = _mm_cvtps_pd(var_ec)
    _libm_sse2_cos_precise()
    arg2[4] = fconvert.s(xmm0_26) * var_f8 * var_f4 * 0.00999999978f + arg2[4]
    double xmm0_27 = _mm_cvtps_pd(var_fc)
    _libm_sse2_sin_precise()
    arg2[5] = fconvert.s(xmm0_27) * var_f4 * 0.00999999978f + arg2[5]

if (sub_6b8770(&var_f8, 0x18, arg1, &var_f8) != 0)
    double xmm0_33 = _mm_cvtps_pd(var_fc)
    _libm_sse2_cos_precise(arg4, arg3, var_108)
    var_f4 = fconvert.s(xmm0_33)
    double xmm0_36 = _mm_cvtps_pd(var_ec)
    _libm_sse2_sin_precise()
    *(arg1 + 0x29c) = fconvert.s(xmm0_36) * var_f4 * var_f8 f+ *(arg1 + 0x29c)
    double xmm0_37 = _mm_cvtps_pd(var_ec)
    _libm_sse2_cos_precise()
    *(arg1 + 0x2a0) = fconvert.s(xmm0_37) * var_f4 * var_f8 f+ *(arg1 + 0x2a0)
    double xmm0_38 = _mm_cvtps_pd(var_fc)
    _libm_sse2_sin_precise()
    *(arg1 + 0x2a4) = fconvert.s(xmm0_38) * var_f8 f+ *(arg1 + 0x2a4)

if (sub_6b8770(&i_1, 0x1c, arg1, &i_1) != 0)
    *(arg1 + 0x29c) = i_1 f+ *(arg1 + 0x29c)

if (sub_6b8770(&var_ec, 0x1d, arg1, &var_ec) != 0)
    *(arg1 + 0x2a0) = var_ec f+ *(arg1 + 0x2a0)

float var_e0

if (sub_6b8770(&var_e0, 0x1e, arg1, &var_e0) != 0)
    *(arg1 + 0x2a4) = var_e0 f+ *(arg1 + 0x2a4)

int32_t* eax_45 = sub_5af880(**(arg1 + 0x2e4))
int32_t ecx_22
ecx_22.b = *(*(arg1 + 0x2dc) * 0x168 + *eax_45 + 0xe3)
void* eax_47 = ecx_2
char var_e1 = ecx_22.b
float edx_3 = *(eax_47 + 0xf8)
var_e0 = edx_3
uint32_t edx_5

if (edx_3 s<= 1 || ecx_22.b != 0)
    edx_5 = 0
else
    int32_t eax_48
    eax_48, ecx_22 = sub_63eb70()
    ecx_22.b = var_e1
    edx_5 = modu.dp.d(0:eax_48, var_e0)
    eax_47 = ecx_2

arg2[0xd] = edx_5
float eax_49 = *(eax_47 + 0xfc)
var_e0 = eax_49
uint32_t edx_7

if (eax_49 s<= 1 || ecx_22.b != 0)
    edx_7 = 0
else
    edx_7 = modu.dp.d(0:(sub_63eb70()), var_e0)

arg2[0xe] = edx_7
float var_d4
char eax_53
void* edx_8
eax_53, edx_8 = sub_6b8770(&var_d4, 0x22, arg1, &var_d4)

if (eax_53 != 0)
    float xmm1_29 = var_d4
    float xmm2_2 = data_8c4634 f/ *(ecx_3 + 0x58)
    int64_t xmm0_48 = *(ecx_3 + 0x40)
    float xmm0_53 = (xmm0_48.d f- *(ecx_3 + 0x68)) * xmm1_29 * xmm2_2 + arg2[3]
    float xmm4_5 = (*(ecx_3 + 0x48) f- *(ecx_3 + 0x70)) * xmm1_29 * xmm2_2 + arg2[5]
    arg2[4] = (xmm0_48:4.d f- *(ecx_3 + 0x6c)) * xmm1_29 * xmm2_2 + arg2[4]
    arg2[3] = xmm0_53
    arg2[5] = xmm4_5

void* ecx_47 = ecx_2
i_1 = 0f
float var_b0

if (*(ecx_47 + 0x110) s> 0)
    float eax_55 = 0f
    var_ec = 0f
    float i
    
    do
        int32_t* ecx_26 = *(ecx_47 + 0x118) i+ eax_55
        
        switch (*ecx_26 - 9)
            case 0
                void var_70
                int128_t* eax_66 = sub_6b9190(&var_70, edx_8, ecx_26[2], (zx.o(0)).d, &var_70)
                edx_8 = arg1 + 0x288
                int128_t var_40 = *eax_66
                int128_t var_30_1 = eax_66[1]
                int128_t var_90
                sub_4eb600(&var_40, edx_8, &var_90, &var_40)
                *(arg1 + 0x288) = var_90
                int128_t var_80
                *(arg1 + 0x298) = var_80
            case 0xe
                float xmm0_54
                edx_8, xmm0_54 = sub_6b8630(arg2[0xc], ecx_26)
                *(arg1 + 0x2ec) = 100f / xmm0_54
            case 0x1a
                float xmm0_67 = sub_6b8630(arg2[0xc], ecx_26)
                void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                var_fc = xmm0_67
                
                if (data_19e3ba0 s> *(*ThreadLocalStoragePointer + 8))
                    sub_75970e(&data_19e3ba0)
                    
                    if (data_19e3ba0 == 0xffffffff)
                        data_19e3b9c = 0x3c8efa35
                        __Init_thread_footer(&data_19e3ba0)
                    
                    xmm0_67 = var_fc
                
                float xmm0_69 = xmm0_67 f* data_19e3b9c * 0.5f
                var_fc = xmm0_69
                var_f8 = sub_4ae0d0(ebp, xmm0_69)
                float xmm0_72
                edx_8, xmm0_72 = sub_4ae0f0(ebp, var_fc)
                float xmm4_6 = *(arg1 + 0x28c)
                float xmm2_4 = xmm0_72 * 0f
                float xmm1_32 = *(arg1 + 0x298) * var_f8
                float xmm3_6 = *(arg1 + 0x290)
                float xmm5_1 = *(arg1 + 0x294)
                float xmm7_2 = xmm2_4 * xmm4_6
                var_f4 = xmm0_72
                float xmm0_74 = xmm5_1 * var_f4
                float xmm6_2 = xmm2_4 * xmm3_6
                var_e8 = xmm2_4
                float xmm2_5 = xmm2_4 f* *(arg1 + 0x298)
                float xmm0_76 = var_e8 * xmm5_1
                float xmm5_2 = xmm5_1 * var_f8
                float var_c4_1 = xmm1_32 - xmm7_2 - xmm6_2 - xmm0_74
                float xmm4_7 = xmm4_6 * var_f4
                float xmm1_38 = xmm4_6 * var_f8 + xmm2_5
                var_e8 = xmm0_76
                float xmm3_8 = xmm3_6 * var_f8 + xmm2_5
                float xmm5_3 = xmm5_2 + *(arg1 + 0x298) * var_f4
                var_d0 = xmm1_38 + xmm0_76 - xmm3_6 * var_f4
                float var_cc_1 = xmm3_8 + xmm4_7 - var_e8
                float var_c8_1 = xmm5_3 + xmm6_2 - xmm7_2
                *(arg1 + 0x28c) = var_d0.o
            case 0x1b
                float xmm0_82 = sub_6b8630(arg2[0xc], ecx_26)
                void* ThreadLocalStoragePointer_1 = fsbase->ThreadLocalStoragePointer
                var_fc = xmm0_82
                
                if (data_19e3ba0 s> *(*ThreadLocalStoragePointer_1 + 8))
                    sub_75970e(&data_19e3ba0)
                    
                    if (data_19e3ba0 == 0xffffffff)
                        data_19e3b9c = 0x3c8efa35
                        __Init_thread_footer(&data_19e3ba0)
                    
                    xmm0_82 = var_fc
                
                float xmm0_84 = xmm0_82 f* data_19e3b9c * 0.5f
                var_fc = xmm0_84
                var_f8 = sub_4ae0d0(ebp, xmm0_84)
                float xmm0_87
                edx_8, xmm0_87 = sub_4ae0f0(ebp, var_fc)
                float xmm4_8 = *(arg1 + 0x298)
                float xmm5_6 = *(arg1 + 0x28c)
                float xmm1_42 = xmm4_8 * var_f8
                float xmm7_3 = *(arg1 + 0x290)
                float xmm6_3 = *(arg1 + 0x294)
                var_f4 = xmm0_87
                float xmm0_88 = xmm0_87 * 0f
                var_e8 = xmm0_88
                float xmm2_7 = xmm0_88 * xmm6_3
                float xmm3_12 = xmm0_88 * xmm7_3
                float var_44_1 = xmm1_42 - xmm5_6 * var_f4 - xmm3_12 - xmm2_7
                float xmm0_93 = var_e8
                float xmm2_9 = xmm0_93 * xmm4_8
                float xmm0_94 = xmm0_93 * xmm5_6
                float xmm1_50 = xmm5_6 * var_f8 + xmm4_8 * var_f4 + xmm2_7 - xmm3_12
                var_e8 = xmm0_94
                int64_t var_50
                var_50.d = xmm1_50
                var_50:4.d = xmm7_3 * var_f8 + xmm2_9 + xmm0_94 - xmm6_3 * var_f4
                float var_48_3 = xmm6_3 * var_f8 + xmm2_9 + xmm7_3 * var_f4 - var_e8
                *(arg1 + 0x28c) = var_50.o
            case 0x1c
                float xmm0_98 = sub_6b8630(arg2[0xc], ecx_26)
                void* ThreadLocalStoragePointer_2 = fsbase->ThreadLocalStoragePointer
                var_fc = xmm0_98
                
                if (data_19e3ba0 s> *(*ThreadLocalStoragePointer_2 + 8))
                    sub_75970e(&data_19e3ba0)
                    
                    if (data_19e3ba0 == 0xffffffff)
                        data_19e3b9c = 0x3c8efa35
                        __Init_thread_footer(&data_19e3ba0)
                    
                    xmm0_98 = var_fc
                
                float xmm0_100 = xmm0_98 f* data_19e3b9c * 0.5f
                var_fc = xmm0_100
                var_f8 = sub_4ae0d0(ebp, xmm0_100)
                float xmm0_103
                edx_8, xmm0_103 = sub_4ae0f0(ebp, var_fc)
                float xmm2_10 = *(arg1 + 0x298)
                float xmm4_10 = xmm0_103 * 0f
                float xmm6_8 = *(arg1 + 0x290)
                float xmm7_6 = *(arg1 + 0x28c) * xmm4_10
                float xmm1_58 = xmm2_10 * var_f8 - xmm7_6
                float xmm5_8 = *(arg1 + 0x294) * xmm4_10
                var_f4 = xmm0_103
                float xmm3_15 = xmm2_10 * xmm4_10
                float xmm2_12 = xmm6_8 * xmm4_10
                float xmm4_11 = *(arg1 + 0x294)
                float var_a4_1 = xmm1_58 - xmm6_8 * xmm0_103 - xmm5_8
                float xmm6_11 = xmm6_8 * var_f8 + *(arg1 + 0x298) * var_f4 + xmm7_6
                float xmm4_15 = xmm4_11 * var_f8 + xmm3_15 + xmm2_12 - *(arg1 + 0x28c) * var_f4
                var_b0 = *(arg1 + 0x28c) * var_f8 + xmm3_15 + xmm4_11 * var_f4 - xmm2_12
                float var_a8_1 = xmm4_15
                float var_ac_1 = xmm6_11 - xmm5_8
                *(arg1 + 0x28c) = var_b0.o
            case 0x1d
                float xmm0_113
                edx_8, xmm0_113 = sub_6b8630(arg2[0xc], ecx_26)
                *arg2 = xmm0_113 + *arg2
            case 0x1e
                float xmm0_115
                edx_8, xmm0_115 = sub_6b8630(arg2[0xc], ecx_26)
                arg2[1] = xmm0_115 + arg2[1]
            case 0x1f
                float xmm0_117
                edx_8, xmm0_117 = sub_6b8630(arg2[0xc], ecx_26)
                arg2[2] = xmm0_117 + arg2[2]
            case 0x20
                float xmm0_55
                edx_8, xmm0_55 = sub_6b8630(arg2[0xc], ecx_26)
                *(arg1 + 0x29c) = xmm0_55 f+ *(arg1 + 0x29c)
            case 0x21
                float xmm0_57
                edx_8, xmm0_57 = sub_6b8630(arg2[0xc], ecx_26)
                *(arg1 + 0x2a0) = xmm0_57 f+ *(arg1 + 0x2a0)
            case 0x22
                float xmm0_59
                edx_8, xmm0_59 = sub_6b8630(arg2[0xc], ecx_26)
                *(arg1 + 0x2a4) = xmm0_59 f+ *(arg1 + 0x2a4)
            case 0x23
                float xmm0_61
                edx_8, xmm0_61 = sub_6b8630(arg2[0xc], ecx_26)
                arg2[3] = xmm0_61 + arg2[3]
            case 0x24
                float xmm0_63
                edx_8, xmm0_63 = sub_6b8630(arg2[0xc], ecx_26)
                arg2[4] = xmm0_63 + arg2[4]
            case 0x25
                float xmm0_65
                edx_8, xmm0_65 = sub_6b8630(arg2[0xc], ecx_26)
                arg2[5] = xmm0_65 + arg2[5]
            case 0x2d
                float xmm0_119
                edx_8, xmm0_119 = sub_6b8630(arg2[0xc], ecx_26)
                void* ThreadLocalStoragePointer_3 = fsbase->ThreadLocalStoragePointer
                var_f8 = xmm0_119
                
                if (data_19e3ba0 s> *(*ThreadLocalStoragePointer_3 + 8))
                    edx_8 = sub_75970e(&data_19e3ba0)
                    
                    if (data_19e3ba0 == 0xffffffff)
                        data_19e3b9c = 0x3c8efa35
                        edx_8 = __Init_thread_footer(&data_19e3ba0)
                    
                    xmm0_119 = var_f8
                
                arg2[9] = xmm0_119 f* data_19e3b9c + arg2[9]
            case 0x2f
                float* eax_63
                eax_63, edx_8 = sub_6bb0c0(&var_c0)
                int32_t eax_64 = eax_63[2]
                *(arg2 + 0x18) = *eax_63
                arg2[8] = eax_64
        
        ecx_47 = ecx_2
        i = i_1 i+ 1
        var_ec += 0x10
        i_1 = i
        eax_55 = var_ec
    while (i s< *(ecx_47 + 0x110))

int32_t* eax_69 = *(arg1 + 0x2e4)
*(arg1 + 0x2a8) = data_bf21e8
*(arg1 + 0x2b8) = data_bf21f8
int32_t* eax_70
int32_t edx_23
eax_70, edx_23 = sub_5af880(*eax_69)
uint32_t eax_71 = *eax_70

if (*(*(arg1 + 0x2dc) * 0x168 + eax_71 + 0xe1) != 0)
    void* ecx_50 = *(arg1 + 0x2e0)
    
    if (ecx_50 != 0)
        int128_t* eax_73 = sub_6bcb90(&var_b0, edx_23, ecx_50, &var_b0)
        int128_t xmm1_66 = eax_73[1]
        *(arg1 + 0x2a8) = *eax_73
        *(arg1 + 0x2b8) = xmm1_66
        CookieCheckFunction(eax_73)
        return eax_73
    
    eax_71 = *(arg1 + 0x2e4)
    *(arg1 + 0x2a8) = *(eax_71 + 0x2c)
    *(arg1 + 0x2b8) = *(eax_71 + 0x3c)

CookieCheckFunction(eax_71)
return eax_71
