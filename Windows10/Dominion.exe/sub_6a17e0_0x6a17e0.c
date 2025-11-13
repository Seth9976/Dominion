// 函数: sub_6a17e0
// 地址: 0x6a17e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f4c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** result = arg1
int32_t* result_1 = result
int32_t var_14 = 0
int32_t var_8_1 = 1
char* _Str1_8
char* _Str1_4 = _Str1_8

if (_Str1_4 == 0 || *_Str1_4 == 0)
label_6a1b99:
    *result = _Str1_4
    
    if (_Str1_4 != 0 && *_Str1_4 != 0)
        char* eax_24 = sub_63d4e0(result)
        *(eax_24 + 4) += 1
        _Str1_4 = _Str1_8
    
    int32_t var_14_8 = 1
    int32_t var_8_7 = 2
label_6a1b48:
    
    if (data_cf65bc != 0 && _Str1_4 != 0 && *_Str1_4 != 0)
        char* eax_22 = sub_63d4e0(&_Str1_8)
        int32_t temp0_1 = *(eax_22 + 4)
        *(eax_22 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
else
    bool cond:0_1 = *(sub_63d4e0(&_Str1_8) + 8) == 0
    _Str1_4 = _Str1_8
    
    if (cond:0_1)
        goto label_6a1b99
    
    char* const _Str1_17 = &data_801800
    char* const _Str1 = &data_801800
    
    if (_Str1_4 != 0)
        _Str1 = _Str1_4
    
    bool cond:2_1 = strncmp(_Str1, "./", 2) != 0
    char* _Str1_9 = _Str1_8
    char* _Str1_19
    
    if (cond:2_1)
        char* const _Str1_14 = &data_801800
        
        if (_Str1_9 != 0)
            _Str1_14 = _Str1_9
        
        int32_t eax_11 = strchr(_Str1_14, 0x5c)
        int32_t eax_12
        
        if (eax_11 == 0)
            char* _Str1_11 = _Str1_8
            char* _Str1_15 = &data_801800
            
            if (_Str1_11 != 0)
                _Str1_15 = _Str1_11
            
            eax_12 = strchr(_Str1_15, 0x2f)
        
        if (eax_11 != 0 || eax_12 != 0)
            char* _Str1_5 = _Str1_8
            char* _Str1_1 = &data_801800
            
            if (_Str1_5 != 0)
                _Str1_1 = _Str1_5
            
            if (_strnicmp(_Str1_1, "sys", 3) == 0)
            label_6a1b1f:
                _Str1_4 = _Str1_8
                *result = _Str1_4
                
                if (_Str1_4 != 0 && *_Str1_4 != 0)
                    char* eax_21 = sub_63d4e0(result)
                    *(eax_21 + 4) += 1
                    _Str1_4 = _Str1_8
                
                int32_t var_14_7 = 1
                int32_t var_8_6 = 9
                goto label_6a1b48
            
            char* _Str1_6 = _Str1_8
            char* _Str1_2 = &data_801800
            
            if (_Str1_6 != 0)
                _Str1_2 = _Str1_6
            
            if (_strnicmp(_Str1_2, "res", 3) == 0)
                goto label_6a1b1f
            
            char* _Str1_7 = _Str1_8
            char* _Str1_3 = &data_801800
            
            if (_Str1_7 != 0)
                _Str1_3 = _Str1_7
            
            if (_strnicmp(_Str1_3, "xbin", 4) == 0)
                goto label_6a1b1f
        
        char* _Str1_20 = *data_147d094
        _Str1_19 = _Str1_20
        
        if (_Str1_20 != 0 && *_Str1_20 != 0)
            char* eax_16 = sub_63d4e0(&_Str1_19)
            *(eax_16 + 4) += 1
        
        int32_t var_14_4 = 8
        var_8_1.b = 0xb
        *result = _Str1_20
        
        if (_Str1_20 != 0 && *_Str1_20 != 0)
            char* eax_17 = sub_63d4e0(result)
            *(eax_17 + 4) += 1
        
        char* _Str1_12 = _Str1_8
        int32_t var_14_5 = 0x18
        
        if (_Str1_12 != 0)
            _Str1_17 = _Str1_12
        
        sub_63d960(result, _Str1_17)
        int32_t var_8_4 = 0xa
        int32_t var_14_6 = 9
        var_8_4.b = 0xc
        
        if (data_cf65bc != 0 && _Str1_20 != 0 && *_Str1_20 != 0)
            char* eax_18 = sub_63d4e0(&_Str1_19)
            int32_t temp4_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
        
        int32_t var_8_5 = 0xd
        
        if (data_cf65bc != 0)
            char* _Str1_13 = _Str1_8
            
            if (_Str1_13 != 0 && *_Str1_13 != 0)
                char* eax_19 = sub_63d4e0(&_Str1_8)
                int32_t temp6_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
    else
        char* _Str1_16 = &data_801800
        
        if (_Str1_9 != 0)
            _Str1_16 = _Str1_9
        
        if (_Str1_16 == 0xfffffffe)
            sub_63b870(_Str1_9, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_63d720(&_Str1_19, &_Str1_16[2])
        var_8_1.b = 3
        char* esi_2 = *data_147d094
        char* var_1c = esi_2
        
        if (esi_2 != 0 && *esi_2 != 0)
            char* eax_5 = sub_63d4e0(&var_1c)
            *(eax_5 + 4) += 1
        
        int32_t var_14_1 = 2
        var_8_1.b = 5
        *result = esi_2
        
        if (esi_2 != 0 && *esi_2 != 0)
            char* eax_6 = sub_63d4e0(result)
            *(eax_6 + 4) += 1
        
        char* _Str1_18 = _Str1_19
        
        if (_Str1_18 != 0)
            _Str1_17 = _Str1_18
        
        int32_t var_14_2 = 6
        sub_63d960(result_1, _Str1_17)
        int32_t var_8_2 = 4
        int32_t var_14_3 = 3
        var_8_2.b = 6
        
        if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
            char* eax_7 = sub_63d4e0(&var_1c)
            int32_t temp2_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
        
        var_8_2.b = 7
        
        if (data_cf65bc != 0 && _Str1_18 != 0 && *_Str1_18 != 0)
            char* eax_8 = sub_63d4e0(&_Str1_19)
            int32_t temp3_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        
        int32_t var_8_3 = 8
        
        if (data_cf65bc != 0)
            char* _Str1_10 = _Str1_8
            
            if (_Str1_10 != 0 && *_Str1_10 != 0)
                char* eax_9 = sub_63d4e0(&_Str1_8)
                int32_t temp5_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        
        result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
