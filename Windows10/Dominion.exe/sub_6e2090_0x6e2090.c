// 函数: sub_6e2090
// 地址: 0x6e2090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7711e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_14 = 0
int32_t var_28
sub_6e1e60(&ExceptionList, arg2, &var_28, sub_6e2050)
int32_t var_8_1 = 1
int32_t esi = var_28
char* _String_2
char* _String_3

if (esi == 2 || esi == 3 || esi == 4)
    uint32_t eax_6 = sub_6e1920(arg2)
    
    if (esi != 4)
        sub_63b870(eax_6, &data_801800, "result.result == UIPARSERESULT_SUCCESS_STRING", 
            "C:\x\ax2017\Engine\UI2Expr.cpp", 0x131, "parse_hex_literal")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    char* _String_1 = _String_2
    char* _String = &data_801800
    
    if (_String_1 != 0)
        _String = _String_1
    
    int32_t eax_7 = atoi(_String)
    int32_t* eax_8 = sub_6e17c0(*arg2)
    int32_t var_14_2 = 1
    *eax_8 = 2
    eax_8[1] = eax_7
    arg1[2] = &data_801800
    *arg1 = 3
    arg1[1] = eax_8
    int32_t var_8_3 = 3
    
    if (data_cf65bc != 0)
        _String_3 = _String_2
    label_6e2193:
        
        if (_String_3 != 0 && *_String_3 != 0)
            char* eax_9 = sub_63d4e0(&_String_2)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
else
    int32_t var_24
    arg1[1] = var_24
    _String_3 = _String_2
    *arg1 = esi
    arg1[2] = _String_3
    
    if (_String_3 != 0 && *_String_3 != 0)
        char* eax_5 = sub_63d4e0(&arg1[2])
        *(eax_5 + 4) += 1
        _String_3 = _String_2
    
    int32_t var_14_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cf65bc != 0)
        goto label_6e2193
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
