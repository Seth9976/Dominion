// 函数: sub_6c5700
// 地址: 0x6c5700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$ThreadProxyFactory@VFreeThreadProxy@details@Concurrency@@@details@Concurrency@@IAE@PAVThreadProxyFactoryManager@12@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_28 = &data_147cf90
char const* const var_2c = "%s/res/"
char* result_1
char** result_3 = &result_1
char** result_5 = sub_63df30(result_3, var_2c)
int32_t var_28_1 = arg2
int32_t var_8_1 = 0
char* result_2 = result_1
result_3 = result_5
result_3 = result_2

if (result_2 != 0 && *result_2 != 0)
    char* eax_3 = sub_63d4e0(&result_3)
    *(eax_3 + 4) += 1

char* result
int32_t ebx

if (sub_6c5520(result_3, arg1).b == 0)
    int32_t var_28_2 = 0x147d098
    char const* const var_2c_2 = "%s/sys/"
    char* result_7
    result_3 = &result_7
    char** result_6 = sub_63df30(result_3, var_2c_2)
    int32_t var_28_3 = arg2
    var_8_1.b = 1
    int32_t var_2c_3 = arg1
    char* result_4 = result_7
    result_3 = result_6
    result_3 = result_4
    
    if (result_4 != 0 && *result_4 != 0)
        char* eax_4 = sub_63d4e0(&result_3)
        *(eax_4 + 4) += 1
    
    ebx:1.b = sub_6c5520().b
    var_8_1.b = 2
    ebx.b = ebx:1.b
    
    if (data_cf65bc != 0)
        char* result_8 = result_7
        
        if (result_8 == 0 || *result_8 == 0)
            ebx.b = ebx:1.b
        else
            result = sub_63d4e0(&result_7)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
                result_7 = &data_801800
                ebx.b = ebx:1.b
else
    ebx.b = 1

int32_t var_8_2 = 3

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
