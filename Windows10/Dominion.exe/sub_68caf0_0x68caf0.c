// 函数: sub_68caf0
// 地址: 0x68caf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Move@?$_Func_impl_no_alloc@V<lambda_1>@?1??wait_for_all@agent@Concurrency@@SAXIPAPAV34@PAW4agent_status@4@I@Z@XABI@std@@EAEPAV?$_Func_base@XABI@2@PAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_1c = esi
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_147abfc == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

char* var_14
sub_68bd30(&ExceptionList, arg3, &var_14, arg2)
char* const ecx_3 = &data_801800
int32_t var_8_1 = 0
char* eax_5 = var_14

if (eax_5 != 0)
    ecx_3 = eax_5

void* result = sub_68c730(ecx_3, arg4, esi)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* ecx_4 = var_14
    
    if (ecx_4 != 0 && *ecx_4 != 0)
        char* eax_6 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
