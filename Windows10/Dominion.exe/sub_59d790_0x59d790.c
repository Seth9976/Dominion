// 函数: sub_59d790
// 地址: 0x59d790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_767fd4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char** result_4
int32_t* result_9
result_4, result_9 = __chkstk(0x1928)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_5 = result_9
char* result_6 = result_5
char** result = result_4
int32_t* result_2 = result
char* result_3 = result
char* result_10 = arg5
int32_t esi = 0
char** result_1 = result
int32_t edi = 0
char* result_7 = result_10
int32_t var_1934 = 0
int32_t var_1918
int32_t var_c98

if (arg4 s> 0)
    do
        int32_t eax_3 = 0
        
        if (esi s> 0)
            while ((&var_1918)[eax_3] != arg3[edi])
                eax_3 += 1
                
                if (eax_3 s>= esi)
                    goto label_59d825
        
        if (esi s<= 0 || eax_3 == 0xffffffff)
        label_59d825:
            esi += 1
            (&var_1918)[esi] = arg3[edi]
            (&var_c98)[esi] = 1
        else
            (&var_c98)[eax_3] += 1
        
        edi += 1
    while (edi s< arg4)
    
    result = result_2
    result_5 = result_6
    result_10 = result_7

*result = &data_801800
int32_t var_8_1 = 0
int32_t var_1934_1 = 1
int32_t var_8_3

if (esi == 1)
    char* result_11 = result_10
    int32_t var_28_1 = arg6
    int32_t var_8_2 = esi
    result_5 = sub_63d850(result, 
        sub_598ae0(result_5, result_5, &result_7, var_1918, var_c98, result_10.b))
    var_8_3 = 2
    
    if (data_cf65bc == 0)
        var_8_3.b = 0
    else
        result_5 = result_7
        
        if (result_5 == 0 || *result_5 == 0)
            var_8_3.b = 0
        else
            result_5 = sub_63d4e0(&result_7)
            int32_t temp0_1 = result_5[1]
            result_5[1] -= 1
            
            if (temp0_1 != 1)
                var_8_3.b = 0
            else
                result_5 = sub_64c080(result_5, result_5[3] + 0x10)
                var_8_3.b = 0
else
    char* result_8
    
    if (esi != 2)
        int32_t edi_1 = 0
        
        if (esi s> 0)
            while (true)
                char* result_13 = result_10
                int32_t var_28_5 = arg6
                sub_598ae0(result_5, result_5, &result_8, (&var_1918)[edi_1], (&var_c98)[edi_1], 
                    result_10.b)
                int32_t var_8_5 = 9
                
                if (edi_1 == 0)
                    result_5 = sub_63d850(result, &result_8)
                else if (edi_1 != arg4 - 1 || arg7 != 0)
                    char** var_24_7 = &result_8
                    var_8_5.b = 0xc
                    result_5 = sub_63d850(result, 
                        sub_599090(&result_8, result_6, &result_2, 4, "[first]", result, "[rest]"))
                    var_8_5.b = 0xd
                    
                    if (data_cf65bc != 0)
                        result_5 = result_2
                        
                        if (result_5 != 0 && *result_5 != 0)
                            result_5 = sub_63d4e0(&result_2)
                            int32_t temp4_1 = result_5[1]
                            result_5[1] -= 1
                            
                            if (temp4_1 == 1)
                                result_5 = sub_64c080(result_5, result_5[3] + 0x10)
                                result_2 = &data_801800
                else
                    char** var_24_5 = &result_8
                    var_8_5.b = 0xa
                    result_5 = sub_63d850(result, 
                        sub_599090(&result_8, result_6, &result_3, 5, "[list]", result, "[last]"))
                    var_8_5.b = 0xb
                    
                    if (data_cf65bc != 0)
                        result_5 = result_3
                        
                        if (result_5 != 0 && *result_5 != 0)
                            result_5 = sub_63d4e0(&result_3)
                            int32_t temp6_1 = result_5[1]
                            result_5[1] -= 1
                            
                            if (temp6_1 == 1)
                                result_5 = sub_64c080(result_5, result_5[3] + 0x10)
                                result_3 = &data_801800
                
                int32_t var_8_6 = 0xe
                
                if (data_cf65bc != 0)
                    result_5 = result_8
                    
                    if (result_5 != 0 && *result_5 != 0)
                        result_5 = sub_63d4e0(&result_8)
                        int32_t temp5_1 = result_5[1]
                        result_5[1] -= 1
                        
                        if (temp5_1 == 1)
                            result_5 = sub_64c080(result_5, result_5[3] + 0x10)
                            result_8 = &data_801800
                
                edi_1 += 1
                var_8_6.b = 0
                result_10 = result_7
                
                if (edi_1 s>= esi)
                    break
                
                result_5 = result_6
    else
        char* result_12 = result_10
        int32_t var_28_2 = arg6
        int32_t var_8_4 = 3
        int32_t var_28_3 = arg6
        int32_t var_1914
        int32_t var_c94
        sub_598ae0(sub_598ae0(result_5, result_5, &result_3, var_1918, var_c98, result_10.b), 
            result_6, &result_8, var_1914, var_c94, result_7.b)
        char** var_24_2 = &result_8
        var_8_4.b = 4
        var_8_4.b = 5
        result_5 = sub_63d850(result, 
            sub_599090(&result_3, result_6, &result_7, 3, "[one]", &result_3, "[another]"))
        var_8_4.b = 6
        
        if (data_cf65bc != 0)
            result_5 = result_7
            
            if (result_5 != 0 && *result_5 != 0)
                result_5 = sub_63d4e0(&result_7)
                int32_t temp1_1 = result_5[1]
                result_5[1] -= 1
                
                if (temp1_1 == 1)
                    result_5 = sub_64c080(result_5, result_5[3] + 0x10)
        
        var_8_4.b = 7
        
        if (data_cf65bc != 0)
            result_5 = result_8
            
            if (result_5 != 0 && *result_5 != 0)
                result_5 = sub_63d4e0(&result_8)
                int32_t temp2_1 = result_5[1]
                result_5[1] -= 1
                
                if (temp2_1 == 1)
                    result_5 = sub_64c080(result_5, result_5[3] + 0x10)
                    result_8 = &data_801800
        
        var_8_3 = 8
        
        if (data_cf65bc != 0)
            result_5 = result_3
            
            if (result_5 != 0 && *result_5 != 0)
                result_5 = sub_63d4e0(&result_3)
                int32_t temp3_1 = result_5[1]
                result_5[1] -= 1
                
                if (temp3_1 == 1)
                    result_5 = sub_64c080(result_5, result_5[3] + 0x10)
        
        var_8_3.b = 0

if (result_6 == 0x11)
    sub_692c20(result_5, result, 0x11, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
