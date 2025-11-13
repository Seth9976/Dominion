// 函数: sub_773cb0
// 地址: 0x773cb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??1_UShinit@std@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5dfdb0(&data_be35b4)
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_5dfdb0(&data_be35a4)
int32_t var_8_1 = 0

if (data_be3598 != 0)
    sub_6378e0(&data_be3598)
    result = sub_64c080(data_be3598, (data_be359c << 2) + 4)
    data_be3598 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
