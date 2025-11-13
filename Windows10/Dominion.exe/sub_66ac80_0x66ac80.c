// 函数: sub_66ac80
// 地址: 0x66ac80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
__security_cookie
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
char** var_a18 = arg3
var_a18 = arg3
char* const i_4

if (arg4 == 0x71)
label_66ad63:
    i_4 = &data_801800
label_66ad6a:
    sub_63d720(arg3, i_4)
    CookieCheckFunction(arg3)
    return arg3

void* eax_3 = sub_66a800(arg2, arg4)
int32_t var_a34_1
double xmm0_1
void var_a0c
int32_t var_9fc[0x27d]
void* const i
void* const ecx_8

if (arg4 s< 0x72 || arg4 s> 0x75)
    if (arg4 == 0x111)
        int32_t var_a30_4 = 0x110
        void** eax_13 = sub_6dd1e0(eax_3, eax_3, &data_8cae70, data_17774f4, 0x110)
        char*** var_a38_3 = &var_a18
        sub_66a920(&var_a18, &var_a0c, arg2)
        
        if (eax_13 == 0)
            goto label_66ad63
        
        int32_t ecx_10 = var_9fc[arg5 * 5]
        
        if (ecx_10 s>= eax_13[2])
            goto label_66ad63
        
        i = *eax_13
        i_4 = *(i + ecx_10 * 0x10 + 8)
        
        if (i_4 == 0)
            goto label_66b21b
        
        goto label_66ad6a
    
    void* eax_17 = sub_6dd320(&data_8cae70, arg4)
    
    switch (*(eax_17 + 0x10) - 1)
        case 0
            i = sub_6dcf50(eax_17, eax_3, &data_8cae70, arg4)
            
            if (arg4 s< 0 || arg4 s>= data_8cae80)
                char const* const var_a30_6 = "AttribTagGetField"
                int32_t var_a34_5 = 0x8b
                char const* const var_a38_5 = "C:\x\ax2017\Engine\AttribMap.cpp"
                ecx_8 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                goto label_66b234
            
            int32_t* ecx_16 = *(*(data_8cae7c + (arg4 << 2)) + 0x1c)
            
            if (ecx_16 == 0)
                void* const i_3 = i
                void* const var_a34_4 = &data_808880
                char** var_a38_4 = arg3
                sub_63df30()
                CookieCheckFunction(arg3)
                return arg3
            
            if (ecx_16[1] == 0)
                goto label_66ad63
            
            while (*ecx_16 != i)
                ecx_16 = &ecx_16[2]
                
                if (ecx_16[1] == 0)
                    goto label_66ad63
            
            i_4 = ecx_16[1]
            goto label_66b208
        case 3
            int32_t ecx_32
            float xmm0_22
            ecx_32, xmm0_22 = sub_6dd090(eax_17, eax_3, &data_8cae70, arg4)
            xmm0_1 = fconvert.d(xmm0_22)
            var_a34_1 = ecx_32
        case 7
            i = sub_6dd140(eax_17, eax_3, &data_8cae70, arg4)
            
            if (i != 0)
                i_4 = i
                goto label_66ad6a
            
        label_66b21b:
            char const* const var_a30_15 = "XString::XString"
            int32_t var_a34_11 = 0x94
            ecx_8 = &data_871e0c
            char const* const var_a38_7 = "C:\x\ax2017\Engine\xString.cpp"
            goto label_66b234
        case 0xe
            void* eax_19 = sub_6dd280(eax_17, eax_3, &data_8cae70, arg4)
            
            if (eax_19 == 0)
                goto label_66ad63
            
            char* eax_20 = *(eax_19 + 0x20)
            *arg3 = eax_20
            
            if (eax_20 == 0 || *eax_20 == 0)
                CookieCheckFunction(arg3)
                return arg3
            
            char* eax_21 = sub_63d4e0(arg3)
            *(eax_21 + 4) += 1
            CookieCheckFunction(arg3)
            return arg3
        case 0x15
            float* eax_23 = sub_6dd1e0(eax_17, eax_3, &data_8cae70, data_1777578, arg4)
            int64_t xmm0_10
            int32_t var_a44
            
            if (arg4 != 0x80)
                int32_t var_a34_6
                var_a34_6.q = _mm_cvtps_pd(eax_23[3])
                int64_t var_a3c_2 = _mm_cvtps_pd(eax_23[2])
                var_a44.q = _mm_cvtps_pd(eax_23[1])
                xmm0_10 = _mm_cvtps_pd(*eax_23)
            else
                void* eax_24 = sub_66a800(arg2, arg4 - 0xa)
                int32_t var_a30_10 = 0x76
                int32_t* eax_25 = sub_6dd1e0(eax_24, eax_24, &data_8cae70, data_1777578, 0x76)
                float xmm0_2 = *eax_25
                float xmm2_2 = eax_25[2] f- xmm0_2
                float xmm2_4 = xmm2_2 * eax_23[2] + xmm0_2
                float xmm5_3 = xmm2_2 * *eax_23 + xmm0_2
                float xmm0_3 = eax_25[1]
                float xmm1_2 = eax_25[3] f- xmm0_3
                float xmm1_4 = xmm1_2 * eax_23[3] + xmm0_3
                float xmm3_3 = xmm1_2 * eax_23[1] + xmm0_3
                float xmm4_1
                
                if (xmm2_4 <= xmm5_3)
                    xmm4_1 = xmm2_4
                    xmm2_4 = xmm5_3
                else
                    xmm4_1 = xmm5_3
                
                float xmm5_4
                
                if (xmm1_4 <= xmm3_3)
                    xmm5_4 = xmm1_4
                    xmm1_4 = xmm3_3
                else
                    xmm5_4 = xmm3_3
                
                float xmm3_5
                
                if (0f <= xmm4_1)
                    xmm3_5 = xmm4_1 + 0.5f
                else
                    xmm3_5 = xmm4_1 - 0.5f
                
                float xmm7_2[0x2] = _mm_cvtepi32_ps(zx.o(int.d(xmm3_5)))
                float xmm3_7
                
                if (0f <= xmm5_4)
                    xmm3_7 = xmm5_4 + 0.5f
                else
                    xmm3_7 = xmm5_4 - 0.5f
                
                float xmm2_5 = xmm2_4 - xmm4_1
                float xmm1_5 = xmm1_4 - xmm5_4
                float xmm3_9[0x2] = _mm_cvtepi32_ps(zx.o(int.d(xmm3_7)))
                float xmm2_6
                
                if (0f <= xmm2_5)
                    xmm2_6 = xmm2_5 + 0.5f
                else
                    xmm2_6 = xmm2_5 - 0.5f
                
                float xmm2_8 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_6)))
                float xmm1_6
                
                if (0f <= xmm1_5)
                    xmm1_6 = xmm1_5 + 0.5f
                else
                    xmm1_6 = xmm1_5 - 0.5f
                
                int32_t var_a34_7
                var_a34_7.q = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(int.d(xmm1_6))) f+ xmm3_9)
                int64_t var_a3c_1 = _mm_cvtps_pd(xmm2_8 f+ xmm7_2)
                var_a44.q = _mm_cvtps_pd(xmm3_9)
                xmm0_10 = _mm_cvtps_pd(xmm7_2)
            int32_t var_a4c
            var_a4c.q = xmm0_10
            char const* const var_a50 = "%g %g %g %g"
            sub_63df30(arg3, "%g %g %g %g")
            CookieCheckFunction(arg3)
            return arg3
        case 0x16
            int64_t* eax_31 = sub_6dd1e0(eax_17, eax_3, &data_8cae70, data_1777554, arg4)
            int32_t var_a34_8
            var_a34_8.q = _mm_cvtps_pd(*(eax_31 + 4))
            int64_t var_a3c_3 = _mm_cvtps_pd(*eax_31)
            char const* const var_a40 = "%g %g"
            sub_63df30(arg3, "%g %g")
            CookieCheckFunction(arg3)
            return arg3
        case 0x28
            char* eax_33 = sub_6dd1e0(eax_17, eax_3, &data_8cae70, data_1724a70, arg4)
            uint32_t var_a38_6 = zx.d(eax_33[3])
            char** var_a3c = zx.d(eax_33[2])
            uint32_t var_a40_1 = zx.d(eax_33[1])
            uint32_t var_a44_2 = zx.d(*eax_33)
            char const* const var_a48 = "%d %d %d %d"
            sub_63df30(arg3, "%d %d %d %d")
            CookieCheckFunction(arg3)
            return arg3
        default
            int32_t eax_36 = data_1724b04
            
            if (eax_17 != eax_36)
                i_4 = "unknown type"
                goto label_66ad6a
            
            i = sub_6dd1e0(eax_36, eax_3, &data_8cae70, eax_36, arg4)
            i_4 = *i
        label_66b208:
            
            if (i_4 == 0)
                goto label_66b21b
            
            goto label_66ad6a
