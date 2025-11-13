// 函数: sub_5caf20
// 地址: 0x5caf20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$_Deallocate@$03$0A@@std@@YAXPAXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    result = *arg1
    
    if (result != 0)
        int32_t edx_1 = arg1[2]
        arg1[1] = 0
        result = sub_64c080(result, edx_1 << 3)

fsbase->NtTib.ExceptionList = ExceptionList
return result
