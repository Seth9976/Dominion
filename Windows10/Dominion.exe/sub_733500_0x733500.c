// 函数: sub_733500
// 地址: 0x733500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772bbd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_44 = arg1
va_list result_3
int32_t edx_1 = sub_733460(&result_3, &var_44)
int32_t var_8_1 = 0
char* const result_16 = &data_801800
va_list result_4 = result_3
char* result_1 = nullptr

if (result_4 != 0)
    result_16 = result_4

int32_t* var_90 = &result_1
sub_64b6d0(&result_1, edx_1, result_16, result_16, "%d")
char* result = &result_1[1]
result_1 = result

if (result == arg2[1])
    arg2[1] = result
    var_8_1.b = 2
    char* const result_2
    int32_t edx_3 = sub_63d850(&result_3, sub_733460(&result_2, &var_44))
    var_8_1.b = 3
    
    if (data_cf65bc != 0)
        char* result_5 = result_2
        
        if (result_5 != 0 && *result_5 != 0)
            char* eax_6 = sub_63d4e0(&result_2)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                edx_3 = sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                result_2 = &data_801800
    
    var_8_1.b = 0
    char* const result_17 = &data_801800
    va_list result_6 = result_3
    int32_t* var_90_2 = arg2
    
    if (result_6 != 0)
        result_17 = result_6
    
    *arg2 = 0
    sub_64b6d0(result_6, edx_3, result_17, result_17, "%d")
    result = *arg2
    
    if (result s<= 0)
        int32_t var_8_3 = 4
        goto label_733612
    
    int32_t eax_7 = result * result_1
    arg2[4] = eax_7
    uint32_t count = eax_7 * 0x2c
    int32_t eax_8 = sub_687730(count)
    memset(eax_8, 0, count)
    arg2[6] = eax_8
    var_8_1.b = 5
    sub_63d850(&result_3, sub_733460(&result_2, &var_44))
    var_8_1.b = 6
    
    if (data_cf65bc != 0)
        char* const result_7 = result_2
        
        if (result_7 != 0 && *result_7 != 0)
            char* eax_11 = sub_63d4e0(&result_2)
            int32_t temp2_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                result_2 = &data_801800
    
    var_8_1.b = 0
    var_8_1.b = 7
    sub_63d850(&result_3, sub_733460(&result_2, &var_44))
    var_8_1.b = 8
    
    if (data_cf65bc != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_2)
            int32_t temp3_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
                result_2 = &data_801800
    
    int32_t* edi_2 = arg2
    int32_t i = 0
    var_8_1.b = 0
    int32_t i_1 = 0
    
    if (*edi_2 s> 0)
        do
            var_8_1.b = 9
            sub_63d850(&result_3, sub_733460(&result_2, &var_44))
            var_8_1.b = 0xa
            
            if (data_cf65bc != 0)
                char* const result_8 = result_2
                
                if (result_8 != 0 && *result_8 != 0)
                    char* eax_14 = sub_63d4e0(&result_2)
                    int32_t temp5_1 = *(eax_14 + 4)
                    *(eax_14 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                        result_2 = &data_801800
            
            var_8_1.b = 0
            var_8_1.b = 0xb
            char* const var_58
            sub_63d850(&result_3, sub_733460(&var_58, &var_44))
            var_8_1.b = 0xc
            
            if (data_cf65bc != 0)
                char* eax_16 = var_58
                
                if (eax_16 != 0 && *eax_16 != 0)
                    char* eax_17 = sub_63d4e0(&var_58)
                    int32_t temp6_1 = *(eax_17 + 4)
                    *(eax_17 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                        var_58 = &data_801800
            
            var_8_1.b = 0
            char* const result_18 = &data_801800
            int128_t* edx_21 = i * result_1 * 0x2c + edi_2[6]
            *edx_21 = data_800248
            *(edx_21 + 0x1c) = 0x3f8000003f800000
            *(edx_21 + 0x24) = 0x3f800000
            va_list result_9 = result_3
            
            if (result_9 != 0)
                result_18 = result_9
            
            void* var_90_8 = edx_21 + 0x18
            void* var_94_1 = edx_21 + 0x14
            void* var_98_3 = &edx_21[1]
            result = sub_64b6d0(&edx_21[1], edx_21, result_18, result_18, "%f %f %f")
            
            if (result != 3)
                sub_63b870(result, &data_801800, "count == 3", "C:\x\ax2017\Engine\AnimImport.cpp", 
                    0x5a, "sAnimExtractDataFromText")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            char* result_15 = result_1
            int32_t edx_22 = 1
            int32_t var_54_1 = 1
            
            if (result_15 s> 1)
                do
                    int128_t* esi_4 = (i * result_15 + edx_22) * 0x2c + edi_2[6]
                    var_8_1.b = 0xd
                    char* const var_5c
                    int32_t edx_24 = sub_63d850(&result_3, sub_733460(&var_5c, &var_44))
                    var_8_1.b = 0xe
                    
                    if (data_cf65bc != 0)
                        char* eax_24 = var_5c
                        
                        if (eax_24 != 0 && *eax_24 != 0)
                            char* eax_25 = sub_63d4e0(&var_5c)
                            int32_t temp7_1 = *(eax_25 + 4)
                            *(eax_25 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                edx_24 = sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                                var_5c = &data_801800
                    
                    var_8_1.b = 0
                    va_list result_19 = &data_801800
                    va_list result_10 = result_3
                    
                    if (result_10 != 0)
                        result_19 = result_10
                    
                    void* var_90_10 = esi_4 + 0x24
                    void* var_94_2 = &esi_4[2]
                    void* var_98_4 = esi_4 + 0x1c
                    int32_t eax_29 =
                        sub_64b6d0(esi_4 + 0x1c, edx_24, result_19, result_19, "%f %f %f")
                    var_8_1.b = 0xf
                    char* const var_60
                    int32_t edx_28 = sub_63d850(&result_3, sub_733460(&var_60, &var_44))
                    var_8_1.b = 0x10
                    
                    if (data_cf65bc != 0)
                        char* eax_31 = var_60
                        
                        if (eax_31 != 0 && *eax_31 != 0)
                            char* eax_32 = sub_63d4e0(&var_60)
                            int32_t temp8_1 = *(eax_32 + 4)
                            *(eax_32 + 4) -= 1
                            
                            if (temp8_1 == 1)
                                edx_28 = sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                                var_60 = &data_801800
                    
                    var_8_1.b = 0
                    char* const result_20 = &data_801800
                    va_list result_11 = result_3
                    
                    if (result_11 != 0)
                        result_20 = result_11
                    
                    int32_t var_30
                    int32_t* var_90_12 = &var_30
                    int32_t var_34
                    int32_t* var_94_3 = &var_34
                    void var_38
                    void* var_98_5 = &var_38
                    void* edi_4 =
                        eax_29 + sub_64b6d0(&var_38, edx_28, result_20, result_20, "%f %f %f")
                    var_8_1.b = 0x11
                    char* const var_64
                    int32_t edx_32 = sub_63d850(&result_3, sub_733460(&var_64, &var_44))
                    var_8_1.b = 0x12
                    
                    if (data_cf65bc != 0)
                        char* eax_36 = var_64
                        
                        if (eax_36 != 0 && *eax_36 != 0)
                            char* eax_37 = sub_63d4e0(&var_64)
                            int32_t temp9_1 = *(eax_37 + 4)
                            *(eax_37 + 4) -= 1
                            
                            if (temp9_1 == 1)
                                edx_32 = sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                                var_64 = &data_801800
                    
                    var_8_1.b = 0
                    char* const result_21 = &data_801800
                    va_list result_12 = result_3
                    
                    if (result_12 != 0)
                        result_21 = result_12
                    
                    int32_t var_24
                    int32_t* var_90_14 = &var_24
                    void var_28
                    void* var_94_4 = &var_28
                    int32_t var_2c
                    int32_t* var_98_6 = &var_2c
                    void* edi_5 =
                        edi_4 + sub_64b6d0(&var_2c, edx_32, result_21, result_21, "%f %f %f")
                    var_8_1.b = 0x13
                    char* const var_68
                    int32_t edx_36 = sub_63d850(&result_3, sub_733460(&var_68, &var_44))
                    var_8_1.b = 0x14
                    
                    if (data_cf65bc != 0)
                        char* eax_41 = var_68
                        
                        if (eax_41 != 0 && *eax_41 != 0)
                            char* eax_42 = sub_63d4e0(&var_68)
                            int32_t temp10_1 = *(eax_42 + 4)
                            *(eax_42 + 4) -= 1
                            
                            if (temp10_1 == 1)
                                edx_36 = sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
                                var_68 = &data_801800
                    
                    var_8_1.b = 0
                    va_list result_22 = &data_801800
                    va_list result_13 = result_3
                    
                    if (result_13 != 0)
                        result_22 = result_13
                    
                    void var_18
                    void* var_90_16 = &var_18
                    int32_t var_1c
                    int32_t* var_94_5 = &var_1c
                    int32_t var_20
                    int32_t* var_98_7 = &var_20
                    int32_t eax_44
                    int32_t edx_39
                    eax_44, edx_39 = sub_64b6d0(&var_20, edx_36, result_22, result_22, "%f %f %f")
                    int32_t xmm1_1 = var_34
                    int32_t xmm2_1 = var_30
                    int32_t xmm3_1 = var_24
                    var_34 = var_2c
                    var_30 = var_20
                    int32_t xmm0_5 = var_1c
                    var_2c = xmm1_1
                    var_24 = xmm0_5
                    var_20 = xmm2_1
                    var_1c = xmm3_1
                    float var_80[0x4]
                    *esi_4 = *sub_4ac5b0(&var_80, edx_39, &var_38, esi_4, &var_80)
                    var_8_1.b = 0x15
                    char* const var_6c
                    int32_t edx_41 = sub_63d850(&result_3, sub_733460(&var_6c, &var_44))
                    var_8_1.b = 0x16
                    
                    if (data_cf65bc != 0)
                        char* eax_48 = var_6c
                        
                        if (eax_48 != 0 && *eax_48 != 0)
                            char* eax_49 = sub_63d4e0(&var_6c)
                            int32_t temp11_1 = *(eax_49 + 4)
                            *(eax_49 + 4) -= 1
                            
                            if (temp11_1 == 1)
                                edx_41 = sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                                var_6c = &data_801800
                    
                    var_8_1.b = 0
                    va_list result_23 = &data_801800
                    va_list result_14 = result_3
                    
                    if (result_14 != 0)
                        result_23 = result_14
                    
                    void* var_90_18 = esi_4 + 0x18
                    void* var_94_6 = esi_4 + 0x14
                    void* var_98_8 = &esi_4[1]
                    result = sub_64b6d0(&esi_4[1], edx_41, result_23, result_23, "%f %f %f")
                    
                    if (edi_5 + eax_44 + result != 0xf)
                        sub_63b870(result, &data_801800, "count == 15", 
                            "C:\x\ax2017\Engine\AnimImport.cpp", 0x7a, "sAnimExtractDataFromText")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    result_15 = result_1
                    edx_22 = var_54_1 + 1
                    i = i_1
                    edi_2 = arg2
                    var_54_1 = edx_22
                while (edx_22 s< result_15)
            
            i += 1
            i_1 = i
        while (i s< *edi_2)
    
    int32_t var_8_4 = 0x17
    
    if (data_cf65bc != 0)
        result = result_3
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_3)
            int32_t temp4_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp4_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
    
    result.b = 1
else
    int32_t var_8_2 = 1
label_733612:
    
    if (data_cf65bc != 0)
        result = result_3
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_3)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
