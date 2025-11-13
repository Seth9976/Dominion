// 函数: sub_69dec0
// 地址: 0x69dec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$___dcrt_uninitialize_environments_nolock
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
FILE** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
char* result_2 = result_1
void* const _Mode

if (result_2 == 0)
    _Mode = &data_8723c4
else
    if (result_2 != 1)
        sub_63b870(result_2 - 1, &data_801800, "Halt", "C:\x\ax2017\Engine\xPlatformGeneric.cpp", 
            0x69, "HalOpen")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    _Mode = &data_878be8

int32_t* edx
sub_69ddf0(&result_1, edx)
char* _FileName_1 = result_1
char* const _FileName = &data_801800

if (_FileName_1 != 0)
    _FileName = _FileName_1

FILE* result = fopen(_FileName, _Mode)
*arg1 = result
arg1[1] = 0

if (result == 0)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && result->_Placeholder.b != 0)
            result = sub_63d4e0(&result_1)
            
            if (result == 1)
                sub_64c080(result - 1, result + 0xf)
    
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t var_8_1 = 0

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && result->_Placeholder.b != 0)
        result = sub_63d4e0(&result_1)
        
        if (result == 1)
            sub_64c080(result - 1, result + 0xf)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
