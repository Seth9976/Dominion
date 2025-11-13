// 函数: sub_773fa0
// 地址: 0x773fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?GetNodeCount@ResourceManager@details@Concurrency@@SAIXZ
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
    result = data_bf23d4
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&data_bf23d4)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, &result[3][2])
            data_bf23d4 = &data_801800

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = data_bf23c4
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&data_bf23c4)
        int32_t temp1_1 = result[1]
        result[1] -= 1
        
        if (temp1_1 == 1)
            result = sub_64c080(result, &result[3][2])
            data_bf23c4 = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
