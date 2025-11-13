// 函数: sub_6c8de0
// 地址: 0x6c8de0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770675
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = arg2
char* result_3
char* result_6 = result_3
int32_t esi = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (result_6 s> 0)
    while (true)
        char* eax_3 = *(arg2 + (esi << 2))
        
        if (*eax_3 != 0x3d)
            char* var_34_2 = eax_3
            sub_63df30(&result_3, "%s_")
            int32_t var_8_1 = 0
            char* _Str2_1 = result_3
            uint32_t _MaxCount
            
            if (_Str2_1 == 0 || *_Str2_1 == 0)
                _MaxCount = 0
            else
                _MaxCount = *(sub_63d4e0(&result_3) + 8)
                _Str2_1 = result_3
            
            char* _Str2 = &data_801800
            
            if (_Str2_1 != 0)
                _Str2 = _Str2_1
            
            if (_strnicmp(arg1, _Str2, _MaxCount) == 0)
            label_6c9043:
                int32_t var_8_4 = 4
                
                if (data_cf65bc != 0)
                    result = result_3
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_3)
                        int32_t temp0_1 = result[1]
                        result[1] -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(result, &result[3][2])
                
                goto label_6c907a
            
            int32_t var_34_4 = *(var_1c + (esi << 2))
            char* result_1
            sub_63df30(&result_1, "_%s_")
            var_8_1.b = 1
            char* const result_7 = &data_801800
            char* result_4 = result_1
            
            if (result_4 != 0)
                result_7 = result_4
            
            if (strstr(arg1, result_7) != 0)
            label_6c9008:
                var_8_1.b = 3
                
                if (data_cf65bc != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp1_1 = result[1]
                        result[1] -= 1
                        
                        if (temp1_1 == 1)
                            sub_64c080(result, &result[3][2])
                            result_1 = &data_801800
                
                goto label_6c9043
            
            int32_t var_34_5 = *(var_1c + (esi << 2))
            uint8_t* result_2
            sub_63df30(&result_2, "_%s.")
            uint8_t* result_5 = result_2
            uint8_t* result_8 = &data_801800
            
            if (result_5 != 0)
                result_8 = result_5
            
            result = strstr(arg1, result_8)
            
            if (result != 0)
                var_8_1.b = 2
                
                if (data_cf65bc != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_2)
                        int32_t temp2_1 = result[1]
                        result[1] -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(result, &result[3][2])
                            result_2 = &data_801800
                
                goto label_6c9008
            
            var_8_1.b = 5
            
            if (data_cf65bc != result)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_2)
                    int32_t temp3_1 = result[1]
                    result[1] -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(result, &result[3][2])
                        result_2 = &data_801800
            
            var_8_1.b = 6
            
            if (data_cf65bc != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_1)
                    int32_t temp4_1 = result[1]
                    result[1] -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(result, &result[3][2])
                        result_1 = &data_801800
            
            int32_t var_8_2 = 7
            
            if (data_cf65bc != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_3)
                    int32_t temp5_1 = result[1]
                    result[1] -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(result, &result[3][2])
                        result_3 = &data_801800
            
            int32_t var_8_3 = 0xffffffff
        else if (_stricmp(arg1, &eax_3[1]) == 0)
        label_6c907a:
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        esi += 1
        
        if (esi s>= result_6)
            break
        
        arg2 = var_1c

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
