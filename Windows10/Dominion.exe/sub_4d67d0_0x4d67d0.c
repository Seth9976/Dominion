// 函数: sub_4d67d0
// 地址: 0x4d67d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_legendref@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0

if (arg1[3] != 0)
    sub_4db2a0(&arg1[3])
    result = sub_64c080(arg1[3], (arg1[4] << 2) + 4)
    arg1[3] = 0

int32_t var_8_2 = 1

if (*arg1 != 0)
    sub_4db260(arg1)
    result = sub_64c080(*arg1, (arg1[1] << 2) + 4)
    *arg1 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
