// 函数: sub_732250
// 地址: 0x732250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7729bd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* eax_3 = _aligned_malloc(0x70, 0x10)

if (eax_3 == 0)
    sub_63b870(eax_3, &data_801800, "pBuffer", "C:\x\ax2017\Engine\xMemory.cpp", 0x57, "XMalloc")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_69ca80(eax_3, data_1777538)
char* result_1
char* result_2 = result_1
char* const result_6 = &data_801800
char* const result_5 = &data_801800

if (result_2 != 0)
    result_5 = result_2

char* _Str1 = strrchr(result_5, 0x2e)
int32_t eax_4

if (_Str1 != 0)
    eax_4 = _stricmp(_Str1, ".fbx")

char const* const var_28_2

if (_Str1 == 0 || eax_4 != 0)
    char* result_4 = result_1
    
    if (result_4 != 0)
        result_6 = result_4
    
    char* const result_8 = result_6
    var_28_2 = "unknown structure type '%s'"
else
    char* result_3 = result_1
    
    if (result_3 != 0)
        result_6 = result_3
    
    char* const result_7 = result_6
    var_28_2 = "structure reimport failed to read '%s'"

sub_63b5f0(var_28_2)
_aligned_free(eax_3)
int32_t var_8_2 = 1
char* result

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
