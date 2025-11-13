// 函数: sub_773990
// 地址: 0x773990
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1SubAllocator@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_51e1b0(&data_1597e18)
int32_t var_8_2 = 1
sub_51e220(&data_1597e0c)
int32_t var_8_3 = 2
sub_51e220(&data_1597e00)
int32_t var_8_4 = 3
sub_51e1b0(&data_1597df4)
int32_t var_8_5 = 4
sub_51e1b0(&data_1597de8)
int32_t var_8_6 = 5
sub_51e1b0(&data_1597ddc)
int32_t var_8_7 = 6
int32_t result = sub_51e1b0(&data_1597dd0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
