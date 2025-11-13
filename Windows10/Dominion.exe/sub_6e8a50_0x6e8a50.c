// 函数: sub_6e8a50
// 地址: 0x6e8a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0ThreadProxyFactoryManager@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* const result_3 = &data_801800
int32_t** result_1
int32_t** result_2 = result_1

if (result_2 != 0)
    result_3 = result_2

int32_t** result = sub_6a70c0(result_2, result_3, data_1777580, 0, nullptr)
int32_t ebx

if (result != 0)
    sub_6a3220(arg1[1])
    int32_t* edx = *arg1
    arg1[1] = 0
    sub_6e8290(*result, edx)
    sub_69cee0(*result, result[3])
    sub_6a3220(result[1])
    _aligned_free(result)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, &result[3][4])

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