else
    sub_66a920(&var_a18, &var_a0c, arg2, &var_a18)
    int32_t eax_7 = var_9fc[arg5 * 5]
    int32_t var_a30_2 = 0x71
    void* eax_8 = sub_6dd1e0(eax_7, eax_3, &data_8cae70, data_1724a88, 0x71)
    
    if (eax_8 == 0)
        goto label_66ad63
    
    int32_t ecx_2 = *(eax_8 + 8)
    
    if (ecx_2 == 0)
        goto label_66ad63
    
    i = (eax_7 << 4) + ecx_2
    
    if (arg4 - 0x72 u> 3)
        char const* const var_a30_3 = "AttribMapCoerceToString"
        int32_t var_a34_2 = 0x3e60
        char const* const var_a38_2 = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_8 = "Halt"
    label_66b234:
        sub_63b870(i, &data_801800, ecx_8)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    switch (arg4)
        case 0x72
            int32_t i_1 = *i
            i = &data_7ff180
            
            while (*i != i_1)
                i += 8
                
                if (*(i + 4) == 0)
                    goto label_66ad63
            
        label_66ad82:
            i_4 = *(i + 4)
            
            if (i_4 == 0)
                goto label_66b21b
            
            goto label_66ad6a
        case 0x73
            xmm0_1 = _mm_cvtps_pd(*(i + 4))
        case 0x74
            xmm0_1 = _mm_cvtps_pd(*(i + 8))
        case 0x75
            int32_t i_2 = *(i + 0xc)
            i = &data_7ffbc8
            
            while (*i != i_2)
                i += 8
                
                if (*(i + 4) == 0)
                    goto label_66ad63
            
            goto label_66ad82
var_a34_1.q = xmm0_1
void* const var_a38_1 = &data_874634
sub_63df30(arg3, "%g")
CookieCheckFunction(arg3)
return arg3
