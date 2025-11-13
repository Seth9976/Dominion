// 函数: ??1exception@boost@@MAE@XZ
// 地址: 0x6b85e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$_Deallocate@$03$0A@@std@@YAXPAXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t result = sub_6c3440(arg1 + 0x2d0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
