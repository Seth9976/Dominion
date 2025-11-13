// 函数: sub_6ac740
// 地址: 0x6ac740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lock_and_call@V<lambda_76b7ce3881063c72d9d9c3f590a24f96>@@@@YAHW4__acrt_lock_id@@$$QAV<lambda_76b7ce3881063c72d9d9c3f590a24f96>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_2c = 0x10
int32_t var_8_1 = 0
int32_t* eax_3 = _aligned_malloc(0x50, var_2c)
char* result_5

if (eax_3 == 0)
    var_2c = "XMalloc"
    int32_t var_30_2 = 0x57
    result_5 = "C:\x\ax2017\Engine\xMemory.cpp"
    sub_63b870(eax_3, &data_801800, "pBuffer", result_5, var_30_2, var_2c)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_69ca80(eax_3, data_17774e8)
int32_t* eax_4
char* ecx_3
eax_4, ecx_3 = sub_6a4880(arg2[1], data_17774e4)
var_2c = ecx_3

if (arg1 == 0)
    char const* const var_30_3 = "XString::XString"
    result_5 = 0x94
    sub_63b870(arg1, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", result_5, var_30_3)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(&var_2c, arg1)
int32_t** result_1
sub_63e330(&result_1)
var_8_1.b = 1
char* const result_6 = &data_801800
int32_t** _Str1_1 = result_1
char* const _Str1 = &data_801800
uint32_t _MaxCount = 7

if (_Str1_1 != 0)
    _Str1 = _Str1_1

result_5 = "skybox_"
int32_t eax_6
char* result_7
int32_t edx_3
eax_6, edx_3, result_7 = strncmp(_Str1, result_5, _MaxCount)
int32_t eax_7

if (eax_6 != 0)
    int32_t** result_3 = result_1
    var_2c = 8
    
    if (result_3 != 0)
        result_6 = result_3
    
    char const* const _Str2 = "cubemap_"
    result_5 = result_6
    eax_7, edx_3, result_7 = strncmp(result_5, _Str2, var_2c)

if (eax_6 == 0 || eax_7 == 0)
    eax_4[4] = 1

char* result_2
char* result_4 = result_2
var_2c = eax_4
result_5 = result_7
result_5 = result_4

if (result_4 != 0 && *result_4 != 0)
    result_4 = sub_63d4e0(&result_5)
    *(result_4 + 4) += 1

result_6.b = sub_6ac5c0(result_4, edx_3, arg1, result_5, eax_3)
sub_69cee0(eax_4, data_17774e4)

if (result_6.b != 0)
    result_6.b = 1
    **arg2 = eax_3
else
    var_2c = eax_3
    _aligned_free(var_2c)

var_8_1.b = 2
int32_t** result

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, &result[3][4])
            result_1 = &data_801800

int32_t var_8_2 = 3

if (data_cf65bc != 0)
    result = result_2
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_2)
        int32_t temp1_1 = result[1]
        result[1] -= 1
        
        if (temp1_1 == 1)
            sub_64c080(result, &result[3][4])

result.b = result_6.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
