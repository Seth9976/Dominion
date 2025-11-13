// 函数: sub_773dc0
// 地址: 0x773dc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0_Blocking_recipient@?1???$_Receive_impl@I@Concurrency@@YAIPAV?$ISource@I@1@IPBV?$function@$$A6A_NABI@Z@std@@@Z@QAE@0I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    result = data_1a94e5c
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&data_1a94e5c)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, &result[3][2])
            data_1a94e5c = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
