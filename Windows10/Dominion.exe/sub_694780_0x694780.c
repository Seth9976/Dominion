// 函数: sub_694780
// 地址: 0x694780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ef5d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_30 = 0
int64_t var_18 = 0
FILE* result
void* ebx

if (sub_69dec0(&var_18).b == 0)
    ebx.b = 0
else
    FILE* _Stream = var_18.d
    fseek(_Stream, 0, 2)
    var_18:4.d = ftell(_Stream)
    
    if (fseek(_Stream, 0, 0) != 0)
        ebx.b = 0
    else
        uint32_t _ElementSize = var_18:4.d
        result = fread(arg1, _ElementSize, 1, _Stream)
        
        if (result != 1)
            ebx.b = 0
        else if (sub_695870(result, arg1, arg1, arg2, nullptr, _ElementSize).b == 0)
            ebx.b = 0
        else
            fclose(_Stream)
            ebx.b = 1

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    FILE* result_1
    result = result_1
    
    if (result != 0 && result->_Placeholder.b != 0)
        result = sub_63d4e0(&result_1)
        
        if (result == 1)
            sub_64c080(result - 1, result + 0xf)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
