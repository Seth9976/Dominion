// 函数: sub_66e0a0
// 地址: 0x66e0a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d52b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_28c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_268 = arg1
char* const edi = &data_801800
char* const esi = &data_801800
char* eax_5 = *(sub_64e7a0(*arg1) + 0x15e0)

if (eax_5 != 0)
    esi = eax_5

char* result_2
sub_63d720(&result_2, "stateValue")
char* result = result_2
char* const result_4 = &data_801800
char* const edx = esi

if (result != 0)
    result_4 = result

void* var_25c

while (true)
    result.b = *result_4
    char temp0_1 = *edx
    bool c_1 = result.b u< temp0_1
    bool z_1 = result.b == temp0_1
    char var_25d_1 = result.b
    result = result_2
    
    if (z_1)
        if (var_25d_1 == 0)
            var_25c = nullptr
            break
        
        result.b = result_4[1]
        char temp1_1 = edx[1]
        c_1 = result.b u< temp1_1
        bool z_2 = result.b == temp1_1
        char var_25d_2 = result.b
        result = result_2
        
        if (z_2)
            result_4 = &result_4[2]
            edx = &edx[2]
            
            if (var_25d_2 != 0)
                continue
            
            var_25c = nullptr
            break
    
    var_25c = sbb.d(result_4, result_4, c_1) | 1
    break

int32_t var_14_1 = 0

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_2)
    int32_t temp2_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp2_1 == 1)
        result = sub_64c080(result, *(result + 0xc) + 0x10)
        result_2 = &data_801800

int32_t var_14_2 = 0xffffffff

