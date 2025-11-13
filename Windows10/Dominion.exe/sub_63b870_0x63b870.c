// 函数: sub_63b870
// 地址: 0x63b870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xfffffffe
int32_t var_c = 0x8b8588
enum _EXCEPTION_DISPOSITION (* var_10)(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, 
    struct _CONTEXT* arg3, int32_t arg4) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_c_1 = var_c ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_858 = __security_cookie_1 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = &var_858
int32_t var_85c = arg5
int32_t var_860 = arg4
int32_t var_864 = arg6
int32_t var_868 = arg2
char var_420

if (*arg3 == 0)
    sub_63b5d0(&var_420, 0x400, "\nassertion failed\n%s\n%s (%s:%d)\n")
else
    char* var_86c_1 = arg3
    sub_63b5d0(&var_420, 0x400, "\nassertion failed '%s'\n%s\n%s (%s:%d)\n")

if (IsDebuggerPresent() == 1)
    uint32_t result = OutputDebugStringA(&var_420)
    fsbase->NtTib.ExceptionList = ExceptionList
    CookieCheckFunction(result)
    return result

BOOL _Stream = data_cf64ac

if (_Stream != 0)
label_63b934:
    data_cf64ac = _Stream
    char* ecx = &var_420
    BOOL eax_3
    
    do
        eax_3.b = *ecx
        ecx = &ecx[1]
    while (eax_3.b != 0)
    void var_41f
    
    if (fwrite(&var_420, ecx - &var_41f, 1, _Stream) != 1)
        OutputDebugStringA("Failed to write to log file\n")
    
    fflush(_Stream)
else
    sub_69db50(&data_cf64b0)
    _Stream = fopen(&data_cf64b0, U"a")
    
    if (_Stream != 0)
        goto label_63b934
    
    OutputDebugStringA("Failed to open log file\n")

int32_t var_8_1 = 0
RaiseException(0xc0000025, 1, 0, nullptr)
noreturn