if (var_25c != 0)
    sub_63d720(&result_2, "propValue")
    result = result_2
    char* const result_5 = &data_801800
    
    if (result != 0)
        result_5 = result
    
    int32_t esi_2
    
    while (true)
        char edx_3 = *result_5
        char temp3_1 = *esi
        bool c_2 = edx_3 u< temp3_1
        
        if (edx_3 == temp3_1)
            if (edx_3 == 0)
                esi_2 = 0
                break
            
            edx_3 = result_5[1]
            char temp4_1 = esi[1]
            c_2 = edx_3 u< temp4_1
            
            if (edx_3 == temp4_1)
                result_5 = &result_5[2]
                esi = &esi[2]
                
                if (edx_3 != 0)
                    continue
                
                esi_2 = 0
                break
        
        esi_2 = sbb.d(esi, esi, c_2) | 1
        break
    
    int32_t var_14_3 = 1
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_2)
        int32_t temp5_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp5_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            result_2 = &data_801800
    
    int32_t var_14_4 = 0xffffffff
    
    if (esi_2 == 0)
        void* esi_3 = var_268
        
        if (data_c28c58 s<= 0)
            sub_63b870(result, &data_801800, "gUI2Editor.s.activeSetCount > 0", 
                "C:\x\ax2017\Engine\UI2.cpp", 0x44b2, "UI2EditorCommit")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        void* result_8 = sub_665600(data_c27c58)
        int32_t edx_6 = data_c28c64
        void* var_250
        int32_t* var_290_1 = &var_250
        void* result_3 = result_8
        int128_t* eax_6 = sub_66bd20(result_8, edx_6, *(result_8 + 0x18c8))
        void* result_9 = result_3
        float eax_7 = eax_6[1].d
        char* result_12 = _mm_bsrli_si128(*eax_6, 4)
        *(result_9 + 0x1364) = 0
        result_2 = result_12
        result = sub_667ae0(result_9, result_12)
        char* result_10 = result_2
        int32_t* result_1 = result
        
        if (&result_10[0xffffff9c] u<= 0xaf)
            va_list ecx_12 = zx.d(*(result_10 + 0x66ea90))
            char* result_6
            void* var_230
            void* var_22c
            void** eax_24
            void* ecx_26
            void* esi_4
            void* xmm3_1
            
            switch (ecx_12)
                case nullptr
                    var_25c = &data_801800
                    int32_t var_14_7 = 4
                    char* ecx_23 = &data_801800
                    char* eax_14 = *(esi_3 + 8)
                    
                    if (eax_14 != 0)
                        ecx_23 = eax_14
                    
                    char** eax_15 = sub_63d8d0(&var_25c, ecx_23)
                    esi_4 = var_25c
                    
                    if (esi_4 != 0)
                        edi = esi_4
                    
                    char* const var_290_7 = edi
                    sub_6dce10(eax_15, result_1, &data_8cae70, result_2)
                    int32_t ecx_25
                    ecx_25.b = 1
                    result = sub_665770(ecx_25)
                    int32_t var_14_8 = 5
                    goto label_66e3fe
                case 1
                    var_25c = &data_801800
                    int32_t var_14_5 = 2
                    char* ecx_15 = &data_801800
                    char* eax_8 = *(esi_3 + 8)
                    
                    if (eax_8 != 0)
                        ecx_15 = eax_8
                    
                    sub_63d8d0(&var_25c, ecx_15)
                    char* var_228[0x81]
                    sub_66be10(&var_228, *(result_3 + 0x15f8), data_c23bf0, &var_228)
                    esi_4 = var_25c
                    result = nullptr
                    result_3 = nullptr
                    
                    while (true)
                        char* ecx_19 = var_228[result]
                        
                        if (ecx_19 == 0)
                            break
                        
                        void* eax_10 = &data_801800
                        
                        if (esi_4 != 0)
                            eax_10 = esi_4
                        
                        int32_t eax_12
                        
                        while (true)
                            char edx_10 = *eax_10
                            char temp6_1 = *ecx_19
                            bool c_3 = edx_10 u< temp6_1
                            
                            if (edx_10 == temp6_1)
                                if (edx_10 == 0)
                                    eax_12 = 0
                                    break
                                
                                edx_10 = *(eax_10 + 1)
                                char temp8_1 = ecx_19[1]
                                c_3 = edx_10 u< temp8_1
                                
                                if (edx_10 == temp8_1)
                                    eax_10 += 2
                                    ecx_19 = &ecx_19[2]
                                    
                                    if (edx_10 != 0)
                                        continue
                                    
                                    eax_12 = 0
                                    break
                            
                            eax_12 = sbb.d(eax_10, eax_10, c_3) | 1
                            break
                        
                        if (eax_12 == 0)
                            if (esi_4 != 0)
                                edi = esi_4
                            
                            char* const var_290_5 = edi
                            sub_6dce10(eax_12, result_1, &data_8cae70, result_2)
                            int32_t ecx_20
                            ecx_20.b = 1
                            result = sub_665770(ecx_20)
                            break
                        
                        result = result_3 + 1
                        result_3 = result
                        
                        if (result s>= 0x80)
                            break
                    
                    int32_t var_14_6 = 3
                label_66e3fe:
                    
                    if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                        result = sub_63d4e0(&var_25c)
                        int32_t temp7_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp7_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                case 2
                    char* eax_28 = *(esi_3 + 8)
                    int32_t var_248_1 = 0
                    
                    if (eax_28 != 0)
                        edi = eax_28
                    
                    eax_24 = &var_250
                    void** var_290_17 = &var_250
                    var_250 = edi
                    result_6 = result_10
                    goto label_66e619
                case 3
                    result = sub_66d820()
                case 4
                    char* ecx_13 = *(esi_3 + 8)
                    
                    if (ecx_13 != 0)
                        edi = ecx_13
                    
                    char* const var_290_2 = edi
                    result = sub_66dee0(result, result, result_3, result_10, data_c28c64)
                case 5
                    va_list eax_25 = *(esi_3 + 8)
                    va_list ecx_30 = &data_801800
                    
                    if (eax_25 != 0)
                        ecx_30 = eax_25
                    
                    int32_t* var_290_14 = &var_22c
                    void** var_294_6 = &var_230
                    int128_t var_238
                    void* var_298_5 = &var_238:4
                    int128_t* var_29c_2 = &var_238
                    var_238 = data_7ff530
                    result = sub_64b6d0(&var_238, result_10, ecx_30, ecx_30, " %f %f %f %f")
                    
                    if (result == 4)
                        goto label_66e6bc
                    
                    float var_234
                    void* xmm0_5
                    
                    if (result == 1)
                        xmm0_5 = var_238.d
                        var_234 = xmm0_5
                        var_230 = xmm0_5
                    label_66e6b4:
                        var_22c = xmm0_5
                    label_66e6bc:
                        char* result_11 = result_2
                        
                        if (result_11 != 0x80)
                            goto label_66e80c
                        
                        float var_24c
                        result = sub_64c550(result_3 + 0x14, *(data_147abe8 + 0x2c), &var_24c)
                        void* xmm3_2 = var_230
                        int32_t xmm2_2 = var_238.d
                        void* xmm1_1
                        
                        if (not(xmm3_2 f< xmm2_2))
                            xmm1_1 = var_22c
                        
                        if (xmm3_2 f< xmm2_2 || xmm1_1 f< var_234)
                            sub_63b870(result, &data_801800, "RectIsNormalized(r0)", 
                                "C:\x\ax2017\Engine\Rect.cpp", 0xe9, "RectIntersect")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        float xmm7_1 = var_24c
                        float xmm2_3 = _mm_max_ss(xmm2_2, xmm7_1)
                        float var_244
                        void* xmm3_3 = _mm_min_ss(xmm3_2, var_244)
                        float var_248
                        float xmm0_8 = __maxss_xmmss_memss(var_234, var_248)
                        void* xmm1_2 = _mm_min_ss(xmm1_1, eax_7)
                        
                        if (xmm2_3 f> xmm3_3 || not(xmm0_8 f<= xmm1_2))
                            var_238 = data_7ff530
                            xmm1_2 = var_22c
                            xmm3_3 = var_230
                            xmm0_8 = var_234
                            xmm2_3 = var_238.d
                        
                        xmm2_3 f- 0
                        result:1.b = (xmm2_3 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm2_3, 0f) ? 1 : 0) << 2 | (xmm2_3 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (p_2)
                        label_66e7ae:
                            float xmm5_2 = var_244 - xmm7_1
                            var_238.d = (xmm2_3 - xmm7_1) / xmm5_2
                            float xmm6_2 = eax_7 - var_248
                            var_230 = (xmm3_3 f- xmm7_1) / xmm5_2
                            float var_234_1 = (xmm0_8 - var_248) / xmm6_2
                            var_22c = (xmm1_2 f- var_248) / xmm6_2
                            var_238 = var_238
                        label_66e80c:
                            eax_24 = &var_238
                            int128_t* var_290_16 = &var_238
                            result_6 = result_11
                            goto label_66e619
                        
                        xmm0_8 f- 0
                        result:1.b = (xmm0_8 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_8, 0f) ? 1 : 0) << 2 | (xmm0_8 < 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            goto label_66e7ae
                        
                        xmm3_3 f- 0
                        result:1.b = (xmm3_3 f== 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm3_3, 0f) ? 1 : 0) << 2 | (xmm3_3 f< 0f ? 1 : 0)
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (p_6)
                            goto label_66e7ae
                        
                        xmm1_2 f- 0
                        result:1.b = (xmm1_2 f== 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm1_2, 0f) ? 1 : 0) << 2 | (xmm1_2 f< 0f ? 1 : 0)
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (p_8)
                            goto label_66e7ae
                    else if (result == 2)
                        var_230 = var_238.d
                        xmm0_5 = var_234
                        goto label_66e6b4
                case 6
                    char* eax_18 = *(esi_3 + 8)
                    
                    if (eax_18 != 0)
                        edi = eax_18
                    
                    void** var_290_9 = &var_25c
                    result, ecx_26 = sub_64b6d0(&var_25c, result_10, ecx_12, edi, " %f")
                    
                    if (result == 1)
                        void* xmm0_2 = var_25c
                        xmm3_1 = (zx.o(0)).d
                        
                        if (not(0 f> xmm0_2))
                            xmm3_1 = _mm_min_ss(0x3f800000, xmm0_2)
                        
                        var_25c = xmm3_1
                        goto label_66e4d0
                case 7
                    char* eax_20 = *(esi_3 + 8)
                    var_25c = nullptr
                    
                    if (eax_20 != 0)
                        edi = eax_20
                    
                    void** var_290_10 = &var_25c
                    result = sub_64b6d0(&var_25c, result_10, ecx_12, edi, " %d")
                    
                    if (result == 1)
                        void* var_290_11 = var_25c
                        sub_6dce10(result, result_1, &data_8cae70, result_2)
                        int32_t ecx_28
                        ecx_28.b = 1
                        result = sub_665770(ecx_28)
                case 8
                    char* eax_16 = *(esi_3 + 8)
                    
                    if (eax_16 != 0)
                        edi = eax_16
                    
                    void** var_290_8 = &var_268
                    result, ecx_26 = sub_64b6d0(&var_268, result_10, ecx_12, edi, " %f")
                    
                    if (result == 1)
                        xmm3_1 = var_268
                    label_66e4d0:
                        char* result_7 = result_2
                        sub_6dce90(result, result_1, xmm3_1, ecx_26)
                        int32_t ecx_27
                        ecx_27.b = 1
                        result = sub_665770(ecx_27)
                case 9
                    char* eax_33 = *(esi_3 + 8)
                    int32_t var_278_1 = 0
                    
                    if (eax_33 != 0)
                        edi = eax_33
                    
                    void* var_280
                    eax_24 = &var_280
                    void** var_290_19 = &var_280
                    var_280 = edi
                    result_6 = result_10
                    goto label_66e619
                case 0xa
                    char* eax_34 = *(esi_3 + 8)
                    
                    if (eax_34 != 0)
                        edi = eax_34
                    
                    result = sub_6b7ef0(edi)
                    
                    if (result != 0)
                        int32_t eax_35 = sub_69f030(edi, result)
                        int32_t var_290_20 = eax_35
                        sub_6dce10(eax_35, result_1, &data_8cae70, result_2)
                        int32_t ecx_44
                        ecx_44.b = 1
                        result = sub_665770(ecx_44)
                case 0xb
                    char* eax_22 = *(esi_3 + 8)
                    
                    if (eax_22 != 0)
                        edi = eax_22
                    
                    var_230 = nullptr
                    void** var_290_12 = &var_22c
                    var_22c = nullptr
                    void** var_294_5 = &var_230
                    result = sub_64b6d0(&var_230, result_10, ecx_12, edi, " %f %f")
                    
                    if (result == 2)
                        goto label_66e601
                    
                    if (result == 1)
                        void* xmm0_3 = var_230
                        var_230 = xmm0_3
                        var_22c = xmm0_3
                    label_66e601:
                        eax_24 = &var_230
                    label_66e607:
                        void** var_290_13 = eax_24
                        result_6 = result_2
                    label_66e619:
                        sub_6dce10(eax_24, result_1, &data_8cae70, result_6)
                        int32_t ecx_29
                        ecx_29.b = 1
                        result = sub_665770(ecx_29)
                case 0xc
                    char* eax_29 = *(esi_3 + 8)
                    
                    if (eax_29 != 0)
                        edi = eax_29
                    
                    char eax_30
                    va_list ecx_34
                    int32_t edx_19
                    eax_30, ecx_34, edx_19 = sub_66c7f0(edi, &result_3)
                    
                    if (eax_30 != 0)
                        eax_24 = &result_3
                        goto label_66e607
                    
                    int32_t* var_290_18 = &var_22c
                    void** var_294_7 = &var_268
                    int32_t var_26c
                    int32_t* var_298_6 = &var_26c
                    void** var_29c_3 = &var_25c
                    result = sub_64b6d0(&var_25c, edx_19, ecx_34, edi, " %d %d %d %d")
                    
                    if (result == 4)
                        void* const ecx_35 = var_25c
                        
                        if (ecx_35 s< 0)
                            ecx_35 = nullptr
                        else if (ecx_35 s> 0xff)
                            ecx_35 = 0xff
                        
                        result_3.b = ecx_35.b
                        int32_t ecx_36 = var_26c
                        
                        if (ecx_36 s< 0)
                            ecx_36 = 0
                        else if (ecx_36 s> 0xff)
                            ecx_36 = 0xff
                        
                        result_3:1.b = ecx_36.b
                        void* const ecx_37 = var_268
                        
                        if (ecx_37 s< 0)
                            ecx_37 = nullptr
                        else if (ecx_37 s> 0xff)
                            ecx_37 = 0xff
                        
                        result_3:2.b = ecx_37.b
                        void* ecx_38 = var_22c
                        
                        if (ecx_38 s>= 0)
                            if (ecx_38 s> 0xff)
                                ecx_38 = 0xff
                            
                            eax_24 = &result_3
                            result_3:3.b = ecx_38.b
                        else
                            eax_24 = &result_3
                            result_3:3.b = 0
                        
                        goto label_66e607
                    
                    if (result == 3)
                        void* ecx_39 = var_25c
                        
                        if (ecx_39 s< 0)
                            ecx_39 = nullptr
                        else if (ecx_39 s> 0xff)
                            ecx_39 = 0xff
                        
                        result_3.b = ecx_39.b
                        int32_t ecx_40 = var_26c
                        
                        if (ecx_40 s< 0)
                            ecx_40 = 0
                        else if (ecx_40 s> 0xff)
                            ecx_40 = 0xff
                        
                        result_3:1.b = ecx_40.b
                        void* ecx_41 = var_268
                        
                        if (ecx_41 s>= 0)
                            result_3:3.b = 0xff
                            
                            if (ecx_41 s> 0xff)
                                ecx_41 = 0xff
                            
                            eax_24 = &result_3
                            result_3:2.b = ecx_41.b
                        else
                            result_3:3.b = 0xff
                            result_3:2.b = 0
                            eax_24 = &result_3
                        
                        goto label_66e607
                    
                    if (result == 1)
                        void* eax_32 = var_25c
                        
                        if (eax_32 s< 0)
                            eax_32 = nullptr
                        else if (eax_32 s> 0xff)
                            eax_32 = 0xff
                        
                        result_3.b = eax_32.b
                        result_3:1.b = eax_32.b
                        result_3:2.b = eax_32.b
                        result_3:3.b = 0xff
                        eax_24 = &result_3
                        goto label_66e607

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
